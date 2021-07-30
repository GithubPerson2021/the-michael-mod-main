#ifndef INCLUDED_KeyboardScheme
#define INCLUDED_KeyboardScheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(KeyboardScheme)


class KeyboardScheme_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef KeyboardScheme_obj OBJ_;

	public:
		KeyboardScheme_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("KeyboardScheme",4c,5c,4a,70); }
		::String __ToString() const { return HX_("KeyboardScheme.",62,66,c6,d0) + _hx_tag; }

		static ::KeyboardScheme Custom;
		static inline ::KeyboardScheme Custom_dyn() { return Custom; }
		static ::KeyboardScheme Duo(bool first);
		static ::Dynamic Duo_dyn();
		static ::KeyboardScheme None;
		static inline ::KeyboardScheme None_dyn() { return None; }
		static ::KeyboardScheme Solo;
		static inline ::KeyboardScheme Solo_dyn() { return Solo; }
		static ::KeyboardScheme Woops;
		static inline ::KeyboardScheme Woops_dyn() { return Woops; }
};


#endif /* INCLUDED_KeyboardScheme */ 
