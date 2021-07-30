#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fad42dc018b4609c_19_new,"flixel.input.actions.FlxActionInputDigital","new",0x6bdb3781,"flixel.input.actions.FlxActionInputDigital.new","flixel/input/actions/FlxActionInputDigital.hx",19,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigital_obj::__construct( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID){
            		int DeviceID = __o_DeviceID.Default(-2);
            	HX_STACKFRAME(&_hx_pos_fad42dc018b4609c_19_new)
HXLINE(  20)		super::__construct(::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn(),Device,InputID,Trigger,DeviceID);
HXLINE(  21)		this->inputID = InputID;
            	}

Dynamic FlxActionInputDigital_obj::__CreateEmpty() { return new FlxActionInputDigital_obj; }

void *FlxActionInputDigital_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigital_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigital_obj > _hx_result = new FlxActionInputDigital_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxActionInputDigital_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1600da07) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
	} else {
		return inClassId==(int)0x20308a99;
	}
}


::hx::ObjectPtr< FlxActionInputDigital_obj > FlxActionInputDigital_obj::__new( ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID) {
	::hx::ObjectPtr< FlxActionInputDigital_obj > __this = new FlxActionInputDigital_obj();
	__this->__construct(Device,InputID,Trigger,__o_DeviceID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigital_obj > FlxActionInputDigital_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID) {
	FlxActionInputDigital_obj *__this = (FlxActionInputDigital_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigital_obj), true, "flixel.input.actions.FlxActionInputDigital"));
	*(void **)__this = FlxActionInputDigital_obj::_hx_vtable;
	__this->__construct(Device,InputID,Trigger,__o_DeviceID);
	return __this;
}

FlxActionInputDigital_obj::FlxActionInputDigital_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxActionInputDigital_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxActionInputDigital_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxActionInputDigital_obj::__mClass;

void FlxActionInputDigital_obj::__register()
{
	FlxActionInputDigital_obj _hx_dummy;
	FlxActionInputDigital_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigital",0f,63,2f,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigital_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigital_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigital_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
