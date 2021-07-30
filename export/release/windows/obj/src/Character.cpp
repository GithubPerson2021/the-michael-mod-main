#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_10_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",10,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_7[] = {
	(int)0,
};
static const int _hx_array_data_e3a4bb89_8[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_9[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_10[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_11[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_12[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_13[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_14[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_15[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_16[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_17[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_18[] = {
	(int)0,(int)2,(int)6,
};
static const int _hx_array_data_e3a4bb89_19[] = {
	(int)8,(int)10,(int)12,(int)14,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_604_update,"Character","update",0x0e18944e,"Character.update","Character.hx",604,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_642_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",642,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_716_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",716,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_754_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",754,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_10_new)
HXLINE( 635)		this->danced = false;
HXLINE(  20)		this->powerup = false;
HXLINE(  18)		this->holdTimer = ((Float)0);
HXLINE(  16)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  15)		this->isPlayer = false;
HXLINE(  13)		this->debugMode = false;
HXLINE(  24)		super::__construct(x,y,null());
HXLINE(  26)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  27)		this->curCharacter = character;
HXLINE(  28)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  30)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXLINE(  31)		this->set_antialiasing(true);
HXLINE(  33)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 346)			::String library = null();
HXDLIN( 346)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("BOYFRIEND",4a,99,10,e2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 346)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("BOYFRIEND",4a,99,10,e2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 347)			this->set_frames(tex1);
HXLINE( 348)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 349)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 350)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 351)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 352)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 353)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 354)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 355)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 356)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 357)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 358)			this->animation->addByPrefix(HX_("hit",53,46,4f,00),HX_("BF hit",f7,85,10,c7),24,false,null(),null());
HXLINE( 360)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 361)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 362)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 364)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 366)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 367)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 368)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 369)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 370)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 371)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 372)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 373)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 374)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 375)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 376)			this->addOffset(HX_("hit",53,46,4f,00),20,20);
HXLINE( 377)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE( 378)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE( 379)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE( 380)			this->addOffset(HX_("scared",20,78,2a,3c),-4,null());
HXLINE( 382)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 384)			this->set_flipX(true);
HXLINE( 345)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-car",cb,95,e2,07)) ){
HXLINE( 415)			::String library = null();
HXDLIN( 415)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfCar",b0,c8,e3,b0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 415)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfCar",b0,c8,e3,b0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 416)			this->set_frames(tex1);
HXLINE( 417)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 418)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 419)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 420)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 421)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 422)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 423)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 424)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 425)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 427)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 428)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 429)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 430)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 431)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 432)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 433)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 434)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 435)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 436)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 438)			this->set_flipX(true);
HXLINE( 414)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-christmas",79,02,f4,24)) ){
HXLINE( 387)			::String library = null();
HXDLIN( 387)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/bfChristmas",d1,87,5c,b1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 387)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/bfChristmas",d1,87,5c,b1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 388)			this->set_frames(tex1);
HXLINE( 389)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 390)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 391)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 392)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 393)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 394)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 395)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 396)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 397)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 398)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 400)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 401)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 402)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 403)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 404)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 405)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 406)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 407)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 408)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 409)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 411)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 413)			this->set_flipX(true);
HXLINE( 386)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ){
HXLINE( 440)			::String library = null();
HXDLIN( 440)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixel",be,30,3a,8f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 440)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixel",be,30,3a,8f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 441)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF IDLE",f0,de,ca,52),24,false,null(),null());
HXLINE( 442)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF UP NOTE",7b,9d,4e,d3),24,false,null(),null());
HXLINE( 443)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF LEFT NOTE",4f,b9,34,d9),24,false,null(),null());
HXLINE( 444)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF RIGHT NOTE",b2,df,15,96),24,false,null(),null());
HXLINE( 445)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF DOWN NOTE",14,9f,6a,da),24,false,null(),null());
HXLINE( 446)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF UP MISS",85,d8,a0,d2),24,false,null(),null());
HXLINE( 447)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF LEFT MISS",59,f4,86,d8),24,false,null(),null());
HXLINE( 448)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF RIGHT MISS",bc,1a,68,95),24,false,null(),null());
HXLINE( 449)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF DOWN MISS",1e,da,bc,d9),24,false,null(),null());
HXLINE( 451)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 452)			this->addOffset(HX_("singUP",6a,52,21,b9),null(),null());
HXLINE( 453)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 454)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),null(),null());
HXLINE( 455)			this->addOffset(HX_("singDOWN",31,2a,ad,36),null(),null());
HXLINE( 456)			this->addOffset(HX_("singUPmiss",66,22,08,8a),null(),null());
HXLINE( 457)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),null(),null());
HXLINE( 458)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),null(),null());
HXLINE( 459)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),null(),null());
HXLINE( 461)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 462)			this->updateHitbox();
HXLINE( 464)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 466)			this->set_width((this->get_width() - ( (Float)(100) )));
HXLINE( 467)			this->set_height((this->get_height() - ( (Float)(100) )));
HXLINE( 469)			this->set_antialiasing(false);
HXLINE( 471)			this->set_flipX(true);
HXLINE( 439)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel-dead",34,d0,3d,c4)) ){
HXLINE( 473)			::String library = null();
HXDLIN( 473)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixelsDEAD",19,2b,e2,7b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 473)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixelsDEAD",19,2b,e2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 474)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 475)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 476)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("Retry Loop",5c,76,15,41),24,true,null(),null());
HXLINE( 477)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY CONFIRM",08,8c,5f,fd),24,false,null(),null());
HXLINE( 478)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 480)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),null(),null());
HXLINE( 481)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),-37,null());
HXLINE( 482)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),-37,null());
HXLINE( 483)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 485)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 486)			this->updateHitbox();
HXLINE( 487)			this->set_antialiasing(false);
HXLINE( 488)			this->set_flipX(true);
HXLINE( 472)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 131)			::String library = null();
HXDLIN( 131)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("shaggy",ad,07,23,1d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 131)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("shaggy",ad,07,23,1d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 132)			this->set_frames(tex);
HXLINE( 133)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("shaggy_idle",26,c8,05,08),24,null(),null(),null());
HXLINE( 134)			this->animation->addByPrefix(HX_("idle2",9e,8a,7e,b7),HX_("shaggy_idle2",4c,59,09,fd),24,null(),null(),null());
HXLINE( 135)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("shaggy_up",ed,be,dd,8d),20,null(),null(),null());
HXLINE( 136)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("shaggy_right",8a,da,ee,2e),20,null(),null(),null());
HXLINE( 137)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("shaggy_down",74,19,c0,04),24,null(),null(),null());
HXLINE( 138)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("shaggy_left",19,29,02,0a),24,null(),null(),null());
HXLINE( 139)			this->animation->addByPrefix(HX_("catch",3b,7c,21,41),HX_("shaggy_catch",e9,4a,ac,86),30,null(),null(),null());
HXLINE( 140)			this->animation->addByPrefix(HX_("hold",3f,c9,12,45),HX_("shaggy_hold",51,ea,64,07),30,null(),null(),null());
HXLINE( 141)			this->animation->addByPrefix(HX_("h_half",2a,cc,36,8d),HX_("shaggy_h_half",bc,d5,20,21),30,null(),null(),null());
HXLINE( 142)			this->animation->addByPrefix(HX_("fall",7b,bc,b5,43),HX_("shaggy_fall",8d,dd,07,06),30,null(),null(),null());
HXLINE( 143)			this->animation->addByPrefix(HX_("kneel",49,86,e2,e4),HX_("shaggy_half_ground",01,fc,53,1b),30,null(),null(),null());
HXLINE( 145)			this->animation->addByPrefix(HX_("power",05,4c,9a,c6),HX_("shaggy_powerup",ce,d3,a7,33),30,null(),null(),null());
HXLINE( 146)			this->animation->addByPrefix(HX_("idle_s",48,e7,3a,d7),HX_("shaggy_super_idle",2a,be,e9,41),24,null(),null(),null());
HXLINE( 147)			this->animation->addByPrefix(HX_("singUP_s",1e,94,ea,41),HX_("shaggy_sup2",f6,d3,ae,0e),20,null(),null(),null());
HXLINE( 148)			this->animation->addByPrefix(HX_("singRIGHT_s",81,5f,b4,fc),HX_("shaggy_sright",1b,94,58,78),20,null(),null(),null());
HXLINE( 149)			this->animation->addByPrefix(HX_("singDOWN_s",a5,2b,f1,1b),HX_("shaggy_sdown",03,7d,0d,bf),24,null(),null(),null());
HXLINE( 150)			this->animation->addByPrefix(HX_("singLEFT_s",8a,2e,92,81),HX_("shaggy_sleft",a8,8c,4f,c4),24,null(),null(),null());
HXLINE( 152)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 153)			this->addOffset(HX_("idle2",9e,8a,7e,b7),null(),null());
HXLINE( 154)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,0);
HXLINE( 155)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-20,-40);
HXLINE( 156)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),100,-120);
HXLINE( 157)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-170);
HXLINE( 158)			this->addOffset(HX_("catch",3b,7c,21,41),140,90);
HXLINE( 159)			this->addOffset(HX_("hold",3f,c9,12,45),90,100);
HXLINE( 160)			this->addOffset(HX_("h_half",2a,cc,36,8d),90,0);
HXLINE( 161)			this->addOffset(HX_("fall",7b,bc,b5,43),130,0);
HXLINE( 162)			this->addOffset(HX_("kneel",49,86,e2,e4),110,-123);
HXLINE( 164)			this->addOffset(HX_("idle_s",48,e7,3a,d7),null(),null());
HXLINE( 165)			this->addOffset(HX_("power",05,4c,9a,c6),10,0);
HXLINE( 166)			this->addOffset(HX_("singUP_s",1e,94,ea,41),-6,0);
HXLINE( 167)			this->addOffset(HX_("singRIGHT_s",81,5f,b4,fc),-20,-40);
HXLINE( 168)			this->addOffset(HX_("singLEFT_s",8a,2e,92,81),100,-120);
HXLINE( 169)			this->addOffset(HX_("singDOWN_s",a5,2b,f1,1b),0,-170);
HXLINE( 171)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 129)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  37)			::String library = null();
HXDLIN(  37)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("GF_assets",e3,ad,39,df)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  37)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("GF_assets",e3,ad,39,df)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  38)			this->set_frames(tex);
HXLINE(  39)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  41)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  42)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  43)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  44)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  45)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  46)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  47)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  48)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  49)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  50)			this->animation->addByPrefix(HX_("kill",9e,df,09,47),HX_("GF Kill",5f,cd,24,24),24,null(),null(),null());
HXLINE(  52)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  53)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  54)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  55)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  56)			this->addOffset(HX_("kill",9e,df,09,47),0,-5);
HXLINE(  58)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  59)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  60)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  61)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  62)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  63)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  65)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  67)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  35)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE( 101)			::String library = null();
HXDLIN( 101)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfCar",35,af,e4,91)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 101)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfCar",35,af,e4,91)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 102)			this->set_frames(tex);
HXLINE( 103)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_7,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 104)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_8,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 105)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_9,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 108)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 109)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 111)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 100)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE(  70)			::String library = null();
HXDLIN(  70)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/gfChristmas",16,a0,b4,35)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  70)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/gfChristmas",16,a0,b4,35)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  71)			this->set_frames(tex);
HXLINE(  72)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  73)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  74)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  75)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  76)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  77)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_10,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  78)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_11,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  79)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_12,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  80)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_13,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  81)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_14,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  82)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  84)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  85)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  86)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  87)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  89)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  90)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  91)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  92)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  93)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  94)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  96)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  98)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  69)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 114)			::String library = null();
HXDLIN( 114)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/gfPixel",83,82,25,5f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 114)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/gfPixel",83,82,25,5f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 115)			this->set_frames(tex);
HXLINE( 116)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_15,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 117)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_16,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 118)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_17,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 120)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 121)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 123)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 125)			Float _hx_tmp = this->get_width();
HXDLIN( 125)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 126)			this->updateHitbox();
HXLINE( 127)			this->set_antialiasing(false);
HXLINE( 113)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom",cb,16,53,00)) ){
HXLINE( 238)			::String library = null();
HXDLIN( 238)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Mom_Assets",f7,fa,9b,96)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 238)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Mom_Assets",f7,fa,9b,96)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 239)			this->set_frames(tex);
HXLINE( 241)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 242)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 243)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 244)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 247)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 249)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 250)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 251)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 252)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 253)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 255)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 237)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom-car",52,e6,f7,f6)) ){
HXLINE( 258)			::String library = null();
HXDLIN( 258)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("momCar",09,26,a0,c6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 258)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("momCar",09,26,a0,c6)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 259)			this->set_frames(tex);
HXLINE( 261)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 262)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 263)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 264)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 267)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 269)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 270)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 271)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 272)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 273)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 275)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 257)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ){
HXLINE( 277)			::String library = null();
HXDLIN( 277)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Monster_Assets",88,25,46,b3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 277)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Monster_Assets",88,25,46,b3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 278)			this->set_frames(tex);
HXLINE( 279)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 280)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 281)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 282)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 283)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 285)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 286)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 287)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 288)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 289)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-30,-40);
HXLINE( 290)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 276)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster-christmas",4f,88,85,27)) ){
HXLINE( 292)			::String library = null();
HXDLIN( 292)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/monsterChristmas",75,74,b6,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 292)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/monsterChristmas",75,74,b6,a6)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 293)			this->set_frames(tex);
HXLINE( 294)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 295)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 296)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 297)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 298)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 300)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 301)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 302)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 303)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 304)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-40,-94);
HXLINE( 305)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 291)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("parents-christmas",fe,94,c5,32)) ){
HXLINE( 552)			::String library = null();
HXDLIN( 552)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/mom_dad_christmas_assets",b9,c9,6d,11)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 552)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/mom_dad_christmas_assets",b9,c9,6d,11)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 553)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Parent Christmas Idle",c8,04,64,10),24,false,null(),null());
HXLINE( 554)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Parent Up Note Dad",88,99,f7,ad),24,false,null(),null());
HXLINE( 555)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Parent Down Note Dad",21,a5,93,34),24,false,null(),null());
HXLINE( 556)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Parent Left Note Dad",dc,f8,16,c4),24,false,null(),null());
HXLINE( 557)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Parent Right Note Dad",13,46,28,52),24,false,null(),null());
HXLINE( 559)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Parent Up Note Mom",0c,7a,fe,ad),24,false,null(),null());
HXLINE( 561)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Parent Down Note Mom",a5,85,9a,34),24,false,null(),null());
HXLINE( 562)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Parent Left Note Mom",60,d9,1d,c4),24,false,null(),null());
HXLINE( 563)			this->animation->addByPrefix(HX_("singRIGHT-alt",a9,0c,12,b9),HX_("Parent Right Note Mom",97,26,2f,52),24,false,null(),null());
HXLINE( 565)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 566)			this->addOffset(HX_("singUP",6a,52,21,b9),-47,24);
HXLINE( 567)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-1,-23);
HXLINE( 568)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,16);
HXLINE( 569)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-31,-29);
HXLINE( 570)			this->addOffset(HX_("singUP-alt",86,62,b4,5f),-47,24);
HXLINE( 571)			this->addOffset(HX_("singRIGHT-alt",a9,0c,12,b9),-1,-24);
HXLINE( 572)			this->addOffset(HX_("singLEFT-alt",f2,6f,48,8c),-30,15);
HXLINE( 573)			this->addOffset(HX_("singDOWN-alt",cd,29,35,ba),-30,-27);
HXLINE( 575)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 551)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE( 307)			::String library = null();
HXDLIN( 307)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Pico_FNF_assetss",95,ca,e1,39)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 307)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Pico_FNF_assetss",95,ca,e1,39)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 308)			this->set_frames(tex);
HXLINE( 309)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE( 310)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("pico Up note0",34,b3,8f,aa),24,false,null(),null());
HXLINE( 311)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Pico Down Note0",fb,e0,7b,fc),24,false,null(),null());
HXLINE( 312)			if (( (bool)(isPlayer) )) {
HXLINE( 314)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 315)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 316)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
HXLINE( 317)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
            			}
            			else {
HXLINE( 322)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 323)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 324)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
HXLINE( 325)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
            			}
HXLINE( 328)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("pico Up note miss",20,68,ae,5a),24,null(),null(),null());
HXLINE( 329)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("Pico Down Note MISS",67,4d,33,9a),24,null(),null(),null());
HXLINE( 331)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 332)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 333)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-68,-7);
HXLINE( 334)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),65,9);
HXLINE( 335)			this->addOffset(HX_("singDOWN",31,2a,ad,36),200,-70);
HXLINE( 336)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-19,67);
HXLINE( 337)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-60,41);
HXLINE( 338)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),62,64);
HXLINE( 339)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),210,-28);
HXLINE( 341)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 343)			this->set_flipX(true);
HXLINE( 306)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pshaggy",1d,fc,86,4e)) ){
HXLINE( 192)			::String library = null();
HXDLIN( 192)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pshaggy",1d,fc,86,4e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 192)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("pshaggy",1d,fc,86,4e)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 193)			this->set_frames(tex);
HXLINE( 194)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("pshaggy_idle",b6,bd,c5,cb),7,false,null(),null());
HXLINE( 195)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("pshaggy_up",7d,30,72,ae),28,false,null(),null());
HXLINE( 196)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("pshaggy_down",04,0f,80,c8),28,false,null(),null());
HXLINE( 197)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("pshaggy_left",a9,1e,c2,cd),28,false,null(),null());
HXLINE( 198)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("pshaggy_right",fa,c2,25,b3),28,false,null(),null());
HXLINE( 199)			this->animation->addByPrefix(HX_("back",27,da,10,41),HX_("pshaggy_back",c9,f0,22,c7),28,false,null(),null());
HXLINE( 200)			this->animation->addByPrefix(HX_("snap",4a,56,57,4c),HX_("pshaggy_snap",ec,6c,69,d2),7,false,null(),null());
HXLINE( 201)			this->animation->addByPrefix(HX_("snapped",c5,88,a1,cd),HX_("pshaggy_did_snap",2c,e0,d9,6f),28,false,null(),null());
HXLINE( 202)			this->animation->addByPrefix(HX_("smile",c8,02,71,7f),HX_("pshaggy_smile",e6,b9,32,49),7,false,null(),null());
HXLINE( 203)			this->animation->addByPrefix(HX_("stand",d6,70,0b,84),HX_("pshaggy_stand",f4,27,cd,4d),7,false,null(),null());
HXLINE( 205)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 206)			this->addOffset(HX_("smile",c8,02,71,7f),null(),null());
HXLINE( 207)			int sOff = 20;
HXLINE( 208)			this->addOffset(HX_("back",27,da,10,41),0,(-20 + sOff));
HXLINE( 209)			this->addOffset(HX_("stand",d6,70,0b,84),0,(-20 + sOff));
HXLINE( 210)			this->addOffset(HX_("snap",4a,56,57,4c),10,(72 + sOff));
HXLINE( 211)			this->addOffset(HX_("snapped",c5,88,a1,cd),0,(60 + sOff));
HXLINE( 212)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,0);
HXLINE( 213)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,0);
HXLINE( 214)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),10,0);
HXLINE( 215)			this->addOffset(HX_("singDOWN",31,2a,ad,36),60,-100);
HXLINE( 217)			this->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
HXLINE( 191)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("scooby",87,2b,69,45)) ){
HXLINE( 174)			::String library = null();
HXDLIN( 174)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scooby",87,2b,69,45)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 174)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("scooby",87,2b,69,45)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 175)			this->set_frames(tex);
HXLINE( 176)			this->animation->addByPrefix(HX_("walk",09,5d,f2,4e),HX_("scoob_walk",f6,42,7a,fa),30,false,null(),null());
HXLINE( 177)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("scoob_idle",01,8d,3b,f1),30,false,null(),null());
HXLINE( 178)			this->animation->addByPrefix(HX_("scare",c4,d3,ce,78),HX_("scoob_scare",37,1d,30,e4),24,false,null(),null());
HXLINE( 179)			this->animation->addByPrefix(HX_("blur",a7,42,19,41),HX_("scoob_blur",94,28,a1,ec),30,false,null(),null());
HXLINE( 180)			this->animation->addByPrefix(HX_("half",b3,29,08,45),HX_("scoob_half",a0,0f,90,f0),30,false,null(),null());
HXLINE( 181)			this->animation->addByPrefix(HX_("fall",7b,bc,b5,43),HX_("scoob_fall",68,a2,3d,ef),30,false,null(),null());
HXLINE( 183)			this->addOffset(HX_("walk",09,5d,f2,4e),100,60);
HXLINE( 184)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 185)			this->addOffset(HX_("scare",c4,d3,ce,78),40,null());
HXLINE( 186)			this->addOffset(HX_("blur",a7,42,19,41),null(),null());
HXLINE( 187)			this->addOffset(HX_("half",b3,29,08,45),null(),null());
HXLINE( 188)			this->addOffset(HX_("fall",7b,bc,b5,43),420,0);
HXLINE( 190)			this->playAnim(HX_("walk",09,5d,f2,4e),true,null(),null());
HXLINE( 173)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 491)			::String library = null();
HXDLIN( 491)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 491)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 492)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Idle",78,62,c5,a9),24,false,null(),null());
HXLINE( 493)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("SENPAI UP NOTE",f3,26,c1,c4),24,false,null(),null());
HXLINE( 494)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("SENPAI LEFT NOTE",c7,90,76,f3),24,false,null(),null());
HXLINE( 495)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("SENPAI RIGHT NOTE",3a,91,70,75),24,false,null(),null());
HXLINE( 496)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("SENPAI DOWN NOTE",8c,76,ac,f4),24,false,null(),null());
HXLINE( 498)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 499)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 500)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 501)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 502)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 504)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 506)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 507)			this->updateHitbox();
HXLINE( 509)			this->set_antialiasing(false);
HXLINE( 490)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai-angry",10,7a,b8,25)) ){
HXLINE( 511)			::String library = null();
HXDLIN( 511)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 511)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 512)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Angry Senpai Idle",d9,cc,b4,52),24,false,null(),null());
HXLINE( 513)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Angry Senpai UP NOTE",52,97,34,df),24,false,null(),null());
HXLINE( 514)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Angry Senpai LEFT NOTE",e6,16,ee,25),24,false,null(),null());
HXLINE( 515)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Angry Senpai RIGHT NOTE",3b,66,8e,6b),24,false,null(),null());
HXLINE( 516)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Angry Senpai DOWN NOTE",ab,fc,23,27),24,false,null(),null());
HXLINE( 518)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 519)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 520)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 521)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 522)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 523)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 525)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 526)			this->updateHitbox();
HXLINE( 528)			this->set_antialiasing(false);
HXLINE( 510)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spirit",31,bb,a9,bd)) ){
HXLINE( 531)			::String library = null();
HXDLIN( 531)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spirit",15,cc,6d,43)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 531)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spirit",15,cc,6d,43)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 532)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle spirit_",02,2f,37,04),24,false,null(),null());
HXLINE( 533)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up_",a4,29,59,00),24,false,null(),null());
HXLINE( 534)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right_",03,55,26,4e),24,false,null(),null());
HXLINE( 535)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left_",78,fe,56,72),24,false,null(),null());
HXLINE( 536)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spirit down_",8e,9f,fa,ae),24,false,null(),null());
HXLINE( 538)			this->addOffset(HX_("idle",14,a7,b3,45),-220,-280);
HXLINE( 539)			this->addOffset(HX_("singUP",6a,52,21,b9),-220,-240);
HXLINE( 540)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-220,-280);
HXLINE( 541)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-200,-280);
HXLINE( 542)			this->addOffset(HX_("singDOWN",31,2a,ad,36),170,110);
HXLINE( 544)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 545)			this->updateHitbox();
HXLINE( 547)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 549)			this->set_antialiasing(false);
HXLINE( 530)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 219)			::String library = null();
HXDLIN( 219)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("spooky_kids_assets",81,c1,f5,ce)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 219)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("spooky_kids_assets",81,c1,f5,ce)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 220)			this->set_frames(tex);
HXLINE( 221)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("spooky UP NOTE",a2,20,d8,ff),24,false,null(),null());
HXLINE( 222)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spooky DOWN note",fb,b1,f7,73),24,false,null(),null());
HXLINE( 223)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("note sing left",ca,f9,5d,8a),24,false,null(),null());
HXLINE( 224)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("spooky sing right",60,bf,ae,3b),24,false,null(),null());
HXLINE( 225)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_18,3),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 226)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_19,4),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 228)			this->addOffset(HX_("danceLeft",da,cc,f9,df),null(),null());
HXLINE( 229)			this->addOffset(HX_("danceRight",a9,7f,a6,91),null(),null());
HXLINE( 231)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,26);
HXLINE( 232)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-130,-14);
HXLINE( 233)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),130,-10);
HXLINE( 234)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-50,-130);
HXLINE( 236)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 218)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 578)		this->dance();
HXLINE( 580)		if (( (bool)(isPlayer) )) {
HXLINE( 582)			this->set_flipX(!(this->flipX));
HXLINE( 585)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 588)				::Array< int > oldRight = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames;
HXLINE( 589)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames;
HXLINE( 590)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames = oldRight;
HXLINE( 593)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3)) )) {
HXLINE( 595)					::Array< int > oldMiss = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames;
HXLINE( 596)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames;
HXLINE( 597)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames = oldMiss;
            				}
            			}
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_604_update)
HXLINE( 605)		if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 607)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 609)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 609)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
HXLINE( 612)			Float dadVar = ( (Float)(4) );
HXLINE( 614)			if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 616)				dadVar = ((Float)6.1);
            			}
HXLINE( 618)			if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 620)				this->dance();
HXLINE( 621)				this->holdTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 625)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 628)			bool _hx_tmp;
HXDLIN( 628)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 628)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 628)				_hx_tmp = false;
            			}
HXDLIN( 628)			if (_hx_tmp) {
HXLINE( 629)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 632)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_642_dance)
HXDLIN( 642)		if (!(this->debugMode)) {
HXLINE( 644)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 697)				if (!(this->powerup)) {
HXLINE( 699)					this->danced = !(this->danced);
HXLINE( 700)					if (this->danced) {
HXLINE( 701)						this->playAnim(HX_("idle2",9e,8a,7e,b7),true,null(),null());
            					}
            					else {
HXLINE( 703)						this->playAnim(HX_("idle",14,a7,b3,45),true,null(),null());
            					}
            				}
            				else {
HXLINE( 707)					this->playAnim(HX_("idle_s",48,e7,3a,d7),null(),null(),null());
            				}
HXLINE( 697)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE( 647)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 649)					this->danced = !(this->danced);
HXLINE( 651)					if (this->danced) {
HXLINE( 652)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 654)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 647)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE( 669)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 671)					this->danced = !(this->danced);
HXLINE( 673)					if (this->danced) {
HXLINE( 674)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 676)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 669)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE( 658)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 660)					this->danced = !(this->danced);
HXLINE( 662)					if (this->danced) {
HXLINE( 663)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 665)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 658)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 679)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 681)					this->danced = !(this->danced);
HXLINE( 683)					if (this->danced) {
HXLINE( 684)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 686)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 679)				goto _hx_goto_21;
            			}
            			if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 690)				this->danced = !(this->danced);
HXLINE( 692)				if (this->danced) {
HXLINE( 693)					this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            				}
            				else {
HXLINE( 695)					this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            				}
HXLINE( 689)				goto _hx_goto_21;
            			}
            			/* default */{
HXLINE( 710)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			_hx_goto_21:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_716_playAnim)
HXLINE( 717)		if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 719)			bool _hx_tmp;
HXDLIN( 719)			bool _hx_tmp1;
HXDLIN( 719)			if (this->powerup) {
HXLINE( 719)				_hx_tmp1 = (AnimName != HX_("idle_s",48,e7,3a,d7));
            			}
            			else {
HXLINE( 719)				_hx_tmp1 = false;
            			}
HXDLIN( 719)			if (_hx_tmp1) {
HXLINE( 719)				_hx_tmp = (AnimName != HX_("idle",14,a7,b3,45));
            			}
            			else {
HXLINE( 719)				_hx_tmp = false;
            			}
HXDLIN( 719)			if (_hx_tmp) {
HXLINE( 721)				AnimName = (AnimName + HX_("_s",34,53,00,00));
            			}
            		}
HXLINE( 724)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 726)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 727)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 729)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 732)			this->offset->set(0,0);
            		}
HXLINE( 734)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 736)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 738)				this->danced = true;
            			}
            			else {
HXLINE( 740)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 742)					this->danced = false;
            				}
            			}
HXLINE( 745)			bool _hx_tmp;
HXDLIN( 745)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 745)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 745)				_hx_tmp = true;
            			}
HXDLIN( 745)			if (_hx_tmp) {
HXLINE( 747)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_754_addOffset)
HXDLIN( 754)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 754)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(powerup,"powerup");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(powerup,"powerup");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"powerup") ) { return ::hx::Val( powerup ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"powerup") ) { powerup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("powerup",a0,7d,c9,5a));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,powerup),HX_("powerup",a0,7d,c9,5a)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("holdTimer",06,82,13,a9),
	HX_("powerup",a0,7d,c9,5a),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

