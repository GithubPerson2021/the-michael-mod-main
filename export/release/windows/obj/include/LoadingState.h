#ifndef INCLUDED_LoadingState
#define INCLUDED_LoadingState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(LoadingState)
HX_DECLARE_CLASS0(MultiCallback)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(lime,app,Future)



class HXCPP_CLASS_ATTRIBUTES LoadingState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef LoadingState_obj OBJ_;
		LoadingState_obj();

	public:
		enum { _hx_ClassId = 0x2a8fb4d5 };

		void __construct( ::flixel::FlxState target,bool stopMusic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LoadingState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LoadingState"); }
		static ::hx::ObjectPtr< LoadingState_obj > __new( ::flixel::FlxState target,bool stopMusic);
		static ::hx::ObjectPtr< LoadingState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoadingState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoadingState",15,62,ae,41); }

		static void __boot();
		static Float MIN_TIME;
		static ::String getSongPath();
		static ::Dynamic getSongPath_dyn();

		static ::String getVocalPath();
		static ::Dynamic getVocalPath_dyn();

		static void loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  stopMusic);
		static ::Dynamic loadAndSwitchState_dyn();

		static  ::flixel::FlxState getNextState( ::flixel::FlxState target,::hx::Null< bool >  stopMusic);
		static ::Dynamic getNextState_dyn();

		static  ::lime::app::Future initSongsManifest();
		static ::Dynamic initSongsManifest_dyn();

		 ::flixel::FlxState target;
		bool stopMusic;
		 ::MultiCallback callbacks;
		 ::flixel::FlxSprite logo;
		 ::flixel::FlxSprite gfDance;
		bool danceLeft;
		void create();

		void checkLoadSong(::String path);
		::Dynamic checkLoadSong_dyn();

		void checkLibrary(::String library);
		::Dynamic checkLibrary_dyn();

		void beatHit();

		void update(Float elapsed);

		void onLoad();
		::Dynamic onLoad_dyn();

		void destroy();

};


#endif /* INCLUDED_LoadingState */ 
