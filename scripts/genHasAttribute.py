##############################################################################
## Name:        genHasAttribute.py
## Purpose:     generates Elements_HasAttribute.cpp
##              -> HasAttribute() methods for all svg elements
## Author:      Alex Thuering
## Created:     2005/09/27
## RCS-ID:      $Id: genHasAttribute.py,v 1.6 2014-03-18 13:08:39 ntalex Exp $
## Copyright:   (c) 2005 Alex Thuering
## Notes:		some modules adapted from svgl project
##############################################################################

import parse_idl
import mapDtdIdl
import string
import config
import genFile
import cpp
import cppImpl

customParser = ["SVGStylable", "SVGFEGaussianBlurElement"] ##TODO["SVGMarkerElement"]

includes = ["String_wxsvg"]
already_done={}
output_cpps = {}

def process(classdecl):
    if classdecl.name in already_done.keys():
        return already_done[classdecl.name];
    
    already_done[classdecl.name] = 0
    nattr=0
    func_body = ''

    for attr in classdecl.attributes:
        try:
            entity_name = mapDtdIdl.attributes_idl_dtd[attr]
        except KeyError:
            #print classdecl.name, attr ###### TODO
            #print classdecl
            #print mapDtdIdl.attributes_idl_dtd
            #raise ""
            continue

        if nattr == 0:
            includes.append(classdecl.name)
        nattr = nattr + 1
        
        if len(func_body):
            func_body = func_body + " ||\n    "
        func_body = func_body + 'attrName == wxT("%s")'%entity_name

    for inh in classdecl.inherits:
        if inh in ["Element", "events::EventTarget", "events::DocumentEvent",
                   "css::ViewCSS", "css::DocumentCSS", "css::CSSValue",
                   "smil::ElementTimeControl", "Document", "events::UIEvent",
                   "css::CSSRule", "events::Event"]:
            continue
        res = process(parse_idl.class_decls[inh])
        if res>0:
            if nattr==0:
                includes.append(classdecl.name)

            nattr = nattr+res
            if len(func_body):
                func_body = func_body + " ||\n    "
            func_body = func_body + 'wx%s::HasAttribute(attrName)'%inh

    if nattr>0:
        if classdecl.name in customParser:
            func_body = func_body + ' ||\n    HasCustomAttribute(attrName)'
        output_cpp = '''
// wx%s
bool wx%s::HasAttribute(const wxString& attrName) const {
  return %s;
}      
'''%(classdecl.name, classdecl.name, func_body)
        output_cpps[classdecl.name]=output_cpp

    already_done[classdecl.name] = nattr
    return nattr


if len(parse_idl.class_decls):
    cnames = parse_idl.class_decls.keys()
    cnames.sort()
    for name in cnames:
        process(parse_idl.class_decls[name])

output_cpp=""
if len(output_cpps):
    for value in output_cpps.values():
        output_cpp = output_cpp + value

includestr=''
for i in includes:
    includestr = includestr + '#include "%s.h"\n'%i

impl = cppImpl.Impl("Elements_HasAttribute", "genHasAttribute.py")
impl.add_content(includestr + output_cpp)
impl.dump(path=config.src_dir)

