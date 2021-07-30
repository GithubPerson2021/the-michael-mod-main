#ifndef INCLUDED_Control
#define INCLUDED_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Control)


class Control_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Control_obj OBJ_;

	public:
		Control_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Control",3d,93,d2,e6); }
		::String __ToString() const { return HX_("Control.",51,42,6e,11) + _hx_tag; }

		static ::Control ACCEPT;
		static inline ::Control ACCEPT_dyn() { return ACCEPT; }
		static ::Control BACK;
		static inline ::Control BACK_dyn() { return BACK; }
		static ::Control CHEAT;
		static inline ::Control CHEAT_dyn() { return CHEAT; }
		static ::Control D1;
		static inline ::Control D1_dyn() { return D1; }
		static ::Control DOWN;
		static inline ::Control DOWN_dyn() { return DOWN; }
		static ::Control L1;
		static inline ::Control L1_dyn() { return L1; }
		static ::Control L2;
		static inline ::Control L2_dyn() { return L2; }
		static ::Control LEFT;
		static inline ::Control LEFT_dyn() { return LEFT; }
		static ::Control N0;
		static inline ::Control N0_dyn() { return N0; }
		static ::Control N1;
		static inline ::Control N1_dyn() { return N1; }
		static ::Control N2;
		static inline ::Control N2_dyn() { return N2; }
		static ::Control N3;
		static inline ::Control N3_dyn() { return N3; }
		static ::Control N4;
		static inline ::Control N4_dyn() { return N4; }
		static ::Control N5;
		static inline ::Control N5_dyn() { return N5; }
		static ::Control N6;
		static inline ::Control N6_dyn() { return N6; }
		static ::Control N7;
		static inline ::Control N7_dyn() { return N7; }
		static ::Control N8;
		static inline ::Control N8_dyn() { return N8; }
		static ::Control PAUSE;
		static inline ::Control PAUSE_dyn() { return PAUSE; }
		static ::Control R1;
		static inline ::Control R1_dyn() { return R1; }
		static ::Control R2;
		static inline ::Control R2_dyn() { return R2; }
		static ::Control RESET;
		static inline ::Control RESET_dyn() { return RESET; }
		static ::Control RIGHT;
		static inline ::Control RIGHT_dyn() { return RIGHT; }
		static ::Control U1;
		static inline ::Control U1_dyn() { return U1; }
		static ::Control UP;
		static inline ::Control UP_dyn() { return UP; }
};


#endif /* INCLUDED_Control */ 
