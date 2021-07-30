#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS0(BackgroundGirls)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Replay)
HX_DECLARE_CLASS0(WiggleEffect)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static ::String curStage;
		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static int weekSong;
		static int shits;
		static int bads;
		static int goods;
		static int sicks;
		static int mania;
		static ::Array< int > keyAmmo;
		static  ::Replay rep;
		static bool loadRep;
		static Float pStep;
		static  ::flixel::FlxObject prevCamFollow;
		static int misses;
		static int campaignScore;
		static Float daPixelZoom;
		static bool theFunne;
		static int repPresses;
		static int repReleases;
		static Float timeCurrently;
		static Float timeCurrentlyR;
		bool halloweenLevel;
		 ::flixel::_hx_system::FlxSound vocals;
		 ::Character dad;
		 ::Character gf;
		 ::Boyfriend boyfriend;
		 ::flixel::group::FlxTypedGroup notes;
		::Array< ::Dynamic> unspawnNotes;
		 ::flixel::FlxSprite strumLine;
		int curSection;
		 ::flixel::FlxObject camFollow;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup playerStrums;
		bool camZooming;
		::String curSong;
		int gfSpeed;
		Float health;
		int combo;
		Float accuracy;
		Float totalNotesHit;
		int totalPlayed;
		bool ss;
		 ::flixel::FlxSprite healthBarBG;
		 ::flixel::ui::FlxBar healthBar;
		bool generatedMusic;
		bool startingSong;
		 ::HealthIcon iconP1;
		 ::HealthIcon iconP2;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		Float cutTime;
		 ::flixel::addons::effects::FlxTrail shaggyT;
		Float ctrTime;
		 ::flixel::text::FlxText notice;
		 ::flixel::text::FlxText nShadow;
		bool songEnded;
		Float stress;
		Float sh_r;
		::Array< ::String > dialogue;
		::Array< ::String > dface;
		::Array< int > dside;
		 ::flixel::FlxSprite halloweenBG;
		bool isHalloween;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::flixel::FlxSprite phillyTrain;
		 ::flixel::_hx_system::FlxSound trainSound;
		 ::flixel::FlxSprite limo;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::flixel::FlxSprite fastCar;
		 ::flixel::FlxSprite upperBoppers;
		 ::flixel::FlxSprite bottomBoppers;
		 ::flixel::FlxSprite santa;
		bool fc;
		 ::BackgroundGirls bgGirls;
		 ::WiggleEffect wiggleShit;
		bool talking;
		int songScore;
		 ::flixel::text::FlxText scoreTxt;
		 ::flixel::text::FlxText replayTxt;
		bool godCutEnd;
		bool godMoveBf;
		bool godMoveGf;
		bool godMoveSh;
		Float defaultCamZoom;
		 ::flixel::FlxSprite funneEffect;
		 ::flixel::FlxSprite burst;
		 ::flixel::FlxSprite rock;
		 ::flixel::FlxSprite gf_rock;
		 ::flixel::FlxSprite doorFrame;
		Float dfS;
		bool inCutscene;
		bool cs_reset;
		bool s_ending;
		bool gf_launched;
		void create();

		void foreground();
		::Dynamic foreground_dyn();

		int tb_x;
		int tb_y;
		int tb_fx;
		int tb_fy;
		int tb_rx;
		int jx;
		int curr_char;
		int curr_dial;
		 ::flixel::text::FlxText dropText;
		 ::flixel::FlxSprite tbox;
		int talk;
		int tb_appear;
		int dcd;
		::String fimage;
		 ::flixel::FlxSprite fsprite;
		int fside;
		 ::flixel::FlxSprite black;
		bool tb_open;
		void schoolIntro(int btrans);
		::Dynamic schoolIntro_dyn();

		void faceRender();
		::Dynamic faceRender_dyn();

		void superShaggy();
		::Dynamic superShaggy_dyn();

		 ::flixel::util::FlxTimer startTimer;
		bool perfectMode;
		::Array< ::Dynamic> noticeB;
		::Array< ::Dynamic> nShadowB;
		void startCountdown();
		::Dynamic startCountdown_dyn();

		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		void startSong();
		::Dynamic startSong_dyn();

		int debugNum;
		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		int sortByShit( ::Note Obj1, ::Note Obj2);
		::Dynamic sortByShit_dyn();

		::Array< ::Dynamic> hudArrows;
		::Array< Float > hudArrXPos;
		::Array< Float > hudArrYPos;
		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

		void tweenCamIn();
		::Dynamic tweenCamIn_dyn();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		bool paused;
		bool startedCountdown;
		bool canPause;
		Float truncateFloat(Float number,int precision);
		::Dynamic truncateFloat_dyn();

		void godIntro();
		::Dynamic godIntro_dyn();

		Float sShake;
		void update(Float elapsed);

		void endSong();
		::Dynamic endSong_dyn();

		bool endingSong;
		void popUpScore(Float strumtime);
		::Dynamic popUpScore_dyn();

		bool NearlyEquals(Float value1,Float value2,::hx::Null< Float >  unimportantDifference);
		::Dynamic NearlyEquals_dyn();

		bool upHold;
		bool downHold;
		bool rightHold;
		bool leftHold;
		bool l1Hold;
		bool uHold;
		bool r1Hold;
		bool l2Hold;
		bool dHold;
		bool r2Hold;
		bool n0Hold;
		bool n1Hold;
		bool n2Hold;
		bool n3Hold;
		bool n4Hold;
		bool n5Hold;
		bool n6Hold;
		bool n7Hold;
		bool n8Hold;
		Float reachBeat;
		void keyShit();
		::Dynamic keyShit_dyn();

		void noteMiss(::hx::Null< int >  direction);
		::Dynamic noteMiss_dyn();

		void badNoteCheck();
		::Dynamic badNoteCheck_dyn();

		void updateAccuracy();
		::Dynamic updateAccuracy_dyn();

		int getKeyPresses( ::Note note);
		::Dynamic getKeyPresses_dyn();

		int mashing;
		bool grace;
		void noteCheck(::Array< bool > controlArray, ::Note note);
		::Dynamic noteCheck_dyn();

		void goodNoteHit( ::Note note);
		::Dynamic goodNoteHit_dyn();

		bool fastCarCanDrive;
		void resetFastCar();
		::Dynamic resetFastCar_dyn();

		void fastCarDrive();
		::Dynamic fastCarDrive_dyn();

		bool trainMoving;
		Float trainFrameTiming;
		int trainCars;
		bool trainFinishing;
		int trainCooldown;
		void trainStart();
		::Dynamic trainStart_dyn();

		bool startedMoving;
		void updateTrainPos();
		::Dynamic updateTrainPos_dyn();

		void trainReset();
		::Dynamic trainReset_dyn();

		void lightningStrikeShit();
		::Dynamic lightningStrikeShit_dyn();

		void stepHit();

		int lightningStrikeBeat;
		int lightningOffset;
		void beatHit();

		int curLight;
		 ::Character scoob;
		int cs_time;
		bool cs_wait;
		Float cs_zoom;
		 ::flixel::FlxSprite cs_slash_dim;
		 ::flixel::_hx_system::FlxSound cs_sfx;
		 ::flixel::_hx_system::FlxSound cs_mus;
		 ::flixel::FlxSprite sh_body;
		 ::flixel::FlxSprite sh_head;
		 ::flixel::FlxObject cs_cam;
		 ::flixel::FlxSprite cs_black;
		 ::flixel::FlxSprite sh_ang;
		 ::flixel::FlxSprite sh_ang_eyes;
		 ::flixel::FlxSprite cs_bg;
		Float nex;
		void ssCutscene();
		::Dynamic ssCutscene_dyn();

		Float toDfS;
		void finalCutscene();
		::Dynamic finalCutscene_dyn();

		 ::flixel::FlxSprite title;
		 ::Alphabet thanks;
		 ::Alphabet endtxt;
		void modCredits();
		::Dynamic modCredits_dyn();

		void burstRelease(Float bX,Float bY);
		::Dynamic burstRelease_dyn();

		::String sh_kill_line;
		void csDial(::String csIndex);
		::Dynamic csDial_dyn();

};


#endif /* INCLUDED_PlayState */ 
