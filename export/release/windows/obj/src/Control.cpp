#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif

::Control Control_obj::ACCEPT;

::Control Control_obj::BACK;

::Control Control_obj::CHEAT;

::Control Control_obj::D1;

::Control Control_obj::DOWN;

::Control Control_obj::L1;

::Control Control_obj::L2;

::Control Control_obj::LEFT;

::Control Control_obj::N0;

::Control Control_obj::N1;

::Control Control_obj::N2;

::Control Control_obj::N3;

::Control Control_obj::N4;

::Control Control_obj::N5;

::Control Control_obj::N6;

::Control Control_obj::N7;

::Control Control_obj::N8;

::Control Control_obj::PAUSE;

::Control Control_obj::R1;

::Control Control_obj::R2;

::Control Control_obj::RESET;

::Control Control_obj::RIGHT;

::Control Control_obj::U1;

::Control Control_obj::UP;

bool Control_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) { outValue = Control_obj::ACCEPT; return true; }
	if (inName==HX_("BACK",27,a2,d1,2b)) { outValue = Control_obj::BACK; return true; }
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) { outValue = Control_obj::CHEAT; return true; }
	if (inName==HX_("D1",6d,3b,00,00)) { outValue = Control_obj::D1; return true; }
	if (inName==HX_("DOWN",62,c0,2e,2d)) { outValue = Control_obj::DOWN; return true; }
	if (inName==HX_("L1",65,42,00,00)) { outValue = Control_obj::L1; return true; }
	if (inName==HX_("L2",66,42,00,00)) { outValue = Control_obj::L2; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = Control_obj::LEFT; return true; }
	if (inName==HX_("N0",22,44,00,00)) { outValue = Control_obj::N0; return true; }
	if (inName==HX_("N1",23,44,00,00)) { outValue = Control_obj::N1; return true; }
	if (inName==HX_("N2",24,44,00,00)) { outValue = Control_obj::N2; return true; }
	if (inName==HX_("N3",25,44,00,00)) { outValue = Control_obj::N3; return true; }
	if (inName==HX_("N4",26,44,00,00)) { outValue = Control_obj::N4; return true; }
	if (inName==HX_("N5",27,44,00,00)) { outValue = Control_obj::N5; return true; }
	if (inName==HX_("N6",28,44,00,00)) { outValue = Control_obj::N6; return true; }
	if (inName==HX_("N7",29,44,00,00)) { outValue = Control_obj::N7; return true; }
	if (inName==HX_("N8",2a,44,00,00)) { outValue = Control_obj::N8; return true; }
	if (inName==HX_("PAUSE",d6,0e,46,3b)) { outValue = Control_obj::PAUSE; return true; }
	if (inName==HX_("R1",9f,47,00,00)) { outValue = Control_obj::R1; return true; }
	if (inName==HX_("R2",a0,47,00,00)) { outValue = Control_obj::R2; return true; }
	if (inName==HX_("RESET",af,81,b6,64)) { outValue = Control_obj::RESET; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = Control_obj::RIGHT; return true; }
	if (inName==HX_("U1",3c,4a,00,00)) { outValue = Control_obj::U1; return true; }
	if (inName==HX_("UP",5b,4a,00,00)) { outValue = Control_obj::UP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Control_obj)

int Control_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 5;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 6;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return 8;
	if (inName==HX_("D1",6d,3b,00,00)) return 13;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 3;
	if (inName==HX_("L1",65,42,00,00)) return 9;
	if (inName==HX_("L2",66,42,00,00)) return 12;
	if (inName==HX_("LEFT",07,d0,70,32)) return 1;
	if (inName==HX_("N0",22,44,00,00)) return 15;
	if (inName==HX_("N1",23,44,00,00)) return 16;
	if (inName==HX_("N2",24,44,00,00)) return 17;
	if (inName==HX_("N3",25,44,00,00)) return 18;
	if (inName==HX_("N4",26,44,00,00)) return 19;
	if (inName==HX_("N5",27,44,00,00)) return 20;
	if (inName==HX_("N6",28,44,00,00)) return 21;
	if (inName==HX_("N7",29,44,00,00)) return 22;
	if (inName==HX_("N8",2a,44,00,00)) return 23;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 7;
	if (inName==HX_("R1",9f,47,00,00)) return 11;
	if (inName==HX_("R2",a0,47,00,00)) return 14;
	if (inName==HX_("RESET",af,81,b6,64)) return 4;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 2;
	if (inName==HX_("U1",3c,4a,00,00)) return 10;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindIndex(inName);
}

int Control_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 0;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 0;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return 0;
	if (inName==HX_("D1",6d,3b,00,00)) return 0;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 0;
	if (inName==HX_("L1",65,42,00,00)) return 0;
	if (inName==HX_("L2",66,42,00,00)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("N0",22,44,00,00)) return 0;
	if (inName==HX_("N1",23,44,00,00)) return 0;
	if (inName==HX_("N2",24,44,00,00)) return 0;
	if (inName==HX_("N3",25,44,00,00)) return 0;
	if (inName==HX_("N4",26,44,00,00)) return 0;
	if (inName==HX_("N5",27,44,00,00)) return 0;
	if (inName==HX_("N6",28,44,00,00)) return 0;
	if (inName==HX_("N7",29,44,00,00)) return 0;
	if (inName==HX_("N8",2a,44,00,00)) return 0;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 0;
	if (inName==HX_("R1",9f,47,00,00)) return 0;
	if (inName==HX_("R2",a0,47,00,00)) return 0;
	if (inName==HX_("RESET",af,81,b6,64)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("U1",3c,4a,00,00)) return 0;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Control_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return ACCEPT;
	if (inName==HX_("BACK",27,a2,d1,2b)) return BACK;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return CHEAT;
	if (inName==HX_("D1",6d,3b,00,00)) return D1;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return DOWN;
	if (inName==HX_("L1",65,42,00,00)) return L1;
	if (inName==HX_("L2",66,42,00,00)) return L2;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("N0",22,44,00,00)) return N0;
	if (inName==HX_("N1",23,44,00,00)) return N1;
	if (inName==HX_("N2",24,44,00,00)) return N2;
	if (inName==HX_("N3",25,44,00,00)) return N3;
	if (inName==HX_("N4",26,44,00,00)) return N4;
	if (inName==HX_("N5",27,44,00,00)) return N5;
	if (inName==HX_("N6",28,44,00,00)) return N6;
	if (inName==HX_("N7",29,44,00,00)) return N7;
	if (inName==HX_("N8",2a,44,00,00)) return N8;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return PAUSE;
	if (inName==HX_("R1",9f,47,00,00)) return R1;
	if (inName==HX_("R2",a0,47,00,00)) return R2;
	if (inName==HX_("RESET",af,81,b6,64)) return RESET;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("U1",3c,4a,00,00)) return U1;
	if (inName==HX_("UP",5b,4a,00,00)) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String Control_obj_sStaticFields[] = {
	HX_("UP",5b,4a,00,00),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("DOWN",62,c0,2e,2d),
	HX_("RESET",af,81,b6,64),
	HX_("ACCEPT",08,3f,89,bd),
	HX_("BACK",27,a2,d1,2b),
	HX_("PAUSE",d6,0e,46,3b),
	HX_("CHEAT",f3,ce,a4,c3),
	HX_("L1",65,42,00,00),
	HX_("U1",3c,4a,00,00),
	HX_("R1",9f,47,00,00),
	HX_("L2",66,42,00,00),
	HX_("D1",6d,3b,00,00),
	HX_("R2",a0,47,00,00),
	HX_("N0",22,44,00,00),
	HX_("N1",23,44,00,00),
	HX_("N2",24,44,00,00),
	HX_("N3",25,44,00,00),
	HX_("N4",26,44,00,00),
	HX_("N5",27,44,00,00),
	HX_("N6",28,44,00,00),
	HX_("N7",29,44,00,00),
	HX_("N8",2a,44,00,00),
	::String(null())
};

::hx::Class Control_obj::__mClass;

Dynamic __Create_Control_obj() { return new Control_obj; }

void Control_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Control",3d,93,d2,e6), ::hx::TCanCast< Control_obj >,Control_obj_sStaticFields,0,
	&__Create_Control_obj, &__Create,
	&super::__SGetClass(), &CreateControl_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Control_obj::__GetStatic;
}

void Control_obj::__boot()
{
ACCEPT = ::hx::CreateConstEnum< Control_obj >(HX_("ACCEPT",08,3f,89,bd),5);
BACK = ::hx::CreateConstEnum< Control_obj >(HX_("BACK",27,a2,d1,2b),6);
CHEAT = ::hx::CreateConstEnum< Control_obj >(HX_("CHEAT",f3,ce,a4,c3),8);
D1 = ::hx::CreateConstEnum< Control_obj >(HX_("D1",6d,3b,00,00),13);
DOWN = ::hx::CreateConstEnum< Control_obj >(HX_("DOWN",62,c0,2e,2d),3);
L1 = ::hx::CreateConstEnum< Control_obj >(HX_("L1",65,42,00,00),9);
L2 = ::hx::CreateConstEnum< Control_obj >(HX_("L2",66,42,00,00),12);
LEFT = ::hx::CreateConstEnum< Control_obj >(HX_("LEFT",07,d0,70,32),1);
N0 = ::hx::CreateConstEnum< Control_obj >(HX_("N0",22,44,00,00),15);
N1 = ::hx::CreateConstEnum< Control_obj >(HX_("N1",23,44,00,00),16);
N2 = ::hx::CreateConstEnum< Control_obj >(HX_("N2",24,44,00,00),17);
N3 = ::hx::CreateConstEnum< Control_obj >(HX_("N3",25,44,00,00),18);
N4 = ::hx::CreateConstEnum< Control_obj >(HX_("N4",26,44,00,00),19);
N5 = ::hx::CreateConstEnum< Control_obj >(HX_("N5",27,44,00,00),20);
N6 = ::hx::CreateConstEnum< Control_obj >(HX_("N6",28,44,00,00),21);
N7 = ::hx::CreateConstEnum< Control_obj >(HX_("N7",29,44,00,00),22);
N8 = ::hx::CreateConstEnum< Control_obj >(HX_("N8",2a,44,00,00),23);
PAUSE = ::hx::CreateConstEnum< Control_obj >(HX_("PAUSE",d6,0e,46,3b),7);
R1 = ::hx::CreateConstEnum< Control_obj >(HX_("R1",9f,47,00,00),11);
R2 = ::hx::CreateConstEnum< Control_obj >(HX_("R2",a0,47,00,00),14);
RESET = ::hx::CreateConstEnum< Control_obj >(HX_("RESET",af,81,b6,64),4);
RIGHT = ::hx::CreateConstEnum< Control_obj >(HX_("RIGHT",bc,43,52,67),2);
U1 = ::hx::CreateConstEnum< Control_obj >(HX_("U1",3c,4a,00,00),10);
UP = ::hx::CreateConstEnum< Control_obj >(HX_("UP",5b,4a,00,00),0);
}


