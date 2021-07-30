#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GitarooPause
#include <GitarooPause.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d11df95f4b130531_7_new,"GitarooPause","new",0x601e9925,"GitarooPause.new","GitarooPause.hx",7,0xccc591eb)
HX_LOCAL_STACK_FRAME(_hx_pos_d11df95f4b130531_20_create,"GitarooPause","create",0x4b68a757,"GitarooPause.create","GitarooPause.hx",20,0xccc591eb)
HX_LOCAL_STACK_FRAME(_hx_pos_d11df95f4b130531_54_update,"GitarooPause","update",0x565ec664,"GitarooPause.update","GitarooPause.hx",54,0xccc591eb)
HX_LOCAL_STACK_FRAME(_hx_pos_d11df95f4b130531_74_changeThing,"GitarooPause","changeThing",0x5ce7c623,"GitarooPause.changeThing","GitarooPause.hx",74,0xccc591eb)

void GitarooPause_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d11df95f4b130531_7_new)
HXLINE(  12)		this->replaySelect = false;
HXLINE(  16)		super::__construct(null(),null());
            	}

Dynamic GitarooPause_obj::__CreateEmpty() { return new GitarooPause_obj; }

void *GitarooPause_obj::_hx_vtable = 0;

Dynamic GitarooPause_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GitarooPause_obj > _hx_result = new GitarooPause_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GitarooPause_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41d17573) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x41d17573;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GitarooPause_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_d11df95f4b130531_20_create)
HXLINE(  21)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  22)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  22)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE(  24)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  24)		::String library = null();
HXDLIN(  24)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/pauseBG",bf,d0,5d,69)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  25)		this->add(bg1);
HXLINE(  27)		 ::flixel::FlxSprite bf =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,30,null());
HXLINE(  28)		::String library1 = null();
HXDLIN(  28)		::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/bfLol",a9,d6,8a,6b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  28)		bf->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/bfLol",a9,d6,8a,6b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  29)		bf->animation->addByPrefix(HX_("lol",89,54,52,00),HX_("funnyThing",44,71,cc,7b),13,null(),null(),null());
HXLINE(  30)		bf->animation->play(HX_("lol",89,54,52,00),null(),null(),null());
HXLINE(  31)		this->add(bf);
HXLINE(  32)		bf->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  34)		this->replayButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.28)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.7)),null());
HXLINE(  35)		 ::flixel::FlxSprite _hx_tmp1 = this->replayButton;
HXDLIN(  35)		::String library2 = null();
HXDLIN(  35)		::String _hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/pauseUI",4e,e1,5d,69)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  35)		_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/pauseUI",4e,e1,5d,69)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE(  36)		this->replayButton->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("bluereplay",41,19,e2,2c),0,false,null(),null());
HXLINE(  37)		this->replayButton->animation->appendByPrefix(HX_("selected",5b,2a,6d,b1),HX_("yellowreplay",9b,95,59,30));
HXLINE(  38)		this->replayButton->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE(  39)		this->add(this->replayButton);
HXLINE(  41)		this->cancelButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.58)),this->replayButton->y,null());
HXLINE(  42)		 ::flixel::FlxSprite _hx_tmp3 = this->cancelButton;
HXDLIN(  42)		::String library3 = null();
HXDLIN(  42)		::String _hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/pauseUI",4e,e1,5d,69)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3);
HXDLIN(  42)		_hx_tmp3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pauseAlt/pauseUI",4e,e1,5d,69)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3)));
HXLINE(  43)		this->cancelButton->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),HX_("bluecancel",94,1f,94,de),0,false,null(),null());
HXLINE(  44)		this->cancelButton->animation->appendByPrefix(HX_("selected",5b,2a,6d,b1),HX_("cancelyellow",6e,e4,fa,60));
HXLINE(  45)		this->cancelButton->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE(  46)		this->add(this->cancelButton);
HXLINE(  48)		this->changeThing();
HXLINE(  50)		this->super::create();
            	}


void GitarooPause_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_d11df95f4b130531_54_update)
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if (!(::PlayerSettings_obj::player1->controls->_leftP->check())) {
HXLINE(  55)			_hx_tmp = ::PlayerSettings_obj::player1->controls->_rightP->check();
            		}
            		else {
HXLINE(  55)			_hx_tmp = true;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			this->changeThing();
            		}
HXLINE(  58)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  60)			if (this->replaySelect) {
HXLINE(  62)				 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  62)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  62)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE(  66)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  66)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  66)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE(  70)		this->super::update(elapsed);
            	}


void GitarooPause_obj::changeThing(){
            	HX_STACKFRAME(&_hx_pos_d11df95f4b130531_74_changeThing)
HXLINE(  75)		this->replaySelect = !(this->replaySelect);
HXLINE(  77)		if (this->replaySelect) {
HXLINE(  79)			this->cancelButton->animation->_curAnim->set_curFrame(0);
HXLINE(  80)			this->replayButton->animation->_curAnim->set_curFrame(1);
            		}
            		else {
HXLINE(  84)			this->cancelButton->animation->_curAnim->set_curFrame(1);
HXLINE(  85)			this->replayButton->animation->_curAnim->set_curFrame(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GitarooPause_obj,changeThing,(void))


::hx::ObjectPtr< GitarooPause_obj > GitarooPause_obj::__new() {
	::hx::ObjectPtr< GitarooPause_obj > __this = new GitarooPause_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GitarooPause_obj > GitarooPause_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GitarooPause_obj *__this = (GitarooPause_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GitarooPause_obj), true, "GitarooPause"));
	*(void **)__this = GitarooPause_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GitarooPause_obj::GitarooPause_obj()
{
}

void GitarooPause_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GitarooPause);
	HX_MARK_MEMBER_NAME(replayButton,"replayButton");
	HX_MARK_MEMBER_NAME(cancelButton,"cancelButton");
	HX_MARK_MEMBER_NAME(replaySelect,"replaySelect");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GitarooPause_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(replayButton,"replayButton");
	HX_VISIT_MEMBER_NAME(cancelButton,"cancelButton");
	HX_VISIT_MEMBER_NAME(replaySelect,"replaySelect");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GitarooPause_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"changeThing") ) { return ::hx::Val( changeThing_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replayButton") ) { return ::hx::Val( replayButton ); }
		if (HX_FIELD_EQ(inName,"cancelButton") ) { return ::hx::Val( cancelButton ); }
		if (HX_FIELD_EQ(inName,"replaySelect") ) { return ::hx::Val( replaySelect ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GitarooPause_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"replayButton") ) { replayButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cancelButton") ) { cancelButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"replaySelect") ) { replaySelect=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GitarooPause_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("replayButton",79,14,a3,9f));
	outFields->push(HX_("cancelButton",0c,1b,13,9f));
	outFields->push(HX_("replaySelect",83,cd,f5,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GitarooPause_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GitarooPause_obj,replayButton),HX_("replayButton",79,14,a3,9f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GitarooPause_obj,cancelButton),HX_("cancelButton",0c,1b,13,9f)},
	{::hx::fsBool,(int)offsetof(GitarooPause_obj,replaySelect),HX_("replaySelect",83,cd,f5,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GitarooPause_obj_sStaticStorageInfo = 0;
#endif

static ::String GitarooPause_obj_sMemberFields[] = {
	HX_("replayButton",79,14,a3,9f),
	HX_("cancelButton",0c,1b,13,9f),
	HX_("replaySelect",83,cd,f5,2f),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeThing",5e,30,4f,35),
	::String(null()) };

::hx::Class GitarooPause_obj::__mClass;

void GitarooPause_obj::__register()
{
	GitarooPause_obj _hx_dummy;
	GitarooPause_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GitarooPause",b3,22,f0,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GitarooPause_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GitarooPause_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GitarooPause_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GitarooPause_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

