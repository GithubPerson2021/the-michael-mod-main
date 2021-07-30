#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_SongMetadata
#include <SongMetadata.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_86166a84e8de7ace_15_new,"FreeplayState","new",0xc894eea3,"FreeplayState.new","FreeplayState.hx",15,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_35_create,"FreeplayState","create",0x931e5499,"FreeplayState.create","FreeplayState.hx",35,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_3[] = {
	HX_("Where-are-you",60,e2,19,c6),HX_("Eruption",fc,a1,c6,80),HX_("Kaio-ken",a3,d8,6c,86),
};
static const ::String _hx_array_data_b3f26131_4[] = {
	HX_("dad",47,36,4c,00),HX_("dad",47,36,4c,00),HX_("mom",cb,16,53,00),
};
static const ::String _hx_array_data_b3f26131_5[] = {
	HX_("Whats-new",62,06,b8,64),HX_("Blast",98,53,1f,48),HX_("Super-saiyan",5d,70,f3,72),
};
static const ::String _hx_array_data_b3f26131_6[] = {
	HX_("dad",47,36,4c,00),HX_("mom",cb,16,53,00),HX_("mom",cb,16,53,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_144_addSong,"FreeplayState","addSong",0x9e966259,"FreeplayState.addSong","FreeplayState.hx",144,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_148_addWeek,"FreeplayState","addWeek",0xa1339e78,"FreeplayState.addWeek","FreeplayState.hx",148,0x0d86f62d)
static const ::String _hx_array_data_b3f26131_10[] = {
	HX_("bf",c4,55,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_163_update,"FreeplayState","update",0x9e1473a6,"FreeplayState.update","FreeplayState.hx",163,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_218_changeDiff,"FreeplayState","changeDiff",0x302511b2,"FreeplayState.changeDiff","FreeplayState.hx",218,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_242_changeSelection,"FreeplayState","changeSelection",0xbe8c8f7f,"FreeplayState.changeSelection","FreeplayState.hx",242,0x0d86f62d)
HX_LOCAL_STACK_FRAME(_hx_pos_86166a84e8de7ace_27_boot,"FreeplayState","boot",0xb1d4e08f,"FreeplayState.boot","FreeplayState.hx",27,0x0d86f62d)

void FreeplayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_15_new)
HXLINE(  32)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		this->curPlaying = false;
HXLINE(  26)		this->intendedScore = 0;
HXLINE(  25)		this->lerpScore = 0;
HXLINE(  21)		this->curDifficulty = 2;
HXLINE(  20)		this->curSelected = 0;
HXLINE(  17)		this->songs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		super::__construct(TransIn,TransOut);
            	}

Dynamic FreeplayState_obj::__CreateEmpty() { return new FreeplayState_obj; }

void *FreeplayState_obj::_hx_vtable = 0;

Dynamic FreeplayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FreeplayState_obj > _hx_result = new FreeplayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FreeplayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f09868d) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x5f09868d;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FreeplayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_35_create)
HXLINE(  53)		bool isDebug = false;
HXLINE(  59)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_3,3),1,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_4,3));
HXLINE(  60)		this->addWeek(::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_5,3),2,::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_6,3));
HXLINE(  61)		this->addSong(HX_("GOD-EATER",b4,fd,24,17),3,HX_("pshaggy",1d,fc,86,4e));
HXLINE(  67)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  67)		::String library = null();
HXDLIN(  67)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBGBlue",de,35,e3,1e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  68)		this->add(bg1);
HXLINE(  70)		this->grpSongs =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  71)		this->add(this->grpSongs);
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = this->songs->length;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  75)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->songs->__get(i).StaticCast<  ::SongMetadata >()->songName,true,false);
HXLINE(  76)				songText->isMenuItem = true;
HXLINE(  77)				songText->targetY = ( (Float)(i) );
HXLINE(  78)				this->grpSongs->add(songText).StaticCast<  ::Alphabet >();
HXLINE(  80)				 ::HealthIcon icon =  ::HealthIcon_obj::__alloc( HX_CTX ,this->songs->__get(i).StaticCast<  ::SongMetadata >()->songCharacter,null());
HXLINE(  81)				icon->sprTracker = songText;
HXLINE(  84)				this->iconArray->push(icon);
HXLINE(  85)				this->add(icon);
            			}
            		}
HXLINE(  92)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),5,0,HX_("",00,00,00,00),32,null());
HXLINE(  94)		this->scoreText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  97)		 ::flixel::FlxSprite scoreBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->scoreText->x - ( (Float)(6) )),0,null());
HXDLIN(  97)		 ::flixel::FlxSprite scoreBG1 = scoreBG->makeGraphic(::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))),66,-16777216,null(),null());
HXLINE(  98)		scoreBG1->set_alpha(((Float)0.6));
HXLINE(  99)		this->add(scoreBG1);
HXLINE( 101)		this->diffText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->scoreText->x,(this->scoreText->y + 36),0,HX_("",00,00,00,00),24,null());
HXLINE( 102)		this->diffText->set_font(this->scoreText->_font);
HXLINE( 103)		this->add(this->diffText);
HXLINE( 105)		this->add(this->scoreText);
HXLINE( 107)		this->changeSelection(null());
HXLINE( 108)		this->changeDiff(null());
HXLINE( 112)		this->selector =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 120)		 ::Alphabet swag =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(1) ),( (Float)(0) ),HX_("swag",8a,2a,5e,4c),null(),null());
HXLINE( 139)		this->super::create();
            	}


void FreeplayState_obj::addSong(::String songName,int weekNum,::String songCharacter){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_144_addSong)
HXDLIN( 144)		::Array< ::Dynamic> _hx_tmp = this->songs;
HXDLIN( 144)		_hx_tmp->push( ::SongMetadata_obj::__alloc( HX_CTX ,songName,weekNum,songCharacter));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addSong,(void))

void FreeplayState_obj::addWeek(::Array< ::String > songs,int weekNum,::Array< ::String > songCharacters){
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_148_addWeek)
HXLINE( 149)		if (::hx::IsNull( songCharacters )) {
HXLINE( 150)			songCharacters = ::Array_obj< ::String >::fromData( _hx_array_data_b3f26131_10,1);
            		}
HXLINE( 152)		int num = 0;
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			while((_g < songs->length)){
HXLINE( 153)				::String song = songs->__get(_g);
HXDLIN( 153)				_g = (_g + 1);
HXLINE( 155)				this->addSong(song,weekNum,songCharacters->__get(num));
HXLINE( 157)				if ((songCharacters->length != 1)) {
HXLINE( 158)					num = (num + 1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FreeplayState_obj,addWeek,(void))

void FreeplayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_86166a84e8de7ace_163_update)
HXLINE( 164)		this->super::update(elapsed);
HXLINE( 166)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 168)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 168)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 171)		Float a = ( (Float)(this->lerpScore) );
HXDLIN( 171)		this->lerpScore = ::Math_obj::floor((a + (((Float)0.4) * (( (Float)(this->intendedScore) ) - a))));
HXLINE( 173)		if ((::Math_obj::abs(( (Float)((this->lerpScore - this->intendedScore)) )) <= 10)) {
HXLINE( 174)			this->lerpScore = this->intendedScore;
            		}
HXLINE( 176)		this->scoreText->set_text((HX_("PERSONAL BEST:",36,ce,e9,ee) + this->lerpScore));
HXLINE( 178)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE( 179)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE( 180)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 182)		if (upP) {
HXLINE( 184)			this->changeSelection(-1);
            		}
HXLINE( 186)		if (downP) {
HXLINE( 188)			this->changeSelection(1);
            		}
HXLINE( 191)		if (::PlayerSettings_obj::player1->controls->_leftP->check()) {
HXLINE( 192)			this->changeDiff(-1);
            		}
HXLINE( 193)		if (::PlayerSettings_obj::player1->controls->_rightP->check()) {
HXLINE( 194)			this->changeDiff(1);
            		}
HXLINE( 196)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 198)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 198)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 198)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 201)		if (accepted) {
HXLINE( 203)			::String poop = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase();
HXDLIN( 203)			::String poop1 = ::Highscore_obj::formatSong(poop,this->curDifficulty);
HXLINE( 205)			::haxe::Log_obj::trace(poop1,::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),205,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 207)			::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop1,this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName.toLowerCase());
HXLINE( 208)			::PlayState_obj::isStoryMode = false;
HXLINE( 209)			::PlayState_obj::storyDifficulty = this->curDifficulty;
HXLINE( 211)			::PlayState_obj::storyWeek = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->week;
HXLINE( 212)			::haxe::Log_obj::trace((HX_("CUR WEEK",b4,9a,a0,36) + ::PlayState_obj::storyWeek),::hx::SourceInfo(HX_("source/FreeplayState.hx",21,2d,b0,ce),212,HX_("FreeplayState",31,61,f2,b3),HX_("update",09,86,05,87)));
HXLINE( 213)			{
HXLINE( 213)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 213)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 213)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            	}


void FreeplayState_obj::changeDiff(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_218_changeDiff)
HXLINE( 219)		 ::FreeplayState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)		_hx_tmp->curDifficulty = (_hx_tmp->curDifficulty + change);
HXLINE( 221)		if ((this->curDifficulty < 1)) {
HXLINE( 222)			this->curDifficulty = 2;
            		}
HXLINE( 223)		if ((this->curDifficulty > 2)) {
HXLINE( 224)			this->curDifficulty = 1;
            		}
HXLINE( 227)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 230)		switch((int)(this->curDifficulty)){
            			case (int)0: {
HXLINE( 233)				this->diffText->set_text(HX_("EASY",02,54,cd,2d));
            			}
            			break;
            			case (int)1: {
HXLINE( 235)				this->diffText->set_text(HX_("< EASY >",04,8c,4d,d5));
            			}
            			break;
            			case (int)2: {
HXLINE( 237)				this->diffText->set_text(HX_("< CANON >",09,cf,e7,93));
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeDiff,(void))

void FreeplayState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_242_changeSelection)
HXLINE( 248)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 248)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 250)		 ::FreeplayState _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 252)		if ((this->curSelected < 0)) {
HXLINE( 253)			this->curSelected = (this->songs->length - 1);
            		}
HXLINE( 254)		if ((this->curSelected >= this->songs->length)) {
HXLINE( 255)			this->curSelected = 0;
            		}
HXLINE( 260)		this->intendedScore = ::Highscore_obj::getScore(this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName,this->curDifficulty);
HXLINE( 265)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp2 = ::flixel::FlxG_obj::sound;
HXDLIN( 265)		::String song = this->songs->__get(this->curSelected).StaticCast<  ::SongMetadata >()->songName;
HXDLIN( 265)		 ::Dynamic _hx_tmp3 = ::haxe::Log_obj::trace;
HXDLIN( 265)		::String _hx_tmp4 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXDLIN( 265)		_hx_tmp3(_hx_tmp4,::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),95,HX_("Paths",0e,7b,84,50),HX_("inst",c6,43,bb,45)));
HXDLIN( 265)		::String _hx_tmp5;
HXDLIN( 265)		bool _hx_tmp6;
HXDLIN( 265)		if ((song.toLowerCase() == HX_("whats-new",82,26,e5,c2))) {
HXLINE( 265)			_hx_tmp6 = ::Main_obj::drums;
            		}
            		else {
HXLINE( 265)			_hx_tmp6 = false;
            		}
HXDLIN( 265)		if (_hx_tmp6) {
HXLINE( 265)			_hx_tmp5 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Fuck.",e8,03,74,66)) + HX_("ogg",4f,94,54,00));
            		}
            		else {
HXLINE( 265)			_hx_tmp5 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            		}
HXDLIN( 265)		_hx_tmp2->playMusic(_hx_tmp5,0,null(),null());
HXLINE( 268)		int bullShit = 0;
HXLINE( 270)		{
HXLINE( 270)			int _g = 0;
HXDLIN( 270)			int _g1 = this->iconArray->length;
HXDLIN( 270)			while((_g < _g1)){
HXLINE( 270)				_g = (_g + 1);
HXDLIN( 270)				int i = (_g - 1);
HXLINE( 272)				this->iconArray->__get(i).StaticCast<  ::HealthIcon >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 275)		this->iconArray->__get(this->curSelected).StaticCast<  ::HealthIcon >()->set_alpha(( (Float)(1) ));
HXLINE( 277)		{
HXLINE( 277)			int _g2 = 0;
HXDLIN( 277)			::Array< ::Dynamic> _g3 = this->grpSongs->members;
HXDLIN( 277)			while((_g2 < _g3->length)){
HXLINE( 277)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 277)				_g2 = (_g2 + 1);
HXLINE( 279)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 280)				bullShit = (bullShit + 1);
HXLINE( 282)				item->set_alpha(((Float)0.6));
HXLINE( 285)				if ((item->targetY == 0)) {
HXLINE( 287)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FreeplayState_obj,changeSelection,(void))

bool FreeplayState_obj::addedGodEater;


::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FreeplayState_obj > __this = new FreeplayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FreeplayState_obj > FreeplayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FreeplayState_obj *__this = (FreeplayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FreeplayState_obj), true, "FreeplayState"));
	*(void **)__this = FreeplayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FreeplayState_obj::FreeplayState_obj()
{
}

void FreeplayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FreeplayState);
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(selector,"selector");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(diffText,"diffText");
	HX_MARK_MEMBER_NAME(lerpScore,"lerpScore");
	HX_MARK_MEMBER_NAME(intendedScore,"intendedScore");
	HX_MARK_MEMBER_NAME(grpSongs,"grpSongs");
	HX_MARK_MEMBER_NAME(curPlaying,"curPlaying");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FreeplayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(selector,"selector");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDifficulty,"curDifficulty");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(diffText,"diffText");
	HX_VISIT_MEMBER_NAME(lerpScore,"lerpScore");
	HX_VISIT_MEMBER_NAME(intendedScore,"intendedScore");
	HX_VISIT_MEMBER_NAME(grpSongs,"grpSongs");
	HX_VISIT_MEMBER_NAME(curPlaying,"curPlaying");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FreeplayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addSong") ) { return ::hx::Val( addSong_dyn() ); }
		if (HX_FIELD_EQ(inName,"addWeek") ) { return ::hx::Val( addWeek_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { return ::hx::Val( selector ); }
		if (HX_FIELD_EQ(inName,"diffText") ) { return ::hx::Val( diffText ); }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { return ::hx::Val( grpSongs ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { return ::hx::Val( lerpScore ); }
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { return ::hx::Val( curPlaying ); }
		if (HX_FIELD_EQ(inName,"changeDiff") ) { return ::hx::Val( changeDiff_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { return ::hx::Val( curDifficulty ); }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { return ::hx::Val( intendedScore ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FreeplayState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"addedGodEater") ) { outValue = ( addedGodEater ); return true; }
	}
	return false;
}

::hx::Val FreeplayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selector") ) { selector=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffText") ) { diffText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpSongs") ) { grpSongs=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lerpScore") ) { lerpScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"curPlaying") ) { curPlaying=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"curDifficulty") ) { curDifficulty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intendedScore") ) { intendedScore=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FreeplayState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"addedGodEater") ) { addedGodEater=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FreeplayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("selector",1f,33,6d,b1));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDifficulty",db,b7,38,a7));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("diffText",52,3b,1b,21));
	outFields->push(HX_("lerpScore",5b,81,4d,e7));
	outFields->push(HX_("intendedScore",a7,fd,7c,89));
	outFields->push(HX_("grpSongs",d9,dc,c7,63));
	outFields->push(HX_("curPlaying",ce,61,01,95));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FreeplayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,selector),HX_("selector",1f,33,6d,b1)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,curDifficulty),HX_("curDifficulty",db,b7,38,a7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FreeplayState_obj,diffText),HX_("diffText",52,3b,1b,21)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,lerpScore),HX_("lerpScore",5b,81,4d,e7)},
	{::hx::fsInt,(int)offsetof(FreeplayState_obj,intendedScore),HX_("intendedScore",a7,fd,7c,89)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FreeplayState_obj,grpSongs),HX_("grpSongs",d9,dc,c7,63)},
	{::hx::fsBool,(int)offsetof(FreeplayState_obj,curPlaying),HX_("curPlaying",ce,61,01,95)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FreeplayState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FreeplayState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FreeplayState_obj::addedGodEater,HX_("addedGodEater",09,e5,de,92)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FreeplayState_obj_sMemberFields[] = {
	HX_("songs",fe,36,c7,80),
	HX_("selector",1f,33,6d,b1),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDifficulty",db,b7,38,a7),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("diffText",52,3b,1b,21),
	HX_("lerpScore",5b,81,4d,e7),
	HX_("intendedScore",a7,fd,7c,89),
	HX_("grpSongs",d9,dc,c7,63),
	HX_("curPlaying",ce,61,01,95),
	HX_("iconArray",60,3f,53,5f),
	HX_("create",fc,66,0f,7c),
	HX_("addSong",96,66,95,88),
	HX_("addWeek",b5,a2,32,8b),
	HX_("update",09,86,05,87),
	HX_("changeDiff",95,91,b2,1c),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void FreeplayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FreeplayState_obj::addedGodEater,"addedGodEater");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FreeplayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FreeplayState_obj::addedGodEater,"addedGodEater");
};

#endif

::hx::Class FreeplayState_obj::__mClass;

static ::String FreeplayState_obj_sStaticFields[] = {
	HX_("addedGodEater",09,e5,de,92),
	::String(null())
};

void FreeplayState_obj::__register()
{
	FreeplayState_obj _hx_dummy;
	FreeplayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FreeplayState",31,61,f2,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FreeplayState_obj::__GetStatic;
	__mClass->mSetStaticField = &FreeplayState_obj::__SetStatic;
	__mClass->mMarkFunc = FreeplayState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FreeplayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FreeplayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FreeplayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FreeplayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FreeplayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FreeplayState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_86166a84e8de7ace_27_boot)
HXDLIN(  27)		addedGodEater = false;
            	}
}

