#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fence
#define INCLUDED_lime_graphics_opengl_ext_NV_fence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9db5615dca29a616_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_fence)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_fence_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_fence_obj OBJ_;
		NV_fence_obj();

	public:
		enum { _hx_ClassId = 0x0efaec48 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_fence")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_fence"); }

		inline static ::hx::ObjectPtr< NV_fence_obj > __new() {
			::hx::ObjectPtr< NV_fence_obj > __this = new NV_fence_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_fence_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_fence_obj *__this = (NV_fence_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_fence_obj), false, "lime.graphics.opengl.ext.NV_fence"));
			*(void **)__this = NV_fence_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9db5615dca29a616_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NV_fence)(__this) )->FENCE_CONDITION_NV = 34036;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NV_fence)(__this) )->FENCE_STATUS_NV = 34035;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::NV_fence)(__this) )->ALL_COMPLETED_NV = 34034;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_fence_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_fence",3a,78,71,5f); }

		int ALL_COMPLETED_NV;
		int FENCE_STATUS_NV;
		int FENCE_CONDITION_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_fence */ 
