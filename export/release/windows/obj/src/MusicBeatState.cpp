#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_495f89d9d0902be3_10_new,"MusicBeatState","new",0xdae47368,"MusicBeatState.new","MusicBeatState.hx",10,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_20_get_controls,"MusicBeatState","get_controls",0xacecf677,"MusicBeatState.get_controls","MusicBeatState.hx",20,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_23_create,"MusicBeatState","create",0x5e9058f4,"MusicBeatState.create","MusicBeatState.hx",23,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_31_update,"MusicBeatState","update",0x69867801,"MusicBeatState.update","MusicBeatState.hx",31,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_46_updateBeat,"MusicBeatState","updateBeat",0x79761a17,"MusicBeatState.updateBeat","MusicBeatState.hx",46,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_50_updateCurStep,"MusicBeatState","updateCurStep",0xd6ad7aeb,"MusicBeatState.updateCurStep","MusicBeatState.hx",50,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_67_stepHit,"MusicBeatState","stepHit",0xcf94756f,"MusicBeatState.stepHit","MusicBeatState.hx",67,0xa1b2f108)
HX_LOCAL_STACK_FRAME(_hx_pos_495f89d9d0902be3_72_beatHit,"MusicBeatState","beatHit",0xc257b185,"MusicBeatState.beatHit","MusicBeatState.hx",72,0xa1b2f108)

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_10_new)
HXLINE(  16)		this->curBeat = 0;
HXLINE(  15)		this->curStep = 0;
HXLINE(  13)		this->lastStep = ((Float)0);
HXLINE(  12)		this->lastBeat = ((Float)0);
HXLINE(  10)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

 ::Controls MusicBeatState_obj::get_controls(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_20_get_controls)
HXDLIN(  20)		return ::PlayerSettings_obj::player1->controls;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,get_controls,return )

void MusicBeatState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_23_create)
HXLINE(  24)		if (::hx::IsNotNull( this->transIn )) {
HXLINE(  25)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  25)			::String _hx_tmp1 = (HX_("reg ",4c,50,a7,4b) + ::Std_obj::string(this->transIn->region));
HXDLIN(  25)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/MusicBeatState.hx",94,cf,99,e4),25,HX_("MusicBeatState",76,df,84,5d),HX_("create",fc,66,0f,7c)));
            		}
HXLINE(  27)		this->super::create();
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_31_update)
HXLINE(  33)		int oldStep = this->curStep;
HXLINE(  35)		this->updateCurStep();
HXLINE(  36)		this->updateBeat();
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if ((oldStep != this->curStep)) {
HXLINE(  38)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  39)			this->stepHit();
            		}
HXLINE(  41)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_46_updateBeat)
HXDLIN(  46)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_50_updateCurStep)
HXLINE(  51)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),0)
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			int _g1 = ::Conductor_obj::bpmChangeMap->length;
HXDLIN(  56)			while((_g < _g1)){
HXLINE(  56)				_g = (_g + 1);
HXDLIN(  56)				int i = (_g - 1);
HXLINE(  58)				if (::hx::IsGreaterEq( ::Conductor_obj::songPosition,::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  59)					lastChange = ::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  62)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_67_stepHit)
HXDLIN(  67)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE(  68)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_495f89d9d0902be3_72_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		if (HX_FIELD_EQ(inName,"controls") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_controls() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controls") ) { return ::hx::Val( get_controls_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	outFields->push(HX_("controls",76,86,bc,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatState_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("get_controls",7f,3a,d6,ec),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatState_obj::__mClass;

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MusicBeatState",76,df,84,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

