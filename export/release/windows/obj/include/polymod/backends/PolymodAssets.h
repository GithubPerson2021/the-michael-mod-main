#ifndef INCLUDED_polymod_backends_PolymodAssets
#define INCLUDED_polymod_backends_PolymodAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(polymod,Framework)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssetLibrary)
HX_DECLARE_CLASS2(polymod,backends,PolymodAssets)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES PolymodAssets_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolymodAssets_obj OBJ_;
		PolymodAssets_obj();

	public:
		enum { _hx_ClassId = 0x2bce5b4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.backends.PolymodAssets")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.backends.PolymodAssets"); }

		inline static ::hx::ObjectPtr< PolymodAssets_obj > __new() {
			::hx::ObjectPtr< PolymodAssets_obj > __this = new PolymodAssets_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PolymodAssets_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PolymodAssets_obj *__this = (PolymodAssets_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolymodAssets_obj), false, "polymod.backends.PolymodAssets"));
			*(void **)__this = PolymodAssets_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolymodAssets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolymodAssets",f9,f8,d2,eb); }

		static  ::polymod::backends::PolymodAssetLibrary init( ::Dynamic params);
		static ::Dynamic init_dyn();

		static bool exists(::String id);
		static ::Dynamic exists_dyn();

		static  ::haxe::io::Bytes getBytes(::String id);
		static ::Dynamic getBytes_dyn();

		static ::String getText(::String id);
		static ::Dynamic getText_dyn();

		static ::String getPath(::String id);
		static ::Dynamic getPath_dyn();

		static ::Array< ::String > list(::String type);
		static ::Dynamic list_dyn();

		static  ::polymod::backends::PolymodAssetLibrary library;
		static  ::polymod::Framework autoDetectFramework();
		static ::Dynamic autoDetectFramework_dyn();

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_PolymodAssets */ 
