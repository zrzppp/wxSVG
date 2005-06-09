##############################################################################
## Name:        genCSS.py
## Purpose:     generates CSSStyleDeclaration
## Author:      Alex Thuering
## Created:     2005/06/06
## RCS-ID:      $Id: genCSS.py,v 1.2 2005-06-09 00:18:21 ntalex Exp $
## Copyright:   (c) 2005 Alex Thuering
##############################################################################

import config
import string
import cpp
import cppHeader
import cppImpl
import sys
from xml.dom.ext.reader import Sax2

class Attribute:
    def __init__(self, dtdName, name, cssType, valueType, function, defValue):
        self.dtdName = dtdName
        self.name = name
        self.cssType = cssType
        self.valueType = valueType
        self.function = function
        self.defValue = defValue

## cssType, valueType, getFunction, name, dtdName, defValue
attibutes = [
Attribute('clip-path', 'ClipPath', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('color', 'Color', 'wxCSSPrimitiveValue', 'wxRGBColor', 'RGBColorValue', 'wxRGBColor()'),
Attribute('display', 'Display', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("inline")'),
Attribute('fill', 'Fill', 'wxSVGPaint', 'wxSVGPaint', '', '*s_blackSVGPaint'),
Attribute('fill-opacity', 'FillOpacity', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '1'),
Attribute('fill-rule', 'FillRule', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("nonzero")'),
Attribute('filter', 'Filter', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('font-family', 'FontFamily', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('font-size', 'FontSize', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '20'),
Attribute('font-stretch', 'FontStretch', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('font-style', 'FontStyle', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('font-variant', 'FontVariant', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('font-weight', 'FontWeight', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('marker', 'Marker', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('marker-end', 'MarkerEnd', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("none")'),
Attribute('marker-mid', 'MarkerMid', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("none")'),
Attribute('marker-start', 'MarkerStart', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("none")'),
Attribute('opacity', 'Opacity', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '1'),
Attribute('stop-color', 'StopColor', 'wxSVGColor', 'wxSVGColor', '', '*s_emptySVGColor'),
Attribute('stop-opacity', 'StopOpacity', 'wxCSSPrimitiveValue', 'double', 'FloatValue', ' 1'),
Attribute('stroke', 'Stroke', 'wxSVGPaint', 'wxSVGPaint', '', '*s_emptySVGPaint'),
##Attribute('stroke-dasharray', 'StrokeDasharray', 'wxCSSValueList', 'wxCSSValueList', '', 'wxCSSValueList()'),
Attribute('stroke-dashoffset', 'StrokeDashoffset', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '0'),
Attribute('stroke-linecap', 'StrokeLinecap', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("butt")'),
Attribute('stroke-linejoin', 'StrokeLinejoin', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("miter")'),
Attribute('stroke-miterlimit', 'StrokeMiterlimit', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '4'),
Attribute('stroke-opacity', 'StrokeOpacity', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '1'),
Attribute('stroke-width', 'StrokeWidth', 'wxCSSPrimitiveValue', 'double', 'FloatValue', '1'),
Attribute('text-anchor', 'TextAnchor', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("")'),
Attribute('visibility', 'Visibility', 'wxCSSPrimitiveValue', 'wxString', 'StringValue', 'wxT("visible")')]

def propId(name):
    return 'wxCSS_PROPERTY_' + string.upper(cpp.make_name(name))
    
def generate():
    genCSSStyleDeclaration()
    genStyles()
    genValues()

######################### CSSStyleDeclaration.h ##############################
def genCSSStyleDeclaration():
    enum = ''
    for attr in attibutes:
        if (len(enum)):
            enum = enum + ',\n'
        enum = enum + '  ' + propId(attr.dtdName)
    
    methods = ''
    for attr in attibutes:
        valueType = attr.valueType
        get = '((%s&)*it->second)'%attr.cssType
        if len(attr.function):
            get = get + '.Get' + attr.function + '()'
        else:
            valueType = "const " + valueType + "&"
        get = '''\
    inline %s Get%s()
    {
      iterator it = find(%s);
      return it != end() ? %s : %s;
    }
    '''%(valueType, attr.name, propId(attr.dtdName), get, attr.defValue)
        
        has = 'inline bool Has%s() { return HasProperty(%s); }\n'%(attr.name, propId(attr.dtdName))
        
        if len(attr.function):
            valueType = attr.valueType
            if valueType not in cpp.builtin_types:
                valueType = "const " + valueType + "&"
            ptype = ""
            if attr.valueType == "wxString":
                ptype = "wxCSS_STRING, "
            elif attr.valueType == "double":
                ptype = "wxCSS_NUMBER, "
            set = '''\
    inline void Set%s(%s value)
    {
      iterator it = find(%s);
      %s* cssValue = NULL;
      if (it != end())
        cssValue = (%s*)it->second;
      else
      {
        cssValue = new %s;
        (*this)[%s] = cssValue;
      }
      cssValue->Set%s(%svalue);
    }
    '''%(attr.name, valueType, propId(attr.dtdName), attr.cssType, attr.cssType, attr.cssType, propId(attr.dtdName), attr.function, ptype)
        else:
            set = '''\
    inline void Set%s(const %s& value)
    {
      iterator it = find(%s);
      if (it != end())
      {
        delete it->second;
        it->second = new %s(value);
      }
      else
        (*this)[%s] = new %s(value);
    }
    '''%(attr.name, attr.valueType, propId(attr.dtdName), attr.valueType, propId(attr.dtdName), attr.valueType)
            
        
        if len(methods):
            methods = methods + '\n\n';
        methods = methods + get + has + set;
        
    output = '''
#include "CSSValue.h"
#include "SVGPaint.h"
#include <wx/hashmap.h>

enum wxCSS_PROPERTY
{
  wxCSS_PROPERTY_UNKNOWN,
%s
};

WX_DECLARE_HASH_MAP(wxCSS_PROPERTY, wxCSSValue*, wxIntegerHash, wxIntegerEqual, wxHashMapCSSValue);

typedef wxString wxCSSStyler;

class wxCSSStyleDeclaration: public wxHashMapCSSValue
{
  public:
    wxCSSStyleDeclaration() {}
    void Add(wxCSSStyleDeclaration& style);

  public:
    wxString GetCSSText();
    void SetCSSText(const wxString& text);
    
    inline wxString GetPropertyValue(const wxString& propertyName)
    { return GetPropertyValue(GetPropertyId(propertyName)); }
    
    inline const wxCSSValue& GetPropertyCSSValue(const wxString& propertyName)
    { return GetPropertyCSSValue(GetPropertyId(propertyName)); }
    
    inline wxString RemoveProperty(const wxString& propertyName)
    { return RemoveProperty(GetPropertyId(propertyName)); }
      
    void SetProperty(const wxString& propertyName, const wxString& value)
    { SetProperty(GetPropertyId(propertyName), value); }
    
    inline bool HasProperty(const wxString& propertyName)
    { return HasProperty(GetPropertyId(propertyName)); }
  
  public:
    inline wxString GetPropertyValue(wxCSS_PROPERTY propertyId)
    { iterator it = find(propertyId); if (it != end()) return it->second->GetCSSText(); return wxT(""); }
    
    inline const wxCSSValue& GetPropertyCSSValue(wxCSS_PROPERTY propertyId)
    { iterator it = find(propertyId); if (it != end()) return *it->second; return *s_emptyCSSValue; }
    
    inline wxString RemoveProperty(wxCSS_PROPERTY propertyId)
    { erase(propertyId); return wxT(""); }
      
    void SetProperty(wxCSS_PROPERTY propertyId, const wxString& value);
    
    inline bool HasProperty(wxCSS_PROPERTY propertyId)
    { return find(propertyId) != end(); }
    
    static wxCSS_PROPERTY GetPropertyId(const wxString& propertyName);
    
    static wxString GetPropertyName(wxCSS_PROPERTY propertyId);
  
  public:
%s
  protected:
    static wxCSSValue* s_emptyCSSValue;
    static wxSVGColor* s_emptySVGColor;
    static wxSVGPaint* s_emptySVGPaint;
    static wxSVGPaint* s_blackSVGPaint;
    static double ParseNumber(const wxString& value);
    static wxRGBColor ParseColor(const wxString& value);
    static void ParseSVGPaint(wxSVGPaint& paint, const wxString& value);
};'''%(enum, methods) 
    
    header = cppHeader.Header("CSSStyleDeclaration", "genCSS.py")
    header.add_content(output)
    header.dump(path=config.include_dir)

####################### CSSStyleDeclaration_styles.h #########################
def genStyles():
    properties = ''
    for attr in attibutes:
        if len(properties):
            properties = properties + ',\n'
        properties = properties + '  wxT("%s")'%attr.dtdName
    
    output = '''
wxString s_cssPropertyStrings[] = 
{
%s
};
    '''%properties
    
    impl = cppImpl.Impl("css_properties", "genCSS.py")
    impl.add_content(output)
    impl.dump(path=config.src_dir)

############################### CSSValues.h ##################################
cssValues = []
cssProperties = {}
def parseCSSProps():
    reader = Sax2.Reader()
    doc = reader.fromStream(config.share_dir + "/CSS21propidx.html")
    table = doc.getElementsByTagName('HTML')[0].getElementsByTagName('BODY')[0].getElementsByTagName('table')[0]
    for tr in table.childNodes:
        if tr.nodeName == "tr":
            attrName = ''
            attrValue = ''
            i = 0
            for td in tr.childNodes:
                if td.nodeName == "td":
                    i = i + 1
                    if i == 1:
                        attrName = td.childNodes[0].childNodes[0].childNodes[0].nodeValue
                    else:
                        for child in td.childNodes:
                            if child.nodeName == "#text":
                                attrValue = attrValue + child.nodeValue
                        break
            while 1:
                beg = attrValue.find("{")
                end = attrValue.find("}")
                if beg != -1 and end != -1 and beg < end:
                    attrValue = attrValue[:beg] + attrValue[end+1:]
                else:
                    break
            tmp = ''
            for c in attrValue:
                if c in string.ascii_letters or c in string.digits or c in "|-_":
                    tmp = tmp + c
            attrValue = tmp
            cssProperties[attrName] = []
            for val in attrValue.split('|'):
                if len(val) and val not in cssValues:
                    cssValues.append(val)
                if len(val) and val not in cssProperties[attrName]:
                    cssProperties[attrName].append(val)
    cssValues.sort()
    
def genValues():
    parseCSSProps()
    
    values = ''
    for value in cssValues:
        if len(values):
            values = values + ',\n'
        values = values + '  wxCSS_VALUE_%s'%cpp.make_name(value).upper()
    
    output = '''\
enum wxCSS_VALUE
{
  wxCSS_VALUE_UNKNOWN,
%s
};'''%values
    
    header = cppHeader.Header("CSSValues", "genCSS.py")
    header.add_content(output)
    header.dump(path=config.include_dir)
    
    values = ''
    for value in cssValues:
        if len(values):
            values = values + ',\n'
        values = values + '  wxT("%s")'%value
    
    output = '''\
wxString s_cssValueStrings[] =
{
%s
};'''%values
    impl = cppImpl.Impl("css_values", "genCSS.py")
    impl.add_content(output)
    impl.dump(path=config.src_dir)
