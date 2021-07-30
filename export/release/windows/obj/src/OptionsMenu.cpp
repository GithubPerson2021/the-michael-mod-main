#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7c1b117f8362d86_16_new,"OptionsMenu","new",0x0f1d276f,"OptionsMenu.new","OptionsMenu.hx",16,0x7ae6dae1)
static const ::String _hx_array_data_5da343fd_1[] = {
	HX_("W A S D",4f,87,a8,6f),HX_("D F J K",3f,c9,8a,3a),HX_("Z X two three",3c,ac,fe,21),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_28_create,"OptionsMenu","create",0x9c60a34d,"OptionsMenu.create","OptionsMenu.hx",28,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_71_update,"OptionsMenu","update",0xa756c25a,"OptionsMenu.update","OptionsMenu.hx",71,0x7ae6dae1)
HX_LOCAL_STACK_FRAME(_hx_pos_b7c1b117f8362d86_179_changeSelection,"OptionsMenu","changeSelection",0x61ecca4b,"OptionsMenu.changeSelection","OptionsMenu.hx",179,0x7ae6dae1)

void OptionsMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_16_new)
HXLINE( 176)		this->isSettingControl = false;
HXLINE(  23)		this->inputStr = ::Array_obj< ::String >::fromData( _hx_array_data_5da343fd_1,3);
HXLINE(  22)		this->controlsStrings = ::Array_obj< ::String >::__new(0);
HXLINE(  19)		this->curSelected = 0;
HXLINE(  16)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsMenu_obj::__CreateEmpty() { return new OptionsMenu_obj; }

void *OptionsMenu_obj::_hx_vtable = 0;

Dynamic OptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsMenu_obj > _hx_result = new OptionsMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x109e893d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x109e893d;
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

void OptionsMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_28_create)
HXLINE(  36)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  36)		::String library = null();
HXDLIN(  36)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  37)		::String _hx_tmp;
HXDLIN(  37)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic)) )) {
HXLINE(  37)			_hx_tmp = HX_("Virgin input easy",6b,89,61,ef);
            		}
            		else {
HXLINE(  37)			_hx_tmp = HX_("Chad input normal",b5,ef,6f,96);
            		}
HXDLIN(  37)		::String _hx_tmp1;
HXDLIN(  37)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )) {
HXLINE(  37)			_hx_tmp1 = HX_("Downscroll",0f,4a,85,46);
            		}
            		else {
HXLINE(  37)			_hx_tmp1 = HX_("Upscroll",c8,b0,88,76);
            		}
HXDLIN(  37)		::String _hx_tmp2;
HXDLIN(  37)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) ))) {
HXLINE(  37)			_hx_tmp2 = HX_("off",6f,93,54,00);
            		}
            		else {
HXLINE(  37)			_hx_tmp2 = HX_("on",1f,61,00,00);
            		}
HXDLIN(  37)		::String _hx_tmp3;
HXDLIN(  37)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mash_punish",eb,81,32,97),::hx::paccDynamic)) )) {
HXLINE(  37)			_hx_tmp3 = HX_("Anti-Mash on",0b,a5,4b,8c);
            		}
            		else {
HXLINE(  37)			_hx_tmp3 = HX_("Anti-Mash off",03,be,e4,35);
            		}
HXDLIN(  37)		this->controlsStrings = ::CoolUtil_obj::coolStringFile(((((((((this->inputStr->__get(( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) )) + HX_("\n",0a,00,00,00)) + _hx_tmp) + HX_("\n",0a,00,00,00)) + _hx_tmp1) + HX_("\nAccuracy ",5d,fa,5b,f1)) + _hx_tmp2) + HX_("\n",0a,00,00,00)) + _hx_tmp3));
HXLINE(  39)		::haxe::Log_obj::trace(this->controlsStrings,::hx::SourceInfo(HX_("source/OptionsMenu.hx",d5,ac,80,44),39,HX_("OptionsMenu",fd,43,a3,5d),HX_("create",fc,66,0f,7c)));
HXLINE(  41)		menuBG1->set_color(-1412611);
HXLINE(  42)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  43)		menuBG1->updateHitbox();
HXLINE(  44)		menuBG1->screenCenter(null());
HXLINE(  45)		menuBG1->set_antialiasing(true);
HXLINE(  47)		this->add(menuBG1);
HXLINE(  49)		this->grpControls =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  50)		this->add(this->grpControls);
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			int _g1 = this->controlsStrings->length;
HXDLIN(  52)			while((_g < _g1)){
HXLINE(  52)				_g = (_g + 1);
HXDLIN(  52)				int i = (_g - 1);
HXLINE(  54)				 ::Alphabet controlLabel =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->controlsStrings->__get(i),true,false);
HXLINE(  55)				controlLabel->isMenuItem = true;
HXLINE(  56)				controlLabel->targetY = ( (Float)(i) );
HXLINE(  57)				this->grpControls->add(controlLabel).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  62)		int _hx_tmp4 = (::flixel::FlxG_obj::height - 18);
HXDLIN(  62)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,_hx_tmp4,0,(HX_("Offset (Left, Right): ",e9,11,cb,c4) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)))),12,null());
HXLINE(  63)		this->versionShit->scrollFactor->set(null(),null());
HXLINE(  64)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  65)		this->add(this->versionShit);
HXLINE(  67)		this->super::create();
            	}


void OptionsMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b7c1b117f8362d86_71_update)
HXLINE(  72)		this->super::update(elapsed);
HXLINE(  74)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  75)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  75)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  75)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  76)		if (::PlayerSettings_obj::player1->controls->_upP->check()) {
HXLINE(  77)			this->changeSelection(-1);
            		}
HXLINE(  78)		if (::PlayerSettings_obj::player1->controls->_downP->check()) {
HXLINE(  79)			this->changeSelection(1);
            		}
HXLINE(  81)		if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE(  83)			::hx::FieldRef((::flixel::FlxG_obj::save->data).mPtr,HX_("offset",93,97,3f,60))++;
HXLINE(  84)			 ::flixel::text::FlxText _hx_tmp = this->versionShit;
HXDLIN(  84)			_hx_tmp->set_text((HX_("Offset (Left, Right): ",e9,11,cb,c4) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)))));
            		}
HXLINE(  87)		if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE(  89)			::hx::FieldRef((::flixel::FlxG_obj::save->data).mPtr,HX_("offset",93,97,3f,60))--;
HXLINE(  90)			 ::flixel::text::FlxText _hx_tmp = this->versionShit;
HXDLIN(  90)			_hx_tmp->set_text((HX_("Offset (Left, Right): ",e9,11,cb,c4) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)))));
            		}
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		if (!(::PlayerSettings_obj::player1->controls->_rightR->check())) {
HXLINE(  93)			_hx_tmp = ::PlayerSettings_obj::player1->controls->_leftR->check();
            		}
            		else {
HXLINE(  93)			_hx_tmp = true;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  95)			::flixel::FlxG_obj::save->flush(null(),null());
            		}
HXLINE(  98)		this->remove(this->info,null());
HXLINE(  99)		switch((int)(this->curSelected)){
            			case (int)1: {
HXLINE( 102)				::String infoTxt = HX_("No miss-press punishment",62,70,f6,e1);
HXLINE( 104)				if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic)) ))) {
HXLINE( 106)					infoTxt = HX_("Not cringe B)",28,fc,40,d7);
            				}
HXLINE( 109)				this->info =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,108,(::flixel::FlxG_obj::height - 290),0,infoTxt,20,null());
HXLINE( 110)				this->info->scrollFactor->set(null(),null());
HXLINE( 111)				this->info->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 112)				this->add(this->info);
            			}
            			break;
            			case (int)4: {
HXLINE( 114)				::String infoTxt = HX_("Only acts on Virgin Input",ad,e6,5b,08);
HXLINE( 116)				this->info =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,108,(::flixel::FlxG_obj::height - 290),0,infoTxt,20,null());
HXLINE( 117)				this->info->scrollFactor->set(null(),null());
HXLINE( 118)				this->info->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 119)				this->add(this->info);
            			}
            			break;
            		}
HXLINE( 121)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 123)			this->grpControls->remove(Dynamic( this->grpControls->members->__get(this->curSelected)).StaticCast<  ::Alphabet >(),null()).StaticCast<  ::Alphabet >();
HXLINE( 124)			switch((int)(this->curSelected)){
            				case (int)0: {
HXLINE( 127)					::hx::FieldRef((::flixel::FlxG_obj::save->data).mPtr,HX_("dfjk",c3,18,67,42))++;
HXLINE( 128)					if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic),2 )) {
HXLINE( 130)						::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),0,::hx::paccDynamic);
            					}
HXLINE( 133)					if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic),1 )) {
HXLINE( 134)						::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),true);
            					}
            					else {
HXLINE( 135)						if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic),2 )) {
HXLINE( 136)							::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Woops_dyn(),true);
            						}
            						else {
HXLINE( 138)							::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Duo(true),true);
            						}
            					}
HXLINE( 140)					::String inTxt = this->inputStr->__get(( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) ));
HXLINE( 142)					 ::Alphabet ctrl =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * this->curSelected) + 30)) ),inTxt,true,false);
HXLINE( 143)					ctrl->isMenuItem = true;
HXLINE( 144)					ctrl->targetY = ( (Float)(this->curSelected) );
HXLINE( 145)					this->grpControls->add(ctrl).StaticCast<  ::Alphabet >();
            				}
            				break;
            				case (int)1: {
HXLINE( 148)					::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 149)					::String ctrl;
HXDLIN( 149)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("newInput",8a,07,68,e1),::hx::paccDynamic)) )) {
HXLINE( 149)						ctrl = HX_("Virgin input easy",6b,89,61,ef);
            					}
            					else {
HXLINE( 149)						ctrl = HX_("Chad input normal",b5,ef,6f,96);
            					}
HXDLIN( 149)					 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * this->curSelected) + 30)) ),ctrl,true,false);
HXLINE( 150)					ctrl1->isMenuItem = true;
HXLINE( 151)					ctrl1->targetY = ( (Float)((this->curSelected - 1)) );
HXLINE( 152)					this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            				}
            				break;
            				case (int)2: {
HXLINE( 154)					::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 155)					::String ctrl;
HXDLIN( 155)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )) {
HXLINE( 155)						ctrl = HX_("Downscroll",0f,4a,85,46);
            					}
            					else {
HXLINE( 155)						ctrl = HX_("Upscroll",c8,b0,88,76);
            					}
HXDLIN( 155)					 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * this->curSelected) + 30)) ),ctrl,true,false);
HXLINE( 156)					ctrl1->isMenuItem = true;
HXLINE( 157)					ctrl1->targetY = ( (Float)((this->curSelected - 2)) );
HXLINE( 158)					this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            				}
            				break;
            				case (int)3: {
HXLINE( 160)					::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 161)					::String ctrl;
HXDLIN( 161)					if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) ))) {
HXLINE( 161)						ctrl = HX_("off",6f,93,54,00);
            					}
            					else {
HXLINE( 161)						ctrl = HX_("on",1f,61,00,00);
            					}
HXDLIN( 161)					 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * this->curSelected) + 30)) ),(HX_("Accuracy ",a7,4b,73,6e) + ctrl),true,false);
HXLINE( 162)					ctrl1->isMenuItem = true;
HXLINE( 163)					ctrl1->targetY = ( (Float)((this->curSelected - 3)) );
HXLINE( 164)					this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            				}
            				break;
            				case (int)4: {
HXLINE( 166)					::flixel::FlxG_obj::save->data->__SetField(HX_("mash_punish",eb,81,32,97),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mash_punish",eb,81,32,97),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 167)					::String ctrl;
HXDLIN( 167)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mash_punish",eb,81,32,97),::hx::paccDynamic)) )) {
HXLINE( 167)						ctrl = HX_("Anti-Mash on",0b,a5,4b,8c);
            					}
            					else {
HXLINE( 167)						ctrl = HX_("Anti-Mash off",03,be,e4,35);
            					}
HXDLIN( 167)					 ::Alphabet ctrl1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * this->curSelected) + 30)) ),ctrl,true,false);
HXLINE( 168)					ctrl1->isMenuItem = true;
HXLINE( 169)					ctrl1->targetY = ( (Float)((this->curSelected - 4)) );
HXLINE( 170)					this->grpControls->add(ctrl1).StaticCast<  ::Alphabet >();
            				}
            				break;
            			}
HXLINE( 172)			::flixel::FlxG_obj::save->flush(null(),null());
            		}
            	}


void OptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_b7c1b117f8362d86_179_changeSelection)
HXLINE( 184)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 184)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 186)		 ::OptionsMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 186)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 188)		if ((this->curSelected < 0)) {
HXLINE( 189)			this->curSelected = (this->grpControls->length - 1);
            		}
HXLINE( 190)		if ((this->curSelected >= this->grpControls->length)) {
HXLINE( 191)			this->curSelected = 0;
            		}
HXLINE( 195)		int bullShit = 0;
HXLINE( 197)		{
HXLINE( 197)			int _g = 0;
HXDLIN( 197)			::Array< ::Dynamic> _g1 = this->grpControls->members;
HXDLIN( 197)			while((_g < _g1->length)){
HXLINE( 197)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 197)				_g = (_g + 1);
HXLINE( 199)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 200)				bullShit = (bullShit + 1);
HXLINE( 202)				item->set_alpha(((Float)0.6));
HXLINE( 205)				if ((item->targetY == 0)) {
HXLINE( 207)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsMenu_obj,changeSelection,(void))


::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsMenu_obj > __this = new OptionsMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsMenu_obj > OptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsMenu_obj *__this = (OptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsMenu_obj), true, "OptionsMenu"));
	*(void **)__this = OptionsMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsMenu_obj::OptionsMenu_obj()
{
}

void OptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsMenu);
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_MARK_MEMBER_NAME(inputStr,"inputStr");
	HX_MARK_MEMBER_NAME(grpControls,"grpControls");
	HX_MARK_MEMBER_NAME(versionShit,"versionShit");
	HX_MARK_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(controlsStrings,"controlsStrings");
	HX_VISIT_MEMBER_NAME(inputStr,"inputStr");
	HX_VISIT_MEMBER_NAME(grpControls,"grpControls");
	HX_VISIT_MEMBER_NAME(versionShit,"versionShit");
	HX_VISIT_MEMBER_NAME(isSettingControl,"isSettingControl");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		if (HX_FIELD_EQ(inName,"inputStr") ) { return ::hx::Val( inputStr ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"grpControls") ) { return ::hx::Val( grpControls ); }
		if (HX_FIELD_EQ(inName,"versionShit") ) { return ::hx::Val( versionShit ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { return ::hx::Val( controlsStrings ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { return ::hx::Val( isSettingControl ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputStr") ) { inputStr=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpControls") ) { grpControls=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"controlsStrings") ) { controlsStrings=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isSettingControl") ) { isSettingControl=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("controlsStrings",ac,8a,05,03));
	outFields->push(HX_("inputStr",c7,3e,b0,c6));
	outFields->push(HX_("grpControls",7b,bb,b2,d5));
	outFields->push(HX_("versionShit",f8,4e,3b,e2));
	outFields->push(HX_("isSettingControl",37,39,d8,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(OptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsMenu_obj,controlsStrings),HX_("controlsStrings",ac,8a,05,03)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsMenu_obj,inputStr),HX_("inputStr",c7,3e,b0,c6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsMenu_obj,grpControls),HX_("grpControls",7b,bb,b2,d5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsMenu_obj,versionShit),HX_("versionShit",f8,4e,3b,e2)},
	{::hx::fsBool,(int)offsetof(OptionsMenu_obj,isSettingControl),HX_("isSettingControl",37,39,d8,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionsMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionsMenu_obj_sMemberFields[] = {
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("info",6e,38,bb,45),
	HX_("controlsStrings",ac,8a,05,03),
	HX_("inputStr",c7,3e,b0,c6),
	HX_("grpControls",7b,bb,b2,d5),
	HX_("versionShit",f8,4e,3b,e2),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("isSettingControl",37,39,d8,de),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class OptionsMenu_obj::__mClass;

void OptionsMenu_obj::__register()
{
	OptionsMenu_obj _hx_dummy;
	OptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsMenu",fd,43,a3,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

