#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_polymod_format_XMLMerge
#include <polymod/format/XMLMerge.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_38_mergeXMLWork,"polymod.format.XMLMerge","mergeXMLWork",0xbc737b7e,"polymod.format.XMLMerge.mergeXMLWork","polymod/format/XMLMerge.hx",38,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_92_countNodes,"polymod.format.XMLMerge","countNodes",0xe7024d70,"polymod.format.XMLMerge.countNodes","polymod/format/XMLMerge.hx",92,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_102_mergeXML,"polymod.format.XMLMerge","mergeXML",0x208a430d,"polymod.format.XMLMerge.mergeXML","polymod/format/XMLMerge.hx",102,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_168_mergeXMLNodes,"polymod.format.XMLMerge","mergeXMLNodes",0xf9f2b5e4,"polymod.format.XMLMerge.mergeXMLNodes","polymod/format/XMLMerge.hx",168,0xbc4ad77e)
static const ::String _hx_array_data_f83e6120_29[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_178_getNodeMergeMap,"polymod.format.XMLMerge","getNodeMergeMap",0xbbf9954e,"polymod.format.XMLMerge.getNodeMergeMap","polymod/format/XMLMerge.hx",178,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_215_getNodeSignature,"polymod.format.XMLMerge","getNodeSignature",0x642ae92e,"polymod.format.XMLMerge.getNodeSignature","polymod/format/XMLMerge.hx",215,0xbc4ad77e)
HX_LOCAL_STACK_FRAME(_hx_pos_6834fb29b0c2424f_244_mergeMapsDestructively,"polymod.format.XMLMerge","mergeMapsDestructively",0xca999aee,"polymod.format.XMLMerge.mergeMapsDestructively","polymod/format/XMLMerge.hx",244,0xbc4ad77e)
namespace polymod{
namespace format{

void XMLMerge_obj::__construct() { }

Dynamic XMLMerge_obj::__CreateEmpty() { return new XMLMerge_obj; }

void *XMLMerge_obj::_hx_vtable = 0;

Dynamic XMLMerge_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XMLMerge_obj > _hx_result = new XMLMerge_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool XMLMerge_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b7b2bae;
}

void XMLMerge_obj::mergeXMLWork( ::Xml a, ::Xml b,::hx::Null< bool >  __o_children,::hx::Null< bool >  __o_attributes){
            		bool children = __o_children.Default(true);
            		bool attributes = __o_attributes.Default(true);
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_38_mergeXMLWork)
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if (::hx::IsNotNull( a )) {
HXLINE(  39)			_hx_tmp = ::hx::IsNull( b );
            		}
            		else {
HXLINE(  39)			_hx_tmp = true;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  39)			return;
            		}
HXLINE(  41)		if ((a->nodeType == 6)) {
HXLINE(  43)			a = a->firstElement();
            		}
HXLINE(  45)		if ((b->nodeType == 6)) {
HXLINE(  47)			b = b->firstElement();
            		}
HXLINE(  50)		bool _hx_tmp1;
HXDLIN(  50)		if ((a->nodeType == 0)) {
HXLINE(  50)			_hx_tmp1 = (b->nodeType != 0);
            		}
            		else {
HXLINE(  50)			_hx_tmp1 = true;
            		}
HXDLIN(  50)		if (_hx_tmp1) {
HXLINE(  52)			return;
            		}
HXLINE(  55)		bool _hx_tmp2;
HXDLIN(  55)		if ((a->nodeType != ::Xml_obj::Element)) {
HXLINE(  55)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(a->nodeType))));
            		}
HXDLIN(  55)		if ((a->nodeName != HX_("merge",b8,a2,c6,05))) {
HXLINE(  55)			if ((b->nodeType != ::Xml_obj::Element)) {
HXLINE(  55)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(b->nodeType))));
            			}
HXDLIN(  55)			_hx_tmp2 = (b->nodeName == HX_("merge",b8,a2,c6,05));
            		}
            		else {
HXLINE(  55)			_hx_tmp2 = true;
            		}
HXDLIN(  55)		if (_hx_tmp2) {
HXLINE(  55)			return;
            		}
HXLINE(  57)		if (children) {
HXLINE(  59)			 ::Dynamic el = b->elements();
HXDLIN(  59)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  59)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  61)				if (::hx::IsNull( el1 )) {
HXLINE(  61)					continue;
            				}
HXLINE(  62)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  62)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  62)				if ((el1->nodeName == HX_("merge",b8,a2,c6,05))) {
HXLINE(  62)					continue;
            				}
HXLINE(  64)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  64)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  64)				int aCount = ::polymod::format::XMLMerge_obj::countNodes(a,el1->nodeName);
HXLINE(  65)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  65)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  65)				int bCount = ::polymod::format::XMLMerge_obj::countNodes(b,el1->nodeName);
HXLINE(  67)				bool _hx_tmp;
HXDLIN(  67)				if ((aCount == 0)) {
HXLINE(  67)					_hx_tmp = (bCount > 0);
            				}
            				else {
HXLINE(  67)					_hx_tmp = false;
            				}
HXDLIN(  67)				if (_hx_tmp) {
HXLINE(  69)					 ::Xml parent = null();
HXDLIN(  69)					 ::Xml c = null();
HXDLIN(  69)					if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  69)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  69)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  69)						c = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  69)						{
HXLINE(  69)							 ::Dynamic att = el1->attributes();
HXDLIN(  69)							while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)								::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)								c->set(att1,el1->get(att1));
            							}
            						}
HXDLIN(  69)						{
HXLINE(  69)							 ::Dynamic el = el1->elements();
HXDLIN(  69)							while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)								 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)								 ::Xml c1 = null();
HXDLIN(  69)								if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  69)									if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  69)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  69)									c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  69)									{
HXLINE(  69)										 ::Dynamic att = el1->attributes();
HXDLIN(  69)										while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)											::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)											c1->set(att1,el1->get(att1));
            										}
            									}
HXDLIN(  69)									{
HXLINE(  69)										 ::Dynamic el = el1->elements();
HXDLIN(  69)										while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)											 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)											c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            										}
            									}
            								}
            								else {
HXLINE(  69)									if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  69)										bool c;
HXDLIN(  69)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)											c = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  69)											c = true;
            										}
HXDLIN(  69)										if (c) {
HXLINE(  69)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  69)										c1 = ::Xml_obj::createPCData(el1->nodeValue);
            									}
            									else {
HXLINE(  69)										if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  69)											bool c;
HXDLIN(  69)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)												c = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  69)												c = true;
            											}
HXDLIN(  69)											if (c) {
HXLINE(  69)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  69)											c1 = ::Xml_obj::createCData(el1->nodeValue);
            										}
            										else {
HXLINE(  69)											if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  69)												bool c;
HXDLIN(  69)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)													c = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  69)													c = true;
            												}
HXDLIN(  69)												if (c) {
HXLINE(  69)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  69)												c1 = ::Xml_obj::createComment(el1->nodeValue);
            											}
            											else {
HXLINE(  69)												if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  69)													bool c;
HXDLIN(  69)													if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)														c = (el1->nodeType == ::Xml_obj::Element);
            													}
            													else {
HXLINE(  69)														c = true;
            													}
HXDLIN(  69)													if (c) {
HXLINE(  69)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            													}
HXDLIN(  69)													c1 = ::Xml_obj::createDocType(el1->nodeValue);
            												}
            												else {
HXLINE(  69)													if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  69)														bool c;
HXDLIN(  69)														if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)															c = (el1->nodeType == ::Xml_obj::Element);
            														}
            														else {
HXLINE(  69)															c = true;
            														}
HXDLIN(  69)														if (c) {
HXLINE(  69)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            														}
HXDLIN(  69)														c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            													}
            													else {
HXLINE(  69)														if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  69)															c1 = ::Xml_obj::createDocument();
HXDLIN(  69)															{
HXLINE(  69)																 ::Dynamic el = el1->elements();
HXDLIN(  69)																while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)																	 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)																	c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
HXDLIN(  69)								c1->parent = c;
HXDLIN(  69)								c->addChild(c1);
            							}
            						}
            					}
            					else {
HXLINE(  69)						if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  69)							bool c1;
HXDLIN(  69)							if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)								c1 = (el1->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE(  69)								c1 = true;
            							}
HXDLIN(  69)							if (c1) {
HXLINE(  69)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            							}
HXDLIN(  69)							c = ::Xml_obj::createPCData(el1->nodeValue);
            						}
            						else {
HXLINE(  69)							if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  69)								bool c1;
HXDLIN(  69)								if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)									c1 = (el1->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE(  69)									c1 = true;
            								}
HXDLIN(  69)								if (c1) {
HXLINE(  69)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            								}
HXDLIN(  69)								c = ::Xml_obj::createCData(el1->nodeValue);
            							}
            							else {
HXLINE(  69)								if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  69)									bool c1;
HXDLIN(  69)									if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)										c1 = (el1->nodeType == ::Xml_obj::Element);
            									}
            									else {
HXLINE(  69)										c1 = true;
            									}
HXDLIN(  69)									if (c1) {
HXLINE(  69)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  69)									c = ::Xml_obj::createComment(el1->nodeValue);
            								}
            								else {
HXLINE(  69)									if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  69)										bool c1;
HXDLIN(  69)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)											c1 = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  69)											c1 = true;
            										}
HXDLIN(  69)										if (c1) {
HXLINE(  69)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  69)										c = ::Xml_obj::createDocType(el1->nodeValue);
            									}
            									else {
HXLINE(  69)										if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  69)											bool c1;
HXDLIN(  69)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)												c1 = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  69)												c1 = true;
            											}
HXDLIN(  69)											if (c1) {
HXLINE(  69)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  69)											c = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            										}
            										else {
HXLINE(  69)											if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  69)												c = ::Xml_obj::createDocument();
HXDLIN(  69)												{
HXLINE(  69)													 ::Dynamic el = el1->elements();
HXDLIN(  69)													while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)														 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)														 ::Xml c1 = null();
HXDLIN(  69)														if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  69)															if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  69)																HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            															}
HXDLIN(  69)															c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  69)															{
HXLINE(  69)																 ::Dynamic att = el1->attributes();
HXDLIN(  69)																while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)																	::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)																	c1->set(att1,el1->get(att1));
            																}
            															}
HXDLIN(  69)															{
HXLINE(  69)																 ::Dynamic el = el1->elements();
HXDLIN(  69)																while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)																	 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)																	c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																}
            															}
            														}
            														else {
HXLINE(  69)															if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  69)																bool c;
HXDLIN(  69)																if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)																	c = (el1->nodeType == ::Xml_obj::Element);
            																}
            																else {
HXLINE(  69)																	c = true;
            																}
HXDLIN(  69)																if (c) {
HXLINE(  69)																	HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																}
HXDLIN(  69)																c1 = ::Xml_obj::createPCData(el1->nodeValue);
            															}
            															else {
HXLINE(  69)																if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  69)																	bool c;
HXDLIN(  69)																	if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)																		c = (el1->nodeType == ::Xml_obj::Element);
            																	}
            																	else {
HXLINE(  69)																		c = true;
            																	}
HXDLIN(  69)																	if (c) {
HXLINE(  69)																		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																	}
HXDLIN(  69)																	c1 = ::Xml_obj::createCData(el1->nodeValue);
            																}
            																else {
HXLINE(  69)																	if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  69)																		bool c;
HXDLIN(  69)																		if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)																			c = (el1->nodeType == ::Xml_obj::Element);
            																		}
            																		else {
HXLINE(  69)																			c = true;
            																		}
HXDLIN(  69)																		if (c) {
HXLINE(  69)																			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																		}
HXDLIN(  69)																		c1 = ::Xml_obj::createComment(el1->nodeValue);
            																	}
            																	else {
HXLINE(  69)																		if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  69)																			bool c;
HXDLIN(  69)																			if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)																				c = (el1->nodeType == ::Xml_obj::Element);
            																			}
            																			else {
HXLINE(  69)																				c = true;
            																			}
HXDLIN(  69)																			if (c) {
HXLINE(  69)																				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																			}
HXDLIN(  69)																			c1 = ::Xml_obj::createDocType(el1->nodeValue);
            																		}
            																		else {
HXLINE(  69)																			if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  69)																				bool c;
HXDLIN(  69)																				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  69)																					c = (el1->nodeType == ::Xml_obj::Element);
            																				}
            																				else {
HXLINE(  69)																					c = true;
            																				}
HXDLIN(  69)																				if (c) {
HXLINE(  69)																					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																				}
HXDLIN(  69)																				c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            																			}
            																			else {
HXLINE(  69)																				if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  69)																					c1 = ::Xml_obj::createDocument();
HXDLIN(  69)																					{
HXLINE(  69)																						 ::Dynamic el = el1->elements();
HXDLIN(  69)																						while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  69)																							 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  69)																							c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
            														}
HXDLIN(  69)														c1->parent = c;
HXDLIN(  69)														c->addChild(c1);
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
HXDLIN(  69)					c->parent = parent;
HXDLIN(  69)					a->addChild(c);
            				}
            				else {
HXLINE(  71)					bool _hx_tmp;
HXDLIN(  71)					if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  71)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            					}
HXDLIN(  71)					if ((::polymod::format::XMLMerge_obj::countNodes(a,el1->nodeName) == 1)) {
HXLINE(  71)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  71)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  71)						_hx_tmp = (::polymod::format::XMLMerge_obj::countNodes(b,el1->nodeName) == 1);
            					}
            					else {
HXLINE(  71)						_hx_tmp = false;
            					}
HXDLIN(  71)					if (_hx_tmp) {
HXLINE(  73)						if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  73)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            						}
HXDLIN(  73)						::polymod::format::XMLMerge_obj::mergeXMLWork(( ( ::Xml)(a->elementsNamed(el1->nodeName)->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) ),el1,null(),null());
            					}
            					else {
HXLINE(  77)						 ::Xml parent = null();
HXDLIN(  77)						 ::Xml c = null();
HXDLIN(  77)						if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  77)							if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  77)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            							}
HXDLIN(  77)							c = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  77)							{
HXLINE(  77)								 ::Dynamic att = el1->attributes();
HXDLIN(  77)								while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)									::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)									c->set(att1,el1->get(att1));
            								}
            							}
HXDLIN(  77)							{
HXLINE(  77)								 ::Dynamic el = el1->elements();
HXDLIN(  77)								while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)									 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)									 ::Xml c1 = null();
HXDLIN(  77)									if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  77)										if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  77)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  77)										c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  77)										{
HXLINE(  77)											 ::Dynamic att = el1->attributes();
HXDLIN(  77)											while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)												::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)												c1->set(att1,el1->get(att1));
            											}
            										}
HXDLIN(  77)										{
HXLINE(  77)											 ::Dynamic el = el1->elements();
HXDLIN(  77)											while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)												 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)												c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            											}
            										}
            									}
            									else {
HXLINE(  77)										if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  77)											bool c;
HXDLIN(  77)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)												c = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  77)												c = true;
            											}
HXDLIN(  77)											if (c) {
HXLINE(  77)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  77)											c1 = ::Xml_obj::createPCData(el1->nodeValue);
            										}
            										else {
HXLINE(  77)											if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  77)												bool c;
HXDLIN(  77)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)													c = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  77)													c = true;
            												}
HXDLIN(  77)												if (c) {
HXLINE(  77)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  77)												c1 = ::Xml_obj::createCData(el1->nodeValue);
            											}
            											else {
HXLINE(  77)												if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  77)													bool c;
HXDLIN(  77)													if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)														c = (el1->nodeType == ::Xml_obj::Element);
            													}
            													else {
HXLINE(  77)														c = true;
            													}
HXDLIN(  77)													if (c) {
HXLINE(  77)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            													}
HXDLIN(  77)													c1 = ::Xml_obj::createComment(el1->nodeValue);
            												}
            												else {
HXLINE(  77)													if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  77)														bool c;
HXDLIN(  77)														if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)															c = (el1->nodeType == ::Xml_obj::Element);
            														}
            														else {
HXLINE(  77)															c = true;
            														}
HXDLIN(  77)														if (c) {
HXLINE(  77)															HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            														}
HXDLIN(  77)														c1 = ::Xml_obj::createDocType(el1->nodeValue);
            													}
            													else {
HXLINE(  77)														if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  77)															bool c;
HXDLIN(  77)															if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																c = (el1->nodeType == ::Xml_obj::Element);
            															}
            															else {
HXLINE(  77)																c = true;
            															}
HXDLIN(  77)															if (c) {
HXLINE(  77)																HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            															}
HXDLIN(  77)															c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            														}
            														else {
HXLINE(  77)															if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  77)																c1 = ::Xml_obj::createDocument();
HXDLIN(  77)																{
HXLINE(  77)																	 ::Dynamic el = el1->elements();
HXDLIN(  77)																	while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)																		 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)																		c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																	}
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
HXDLIN(  77)									c1->parent = c;
HXDLIN(  77)									c->addChild(c1);
            								}
            							}
            						}
            						else {
HXLINE(  77)							if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  77)								bool c1;
HXDLIN(  77)								if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)									c1 = (el1->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE(  77)									c1 = true;
            								}
HXDLIN(  77)								if (c1) {
HXLINE(  77)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            								}
HXDLIN(  77)								c = ::Xml_obj::createPCData(el1->nodeValue);
            							}
            							else {
HXLINE(  77)								if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  77)									bool c1;
HXDLIN(  77)									if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)										c1 = (el1->nodeType == ::Xml_obj::Element);
            									}
            									else {
HXLINE(  77)										c1 = true;
            									}
HXDLIN(  77)									if (c1) {
HXLINE(  77)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            									}
HXDLIN(  77)									c = ::Xml_obj::createCData(el1->nodeValue);
            								}
            								else {
HXLINE(  77)									if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  77)										bool c1;
HXDLIN(  77)										if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)											c1 = (el1->nodeType == ::Xml_obj::Element);
            										}
            										else {
HXLINE(  77)											c1 = true;
            										}
HXDLIN(  77)										if (c1) {
HXLINE(  77)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            										}
HXDLIN(  77)										c = ::Xml_obj::createComment(el1->nodeValue);
            									}
            									else {
HXLINE(  77)										if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  77)											bool c1;
HXDLIN(  77)											if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)												c1 = (el1->nodeType == ::Xml_obj::Element);
            											}
            											else {
HXLINE(  77)												c1 = true;
            											}
HXDLIN(  77)											if (c1) {
HXLINE(  77)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            											}
HXDLIN(  77)											c = ::Xml_obj::createDocType(el1->nodeValue);
            										}
            										else {
HXLINE(  77)											if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  77)												bool c1;
HXDLIN(  77)												if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)													c1 = (el1->nodeType == ::Xml_obj::Element);
            												}
            												else {
HXLINE(  77)													c1 = true;
            												}
HXDLIN(  77)												if (c1) {
HXLINE(  77)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            												}
HXDLIN(  77)												c = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            											}
            											else {
HXLINE(  77)												if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  77)													c = ::Xml_obj::createDocument();
HXDLIN(  77)													{
HXLINE(  77)														 ::Dynamic el = el1->elements();
HXDLIN(  77)														while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)															 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)															 ::Xml c1 = null();
HXDLIN(  77)															if ((el1->nodeType == ::Xml_obj::Element)) {
HXLINE(  77)																if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  77)																	HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																}
HXDLIN(  77)																c1 = ::Xml_obj::createElement(el1->nodeName);
HXDLIN(  77)																{
HXLINE(  77)																	 ::Dynamic att = el1->attributes();
HXDLIN(  77)																	while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)																		::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)																		c1->set(att1,el1->get(att1));
            																	}
            																}
HXDLIN(  77)																{
HXLINE(  77)																	 ::Dynamic el = el1->elements();
HXDLIN(  77)																	while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)																		 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)																		c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																	}
            																}
            															}
            															else {
HXLINE(  77)																if ((el1->nodeType == ::Xml_obj::PCData)) {
HXLINE(  77)																	bool c;
HXDLIN(  77)																	if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																		c = (el1->nodeType == ::Xml_obj::Element);
            																	}
            																	else {
HXLINE(  77)																		c = true;
            																	}
HXDLIN(  77)																	if (c) {
HXLINE(  77)																		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																	}
HXDLIN(  77)																	c1 = ::Xml_obj::createPCData(el1->nodeValue);
            																}
            																else {
HXLINE(  77)																	if ((el1->nodeType == ::Xml_obj::CData)) {
HXLINE(  77)																		bool c;
HXDLIN(  77)																		if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																			c = (el1->nodeType == ::Xml_obj::Element);
            																		}
            																		else {
HXLINE(  77)																			c = true;
            																		}
HXDLIN(  77)																		if (c) {
HXLINE(  77)																			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																		}
HXDLIN(  77)																		c1 = ::Xml_obj::createCData(el1->nodeValue);
            																	}
            																	else {
HXLINE(  77)																		if ((el1->nodeType == ::Xml_obj::Comment)) {
HXLINE(  77)																			bool c;
HXDLIN(  77)																			if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																				c = (el1->nodeType == ::Xml_obj::Element);
            																			}
            																			else {
HXLINE(  77)																				c = true;
            																			}
HXDLIN(  77)																			if (c) {
HXLINE(  77)																				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																			}
HXDLIN(  77)																			c1 = ::Xml_obj::createComment(el1->nodeValue);
            																		}
            																		else {
HXLINE(  77)																			if ((el1->nodeType == ::Xml_obj::DocType)) {
HXLINE(  77)																				bool c;
HXDLIN(  77)																				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																					c = (el1->nodeType == ::Xml_obj::Element);
            																				}
            																				else {
HXLINE(  77)																					c = true;
            																				}
HXDLIN(  77)																				if (c) {
HXLINE(  77)																					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																				}
HXDLIN(  77)																				c1 = ::Xml_obj::createDocType(el1->nodeValue);
            																			}
            																			else {
HXLINE(  77)																				if ((el1->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE(  77)																					bool c;
HXDLIN(  77)																					if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE(  77)																						c = (el1->nodeType == ::Xml_obj::Element);
            																					}
            																					else {
HXLINE(  77)																						c = true;
            																					}
HXDLIN(  77)																					if (c) {
HXLINE(  77)																						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            																					}
HXDLIN(  77)																					c1 = ::Xml_obj::createProcessingInstruction(el1->nodeValue);
            																				}
            																				else {
HXLINE(  77)																					if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  77)																						c1 = ::Xml_obj::createDocument();
HXDLIN(  77)																						{
HXLINE(  77)																							 ::Dynamic el = el1->elements();
HXDLIN(  77)																							while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  77)																								 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  77)																								c1->addChild(::polymod::util::Util_obj::copyXml(el1,c1));
            																							}
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
HXDLIN(  77)															c1->parent = c;
HXDLIN(  77)															c->addChild(c1);
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
HXDLIN(  77)						c->parent = parent;
HXDLIN(  77)						a->addChild(c);
            					}
            				}
            			}
            		}
HXLINE(  81)		if (attributes) {
HXLINE(  83)			 ::Dynamic att = b->attributes();
HXDLIN(  83)			while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  83)				::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  85)				a->set(att1,b->get(att1));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(XMLMerge_obj,mergeXMLWork,(void))

int XMLMerge_obj::countNodes( ::Xml xml,::String nodeName){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_92_countNodes)
HXLINE(  93)		int i = 0;
HXLINE(  94)		{
HXLINE(  94)			 ::Dynamic el = xml->elementsNamed(nodeName);
HXDLIN(  94)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  94)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  96)				i = (i + 1);
            			}
            		}
HXLINE(  98)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,countNodes,return )

void XMLMerge_obj::mergeXML( ::Xml a, ::Xml b,::Array< ::String > allSigs, ::haxe::ds::StringMap mergeMap){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_102_mergeXML)
HXLINE( 103)		::String aName;
HXDLIN( 103)		if ((a->nodeType == 6)) {
HXLINE( 103)			aName = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 103)			if ((a->nodeType != ::Xml_obj::Element)) {
HXLINE( 103)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(a->nodeType))));
            			}
HXDLIN( 103)			aName = a->nodeName;
            		}
HXLINE( 104)		::String bName;
HXDLIN( 104)		if ((b->nodeType == 6)) {
HXLINE( 104)			bName = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 104)			if ((b->nodeType != ::Xml_obj::Element)) {
HXLINE( 104)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(b->nodeType))));
            			}
HXDLIN( 104)			bName = b->nodeName;
            		}
HXLINE( 106)		if ((aName != bName)) {
HXLINE( 106)			return;
            		}
HXLINE( 108)		::String aSig = ::polymod::format::XMLMerge_obj::getNodeSignature(a);
HXLINE( 109)		::String bSig = ::polymod::format::XMLMerge_obj::getNodeSignature(b);
HXLINE( 111)		if ((aSig != bSig)) {
HXLINE( 111)			return;
            		}
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			while((_g < allSigs->length)){
HXLINE( 113)				::String sig = allSigs->__get(_g);
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 115)				if ((sig.indexOf(aSig,null()) == 0)) {
HXLINE( 117)					if ((sig == aSig)) {
HXLINE( 120)						::Array< ::String > keyValues = ( (::Array< ::String >)(mergeMap->get(sig)) );
HXLINE( 121)						if (::hx::IsNull( keyValues )) {
HXLINE( 123)							bool _hx_tmp;
HXDLIN( 123)							if ((sig == HX_("",00,00,00,00))) {
HXLINE( 123)								_hx_tmp = (aSig == HX_("",00,00,00,00));
            							}
            							else {
HXLINE( 123)								_hx_tmp = false;
            							}
HXDLIN( 123)							if (_hx_tmp) {
HXLINE( 125)								bool _hx_tmp;
HXDLIN( 125)								if ((a->nodeType == 6)) {
HXLINE( 125)									_hx_tmp = (b->nodeType == 6);
            								}
            								else {
HXLINE( 125)									_hx_tmp = false;
            								}
HXDLIN( 125)								if (_hx_tmp) {
HXLINE( 127)									 ::Xml a1 = a->firstElement();
HXLINE( 128)									 ::Xml b1 = b->firstElement();
HXLINE( 129)									::polymod::format::XMLMerge_obj::mergeXML(a1,b1,allSigs,mergeMap);
            								}
            								else {
HXLINE( 133)									return;
            								}
            							}
            						}
HXLINE( 137)						bool _hx_tmp;
HXDLIN( 137)						bool _hx_tmp1;
HXDLIN( 137)						if (::hx::IsNotNull( keyValues )) {
HXLINE( 137)							_hx_tmp1 = (::hx::Mod(keyValues->length,2) == 0);
            						}
            						else {
HXLINE( 137)							_hx_tmp1 = false;
            						}
HXDLIN( 137)						if (_hx_tmp1) {
HXLINE( 137)							_hx_tmp = (keyValues->length >= 2);
            						}
            						else {
HXLINE( 137)							_hx_tmp = false;
            						}
HXDLIN( 137)						if (_hx_tmp) {
HXLINE( 139)							int _g = 0;
HXDLIN( 139)							int _g1 = ::Std_obj::_hx_int((( (Float)(keyValues->length) ) / ( (Float)(2) )));
HXDLIN( 139)							while((_g < _g1)){
HXLINE( 139)								_g = (_g + 1);
HXDLIN( 139)								int i = (_g - 1);
HXLINE( 141)								::String key = keyValues->__get((i * 2));
HXLINE( 142)								::String value = keyValues->__get(((i * 2) + 1));
HXLINE( 143)								::String aValue = a->get(key);
HXLINE( 144)								if ((aValue == value)) {
HXLINE( 146)									::String bValue = b->get(key);
HXLINE( 147)									::polymod::format::XMLMerge_obj::mergeXMLWork(a,b,null(),null());
            								}
            							}
            						}
            					}
            					else {
HXLINE( 155)						 ::Dynamic aEl = a->elements();
HXDLIN( 155)						while(( (bool)(aEl->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 155)							 ::Xml aEl1 = ( ( ::Xml)(aEl->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 157)							{
HXLINE( 157)								 ::Dynamic bEl = b->elements();
HXDLIN( 157)								while(( (bool)(bEl->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 157)									 ::Xml bEl1 = ( ( ::Xml)(bEl->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 159)									::polymod::format::XMLMerge_obj::mergeXML(aEl1,bEl1,allSigs,mergeMap);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(XMLMerge_obj,mergeXML,(void))

void XMLMerge_obj::mergeXMLNodes( ::Xml a, ::Xml b){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_168_mergeXMLNodes)
HXLINE( 169)		if (::hx::IsNull( b )) {
HXLINE( 169)			return;
            		}
HXLINE( 171)		::Array< ::String > allSigs = ::Array_obj< ::String >::fromData( _hx_array_data_f83e6120_29,1);
HXLINE( 172)		 ::haxe::ds::StringMap bMap = ::polymod::format::XMLMerge_obj::getNodeMergeMap(b,allSigs);
HXLINE( 174)		::polymod::format::XMLMerge_obj::mergeXML(a,b,allSigs,bMap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,mergeXMLNodes,(void))

 ::haxe::ds::StringMap XMLMerge_obj::getNodeMergeMap( ::Xml xml,::Array< ::String > addToArray){
            	HX_GC_STACKFRAME(&_hx_pos_6834fb29b0c2424f_178_getNodeMergeMap)
HXLINE( 179)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 181)		if (::hx::IsNull( xml )) {
HXLINE( 181)			return map;
            		}
HXLINE( 183)		{
HXLINE( 183)			 ::Dynamic el = xml->elements();
HXDLIN( 183)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 183)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 184)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE( 184)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN( 184)				if ((el1->nodeName == HX_("merge",b8,a2,c6,05))) {
HXLINE( 184)					continue;
            				}
HXLINE( 185)				 ::haxe::ds::StringMap subMap = ::polymod::format::XMLMerge_obj::getNodeMergeMap(el1,addToArray);
HXLINE( 186)				map = ::polymod::format::XMLMerge_obj::mergeMapsDestructively(map,subMap);
HXLINE( 187)				::String sig = ::polymod::format::XMLMerge_obj::getNodeSignature(el1);
HXLINE( 189)				bool _hx_tmp;
HXDLIN( 189)				if ((el1->nodeType != ::Xml_obj::Document)) {
HXLINE( 189)					_hx_tmp = (el1->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE( 189)					_hx_tmp = false;
            				}
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 189)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN( 189)				 ::Xml this1 = el1;
HXDLIN( 189)				 ::Xml f = this1;
HXLINE( 190)				if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05))) {
HXLINE( 192)					if ((map->exists(sig) == false)) {
HXLINE( 194)						map->set(sig,::Array_obj< ::String >::__new(0));
            					}
HXLINE( 196)					::Array< ::String > arr = ( (::Array< ::String >)(map->get(sig)) );
HXLINE( 198)					::String mergeKey;
HXDLIN( 198)					if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05)),HX_("key",9f,89,51,00))) {
HXLINE( 198)						mergeKey = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05)),HX_("key",9f,89,51,00));
            					}
            					else {
HXLINE( 198)						mergeKey = HX_("",00,00,00,00);
            					}
HXLINE( 199)					::String mergeKeyValue = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(f,HX_("merge",b8,a2,c6,05))->get(mergeKey);
HXLINE( 201)					arr->push(mergeKey);
HXLINE( 202)					arr->push(mergeKeyValue);
HXLINE( 204)					if ((addToArray->indexOf(sig,null()) == -1)) {
HXLINE( 206)						addToArray->push(sig);
            					}
            				}
            			}
            		}
HXLINE( 211)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,getNodeMergeMap,return )

::String XMLMerge_obj::getNodeSignature( ::Xml xml){
            	HX_STACKFRAME(&_hx_pos_6834fb29b0c2424f_215_getNodeSignature)
HXLINE( 216)		::Array< ::String > arr = ::Array_obj< ::String >::__new(0);
HXLINE( 217)		 ::Xml parent = xml;
HXLINE( 218)		while(true){
HXLINE( 218)			bool _hx_tmp;
HXDLIN( 218)			if (::hx::IsNotNull( parent )) {
HXLINE( 218)				_hx_tmp = (parent->nodeType == 0);
            			}
            			else {
HXLINE( 218)				_hx_tmp = false;
            			}
HXDLIN( 218)			if (!(_hx_tmp)) {
HXLINE( 218)				goto _hx_goto_32;
            			}
HXLINE( 220)			if ((parent->nodeType != ::Xml_obj::Element)) {
HXLINE( 220)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(parent->nodeType))));
            			}
HXDLIN( 220)			arr->push(parent->nodeName);
HXLINE( 221)			if ((parent->nodeType == 0)) {
HXLINE( 223)				parent = parent->parent;
            			}
            			else {
HXLINE( 227)				parent = null();
            			}
            		}
            		_hx_goto_32:;
HXLINE( 230)		::String str = HX_("",00,00,00,00);
HXLINE( 231)		{
HXLINE( 231)			int _g = 0;
HXDLIN( 231)			int _g1 = arr->length;
HXDLIN( 231)			while((_g < _g1)){
HXLINE( 231)				_g = (_g + 1);
HXDLIN( 231)				int i = (_g - 1);
HXLINE( 233)				int j = ((arr->length - 1) - i);
HXLINE( 234)				str = (str + arr->__get(j));
HXLINE( 235)				if ((i != (arr->length - 1))) {
HXLINE( 237)					str = (str + HX_(".",2e,00,00,00));
            				}
            			}
            		}
HXLINE( 240)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(XMLMerge_obj,getNodeSignature,return )

 ::haxe::ds::StringMap XMLMerge_obj::mergeMapsDestructively( ::haxe::ds::StringMap a, ::haxe::ds::StringMap b){
            	HX_GC_STACKFRAME(&_hx_pos_6834fb29b0c2424f_244_mergeMapsDestructively)
HXLINE( 245)		if (::hx::IsNull( a )) {
HXLINE( 245)			a =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 246)		if (::hx::IsNull( b )) {
HXLINE( 246)			return a;
            		}
HXLINE( 247)		{
HXLINE( 247)			 ::Dynamic bkey = b->keys();
HXDLIN( 247)			while(( (bool)(bkey->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 247)				::String bkey1 = ( (::String)(bkey->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 249)				if (a->exists(bkey1)) {
HXLINE( 251)					::Array< ::String > aArr = ( (::Array< ::String >)(a->get(bkey1)) );
HXLINE( 252)					::Array< ::String > bArr = ( (::Array< ::String >)(b->get(bkey1)) );
HXLINE( 253)					{
HXLINE( 253)						int _g = 0;
HXDLIN( 253)						while((_g < bArr->length)){
HXLINE( 253)							::String bVal = bArr->__get(_g);
HXDLIN( 253)							_g = (_g + 1);
HXLINE( 255)							aArr->push(bVal);
            						}
            					}
            				}
            				else {
HXLINE( 260)					::Array< ::String > bArr = ( (::Array< ::String >)(b->get(bkey1)) );
HXLINE( 261)					a->set(bkey1,bArr);
HXLINE( 262)					b->remove(bkey1);
            				}
            			}
            		}
HXLINE( 265)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLMerge_obj,mergeMapsDestructively,return )


XMLMerge_obj::XMLMerge_obj()
{
}

bool XMLMerge_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mergeXML") ) { outValue = mergeXML_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"countNodes") ) { outValue = countNodes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mergeXMLWork") ) { outValue = mergeXMLWork_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mergeXMLNodes") ) { outValue = mergeXMLNodes_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getNodeMergeMap") ) { outValue = getNodeMergeMap_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodeSignature") ) { outValue = getNodeSignature_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mergeMapsDestructively") ) { outValue = mergeMapsDestructively_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *XMLMerge_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *XMLMerge_obj_sStaticStorageInfo = 0;
#endif

::hx::Class XMLMerge_obj::__mClass;

static ::String XMLMerge_obj_sStaticFields[] = {
	HX_("mergeXMLWork",70,83,99,f8),
	HX_("countNodes",e2,14,12,6a),
	HX_("mergeXML",ff,e9,6c,e8),
	HX_("mergeXMLNodes",b2,a1,13,5f),
	HX_("getNodeMergeMap",9c,90,07,5c),
	HX_("getNodeSignature",20,d2,58,d0),
	HX_("mergeMapsDestructively",60,c5,6f,d9),
	::String(null())
};

void XMLMerge_obj::__register()
{
	XMLMerge_obj _hx_dummy;
	XMLMerge_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.XMLMerge",20,61,3e,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XMLMerge_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(XMLMerge_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< XMLMerge_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XMLMerge_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XMLMerge_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
