#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Register
#define INCLUDED_openfl_utils__AGALMiniAssembler_Register

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_AGALMiniAssembler,Register)

namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{


class HXCPP_CLASS_ATTRIBUTES Register_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Register_obj OBJ_;
		Register_obj();

	public:
		enum { _hx_ClassId = 0x4aa50495 };

		void __construct(::String name,::String longName,int emitCode,int range,int flags);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.utils._AGALMiniAssembler.Register")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.utils._AGALMiniAssembler.Register"); }
		static ::hx::ObjectPtr< Register_obj > __new(::String name,::String longName,int emitCode,int range,int flags);
		static ::hx::ObjectPtr< Register_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,::String longName,int emitCode,int range,int flags);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Register_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Register",83,62,51,aa); }

		static void __boot();
		static  ::Dynamic __meta__;
		int emitCode;
		::String name;
		::String longName;
		int flags;
		int range;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler

#endif /* INCLUDED_openfl_utils__AGALMiniAssembler_Register */ 
