#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_NGio
#include <NGio.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_transition_GraphicTransTileDiamond
#include <flixel/addons/transition/GraphicTransTileDiamond.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Medal
#include <io/newgrounds/objects/Medal.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_29_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",29,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_110_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",110,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_44_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",44,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_3[] = {
	HX_("introMod",b6,4f,97,a2),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_121_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",121,0xd132a6e5)
static const int _hx_array_data_8ca18d79_5[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_6[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_228_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",228,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_245_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",245,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_300_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",300,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_341_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",341,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_352_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",352,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_362_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",362,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_371_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",371,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_17[] = {
	HX_("Mod by",95,20,27,f5),
};
static const ::String _hx_array_data_8ca18d79_18[] = {
	HX_("Using Kade dev engine",7a,9e,3d,a4),
};
static const ::String _hx_array_data_8ca18d79_19[] = {
	HX_("go play",ec,92,ec,d3),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_437_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",437,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_31_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",31,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_29_new)
HXLINE( 433)		this->skippedIntro = false;
HXLINE( 242)		this->transitioning = false;
HXLINE( 117)		this->danceLeft = false;
HXLINE(  39)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  29)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_110_create)
HXLINE( 110)			_gthis->startIntro();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_44_create)
HXDLIN(  44)		 ::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  46)		::polymod::Polymod_obj::init( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("modRoot",04,ba,da,e0),HX_("mods",71,d3,60,48))
            			->setFixed(1,HX_("dirs",86,66,69,42),::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_3,1))));
HXLINE(  50)		if (!(::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + HX_("\\assets\\replays",6f,cb,ca,21))))) {
HXLINE(  51)			::sys::FileSystem_obj::createDirectory((::Sys_obj::getCwd() + HX_("\\assets\\replays",6f,cb,ca,21)));
            		}
HXLINE(  54)		::PlayerSettings_obj::init();
HXLINE(  56)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN(  56)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  60)		this->super::create();
HXLINE(  69)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic) )) {
HXLINE(  70)			::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),false,::hx::paccDynamic);
            		}
HXLINE(  72)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic) )) {
HXLINE(  73)			::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),false,::hx::paccDynamic);
            		}
HXLINE(  75)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic) )) {
HXLINE(  76)			::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),1,::hx::paccDynamic);
            		}
HXLINE(  78)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) )) {
HXLINE(  79)			::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),70,::hx::paccDynamic);
            		}
HXLINE(  81)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic) )) {
HXLINE(  82)			::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),true,::hx::paccDynamic);
            		}
HXLINE(  84)		::flixel::FlxG_obj::save->bind(HX_("shaggy",ad,07,23,1d),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE(  86)		::Highscore_obj::load();
HXLINE(  88)		bool _hx_tmp1 = ::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekUnlocked",37,64,c4,a5),::hx::paccDynamic) );
HXLINE( 108)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_121_startIntro)
HXLINE( 122)		if (!(::TitleState_obj::initialized)) {
HXLINE( 124)			 ::flixel::graphics::FlxGraphic diamond = ::flixel::graphics::FlxGraphic_obj::fromClass(::hx::ClassOf< ::flixel::addons::transition::GraphicTransTileDiamond >(),null(),null(),null());
HXLINE( 125)			diamond->persist = true;
HXLINE( 126)			diamond->set_destroyOnNoUse(false);
HXLINE( 128)			 ::flixel::math::FlxPoint _hx_tmp =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,-1);
HXDLIN( 128)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,1,_hx_tmp, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 130)			 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,1);
HXDLIN( 130)			::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut =  ::flixel::addons::transition::TransitionData_obj::__alloc( HX_CTX ,HX_("fade",7c,b5,b5,43),-16777216,((Float)0.7),_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("width",06,b6,62,ca),32)
            				->setFixed(1,HX_("height",e7,07,4c,02),32)
            				->setFixed(2,HX_("asset",f0,69,39,26),diamond)), ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,-200,-200,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.4))));
HXLINE( 133)			this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE( 134)			this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE( 144)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 144)			::String library = null();
HXDLIN( 144)			_hx_tmp2->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 146)			{
HXLINE( 146)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 146)				 ::Dynamic onComplete = null();
HXDLIN( 146)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 146)					_this->play(null(),null(),null());
            				}
HXDLIN( 146)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 146)					_this->fadeTween->cancel();
            				}
HXDLIN( 146)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 149)		::Conductor_obj::changeBPM(102);
HXLINE( 150)		this->persistentUpdate = true;
HXLINE( 152)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 156)		this->add(bg);
HXLINE( 158)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-100,null());
HXLINE( 159)		 ::flixel::FlxSprite _hx_tmp = this->logoBl;
HXDLIN( 159)		::String library = null();
HXDLIN( 159)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 159)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 160)		this->logoBl->set_antialiasing(true);
HXLINE( 161)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE( 162)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 163)		this->logoBl->updateHitbox();
HXLINE( 167)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.07)),null());
HXLINE( 168)		 ::flixel::FlxSprite _hx_tmp2 = this->gfDance;
HXDLIN( 168)		::String library1 = null();
HXDLIN( 168)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN( 168)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE( 169)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_5,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 170)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_6,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 171)		this->gfDance->set_antialiasing(true);
HXLINE( 172)		this->add(this->gfDance);
HXLINE( 173)		this->add(this->logoBl);
HXLINE( 175)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,100,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.8)),null());
HXLINE( 176)		 ::flixel::FlxSprite _hx_tmp4 = this->titleText;
HXDLIN( 176)		::String library2 = null();
HXDLIN( 176)		::String _hx_tmp5 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN( 176)		_hx_tmp4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp5,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2)));
HXLINE( 177)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 178)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 179)		this->titleText->set_antialiasing(true);
HXLINE( 180)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 181)		this->titleText->updateHitbox();
HXLINE( 183)		this->add(this->titleText);
HXLINE( 185)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 185)		::String library3 = null();
HXDLIN( 185)		 ::flixel::FlxSprite logo1 = logo->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logo",6b,9f,b7,47)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library3),null(),null(),null(),null(),null());
HXLINE( 186)		logo1->screenCenter(null());
HXLINE( 187)		logo1->set_antialiasing(true);
HXLINE( 193)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 194)		this->add(this->credGroup);
HXLINE( 195)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 197)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 198)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 200)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("ninjamuffin99\nPhantomArcade\nkawaisprite\nevilsk8er",fd,7d,e3,3b),true,null());
HXLINE( 201)		this->credTextShit->screenCenter(null());
HXLINE( 205)		this->credTextShit->set_visible(false);
HXLINE( 207)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 207)		::String library4 = null();
HXDLIN( 207)		this->ngSpr = _hx_tmp6->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("newgrounds_logo",1e,5c,8d,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library4),null(),null(),null(),null(),null());
HXLINE( 208)		this->add(this->ngSpr);
HXLINE( 209)		this->ngSpr->set_visible(false);
HXLINE( 210)		 ::flixel::FlxSprite _hx_tmp7 = this->ngSpr;
HXDLIN( 210)		_hx_tmp7->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 211)		this->ngSpr->updateHitbox();
HXLINE( 212)		this->ngSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 213)		this->ngSpr->set_antialiasing(true);
HXLINE( 215)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 217)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 219)		if (::TitleState_obj::initialized) {
HXLINE( 220)			this->skipIntro();
            		}
            		else {
HXLINE( 222)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_228_getIntroTextShit)
HXLINE( 229)		::String library = null();
HXDLIN( 229)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 231)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 232)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			while((_g < firstArray->length)){
HXLINE( 234)				::String i = firstArray->__get(_g);
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 236)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 239)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_245_update)
HXLINE( 246)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 247)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 250)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 250)		if (_this->keyManager->checkStatus(70,_this->status)) {
HXLINE( 252)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 255)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 255)		bool pressedEnter = _this1->keyManager->checkStatus(13,_this1->status);
HXLINE( 267)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 269)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 271)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 271)			int id = 7;
HXDLIN( 271)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 271)			int Status = _this->status;
HXDLIN( 271)			bool _hx_tmp;
HXDLIN( 271)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 271)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 271)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 271)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 271)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 271)					if (::hx::IsNotNull( button )) {
HXLINE( 271)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 271)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 271)			if (_hx_tmp) {
HXLINE( 272)				pressedEnter = true;
            			}
            		}
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		bool _hx_tmp1;
HXDLIN( 280)		if (pressedEnter) {
HXLINE( 280)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 280)			_hx_tmp1 = false;
            		}
HXDLIN( 280)		if (_hx_tmp1) {
HXLINE( 280)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 280)			_hx_tmp = false;
            		}
HXDLIN( 280)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_300_update)
HXLINE( 300)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 300)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 300)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 283)			if (::NGio_obj::isLoggedIn) {
HXLINE( 283)				 ::io::newgrounds::objects::Medal medal = ( ( ::io::newgrounds::objects::Medal)(::io::newgrounds::NG_obj::core->medals->get(60960)) );
HXDLIN( 283)				if (!(( (bool)(medal->_data->__Field(HX_("unlocked",23,34,0e,5c),::hx::paccDynamic)) ))) {
HXLINE( 283)					medal->sendUnlock();
            				}
            			}
HXLINE( 286)			if ((::Date_obj::now()->getDay() == 5)) {
HXLINE( 287)				if (::NGio_obj::isLoggedIn) {
HXLINE( 287)					 ::io::newgrounds::objects::Medal medal = ( ( ::io::newgrounds::objects::Medal)(::io::newgrounds::NG_obj::core->medals->get(61034)) );
HXDLIN( 287)					if (!(( (bool)(medal->_data->__Field(HX_("unlocked",23,34,0e,5c),::hx::paccDynamic)) ))) {
HXLINE( 287)						medal->sendUnlock();
            					}
            				}
            			}
HXLINE( 290)			this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
HXLINE( 292)			::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 293)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 293)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 295)			this->transitioning = true;
HXLINE( 298)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE( 331)		bool _hx_tmp2;
HXDLIN( 331)		if (pressedEnter) {
HXLINE( 331)			_hx_tmp2 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 331)			_hx_tmp2 = false;
            		}
HXDLIN( 331)		if (_hx_tmp2) {
HXLINE( 333)			this->skipIntro();
            		}
HXLINE( 336)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_341_createCoolText)
HXDLIN( 341)		int _g = 0;
HXDLIN( 341)		int _g1 = textArray->length;
HXDLIN( 341)		while((_g < _g1)){
HXDLIN( 341)			_g = (_g + 1);
HXDLIN( 341)			int i = (_g - 1);
HXLINE( 343)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false);
HXLINE( 344)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 345)			money->set_y((money->y + ((i * 60) + 200)));
HXLINE( 346)			this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 347)			this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_352_addMoreText)
HXLINE( 353)		 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false);
HXLINE( 354)		coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 355)		coolText->set_y((coolText->y + ((this->textGroup->length * 60) + 200)));
HXLINE( 356)		this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 357)		this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_362_deleteCoolText)
HXDLIN( 362)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 364)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 365)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_371_beatHit)
HXLINE( 372)		this->super::beatHit();
HXLINE( 374)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 375)		this->danceLeft = !(this->danceLeft);
HXLINE( 377)		if (this->danceLeft) {
HXLINE( 378)			this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            		}
            		else {
HXLINE( 380)			this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            		}
HXLINE( 384)		switch((int)(this->curBeat)){
            			case (int)1: {
            			}
            			break;
            			case (int)2: {
HXLINE( 389)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_17,1));
            			}
            			break;
            			case (int)3: {
HXLINE( 392)				this->addMoreText(HX_("perez",92,5e,fa,bf));
            			}
            			break;
            			case (int)4: {
HXLINE( 394)				this->deleteCoolText();
            			}
            			break;
            			case (int)5: {
HXLINE( 396)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_18,1));
            			}
            			break;
            			case (int)7: {
HXLINE( 398)				this->addMoreText(HX_("Forever",87,16,46,a7));
HXLINE( 399)				this->ngSpr->set_visible(false);
            			}
            			break;
            			case (int)8: {
HXLINE( 402)				this->deleteCoolText();
HXLINE( 403)				this->ngSpr->set_visible(false);
            			}
            			break;
            			case (int)9: {
HXLINE( 409)				this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_19,1));
            			}
            			break;
            			case (int)11: {
HXLINE( 412)				this->addMoreText(HX_("funkin fanworks",9e,dd,f9,f7));
            			}
            			break;
            			case (int)12: {
HXLINE( 415)				this->deleteCoolText();
HXLINE( 416)				this->addMoreText(HX_("Friday",ff,00,5d,e6));
            			}
            			break;
            			case (int)13: {
HXLINE( 421)				this->addMoreText(HX_("Night",b8,29,f7,2e));
            			}
            			break;
            			case (int)14: {
HXLINE( 424)				this->addMoreText(HX_("Funkin",51,26,e4,a3));
            			}
            			break;
            			case (int)15: {
HXLINE( 427)				this->addMoreText(HX_("Vs. Shaggy",dc,45,ed,26));
            			}
            			break;
            			case (int)16: {
HXLINE( 429)				this->skipIntro();
            			}
            			break;
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_437_skipIntro)
HXDLIN( 437)		if (!(this->skippedIntro)) {
HXLINE( 439)			this->remove(this->ngSpr,null());
HXLINE( 441)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 442)			this->remove(this->credGroup,null());
HXLINE( 443)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

bool TitleState_obj::initialized;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(role_img,"role_img");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(role_img,"role_img");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		if (HX_FIELD_EQ(inName,"role_img") ) { return ::hx::Val( role_img ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"role_img") ) { role_img=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("role_img",7a,2f,64,15));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,role_img),HX_("role_img",7a,2f,64,15)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("role_img",7a,2f,64,15),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("initialized",14,f5,0f,37),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_31_boot)
HXDLIN(  31)		initialized = false;
            	}
}

