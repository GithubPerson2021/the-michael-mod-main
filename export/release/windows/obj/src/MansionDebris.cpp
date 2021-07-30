#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MansionDebris
#include <MansionDebris.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b2181d41ea64ac6_10_new,"MansionDebris","new",0xda44ffbc,"MansionDebris.new","MansionDebris.hx",10,0xaae14b34)
HX_LOCAL_STACK_FRAME(_hx_pos_7b2181d41ea64ac6_47_update,"MansionDebris","update",0x078b582d,"MansionDebris.update","MansionDebris.hx",47,0xaae14b34)

void MansionDebris_obj::__construct(Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor){
            	HX_STACKFRAME(&_hx_pos_7b2181d41ea64ac6_10_new)
HXLINE(  45)		this->hsp = ((Float)0);
HXLINE(  44)		this->vsp = ((Float)-20);
HXLINE(  43)		this->grav = ((Float)0.15);
HXLINE(  20)		this->time = ((Float)0);
HXLINE(  18)		this->sy = ((Float)0);
HXLINE(  17)		this->sx = ((Float)0);
HXLINE(  16)		this->pF = ((Float)1);
HXLINE(  15)		this->tD = ((Float)1);
HXLINE(  14)		this->tF = ((Float)1);
HXLINE(  13)		this->sc = ((Float)1);
HXLINE(  23)		this->sx = sX;
HXLINE(  24)		this->sy = sY;
HXLINE(  25)		this->set_x(this->sx);
HXLINE(  26)		this->set_y(this->sy);
HXLINE(  27)		super::__construct(this->x,this->y,null());
HXLINE(  28)		this->sc = scroll;
HXLINE(  29)		this->tF = tFactor;
HXLINE(  30)		this->tD = tDelay;
HXLINE(  31)		this->pF = posFactor;
HXLINE(  32)		::String library = null();
HXDLIN(  32)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("god_bg",28,50,9e,5a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  32)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("god_bg",28,50,9e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  33)		this->animation->addByPrefix(HX_("c",63,00,00,00),(HX_("deb_",7e,4f,66,42) + debName),30,null(),null(),null());
HXLINE(  35)		this->animation->play(HX_("c",63,00,00,00),null(),null(),null());
HXLINE(  36)		this->scrollFactor->set(this->sc,this->sc);
HXLINE(  37)		this->set_antialiasing(true);
HXLINE(  38)		this->setGraphicSize(::Std_obj::_hx_int((( (Float)(this->frameWidth) ) * (this->sc / ((Float)0.75)))),null());
HXLINE(  40)		this->updateHitbox();
            	}

Dynamic MansionDebris_obj::__CreateEmpty() { return new MansionDebris_obj; }

void *MansionDebris_obj::_hx_vtable = 0;

Dynamic MansionDebris_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MansionDebris_obj > _hx_result = new MansionDebris_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool MansionDebris_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4ab2c70a) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x4ab2c70a;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MansionDebris_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7b2181d41ea64ac6_47_update)
HXLINE(  48)		this->time++;
HXLINE(  49)		if ((this->tD != -4)) {
HXLINE(  51)			this->set_x(this->sx);
HXLINE(  52)			this->set_y((this->sy + ((::Math_obj::sin((((this->time + this->tD) / ( (Float)(50) )) * this->tF)) * ( (Float)(50) )) * this->pF)));
            		}
            		else {
HXLINE(  56)			this->hsp = this->pF;
HXLINE(  57)			 ::MansionDebris _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  57)			_hx_tmp->vsp = (_hx_tmp->vsp + this->grav);
HXLINE(  59)			this->set_x((this->x + this->hsp));
HXLINE(  60)			this->set_y((this->y + this->vsp));
HXLINE(  61)			this->set_angle((this->angle - (this->hsp / ( (Float)(2) ))));
            		}
HXLINE(  64)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< MansionDebris_obj > MansionDebris_obj::__new(Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor) {
	::hx::ObjectPtr< MansionDebris_obj > __this = new MansionDebris_obj();
	__this->__construct(sX,sY,debName,scroll,tFactor,tDelay,posFactor);
	return __this;
}

::hx::ObjectPtr< MansionDebris_obj > MansionDebris_obj::__alloc(::hx::Ctx *_hx_ctx,Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor) {
	MansionDebris_obj *__this = (MansionDebris_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MansionDebris_obj), true, "MansionDebris"));
	*(void **)__this = MansionDebris_obj::_hx_vtable;
	__this->__construct(sX,sY,debName,scroll,tFactor,tDelay,posFactor);
	return __this;
}

MansionDebris_obj::MansionDebris_obj()
{
}

::hx::Val MansionDebris_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sc") ) { return ::hx::Val( sc ); }
		if (HX_FIELD_EQ(inName,"tF") ) { return ::hx::Val( tF ); }
		if (HX_FIELD_EQ(inName,"tD") ) { return ::hx::Val( tD ); }
		if (HX_FIELD_EQ(inName,"pF") ) { return ::hx::Val( pF ); }
		if (HX_FIELD_EQ(inName,"sx") ) { return ::hx::Val( sx ); }
		if (HX_FIELD_EQ(inName,"sy") ) { return ::hx::Val( sy ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vsp") ) { return ::hx::Val( vsp ); }
		if (HX_FIELD_EQ(inName,"hsp") ) { return ::hx::Val( hsp ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"grav") ) { return ::hx::Val( grav ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MansionDebris_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sc") ) { sc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tF") ) { tF=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tD") ) { tD=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pF") ) { pF=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sx") ) { sx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sy") ) { sy=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"vsp") ) { vsp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hsp") ) { hsp=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grav") ) { grav=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MansionDebris_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sc",90,64,00,00));
	outFields->push(HX_("tF",52,65,00,00));
	outFields->push(HX_("tD",50,65,00,00));
	outFields->push(HX_("pF",d6,61,00,00));
	outFields->push(HX_("sx",a5,64,00,00));
	outFields->push(HX_("sy",a6,64,00,00));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("grav",e0,cf,6b,44));
	outFields->push(HX_("vsp",93,ee,59,00));
	outFields->push(HX_("hsp",05,4f,4f,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MansionDebris_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,sc),HX_("sc",90,64,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,tF),HX_("tF",52,65,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,tD),HX_("tD",50,65,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,pF),HX_("pF",d6,61,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,sx),HX_("sx",a5,64,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,sy),HX_("sy",a6,64,00,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,grav),HX_("grav",e0,cf,6b,44)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,vsp),HX_("vsp",93,ee,59,00)},
	{::hx::fsFloat,(int)offsetof(MansionDebris_obj,hsp),HX_("hsp",05,4f,4f,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MansionDebris_obj_sStaticStorageInfo = 0;
#endif

static ::String MansionDebris_obj_sMemberFields[] = {
	HX_("sc",90,64,00,00),
	HX_("tF",52,65,00,00),
	HX_("tD",50,65,00,00),
	HX_("pF",d6,61,00,00),
	HX_("sx",a5,64,00,00),
	HX_("sy",a6,64,00,00),
	HX_("time",0d,cc,fc,4c),
	HX_("grav",e0,cf,6b,44),
	HX_("vsp",93,ee,59,00),
	HX_("hsp",05,4f,4f,00),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MansionDebris_obj::__mClass;

void MansionDebris_obj::__register()
{
	MansionDebris_obj _hx_dummy;
	MansionDebris_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MansionDebris",ca,b1,6b,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MansionDebris_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MansionDebris_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MansionDebris_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MansionDebris_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

