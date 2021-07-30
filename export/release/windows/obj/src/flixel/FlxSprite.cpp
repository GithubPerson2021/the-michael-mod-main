#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfd221447aa7194b_39_new,"flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",39,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_278_initVars,"flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",278,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_306_destroy,"flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",306,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_336_clone,"flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",336,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_347_loadGraphicFromSprite,"flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",347,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_384_loadGraphic,"flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",384,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_427_loadRotatedGraphic,"flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",427,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_488_loadRotatedFrame,"flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",488,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_523_makeGraphic,"flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",523,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_532_graphicLoaded,"flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",532,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_538_resetSize,"flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",538,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_549_resetFrameSize,"flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",549,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_563_resetSizeFromFrame,"flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",563,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_576_resetFrame,"flixel.FlxSprite","resetFrame",0x02a6a847,"flixel.FlxSprite.resetFrame","flixel/FlxSprite.hx",576,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_587_setGraphicSize,"flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",587,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_606_updateHitbox,"flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",606,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_618_resetHelpers,"flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",618,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_640_update,"flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",640,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_650_updateAnimation,"flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",650,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_656_checkEmptyFrame,"flixel.FlxSprite","checkEmptyFrame",0xe3dea03f,"flixel.FlxSprite.checkEmptyFrame","flixel/FlxSprite.hx",656,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_664_draw,"flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",664,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_698_drawSimple,"flixel.FlxSprite","drawSimple",0x0dc977bf,"flixel.FlxSprite.drawSimple","flixel/FlxSprite.hx",698,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_708_drawComplex,"flixel.FlxSprite","drawComplex",0xcf4c0e03,"flixel.FlxSprite.drawComplex","flixel/FlxSprite.hx",708,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_742_stamp,"flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",742,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_789_drawFrame,"flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",789,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_810_centerOffsets,"flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",810,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_826_centerOrigin,"flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",826,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_839_replaceColor,"flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",839,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_861_setColorTransform,"flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",861,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_873_updateColorTransform,"flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",873,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_896_pixelsOverlapPoint,"flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",896,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_927_calcFrame,"flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",927,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_940_updateFramePixels,"flixel.FlxSprite","updateFramePixels",0x2cd43e68,"flixel.FlxSprite.updateFramePixels","flixel/FlxSprite.hx",940,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_989_getGraphicMidpoint,"flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",989,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1003_isOnScreen,"flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1003,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1054_isSimpleRender,"flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1054,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1070_isSimpleRenderBlit,"flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1070,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1088_setFacingFlip,"flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1088,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1100_setFrames,"flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1100,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1137_get_pixels,"flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1137,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1142_set_pixels,"flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1142,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1161_set_frame,"flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1161,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1197_set_facing,"flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1197,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1210_set_alpha,"flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1210,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1222_set_color,"flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1222,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1234_set_angle,"flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1234,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1248_updateTrig,"flixel.FlxSprite","updateTrig",0x193f7fee,"flixel.FlxSprite.updateTrig","flixel/FlxSprite.hx",1248,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1260_set_blend,"flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1260,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1269_set_graphic,"flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1269,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1287_set_clipRect,"flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1287,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1308_set_frames,"flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1308,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1337_set_flipX,"flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1337,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1348_set_flipY,"flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1348,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1360_set_antialiasing,"flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1360,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1366_set_useFramePixels,"flixel.FlxSprite","set_useFramePixels",0x72e62ad9,"flixel.FlxSprite.set_useFramePixels","flixel/FlxSprite.hx",1366,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1390_checkFlipX,"flixel.FlxSprite","checkFlipX",0x26093f8c,"flixel.FlxSprite.checkFlipX","flixel/FlxSprite.hx",1390,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1401_checkFlipY,"flixel.FlxSprite","checkFlipY",0x26093f8d,"flixel.FlxSprite.checkFlipY","flixel/FlxSprite.hx",1401,0x0384bffa)
namespace flixel{

void FlxSprite_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic){
            		 ::Dynamic X = __o_X;
            		if (::hx::IsNull(__o_X)) X = 0;
            		 ::Dynamic Y = __o_Y;
            		if (::hx::IsNull(__o_Y)) Y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_39_new)
HXLINE( 256)		this->_facingFlip =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 250)		this->_angleChanged = true;
HXLINE( 248)		this->_cosAngle = ((Float)1);
HXLINE( 245)		this->_sinAngle = ((Float)0);
HXLINE( 202)		this->_facingVerticalMult = 1;
HXLINE( 200)		this->_facingHorizontalMult = 1;
HXLINE( 167)		this->useColorTransform = false;
HXLINE( 160)		this->color = 16777215;
HXLINE( 130)		this->flipY = false;
HXLINE( 125)		this->flipX = false;
HXLINE( 120)		this->facing = 16;
HXLINE( 114)		this->alpha = ((Float)1.0);
HXLINE( 109)		this->bakedRotationAngle = ((Float)0);
HXLINE(  96)		this->numFrames = 0;
HXLINE(  90)		this->frameHeight = 0;
HXLINE(  85)		this->frameWidth = 0;
HXLINE(  69)		this->dirty = true;
HXLINE(  63)		this->antialiasing = false;
HXLINE(  58)		this->useFramePixels = true;
HXLINE( 269)		super::__construct(X,Y,null(),null());
HXLINE( 271)		this->set_useFramePixels(::flixel::FlxG_obj::renderBlit);
HXLINE( 272)		if (::hx::IsNotNull( SimpleGraphic )) {
HXLINE( 273)			this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
            		}
            	}

Dynamic FlxSprite_obj::__CreateEmpty() { return new FlxSprite_obj; }

void *FlxSprite_obj::_hx_vtable = 0;

Dynamic FlxSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSprite_obj > _hx_result = new FlxSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxSprite_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_278_initVars)
HXLINE( 279)		this->super::initVars();
HXLINE( 281)		this->animation =  ::flixel::animation::FlxAnimationController_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 283)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 284)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 285)		this->_flashRect2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 286)		this->_flashPointZero =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 287)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 287)		point->_inPool = false;
HXDLIN( 287)		this->offset = point;
HXLINE( 288)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 288)		point1->_inPool = false;
HXDLIN( 288)		this->origin = point1;
HXLINE( 289)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(1,1);
HXDLIN( 289)		point2->_inPool = false;
HXDLIN( 289)		this->scale = point2;
HXLINE( 290)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 290)		point3->_inPool = false;
HXDLIN( 290)		this->_halfSize = point3;
HXLINE( 291)		this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 292)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            	}


void FlxSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_306_destroy)
HXLINE( 307)		this->super::destroy();
HXLINE( 309)		this->animation = ( ( ::flixel::animation::FlxAnimationController)(::flixel::util::FlxDestroyUtil_obj::destroy(this->animation)) );
HXLINE( 311)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 312)		this->origin = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->origin)) );
HXLINE( 313)		this->scale = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scale)) );
HXLINE( 314)		this->_halfSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_halfSize)) );
HXLINE( 316)		this->framePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
HXLINE( 318)		this->_flashPoint = null();
HXLINE( 319)		this->_flashRect = null();
HXLINE( 320)		this->_flashRect2 = null();
HXLINE( 321)		this->_flashPointZero = null();
HXLINE( 322)		this->_matrix = null();
HXLINE( 323)		this->colorTransform = null();
HXLINE( 324)		this->set_blend(null());
HXLINE( 326)		this->set_frames(null());
HXLINE( 327)		this->set_graphic(null());
HXLINE( 328)		this->_frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frame)) );
HXLINE( 329)		this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 331)		this->shader = null();
            	}


 ::flixel::FlxSprite FlxSprite_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_336_clone)
HXDLIN( 336)		return  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphicFromSprite(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_347_loadGraphicFromSprite)
HXLINE( 348)		this->set_frames(Sprite->frames);
HXLINE( 349)		this->bakedRotationAngle = Sprite->bakedRotationAngle;
HXLINE( 350)		if ((this->bakedRotationAngle > 0)) {
HXLINE( 352)			this->set_width(Sprite->get_width());
HXLINE( 353)			this->set_height(Sprite->get_height());
HXLINE( 354)			this->centerOffsets(null());
            		}
HXLINE( 356)		this->set_antialiasing(Sprite->antialiasing);
HXLINE( 357)		this->animation->copyFrom(Sprite->animation);
HXLINE( 358)		this->graphicLoaded();
HXLINE( 359)		this->set_clipRect(Sprite->clipRect);
HXLINE( 360)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_384_loadGraphic)
HXLINE( 385)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key);
HXLINE( 386)		if (::hx::IsNull( graph )) {
HXLINE( 387)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 389)		if ((Width == 0)) {
HXLINE( 391)			if (Animated) {
HXLINE( 391)				Width = graph->height;
            			}
            			else {
HXLINE( 391)				Width = graph->width;
            			}
HXLINE( 392)			if ((Width > graph->width)) {
HXLINE( 392)				Width = graph->width;
            			}
            		}
HXLINE( 395)		if ((Height == 0)) {
HXLINE( 397)			if (Animated) {
HXLINE( 397)				Height = Width;
            			}
            			else {
HXLINE( 397)				Height = graph->height;
            			}
HXLINE( 398)			if ((Height > graph->height)) {
HXLINE( 398)				Height = graph->height;
            			}
            		}
HXLINE( 401)		if (Animated) {
HXLINE( 402)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(Width,Height);
HXDLIN( 402)			point->_inPool = false;
HXDLIN( 402)			this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            		}
            		else {
HXLINE( 404)			this->set_frames(graph->get_imageFrame());
            		}
HXLINE( 406)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_427_loadRotatedGraphic)
HXLINE( 428)		 ::flixel::graphics::FlxGraphic brushGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key);
HXLINE( 429)		if (::hx::IsNull( brushGraphic )) {
HXLINE( 430)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 432)		 ::openfl::display::BitmapData brush = brushGraphic->bitmap;
HXLINE( 433)		::String key = brushGraphic->key;
HXLINE( 435)		if ((Frame >= 0)) {
HXLINE( 438)			int brushSize = brush->height;
HXLINE( 439)			int framesNum = ::Std_obj::_hx_int((( (Float)(brush->width) ) / ( (Float)(brushSize) )));
HXLINE( 440)			if ((framesNum <= Frame)) {
HXLINE( 440)				Frame = ::hx::Mod(Frame,framesNum);
            			}
HXLINE( 441)			key = (key + (HX_(":",3a,00,00,00) + Frame));
HXLINE( 443)			 ::openfl::display::BitmapData full = brush;
HXLINE( 444)			brush =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,brushSize,brushSize,true,0);
HXLINE( 445)			this->_flashRect->setTo(( (Float)((Frame * brushSize)) ),( (Float)(0) ),( (Float)(brushSize) ),( (Float)(brushSize) ));
HXLINE( 446)			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
            		}
HXLINE( 449)		key = (key + (((HX_(":",3a,00,00,00) + Rotations) + HX_(":",3a,00,00,00)) + ::Std_obj::string(AutoBuffer)));
HXLINE( 452)		 ::flixel::graphics::FlxGraphic tempGraph = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 453)		if (::hx::IsNull( tempGraph )) {
HXLINE( 455)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(brush,Rotations,AntiAliasing,AutoBuffer);
HXLINE( 456)			tempGraph = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,key,null());
            		}
HXLINE( 459)		int max;
HXDLIN( 459)		if ((brush->height > brush->width)) {
HXLINE( 459)			max = brush->height;
            		}
            		else {
HXLINE( 459)			max = brush->width;
            		}
HXLINE( 460)		if (AutoBuffer) {
HXLINE( 460)			max = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)1.5)));
            		}
HXLINE( 462)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(max,max);
HXDLIN( 462)		point->_inPool = false;
HXDLIN( 462)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tempGraph,point,null(),null()));
HXLINE( 464)		if (AutoBuffer) {
HXLINE( 466)			this->set_width(( (Float)(brush->width) ));
HXLINE( 467)			this->set_height(( (Float)(brush->height) ));
HXLINE( 468)			this->centerOffsets(null());
            		}
HXLINE( 471)		this->bakedRotationAngle = (( (Float)(360) ) / ( (Float)(Rotations) ));
HXLINE( 472)		this->animation->createPrerotated(null());
HXLINE( 473)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,::hx::Null< int >  __o_Rotations,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer){
            		int Rotations = __o_Rotations.Default(16);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_488_loadRotatedFrame)
HXLINE( 489)		::String key = Frame->parent->key;
HXLINE( 490)		if (::hx::IsNotNull( Frame->name )) {
HXLINE( 491)			key = (key + (HX_(":",3a,00,00,00) + Frame->name));
            		}
            		else {
HXLINE( 493)			 ::flixel::math::FlxRect _this = Frame->frame;
HXDLIN( 493)			 ::Dynamic value = _this->x;
HXDLIN( 493)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 493)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 493)			_this1->value = value;
HXDLIN( 493)			 ::Dynamic value1 = _this->y;
HXDLIN( 493)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 493)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 493)			_this2->value = value1;
HXDLIN( 493)			 ::Dynamic value2 = _this->width;
HXDLIN( 493)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 493)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 493)			_this3->value = value2;
HXDLIN( 493)			 ::Dynamic value3 = _this->height;
HXDLIN( 493)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 493)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 493)			_this4->value = value3;
HXDLIN( 493)			key = (key + (HX_(":",3a,00,00,00) + ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4))));
            		}
HXLINE( 495)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 496)		if (::hx::IsNull( graphic )) {
HXLINE( 497)			graphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(Frame->paint(null(),null(),null(),null()),false,key,null());
            		}
HXLINE( 499)		return this->loadRotatedGraphic(graphic,Rotations,-1,AntiAliasing,AutoBuffer,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

 ::flixel::FlxSprite FlxSprite_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int Color = __o_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_523_makeGraphic)
HXLINE( 524)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);
HXLINE( 525)		this->set_frames(graph->get_imageFrame());
HXLINE( 526)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

void FlxSprite_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_532_graphicLoaded)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

void FlxSprite_obj::resetSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_538_resetSize)
HXLINE( 539)		this->_flashRect->x = ( (Float)(0) );
HXLINE( 540)		this->_flashRect->y = ( (Float)(0) );
HXLINE( 541)		this->_flashRect->width = ( (Float)(this->frameWidth) );
HXLINE( 542)		this->_flashRect->height = ( (Float)(this->frameHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

void FlxSprite_obj::resetFrameSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_549_resetFrameSize)
HXLINE( 550)		if (::hx::IsNotNull( this->frame )) {
HXLINE( 552)			this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXLINE( 553)			this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            		}
HXLINE( 555)		this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXLINE( 556)		{
HXLINE( 556)			this->_flashRect->x = ( (Float)(0) );
HXDLIN( 556)			this->_flashRect->y = ( (Float)(0) );
HXDLIN( 556)			this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 556)			this->_flashRect->height = ( (Float)(this->frameHeight) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

void FlxSprite_obj::resetSizeFromFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_563_resetSizeFromFrame)
HXLINE( 564)		this->set_width(( (Float)(this->frameWidth) ));
HXLINE( 565)		this->set_height(( (Float)(this->frameHeight) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

void FlxSprite_obj::resetFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_576_resetFrame)
HXDLIN( 576)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrame,(void))

void FlxSprite_obj::setGraphicSize(::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height){
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_587_setGraphicSize)
HXLINE( 588)		bool _hx_tmp;
HXDLIN( 588)		if ((Width <= 0)) {
HXLINE( 588)			_hx_tmp = (Height <= 0);
            		}
            		else {
HXLINE( 588)			_hx_tmp = false;
            		}
HXDLIN( 588)		if (_hx_tmp) {
HXLINE( 589)			return;
            		}
HXLINE( 591)		Float newScaleX = (( (Float)(Width) ) / ( (Float)(this->frameWidth) ));
HXLINE( 592)		Float newScaleY = (( (Float)(Height) ) / ( (Float)(this->frameHeight) ));
HXLINE( 593)		this->scale->set(newScaleX,newScaleY);
HXLINE( 595)		if ((Width <= 0)) {
HXLINE( 596)			this->scale->set_x(newScaleY);
            		}
            		else {
HXLINE( 597)			if ((Height <= 0)) {
HXLINE( 598)				this->scale->set_y(newScaleX);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

void FlxSprite_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_606_updateHitbox)
HXLINE( 607)		this->set_width((::Math_obj::abs(this->scale->x) * ( (Float)(this->frameWidth) )));
HXLINE( 608)		this->set_height((::Math_obj::abs(this->scale->y) * ( (Float)(this->frameHeight) )));
HXLINE( 609)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN( 609)		Float _hx_tmp1 = this->get_width();
HXDLIN( 609)		Float _hx_tmp2 = (((Float)-0.5) * (_hx_tmp1 - ( (Float)(this->frameWidth) )));
HXDLIN( 609)		Float _hx_tmp3 = this->get_height();
HXDLIN( 609)		_hx_tmp->set(_hx_tmp2,(((Float)-0.5) * (_hx_tmp3 - ( (Float)(this->frameHeight) ))));
HXLINE( 610)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

void FlxSprite_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_618_resetHelpers)
HXLINE( 619)		{
HXLINE( 619)			if (::hx::IsNotNull( this->frame )) {
HXLINE( 619)				this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN( 619)				this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            			}
HXDLIN( 619)			this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXDLIN( 619)			{
HXLINE( 619)				this->_flashRect->x = ( (Float)(0) );
HXDLIN( 619)				this->_flashRect->y = ( (Float)(0) );
HXDLIN( 619)				this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 619)				this->_flashRect->height = ( (Float)(this->frameHeight) );
            			}
            		}
HXLINE( 620)		{
HXLINE( 620)			this->set_width(( (Float)(this->frameWidth) ));
HXDLIN( 620)			this->set_height(( (Float)(this->frameHeight) ));
            		}
HXLINE( 621)		this->_flashRect2->x = ( (Float)(0) );
HXLINE( 622)		this->_flashRect2->y = ( (Float)(0) );
HXLINE( 624)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 626)			this->_flashRect2->width = ( (Float)(this->graphic->width) );
HXLINE( 627)			this->_flashRect2->height = ( (Float)(this->graphic->height) );
            		}
HXLINE( 630)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXLINE( 632)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 634)			this->dirty = true;
HXLINE( 635)			this->updateFramePixels();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

void FlxSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_640_update)
HXLINE( 641)		this->super::update(elapsed);
HXLINE( 642)		this->updateAnimation(elapsed);
            	}


void FlxSprite_obj::updateAnimation(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_650_updateAnimation)
HXDLIN( 650)		this->animation->update(elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

void FlxSprite_obj::checkEmptyFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_656_checkEmptyFrame)
HXDLIN( 656)		if (::hx::IsNull( this->_frame )) {
HXLINE( 657)			this->loadGraphic(HX_("flixel/images/logo/default.png",1c,39,3e,0e),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkEmptyFrame,(void))

void FlxSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_664_draw)
HXLINE( 665)		this->checkEmptyFrame();
HXLINE( 667)		bool _hx_tmp;
HXDLIN( 667)		if ((this->alpha != 0)) {
HXLINE( 667)			_hx_tmp = (this->_frame->type == 2);
            		}
            		else {
HXLINE( 667)			_hx_tmp = true;
            		}
HXDLIN( 667)		if (_hx_tmp) {
HXLINE( 668)			return;
            		}
HXLINE( 670)		if (this->dirty) {
HXLINE( 671)			this->calcFrame(this->useFramePixels);
            		}
HXLINE( 673)		{
HXLINE( 673)			int _g = 0;
HXDLIN( 673)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 673)			while((_g < _g1->length)){
HXLINE( 673)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 673)				_g = (_g + 1);
HXLINE( 675)				bool _hx_tmp;
HXDLIN( 675)				bool _hx_tmp1;
HXDLIN( 675)				if (camera->visible) {
HXLINE( 675)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 675)					_hx_tmp1 = true;
            				}
HXDLIN( 675)				if (!(_hx_tmp1)) {
HXLINE( 675)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 675)					_hx_tmp = true;
            				}
HXDLIN( 675)				if (_hx_tmp) {
HXLINE( 676)					continue;
            				}
HXLINE( 678)				this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
HXLINE( 680)				if (this->isSimpleRender(camera)) {
HXLINE( 681)					this->drawSimple(camera);
            				}
            				else {
HXLINE( 683)					this->drawComplex(camera);
            				}
            			}
            		}
            	}


void FlxSprite_obj::drawSimple( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_698_drawSimple)
HXLINE( 699)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 700)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 700)			_this->set_x(( (Float)(::Math_obj::floor(_this->x)) ));
HXDLIN( 700)			_this->set_y(( (Float)(::Math_obj::floor(_this->y)) ));
            		}
HXLINE( 702)		{
HXLINE( 702)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 702)			 ::openfl::geom::Point FlashPoint = this->_flashPoint;
HXDLIN( 702)			if (::hx::IsNull( FlashPoint )) {
HXLINE( 702)				FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            			}
HXDLIN( 702)			FlashPoint->x = _this->x;
HXDLIN( 702)			FlashPoint->y = _this->y;
            		}
HXLINE( 703)		camera->copyPixels(this->_frame,this->framePixels,this->_flashRect,this->_flashPoint,this->colorTransform,this->blend,this->antialiasing,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawSimple,(void))

void FlxSprite_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_708_drawComplex)
HXLINE( 709)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 709)		bool _hx_tmp;
HXDLIN( 709)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 709)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 709)			_hx_tmp = doFlipX;
            		}
HXDLIN( 709)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 709)		bool _hx_tmp1;
HXDLIN( 709)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 709)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 709)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 709)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 710)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 711)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 713)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 715)			if (this->_angleChanged) {
HXLINE( 715)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 715)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 715)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 715)				this->_angleChanged = false;
            			}
HXLINE( 717)			if ((this->angle != 0)) {
HXLINE( 718)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 718)				Float cos = this->_cosAngle;
HXDLIN( 718)				Float sin = this->_sinAngle;
HXDLIN( 718)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 718)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 718)				_this->a = a1;
HXDLIN( 718)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 718)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 718)				_this->c = c1;
HXDLIN( 718)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 718)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 718)				_this->tx = tx1;
            			}
            		}
HXLINE( 721)		{
HXLINE( 721)			 ::flixel::math::FlxPoint _this = this->_point;
HXDLIN( 721)			Float Y = this->origin->y;
HXDLIN( 721)			_this->set_x((_this->x + this->origin->x));
HXDLIN( 721)			_this->set_y((_this->y + Y));
            		}
HXLINE( 722)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 724)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 726)			this->_matrix->tx = ( (Float)(::Math_obj::floor(this->_matrix->tx)) );
HXLINE( 727)			this->_matrix->ty = ( (Float)(::Math_obj::floor(this->_matrix->ty)) );
            		}
HXLINE( 730)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawComplex,(void))

void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_742_stamp)
HXLINE( 743)		Brush->drawFrame(null());
HXLINE( 745)		bool _hx_tmp;
HXDLIN( 745)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 745)			_hx_tmp = ::hx::IsNull( Brush->graphic );
            		}
            		else {
HXLINE( 745)			_hx_tmp = true;
            		}
HXDLIN( 745)		if (_hx_tmp) {
HXLINE( 746)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot stamp to or from a FlxSprite with no graphics.",72,0b,d4,aa)));
            		}
HXLINE( 748)		 ::openfl::display::BitmapData bitmapData = Brush->framePixels;
HXLINE( 750)		if (this->isSimpleRenderBlit(null())) {
HXLINE( 752)			this->_flashPoint->x = (X + this->frame->frame->x);
HXLINE( 753)			this->_flashPoint->y = (Y + this->frame->frame->y);
HXLINE( 754)			this->_flashRect2->width = ( (Float)(bitmapData->width) );
HXLINE( 755)			this->_flashRect2->height = ( (Float)(bitmapData->height) );
HXLINE( 756)			this->graphic->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
HXLINE( 757)			this->_flashRect2->width = ( (Float)(this->graphic->bitmap->width) );
HXLINE( 758)			this->_flashRect2->height = ( (Float)(this->graphic->bitmap->height) );
            		}
            		else {
HXLINE( 762)			this->_matrix->identity();
HXLINE( 763)			this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
HXLINE( 764)			this->_matrix->scale(Brush->scale->x,Brush->scale->y);
HXLINE( 765)			if ((Brush->angle != 0)) {
HXLINE( 767)				this->_matrix->rotate((Brush->angle * (::Math_obj::PI / ( (Float)(180) ))));
            			}
HXLINE( 769)			this->_matrix->translate(((X + this->frame->frame->x) + Brush->origin->x),((Y + this->frame->frame->y) + Brush->origin->y));
HXLINE( 770)			 ::Dynamic brushBlend = Brush->blend;
HXLINE( 771)			this->graphic->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
            		}
HXLINE( 774)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 776)			this->dirty = true;
HXLINE( 777)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

void FlxSprite_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_789_drawFrame)
HXDLIN( 789)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 791)			bool _hx_tmp;
HXDLIN( 791)			if (!(Force)) {
HXLINE( 791)				_hx_tmp = this->dirty;
            			}
            			else {
HXLINE( 791)				_hx_tmp = true;
            			}
HXDLIN( 791)			if (_hx_tmp) {
HXLINE( 793)				this->dirty = true;
HXLINE( 794)				this->calcFrame(null());
            			}
            		}
            		else {
HXLINE( 799)			this->dirty = true;
HXLINE( 800)			this->calcFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

void FlxSprite_obj::centerOffsets(::hx::Null< bool >  __o_AdjustPosition){
            		bool AdjustPosition = __o_AdjustPosition.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_810_centerOffsets)
HXLINE( 811)		 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN( 811)		int _hx_tmp1 = this->frameWidth;
HXDLIN( 811)		_hx_tmp->set_x(((( (Float)(_hx_tmp1) ) - this->get_width()) * ((Float)0.5)));
HXLINE( 812)		 ::flixel::math::FlxPoint _hx_tmp2 = this->offset;
HXDLIN( 812)		int _hx_tmp3 = this->frameHeight;
HXDLIN( 812)		_hx_tmp2->set_y(((( (Float)(_hx_tmp3) ) - this->get_height()) * ((Float)0.5)));
HXLINE( 813)		if (AdjustPosition) {
HXLINE( 815)			this->set_x((this->x + this->offset->x));
HXLINE( 816)			this->set_y((this->y + this->offset->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

void FlxSprite_obj::centerOrigin(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_826_centerOrigin)
HXDLIN( 826)		this->origin->set((( (Float)(this->frameWidth) ) * ((Float)0.5)),(( (Float)(this->frameHeight) ) * ((Float)0.5)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

::Array< ::Dynamic> FlxSprite_obj::replaceColor(int Color,int NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_839_replaceColor)
HXLINE( 840)		::Array< ::Dynamic> positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(this->graphic->bitmap,Color,NewColor,FetchPositions,null());
HXLINE( 841)		if (::hx::IsNotNull( positions )) {
HXLINE( 842)			this->dirty = true;
            		}
HXLINE( 843)		return positions;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

void FlxSprite_obj::setColorTransform(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< int >  __o_redOffset,::hx::Null< int >  __o_greenOffset,::hx::Null< int >  __o_blueOffset,::hx::Null< int >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
            		Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
            		Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
            		Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
            		int redOffset = __o_redOffset.Default(0);
            		int greenOffset = __o_greenOffset.Default(0);
            		int blueOffset = __o_blueOffset.Default(0);
            		int alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_861_setColorTransform)
HXLINE( 862)		Float Alpha = ( (Float)(1) );
HXDLIN( 862)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 862)		{
HXLINE( 862)			int Value = ::Math_obj::round((redMultiplier * ( (Float)(255) )));
HXDLIN( 862)			color = (color & -16711681);
HXDLIN( 862)			int color1;
HXDLIN( 862)			if ((Value > 255)) {
HXLINE( 862)				color1 = 255;
            			}
            			else {
HXLINE( 862)				if ((Value < 0)) {
HXLINE( 862)					color1 = 0;
            				}
            				else {
HXLINE( 862)					color1 = Value;
            				}
            			}
HXDLIN( 862)			color = (color | (color1 << 16));
            		}
HXDLIN( 862)		{
HXLINE( 862)			int Value1 = ::Math_obj::round((greenMultiplier * ( (Float)(255) )));
HXDLIN( 862)			color = (color & -65281);
HXDLIN( 862)			int color2;
HXDLIN( 862)			if ((Value1 > 255)) {
HXLINE( 862)				color2 = 255;
            			}
            			else {
HXLINE( 862)				if ((Value1 < 0)) {
HXLINE( 862)					color2 = 0;
            				}
            				else {
HXLINE( 862)					color2 = Value1;
            				}
            			}
HXDLIN( 862)			color = (color | (color2 << 8));
            		}
HXDLIN( 862)		{
HXLINE( 862)			int Value2 = ::Math_obj::round((blueMultiplier * ( (Float)(255) )));
HXDLIN( 862)			color = (color & -256);
HXDLIN( 862)			int color3;
HXDLIN( 862)			if ((Value2 > 255)) {
HXLINE( 862)				color3 = 255;
            			}
            			else {
HXLINE( 862)				if ((Value2 < 0)) {
HXLINE( 862)					color3 = 0;
            				}
            				else {
HXLINE( 862)					color3 = Value2;
            				}
            			}
HXDLIN( 862)			color = (color | color3);
            		}
HXDLIN( 862)		{
HXLINE( 862)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 862)			color = (color & 16777215);
HXDLIN( 862)			int color4;
HXDLIN( 862)			if ((Value3 > 255)) {
HXLINE( 862)				color4 = 255;
            			}
            			else {
HXLINE( 862)				if ((Value3 < 0)) {
HXLINE( 862)					color4 = 0;
            				}
            				else {
HXLINE( 862)					color4 = Value3;
            				}
            			}
HXDLIN( 862)			color = (color | (color4 << 24));
            		}
HXDLIN( 862)		this->set_color((color & 16777215));
HXLINE( 863)		this->set_alpha(alphaMultiplier);
HXLINE( 865)		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
HXLINE( 866)		::flixel::util::FlxColorTransformUtil_obj::setOffsets(this->colorTransform,redOffset,greenOffset,blueOffset,alphaOffset);
HXLINE( 868)		bool _hx_tmp;
HXDLIN( 868)		bool _hx_tmp1;
HXDLIN( 868)		if ((this->alpha == 1)) {
HXLINE( 868)			_hx_tmp1 = (this->color != 16777215);
            		}
            		else {
HXLINE( 868)			_hx_tmp1 = true;
            		}
HXDLIN( 868)		if (!(_hx_tmp1)) {
HXLINE( 868)			_hx_tmp = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(this->colorTransform);
            		}
            		else {
HXLINE( 868)			_hx_tmp = true;
            		}
HXDLIN( 868)		this->useColorTransform = _hx_tmp;
HXLINE( 869)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

void FlxSprite_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_873_updateColorTransform)
HXLINE( 874)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 875)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 877)		bool _hx_tmp;
HXDLIN( 877)		if ((this->alpha == 1)) {
HXLINE( 877)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE( 877)			_hx_tmp = true;
            		}
HXDLIN( 877)		this->useColorTransform = _hx_tmp;
HXLINE( 878)		if (this->useColorTransform) {
HXLINE( 879)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE( 881)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE( 883)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,::hx::Null< int >  __o_Mask, ::flixel::FlxCamera Camera){
            		int Mask = __o_Mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_896_pixelsOverlapPoint)
HXLINE( 897)		if (::hx::IsNull( Camera )) {
HXLINE( 898)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 900)		this->getScreenPosition(this->_point,Camera);
HXLINE( 901)		this->_point->subtractPoint(this->offset);
HXLINE( 902)		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
HXLINE( 903)		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
HXLINE( 905)		if (point->_weak) {
HXLINE( 905)			point->put();
            		}
HXLINE( 908)		bool _hx_tmp;
HXDLIN( 908)		bool _hx_tmp1;
HXDLIN( 908)		bool _hx_tmp2;
HXDLIN( 908)		if (!((this->_flashPoint->x < 0))) {
HXLINE( 908)			_hx_tmp2 = (this->_flashPoint->x > this->frameWidth);
            		}
            		else {
HXLINE( 908)			_hx_tmp2 = true;
            		}
HXDLIN( 908)		if (!(_hx_tmp2)) {
HXLINE( 908)			_hx_tmp1 = (this->_flashPoint->y < 0);
            		}
            		else {
HXLINE( 908)			_hx_tmp1 = true;
            		}
HXDLIN( 908)		if (!(_hx_tmp1)) {
HXLINE( 908)			_hx_tmp = (this->_flashPoint->y > this->frameHeight);
            		}
            		else {
HXLINE( 908)			_hx_tmp = true;
            		}
HXDLIN( 908)		if (_hx_tmp) {
HXLINE( 910)			return false;
            		}
            		else {
HXLINE( 914)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE( 915)			int pixelColor = ::Std_obj::_hx_int(this->_flashPoint->x);
HXDLIN( 915)			int pixelColor1 = frameData->getPixel32(pixelColor,::Std_obj::_hx_int(this->_flashPoint->y));
HXLINE( 916)			return ((( (Float)(((pixelColor1 >> 24) & 255)) ) * this->alpha) >= Mask);
            		}
HXLINE( 908)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

void FlxSprite_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_927_calcFrame)
HXLINE( 928)		this->checkEmptyFrame();
HXLINE( 930)		bool _hx_tmp;
HXDLIN( 930)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 930)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE( 930)			_hx_tmp = false;
            		}
HXDLIN( 930)		if (_hx_tmp) {
HXLINE( 931)			return;
            		}
HXLINE( 933)		this->updateFramePixels();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

 ::openfl::display::BitmapData FlxSprite_obj::updateFramePixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_940_updateFramePixels)
HXLINE( 941)		bool _hx_tmp;
HXDLIN( 941)		if (::hx::IsNotNull( this->_frame )) {
HXLINE( 941)			_hx_tmp = !(this->dirty);
            		}
            		else {
HXLINE( 941)			_hx_tmp = true;
            		}
HXDLIN( 941)		if (_hx_tmp) {
HXLINE( 942)			return this->framePixels;
            		}
HXLINE( 946)		bool _hx_tmp1;
HXDLIN( 946)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 946)			_hx_tmp1 = ::hx::IsNotNull( this->_frameGraphic );
            		}
            		else {
HXLINE( 946)			_hx_tmp1 = false;
            		}
HXDLIN( 946)		if (_hx_tmp1) {
HXLINE( 948)			this->dirty = false;
HXLINE( 949)			return this->framePixels;
            		}
HXLINE( 952)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 952)		bool doFlipX1;
HXDLIN( 952)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 952)			doFlipX1 = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 952)			doFlipX1 = doFlipX;
            		}
HXLINE( 953)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 953)		bool doFlipY1;
HXDLIN( 953)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 953)			doFlipY1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 953)			doFlipY1 = doFlipY;
            		}
HXLINE( 955)		bool _hx_tmp2;
HXDLIN( 955)		bool _hx_tmp3;
HXDLIN( 955)		if (!(doFlipX1)) {
HXLINE( 955)			_hx_tmp3 = !(doFlipY1);
            		}
            		else {
HXLINE( 955)			_hx_tmp3 = false;
            		}
HXDLIN( 955)		if (_hx_tmp3) {
HXLINE( 955)			_hx_tmp2 = (this->_frame->type == 0);
            		}
            		else {
HXLINE( 955)			_hx_tmp2 = false;
            		}
HXDLIN( 955)		if (_hx_tmp2) {
HXLINE( 957)			this->framePixels = this->_frame->paint(this->framePixels,this->_flashPointZero,false,true);
            		}
            		else {
HXLINE( 961)			this->framePixels = this->_frame->paintRotatedAndFlipped(this->framePixels,this->_flashPointZero,0,doFlipX1,doFlipY1,false,true);
            		}
HXLINE( 964)		if (this->useColorTransform) {
HXLINE( 966)			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
            		}
HXLINE( 969)		bool _hx_tmp4;
HXDLIN( 969)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 969)			_hx_tmp4 = this->useFramePixels;
            		}
            		else {
HXLINE( 969)			_hx_tmp4 = false;
            		}
HXDLIN( 969)		if (_hx_tmp4) {
HXLINE( 972)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 973)			this->_frameGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(this->framePixels,false,null(),false);
HXLINE( 974)			this->_frame = this->_frameGraphic->get_imageFrame()->get_frame()->copyTo(this->_frame);
            		}
HXLINE( 977)		this->dirty = false;
HXLINE( 978)		return this->framePixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFramePixels,return )

 ::flixel::math::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_989_getGraphicMidpoint)
HXLINE( 990)		if (::hx::IsNull( point )) {
HXLINE( 991)			 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 991)			point1->_inPool = false;
HXDLIN( 991)			point = point1;
            		}
HXLINE( 992)		return point->set((this->x + (( (Float)(this->frameWidth) ) * ((Float)0.5))),(this->y + (( (Float)(this->frameHeight) ) * ((Float)0.5))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1003_isOnScreen)
HXLINE(1004)		if (::hx::IsNull( Camera )) {
HXLINE(1005)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1007)		Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));
HXLINE(1008)		Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));
HXLINE(1010)		bool _hx_tmp;
HXDLIN(1010)		bool _hx_tmp1;
HXDLIN(1010)		bool _hx_tmp2;
HXDLIN(1010)		if ((this->angle != 0)) {
HXLINE(1010)			_hx_tmp2 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1010)			_hx_tmp2 = true;
            		}
HXDLIN(1010)		if (_hx_tmp2) {
HXLINE(1010)			_hx_tmp1 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1010)			_hx_tmp1 = false;
            		}
HXDLIN(1010)		if (_hx_tmp1) {
HXLINE(1010)			_hx_tmp = (this->scale->y == 1);
            		}
            		else {
HXLINE(1010)			_hx_tmp = false;
            		}
HXDLIN(1010)		if (_hx_tmp) {
HXLINE(1012)			this->_point->set(minX,minY);
HXLINE(1013)			 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1013)			bool _hx_tmp;
HXDLIN(1013)			bool _hx_tmp1;
HXDLIN(1013)			if (((point->x + this->frameWidth) > Camera->viewOffsetX)) {
HXLINE(1013)				_hx_tmp1 = (point->x < Camera->viewOffsetWidth);
            			}
            			else {
HXLINE(1013)				_hx_tmp1 = false;
            			}
HXDLIN(1013)			if (_hx_tmp1) {
HXLINE(1013)				_hx_tmp = ((point->y + this->frameHeight) > Camera->viewOffsetY);
            			}
            			else {
HXLINE(1013)				_hx_tmp = false;
            			}
HXDLIN(1013)			if (_hx_tmp) {
HXLINE(1013)				return (point->y < Camera->viewOffsetHeight);
            			}
            			else {
HXLINE(1013)				return false;
            			}
            		}
HXLINE(1016)		Float radiusX = this->_halfSize->x;
HXLINE(1017)		Float radiusY = this->_halfSize->y;
HXLINE(1019)		Float ox = this->origin->x;
HXLINE(1020)		if ((ox != radiusX)) {
HXLINE(1022)			Float x1 = ::Math_obj::abs(ox);
HXLINE(1023)			Float x2 = ::Math_obj::abs((( (Float)(this->frameWidth) ) - ox));
HXLINE(1024)			radiusX = ::Math_obj::max(x2,x1);
            		}
HXLINE(1027)		Float oy = this->origin->y;
HXLINE(1028)		if ((oy != radiusY)) {
HXLINE(1030)			Float y1 = ::Math_obj::abs(oy);
HXLINE(1031)			Float y2 = ::Math_obj::abs((( (Float)(this->frameHeight) ) - oy));
HXLINE(1032)			radiusY = ::Math_obj::max(y2,y1);
            		}
HXLINE(1035)		radiusX = (radiusX * ::Math_obj::abs(this->scale->x));
HXLINE(1036)		radiusY = (radiusY * ::Math_obj::abs(this->scale->y));
HXLINE(1037)		Float radius = ::Math_obj::max(radiusX,radiusY);
HXLINE(1038)		radius = (radius * ((Float)1.41421356237));
HXLINE(1040)		minX = (minX + (ox - radius));
HXLINE(1041)		minY = (minY + (oy - radius));
HXLINE(1043)		Float doubleRadius = (( (Float)(2) ) * radius);
HXLINE(1045)		this->_point->set(minX,minY);
HXLINE(1046)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN(1046)		bool _hx_tmp3;
HXDLIN(1046)		bool _hx_tmp4;
HXDLIN(1046)		if (((point->x + doubleRadius) > Camera->viewOffsetX)) {
HXLINE(1046)			_hx_tmp4 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE(1046)			_hx_tmp4 = false;
            		}
HXDLIN(1046)		if (_hx_tmp4) {
HXLINE(1046)			_hx_tmp3 = ((point->y + doubleRadius) > Camera->viewOffsetY);
            		}
            		else {
HXLINE(1046)			_hx_tmp3 = false;
            		}
HXDLIN(1046)		if (_hx_tmp3) {
HXLINE(1046)			return (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE(1046)			return false;
            		}
HXDLIN(1046)		return false;
            	}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1054_isSimpleRender)
HXLINE(1055)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1056)			return false;
            		}
HXLINE(1058)		return this->isSimpleRenderBlit(camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1070_isSimpleRenderBlit)
HXLINE(1071)		bool result;
HXDLIN(1071)		bool result1;
HXDLIN(1071)		bool result2;
HXDLIN(1071)		bool result3;
HXDLIN(1071)		if ((this->angle != 0)) {
HXLINE(1071)			result3 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1071)			result3 = true;
            		}
HXDLIN(1071)		if (result3) {
HXLINE(1071)			result2 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1071)			result2 = false;
            		}
HXDLIN(1071)		if (result2) {
HXLINE(1071)			result1 = (this->scale->y == 1);
            		}
            		else {
HXLINE(1071)			result1 = false;
            		}
HXDLIN(1071)		if (result1) {
HXLINE(1071)			result = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE(1071)			result = false;
            		}
HXLINE(1072)		if (result) {
HXLINE(1072)			if (::hx::IsNotNull( camera )) {
HXLINE(1072)				result = this->isPixelPerfectRender(camera);
            			}
            			else {
HXLINE(1072)				result = ( (bool)(this->pixelPerfectRender) );
            			}
            		}
            		else {
HXLINE(1072)			result = false;
            		}
HXLINE(1073)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

void FlxSprite_obj::setFacingFlip(int Direction,bool FlipX,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1088_setFacingFlip)
HXDLIN(1088)		this->_facingFlip->set(Direction, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),FlipX)
            			->setFixed(1,HX_("y",79,00,00,00),FlipY)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

 ::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,::hx::Null< bool >  __o_saveAnimations){
            		bool saveAnimations = __o_saveAnimations.Default(true);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1100_setFrames)
HXLINE(1101)		if (saveAnimations) {
HXLINE(1103)			 ::haxe::ds::StringMap animations = this->animation->_animations;
HXLINE(1104)			bool reverse = false;
HXLINE(1105)			int index = 0;
HXLINE(1106)			int frameIndex = this->animation->frameIndex;
HXLINE(1107)			::String currName = null();
HXLINE(1109)			if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1111)				reverse = this->animation->_curAnim->reversed;
HXLINE(1112)				index = this->animation->_curAnim->curFrame;
HXLINE(1113)				currName = this->animation->_curAnim->name;
            			}
HXLINE(1116)			this->animation->_animations = null();
HXLINE(1117)			this->set_frames(Frames);
HXLINE(1118)			this->set_frame(this->frames->frames->__get(frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1119)			this->animation->_animations = animations;
HXLINE(1121)			if (::hx::IsNotNull( currName )) {
HXLINE(1123)				this->animation->play(currName,false,reverse,index);
            			}
            		}
            		else {
HXLINE(1128)			this->set_frames(Frames);
            		}
HXLINE(1131)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

 ::openfl::display::BitmapData FlxSprite_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1137_get_pixels)
HXDLIN(1137)		if (::hx::IsNull( this->graphic )) {
HXDLIN(1137)			return null();
            		}
            		else {
HXDLIN(1137)			return this->graphic->bitmap;
            		}
HXDLIN(1137)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

 ::openfl::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::display::BitmapData Pixels){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1142_set_pixels)
HXLINE(1143)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Pixels);
HXLINE(1145)		if (::hx::IsNull( key )) {
HXLINE(1147)			key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
HXLINE(1148)			this->set_graphic(::flixel::FlxG_obj::bitmap->add(Pixels,false,key));
            		}
            		else {
HXLINE(1152)			this->set_graphic(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ));
            		}
HXLINE(1155)		this->set_frames(this->graphic->get_imageFrame());
HXLINE(1156)		return Pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

 ::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1161_set_frame)
HXLINE(1162)		this->frame = Value;
HXLINE(1163)		if (::hx::IsNotNull( this->frame )) {
HXLINE(1165)			{
HXLINE(1165)				if (::hx::IsNotNull( this->frame )) {
HXLINE(1165)					this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN(1165)					this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            				}
HXDLIN(1165)				this->_halfSize->set((((Float)0.5) * ( (Float)(this->frameWidth) )),(((Float)0.5) * ( (Float)(this->frameHeight) )));
HXDLIN(1165)				{
HXLINE(1165)					this->_flashRect->x = ( (Float)(0) );
HXDLIN(1165)					this->_flashRect->y = ( (Float)(0) );
HXDLIN(1165)					this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN(1165)					this->_flashRect->height = ( (Float)(this->frameHeight) );
            				}
            			}
HXLINE(1166)			this->dirty = true;
            		}
            		else {
HXLINE(1168)			bool _hx_tmp;
HXDLIN(1168)			bool _hx_tmp1;
HXDLIN(1168)			if (::hx::IsNotNull( this->frames )) {
HXLINE(1168)				_hx_tmp1 = ::hx::IsNotNull( this->frames->frames );
            			}
            			else {
HXLINE(1168)				_hx_tmp1 = false;
            			}
HXDLIN(1168)			if (_hx_tmp1) {
HXLINE(1168)				_hx_tmp = (this->numFrames > 0);
            			}
            			else {
HXLINE(1168)				_hx_tmp = false;
            			}
HXDLIN(1168)			if (_hx_tmp) {
HXLINE(1170)				this->frame = this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE(1171)				this->dirty = true;
            			}
            			else {
HXLINE(1175)				return null();
            			}
            		}
HXLINE(1178)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1180)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
            		}
HXLINE(1183)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE(1185)			this->_frame = this->frame->clipTo(this->clipRect,this->_frame);
            		}
            		else {
HXLINE(1189)			this->_frame = this->frame->copyTo(this->_frame);
            		}
HXLINE(1192)		return this->frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing(int Direction){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1197_set_facing)
HXLINE(1198)		 ::Dynamic flip = this->_facingFlip->get(Direction);
HXLINE(1199)		if (::hx::IsNotNull( flip )) {
HXLINE(1201)			this->set_flipX(( (bool)(flip->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(1202)			this->set_flipY(( (bool)(flip->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(1205)		return (this->facing = Direction);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1210_set_alpha)
HXLINE(1211)		if ((this->alpha == Alpha)) {
HXLINE(1213)			return Alpha;
            		}
HXLINE(1215)		Float lowerBound;
HXDLIN(1215)		if ((Alpha < 0)) {
HXLINE(1215)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1215)			lowerBound = Alpha;
            		}
HXDLIN(1215)		Float _hx_tmp;
HXDLIN(1215)		if ((lowerBound > 1)) {
HXLINE(1215)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1215)			_hx_tmp = lowerBound;
            		}
HXDLIN(1215)		this->alpha = _hx_tmp;
HXLINE(1216)		this->updateColorTransform();
HXLINE(1217)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1222_set_color)
HXLINE(1223)		if ((this->color == Color)) {
HXLINE(1225)			return Color;
            		}
HXLINE(1227)		this->color = Color;
HXLINE(1228)		this->updateColorTransform();
HXLINE(1229)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1234_set_angle)
HXLINE(1235)		bool newAngle = (this->angle != Value);
HXLINE(1236)		Float ret = this->super::set_angle(Value);
HXLINE(1237)		if (newAngle) {
HXLINE(1239)			this->_angleChanged = true;
HXLINE(1240)			this->animation->update(( (Float)(0) ));
            		}
HXLINE(1242)		return ret;
            	}


void FlxSprite_obj::updateTrig(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1248_updateTrig)
HXDLIN(1248)		if (this->_angleChanged) {
HXLINE(1250)			Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(1251)			this->_sinAngle = ::Math_obj::sin(radians);
HXLINE(1252)			this->_cosAngle = ::Math_obj::cos(radians);
HXLINE(1253)			this->_angleChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateTrig,(void))

 ::Dynamic FlxSprite_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1260_set_blend)
HXDLIN(1260)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

 ::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1269_set_graphic)
HXLINE(1270)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE(1272)		bool _hx_tmp;
HXDLIN(1272)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1272)			_hx_tmp = ::hx::IsNotNull( Value );
            		}
            		else {
HXLINE(1272)			_hx_tmp = false;
            		}
HXDLIN(1272)		if (_hx_tmp) {
HXLINE(1274)			Value->set_useCount((Value->get_useCount() + 1));
            		}
HXLINE(1277)		bool _hx_tmp1;
HXDLIN(1277)		if (::hx::IsNotNull( oldGraphic )) {
HXLINE(1277)			_hx_tmp1 = ::hx::IsInstanceNotEq( oldGraphic,Value );
            		}
            		else {
HXLINE(1277)			_hx_tmp1 = false;
            		}
HXDLIN(1277)		if (_hx_tmp1) {
HXLINE(1279)			oldGraphic->set_useCount((oldGraphic->get_useCount() - 1));
            		}
HXLINE(1282)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

 ::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1287_set_clipRect)
HXLINE(1288)		if (::hx::IsNotNull( rect )) {
HXLINE(1289)			rect->x = ( (Float)(::Math_obj::round(rect->x)) );
HXDLIN(1289)			rect->y = ( (Float)(::Math_obj::round(rect->y)) );
HXDLIN(1289)			rect->width = ( (Float)(::Math_obj::round(rect->width)) );
HXDLIN(1289)			rect->height = ( (Float)(::Math_obj::round(rect->height)) );
HXDLIN(1289)			this->clipRect = rect;
            		}
            		else {
HXLINE(1291)			this->clipRect = null();
            		}
HXLINE(1293)		if (::hx::IsNotNull( this->frames )) {
HXLINE(1294)			this->set_frame(this->frames->frames->__get(this->animation->frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
            		}
HXLINE(1296)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1308_set_frames)
HXLINE(1309)		if (::hx::IsNotNull( this->animation )) {
HXLINE(1311)			this->animation->destroyAnimations();
            		}
HXLINE(1314)		if (::hx::IsNotNull( Frames )) {
HXLINE(1316)			this->set_graphic(Frames->parent);
HXLINE(1317)			this->frames = Frames;
HXLINE(1318)			this->set_frame(this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1319)			this->numFrames = this->frames->frames->length;
HXLINE(1320)			this->resetHelpers();
HXLINE(1321)			this->bakedRotationAngle = ( (Float)(0) );
HXLINE(1322)			this->animation->set_frameIndex(0);
HXLINE(1323)			this->graphicLoaded();
            		}
            		else {
HXLINE(1327)			this->frames = null();
HXLINE(1328)			this->set_frame(null());
HXLINE(1329)			this->set_graphic(null());
            		}
HXLINE(1332)		return Frames;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1337_set_flipX)
HXLINE(1338)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1340)			int _hx_tmp;
HXDLIN(1340)			if (Value) {
HXLINE(1340)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1340)				_hx_tmp = 1;
            			}
HXDLIN(1340)			this->_facingHorizontalMult = _hx_tmp;
            		}
HXLINE(1342)		bool _hx_tmp;
HXDLIN(1342)		if ((this->flipX == Value)) {
HXLINE(1342)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1342)			_hx_tmp = true;
            		}
HXDLIN(1342)		this->dirty = _hx_tmp;
HXLINE(1343)		return (this->flipX = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1348_set_flipY)
HXLINE(1349)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1351)			int _hx_tmp;
HXDLIN(1351)			if (Value) {
HXLINE(1351)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1351)				_hx_tmp = 1;
            			}
HXDLIN(1351)			this->_facingVerticalMult = _hx_tmp;
            		}
HXLINE(1353)		bool _hx_tmp;
HXDLIN(1353)		if ((this->flipY == Value)) {
HXLINE(1353)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1353)			_hx_tmp = true;
            		}
HXDLIN(1353)		this->dirty = _hx_tmp;
HXLINE(1354)		return (this->flipY = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1360_set_antialiasing)
HXDLIN(1360)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

bool FlxSprite_obj::set_useFramePixels(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1366_set_useFramePixels)
HXDLIN(1366)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1368)			if ((value != this->useFramePixels)) {
HXLINE(1370)				this->useFramePixels = value;
HXLINE(1371)				this->set_frame(this->frame);
HXLINE(1373)				if (value) {
HXLINE(1375)					this->updateFramePixels();
            				}
            			}
HXLINE(1379)			return value;
            		}
            		else {
HXLINE(1383)			this->useFramePixels = true;
HXLINE(1384)			return true;
            		}
HXLINE(1366)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_useFramePixels,return )

bool FlxSprite_obj::checkFlipX(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1390_checkFlipX)
HXLINE(1391)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXLINE(1392)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1394)			return (doFlipX != this->animation->_curAnim->flipX);
            		}
HXLINE(1396)		return doFlipX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipX,return )

bool FlxSprite_obj::checkFlipY(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1401_checkFlipY)
HXLINE(1402)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXLINE(1403)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1405)			return (doFlipY != this->animation->_curAnim->flipY);
            		}
HXLINE(1407)		return doFlipY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipY,return )


::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxSprite_obj > __this = new FlxSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	FlxSprite_obj *__this = (FlxSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSprite_obj), true, "flixel.FlxSprite"));
	*(void **)__this = FlxSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixels() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"facing") ) { return ::hx::Val( facing ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"_frame") ) { return ::hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return ::hx::Val( clipRect ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return ::hx::Val( animation ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return ::hx::Val( numFrames ); }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return ::hx::Val( _halfSize ); }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return ::hx::Val( _sinAngle ); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return ::hx::Val( _cosAngle ); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return ::hx::Val( resetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return ::hx::Val( setFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return ::hx::Val( frameWidth ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"resetFrame") ) { return ::hx::Val( resetFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return ::hx::Val( drawSimple_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTrig") ) { return ::hx::Val( updateTrig_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipX") ) { return ::hx::Val( checkFlipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipY") ) { return ::hx::Val( checkFlipY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return ::hx::Val( framePixels ); }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return ::hx::Val( frameHeight ); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return ::hx::Val( _flashRect2 ); }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return ::hx::Val( _facingFlip ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return ::hx::Val( centerOrigin_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { return ::hx::Val( _frameGraphic ); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return ::hx::Val( _angleChanged ); }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return ::hx::Val( centerOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return ::hx::Val( setFacingFlip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { return ::hx::Val( useFramePixels ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return ::hx::Val( resetFrameSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return ::hx::Val( setGraphicSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return ::hx::Val( isSimpleRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return ::hx::Val( _flashPointZero ); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return ::hx::Val( updateAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEmptyFrame") ) { return ::hx::Val( checkEmptyFrame_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return ::hx::Val( loadRotatedFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return ::hx::Val( useColorTransform ); }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return ::hx::Val( setColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFramePixels") ) { return ::hx::Val( updateFramePixels_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return ::hx::Val( bakedRotationAngle ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return ::hx::Val( resetSizeFromFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return ::hx::Val( getGraphicMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return ::hx::Val( isSimpleRenderBlit_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useFramePixels") ) { return ::hx::Val( set_useFramePixels_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return ::hx::Val( _facingVerticalMult ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return ::hx::Val( _facingHorizontalMult ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::graphics::frames::FlxFrame >()) );frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipX(inValue.Cast< bool >()) );flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipY(inValue.Cast< bool >()) );flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixels(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_facing(inValue.Cast< int >()) );facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clipRect(inValue.Cast<  ::flixel::math::FlxRect >()) );clipRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { _frameGraphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useFramePixels(inValue.Cast< bool >()) );useFramePixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("framePixels",3a,bb,f1,6a));
	outFields->push(HX_("useFramePixels",33,0e,5a,8e));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("frameWidth",99,ea,88,ad));
	outFields->push(HX_("frameHeight",f4,d3,93,e0));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("bakedRotationAngle",8a,d1,9c,9b));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("facing",1a,3f,05,e4));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("useColorTransform",30,e6,ec,72));
	outFields->push(HX_("clipRect",14,90,6a,58));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_frameGraphic",da,ac,00,f7));
	outFields->push(HX_("_facingHorizontalMult",8d,29,a1,51));
	outFields->push(HX_("_facingVerticalMult",df,11,0c,86));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_flashRect2",dd,9b,56,d7));
	outFields->push(HX_("_flashPointZero",67,14,7d,fb));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_halfSize",73,43,4d,66));
	outFields->push(HX_("_sinAngle",fa,54,de,b8));
	outFields->push(HX_("_cosAngle",6b,c9,00,1f));
	outFields->push(HX_("_angleChanged",40,98,5c,b2));
	outFields->push(HX_("_facingFlip",06,e0,9c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::animation::FlxAnimationController */ ,(int)offsetof(FlxSprite_obj,animation),HX_("animation",04,ef,34,4b)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxSprite_obj,framePixels),HX_("framePixels",3a,bb,f1,6a)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useFramePixels),HX_("useFramePixels",33,0e,5a,8e)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_("frameWidth",99,ea,88,ad)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_("frameHeight",f4,d3,93,e0)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_("numFrames",8c,fa,86,5d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxSprite_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_("bakedRotationAngle",8a,d1,9c,9b)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_("facing",1a,3f,05,e4)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSprite_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_("useColorTransform",30,e6,ec,72)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxSprite_obj,clipRect),HX_("clipRect",14,90,6a,58)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxSprite_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,_frameGraphic),HX_("_frameGraphic",da,ac,00,f7)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_("_facingHorizontalMult",8d,29,a1,51)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_("_facingVerticalMult",df,11,0c,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_("_flashRect2",dd,9b,56,d7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_("_flashPointZero",67,14,7d,fb)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxSprite_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_("_halfSize",73,43,4d,66)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_("_sinAngle",fa,54,de,b8)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_("_cosAngle",6b,c9,00,1f)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_("_angleChanged",40,98,5c,b2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_("_facingFlip",06,e0,9c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSprite_obj_sMemberFields[] = {
	HX_("animation",04,ef,34,4b),
	HX_("framePixels",3a,bb,f1,6a),
	HX_("useFramePixels",33,0e,5a,8e),
	HX_("antialiasing",f4,16,b3,48),
	HX_("dirty",12,50,d0,d9),
	HX_("frame",2d,78,83,06),
	HX_("frameWidth",99,ea,88,ad),
	HX_("frameHeight",f4,d3,93,e0),
	HX_("numFrames",8c,fa,86,5d),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("bakedRotationAngle",8a,d1,9c,9b),
	HX_("alpha",5e,a7,96,21),
	HX_("facing",1a,3f,05,e4),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("origin",e6,19,01,4b),
	HX_("offset",93,97,3f,60),
	HX_("scale",8a,ce,ce,78),
	HX_("blend",51,e8,f4,b4),
	HX_("color",63,71,5c,4a),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("useColorTransform",30,e6,ec,72),
	HX_("clipRect",14,90,6a,58),
	HX_("shader",25,bf,20,1d),
	HX_("_frame",6e,bf,6a,02),
	HX_("_frameGraphic",da,ac,00,f7),
	HX_("_facingHorizontalMult",8d,29,a1,51),
	HX_("_facingVerticalMult",df,11,0c,86),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_flashRect2",dd,9b,56,d7),
	HX_("_flashPointZero",67,14,7d,fb),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_halfSize",73,43,4d,66),
	HX_("_sinAngle",fa,54,de,b8),
	HX_("_cosAngle",6b,c9,00,1f),
	HX_("_angleChanged",40,98,5c,b2),
	HX_("_facingFlip",06,e0,9c,02),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("loadRotatedFrame",0a,81,76,8b),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("resetSize",30,aa,3f,92),
	HX_("resetFrameSize",bf,c3,44,94),
	HX_("resetSizeFromFrame",13,d2,50,8c),
	HX_("resetFrame",de,af,1f,ef),
	HX_("setGraphicSize",07,d7,f8,2d),
	HX_("updateHitbox",81,94,eb,56),
	HX_("resetHelpers",36,89,3d,32),
	HX_("update",09,86,05,87),
	HX_("updateAnimation",bb,bf,bf,9a),
	HX_("checkEmptyFrame",48,b5,2f,00),
	HX_("draw",04,2c,70,42),
	HX_("drawSimple",56,7f,42,fa),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("stamp",03,70,0b,84),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("centerOffsets",2b,a0,b2,c1),
	HX_("centerOrigin",9b,41,36,0f),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("setColorTransform",cb,5e,21,43),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("calcFrame",58,93,8c,f9),
	HX_("updateFramePixels",b1,67,5b,cf),
	HX_("getGraphicMidpoint",9a,b4,dd,57),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isSimpleRender",32,f4,2a,47),
	HX_("isSimpleRenderBlit",87,59,b0,df),
	HX_("setFacingFlip",29,51,8b,d1),
	HX_("setFrames",e8,24,2d,0c),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("set_angle",36,8c,dc,49),
	HX_("updateTrig",85,87,b8,05),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_useFramePixels",70,21,a3,06),
	HX_("checkFlipX",23,47,82,12),
	HX_("checkFlipY",24,47,82,12),
	::String(null()) };

::hx::Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	FlxSprite_obj _hx_dummy;
	FlxSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxSprite",65,ad,eb,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
