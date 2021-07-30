#include <hxcpp.h>

#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_14_new,"Note","new",0x1cc75604,"Note.new","Note.hx",14,0x1a8855ec)
static const int _hx_array_data_33e34412_2[] = {
	(int)6,
};
static const int _hx_array_data_33e34412_3[] = {
	(int)7,
};
static const int _hx_array_data_33e34412_4[] = {
	(int)5,
};
static const int _hx_array_data_33e34412_5[] = {
	(int)4,
};
static const int _hx_array_data_33e34412_6[] = {
	(int)4,
};
static const int _hx_array_data_33e34412_7[] = {
	(int)6,
};
static const int _hx_array_data_33e34412_8[] = {
	(int)7,
};
static const int _hx_array_data_33e34412_9[] = {
	(int)5,
};
static const int _hx_array_data_33e34412_10[] = {
	(int)0,
};
static const int _hx_array_data_33e34412_11[] = {
	(int)2,
};
static const int _hx_array_data_33e34412_12[] = {
	(int)3,
};
static const int _hx_array_data_33e34412_13[] = {
	(int)1,
};
static const ::String _hx_array_data_33e34412_14[] = {
	HX_("purple",3c,f6,89,71),HX_("blue",9a,42,19,41),HX_("green",c3,0e,ed,99),HX_("red",51,d9,56,00),
};
static const ::String _hx_array_data_33e34412_15[] = {
	HX_("purple",3c,f6,89,71),HX_("green",c3,0e,ed,99),HX_("red",51,d9,56,00),HX_("yellow",74,9f,5c,d0),HX_("blue",9a,42,19,41),HX_("dark",76,54,63,42),
};
static const ::String _hx_array_data_33e34412_16[] = {
	HX_("purple",3c,f6,89,71),HX_("blue",9a,42,19,41),HX_("green",c3,0e,ed,99),HX_("red",51,d9,56,00),HX_("white",a9,4a,bd,c9),HX_("yellow",74,9f,5c,d0),HX_("violet",7f,77,e0,ec),HX_("black",bf,d5,f1,b4),HX_("dark",76,54,63,42),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_211_update,"Note","update",0xca3a1ee5,"Note.update","Note.hx",211,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_31_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",31,0x1a8855ec)
static const Float _hx_array_data_33e34412_19[] = {
	(Float)4,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_32_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",32,0x1a8855ec)
static const Float _hx_array_data_33e34412_21[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_33_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",33,0x1a8855ec)
static const Float _hx_array_data_33e34412_23[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_37_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",37,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_38_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",38,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_39_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",39,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_40_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",40,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_41_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",41,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_42_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",42,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_44_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",44,0x1a8855ec)

void Note_obj::__construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_14_new)
HXLINE(  29)		this->mania = 0;
HXLINE(  28)		this->noteScore = ((Float)1);
HXLINE(  26)		this->isSustainNote = false;
HXLINE(  25)		this->sustainLength = ((Float)0);
HXLINE(  22)		this->wasGoodHit = false;
HXLINE(  21)		this->tooLate = false;
HXLINE(  20)		this->canBeHit = false;
HXLINE(  19)		this->noteData = 0;
HXLINE(  18)		this->mustPress = false;
HXLINE(  16)		this->strumTime = ((Float)0);
HXLINE(  48)		::Note_obj::swagWidth = ((Float)112.);
HXLINE(  49)		::Note_obj::noteScale = ((Float)0.7);
HXLINE(  50)		this->mania = 0;
HXLINE(  51)		if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("mania",f2,c0,1e,03),::hx::paccDynamic),1 )) {
HXLINE(  53)			::Note_obj::swagWidth = ((Float)84.);
HXLINE(  54)			::Note_obj::noteScale = ((Float)0.6);
HXLINE(  55)			this->mania = 1;
            		}
            		else {
HXLINE(  57)			if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("mania",f2,c0,1e,03),::hx::paccDynamic),2 )) {
HXLINE(  59)				::Note_obj::swagWidth = ((Float)62.999999999999993);
HXLINE(  60)				::Note_obj::noteScale = ((Float)0.46);
HXLINE(  61)				this->mania = 2;
            			}
            		}
HXLINE(  63)		super::__construct(null(),null(),null());
HXLINE(  65)		if (::hx::IsNull( prevNote )) {
HXLINE(  66)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  68)		this->prevNote = prevNote;
HXLINE(  69)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE(  71)		this->set_x((this->x + 50));
HXLINE(  72)		if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("mania",f2,c0,1e,03),::hx::paccDynamic),2 )) {
HXLINE(  74)			this->set_x((this->x - ::Note_obj::tooMuch));
            		}
HXLINE(  77)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE(  79)		this->noteData = noteData;
HXLINE(  81)		int addto = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) );
HXLINE(  82)		if (::Main_obj::editor) {
HXLINE(  84)			addto = 0;
            		}
HXLINE(  86)		this->strumTime = (strumTime + addto);
HXLINE(  88)		::String daStage = ::PlayState_obj::curStage;
HXLINE(  90)		::String _hx_switch_0 = daStage;
            		if (  (_hx_switch_0==HX_("school",74,b8,c8,40)) ||  (_hx_switch_0==HX_("schoolEvil",28,a1,f5,f7)) ){
HXLINE(  93)			::String library = null();
HXDLIN(  93)			this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/arrows-pixels",b7,c3,c7,09)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,17,17,null(),null());
HXLINE(  95)			this->animation->add(HX_("greenScroll",30,4f,fe,9e),::Array_obj< int >::fromData( _hx_array_data_33e34412_2,1),null(),null(),null(),null());
HXLINE(  96)			this->animation->add(HX_("redScroll",3e,78,c3,3a),::Array_obj< int >::fromData( _hx_array_data_33e34412_3,1),null(),null(),null(),null());
HXLINE(  97)			this->animation->add(HX_("blueScroll",47,7e,59,a2),::Array_obj< int >::fromData( _hx_array_data_33e34412_4,1),null(),null(),null(),null());
HXLINE(  98)			this->animation->add(HX_("purpleScroll",69,97,67,99),::Array_obj< int >::fromData( _hx_array_data_33e34412_5,1),null(),null(),null(),null());
HXLINE( 100)			if (this->isSustainNote) {
HXLINE( 102)				::String library = null();
HXDLIN( 102)				this->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/arrowEnds",08,21,6c,fd)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),true,7,6,null(),null());
HXLINE( 104)				this->animation->add(HX_("purpleholdend",40,d5,15,5b),::Array_obj< int >::fromData( _hx_array_data_33e34412_6,1),null(),null(),null(),null());
HXLINE( 105)				this->animation->add(HX_("greenholdend",99,eb,5f,39),::Array_obj< int >::fromData( _hx_array_data_33e34412_7,1),null(),null(),null(),null());
HXLINE( 106)				this->animation->add(HX_("redholdend",cb,ae,1e,ea),::Array_obj< int >::fromData( _hx_array_data_33e34412_8,1),null(),null(),null(),null());
HXLINE( 107)				this->animation->add(HX_("blueholdend",a2,f0,cd,25),::Array_obj< int >::fromData( _hx_array_data_33e34412_9,1),null(),null(),null(),null());
HXLINE( 109)				this->animation->add(HX_("purplehold",7b,8d,da,cd),::Array_obj< int >::fromData( _hx_array_data_33e34412_10,1),null(),null(),null(),null());
HXLINE( 110)				this->animation->add(HX_("greenhold",82,f5,c1,bc),::Array_obj< int >::fromData( _hx_array_data_33e34412_11,1),null(),null(),null(),null());
HXLINE( 111)				this->animation->add(HX_("redhold",10,1f,bf,bf),::Array_obj< int >::fromData( _hx_array_data_33e34412_12,1),null(),null(),null(),null());
HXLINE( 112)				this->animation->add(HX_("bluehold",d9,60,aa,a4),::Array_obj< int >::fromData( _hx_array_data_33e34412_13,1),null(),null(),null(),null());
            			}
HXLINE( 115)			Float _hx_tmp = this->get_width();
HXDLIN( 115)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 116)			this->updateHitbox();
HXLINE(  92)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE( 119)			::String library = null();
HXDLIN( 119)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 119)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 121)			this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
HXLINE( 122)			this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
HXLINE( 123)			this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
HXLINE( 124)			this->animation->addByPrefix(HX_("purpleScroll",69,97,67,99),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
HXLINE( 125)			this->animation->addByPrefix(HX_("whiteScroll",96,7b,75,59),HX_("white0",67,09,e4,bb),null(),null(),null(),null());
HXLINE( 126)			this->animation->addByPrefix(HX_("yellowScroll",a1,fa,d0,a5),HX_("yellow0",3c,e6,ae,80),null(),null(),null(),null());
HXLINE( 127)			this->animation->addByPrefix(HX_("violetScroll",ec,ec,32,6c),HX_("violet0",d1,17,88,57),null(),null(),null(),null());
HXLINE( 128)			this->animation->addByPrefix(HX_("blackScroll",2c,7b,fc,5d),HX_("black0",91,31,a9,9e),null(),null(),null(),null());
HXLINE( 129)			this->animation->addByPrefix(HX_("darkScroll",23,5d,78,60),HX_("dark0",fa,92,86,d4),null(),null(),null(),null());
HXLINE( 132)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),null(),null(),null(),null());
HXLINE( 133)			this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("green hold end",77,4d,45,46),null(),null(),null(),null());
HXLINE( 134)			this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("red hold end",29,c1,a0,b6),null(),null(),null(),null());
HXLINE( 135)			this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("blue hold end",c0,66,05,ae),null(),null(),null(),null());
HXLINE( 136)			this->animation->addByPrefix(HX_("whiteholdend",73,98,2f,a7),HX_("white hold end",d1,64,fd,88),null(),null(),null(),null());
HXLINE( 137)			this->animation->addByPrefix(HX_("yellowholdend",08,43,e3,2a),HX_("yellow hold end",a6,9e,e0,20),null(),null(),null(),null());
HXLINE( 138)			this->animation->addByPrefix(HX_("violetholdend",5d,52,35,fa),HX_("violet hold end",3b,ed,54,f4),null(),null(),null(),null());
HXLINE( 139)			this->animation->addByPrefix(HX_("blackholdend",1d,3c,c8,98),HX_("black hold end",fb,c6,c5,8c),null(),null(),null(),null());
HXLINE( 140)			this->animation->addByPrefix(HX_("darkholdend",46,12,b2,c2),HX_("dark hold end",64,39,70,65),null(),null(),null(),null());
HXLINE( 142)			this->animation->addByPrefix(HX_("purplehold",7b,8d,da,cd),HX_("purple hold piece",b1,8b,b1,d3),null(),null(),null(),null());
HXLINE( 143)			this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("green hold piece",8a,42,68,ae),null(),null(),null(),null());
HXLINE( 144)			this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("red hold piece",bc,86,4d,83),null(),null(),null(),null());
HXLINE( 145)			this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("blue hold piece",13,00,58,99),null(),null(),null(),null());
HXLINE( 146)			this->animation->addByPrefix(HX_("whitehold",68,1c,f5,26),HX_("white hold piece",64,64,d8,20),null(),null(),null(),null());
HXLINE( 147)			this->animation->addByPrefix(HX_("yellowhold",b3,32,26,f4),HX_("yellow hold piece",79,7d,5d,e3),null(),null(),null(),null());
HXLINE( 148)			this->animation->addByPrefix(HX_("violethold",3e,6c,de,f0),HX_("violet hold piece",4e,5b,72,b7),null(),null(),null(),null());
HXLINE( 149)			this->animation->addByPrefix(HX_("blackhold",7e,ea,9b,19),HX_("black hold piece",0e,25,1d,f1),null(),null(),null(),null());
HXLINE( 150)			this->animation->addByPrefix(HX_("darkhold",b5,90,f8,8e),HX_("dark hold piece",b7,c3,17,1f),null(),null(),null(),null());
HXLINE( 152)			Float _hx_tmp1 = this->get_width();
HXDLIN( 152)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 * ::Note_obj::noteScale)),null());
HXLINE( 153)			this->updateHitbox();
HXLINE( 154)			this->set_antialiasing(true);
            		}
            		_hx_goto_0:;
HXLINE( 157)		bool _hx_tmp = (noteData == 0);
HXLINE( 162)		::Array< ::String > frameN = ::Array_obj< ::String >::fromData( _hx_array_data_33e34412_14,4);
HXLINE( 163)		if ((this->mania == 1)) {
HXLINE( 163)			frameN = ::Array_obj< ::String >::fromData( _hx_array_data_33e34412_15,6);
            		}
            		else {
HXLINE( 164)			if ((this->mania == 2)) {
HXLINE( 164)				frameN = ::Array_obj< ::String >::fromData( _hx_array_data_33e34412_16,9);
            			}
            		}
HXLINE( 166)		this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(noteData) ))));
HXLINE( 167)		this->animation->play((frameN->__get(noteData) + HX_("Scroll",2d,4c,f9,7b)),null(),null(),null());
HXLINE( 170)		bool _hx_tmp1;
HXDLIN( 170)		if (this->isSustainNote) {
HXLINE( 170)			_hx_tmp1 = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 170)			_hx_tmp1 = false;
            		}
HXDLIN( 170)		if (_hx_tmp1) {
HXLINE( 173)			this->set_alpha(((Float)0.6));
HXLINE( 174)			if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downscroll",ef,45,d4,4f),::hx::paccDynamic)) )) {
HXLINE( 176)				 ::flixel::math::FlxPoint fh = this->scale;
HXDLIN( 176)				fh->set_y((fh->y * ( (Float)(-1) )));
            			}
HXLINE( 179)			Float _hx_tmp = this->x;
HXDLIN( 179)			this->set_x((_hx_tmp + (this->get_width() / ( (Float)(2) ))));
HXLINE( 181)			this->animation->play((frameN->__get(noteData) + HX_("holdend",fc,4b,02,b8)),null(),null(),null());
HXLINE( 182)			bool _hx_tmp1 = (noteData == 0);
HXLINE( 188)			this->updateHitbox();
HXLINE( 190)			Float _hx_tmp2 = this->x;
HXDLIN( 190)			this->set_x((_hx_tmp2 - (this->get_width() / ( (Float)(2) ))));
HXLINE( 192)			if (::StringTools_obj::startsWith(::PlayState_obj::curStage,HX_("school",74,b8,c8,40))) {
HXLINE( 193)				this->set_x((this->x + 30));
            			}
HXLINE( 195)			if (prevNote->isSustainNote) {
HXLINE( 197)				bool _hx_tmp = (prevNote->noteData == 0);
HXLINE( 202)				prevNote->animation->play((frameN->__get(prevNote->noteData) + HX_("hold",3f,c9,12,45)),null(),null(),null());
HXLINE( 203)				 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 203)				fh->set_y((fh->y * ((((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.5)) * ( (Float)(::PlayState_obj::SONG->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) )) * (((Float)0.7) / ::Note_obj::noteScale))));
HXLINE( 204)				prevNote->updateHitbox();
            			}
            		}
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_211_update)
HXLINE( 214)		this->super::update(elapsed);
HXLINE( 216)		if (this->mustPress) {
HXLINE( 219)			bool _hx_tmp;
HXDLIN( 219)			if ((this->strumTime > (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 219)				_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * ((Float)0.5))));
            			}
            			else {
HXLINE( 219)				_hx_tmp = false;
            			}
HXDLIN( 219)			if (_hx_tmp) {
HXLINE( 221)				this->canBeHit = true;
            			}
            			else {
HXLINE( 223)				this->canBeHit = false;
            			}
HXLINE( 225)			bool _hx_tmp1;
HXDLIN( 225)			if ((this->strumTime < (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 225)				_hx_tmp1 = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 225)				_hx_tmp1 = false;
            			}
HXDLIN( 225)			if (_hx_tmp1) {
HXLINE( 226)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 230)			this->canBeHit = false;
HXLINE( 232)			if ((this->strumTime <= ::Conductor_obj::songPosition)) {
HXLINE( 233)				this->wasGoodHit = true;
            			}
            		}
HXLINE( 236)		if (this->tooLate) {
HXLINE( 238)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 239)				this->set_alpha(((Float)0.3));
            			}
            		}
            	}


::Array< Float > Note_obj::noteyOff1;

::Array< Float > Note_obj::noteyOff2;

::Array< Float > Note_obj::noteyOff3;

Float Note_obj::swagWidth;

Float Note_obj::noteScale;

int Note_obj::PURP_NOTE;

int Note_obj::GREEN_NOTE;

int Note_obj::BLUE_NOTE;

int Note_obj::RED_NOTE;

int Note_obj::EX1_NOTE;

int Note_obj::EX2_NOTE;

Float Note_obj::tooMuch;


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteScore,"noteScore");
	HX_MARK_MEMBER_NAME(mania,"mania");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteScore,"noteScore");
	HX_VISIT_MEMBER_NAME(mania,"mania");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mania") ) { return ::hx::Val( mania ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"noteScore") ) { return ::hx::Val( noteScore ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tooMuch") ) { outValue = ( tooMuch ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { outValue = ( RED_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"EX1_NOTE") ) { outValue = ( EX1_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"EX2_NOTE") ) { outValue = ( EX2_NOTE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"noteyOff1") ) { outValue = ( noteyOff1 ); return true; }
		if (HX_FIELD_EQ(inName,"noteyOff2") ) { outValue = ( noteyOff2 ); return true; }
		if (HX_FIELD_EQ(inName,"noteyOff3") ) { outValue = ( noteyOff3 ); return true; }
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
		if (HX_FIELD_EQ(inName,"noteScale") ) { outValue = ( noteScale ); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { outValue = ( PURP_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { outValue = ( BLUE_NOTE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { outValue = ( GREEN_NOTE ); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mania") ) { mania=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::Note >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteScore") ) { noteScore=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tooMuch") ) { tooMuch=ioValue.Cast< Float >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { RED_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"EX1_NOTE") ) { EX1_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"EX2_NOTE") ) { EX2_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"noteyOff1") ) { noteyOff1=ioValue.Cast< ::Array< Float > >(); return true; }
		if (HX_FIELD_EQ(inName,"noteyOff2") ) { noteyOff2=ioValue.Cast< ::Array< Float > >(); return true; }
		if (HX_FIELD_EQ(inName,"noteyOff3") ) { noteyOff3=ioValue.Cast< ::Array< Float > >(); return true; }
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"noteScale") ) { noteScale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { PURP_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { BLUE_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { GREEN_NOTE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteScore",00,be,66,b6));
	outFields->push(HX_("mania",f2,c0,1e,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteScore),HX_("noteScore",00,be,66,b6)},
	{::hx::fsInt,(int)offsetof(Note_obj,mania),HX_("mania",f2,c0,1e,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Note_obj::noteyOff1,HX_("noteyOff1",c9,a5,61,8a)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Note_obj::noteyOff2,HX_("noteyOff2",ca,a5,61,8a)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &Note_obj::noteyOff3,HX_("noteyOff3",cb,a5,61,8a)},
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{::hx::fsFloat,(void *) &Note_obj::noteScale,HX_("noteScale",38,19,5c,b6)},
	{::hx::fsInt,(void *) &Note_obj::PURP_NOTE,HX_("PURP_NOTE",ee,97,79,1e)},
	{::hx::fsInt,(void *) &Note_obj::GREEN_NOTE,HX_("GREEN_NOTE",4e,c6,8e,9c)},
	{::hx::fsInt,(void *) &Note_obj::BLUE_NOTE,HX_("BLUE_NOTE",f7,42,53,a9)},
	{::hx::fsInt,(void *) &Note_obj::RED_NOTE,HX_("RED_NOTE",00,15,92,9e)},
	{::hx::fsInt,(void *) &Note_obj::EX1_NOTE,HX_("EX1_NOTE",b3,3e,52,34)},
	{::hx::fsInt,(void *) &Note_obj::EX2_NOTE,HX_("EX2_NOTE",12,9b,ad,9a)},
	{::hx::fsFloat,(void *) &Note_obj::tooMuch,HX_("tooMuch",c1,cc,0f,56)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("prevNote",85,f8,d7,11),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteScore",00,be,66,b6),
	HX_("mania",f2,c0,1e,03),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::noteyOff1,"noteyOff1");
	HX_MARK_MEMBER_NAME(Note_obj::noteyOff2,"noteyOff2");
	HX_MARK_MEMBER_NAME(Note_obj::noteyOff3,"noteyOff3");
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_MARK_MEMBER_NAME(Note_obj::noteScale,"noteScale");
	HX_MARK_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::EX1_NOTE,"EX1_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::EX2_NOTE,"EX2_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::tooMuch,"tooMuch");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::noteyOff1,"noteyOff1");
	HX_VISIT_MEMBER_NAME(Note_obj::noteyOff2,"noteyOff2");
	HX_VISIT_MEMBER_NAME(Note_obj::noteyOff3,"noteyOff3");
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_VISIT_MEMBER_NAME(Note_obj::noteScale,"noteScale");
	HX_VISIT_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::EX1_NOTE,"EX1_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::EX2_NOTE,"EX2_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::tooMuch,"tooMuch");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("noteyOff1",c9,a5,61,8a),
	HX_("noteyOff2",ca,a5,61,8a),
	HX_("noteyOff3",cb,a5,61,8a),
	HX_("swagWidth",1c,87,d9,a6),
	HX_("noteScale",38,19,5c,b6),
	HX_("PURP_NOTE",ee,97,79,1e),
	HX_("GREEN_NOTE",4e,c6,8e,9c),
	HX_("BLUE_NOTE",f7,42,53,a9),
	HX_("RED_NOTE",00,15,92,9e),
	HX_("EX1_NOTE",b3,3e,52,34),
	HX_("EX2_NOTE",12,9b,ad,9a),
	HX_("tooMuch",c1,cc,0f,56),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_31_boot)
HXDLIN(  31)		noteyOff1 = ::Array_obj< Float >::fromData( _hx_array_data_33e34412_19,6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_32_boot)
HXDLIN(  32)		noteyOff2 = ::Array_obj< Float >::fromData( _hx_array_data_33e34412_21,6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_33_boot)
HXDLIN(  33)		noteyOff3 = ::Array_obj< Float >::fromData( _hx_array_data_33e34412_23,6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_37_boot)
HXDLIN(  37)		PURP_NOTE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_38_boot)
HXDLIN(  38)		GREEN_NOTE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_39_boot)
HXDLIN(  39)		BLUE_NOTE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_40_boot)
HXDLIN(  40)		RED_NOTE = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_41_boot)
HXDLIN(  41)		EX1_NOTE = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_42_boot)
HXDLIN(  42)		EX2_NOTE = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_44_boot)
HXDLIN(  44)		tooMuch = ((Float)30);
            	}
}

