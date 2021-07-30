#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_HEAPSBackend
#include <polymod/backends/HEAPSBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_NMEBackend
#include <polymod/backends/NMEBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_OpenFLBackend
#include <polymod/backends/OpenFLBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_72_init,"polymod.backends.PolymodAssets","init",0x336e0b5c,"polymod.backends.PolymodAssets.init","polymod/backends/PolymodAssets.hx",72,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_126_exists,"polymod.backends.PolymodAssets","exists",0x9c209928,"polymod.backends.PolymodAssets.exists","polymod/backends/PolymodAssets.hx",126,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_127_getBytes,"polymod.backends.PolymodAssets","getBytes",0xe73dfe41,"polymod.backends.PolymodAssets.getBytes","polymod/backends/PolymodAssets.hx",127,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_128_getText,"polymod.backends.PolymodAssets","getText",0xfba7e397,"polymod.backends.PolymodAssets.getText","polymod/backends/PolymodAssets.hx",128,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_129_getPath,"polymod.backends.PolymodAssets","getPath",0xf8fffc8f,"polymod.backends.PolymodAssets.getPath","polymod/backends/PolymodAssets.hx",129,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_131_list,"polymod.backends.PolymodAssets","list",0x3565ecaa,"polymod.backends.PolymodAssets.list","polymod/backends/PolymodAssets.hx",131,0xd8b6783c)
HX_LOCAL_STACK_FRAME(_hx_pos_5b88a33584460d08_146_autoDetectFramework,"polymod.backends.PolymodAssets","autoDetectFramework",0x6c71ec20,"polymod.backends.PolymodAssets.autoDetectFramework","polymod/backends/PolymodAssets.hx",146,0xd8b6783c)
namespace polymod{
namespace backends{

void PolymodAssets_obj::__construct() { }

Dynamic PolymodAssets_obj::__CreateEmpty() { return new PolymodAssets_obj; }

void *PolymodAssets_obj::_hx_vtable = 0;

Dynamic PolymodAssets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolymodAssets_obj > _hx_result = new PolymodAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolymodAssets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2bce5b4c;
}

 ::polymod::backends::PolymodAssetLibrary PolymodAssets_obj::init( ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_5b88a33584460d08_72_init)
HXLINE(  73)		 ::polymod::Framework framework = params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic);
HXLINE(  74)		if (::hx::IsNull( framework )) {
HXLINE(  76)			framework = ::polymod::backends::PolymodAssets_obj::autoDetectFramework();
HXLINE(  77)			::polymod::Polymod_obj::notice(HX_("framework_autodetect",73,b0,56,0a),(HX_(" going with ",54,12,63,db) + ::Std_obj::string(framework)),null());
            		}
            		else {
HXLINE(  81)			::polymod::Polymod_obj::notice(HX_("framework_init",b1,b9,06,67),(HX_(" user specified ",85,84,b1,a5) + ::Std_obj::string(framework)),null());
            		}
HXLINE(  83)		::Dynamic backend;
HXDLIN(  83)		switch((int)(framework->_hx_getIndex())){
            			case (int)0: {
HXLINE(  83)				backend =  ::polymod::backends::NMEBackend_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)1: {
HXLINE(  83)				backend =  ::polymod::backends::LimeBackend_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)2: {
HXLINE(  83)				backend =  ::polymod::backends::OpenFLBackend_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)3: {
HXLINE(  83)				backend =  ::polymod::backends::HEAPSBackend_obj::__alloc( HX_CTX );
            			}
            			break;
            			case (int)5: {
HXLINE(  91)				if (::hx::IsNotNull( params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic) )) {
HXLINE(  83)					backend = ::Type_obj::createInstance(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(0));
            				}
            				else {
HXLINE(  97)					::polymod::Polymod_obj::error(HX_("undefined_custom_backend",55,22,be,1a),HX_("params.customBackend was not defined!",c1,92,8f,a0),null());
HXLINE(  83)					backend = null();
            				}
            			}
            			break;
            			default:{
HXLINE(  83)				backend = null();
            			}
            		}
HXLINE( 102)		if (::hx::IsNull( backend )) {
HXLINE( 104)			::polymod::Polymod_obj::error(HX_("failed_create_backend",13,58,1e,db),((HX_("could not create a backend for framework(",04,e6,ea,e7) + ::Std_obj::string(framework)) + HX_(")!",d8,23,00,00)),null());
HXLINE( 105)			return null();
            		}
HXLINE( 108)		if (::hx::IsNotNull( ::polymod::backends::PolymodAssets_obj::library )) {
HXLINE( 110)			::polymod::backends::PolymodAssets_obj::library->destroy();
            		}
HXLINE( 113)		::polymod::backends::PolymodAssets_obj::library =  ::polymod::backends::PolymodAssetLibrary_obj::__alloc( HX_CTX , ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("backend",14,bc,87,fb),backend)
            			->setFixed(1,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(2,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(3,HX_("dirs",86,66,69,42), ::Dynamic(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)))
            			->setFixed(4,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 121)		::polymod::backends::IBackend_obj::init(backend);
HXLINE( 123)		return ::polymod::backends::PolymodAssets_obj::library;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,init,return )

bool PolymodAssets_obj::exists(::String id){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_126_exists)
HXDLIN( 126)		return ::polymod::backends::PolymodAssets_obj::library->exists(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,exists,return )

 ::haxe::io::Bytes PolymodAssets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_127_getBytes)
HXDLIN( 127)		return ::polymod::backends::PolymodAssets_obj::library->getBytes(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,getBytes,return )

::String PolymodAssets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_128_getText)
HXDLIN( 128)		return ::polymod::backends::PolymodAssets_obj::library->getText(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,getText,return )

::String PolymodAssets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_129_getPath)
HXDLIN( 129)		return ::polymod::backends::PolymodAssets_obj::library->getPath(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,getPath,return )

::Array< ::String > PolymodAssets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_131_list)
HXDLIN( 131)		return ::polymod::backends::PolymodAssets_obj::library->list(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodAssets_obj,list,return )

 ::polymod::backends::PolymodAssetLibrary PolymodAssets_obj::library;

 ::polymod::Framework PolymodAssets_obj::autoDetectFramework(){
            	HX_STACKFRAME(&_hx_pos_5b88a33584460d08_146_autoDetectFramework)
HXDLIN( 146)		return ::polymod::Framework_obj::OPENFL_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PolymodAssets_obj,autoDetectFramework,return )


PolymodAssets_obj::PolymodAssets_obj()
{
}

bool PolymodAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"autoDetectFramework") ) { outValue = autoDetectFramework_dyn(); return true; }
	}
	return false;
}

bool PolymodAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PolymodAssets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PolymodAssets_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &PolymodAssets_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PolymodAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolymodAssets_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PolymodAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolymodAssets_obj::library,"library");
};

#endif

::hx::Class PolymodAssets_obj::__mClass;

static ::String PolymodAssets_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("library",fb,26,70,3f),
	HX_("autoDetectFramework",ec,86,2e,de),
	::String(null())
};

void PolymodAssets_obj::__register()
{
	PolymodAssets_obj _hx_dummy;
	PolymodAssets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.PolymodAssets",a2,73,2b,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PolymodAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &PolymodAssets_obj::__SetStatic;
	__mClass->mMarkFunc = PolymodAssets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PolymodAssets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PolymodAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PolymodAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolymodAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolymodAssets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
