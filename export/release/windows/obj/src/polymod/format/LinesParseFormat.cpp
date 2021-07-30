#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_EndLineType
#include <polymod/format/EndLineType.h>
#endif
#ifndef INCLUDED_polymod_format_LinesParseFormat
#include <polymod/format/LinesParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da011ef85b625651_411_new,"polymod.format.LinesParseFormat","new",0xde5818bc,"polymod.format.LinesParseFormat.new","polymod/format/ParseRules.hx",411,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_da011ef85b625651_417_parse,"polymod.format.LinesParseFormat","parse",0x5b41a78f,"polymod.format.LinesParseFormat.parse","polymod/format/ParseRules.hx",417,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_da011ef85b625651_442_append,"polymod.format.LinesParseFormat","append",0x207c3afe,"polymod.format.LinesParseFormat.append","polymod/format/ParseRules.hx",442,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_da011ef85b625651_446_merge,"polymod.format.LinesParseFormat","merge",0xa3b2ba14,"polymod.format.LinesParseFormat.merge","polymod/format/ParseRules.hx",446,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_da011ef85b625651_471_print,"polymod.format.LinesParseFormat","print",0x66776f89,"polymod.format.LinesParseFormat.print","polymod/format/ParseRules.hx",471,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_da011ef85b625651_476_getEndl,"polymod.format.LinesParseFormat","getEndl",0x183eb243,"polymod.format.LinesParseFormat.getEndl","polymod/format/ParseRules.hx",476,0xc5c5c43b)
namespace polymod{
namespace format{

void LinesParseFormat_obj::__construct( ::polymod::format::EndLineType endline){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_411_new)
HXLINE( 412)		this->format = ::polymod::format::TextFileFormat_obj::LINES_dyn();
HXLINE( 413)		this->endline = endline;
            	}

Dynamic LinesParseFormat_obj::__CreateEmpty() { return new LinesParseFormat_obj; }

void *LinesParseFormat_obj::_hx_vtable = 0;

Dynamic LinesParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinesParseFormat_obj > _hx_result = new LinesParseFormat_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LinesParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20bd5358;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_LinesParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::LinesParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::LinesParseFormat_obj::merge,
};

void *LinesParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_LinesParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Array< ::String > LinesParseFormat_obj::parse(::String str){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_417_parse)
HXLINE( 418)		bool _hx_tmp;
HXDLIN( 418)		if (::hx::IsNotNull( str )) {
HXLINE( 418)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 418)			_hx_tmp = true;
            		}
HXDLIN( 418)		if (_hx_tmp) {
HXLINE( 418)			return ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 419)		::String other = HX_("",00,00,00,00);
HXLINE( 420)		::String endl = HX_("",00,00,00,00);
HXLINE( 421)		switch((int)(this->endline->_hx_getIndex())){
            			case (int)0: {
HXLINE( 423)				endl = HX_("\n",0a,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 424)				endl = HX_("\r",0d,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 425)				endl = HX_("\r\n",5d,0b,00,00);
            			}
            			break;
            			default:{
HXLINE( 426)				endl = HX_("\r",0d,00,00,00);
HXDLIN( 426)				other = HX_("\n",0a,00,00,00);
            			}
            		}
HXLINE( 428)		if ((other == HX_("",00,00,00,00))) {
HXLINE( 430)			return str.split(endl);
            		}
            		else {
HXLINE( 434)			str = ::StringTools_obj::replace(str,other,endl);
HXLINE( 435)			return str.split(endl);
            		}
HXLINE( 428)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinesParseFormat_obj,parse,return )

::String LinesParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_442_append)
HXDLIN( 442)		return ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,baseText)->init(1,this->getEndl())->init(2,appendText));
            	}


HX_DEFINE_DYNAMIC_FUNC3(LinesParseFormat_obj,append,return )

::String LinesParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_446_merge)
HXLINE( 447)		bool _hx_tmp;
HXDLIN( 447)		if (::hx::IsNotNull( baseText )) {
HXLINE( 447)			_hx_tmp = (mergeText == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 447)			_hx_tmp = true;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 447)			return baseText;
            		}
HXLINE( 448)		bool _hx_tmp1;
HXDLIN( 448)		if (::hx::IsNotNull( baseText )) {
HXLINE( 448)			_hx_tmp1 = (mergeText == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 448)			_hx_tmp1 = true;
            		}
HXDLIN( 448)		if (_hx_tmp1) {
HXLINE( 448)			return baseText;
            		}
HXLINE( 449)		::Array< ::String > lines = this->parse(baseText);
HXLINE( 450)		bool _hx_tmp2;
HXDLIN( 450)		if (::hx::IsNotNull( lines )) {
HXLINE( 450)			_hx_tmp2 = (lines->length <= 0);
            		}
            		else {
HXLINE( 450)			_hx_tmp2 = true;
            		}
HXDLIN( 450)		if (_hx_tmp2) {
HXLINE( 450)			return baseText;
            		}
HXLINE( 451)		::Array< ::String > mergeLines = this->parse(mergeText);
HXLINE( 452)		bool _hx_tmp3;
HXDLIN( 452)		if (::hx::IsNotNull( mergeLines )) {
HXLINE( 452)			_hx_tmp3 = (mergeLines->length <= 1);
            		}
            		else {
HXLINE( 452)			_hx_tmp3 = true;
            		}
HXDLIN( 452)		if (_hx_tmp3) {
HXLINE( 452)			return baseText;
            		}
HXLINE( 453)		::String pattern = ( (::String)(mergeLines->shift()) );
HXLINE( 454)		::Array< ::String > newLines = ::Array_obj< ::String >::__new(0);
HXLINE( 455)		{
HXLINE( 455)			int _g = 0;
HXDLIN( 455)			while((_g < lines->length)){
HXLINE( 455)				::String line = lines->__get(_g);
HXDLIN( 455)				_g = (_g + 1);
HXLINE( 457)				if ((line.indexOf(pattern,null()) == 0)) {
HXLINE( 459)					newLines = newLines->concat(mergeLines);
            				}
            				else {
HXLINE( 463)					newLines->push(line);
            				}
            			}
            		}
HXLINE( 466)		return ::polymod::util::Util_obj::uJoin(newLines,this->getEndl());
            	}


HX_DEFINE_DYNAMIC_FUNC3(LinesParseFormat_obj,merge,return )

::String LinesParseFormat_obj::print(::Array< ::String > lines){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_471_print)
HXDLIN( 471)		return lines->join(this->getEndl());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinesParseFormat_obj,print,return )

::String LinesParseFormat_obj::getEndl(){
            	HX_STACKFRAME(&_hx_pos_da011ef85b625651_476_getEndl)
HXDLIN( 476)		switch((int)(this->endline->_hx_getIndex())){
            			case (int)0: {
HXLINE( 478)				return HX_("\n",0a,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 479)				return HX_("\r",0d,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 480)				return HX_("\r\n",5d,0b,00,00);
            			}
            			break;
            			default:{
HXLINE( 481)				return HX_("\n",0a,00,00,00);
            			}
            		}
HXLINE( 476)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinesParseFormat_obj,getEndl,return )


::hx::ObjectPtr< LinesParseFormat_obj > LinesParseFormat_obj::__new( ::polymod::format::EndLineType endline) {
	::hx::ObjectPtr< LinesParseFormat_obj > __this = new LinesParseFormat_obj();
	__this->__construct(endline);
	return __this;
}

::hx::ObjectPtr< LinesParseFormat_obj > LinesParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::format::EndLineType endline) {
	LinesParseFormat_obj *__this = (LinesParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinesParseFormat_obj), true, "polymod.format.LinesParseFormat"));
	*(void **)__this = LinesParseFormat_obj::_hx_vtable;
	__this->__construct(endline);
	return __this;
}

LinesParseFormat_obj::LinesParseFormat_obj()
{
}

void LinesParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinesParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(endline,"endline");
	HX_MARK_END_CLASS();
}

void LinesParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(endline,"endline");
}

::hx::Val LinesParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endline") ) { return ::hx::Val( endline ); }
		if (HX_FIELD_EQ(inName,"getEndl") ) { return ::hx::Val( getEndl_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinesParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endline") ) { endline=inValue.Cast<  ::polymod::format::EndLineType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinesParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("endline",4f,a5,fe,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinesParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(LinesParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsObject /*  ::polymod::format::EndLineType */ ,(int)offsetof(LinesParseFormat_obj,endline),HX_("endline",4f,a5,fe,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinesParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String LinesParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("endline",4f,a5,fe,3e),
	HX_("parse",33,90,55,bd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	HX_("print",2d,58,8b,c8),
	HX_("getEndl",e7,0b,99,15),
	::String(null()) };

::hx::Class LinesParseFormat_obj::__mClass;

void LinesParseFormat_obj::__register()
{
	LinesParseFormat_obj _hx_dummy;
	LinesParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.LinesParseFormat",ca,4a,be,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinesParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinesParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinesParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinesParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
