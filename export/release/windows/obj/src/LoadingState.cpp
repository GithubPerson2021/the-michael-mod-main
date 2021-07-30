#include <hxcpp.h>

#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MultiCallback
#include <MultiCallback.h>
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
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9d652bf7289928_18_new,"LoadingState","new",0x2bad3187,"LoadingState.new","LoadingState.hx",18,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_73_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",73,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_59_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",59,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_38_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",38,0x53ff9bc9)
static const int _hx_array_data_41ae6215_4[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_41ae6215_5[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_80_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",80,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_89_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",89,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_94_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",94,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_103_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",103,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_108_beatHit,"LoadingState","beatHit",0x12c36b24,"LoadingState.beatHit","LoadingState.hx",108,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_122_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",122,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_130_onLoad,"LoadingState","onLoad",0xd402341e,"LoadingState.onLoad","LoadingState.hx",130,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_182_destroy,"LoadingState","destroy",0xc344ada1,"LoadingState.destroy","LoadingState.hx",182,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_139_getSongPath,"LoadingState","getSongPath",0xa60766f7,"LoadingState.getSongPath","LoadingState.hx",139,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_144_getVocalPath,"LoadingState","getVocalPath",0xfda3e53d,"LoadingState.getVocalPath","LoadingState.hx",144,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_149_loadAndSwitchState,"LoadingState","loadAndSwitchState",0xbf595d65,"LoadingState.loadAndSwitchState","LoadingState.hx",149,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_153_getNextState,"LoadingState","getNextState",0xdef1eea1,"LoadingState.getNextState","LoadingState.hx",153,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_226_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",226,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_248_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",248,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_189_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",189,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_20_boot,"LoadingState","boot",0x03f7252b,"LoadingState.boot","LoadingState.hx",20,0x53ff9bc9)

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_18_new)
HXLINE(  28)		this->danceLeft = false;
HXLINE(  23)		this->stopMusic = false;
HXLINE(  32)		super::__construct(null(),null());
HXLINE(  33)		this->target = target;
HXLINE(  34)		this->stopMusic = stopMusic;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2a8fb4d5) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2a8fb4d5;
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

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_73_create)
HXLINE(  73)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_59_create)
HXLINE(  60)			_gthis->callbacks =  ::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  61)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  62)			 ::LoadingState _gthis1 = _gthis;
HXDLIN(  62)			_gthis1->checkLoadSong(::LoadingState_obj::getSongPath());
HXLINE(  63)			if (( (bool)(::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE(  64)				 ::LoadingState _gthis1 = _gthis;
HXDLIN(  64)				_gthis1->checkLoadSong(::LoadingState_obj::getVocalPath());
            			}
HXLINE(  65)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  66)			if ((::PlayState_obj::storyWeek > 0)) {
HXLINE(  67)				_gthis->checkLibrary((HX_("week",f4,5f,f5,4e) + ::PlayState_obj::storyWeek));
            			}
            			else {
HXLINE(  69)				_gthis->checkLibrary(HX_("tutorial",9e,8f,b5,82));
            			}
HXLINE(  71)			Float fadeTime = ((Float)0.5);
HXLINE(  72)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  73)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_38_create)
HXDLIN(  38)		 ::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  39)		this->logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-150,-100,null());
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp = this->logo;
HXDLIN(  40)		::String library = null();
HXDLIN(  40)		::String _hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  40)		_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  41)		this->logo->set_antialiasing(true);
HXLINE(  42)		this->logo->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,null(),null(),null());
HXLINE(  43)		this->logo->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE(  44)		this->logo->updateHitbox();
HXLINE(  48)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.4)),(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.07)),null());
HXLINE(  49)		 ::flixel::FlxSprite _hx_tmp2 = this->gfDance;
HXDLIN(  49)		::String library1 = null();
HXDLIN(  49)		::String _hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
HXDLIN(  49)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1)));
HXLINE(  50)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_41ae6215_4,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  51)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_41ae6215_5,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  52)		this->gfDance->set_antialiasing(true);
HXLINE(  53)		this->add(this->gfDance);
HXLINE(  54)		this->add(this->logo);
HXLINE(  56)		::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_80_checkLoadSong)
HXDLIN(  80)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_89_checkLoadSong)
HXLINE(  89)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  82)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  83)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE(  88)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE(  89)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_94_checkLibrary)
HXLINE(  95)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  95)		bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN(  95)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),95,HX_("LoadingState",15,62,ae,41),HX_("checkLibrary",13,df,f6,2c)));
HXLINE(  96)		if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::utils::AssetLibrary _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_103_checkLibrary)
HXLINE( 103)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  99)			if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 100)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            			}
HXLINE( 102)			 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 103)			::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_108_beatHit)
HXLINE( 109)		this->super::beatHit();
HXLINE( 111)		this->logo->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 112)		this->danceLeft = !(this->danceLeft);
HXLINE( 114)		if (this->danceLeft) {
HXLINE( 115)			this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            		}
            		else {
HXLINE( 117)			this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            		}
            	}


void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_122_update)
HXDLIN( 122)		this->super::update(elapsed);
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_130_onLoad)
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (this->stopMusic) {
HXLINE( 131)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 131)			_hx_tmp = false;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 132)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 134)		{
HXLINE( 134)			 ::flixel::FlxState nextState = this->target;
HXDLIN( 134)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 134)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_182_destroy)
HXLINE( 183)		this->super::destroy();
HXLINE( 185)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

::String LoadingState_obj::getSongPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_139_getSongPath)
HXDLIN( 139)		::String song = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) );
HXDLIN( 139)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 139)		::String _hx_tmp1 = (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
HXDLIN( 139)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),95,HX_("Paths",0e,7b,84,50),HX_("inst",c6,43,bb,45)));
HXDLIN( 139)		bool _hx_tmp2;
HXDLIN( 139)		if ((song.toLowerCase() == HX_("whats-new",82,26,e5,c2))) {
HXDLIN( 139)			_hx_tmp2 = ::Main_obj::drums;
            		}
            		else {
HXDLIN( 139)			_hx_tmp2 = false;
            		}
HXDLIN( 139)		if (_hx_tmp2) {
HXDLIN( 139)			return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Fuck.",e8,03,74,66)) + HX_("ogg",4f,94,54,00));
            		}
            		else {
HXDLIN( 139)			return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + song.toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            		}
HXDLIN( 139)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

::String LoadingState_obj::getVocalPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_144_getVocalPath)
HXDLIN( 144)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_149_loadAndSwitchState)
HXDLIN( 149)		 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(target,stopMusic);
HXDLIN( 149)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 149)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_153_getNextState)
HXLINE( 154)		::Paths_obj::setCurrentLevel((HX_("week",f4,5f,f5,4e) + ::PlayState_obj::storyWeek));
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		if (stopMusic) {
HXLINE( 163)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 163)			_hx_tmp = false;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 164)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 164)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 166)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_226_initSongsManifest)
HXLINE( 227)			if (::hx::IsNull( manifest )) {
HXLINE( 229)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 230)				return;
            			}
HXLINE( 233)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 235)			if (::hx::IsNull( library )) {
HXLINE( 237)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 242)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 243)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 244)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 244)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_248_initSongsManifest)
HXLINE( 248)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_189_initSongsManifest)
HXLINE( 190)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 191)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 193)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 195)		if (::hx::IsNotNull( library )) {
HXLINE( 197)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 200)		::String path = id;
HXLINE( 201)		::String rootPath = null();
HXLINE( 204)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 205)		if (libraryPaths->exists(id)) {
HXLINE( 207)			path = libraryPaths->get_string(id);
HXLINE( 208)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 212)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 214)				rootPath = path;
HXLINE( 215)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 219)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 222)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 225)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 251)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::MultiCallback >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsObject /*  ::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("logo",6b,9f,b7,47),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("beatHit",7d,ea,04,74),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingState",15,62,ae,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_20_boot)
HXDLIN(  20)		MIN_TIME = ((Float)1.0);
            	}
}

