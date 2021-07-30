#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#include <openfl/text/_TextFieldType/TextFieldType_Impl_.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81873a2f4b2980c0_106_new,"openfl.text._internal.TextEngine","new",0xa9ba7af6,"openfl.text._internal.TextEngine.new","openfl/text/_internal/TextEngine.hx",106,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_157_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",157,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_152_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",152,0xb85e1839)
static const ::String _hx_array_data_7e808804_3[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_239_getBounds,"openfl.text._internal.TextEngine","getBounds",0x3ac9cec1,"openfl.text._internal.TextEngine.getBounds","openfl/text/_internal/TextEngine.hx",239,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_554_getLine,"openfl.text._internal.TextEngine","getLine",0xeb547540,"openfl.text._internal.TextEngine.getLine","openfl/text/_internal/TextEngine.hx",554,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_571_getLineBreaks,"openfl.text._internal.TextEngine","getLineBreaks",0x21405c34,"openfl.text._internal.TextEngine.getLineBreaks","openfl/text/_internal/TextEngine.hx",571,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_591_getLineBreakIndex,"openfl.text._internal.TextEngine","getLineBreakIndex",0xa9a1db33,"openfl.text._internal.TextEngine.getLineBreakIndex","openfl/text/_internal/TextEngine.hx",591,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_601_getLineMeasurements,"openfl.text._internal.TextEngine","getLineMeasurements",0x50395657,"openfl.text._internal.TextEngine.getLineMeasurements","openfl/text/_internal/TextEngine.hx",601,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_761_getLayoutGroups,"openfl.text._internal.TextEngine","getLayoutGroups",0x36de2bea,"openfl.text._internal.TextEngine.getLayoutGroups","openfl/text/_internal/TextEngine.hx",761,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1632_restrictText,"openfl.text._internal.TextEngine","restrictText",0x4d5464b3,"openfl.text._internal.TextEngine.restrictText","openfl/text/_internal/TextEngine.hx",1632,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1653_setTextAlignment,"openfl.text._internal.TextEngine","setTextAlignment",0x7bf8ff1e,"openfl.text._internal.TextEngine.setTextAlignment","openfl/text/_internal/TextEngine.hx",1653,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1760_trimText,"openfl.text._internal.TextEngine","trimText",0x8f1ce459,"openfl.text._internal.TextEngine.trimText","openfl/text/_internal/TextEngine.hx",1760,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1775_update,"openfl.text._internal.TextEngine","update",0x02cb1d33,"openfl.text._internal.TextEngine.update","openfl/text/_internal/TextEngine.hx",1775,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1808_get_bottomScrollV,"openfl.text._internal.TextEngine","get_bottomScrollV",0x0563c86b,"openfl.text._internal.TextEngine.get_bottomScrollV","openfl/text/_internal/TextEngine.hx",1808,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1839_get_maxScrollV,"openfl.text._internal.TextEngine","get_maxScrollV",0x5a4206d8,"openfl.text._internal.TextEngine.get_maxScrollV","openfl/text/_internal/TextEngine.hx",1839,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1871_set_restrict,"openfl.text._internal.TextEngine","set_restrict",0xd4c7f563,"openfl.text._internal.TextEngine.set_restrict","openfl/text/_internal/TextEngine.hx",1871,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1892_get_scrollV,"openfl.text._internal.TextEngine","get_scrollV",0x1f66c456,"openfl.text._internal.TextEngine.get_scrollV","openfl/text/_internal/TextEngine.hx",1892,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1901_set_scrollV,"openfl.text._internal.TextEngine","set_scrollV",0x29d3cb62,"openfl.text._internal.TextEngine.set_scrollV","openfl/text/_internal/TextEngine.hx",1901,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1908_set_text,"openfl.text._internal.TextEngine","set_text",0xa4cb1754,"openfl.text._internal.TextEngine.set_text","openfl/text/_internal/TextEngine.hx",1908,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_178_findFont,"openfl.text._internal.TextEngine","findFont",0xc00da052,"openfl.text._internal.TextEngine.findFont","openfl/text/_internal/TextEngine.hx",178,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_214_findFontVariant,"openfl.text._internal.TextEngine","findFontVariant",0x8f425653,"openfl.text._internal.TextEngine.findFontVariant","openfl/text/_internal/TextEngine.hx",214,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_264_getFormatHeight,"openfl.text._internal.TextEngine","getFormatHeight",0x3ed257ca,"openfl.text._internal.TextEngine.getFormatHeight","openfl/text/_internal/TextEngine.hx",264,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_300_getFont,"openfl.text._internal.TextEngine","getFont",0xe761bb1b,"openfl.text._internal.TextEngine.getFont","openfl/text/_internal/TextEngine.hx",300,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_357_getFontInstance,"openfl.text._internal.TextEngine","getFontInstance",0x7b1da9d0,"openfl.text._internal.TextEngine.getFontInstance","openfl/text/_internal/TextEngine.hx",357,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_34_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",34,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_36_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",36,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_37_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",37,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_38_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",38,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_39_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",39,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_40_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",40,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_41_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",41,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{

void TextEngine_obj::__construct( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_106_new)
HXLINE( 107)		this->_hx___shapeCache =  ::openfl::text::_internal::ShapeCache_obj::__alloc( HX_CTX );
HXLINE( 108)		this->textField = textField;
HXLINE( 110)		this->width = ( (Float)(100) );
HXLINE( 111)		this->height = ( (Float)(100) );
HXLINE( 112)		this->set_text(HX_("",00,00,00,00));
HXLINE( 114)		this->bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 115)		this->textBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 117)		this->type = 0;
HXLINE( 118)		this->autoSize = 2;
HXLINE( 119)		this->embedFonts = false;
HXLINE( 120)		this->selectable = true;
HXLINE( 121)		this->borderColor = 0;
HXLINE( 122)		this->border = false;
HXLINE( 123)		this->backgroundColor = 16777215;
HXLINE( 124)		this->background = false;
HXLINE( 125)		this->gridFitType = 1;
HXLINE( 126)		this->maxChars = 0;
HXLINE( 127)		this->multiline = false;
HXLINE( 128)		this->numLines = 1;
HXLINE( 129)		this->sharpness = ( (Float)(0) );
HXLINE( 130)		this->scrollH = 0;
HXLINE( 131)		this->set_scrollV(1);
HXLINE( 132)		this->wordWrap = false;
HXLINE( 134)		int length = null();
HXDLIN( 134)		bool fixed = null();
HXDLIN( 134)		::Array< Float > array = null();
HXDLIN( 134)		this->lineAscents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 135)		int length1 = null();
HXDLIN( 135)		bool fixed1 = null();
HXDLIN( 135)		::Array< int > array1 = null();
HXDLIN( 135)		this->lineBreaks =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 136)		int length2 = null();
HXDLIN( 136)		bool fixed2 = null();
HXDLIN( 136)		::Array< Float > array2 = null();
HXDLIN( 136)		this->lineDescents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE( 137)		int length3 = null();
HXDLIN( 137)		bool fixed3 = null();
HXDLIN( 137)		::Array< Float > array3 = null();
HXDLIN( 137)		this->lineLeadings =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE( 138)		int length4 = null();
HXDLIN( 138)		bool fixed4 = null();
HXDLIN( 138)		::Array< Float > array4 = null();
HXDLIN( 138)		this->lineHeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE( 139)		int length5 = null();
HXDLIN( 139)		bool fixed5 = null();
HXDLIN( 139)		::Array< Float > array5 = null();
HXDLIN( 139)		this->lineWidths =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE( 140)		int length6 = null();
HXDLIN( 140)		bool fixed6 = null();
HXDLIN( 140)		::Array< ::Dynamic> array6 = null();
HXDLIN( 140)		this->layoutGroups =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length6,fixed6,array6,true);
HXLINE( 141)		int length7 = null();
HXDLIN( 141)		bool fixed7 = null();
HXDLIN( 141)		::Array< ::Dynamic> array7 = null();
HXDLIN( 141)		this->textFormatRanges =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length7,fixed7,array7,true);
            	}

Dynamic TextEngine_obj::__CreateEmpty() { return new TextEngine_obj; }

void *TextEngine_obj::_hx_vtable = 0;

Dynamic TextEngine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEngine_obj > _hx_result = new TextEngine_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextEngine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd5980a;
}

 ::EReg TextEngine_obj::createRestrictRegexp(::String restrict){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,declined) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_157_createRestrictRegexp)
HXLINE( 158)			::Array< ::String > declined1 = declined;
HXDLIN( 158)			int accepted = 0;
HXDLIN( 158)			::String declined2 = declined1->__get(accepted);
HXDLIN( 158)			declined1[accepted] = (declined2 + ereg->matched(1));
HXLINE( 159)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_152_createRestrictRegexp)
HXLINE( 153)		 ::EReg declinedRange =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^(.-.|.)",ee,f5,da,ba),HX_("gu",2e,5a,00,00));
HXLINE( 154)		::Array< ::String > declined = ::Array_obj< ::String >::fromData( _hx_array_data_7e808804_3,1);
HXLINE( 156)		::String accepted = declinedRange->map(restrict, ::Dynamic(new _hx_Closure_0(declined)));
HXLINE( 162)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 164)		if ((accepted.length > 0)) {
HXLINE( 166)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + restrict) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 169)		if ((declined->__get(0).length > 0)) {
HXLINE( 171)			testRegexpParts->push(((HX_("[",5b,00,00,00) + declined->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 174)		return  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_("|",7c,00,00,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

void TextEngine_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_239_getBounds)
HXLINE( 240)		int padding;
HXDLIN( 240)		if (this->border) {
HXLINE( 240)			padding = 1;
            		}
            		else {
HXLINE( 240)			padding = 0;
            		}
HXLINE( 242)		this->bounds->width = (this->width + padding);
HXLINE( 243)		this->bounds->height = (this->height + padding);
HXLINE( 245)		Float x = this->width;
HXDLIN( 245)		Float y = this->width;
HXLINE( 247)		{
HXLINE( 247)			 ::Dynamic group = this->layoutGroups->iterator();
HXDLIN( 247)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 247)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 249)				if ((group1->offsetX < x)) {
HXLINE( 249)					x = group1->offsetX;
            				}
HXLINE( 250)				if ((group1->offsetY < y)) {
HXLINE( 250)					y = group1->offsetY;
            				}
            			}
            		}
HXLINE( 253)		if ((x >= this->width)) {
HXLINE( 253)			x = ( (Float)(2) );
            		}
HXLINE( 254)		if ((y >= this->height)) {
HXLINE( 254)			y = ( (Float)(2) );
            		}
HXLINE( 260)		this->textBounds->setTo(::Math_obj::max((x - ( (Float)(2) )),( (Float)(0) )),::Math_obj::max((y - ( (Float)(2) )),( (Float)(0) )),::Math_obj::min((this->textWidth + 4),(this->bounds->width + 4)),::Math_obj::min((this->textHeight + 4),(this->bounds->height + 4)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine(int index){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_554_getLine)
HXLINE( 555)		bool _hx_tmp;
HXDLIN( 555)		if ((index >= 0)) {
HXLINE( 555)			_hx_tmp = (index > (this->lineBreaks->get_length() + 1));
            		}
            		else {
HXLINE( 555)			_hx_tmp = true;
            		}
HXDLIN( 555)		if (_hx_tmp) {
HXLINE( 557)			return null();
            		}
HXLINE( 560)		if ((this->lineBreaks->get_length() == 0)) {
HXLINE( 562)			return this->text;
            		}
            		else {
HXLINE( 566)			::String _hx_tmp = this->text;
HXDLIN( 566)			int _hx_tmp1;
HXDLIN( 566)			if ((index > 0)) {
HXLINE( 566)				_hx_tmp1 = this->lineBreaks->get((index - 1));
            			}
            			else {
HXLINE( 566)				_hx_tmp1 = 0;
            			}
HXDLIN( 566)			return _hx_tmp.substring(_hx_tmp1,this->lineBreaks->get(index));
            		}
HXLINE( 560)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

void TextEngine_obj::getLineBreaks(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_571_getLineBreaks)
HXLINE( 572)		this->lineBreaks->set_length(0);
HXLINE( 574)		int index = -1;
HXLINE( 576)		int cr = -1;
HXDLIN( 576)		int lf = -1;
HXLINE( 577)		while((index < this->text.length)){
HXLINE( 579)			lf = this->text.indexOf(HX_("\n",0a,00,00,00),(index + 1));
HXLINE( 580)			cr = this->text.indexOf(HX_("\r",0d,00,00,00),(index + 1));
HXLINE( 582)			if ((cr == -1)) {
HXLINE( 582)				index = lf;
            			}
            			else {
HXLINE( 582)				if ((lf == -1)) {
HXLINE( 582)					index = cr;
            				}
            				else {
HXLINE( 582)					if ((cr < lf)) {
HXLINE( 582)						index = cr;
            					}
            					else {
HXLINE( 582)						index = lf;
            					}
            				}
            			}
HXLINE( 584)			if ((index > -1)) {
HXLINE( 584)				this->lineBreaks->push(index);
            			}
            			else {
HXLINE( 586)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineBreaks,(void))

int TextEngine_obj::getLineBreakIndex(::hx::Null< int >  __o_startIndex){
            		int startIndex = __o_startIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_591_getLineBreakIndex)
HXLINE( 592)		{
HXLINE( 592)			 ::Dynamic lineBreak = this->lineBreaks->iterator();
HXDLIN( 592)			while(( (bool)(lineBreak->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 592)				int lineBreak1 = ( (int)(lineBreak->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 594)				if ((lineBreak1 >= startIndex)) {
HXLINE( 594)					return lineBreak1;
            				}
            			}
            		}
HXLINE( 597)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

void TextEngine_obj::getLineMeasurements(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_601_getLineMeasurements)
HXLINE( 602)		this->lineAscents->set_length(0);
HXLINE( 603)		this->lineDescents->set_length(0);
HXLINE( 604)		this->lineLeadings->set_length(0);
HXLINE( 605)		this->lineHeights->set_length(0);
HXLINE( 606)		this->lineWidths->set_length(0);
HXLINE( 608)		Float currentLineAscent = ((Float)0.0);
HXLINE( 609)		Float currentLineDescent = ((Float)0.0);
HXLINE( 610)		 ::Dynamic currentLineLeading = null();
HXLINE( 611)		Float currentLineHeight = ((Float)0.0);
HXLINE( 612)		Float currentLineWidth = ((Float)0.0);
HXLINE( 613)		Float currentTextHeight = ((Float)0.0);
HXLINE( 615)		this->textWidth = ( (Float)(0) );
HXLINE( 616)		this->textHeight = ( (Float)(0) );
HXLINE( 617)		this->numLines = 1;
HXLINE( 618)		this->maxScrollH = 0;
HXLINE( 620)		{
HXLINE( 620)			 ::Dynamic group = this->layoutGroups->iterator();
HXDLIN( 620)			while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 620)				 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 622)				while((group1->lineIndex > (this->numLines - 1))){
HXLINE( 624)					this->lineAscents->push(currentLineAscent);
HXLINE( 625)					this->lineDescents->push(currentLineDescent);
HXLINE( 626)					{
HXLINE( 626)						Float _hx_tmp;
HXDLIN( 626)						if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 626)							_hx_tmp = ( (Float)(currentLineLeading) );
            						}
            						else {
HXLINE( 626)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 626)						this->lineLeadings->push(_hx_tmp);
            					}
HXLINE( 627)					this->lineHeights->push(currentLineHeight);
HXLINE( 628)					this->lineWidths->push(currentLineWidth);
HXLINE( 630)					currentLineAscent = ( (Float)(0) );
HXLINE( 631)					currentLineDescent = ( (Float)(0) );
HXLINE( 632)					currentLineLeading = null();
HXLINE( 633)					currentLineHeight = ( (Float)(0) );
HXLINE( 634)					currentLineWidth = ( (Float)(0) );
HXLINE( 636)					this->numLines++;
            				}
HXLINE( 639)				currentLineAscent = ::Math_obj::max(currentLineAscent,group1->ascent);
HXLINE( 640)				currentLineDescent = ::Math_obj::max(currentLineDescent,group1->descent);
HXLINE( 642)				if (::hx::IsNull( currentLineLeading )) {
HXLINE( 644)					currentLineLeading = group1->leading;
            				}
            				else {
HXLINE( 648)					currentLineLeading = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(currentLineLeading) ),( (Float)(group1->leading) )));
            				}
HXLINE( 651)				currentLineHeight = ::Math_obj::max(currentLineHeight,group1->height);
HXLINE( 652)				currentLineWidth = ((group1->offsetX - ( (Float)(2) )) + group1->width);
HXLINE( 654)				if ((currentLineWidth > this->textWidth)) {
HXLINE( 656)					this->textWidth = currentLineWidth;
            				}
HXLINE( 659)				currentTextHeight = (((group1->offsetY - ( (Float)(2) )) + group1->ascent) + group1->descent);
HXLINE( 661)				if ((currentTextHeight > this->textHeight)) {
HXLINE( 663)					this->textHeight = currentTextHeight;
            				}
            			}
            		}
HXLINE( 667)		bool _hx_tmp;
HXDLIN( 667)		bool _hx_tmp1;
HXDLIN( 667)		if ((this->textHeight == 0)) {
HXLINE( 667)			_hx_tmp1 = ::hx::IsNotNull( this->textField );
            		}
            		else {
HXLINE( 667)			_hx_tmp1 = false;
            		}
HXDLIN( 667)		if (_hx_tmp1) {
HXLINE( 667)			_hx_tmp = ::hx::IsEq( this->textField->get_type(),1 );
            		}
            		else {
HXLINE( 667)			_hx_tmp = false;
            		}
HXDLIN( 667)		if (_hx_tmp) {
HXLINE( 669)			 ::openfl::text::TextFormat currentFormat = this->textField->_hx___textFormat;
HXLINE( 670)			Float ascent;
HXDLIN( 670)			Float descent;
HXLINE( 672)			 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXLINE( 674)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE( 676)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXLINE( 677)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE( 679)				bool _hx_tmp;
HXDLIN( 679)				if (::hx::IsNotNull( font )) {
HXLINE( 679)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE( 679)					_hx_tmp = false;
            				}
HXDLIN( 679)				if (_hx_tmp) {
HXLINE( 682)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXLINE( 683)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE( 691)					ascent = ( (Float)(currentFormat->size) );
HXLINE( 692)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXLINE( 670)			 ::Dynamic leading = currentFormat->leading;
HXDLIN( 670)			Float heightValue = ((ascent + descent) + leading);
HXLINE( 699)			currentLineAscent = ascent;
HXLINE( 700)			currentLineDescent = descent;
HXLINE( 701)			currentLineLeading = leading;
HXLINE( 703)			currentTextHeight = (ascent + descent);
HXLINE( 704)			this->textHeight = currentTextHeight;
            		}
HXLINE( 707)		this->lineAscents->push(currentLineAscent);
HXLINE( 708)		this->lineDescents->push(currentLineDescent);
HXLINE( 709)		{
HXLINE( 709)			Float _hx_tmp2;
HXDLIN( 709)			if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 709)				_hx_tmp2 = ( (Float)(currentLineLeading) );
            			}
            			else {
HXLINE( 709)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN( 709)			this->lineLeadings->push(_hx_tmp2);
            		}
HXLINE( 710)		this->lineHeights->push(currentLineHeight);
HXLINE( 711)		this->lineWidths->push(currentLineWidth);
HXLINE( 713)		if ((this->numLines == 1)) {
HXLINE( 715)			if (::hx::IsGreater( currentLineLeading,0 )) {
HXLINE( 717)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 717)				_hx_tmp->textHeight = (_hx_tmp->textHeight + currentLineLeading);
            			}
            		}
HXLINE( 721)		if ((this->layoutGroups->get_length() > 0)) {
HXLINE( 723)			::Dynamic this1 = this->layoutGroups;
HXDLIN( 723)			 ::openfl::text::_internal::TextLayoutGroup group = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 725)			bool _hx_tmp;
HXDLIN( 725)			if (::hx::IsNotNull( group )) {
HXLINE( 725)				_hx_tmp = (group->startIndex == group->endIndex);
            			}
            			else {
HXLINE( 725)				_hx_tmp = false;
            			}
HXDLIN( 725)			if (_hx_tmp) {
HXLINE( 727)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 727)				_hx_tmp->textHeight = (_hx_tmp->textHeight - currentLineHeight);
            			}
            		}
HXLINE( 731)		if (::hx::IsNotEq( this->autoSize,2 )) {
HXLINE( 733)			 ::Dynamic _hx_switch_0 = this->autoSize;
            			if (  (_hx_switch_0==0) ||  (_hx_switch_0==1) ||  (_hx_switch_0==3) ){
HXLINE( 736)				if (!(this->wordWrap)) {
HXLINE( 738)					this->width = (this->textWidth + 4);
            				}
HXLINE( 741)				this->height = (this->textHeight + 4);
HXLINE( 742)				this->bottomScrollV = this->numLines;
HXLINE( 735)				goto _hx_goto_13;
            			}
            			/* default */{
            			}
            			_hx_goto_13:;
            		}
HXLINE( 748)		if ((this->textWidth > (this->width - ( (Float)(4) )))) {
HXLINE( 750)			this->maxScrollH = ::Std_obj::_hx_int(((this->textWidth - this->width) + 4));
            		}
            		else {
HXLINE( 754)			this->maxScrollH = 0;
            		}
HXLINE( 757)		if ((this->scrollH > this->maxScrollH)) {
HXLINE( 757)			this->scrollH = this->maxScrollH;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

void TextEngine_obj::getLayoutGroups(){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_761_getLayoutGroups)
HXDLIN( 761)		 ::openfl::text::_internal::TextEngine _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 762)		this->layoutGroups->set_length(0);
HXLINE( 764)		bool _hx_tmp;
HXDLIN( 764)		if (::hx::IsNotNull( this->text )) {
HXLINE( 764)			_hx_tmp = (this->text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 764)			_hx_tmp = true;
            		}
HXDLIN( 764)		if (_hx_tmp) {
HXLINE( 764)			return;
            		}
HXLINE( 766)		int rangeIndex = -1;
HXLINE( 767)		 ::openfl::text::_internal::TextFormatRange formatRange = null();
HXLINE( 768)		 ::lime::text::Font font = null();
HXLINE( 770)		 ::openfl::text::TextFormat currentFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 773)		int leading = 0;
HXLINE( 774)		Float ascent = ((Float)0.0);
HXDLIN( 774)		Float maxAscent = ((Float)0.0);
HXLINE( 775)		Float descent = ((Float)0.0);
HXLINE( 778)		 ::Dynamic align = 3;
HXLINE( 779)		int blockIndent = 0;
HXLINE( 780)		bool bullet = false;
HXLINE( 781)		int indent = 0;
HXLINE( 782)		int leftMargin = 0;
HXLINE( 783)		int rightMargin = 0;
HXLINE( 784)		bool firstLineOfParagraph = true;
HXLINE( 786)		 ::Dynamic tabStops = null();
HXLINE( 788)		 ::openfl::text::_internal::TextLayoutGroup layoutGroup = null();
HXDLIN( 788)		::Array< ::Dynamic> positions = null();
HXLINE( 789)		Float widthValue = ((Float)0.0);
HXDLIN( 789)		int heightValue = 0;
HXDLIN( 789)		int maxHeightValue = 0;
HXLINE( 790)		int previousSpaceIndex = -2;
HXLINE( 791)		int previousBreakIndex = -1;
HXLINE( 792)		int spaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 793)		int breakCount = 0;
HXLINE( 794)		int breakIndex;
HXDLIN( 794)		if ((breakCount < this->lineBreaks->get_length())) {
HXLINE( 794)			breakIndex = this->lineBreaks->get(breakCount);
            		}
            		else {
HXLINE( 794)			breakIndex = -1;
            		}
HXLINE( 796)		Float offsetX = ((Float)0.0);
HXLINE( 797)		Float offsetY = ((Float)0.0);
HXLINE( 798)		int textIndex = 0;
HXLINE( 799)		int lineIndex = 0;
HXLINE(1312)		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1312)			rangeIndex = (rangeIndex + 1);
HXDLIN(1312)			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1312)			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1312)			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            		}
HXLINE(1313)		{
HXLINE(1313)			firstLineOfParagraph = true;
HXDLIN(1313)			if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1313)				align = currentFormat->align;
            			}
            			else {
HXLINE(1313)				align = 3;
            			}
HXDLIN(1313)			if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1313)				blockIndent = ( (int)(currentFormat->blockIndent) );
            			}
            			else {
HXLINE(1313)				blockIndent = 0;
            			}
HXDLIN(1313)			if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1313)				indent = ( (int)(currentFormat->indent) );
            			}
            			else {
HXLINE(1313)				indent = 0;
            			}
HXDLIN(1313)			if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1313)				leftMargin = ( (int)(currentFormat->leftMargin) );
            			}
            			else {
HXLINE(1313)				leftMargin = 0;
            			}
HXDLIN(1313)			if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1313)				rightMargin = ( (int)(currentFormat->rightMargin) );
            			}
            			else {
HXLINE(1313)				rightMargin = 0;
            			}
HXDLIN(1313)			bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1313)			bool _hx_tmp2 = ::hx::IsNotNull( currentFormat->tabStops );
            		}
HXLINE(1314)		{
HXLINE(1314)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1314)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1314)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE(1314)				bool _hx_tmp;
HXDLIN(1314)				if (::hx::IsNotNull( font )) {
HXLINE(1314)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE(1314)					_hx_tmp = false;
            				}
HXDLIN(1314)				if (_hx_tmp) {
HXLINE(1314)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1314)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE(1314)					ascent = ( (Float)(currentFormat->size) );
HXDLIN(1314)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXDLIN(1314)			leading = ( (int)(currentFormat->leading) );
HXDLIN(1314)			heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1314)			if ((heightValue > maxHeightValue)) {
HXLINE(1314)				maxHeightValue = heightValue;
            			}
HXDLIN(1314)			if ((ascent > maxAscent)) {
HXLINE(1314)				maxAscent = ascent;
            			}
            		}
HXLINE(1316)		bool wrap;
HXLINE(1317)		int maxLoops = (this->text.length + 1);
HXLINE(1321)		while((textIndex < maxLoops)){
HXLINE(1323)			bool _hx_tmp;
HXDLIN(1323)			if ((breakIndex > -1)) {
HXLINE(1323)				if ((spaceIndex != -1)) {
HXLINE(1323)					_hx_tmp = (breakIndex < spaceIndex);
            				}
            				else {
HXLINE(1323)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1323)				_hx_tmp = false;
            			}
HXDLIN(1323)			if (_hx_tmp) {
HXLINE(1327)				if ((textIndex <= breakIndex)) {
HXLINE(1329)					if ((textIndex >= breakIndex)) {
HXLINE(1329)						positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1329)						widthValue = ( (Float)(0) );
            					}
            					else {
HXLINE(1329)						if ((breakIndex <= formatRange->end)) {
HXLINE(1329)							::String text = _gthis->text;
HXDLIN(1329)							Float letterSpacing = ((Float)0.0);
HXDLIN(1329)							if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1329)								letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            							}
HXDLIN(1329)							if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1329)								_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            							}
HXDLIN(1329)							_gthis->_hx___textLayout->set_text(null());
HXDLIN(1329)							_gthis->_hx___textLayout->set_font(font);
HXDLIN(1329)							if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1329)								_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            							}
HXDLIN(1329)							_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1329)							bool positions1;
HXDLIN(1329)							if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1329)								positions1 = (_gthis->sharpness < 400);
            							}
            							else {
HXLINE(1329)								positions1 = true;
            							}
HXDLIN(1329)							_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1329)							 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1329)							_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1329)							positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1329)							Float width = ((Float)0.0);
HXDLIN(1329)							{
HXLINE(1329)								int _g = 0;
HXDLIN(1329)								while((_g < positions->length)){
HXLINE(1329)									 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1329)									_g = (_g + 1);
HXDLIN(1329)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1329)							widthValue = width;
            						}
            						else {
HXLINE(1329)							int tempIndex = textIndex;
HXDLIN(1329)							int tempRangeEnd = formatRange->end;
HXDLIN(1329)							int countRanges = 0;
HXDLIN(1329)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1329)							widthValue = ( (Float)(0) );
HXDLIN(1329)							while(true){
HXLINE(1329)								if ((tempIndex != tempRangeEnd)) {
HXLINE(1329)									::String text = _gthis->text;
HXDLIN(1329)									Float letterSpacing = ((Float)0.0);
HXDLIN(1329)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1329)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1329)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1329)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1329)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1329)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1329)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1329)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1329)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1329)									bool _hx_tmp;
HXDLIN(1329)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1329)										_hx_tmp = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1329)										_hx_tmp = true;
            									}
HXDLIN(1329)									_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1329)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1329)									_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1329)									::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1329)									positions = positions->concat(tempPositions);
            								}
HXDLIN(1329)								if ((tempRangeEnd != breakIndex)) {
HXLINE(1329)									bool _hx_tmp;
HXDLIN(1329)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1329)										rangeIndex = (rangeIndex + 1);
HXDLIN(1329)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1329)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1329)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1329)										_hx_tmp = true;
            									}
            									else {
HXLINE(1329)										_hx_tmp = false;
            									}
HXDLIN(1329)									if (!(_hx_tmp)) {
HXLINE(1329)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1329)										goto _hx_goto_17;
            									}
HXDLIN(1329)									tempIndex = tempRangeEnd;
HXDLIN(1329)									if ((breakIndex < formatRange->end)) {
HXLINE(1329)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1329)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1329)									countRanges = (countRanges + 1);
            								}
            								else {
HXLINE(1329)									Float width = ((Float)0.0);
HXDLIN(1329)									{
HXLINE(1329)										int _g = 0;
HXDLIN(1329)										while((_g < positions->length)){
HXLINE(1329)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1329)											_g = (_g + 1);
HXDLIN(1329)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1329)									widthValue = width;
HXDLIN(1329)									goto _hx_goto_17;
            								}
            							}
            							_hx_goto_17:;
HXDLIN(1329)							rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1329)							if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1329)								rangeIndex = (rangeIndex + 1);
HXDLIN(1329)								formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1329)								currentFormat->_hx___merge(formatRange->format);
HXDLIN(1329)								font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            							}
            						}
            					}
HXLINE(1330)					{
HXLINE(1330)						bool _hx_tmp;
HXDLIN(1330)						if ((_gthis->width >= 4)) {
HXLINE(1330)							_hx_tmp = _gthis->wordWrap;
            						}
            						else {
HXLINE(1330)							_hx_tmp = false;
            						}
HXDLIN(1330)						if (_hx_tmp) {
HXLINE(1330)							::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1330)							int i;
HXDLIN(1330)							int bufferCount;
HXDLIN(1330)							int placeIndex;
HXDLIN(1330)							Float positionWidth;
HXDLIN(1330)							 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1330)							Float width = ((Float)0.0);
HXDLIN(1330)							{
HXLINE(1330)								int _g = 0;
HXDLIN(1330)								while((_g < remainingPositions->length)){
HXLINE(1330)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)									_g = (_g + 1);
HXDLIN(1330)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1330)							Float tempWidth = width;
HXDLIN(1330)							while(true){
HXLINE(1330)								bool _hx_tmp;
HXDLIN(1330)								if ((remainingPositions->length > 0)) {
HXLINE(1330)									int _hx_tmp1;
HXDLIN(1330)									if (firstLineOfParagraph) {
HXLINE(1330)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1330)										_hx_tmp1 = 0;
            									}
HXDLIN(1330)									_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            								}
            								else {
HXLINE(1330)									_hx_tmp = false;
            								}
HXDLIN(1330)								if (!(_hx_tmp)) {
HXLINE(1330)									goto _hx_goto_20;
            								}
HXDLIN(1330)								bufferCount = 0;
HXDLIN(1330)								i = bufferCount;
HXDLIN(1330)								positionWidth = ((Float)0.0);
HXDLIN(1330)								while(true){
HXLINE(1330)									int _hx_tmp;
HXDLIN(1330)									if (firstLineOfParagraph) {
HXLINE(1330)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1330)										_hx_tmp = 0;
            									}
HXDLIN(1330)									if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1330)										goto _hx_goto_21;
            									}
HXDLIN(1330)									currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)									if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1330)										i = (i + 1);
HXDLIN(1330)										bufferCount = (bufferCount + 1);
            									}
            									else {
HXLINE(1330)										positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1330)										i = (i + 1);
            									}
            								}
            								_hx_goto_21:;
HXDLIN(1330)								if ((i == bufferCount)) {
HXLINE(1330)									i = (bufferCount + 1);
            								}
            								else {
HXLINE(1330)									while(true){
HXLINE(1330)										bool _hx_tmp;
HXDLIN(1330)										if ((i > 1)) {
HXLINE(1330)											int _hx_tmp1;
HXDLIN(1330)											if (firstLineOfParagraph) {
HXLINE(1330)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1330)												_hx_tmp1 = 0;
            											}
HXDLIN(1330)											_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1330)											_hx_tmp = false;
            										}
HXDLIN(1330)										if (!(_hx_tmp)) {
HXLINE(1330)											goto _hx_goto_22;
            										}
HXDLIN(1330)										i = (i - 1);
HXDLIN(1330)										if (((i - bufferCount) > 0)) {
HXLINE(1330)											{
HXLINE(1330)												int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1330)												if ((textIndex >= endIndex)) {
HXLINE(1330)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1330)													if ((endIndex <= formatRange->end)) {
HXLINE(1330)														::String text = _gthis->text;
HXDLIN(1330)														Float letterSpacing = ((Float)0.0);
HXDLIN(1330)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1330)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)														bool positions1;
HXDLIN(1330)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1330)															positions1 = true;
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1330)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)														Float width = ((Float)0.0);
HXDLIN(1330)														{
HXLINE(1330)															int _g = 0;
HXDLIN(1330)															while((_g < positions->length)){
HXLINE(1330)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)																_g = (_g + 1);
HXDLIN(1330)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1330)														widthValue = width;
            													}
            													else {
HXLINE(1330)														int tempIndex = textIndex;
HXDLIN(1330)														int tempRangeEnd = formatRange->end;
HXDLIN(1330)														int countRanges = 0;
HXDLIN(1330)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)														widthValue = ( (Float)(0) );
HXDLIN(1330)														while(true){
HXLINE(1330)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1330)																::String text = _gthis->text;
HXDLIN(1330)																Float letterSpacing = ((Float)0.0);
HXDLIN(1330)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1330)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)																bool _hx_tmp;
HXDLIN(1330)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1330)																	_hx_tmp = true;
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1330)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1330)																::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1330)															if ((tempRangeEnd != endIndex)) {
HXLINE(1330)																bool _hx_tmp;
HXDLIN(1330)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1330)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1330)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1330)																	_hx_tmp = false;
            																}
HXDLIN(1330)																if (!(_hx_tmp)) {
HXLINE(1330)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1330)																	goto _hx_goto_24;
            																}
HXDLIN(1330)																tempIndex = tempRangeEnd;
HXDLIN(1330)																if ((endIndex < formatRange->end)) {
HXLINE(1330)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1330)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1330)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1330)																Float width = ((Float)0.0);
HXDLIN(1330)																{
HXLINE(1330)																	int _g = 0;
HXDLIN(1330)																	while((_g < positions->length)){
HXLINE(1330)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)																		_g = (_g + 1);
HXDLIN(1330)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1330)																widthValue = width;
HXDLIN(1330)																goto _hx_goto_24;
            															}
            														}
            														_hx_goto_24:;
HXDLIN(1330)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1330)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)															rangeIndex = (rangeIndex + 1);
HXDLIN(1330)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1330)											positionWidth = widthValue;
            										}
            										else {
HXLINE(1330)											i = 1;
HXDLIN(1330)											bufferCount = 0;
HXDLIN(1330)											{
HXLINE(1330)												int endIndex = (textIndex + 1);
HXDLIN(1330)												if ((textIndex >= endIndex)) {
HXLINE(1330)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1330)													if ((endIndex <= formatRange->end)) {
HXLINE(1330)														::String text = _gthis->text;
HXDLIN(1330)														Float letterSpacing = ((Float)0.0);
HXDLIN(1330)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1330)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)														bool positions1;
HXDLIN(1330)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1330)															positions1 = true;
            														}
HXDLIN(1330)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1330)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)														Float width = ((Float)0.0);
HXDLIN(1330)														{
HXLINE(1330)															int _g = 0;
HXDLIN(1330)															while((_g < positions->length)){
HXLINE(1330)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)																_g = (_g + 1);
HXDLIN(1330)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1330)														widthValue = width;
            													}
            													else {
HXLINE(1330)														int tempIndex = textIndex;
HXDLIN(1330)														int tempRangeEnd = formatRange->end;
HXDLIN(1330)														int countRanges = 0;
HXDLIN(1330)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)														widthValue = ( (Float)(0) );
HXDLIN(1330)														while(true){
HXLINE(1330)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1330)																::String text = _gthis->text;
HXDLIN(1330)																Float letterSpacing = ((Float)0.0);
HXDLIN(1330)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1330)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)																bool _hx_tmp;
HXDLIN(1330)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1330)																	_hx_tmp = true;
            																}
HXDLIN(1330)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1330)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1330)																::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1330)															if ((tempRangeEnd != endIndex)) {
HXLINE(1330)																bool _hx_tmp;
HXDLIN(1330)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1330)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1330)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1330)																	_hx_tmp = false;
            																}
HXDLIN(1330)																if (!(_hx_tmp)) {
HXLINE(1330)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1330)																	goto _hx_goto_27;
            																}
HXDLIN(1330)																tempIndex = tempRangeEnd;
HXDLIN(1330)																if ((endIndex < formatRange->end)) {
HXLINE(1330)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1330)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1330)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1330)																Float width = ((Float)0.0);
HXDLIN(1330)																{
HXLINE(1330)																	int _g = 0;
HXDLIN(1330)																	while((_g < positions->length)){
HXLINE(1330)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)																		_g = (_g + 1);
HXDLIN(1330)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1330)																widthValue = width;
HXDLIN(1330)																goto _hx_goto_27;
            															}
            														}
            														_hx_goto_27:;
HXDLIN(1330)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1330)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)															rangeIndex = (rangeIndex + 1);
HXDLIN(1330)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1330)											positionWidth = ( (Float)(0) );
            										}
            									}
            									_hx_goto_22:;
            								}
HXDLIN(1330)								placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1330)								{
HXLINE(1330)									if ((placeIndex <= formatRange->end)) {
HXLINE(1330)										::String text = _gthis->text;
HXDLIN(1330)										Float letterSpacing = ((Float)0.0);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1330)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)										bool positions1;
HXDLIN(1330)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1330)											positions1 = true;
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)										_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1330)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)										Float width = ((Float)0.0);
HXDLIN(1330)										{
HXLINE(1330)											int _g = 0;
HXDLIN(1330)											while((_g < positions->length)){
HXLINE(1330)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)												_g = (_g + 1);
HXDLIN(1330)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1330)										widthValue = width;
HXDLIN(1330)										bool _hx_tmp;
HXDLIN(1330)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1330)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1330)											_hx_tmp = true;
            										}
HXDLIN(1330)										if (_hx_tmp) {
HXLINE(1330)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1330)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1330)											layoutGroup->format = formatRange->format;
HXDLIN(1330)											layoutGroup->startIndex = textIndex;
HXDLIN(1330)											layoutGroup->endIndex = placeIndex;
            										}
HXDLIN(1330)										layoutGroup->positions = positions;
HXDLIN(1330)										int _hx_tmp1;
HXDLIN(1330)										if (firstLineOfParagraph) {
HXLINE(1330)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1330)											_hx_tmp1 = 0;
            										}
HXDLIN(1330)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1330)										layoutGroup->ascent = ascent;
HXDLIN(1330)										layoutGroup->descent = descent;
HXDLIN(1330)										layoutGroup->leading = leading;
HXDLIN(1330)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1330)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1330)										layoutGroup->width = widthValue;
HXDLIN(1330)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1330)										offsetX = (offsetX + widthValue);
HXDLIN(1330)										if ((placeIndex == formatRange->end)) {
HXLINE(1330)											layoutGroup = null();
HXDLIN(1330)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)												rangeIndex = (rangeIndex + 1);
HXDLIN(1330)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1330)											{
HXLINE(1330)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1330)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1330)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1330)													bool _hx_tmp;
HXDLIN(1330)													if (::hx::IsNotNull( font )) {
HXLINE(1330)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1330)														_hx_tmp = false;
            													}
HXDLIN(1330)													if (_hx_tmp) {
HXLINE(1330)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1330)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1330)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1330)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1330)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1330)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1330)												if ((heightValue > maxHeightValue)) {
HXLINE(1330)													maxHeightValue = heightValue;
            												}
HXDLIN(1330)												if ((ascent > maxAscent)) {
HXLINE(1330)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1330)										while(true){
HXLINE(1330)											int tempRangeEnd;
HXDLIN(1330)											if ((placeIndex < formatRange->end)) {
HXLINE(1330)												tempRangeEnd = placeIndex;
            											}
            											else {
HXLINE(1330)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1330)											if ((textIndex != tempRangeEnd)) {
HXLINE(1330)												::String text = _gthis->text;
HXDLIN(1330)												Float letterSpacing = ((Float)0.0);
HXDLIN(1330)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1330)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)												bool positions1;
HXDLIN(1330)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1330)													positions1 = true;
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1330)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)												Float width = ((Float)0.0);
HXDLIN(1330)												{
HXLINE(1330)													int _g = 0;
HXDLIN(1330)													while((_g < positions->length)){
HXLINE(1330)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)														_g = (_g + 1);
HXDLIN(1330)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1330)												widthValue = width;
HXDLIN(1330)												bool _hx_tmp;
HXDLIN(1330)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1330)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1330)													_hx_tmp = true;
            												}
HXDLIN(1330)												if (_hx_tmp) {
HXLINE(1330)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1330)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1330)													layoutGroup->format = formatRange->format;
HXDLIN(1330)													layoutGroup->startIndex = textIndex;
HXDLIN(1330)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1330)												layoutGroup->positions = positions;
HXDLIN(1330)												int _hx_tmp1;
HXDLIN(1330)												if (firstLineOfParagraph) {
HXLINE(1330)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1330)													_hx_tmp1 = 0;
            												}
HXDLIN(1330)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1330)												layoutGroup->ascent = ascent;
HXDLIN(1330)												layoutGroup->descent = descent;
HXDLIN(1330)												layoutGroup->leading = leading;
HXDLIN(1330)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1330)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1330)												layoutGroup->width = widthValue;
HXDLIN(1330)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1330)												offsetX = (offsetX + widthValue);
HXDLIN(1330)												textIndex = tempRangeEnd;
            											}
HXDLIN(1330)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1330)												layoutGroup = null();
            											}
HXDLIN(1330)											if ((tempRangeEnd == placeIndex)) {
HXLINE(1330)												goto _hx_goto_30;
            											}
HXDLIN(1330)											bool _hx_tmp;
HXDLIN(1330)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)												rangeIndex = (rangeIndex + 1);
HXDLIN(1330)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1330)												_hx_tmp = true;
            											}
            											else {
HXLINE(1330)												_hx_tmp = false;
            											}
HXDLIN(1330)											if (!(_hx_tmp)) {
HXLINE(1330)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1330)												goto _hx_goto_30;
            											}
HXDLIN(1330)											{
HXLINE(1330)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1330)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1330)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1330)													bool _hx_tmp;
HXDLIN(1330)													if (::hx::IsNotNull( font )) {
HXLINE(1330)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1330)														_hx_tmp = false;
            													}
HXDLIN(1330)													if (_hx_tmp) {
HXLINE(1330)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1330)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1330)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1330)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1330)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1330)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1330)												if ((heightValue > maxHeightValue)) {
HXLINE(1330)													maxHeightValue = heightValue;
            												}
HXDLIN(1330)												if ((ascent > maxAscent)) {
HXLINE(1330)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_30:;
            									}
HXDLIN(1330)									textIndex = placeIndex;
            								}
HXDLIN(1330)								{
HXLINE(1330)									{
HXLINE(1330)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1330)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1330)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1330)											bool _hx_tmp;
HXDLIN(1330)											if (::hx::IsNotNull( font )) {
HXLINE(1330)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1330)												_hx_tmp = false;
            											}
HXDLIN(1330)											if (_hx_tmp) {
HXLINE(1330)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1330)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1330)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1330)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1330)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1330)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1330)										if ((heightValue > maxHeightValue)) {
HXLINE(1330)											maxHeightValue = heightValue;
            										}
HXDLIN(1330)										if ((ascent > maxAscent)) {
HXLINE(1330)											maxAscent = ascent;
            										}
            									}
HXDLIN(1330)									int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1330)									while(true){
HXLINE(1330)										i1 = (i1 - 1);
HXDLIN(1330)										if (!((i1 > -1))) {
HXLINE(1330)											goto _hx_goto_32;
            										}
HXDLIN(1330)										 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1330)										if ((lg->lineIndex < lineIndex)) {
HXLINE(1330)											goto _hx_goto_32;
            										}
HXDLIN(1330)										if ((lg->lineIndex > lineIndex)) {
HXLINE(1330)											continue;
            										}
HXDLIN(1330)										lg->ascent = maxAscent;
HXDLIN(1330)										lg->height = ( (Float)(maxHeightValue) );
            									}
            									_hx_goto_32:;
HXDLIN(1330)									offsetY = (offsetY + maxHeightValue);
HXDLIN(1330)									maxAscent = ((Float)0.0);
HXDLIN(1330)									maxHeightValue = 0;
HXDLIN(1330)									lineIndex = (lineIndex + 1);
HXDLIN(1330)									offsetX = ( (Float)(0) );
HXDLIN(1330)									firstLineOfParagraph = false;
            								}
HXDLIN(1330)								if ((placeIndex >= breakIndex)) {
HXLINE(1330)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)									widthValue = ( (Float)(0) );
            								}
            								else {
HXLINE(1330)									if ((breakIndex <= formatRange->end)) {
HXLINE(1330)										::String text = _gthis->text;
HXDLIN(1330)										Float letterSpacing = ((Float)0.0);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1330)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)										bool positions1;
HXDLIN(1330)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1330)											positions1 = true;
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)										_gthis1->set_text(text.substring(placeIndex,breakIndex));
HXDLIN(1330)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)										Float width = ((Float)0.0);
HXDLIN(1330)										{
HXLINE(1330)											int _g = 0;
HXDLIN(1330)											while((_g < positions->length)){
HXLINE(1330)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)												_g = (_g + 1);
HXDLIN(1330)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1330)										widthValue = width;
            									}
            									else {
HXLINE(1330)										int tempIndex = placeIndex;
HXDLIN(1330)										int tempRangeEnd = formatRange->end;
HXDLIN(1330)										int countRanges = 0;
HXDLIN(1330)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1330)										widthValue = ( (Float)(0) );
HXDLIN(1330)										while(true){
HXLINE(1330)											if ((tempIndex != tempRangeEnd)) {
HXLINE(1330)												::String text = _gthis->text;
HXDLIN(1330)												Float letterSpacing = ((Float)0.0);
HXDLIN(1330)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1330)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)												bool _hx_tmp;
HXDLIN(1330)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)													_hx_tmp = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1330)													_hx_tmp = true;
            												}
HXDLIN(1330)												_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1330)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)												_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1330)												::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)												positions = positions->concat(tempPositions);
            											}
HXDLIN(1330)											if ((tempRangeEnd != breakIndex)) {
HXLINE(1330)												bool _hx_tmp;
HXDLIN(1330)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)													rangeIndex = (rangeIndex + 1);
HXDLIN(1330)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1330)													_hx_tmp = true;
            												}
            												else {
HXLINE(1330)													_hx_tmp = false;
            												}
HXDLIN(1330)												if (!(_hx_tmp)) {
HXLINE(1330)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1330)													goto _hx_goto_34;
            												}
HXDLIN(1330)												tempIndex = tempRangeEnd;
HXDLIN(1330)												if ((breakIndex < formatRange->end)) {
HXLINE(1330)													tempRangeEnd = breakIndex;
            												}
            												else {
HXLINE(1330)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1330)												countRanges = (countRanges + 1);
            											}
            											else {
HXLINE(1330)												Float width = ((Float)0.0);
HXDLIN(1330)												{
HXLINE(1330)													int _g = 0;
HXDLIN(1330)													while((_g < positions->length)){
HXLINE(1330)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)														_g = (_g + 1);
HXDLIN(1330)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1330)												widthValue = width;
HXDLIN(1330)												goto _hx_goto_34;
            											}
            										}
            										_hx_goto_34:;
HXDLIN(1330)										rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1330)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)											rangeIndex = (rangeIndex + 1);
HXDLIN(1330)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
            									}
            								}
HXDLIN(1330)								remainingPositions = positions;
HXDLIN(1330)								tempWidth = widthValue;
            							}
            							_hx_goto_20:;
            						}
HXDLIN(1330)						{
HXLINE(1330)							if ((breakIndex <= formatRange->end)) {
HXLINE(1330)								::String text = _gthis->text;
HXDLIN(1330)								Float letterSpacing = ((Float)0.0);
HXDLIN(1330)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1330)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1330)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1330)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)								bool positions1;
HXDLIN(1330)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1330)									positions1 = true;
            								}
HXDLIN(1330)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)								_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1330)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)								Float width = ((Float)0.0);
HXDLIN(1330)								{
HXLINE(1330)									int _g = 0;
HXDLIN(1330)									while((_g < positions->length)){
HXLINE(1330)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)										_g = (_g + 1);
HXDLIN(1330)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1330)								widthValue = width;
HXDLIN(1330)								bool _hx_tmp;
HXDLIN(1330)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1330)									_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            								}
            								else {
HXLINE(1330)									_hx_tmp = true;
            								}
HXDLIN(1330)								if (_hx_tmp) {
HXLINE(1330)									layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,breakIndex);
HXDLIN(1330)									_gthis->layoutGroups->push(layoutGroup);
            								}
            								else {
HXLINE(1330)									layoutGroup->format = formatRange->format;
HXDLIN(1330)									layoutGroup->startIndex = textIndex;
HXDLIN(1330)									layoutGroup->endIndex = breakIndex;
            								}
HXDLIN(1330)								layoutGroup->positions = positions;
HXDLIN(1330)								int _hx_tmp1;
HXDLIN(1330)								if (firstLineOfParagraph) {
HXLINE(1330)									_hx_tmp1 = indent;
            								}
            								else {
HXLINE(1330)									_hx_tmp1 = 0;
            								}
HXDLIN(1330)								layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1330)								layoutGroup->ascent = ascent;
HXDLIN(1330)								layoutGroup->descent = descent;
HXDLIN(1330)								layoutGroup->leading = leading;
HXDLIN(1330)								layoutGroup->lineIndex = lineIndex;
HXDLIN(1330)								layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1330)								layoutGroup->width = widthValue;
HXDLIN(1330)								layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1330)								offsetX = (offsetX + widthValue);
HXDLIN(1330)								if ((breakIndex == formatRange->end)) {
HXLINE(1330)									layoutGroup = null();
HXDLIN(1330)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)										rangeIndex = (rangeIndex + 1);
HXDLIN(1330)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
HXDLIN(1330)									{
HXLINE(1330)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1330)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1330)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1330)											bool _hx_tmp;
HXDLIN(1330)											if (::hx::IsNotNull( font )) {
HXLINE(1330)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1330)												_hx_tmp = false;
            											}
HXDLIN(1330)											if (_hx_tmp) {
HXLINE(1330)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1330)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1330)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1330)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1330)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1330)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1330)										if ((heightValue > maxHeightValue)) {
HXLINE(1330)											maxHeightValue = heightValue;
            										}
HXDLIN(1330)										if ((ascent > maxAscent)) {
HXLINE(1330)											maxAscent = ascent;
            										}
            									}
            								}
            							}
            							else {
HXLINE(1330)								while(true){
HXLINE(1330)									int tempRangeEnd;
HXDLIN(1330)									if ((breakIndex < formatRange->end)) {
HXLINE(1330)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1330)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1330)									if ((textIndex != tempRangeEnd)) {
HXLINE(1330)										::String text = _gthis->text;
HXDLIN(1330)										Float letterSpacing = ((Float)0.0);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1330)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1330)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1330)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1330)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1330)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1330)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1330)										bool positions1;
HXDLIN(1330)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1330)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1330)											positions1 = true;
            										}
HXDLIN(1330)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1330)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1330)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1330)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1330)										Float width = ((Float)0.0);
HXDLIN(1330)										{
HXLINE(1330)											int _g = 0;
HXDLIN(1330)											while((_g < positions->length)){
HXLINE(1330)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1330)												_g = (_g + 1);
HXDLIN(1330)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1330)										widthValue = width;
HXDLIN(1330)										bool _hx_tmp;
HXDLIN(1330)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1330)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1330)											_hx_tmp = true;
            										}
HXDLIN(1330)										if (_hx_tmp) {
HXLINE(1330)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1330)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1330)											layoutGroup->format = formatRange->format;
HXDLIN(1330)											layoutGroup->startIndex = textIndex;
HXDLIN(1330)											layoutGroup->endIndex = tempRangeEnd;
            										}
HXDLIN(1330)										layoutGroup->positions = positions;
HXDLIN(1330)										int _hx_tmp1;
HXDLIN(1330)										if (firstLineOfParagraph) {
HXLINE(1330)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1330)											_hx_tmp1 = 0;
            										}
HXDLIN(1330)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1330)										layoutGroup->ascent = ascent;
HXDLIN(1330)										layoutGroup->descent = descent;
HXDLIN(1330)										layoutGroup->leading = leading;
HXDLIN(1330)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1330)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1330)										layoutGroup->width = widthValue;
HXDLIN(1330)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1330)										offsetX = (offsetX + widthValue);
HXDLIN(1330)										textIndex = tempRangeEnd;
            									}
HXDLIN(1330)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1330)										layoutGroup = null();
            									}
HXDLIN(1330)									if ((tempRangeEnd == breakIndex)) {
HXLINE(1330)										goto _hx_goto_37;
            									}
HXDLIN(1330)									bool _hx_tmp;
HXDLIN(1330)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1330)										rangeIndex = (rangeIndex + 1);
HXDLIN(1330)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1330)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1330)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1330)										_hx_tmp = true;
            									}
            									else {
HXLINE(1330)										_hx_tmp = false;
            									}
HXDLIN(1330)									if (!(_hx_tmp)) {
HXLINE(1330)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1330)										goto _hx_goto_37;
            									}
HXDLIN(1330)									{
HXLINE(1330)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1330)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1330)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1330)											bool _hx_tmp;
HXDLIN(1330)											if (::hx::IsNotNull( font )) {
HXLINE(1330)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1330)												_hx_tmp = false;
            											}
HXDLIN(1330)											if (_hx_tmp) {
HXLINE(1330)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1330)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1330)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1330)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1330)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1330)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1330)										if ((heightValue > maxHeightValue)) {
HXLINE(1330)											maxHeightValue = heightValue;
            										}
HXDLIN(1330)										if ((ascent > maxAscent)) {
HXLINE(1330)											maxAscent = ascent;
            										}
            									}
            								}
            								_hx_goto_37:;
            							}
HXDLIN(1330)							textIndex = breakIndex;
            						}
            					}
HXLINE(1332)					layoutGroup = null();
            				}
            				else {
HXLINE(1334)					bool _hx_tmp;
HXDLIN(1334)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1334)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1334)						_hx_tmp = false;
            					}
HXDLIN(1334)					if (_hx_tmp) {
HXLINE(1337)						if ((layoutGroup->endIndex == spaceIndex)) {
HXLINE(1339)							 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1339)							int index = (layoutGroup->positions->length - 1);
HXDLIN(1339)							Float _hx_tmp;
HXDLIN(1339)							bool _hx_tmp1;
HXDLIN(1339)							if ((index >= 0)) {
HXLINE(1339)								_hx_tmp1 = (index < layoutGroup->positions->length);
            							}
            							else {
HXLINE(1339)								_hx_tmp1 = false;
            							}
HXDLIN(1339)							if (_hx_tmp1) {
HXLINE(1339)								_hx_tmp = layoutGroup->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1339)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN(1339)							layoutGroup1->width = (layoutGroup1->width - _hx_tmp);
            						}
HXLINE(1342)						layoutGroup = null();
            					}
            				}
HXLINE(1345)				{
HXLINE(1345)					{
HXLINE(1345)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1345)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1345)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1345)							bool _hx_tmp;
HXDLIN(1345)							if (::hx::IsNotNull( font )) {
HXLINE(1345)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1345)								_hx_tmp = false;
            							}
HXDLIN(1345)							if (_hx_tmp) {
HXLINE(1345)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1345)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1345)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1345)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1345)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1345)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1345)						if ((heightValue > maxHeightValue)) {
HXLINE(1345)							maxHeightValue = heightValue;
            						}
HXDLIN(1345)						if ((ascent > maxAscent)) {
HXLINE(1345)							maxAscent = ascent;
            						}
            					}
HXDLIN(1345)					int i = _gthis->layoutGroups->get_length();
HXDLIN(1345)					while(true){
HXLINE(1345)						i = (i - 1);
HXDLIN(1345)						if (!((i > -1))) {
HXLINE(1345)							goto _hx_goto_39;
            						}
HXDLIN(1345)						 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1345)						if ((lg->lineIndex < lineIndex)) {
HXLINE(1345)							goto _hx_goto_39;
            						}
HXDLIN(1345)						if ((lg->lineIndex > lineIndex)) {
HXLINE(1345)							continue;
            						}
HXDLIN(1345)						lg->ascent = maxAscent;
HXDLIN(1345)						lg->height = ( (Float)(maxHeightValue) );
            					}
            					_hx_goto_39:;
HXDLIN(1345)					offsetY = (offsetY + maxHeightValue);
HXDLIN(1345)					maxAscent = ((Float)0.0);
HXDLIN(1345)					maxHeightValue = 0;
HXDLIN(1345)					lineIndex = (lineIndex + 1);
HXDLIN(1345)					offsetX = ( (Float)(0) );
HXDLIN(1345)					firstLineOfParagraph = false;
            				}
HXLINE(1348)				if ((formatRange->end == breakIndex)) {
HXLINE(1350)					if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1350)						rangeIndex = (rangeIndex + 1);
HXDLIN(1350)						formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1350)						currentFormat->_hx___merge(formatRange->format);
HXDLIN(1350)						font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            					}
HXLINE(1351)					{
HXLINE(1351)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1351)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1351)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1351)							bool _hx_tmp;
HXDLIN(1351)							if (::hx::IsNotNull( font )) {
HXLINE(1351)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1351)								_hx_tmp = false;
            							}
HXDLIN(1351)							if (_hx_tmp) {
HXLINE(1351)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1351)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1351)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1351)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1351)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1351)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1351)						if ((heightValue > maxHeightValue)) {
HXLINE(1351)							maxHeightValue = heightValue;
            						}
HXDLIN(1351)						if ((ascent > maxAscent)) {
HXLINE(1351)							maxAscent = ascent;
            						}
            					}
            				}
HXLINE(1354)				textIndex = (breakIndex + 1);
HXLINE(1355)				previousBreakIndex = breakIndex;
HXLINE(1356)				breakCount = (breakCount + 1);
HXLINE(1357)				if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1357)					breakIndex = this->lineBreaks->get(breakCount);
            				}
            				else {
HXLINE(1357)					breakIndex = -1;
            				}
HXLINE(1359)				{
HXLINE(1359)					firstLineOfParagraph = true;
HXDLIN(1359)					if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1359)						align = currentFormat->align;
            					}
            					else {
HXLINE(1359)						align = 3;
            					}
HXDLIN(1359)					if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1359)						blockIndent = ( (int)(currentFormat->blockIndent) );
            					}
            					else {
HXLINE(1359)						blockIndent = 0;
            					}
HXDLIN(1359)					if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1359)						indent = ( (int)(currentFormat->indent) );
            					}
            					else {
HXLINE(1359)						indent = 0;
            					}
HXDLIN(1359)					if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1359)						leftMargin = ( (int)(currentFormat->leftMargin) );
            					}
            					else {
HXLINE(1359)						leftMargin = 0;
            					}
HXDLIN(1359)					if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1359)						rightMargin = ( (int)(currentFormat->rightMargin) );
            					}
            					else {
HXLINE(1359)						rightMargin = 0;
            					}
HXDLIN(1359)					bool _hx_tmp = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1359)					bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->tabStops );
            				}
            			}
            			else {
HXLINE(1361)				if ((spaceIndex > -1)) {
HXLINE(1365)					bool _hx_tmp;
HXDLIN(1365)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1365)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1365)						_hx_tmp = false;
            					}
HXDLIN(1365)					if (_hx_tmp) {
HXLINE(1367)						layoutGroup = null();
            					}
HXLINE(1370)					wrap = false;
HXLINE(1372)					while((textIndex < this->text.length)){
HXLINE(1376)						int endIndex = -1;
HXLINE(1378)						if ((spaceIndex == -1)) {
HXLINE(1380)							endIndex = breakIndex;
            						}
            						else {
HXLINE(1384)							endIndex = (spaceIndex + 1);
HXLINE(1386)							bool _hx_tmp;
HXDLIN(1386)							if ((breakIndex > -1)) {
HXLINE(1386)								_hx_tmp = (breakIndex < endIndex);
            							}
            							else {
HXLINE(1386)								_hx_tmp = false;
            							}
HXDLIN(1386)							if (_hx_tmp) {
HXLINE(1388)								endIndex = breakIndex;
            							}
            						}
HXLINE(1392)						if ((endIndex == -1)) {
HXLINE(1394)							endIndex = this->text.length;
            						}
HXLINE(1397)						if ((textIndex >= endIndex)) {
HXLINE(1397)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1397)							widthValue = ( (Float)(0) );
            						}
            						else {
HXLINE(1397)							if ((endIndex <= formatRange->end)) {
HXLINE(1397)								::String text = _gthis->text;
HXDLIN(1397)								Float letterSpacing = ((Float)0.0);
HXDLIN(1397)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1397)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1397)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1397)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1397)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1397)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1397)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1397)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1397)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1397)								bool positions1;
HXDLIN(1397)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1397)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1397)									positions1 = true;
            								}
HXDLIN(1397)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1397)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1397)								_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1397)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1397)								Float width = ((Float)0.0);
HXDLIN(1397)								{
HXLINE(1397)									int _g = 0;
HXDLIN(1397)									while((_g < positions->length)){
HXLINE(1397)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1397)										_g = (_g + 1);
HXDLIN(1397)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1397)								widthValue = width;
            							}
            							else {
HXLINE(1397)								int tempIndex = textIndex;
HXDLIN(1397)								int tempRangeEnd = formatRange->end;
HXDLIN(1397)								int countRanges = 0;
HXDLIN(1397)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1397)								widthValue = ( (Float)(0) );
HXDLIN(1397)								while(true){
HXLINE(1397)									if ((tempIndex != tempRangeEnd)) {
HXLINE(1397)										::String text = _gthis->text;
HXDLIN(1397)										Float letterSpacing = ((Float)0.0);
HXDLIN(1397)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1397)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1397)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1397)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1397)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1397)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1397)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1397)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1397)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1397)										bool _hx_tmp;
HXDLIN(1397)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1397)											_hx_tmp = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1397)											_hx_tmp = true;
            										}
HXDLIN(1397)										_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1397)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1397)										_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1397)										::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1397)										positions = positions->concat(tempPositions);
            									}
HXDLIN(1397)									if ((tempRangeEnd != endIndex)) {
HXLINE(1397)										bool _hx_tmp;
HXDLIN(1397)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1397)											rangeIndex = (rangeIndex + 1);
HXDLIN(1397)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1397)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1397)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1397)											_hx_tmp = true;
            										}
            										else {
HXLINE(1397)											_hx_tmp = false;
            										}
HXDLIN(1397)										if (!(_hx_tmp)) {
HXLINE(1397)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1397)											goto _hx_goto_42;
            										}
HXDLIN(1397)										tempIndex = tempRangeEnd;
HXDLIN(1397)										if ((endIndex < formatRange->end)) {
HXLINE(1397)											tempRangeEnd = endIndex;
            										}
            										else {
HXLINE(1397)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1397)										countRanges = (countRanges + 1);
            									}
            									else {
HXLINE(1397)										Float width = ((Float)0.0);
HXDLIN(1397)										{
HXLINE(1397)											int _g = 0;
HXDLIN(1397)											while((_g < positions->length)){
HXLINE(1397)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1397)												_g = (_g + 1);
HXDLIN(1397)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1397)										widthValue = width;
HXDLIN(1397)										goto _hx_goto_42;
            									}
            								}
            								_hx_goto_42:;
HXDLIN(1397)								rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1397)								if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1397)									rangeIndex = (rangeIndex + 1);
HXDLIN(1397)									formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1397)									currentFormat->_hx___merge(formatRange->format);
HXDLIN(1397)									font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            								}
            							}
            						}
HXLINE(1399)						if (::hx::IsEq( align,2 )) {
HXLINE(1401)							bool _hx_tmp;
HXDLIN(1401)							if ((positions->length > 0)) {
HXLINE(1401)								_hx_tmp = (textIndex == previousSpaceIndex);
            							}
            							else {
HXLINE(1401)								_hx_tmp = false;
            							}
HXDLIN(1401)							if (_hx_tmp) {
HXLINE(1404)								textIndex = (textIndex + 1);
HXLINE(1406)								Float spaceWidth = positions->shift().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1407)								widthValue = (widthValue - spaceWidth);
HXLINE(1408)								offsetX = (offsetX + spaceWidth);
            							}
HXLINE(1411)							bool _hx_tmp1;
HXDLIN(1411)							if ((positions->length > 0)) {
HXLINE(1411)								_hx_tmp1 = (endIndex == (spaceIndex + 1));
            							}
            							else {
HXLINE(1411)								_hx_tmp1 = false;
            							}
HXDLIN(1411)							if (_hx_tmp1) {
HXLINE(1414)								endIndex = (endIndex - 1);
HXLINE(1416)								Float spaceWidth = positions->pop().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1417)								widthValue = (widthValue - spaceWidth);
            							}
            						}
HXLINE(1421)						if (this->wordWrap) {
HXLINE(1423)							int _hx_tmp;
HXDLIN(1423)							if (firstLineOfParagraph) {
HXLINE(1423)								_hx_tmp = indent;
            							}
            							else {
HXLINE(1423)								_hx_tmp = 0;
            							}
HXDLIN(1423)							if (((offsetX + widthValue) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1425)								wrap = true;
HXLINE(1427)								bool _hx_tmp;
HXDLIN(1427)								if ((positions->length > 0)) {
HXLINE(1427)									_hx_tmp = (endIndex == (spaceIndex + 1));
            								}
            								else {
HXLINE(1427)									_hx_tmp = false;
            								}
HXDLIN(1427)								if (_hx_tmp) {
HXLINE(1432)									 ::openfl::text::_internal::GlyphPosition lastPosition = positions->__get((positions->length - 1)).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXLINE(1433)									Float spaceWidth = lastPosition->advance->x;
HXLINE(1435)									int _hx_tmp;
HXDLIN(1435)									if (firstLineOfParagraph) {
HXLINE(1435)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1435)										_hx_tmp = 0;
            									}
HXDLIN(1435)									if ((((offsetX + widthValue) - spaceWidth) <= (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1437)										wrap = false;
            									}
            								}
            							}
            						}
HXLINE(1443)						if (wrap) {
HXLINE(1445)							bool _hx_tmp;
HXDLIN(1445)							if (::hx::IsNotEq( align,2 )) {
HXLINE(1445)								if (::hx::IsNull( layoutGroup )) {
HXLINE(1445)									_hx_tmp = (this->layoutGroups->get_length() > 0);
            								}
            								else {
HXLINE(1445)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1445)								_hx_tmp = false;
            							}
HXDLIN(1445)							if (_hx_tmp) {
HXLINE(1447)								 ::openfl::text::_internal::TextLayoutGroup previous = layoutGroup;
HXLINE(1448)								if (::hx::IsNull( previous )) {
HXLINE(1450)									::Dynamic this1 = this->layoutGroups;
HXDLIN(1450)									previous = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            								}
HXLINE(1454)								 ::openfl::text::_internal::TextLayoutGroup previous1 = previous;
HXDLIN(1454)								int index = (previous->positions->length - 1);
HXDLIN(1454)								Float _hx_tmp;
HXDLIN(1454)								bool _hx_tmp1;
HXDLIN(1454)								if ((index >= 0)) {
HXLINE(1454)									_hx_tmp1 = (index < previous->positions->length);
            								}
            								else {
HXLINE(1454)									_hx_tmp1 = false;
            								}
HXDLIN(1454)								if (_hx_tmp1) {
HXLINE(1454)									_hx_tmp = previous->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1454)									_hx_tmp = ( (Float)(0) );
            								}
HXDLIN(1454)								previous1->width = (previous1->width - _hx_tmp);
HXLINE(1455)								previous->endIndex--;
            							}
HXLINE(1458)							int i = (this->layoutGroups->get_length() - 1);
HXLINE(1459)							int offsetCount = 0;
HXLINE(1461)							while(true){
HXLINE(1463)								layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1465)								bool _hx_tmp;
HXDLIN(1465)								if ((i > 0)) {
HXLINE(1465)									_hx_tmp = (layoutGroup->startIndex > previousSpaceIndex);
            								}
            								else {
HXLINE(1465)									_hx_tmp = false;
            								}
HXDLIN(1465)								if (_hx_tmp) {
HXLINE(1467)									offsetCount = (offsetCount + 1);
            								}
            								else {
HXLINE(1471)									goto _hx_goto_44;
            								}
HXLINE(1474)								i = (i - 1);
            							}
            							_hx_goto_44:;
HXLINE(1477)							if ((textIndex == (previousSpaceIndex + 1))) {
HXLINE(1479)								{
HXLINE(1479)									if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1479)										ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1479)										descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            									}
            									else {
HXLINE(1479)										bool _hx_tmp;
HXDLIN(1479)										if (::hx::IsNotNull( font )) {
HXLINE(1479)											_hx_tmp = (font->unitsPerEM != 0);
            										}
            										else {
HXLINE(1479)											_hx_tmp = false;
            										}
HXDLIN(1479)										if (_hx_tmp) {
HXLINE(1479)											ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1479)											descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            										}
            										else {
HXLINE(1479)											ascent = ( (Float)(currentFormat->size) );
HXDLIN(1479)											descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            										}
            									}
HXDLIN(1479)									leading = ( (int)(currentFormat->leading) );
HXDLIN(1479)									heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1479)									if ((heightValue > maxHeightValue)) {
HXLINE(1479)										maxHeightValue = heightValue;
            									}
HXDLIN(1479)									if ((ascent > maxAscent)) {
HXLINE(1479)										maxAscent = ascent;
            									}
            								}
HXDLIN(1479)								int i = _gthis->layoutGroups->get_length();
HXDLIN(1479)								while(true){
HXLINE(1479)									i = (i - 1);
HXDLIN(1479)									if (!((i > -1))) {
HXLINE(1479)										goto _hx_goto_45;
            									}
HXDLIN(1479)									 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1479)									if ((lg->lineIndex < lineIndex)) {
HXLINE(1479)										goto _hx_goto_45;
            									}
HXDLIN(1479)									if ((lg->lineIndex > lineIndex)) {
HXLINE(1479)										continue;
            									}
HXDLIN(1479)									lg->ascent = maxAscent;
HXDLIN(1479)									lg->height = ( (Float)(maxHeightValue) );
            								}
            								_hx_goto_45:;
HXDLIN(1479)								offsetY = (offsetY + maxHeightValue);
HXDLIN(1479)								maxAscent = ((Float)0.0);
HXDLIN(1479)								maxHeightValue = 0;
HXDLIN(1479)								lineIndex = (lineIndex + 1);
HXDLIN(1479)								offsetX = ( (Float)(0) );
HXDLIN(1479)								firstLineOfParagraph = false;
            							}
HXLINE(1482)							offsetX = ( (Float)(0) );
HXLINE(1484)							if ((offsetCount > 0)) {
HXLINE(1486)								::Dynamic this1 = this->layoutGroups;
HXDLIN(1486)								Float bumpX = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - offsetCount)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->offsetX;
HXLINE(1488)								{
HXLINE(1488)									int _g = (this->layoutGroups->get_length() - offsetCount);
HXDLIN(1488)									int _g1 = this->layoutGroups->get_length();
HXDLIN(1488)									while((_g < _g1)){
HXLINE(1488)										_g = (_g + 1);
HXDLIN(1488)										int i = (_g - 1);
HXLINE(1490)										layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1491)										 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1491)										layoutGroup1->offsetX = (layoutGroup1->offsetX - bumpX);
HXLINE(1492)										layoutGroup->offsetY = (offsetY + 2);
HXLINE(1493)										layoutGroup->lineIndex = lineIndex;
HXLINE(1494)										offsetX = (offsetX + layoutGroup->width);
            									}
            								}
            							}
HXLINE(1498)							{
HXLINE(1498)								bool _hx_tmp1;
HXDLIN(1498)								if ((_gthis->width >= 4)) {
HXLINE(1498)									_hx_tmp1 = _gthis->wordWrap;
            								}
            								else {
HXLINE(1498)									_hx_tmp1 = false;
            								}
HXDLIN(1498)								if (_hx_tmp1) {
HXLINE(1498)									::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1498)									int i;
HXDLIN(1498)									int bufferCount;
HXDLIN(1498)									int placeIndex;
HXDLIN(1498)									Float positionWidth;
HXDLIN(1498)									 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1498)									Float width = ((Float)0.0);
HXDLIN(1498)									{
HXLINE(1498)										int _g = 0;
HXDLIN(1498)										while((_g < remainingPositions->length)){
HXLINE(1498)											 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)											_g = (_g + 1);
HXDLIN(1498)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1498)									Float tempWidth = width;
HXDLIN(1498)									while(true){
HXLINE(1498)										bool _hx_tmp;
HXDLIN(1498)										if ((remainingPositions->length > 0)) {
HXLINE(1498)											int _hx_tmp1;
HXDLIN(1498)											if (firstLineOfParagraph) {
HXLINE(1498)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1498)												_hx_tmp1 = 0;
            											}
HXDLIN(1498)											_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1498)											_hx_tmp = false;
            										}
HXDLIN(1498)										if (!(_hx_tmp)) {
HXLINE(1498)											goto _hx_goto_48;
            										}
HXDLIN(1498)										bufferCount = 0;
HXDLIN(1498)										i = bufferCount;
HXDLIN(1498)										positionWidth = ((Float)0.0);
HXDLIN(1498)										while(true){
HXLINE(1498)											int _hx_tmp;
HXDLIN(1498)											if (firstLineOfParagraph) {
HXLINE(1498)												_hx_tmp = indent;
            											}
            											else {
HXLINE(1498)												_hx_tmp = 0;
            											}
HXDLIN(1498)											if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1498)												goto _hx_goto_49;
            											}
HXDLIN(1498)											currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)											if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1498)												i = (i + 1);
HXDLIN(1498)												bufferCount = (bufferCount + 1);
            											}
            											else {
HXLINE(1498)												positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1498)												i = (i + 1);
            											}
            										}
            										_hx_goto_49:;
HXDLIN(1498)										if ((i == bufferCount)) {
HXLINE(1498)											i = (bufferCount + 1);
            										}
            										else {
HXLINE(1498)											while(true){
HXLINE(1498)												bool _hx_tmp;
HXDLIN(1498)												if ((i > 1)) {
HXLINE(1498)													int _hx_tmp1;
HXDLIN(1498)													if (firstLineOfParagraph) {
HXLINE(1498)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1498)														_hx_tmp1 = 0;
            													}
HXDLIN(1498)													_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1498)													_hx_tmp = false;
            												}
HXDLIN(1498)												if (!(_hx_tmp)) {
HXLINE(1498)													goto _hx_goto_50;
            												}
HXDLIN(1498)												i = (i - 1);
HXDLIN(1498)												if (((i - bufferCount) > 0)) {
HXLINE(1498)													{
HXLINE(1498)														int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1498)														if ((textIndex >= endIndex)) {
HXLINE(1498)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1498)															if ((endIndex <= formatRange->end)) {
HXLINE(1498)																::String text = _gthis->text;
HXDLIN(1498)																Float letterSpacing = ((Float)0.0);
HXDLIN(1498)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1498)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)																bool positions1;
HXDLIN(1498)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1498)																	positions1 = true;
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1498)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)																Float width = ((Float)0.0);
HXDLIN(1498)																{
HXLINE(1498)																	int _g = 0;
HXDLIN(1498)																	while((_g < positions->length)){
HXLINE(1498)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																		_g = (_g + 1);
HXDLIN(1498)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1498)																widthValue = width;
            															}
            															else {
HXLINE(1498)																int tempIndex = textIndex;
HXDLIN(1498)																int tempRangeEnd = formatRange->end;
HXDLIN(1498)																int countRanges = 0;
HXDLIN(1498)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)																widthValue = ( (Float)(0) );
HXDLIN(1498)																while(true){
HXLINE(1498)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1498)																		::String text = _gthis->text;
HXDLIN(1498)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1498)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1498)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)																		bool _hx_tmp;
HXDLIN(1498)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1498)																			_hx_tmp = true;
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1498)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1498)																		::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1498)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1498)																		bool _hx_tmp;
HXDLIN(1498)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1498)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1498)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1498)																			_hx_tmp = false;
            																		}
HXDLIN(1498)																		if (!(_hx_tmp)) {
HXLINE(1498)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1498)																			goto _hx_goto_52;
            																		}
HXDLIN(1498)																		tempIndex = tempRangeEnd;
HXDLIN(1498)																		if ((endIndex < formatRange->end)) {
HXLINE(1498)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1498)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1498)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1498)																		Float width = ((Float)0.0);
HXDLIN(1498)																		{
HXLINE(1498)																			int _g = 0;
HXDLIN(1498)																			while((_g < positions->length)){
HXLINE(1498)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																				_g = (_g + 1);
HXDLIN(1498)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1498)																		widthValue = width;
HXDLIN(1498)																		goto _hx_goto_52;
            																	}
            																}
            																_hx_goto_52:;
HXDLIN(1498)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1498)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1498)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1498)													positionWidth = widthValue;
            												}
            												else {
HXLINE(1498)													i = 1;
HXDLIN(1498)													bufferCount = 0;
HXDLIN(1498)													{
HXLINE(1498)														int endIndex = (textIndex + 1);
HXDLIN(1498)														if ((textIndex >= endIndex)) {
HXLINE(1498)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1498)															if ((endIndex <= formatRange->end)) {
HXLINE(1498)																::String text = _gthis->text;
HXDLIN(1498)																Float letterSpacing = ((Float)0.0);
HXDLIN(1498)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1498)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)																bool positions1;
HXDLIN(1498)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1498)																	positions1 = true;
            																}
HXDLIN(1498)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1498)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)																Float width = ((Float)0.0);
HXDLIN(1498)																{
HXLINE(1498)																	int _g = 0;
HXDLIN(1498)																	while((_g < positions->length)){
HXLINE(1498)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																		_g = (_g + 1);
HXDLIN(1498)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1498)																widthValue = width;
            															}
            															else {
HXLINE(1498)																int tempIndex = textIndex;
HXDLIN(1498)																int tempRangeEnd = formatRange->end;
HXDLIN(1498)																int countRanges = 0;
HXDLIN(1498)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)																widthValue = ( (Float)(0) );
HXDLIN(1498)																while(true){
HXLINE(1498)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1498)																		::String text = _gthis->text;
HXDLIN(1498)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1498)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1498)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)																		bool _hx_tmp;
HXDLIN(1498)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1498)																			_hx_tmp = true;
            																		}
HXDLIN(1498)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1498)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1498)																		::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1498)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1498)																		bool _hx_tmp;
HXDLIN(1498)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1498)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1498)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1498)																			_hx_tmp = false;
            																		}
HXDLIN(1498)																		if (!(_hx_tmp)) {
HXLINE(1498)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1498)																			goto _hx_goto_55;
            																		}
HXDLIN(1498)																		tempIndex = tempRangeEnd;
HXDLIN(1498)																		if ((endIndex < formatRange->end)) {
HXLINE(1498)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1498)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1498)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1498)																		Float width = ((Float)0.0);
HXDLIN(1498)																		{
HXLINE(1498)																			int _g = 0;
HXDLIN(1498)																			while((_g < positions->length)){
HXLINE(1498)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																				_g = (_g + 1);
HXDLIN(1498)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1498)																		widthValue = width;
HXDLIN(1498)																		goto _hx_goto_55;
            																	}
            																}
            																_hx_goto_55:;
HXDLIN(1498)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1498)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1498)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1498)													positionWidth = ( (Float)(0) );
            												}
            											}
            											_hx_goto_50:;
            										}
HXDLIN(1498)										placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1498)										{
HXLINE(1498)											if ((placeIndex <= formatRange->end)) {
HXLINE(1498)												::String text = _gthis->text;
HXDLIN(1498)												Float letterSpacing = ((Float)0.0);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1498)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)												bool positions1;
HXDLIN(1498)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1498)													positions1 = true;
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)												_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1498)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)												Float width = ((Float)0.0);
HXDLIN(1498)												{
HXLINE(1498)													int _g = 0;
HXDLIN(1498)													while((_g < positions->length)){
HXLINE(1498)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)														_g = (_g + 1);
HXDLIN(1498)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1498)												widthValue = width;
HXDLIN(1498)												bool _hx_tmp;
HXDLIN(1498)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1498)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1498)													_hx_tmp = true;
            												}
HXDLIN(1498)												if (_hx_tmp) {
HXLINE(1498)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1498)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1498)													layoutGroup->format = formatRange->format;
HXDLIN(1498)													layoutGroup->startIndex = textIndex;
HXDLIN(1498)													layoutGroup->endIndex = placeIndex;
            												}
HXDLIN(1498)												layoutGroup->positions = positions;
HXDLIN(1498)												int _hx_tmp1;
HXDLIN(1498)												if (firstLineOfParagraph) {
HXLINE(1498)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1498)													_hx_tmp1 = 0;
            												}
HXDLIN(1498)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1498)												layoutGroup->ascent = ascent;
HXDLIN(1498)												layoutGroup->descent = descent;
HXDLIN(1498)												layoutGroup->leading = leading;
HXDLIN(1498)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1498)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1498)												layoutGroup->width = widthValue;
HXDLIN(1498)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1498)												offsetX = (offsetX + widthValue);
HXDLIN(1498)												if ((placeIndex == formatRange->end)) {
HXLINE(1498)													layoutGroup = null();
HXDLIN(1498)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)														rangeIndex = (rangeIndex + 1);
HXDLIN(1498)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1498)													{
HXLINE(1498)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1498)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1498)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1498)															bool _hx_tmp;
HXDLIN(1498)															if (::hx::IsNotNull( font )) {
HXLINE(1498)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1498)																_hx_tmp = false;
            															}
HXDLIN(1498)															if (_hx_tmp) {
HXLINE(1498)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1498)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1498)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1498)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1498)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1498)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1498)														if ((heightValue > maxHeightValue)) {
HXLINE(1498)															maxHeightValue = heightValue;
            														}
HXDLIN(1498)														if ((ascent > maxAscent)) {
HXLINE(1498)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1498)												while(true){
HXLINE(1498)													int tempRangeEnd;
HXDLIN(1498)													if ((placeIndex < formatRange->end)) {
HXLINE(1498)														tempRangeEnd = placeIndex;
            													}
            													else {
HXLINE(1498)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1498)													if ((textIndex != tempRangeEnd)) {
HXLINE(1498)														::String text = _gthis->text;
HXDLIN(1498)														Float letterSpacing = ((Float)0.0);
HXDLIN(1498)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1498)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)														bool positions1;
HXDLIN(1498)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1498)															positions1 = true;
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1498)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)														Float width = ((Float)0.0);
HXDLIN(1498)														{
HXLINE(1498)															int _g = 0;
HXDLIN(1498)															while((_g < positions->length)){
HXLINE(1498)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																_g = (_g + 1);
HXDLIN(1498)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1498)														widthValue = width;
HXDLIN(1498)														bool _hx_tmp;
HXDLIN(1498)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1498)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1498)															_hx_tmp = true;
            														}
HXDLIN(1498)														if (_hx_tmp) {
HXLINE(1498)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1498)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1498)															layoutGroup->format = formatRange->format;
HXDLIN(1498)															layoutGroup->startIndex = textIndex;
HXDLIN(1498)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1498)														layoutGroup->positions = positions;
HXDLIN(1498)														int _hx_tmp1;
HXDLIN(1498)														if (firstLineOfParagraph) {
HXLINE(1498)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1498)															_hx_tmp1 = 0;
            														}
HXDLIN(1498)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1498)														layoutGroup->ascent = ascent;
HXDLIN(1498)														layoutGroup->descent = descent;
HXDLIN(1498)														layoutGroup->leading = leading;
HXDLIN(1498)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1498)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1498)														layoutGroup->width = widthValue;
HXDLIN(1498)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1498)														offsetX = (offsetX + widthValue);
HXDLIN(1498)														textIndex = tempRangeEnd;
            													}
HXDLIN(1498)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1498)														layoutGroup = null();
            													}
HXDLIN(1498)													if ((tempRangeEnd == placeIndex)) {
HXLINE(1498)														goto _hx_goto_58;
            													}
HXDLIN(1498)													bool _hx_tmp;
HXDLIN(1498)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)														rangeIndex = (rangeIndex + 1);
HXDLIN(1498)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1498)														_hx_tmp = true;
            													}
            													else {
HXLINE(1498)														_hx_tmp = false;
            													}
HXDLIN(1498)													if (!(_hx_tmp)) {
HXLINE(1498)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1498)														goto _hx_goto_58;
            													}
HXDLIN(1498)													{
HXLINE(1498)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1498)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1498)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1498)															bool _hx_tmp;
HXDLIN(1498)															if (::hx::IsNotNull( font )) {
HXLINE(1498)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1498)																_hx_tmp = false;
            															}
HXDLIN(1498)															if (_hx_tmp) {
HXLINE(1498)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1498)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1498)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1498)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1498)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1498)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1498)														if ((heightValue > maxHeightValue)) {
HXLINE(1498)															maxHeightValue = heightValue;
            														}
HXDLIN(1498)														if ((ascent > maxAscent)) {
HXLINE(1498)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_58:;
            											}
HXDLIN(1498)											textIndex = placeIndex;
            										}
HXDLIN(1498)										{
HXLINE(1498)											{
HXLINE(1498)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1498)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1498)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1498)													bool _hx_tmp;
HXDLIN(1498)													if (::hx::IsNotNull( font )) {
HXLINE(1498)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1498)														_hx_tmp = false;
            													}
HXDLIN(1498)													if (_hx_tmp) {
HXLINE(1498)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1498)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1498)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1498)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1498)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1498)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1498)												if ((heightValue > maxHeightValue)) {
HXLINE(1498)													maxHeightValue = heightValue;
            												}
HXDLIN(1498)												if ((ascent > maxAscent)) {
HXLINE(1498)													maxAscent = ascent;
            												}
            											}
HXDLIN(1498)											int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1498)											while(true){
HXLINE(1498)												i1 = (i1 - 1);
HXDLIN(1498)												if (!((i1 > -1))) {
HXLINE(1498)													goto _hx_goto_60;
            												}
HXDLIN(1498)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1498)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1498)													goto _hx_goto_60;
            												}
HXDLIN(1498)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1498)													continue;
            												}
HXDLIN(1498)												lg->ascent = maxAscent;
HXDLIN(1498)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_60:;
HXDLIN(1498)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1498)											maxAscent = ((Float)0.0);
HXDLIN(1498)											maxHeightValue = 0;
HXDLIN(1498)											lineIndex = (lineIndex + 1);
HXDLIN(1498)											offsetX = ( (Float)(0) );
HXDLIN(1498)											firstLineOfParagraph = false;
            										}
HXDLIN(1498)										if ((placeIndex >= endIndex)) {
HXLINE(1498)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)											widthValue = ( (Float)(0) );
            										}
            										else {
HXLINE(1498)											if ((endIndex <= formatRange->end)) {
HXLINE(1498)												::String text = _gthis->text;
HXDLIN(1498)												Float letterSpacing = ((Float)0.0);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1498)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)												bool positions1;
HXDLIN(1498)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1498)													positions1 = true;
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)												_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1498)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)												Float width = ((Float)0.0);
HXDLIN(1498)												{
HXLINE(1498)													int _g = 0;
HXDLIN(1498)													while((_g < positions->length)){
HXLINE(1498)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)														_g = (_g + 1);
HXDLIN(1498)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1498)												widthValue = width;
            											}
            											else {
HXLINE(1498)												int tempIndex = placeIndex;
HXDLIN(1498)												int tempRangeEnd = formatRange->end;
HXDLIN(1498)												int countRanges = 0;
HXDLIN(1498)												positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1498)												widthValue = ( (Float)(0) );
HXDLIN(1498)												while(true){
HXLINE(1498)													if ((tempIndex != tempRangeEnd)) {
HXLINE(1498)														::String text = _gthis->text;
HXDLIN(1498)														Float letterSpacing = ((Float)0.0);
HXDLIN(1498)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1498)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)														bool _hx_tmp;
HXDLIN(1498)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)															_hx_tmp = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1498)															_hx_tmp = true;
            														}
HXDLIN(1498)														_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1498)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)														_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1498)														::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)														positions = positions->concat(tempPositions);
            													}
HXDLIN(1498)													if ((tempRangeEnd != endIndex)) {
HXLINE(1498)														bool _hx_tmp;
HXDLIN(1498)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)															rangeIndex = (rangeIndex + 1);
HXDLIN(1498)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1498)															_hx_tmp = true;
            														}
            														else {
HXLINE(1498)															_hx_tmp = false;
            														}
HXDLIN(1498)														if (!(_hx_tmp)) {
HXLINE(1498)															::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1498)															goto _hx_goto_62;
            														}
HXDLIN(1498)														tempIndex = tempRangeEnd;
HXDLIN(1498)														if ((endIndex < formatRange->end)) {
HXLINE(1498)															tempRangeEnd = endIndex;
            														}
            														else {
HXLINE(1498)															tempRangeEnd = formatRange->end;
            														}
HXDLIN(1498)														countRanges = (countRanges + 1);
            													}
            													else {
HXLINE(1498)														Float width = ((Float)0.0);
HXDLIN(1498)														{
HXLINE(1498)															int _g = 0;
HXDLIN(1498)															while((_g < positions->length)){
HXLINE(1498)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)																_g = (_g + 1);
HXDLIN(1498)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1498)														widthValue = width;
HXDLIN(1498)														goto _hx_goto_62;
            													}
            												}
            												_hx_goto_62:;
HXDLIN(1498)												rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1498)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)													rangeIndex = (rangeIndex + 1);
HXDLIN(1498)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
            											}
            										}
HXDLIN(1498)										remainingPositions = positions;
HXDLIN(1498)										tempWidth = widthValue;
            									}
            									_hx_goto_48:;
            								}
HXDLIN(1498)								{
HXLINE(1498)									if ((endIndex <= formatRange->end)) {
HXLINE(1498)										::String text = _gthis->text;
HXDLIN(1498)										Float letterSpacing = ((Float)0.0);
HXDLIN(1498)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1498)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1498)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1498)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)										bool positions1;
HXDLIN(1498)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1498)											positions1 = true;
            										}
HXDLIN(1498)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)										_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1498)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)										Float width = ((Float)0.0);
HXDLIN(1498)										{
HXLINE(1498)											int _g = 0;
HXDLIN(1498)											while((_g < positions->length)){
HXLINE(1498)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)												_g = (_g + 1);
HXDLIN(1498)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1498)										widthValue = width;
HXDLIN(1498)										bool _hx_tmp;
HXDLIN(1498)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1498)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1498)											_hx_tmp = true;
            										}
HXDLIN(1498)										if (_hx_tmp) {
HXLINE(1498)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1498)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1498)											layoutGroup->format = formatRange->format;
HXDLIN(1498)											layoutGroup->startIndex = textIndex;
HXDLIN(1498)											layoutGroup->endIndex = endIndex;
            										}
HXDLIN(1498)										layoutGroup->positions = positions;
HXDLIN(1498)										int _hx_tmp1;
HXDLIN(1498)										if (firstLineOfParagraph) {
HXLINE(1498)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1498)											_hx_tmp1 = 0;
            										}
HXDLIN(1498)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1498)										layoutGroup->ascent = ascent;
HXDLIN(1498)										layoutGroup->descent = descent;
HXDLIN(1498)										layoutGroup->leading = leading;
HXDLIN(1498)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1498)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1498)										layoutGroup->width = widthValue;
HXDLIN(1498)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1498)										offsetX = (offsetX + widthValue);
HXDLIN(1498)										if ((endIndex == formatRange->end)) {
HXLINE(1498)											layoutGroup = null();
HXDLIN(1498)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)												rangeIndex = (rangeIndex + 1);
HXDLIN(1498)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1498)											{
HXLINE(1498)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1498)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1498)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1498)													bool _hx_tmp;
HXDLIN(1498)													if (::hx::IsNotNull( font )) {
HXLINE(1498)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1498)														_hx_tmp = false;
            													}
HXDLIN(1498)													if (_hx_tmp) {
HXLINE(1498)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1498)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1498)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1498)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1498)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1498)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1498)												if ((heightValue > maxHeightValue)) {
HXLINE(1498)													maxHeightValue = heightValue;
            												}
HXDLIN(1498)												if ((ascent > maxAscent)) {
HXLINE(1498)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1498)										while(true){
HXLINE(1498)											int tempRangeEnd;
HXDLIN(1498)											if ((endIndex < formatRange->end)) {
HXLINE(1498)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1498)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1498)											if ((textIndex != tempRangeEnd)) {
HXLINE(1498)												::String text = _gthis->text;
HXDLIN(1498)												Float letterSpacing = ((Float)0.0);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1498)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1498)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1498)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1498)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1498)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1498)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1498)												bool positions1;
HXDLIN(1498)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1498)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1498)													positions1 = true;
            												}
HXDLIN(1498)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1498)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1498)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1498)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1498)												Float width = ((Float)0.0);
HXDLIN(1498)												{
HXLINE(1498)													int _g = 0;
HXDLIN(1498)													while((_g < positions->length)){
HXLINE(1498)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1498)														_g = (_g + 1);
HXDLIN(1498)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1498)												widthValue = width;
HXDLIN(1498)												bool _hx_tmp;
HXDLIN(1498)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1498)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1498)													_hx_tmp = true;
            												}
HXDLIN(1498)												if (_hx_tmp) {
HXLINE(1498)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1498)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1498)													layoutGroup->format = formatRange->format;
HXDLIN(1498)													layoutGroup->startIndex = textIndex;
HXDLIN(1498)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1498)												layoutGroup->positions = positions;
HXDLIN(1498)												int _hx_tmp1;
HXDLIN(1498)												if (firstLineOfParagraph) {
HXLINE(1498)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1498)													_hx_tmp1 = 0;
            												}
HXDLIN(1498)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1498)												layoutGroup->ascent = ascent;
HXDLIN(1498)												layoutGroup->descent = descent;
HXDLIN(1498)												layoutGroup->leading = leading;
HXDLIN(1498)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1498)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1498)												layoutGroup->width = widthValue;
HXDLIN(1498)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1498)												offsetX = (offsetX + widthValue);
HXDLIN(1498)												textIndex = tempRangeEnd;
            											}
HXDLIN(1498)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1498)												layoutGroup = null();
            											}
HXDLIN(1498)											if ((tempRangeEnd == endIndex)) {
HXLINE(1498)												goto _hx_goto_65;
            											}
HXDLIN(1498)											bool _hx_tmp;
HXDLIN(1498)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1498)												rangeIndex = (rangeIndex + 1);
HXDLIN(1498)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1498)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1498)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1498)												_hx_tmp = true;
            											}
            											else {
HXLINE(1498)												_hx_tmp = false;
            											}
HXDLIN(1498)											if (!(_hx_tmp)) {
HXLINE(1498)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1498)												goto _hx_goto_65;
            											}
HXDLIN(1498)											{
HXLINE(1498)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1498)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1498)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1498)													bool _hx_tmp;
HXDLIN(1498)													if (::hx::IsNotNull( font )) {
HXLINE(1498)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1498)														_hx_tmp = false;
            													}
HXDLIN(1498)													if (_hx_tmp) {
HXLINE(1498)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1498)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1498)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1498)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1498)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1498)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1498)												if ((heightValue > maxHeightValue)) {
HXLINE(1498)													maxHeightValue = heightValue;
            												}
HXDLIN(1498)												if ((ascent > maxAscent)) {
HXLINE(1498)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_65:;
            									}
HXDLIN(1498)									textIndex = endIndex;
            								}
            							}
HXLINE(1500)							wrap = false;
            						}
            						else {
HXLINE(1504)							bool _hx_tmp;
HXDLIN(1504)							if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1504)								_hx_tmp = (textIndex == spaceIndex);
            							}
            							else {
HXLINE(1504)								_hx_tmp = false;
            							}
HXDLIN(1504)							if (_hx_tmp) {
HXLINE(1507)								if (::hx::IsNotEq( align,2 )) {
HXLINE(1509)									layoutGroup->endIndex = spaceIndex;
HXLINE(1510)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1511)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1511)									layoutGroup1->width = (layoutGroup1->width + widthValue);
            								}
HXLINE(1514)								offsetX = (offsetX + widthValue);
HXLINE(1516)								textIndex = endIndex;
            							}
            							else {
HXLINE(1518)								bool _hx_tmp;
HXDLIN(1518)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1518)									_hx_tmp = ::hx::IsEq( align,2 );
            								}
            								else {
HXLINE(1518)									_hx_tmp = true;
            								}
HXDLIN(1518)								if (_hx_tmp) {
HXLINE(1520)									{
HXLINE(1520)										bool _hx_tmp;
HXDLIN(1520)										if ((_gthis->width >= 4)) {
HXLINE(1520)											_hx_tmp = _gthis->wordWrap;
            										}
            										else {
HXLINE(1520)											_hx_tmp = false;
            										}
HXDLIN(1520)										if (_hx_tmp) {
HXLINE(1520)											::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1520)											int i;
HXDLIN(1520)											int bufferCount;
HXDLIN(1520)											int placeIndex;
HXDLIN(1520)											Float positionWidth;
HXDLIN(1520)											 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1520)											Float width = ((Float)0.0);
HXDLIN(1520)											{
HXLINE(1520)												int _g = 0;
HXDLIN(1520)												while((_g < remainingPositions->length)){
HXLINE(1520)													 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)													_g = (_g + 1);
HXDLIN(1520)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1520)											Float tempWidth = width;
HXDLIN(1520)											while(true){
HXLINE(1520)												bool _hx_tmp;
HXDLIN(1520)												if ((remainingPositions->length > 0)) {
HXLINE(1520)													int _hx_tmp1;
HXDLIN(1520)													if (firstLineOfParagraph) {
HXLINE(1520)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1520)														_hx_tmp1 = 0;
            													}
HXDLIN(1520)													_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1520)													_hx_tmp = false;
            												}
HXDLIN(1520)												if (!(_hx_tmp)) {
HXLINE(1520)													goto _hx_goto_68;
            												}
HXDLIN(1520)												bufferCount = 0;
HXDLIN(1520)												i = bufferCount;
HXDLIN(1520)												positionWidth = ((Float)0.0);
HXDLIN(1520)												while(true){
HXLINE(1520)													int _hx_tmp;
HXDLIN(1520)													if (firstLineOfParagraph) {
HXLINE(1520)														_hx_tmp = indent;
            													}
            													else {
HXLINE(1520)														_hx_tmp = 0;
            													}
HXDLIN(1520)													if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1520)														goto _hx_goto_69;
            													}
HXDLIN(1520)													currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)													if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1520)														i = (i + 1);
HXDLIN(1520)														bufferCount = (bufferCount + 1);
            													}
            													else {
HXLINE(1520)														positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1520)														i = (i + 1);
            													}
            												}
            												_hx_goto_69:;
HXDLIN(1520)												if ((i == bufferCount)) {
HXLINE(1520)													i = (bufferCount + 1);
            												}
            												else {
HXLINE(1520)													while(true){
HXLINE(1520)														bool _hx_tmp;
HXDLIN(1520)														if ((i > 1)) {
HXLINE(1520)															int _hx_tmp1;
HXDLIN(1520)															if (firstLineOfParagraph) {
HXLINE(1520)																_hx_tmp1 = indent;
            															}
            															else {
HXLINE(1520)																_hx_tmp1 = 0;
            															}
HXDLIN(1520)															_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            														}
            														else {
HXLINE(1520)															_hx_tmp = false;
            														}
HXDLIN(1520)														if (!(_hx_tmp)) {
HXLINE(1520)															goto _hx_goto_70;
            														}
HXDLIN(1520)														i = (i - 1);
HXDLIN(1520)														if (((i - bufferCount) > 0)) {
HXLINE(1520)															{
HXLINE(1520)																int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1520)																if ((textIndex >= endIndex)) {
HXLINE(1520)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1520)																	if ((endIndex <= formatRange->end)) {
HXLINE(1520)																		::String text = _gthis->text;
HXDLIN(1520)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1520)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																		bool positions1;
HXDLIN(1520)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1520)																			positions1 = true;
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1520)																		positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																		Float width = ((Float)0.0);
HXDLIN(1520)																		{
HXLINE(1520)																			int _g = 0;
HXDLIN(1520)																			while((_g < positions->length)){
HXLINE(1520)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																				_g = (_g + 1);
HXDLIN(1520)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1520)																		widthValue = width;
            																	}
            																	else {
HXLINE(1520)																		int tempIndex = textIndex;
HXDLIN(1520)																		int tempRangeEnd = formatRange->end;
HXDLIN(1520)																		int countRanges = 0;
HXDLIN(1520)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)																		widthValue = ( (Float)(0) );
HXDLIN(1520)																		while(true){
HXLINE(1520)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1520)																				::String text = _gthis->text;
HXDLIN(1520)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1520)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																				bool _hx_tmp;
HXDLIN(1520)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1520)																					_hx_tmp = true;
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1520)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1520)																				::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1520)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1520)																				bool _hx_tmp;
HXDLIN(1520)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1520)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1520)																					_hx_tmp = false;
            																				}
HXDLIN(1520)																				if (!(_hx_tmp)) {
HXLINE(1520)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1520)																					goto _hx_goto_72;
            																				}
HXDLIN(1520)																				tempIndex = tempRangeEnd;
HXDLIN(1520)																				if ((endIndex < formatRange->end)) {
HXLINE(1520)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1520)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1520)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1520)																				Float width = ((Float)0.0);
HXDLIN(1520)																				{
HXLINE(1520)																					int _g = 0;
HXDLIN(1520)																					while((_g < positions->length)){
HXLINE(1520)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																						_g = (_g + 1);
HXDLIN(1520)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1520)																				widthValue = width;
HXDLIN(1520)																				goto _hx_goto_72;
            																			}
            																		}
            																		_hx_goto_72:;
HXDLIN(1520)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1520)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1520)															positionWidth = widthValue;
            														}
            														else {
HXLINE(1520)															i = 1;
HXDLIN(1520)															bufferCount = 0;
HXDLIN(1520)															{
HXLINE(1520)																int endIndex = (textIndex + 1);
HXDLIN(1520)																if ((textIndex >= endIndex)) {
HXLINE(1520)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1520)																	if ((endIndex <= formatRange->end)) {
HXLINE(1520)																		::String text = _gthis->text;
HXDLIN(1520)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1520)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																		bool positions1;
HXDLIN(1520)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1520)																			positions1 = true;
            																		}
HXDLIN(1520)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1520)																		positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																		Float width = ((Float)0.0);
HXDLIN(1520)																		{
HXLINE(1520)																			int _g = 0;
HXDLIN(1520)																			while((_g < positions->length)){
HXLINE(1520)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																				_g = (_g + 1);
HXDLIN(1520)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1520)																		widthValue = width;
            																	}
            																	else {
HXLINE(1520)																		int tempIndex = textIndex;
HXDLIN(1520)																		int tempRangeEnd = formatRange->end;
HXDLIN(1520)																		int countRanges = 0;
HXDLIN(1520)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)																		widthValue = ( (Float)(0) );
HXDLIN(1520)																		while(true){
HXLINE(1520)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1520)																				::String text = _gthis->text;
HXDLIN(1520)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1520)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																				bool _hx_tmp;
HXDLIN(1520)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1520)																					_hx_tmp = true;
            																				}
HXDLIN(1520)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1520)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1520)																				::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1520)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1520)																				bool _hx_tmp;
HXDLIN(1520)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1520)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1520)																					_hx_tmp = false;
            																				}
HXDLIN(1520)																				if (!(_hx_tmp)) {
HXLINE(1520)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1520)																					goto _hx_goto_75;
            																				}
HXDLIN(1520)																				tempIndex = tempRangeEnd;
HXDLIN(1520)																				if ((endIndex < formatRange->end)) {
HXLINE(1520)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1520)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1520)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1520)																				Float width = ((Float)0.0);
HXDLIN(1520)																				{
HXLINE(1520)																					int _g = 0;
HXDLIN(1520)																					while((_g < positions->length)){
HXLINE(1520)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																						_g = (_g + 1);
HXDLIN(1520)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1520)																				widthValue = width;
HXDLIN(1520)																				goto _hx_goto_75;
            																			}
            																		}
            																		_hx_goto_75:;
HXDLIN(1520)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1520)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1520)															positionWidth = ( (Float)(0) );
            														}
            													}
            													_hx_goto_70:;
            												}
HXDLIN(1520)												placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1520)												{
HXLINE(1520)													if ((placeIndex <= formatRange->end)) {
HXLINE(1520)														::String text = _gthis->text;
HXDLIN(1520)														Float letterSpacing = ((Float)0.0);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1520)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)														bool positions1;
HXDLIN(1520)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1520)															positions1 = true;
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)														_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1520)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)														Float width = ((Float)0.0);
HXDLIN(1520)														{
HXLINE(1520)															int _g = 0;
HXDLIN(1520)															while((_g < positions->length)){
HXLINE(1520)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																_g = (_g + 1);
HXDLIN(1520)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1520)														widthValue = width;
HXDLIN(1520)														bool _hx_tmp;
HXDLIN(1520)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1520)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1520)															_hx_tmp = true;
            														}
HXDLIN(1520)														if (_hx_tmp) {
HXLINE(1520)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1520)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1520)															layoutGroup->format = formatRange->format;
HXDLIN(1520)															layoutGroup->startIndex = textIndex;
HXDLIN(1520)															layoutGroup->endIndex = placeIndex;
            														}
HXDLIN(1520)														layoutGroup->positions = positions;
HXDLIN(1520)														int _hx_tmp1;
HXDLIN(1520)														if (firstLineOfParagraph) {
HXLINE(1520)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1520)															_hx_tmp1 = 0;
            														}
HXDLIN(1520)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1520)														layoutGroup->ascent = ascent;
HXDLIN(1520)														layoutGroup->descent = descent;
HXDLIN(1520)														layoutGroup->leading = leading;
HXDLIN(1520)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1520)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1520)														layoutGroup->width = widthValue;
HXDLIN(1520)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1520)														offsetX = (offsetX + widthValue);
HXDLIN(1520)														if ((placeIndex == formatRange->end)) {
HXLINE(1520)															layoutGroup = null();
HXDLIN(1520)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
HXDLIN(1520)															{
HXLINE(1520)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1520)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1520)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1520)																	bool _hx_tmp;
HXDLIN(1520)																	if (::hx::IsNotNull( font )) {
HXLINE(1520)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1520)																		_hx_tmp = false;
            																	}
HXDLIN(1520)																	if (_hx_tmp) {
HXLINE(1520)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1520)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1520)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1520)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1520)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1520)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1520)																if ((heightValue > maxHeightValue)) {
HXLINE(1520)																	maxHeightValue = heightValue;
            																}
HXDLIN(1520)																if ((ascent > maxAscent)) {
HXLINE(1520)																	maxAscent = ascent;
            																}
            															}
            														}
            													}
            													else {
HXLINE(1520)														while(true){
HXLINE(1520)															int tempRangeEnd;
HXDLIN(1520)															if ((placeIndex < formatRange->end)) {
HXLINE(1520)																tempRangeEnd = placeIndex;
            															}
            															else {
HXLINE(1520)																tempRangeEnd = formatRange->end;
            															}
HXDLIN(1520)															if ((textIndex != tempRangeEnd)) {
HXLINE(1520)																::String text = _gthis->text;
HXDLIN(1520)																Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1520)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																bool positions1;
HXDLIN(1520)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1520)																	positions1 = true;
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1520)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																Float width = ((Float)0.0);
HXDLIN(1520)																{
HXLINE(1520)																	int _g = 0;
HXDLIN(1520)																	while((_g < positions->length)){
HXLINE(1520)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																		_g = (_g + 1);
HXDLIN(1520)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1520)																widthValue = width;
HXDLIN(1520)																bool _hx_tmp;
HXDLIN(1520)																if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1520)																	_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            																}
            																else {
HXLINE(1520)																	_hx_tmp = true;
            																}
HXDLIN(1520)																if (_hx_tmp) {
HXLINE(1520)																	layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1520)																	_gthis->layoutGroups->push(layoutGroup);
            																}
            																else {
HXLINE(1520)																	layoutGroup->format = formatRange->format;
HXDLIN(1520)																	layoutGroup->startIndex = textIndex;
HXDLIN(1520)																	layoutGroup->endIndex = tempRangeEnd;
            																}
HXDLIN(1520)																layoutGroup->positions = positions;
HXDLIN(1520)																int _hx_tmp1;
HXDLIN(1520)																if (firstLineOfParagraph) {
HXLINE(1520)																	_hx_tmp1 = indent;
            																}
            																else {
HXLINE(1520)																	_hx_tmp1 = 0;
            																}
HXDLIN(1520)																layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1520)																layoutGroup->ascent = ascent;
HXDLIN(1520)																layoutGroup->descent = descent;
HXDLIN(1520)																layoutGroup->leading = leading;
HXDLIN(1520)																layoutGroup->lineIndex = lineIndex;
HXDLIN(1520)																layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1520)																layoutGroup->width = widthValue;
HXDLIN(1520)																layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1520)																offsetX = (offsetX + widthValue);
HXDLIN(1520)																textIndex = tempRangeEnd;
            															}
HXDLIN(1520)															if ((tempRangeEnd == formatRange->end)) {
HXLINE(1520)																layoutGroup = null();
            															}
HXDLIN(1520)															if ((tempRangeEnd == placeIndex)) {
HXLINE(1520)																goto _hx_goto_78;
            															}
HXDLIN(1520)															bool _hx_tmp;
HXDLIN(1520)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1520)																_hx_tmp = true;
            															}
            															else {
HXLINE(1520)																_hx_tmp = false;
            															}
HXDLIN(1520)															if (!(_hx_tmp)) {
HXLINE(1520)																::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1520)																goto _hx_goto_78;
            															}
HXDLIN(1520)															{
HXLINE(1520)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1520)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1520)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1520)																	bool _hx_tmp;
HXDLIN(1520)																	if (::hx::IsNotNull( font )) {
HXLINE(1520)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1520)																		_hx_tmp = false;
            																	}
HXDLIN(1520)																	if (_hx_tmp) {
HXLINE(1520)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1520)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1520)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1520)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1520)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1520)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1520)																if ((heightValue > maxHeightValue)) {
HXLINE(1520)																	maxHeightValue = heightValue;
            																}
HXDLIN(1520)																if ((ascent > maxAscent)) {
HXLINE(1520)																	maxAscent = ascent;
            																}
            															}
            														}
            														_hx_goto_78:;
            													}
HXDLIN(1520)													textIndex = placeIndex;
            												}
HXDLIN(1520)												{
HXLINE(1520)													{
HXLINE(1520)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1520)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1520)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1520)															bool _hx_tmp;
HXDLIN(1520)															if (::hx::IsNotNull( font )) {
HXLINE(1520)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1520)																_hx_tmp = false;
            															}
HXDLIN(1520)															if (_hx_tmp) {
HXLINE(1520)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1520)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1520)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1520)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1520)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1520)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1520)														if ((heightValue > maxHeightValue)) {
HXLINE(1520)															maxHeightValue = heightValue;
            														}
HXDLIN(1520)														if ((ascent > maxAscent)) {
HXLINE(1520)															maxAscent = ascent;
            														}
            													}
HXDLIN(1520)													int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1520)													while(true){
HXLINE(1520)														i1 = (i1 - 1);
HXDLIN(1520)														if (!((i1 > -1))) {
HXLINE(1520)															goto _hx_goto_80;
            														}
HXDLIN(1520)														 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1520)														if ((lg->lineIndex < lineIndex)) {
HXLINE(1520)															goto _hx_goto_80;
            														}
HXDLIN(1520)														if ((lg->lineIndex > lineIndex)) {
HXLINE(1520)															continue;
            														}
HXDLIN(1520)														lg->ascent = maxAscent;
HXDLIN(1520)														lg->height = ( (Float)(maxHeightValue) );
            													}
            													_hx_goto_80:;
HXDLIN(1520)													offsetY = (offsetY + maxHeightValue);
HXDLIN(1520)													maxAscent = ((Float)0.0);
HXDLIN(1520)													maxHeightValue = 0;
HXDLIN(1520)													lineIndex = (lineIndex + 1);
HXDLIN(1520)													offsetX = ( (Float)(0) );
HXDLIN(1520)													firstLineOfParagraph = false;
            												}
HXDLIN(1520)												if ((placeIndex >= endIndex)) {
HXLINE(1520)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1520)													if ((endIndex <= formatRange->end)) {
HXLINE(1520)														::String text = _gthis->text;
HXDLIN(1520)														Float letterSpacing = ((Float)0.0);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1520)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)														bool positions1;
HXDLIN(1520)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1520)															positions1 = true;
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)														_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1520)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)														Float width = ((Float)0.0);
HXDLIN(1520)														{
HXLINE(1520)															int _g = 0;
HXDLIN(1520)															while((_g < positions->length)){
HXLINE(1520)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																_g = (_g + 1);
HXDLIN(1520)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1520)														widthValue = width;
            													}
            													else {
HXLINE(1520)														int tempIndex = placeIndex;
HXDLIN(1520)														int tempRangeEnd = formatRange->end;
HXDLIN(1520)														int countRanges = 0;
HXDLIN(1520)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1520)														widthValue = ( (Float)(0) );
HXDLIN(1520)														while(true){
HXLINE(1520)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1520)																::String text = _gthis->text;
HXDLIN(1520)																Float letterSpacing = ((Float)0.0);
HXDLIN(1520)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1520)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)																bool _hx_tmp;
HXDLIN(1520)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1520)																	_hx_tmp = true;
            																}
HXDLIN(1520)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1520)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1520)																::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1520)															if ((tempRangeEnd != endIndex)) {
HXLINE(1520)																bool _hx_tmp;
HXDLIN(1520)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1520)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1520)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1520)																	_hx_tmp = false;
            																}
HXDLIN(1520)																if (!(_hx_tmp)) {
HXLINE(1520)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1520)																	goto _hx_goto_82;
            																}
HXDLIN(1520)																tempIndex = tempRangeEnd;
HXDLIN(1520)																if ((endIndex < formatRange->end)) {
HXLINE(1520)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1520)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1520)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1520)																Float width = ((Float)0.0);
HXDLIN(1520)																{
HXLINE(1520)																	int _g = 0;
HXDLIN(1520)																	while((_g < positions->length)){
HXLINE(1520)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																		_g = (_g + 1);
HXDLIN(1520)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1520)																widthValue = width;
HXDLIN(1520)																goto _hx_goto_82;
            															}
            														}
            														_hx_goto_82:;
HXDLIN(1520)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1520)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)															rangeIndex = (rangeIndex + 1);
HXDLIN(1520)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
HXDLIN(1520)												remainingPositions = positions;
HXDLIN(1520)												tempWidth = widthValue;
            											}
            											_hx_goto_68:;
            										}
HXDLIN(1520)										{
HXLINE(1520)											if ((endIndex <= formatRange->end)) {
HXLINE(1520)												::String text = _gthis->text;
HXDLIN(1520)												Float letterSpacing = ((Float)0.0);
HXDLIN(1520)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1520)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1520)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1520)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)												bool positions1;
HXDLIN(1520)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1520)													positions1 = true;
            												}
HXDLIN(1520)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1520)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)												Float width = ((Float)0.0);
HXDLIN(1520)												{
HXLINE(1520)													int _g = 0;
HXDLIN(1520)													while((_g < positions->length)){
HXLINE(1520)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)														_g = (_g + 1);
HXDLIN(1520)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1520)												widthValue = width;
HXDLIN(1520)												bool _hx_tmp;
HXDLIN(1520)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1520)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1520)													_hx_tmp = true;
            												}
HXDLIN(1520)												if (_hx_tmp) {
HXLINE(1520)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1520)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1520)													layoutGroup->format = formatRange->format;
HXDLIN(1520)													layoutGroup->startIndex = textIndex;
HXDLIN(1520)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1520)												layoutGroup->positions = positions;
HXDLIN(1520)												int _hx_tmp1;
HXDLIN(1520)												if (firstLineOfParagraph) {
HXLINE(1520)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1520)													_hx_tmp1 = 0;
            												}
HXDLIN(1520)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1520)												layoutGroup->ascent = ascent;
HXDLIN(1520)												layoutGroup->descent = descent;
HXDLIN(1520)												layoutGroup->leading = leading;
HXDLIN(1520)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1520)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1520)												layoutGroup->width = widthValue;
HXDLIN(1520)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1520)												offsetX = (offsetX + widthValue);
HXDLIN(1520)												if ((endIndex == formatRange->end)) {
HXLINE(1520)													layoutGroup = null();
HXDLIN(1520)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)														rangeIndex = (rangeIndex + 1);
HXDLIN(1520)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1520)													{
HXLINE(1520)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1520)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1520)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1520)															bool _hx_tmp;
HXDLIN(1520)															if (::hx::IsNotNull( font )) {
HXLINE(1520)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1520)																_hx_tmp = false;
            															}
HXDLIN(1520)															if (_hx_tmp) {
HXLINE(1520)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1520)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1520)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1520)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1520)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1520)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1520)														if ((heightValue > maxHeightValue)) {
HXLINE(1520)															maxHeightValue = heightValue;
            														}
HXDLIN(1520)														if ((ascent > maxAscent)) {
HXLINE(1520)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1520)												while(true){
HXLINE(1520)													int tempRangeEnd;
HXDLIN(1520)													if ((endIndex < formatRange->end)) {
HXLINE(1520)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1520)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1520)													if ((textIndex != tempRangeEnd)) {
HXLINE(1520)														::String text = _gthis->text;
HXDLIN(1520)														Float letterSpacing = ((Float)0.0);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1520)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1520)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1520)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1520)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1520)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1520)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1520)														bool positions1;
HXDLIN(1520)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1520)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1520)															positions1 = true;
            														}
HXDLIN(1520)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1520)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1520)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1520)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1520)														Float width = ((Float)0.0);
HXDLIN(1520)														{
HXLINE(1520)															int _g = 0;
HXDLIN(1520)															while((_g < positions->length)){
HXLINE(1520)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1520)																_g = (_g + 1);
HXDLIN(1520)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1520)														widthValue = width;
HXDLIN(1520)														bool _hx_tmp;
HXDLIN(1520)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1520)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1520)															_hx_tmp = true;
            														}
HXDLIN(1520)														if (_hx_tmp) {
HXLINE(1520)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1520)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1520)															layoutGroup->format = formatRange->format;
HXDLIN(1520)															layoutGroup->startIndex = textIndex;
HXDLIN(1520)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1520)														layoutGroup->positions = positions;
HXDLIN(1520)														int _hx_tmp1;
HXDLIN(1520)														if (firstLineOfParagraph) {
HXLINE(1520)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1520)															_hx_tmp1 = 0;
            														}
HXDLIN(1520)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1520)														layoutGroup->ascent = ascent;
HXDLIN(1520)														layoutGroup->descent = descent;
HXDLIN(1520)														layoutGroup->leading = leading;
HXDLIN(1520)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1520)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1520)														layoutGroup->width = widthValue;
HXDLIN(1520)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1520)														offsetX = (offsetX + widthValue);
HXDLIN(1520)														textIndex = tempRangeEnd;
            													}
HXDLIN(1520)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1520)														layoutGroup = null();
            													}
HXDLIN(1520)													if ((tempRangeEnd == endIndex)) {
HXLINE(1520)														goto _hx_goto_85;
            													}
HXDLIN(1520)													bool _hx_tmp;
HXDLIN(1520)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1520)														rangeIndex = (rangeIndex + 1);
HXDLIN(1520)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1520)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1520)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1520)														_hx_tmp = true;
            													}
            													else {
HXLINE(1520)														_hx_tmp = false;
            													}
HXDLIN(1520)													if (!(_hx_tmp)) {
HXLINE(1520)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1520)														goto _hx_goto_85;
            													}
HXDLIN(1520)													{
HXLINE(1520)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1520)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1520)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1520)															bool _hx_tmp;
HXDLIN(1520)															if (::hx::IsNotNull( font )) {
HXLINE(1520)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1520)																_hx_tmp = false;
            															}
HXDLIN(1520)															if (_hx_tmp) {
HXLINE(1520)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1520)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1520)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1520)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1520)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1520)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1520)														if ((heightValue > maxHeightValue)) {
HXLINE(1520)															maxHeightValue = heightValue;
            														}
HXDLIN(1520)														if ((ascent > maxAscent)) {
HXLINE(1520)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_85:;
            											}
HXDLIN(1520)											textIndex = endIndex;
            										}
            									}
HXLINE(1521)									if ((endIndex == this->text.length)) {
HXLINE(1521)										{
HXLINE(1521)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1521)												bool _hx_tmp;
HXDLIN(1521)												if (::hx::IsNotNull( font )) {
HXLINE(1521)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1521)													_hx_tmp = false;
            												}
HXDLIN(1521)												if (_hx_tmp) {
HXLINE(1521)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1521)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1521)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)											if ((heightValue > maxHeightValue)) {
HXLINE(1521)												maxHeightValue = heightValue;
            											}
HXDLIN(1521)											if ((ascent > maxAscent)) {
HXLINE(1521)												maxAscent = ascent;
            											}
            										}
HXDLIN(1521)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1521)										while(true){
HXLINE(1521)											i = (i - 1);
HXDLIN(1521)											if (!((i > -1))) {
HXLINE(1521)												goto _hx_goto_87;
            											}
HXDLIN(1521)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1521)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1521)												goto _hx_goto_87;
            											}
HXDLIN(1521)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1521)												continue;
            											}
HXDLIN(1521)											lg->ascent = maxAscent;
HXDLIN(1521)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_87:;
HXDLIN(1521)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1521)										maxAscent = ((Float)0.0);
HXDLIN(1521)										maxHeightValue = 0;
HXDLIN(1521)										lineIndex = (lineIndex + 1);
HXDLIN(1521)										offsetX = ( (Float)(0) );
HXDLIN(1521)										firstLineOfParagraph = false;
            									}
            								}
            								else {
HXLINE(1525)									int tempRangeEnd;
HXDLIN(1525)									if ((endIndex < formatRange->end)) {
HXLINE(1525)										tempRangeEnd = endIndex;
            									}
            									else {
HXLINE(1525)										tempRangeEnd = formatRange->end;
            									}
HXLINE(1527)									if ((tempRangeEnd < endIndex)) {
HXLINE(1529)										::String text = this->text;
HXDLIN(1529)										Float letterSpacing = ((Float)0.0);
HXDLIN(1529)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1529)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1529)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1529)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1529)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1529)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1529)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1529)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1529)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1529)										bool positions1;
HXDLIN(1529)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1529)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1529)											positions1 = true;
            										}
HXDLIN(1529)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1529)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1529)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1529)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXLINE(1530)										Float width = ((Float)0.0);
HXDLIN(1530)										{
HXLINE(1530)											int _g = 0;
HXDLIN(1530)											while((_g < positions->length)){
HXLINE(1530)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1530)												_g = (_g + 1);
HXDLIN(1530)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1530)										widthValue = width;
            									}
HXLINE(1533)									layoutGroup->endIndex = tempRangeEnd;
HXLINE(1534)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1535)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1535)									layoutGroup1->width = (layoutGroup1->width + widthValue);
HXLINE(1537)									offsetX = (offsetX + widthValue);
HXLINE(1539)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1541)										layoutGroup = null();
HXLINE(1542)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)											rangeIndex = (rangeIndex + 1);
HXDLIN(1542)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXLINE(1543)										{
HXLINE(1543)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1543)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1543)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1543)												bool _hx_tmp;
HXDLIN(1543)												if (::hx::IsNotNull( font )) {
HXLINE(1543)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1543)													_hx_tmp = false;
            												}
HXDLIN(1543)												if (_hx_tmp) {
HXLINE(1543)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1543)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1543)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1543)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1543)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1543)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1543)											if ((heightValue > maxHeightValue)) {
HXLINE(1543)												maxHeightValue = heightValue;
            											}
HXDLIN(1543)											if ((ascent > maxAscent)) {
HXLINE(1543)												maxAscent = ascent;
            											}
            										}
HXLINE(1545)										textIndex = tempRangeEnd;
HXLINE(1547)										if ((tempRangeEnd != endIndex)) {
HXLINE(1549)											if ((endIndex <= formatRange->end)) {
HXLINE(1549)												::String text = _gthis->text;
HXDLIN(1549)												Float letterSpacing = ((Float)0.0);
HXDLIN(1549)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1549)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1549)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1549)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1549)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1549)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1549)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1549)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1549)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1549)												bool positions1;
HXDLIN(1549)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1549)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1549)													positions1 = true;
            												}
HXDLIN(1549)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1549)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1549)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1549)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1549)												Float width = ((Float)0.0);
HXDLIN(1549)												{
HXLINE(1549)													int _g = 0;
HXDLIN(1549)													while((_g < positions->length)){
HXLINE(1549)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1549)														_g = (_g + 1);
HXDLIN(1549)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1549)												widthValue = width;
HXDLIN(1549)												bool _hx_tmp;
HXDLIN(1549)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1549)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1549)													_hx_tmp = true;
            												}
HXDLIN(1549)												if (_hx_tmp) {
HXLINE(1549)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1549)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1549)													layoutGroup->format = formatRange->format;
HXDLIN(1549)													layoutGroup->startIndex = textIndex;
HXDLIN(1549)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1549)												layoutGroup->positions = positions;
HXDLIN(1549)												int _hx_tmp1;
HXDLIN(1549)												if (firstLineOfParagraph) {
HXLINE(1549)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1549)													_hx_tmp1 = 0;
            												}
HXDLIN(1549)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1549)												layoutGroup->ascent = ascent;
HXDLIN(1549)												layoutGroup->descent = descent;
HXDLIN(1549)												layoutGroup->leading = leading;
HXDLIN(1549)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1549)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1549)												layoutGroup->width = widthValue;
HXDLIN(1549)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1549)												offsetX = (offsetX + widthValue);
HXDLIN(1549)												if ((endIndex == formatRange->end)) {
HXLINE(1549)													layoutGroup = null();
HXDLIN(1549)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1549)														rangeIndex = (rangeIndex + 1);
HXDLIN(1549)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1549)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1549)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1549)													{
HXLINE(1549)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1549)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1549)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1549)															bool _hx_tmp;
HXDLIN(1549)															if (::hx::IsNotNull( font )) {
HXLINE(1549)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1549)																_hx_tmp = false;
            															}
HXDLIN(1549)															if (_hx_tmp) {
HXLINE(1549)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1549)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1549)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1549)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1549)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1549)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1549)														if ((heightValue > maxHeightValue)) {
HXLINE(1549)															maxHeightValue = heightValue;
            														}
HXDLIN(1549)														if ((ascent > maxAscent)) {
HXLINE(1549)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1549)												while(true){
HXLINE(1549)													int tempRangeEnd;
HXDLIN(1549)													if ((endIndex < formatRange->end)) {
HXLINE(1549)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1549)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1549)													if ((textIndex != tempRangeEnd)) {
HXLINE(1549)														::String text = _gthis->text;
HXDLIN(1549)														Float letterSpacing = ((Float)0.0);
HXDLIN(1549)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1549)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1549)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1549)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1549)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1549)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1549)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1549)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1549)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1549)														bool positions1;
HXDLIN(1549)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1549)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1549)															positions1 = true;
            														}
HXDLIN(1549)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1549)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1549)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1549)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1549)														Float width = ((Float)0.0);
HXDLIN(1549)														{
HXLINE(1549)															int _g = 0;
HXDLIN(1549)															while((_g < positions->length)){
HXLINE(1549)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1549)																_g = (_g + 1);
HXDLIN(1549)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1549)														widthValue = width;
HXDLIN(1549)														bool _hx_tmp;
HXDLIN(1549)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1549)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1549)															_hx_tmp = true;
            														}
HXDLIN(1549)														if (_hx_tmp) {
HXLINE(1549)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1549)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1549)															layoutGroup->format = formatRange->format;
HXDLIN(1549)															layoutGroup->startIndex = textIndex;
HXDLIN(1549)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1549)														layoutGroup->positions = positions;
HXDLIN(1549)														int _hx_tmp1;
HXDLIN(1549)														if (firstLineOfParagraph) {
HXLINE(1549)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1549)															_hx_tmp1 = 0;
            														}
HXDLIN(1549)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1549)														layoutGroup->ascent = ascent;
HXDLIN(1549)														layoutGroup->descent = descent;
HXDLIN(1549)														layoutGroup->leading = leading;
HXDLIN(1549)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1549)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1549)														layoutGroup->width = widthValue;
HXDLIN(1549)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1549)														offsetX = (offsetX + widthValue);
HXDLIN(1549)														textIndex = tempRangeEnd;
            													}
HXDLIN(1549)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1549)														layoutGroup = null();
            													}
HXDLIN(1549)													if ((tempRangeEnd == endIndex)) {
HXLINE(1549)														goto _hx_goto_90;
            													}
HXDLIN(1549)													bool _hx_tmp;
HXDLIN(1549)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1549)														rangeIndex = (rangeIndex + 1);
HXDLIN(1549)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1549)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1549)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1549)														_hx_tmp = true;
            													}
            													else {
HXLINE(1549)														_hx_tmp = false;
            													}
HXDLIN(1549)													if (!(_hx_tmp)) {
HXLINE(1549)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1549)														goto _hx_goto_90;
            													}
HXDLIN(1549)													{
HXLINE(1549)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1549)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1549)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1549)															bool _hx_tmp;
HXDLIN(1549)															if (::hx::IsNotNull( font )) {
HXLINE(1549)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1549)																_hx_tmp = false;
            															}
HXDLIN(1549)															if (_hx_tmp) {
HXLINE(1549)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1549)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1549)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1549)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1549)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1549)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1549)														if ((heightValue > maxHeightValue)) {
HXLINE(1549)															maxHeightValue = heightValue;
            														}
HXDLIN(1549)														if ((ascent > maxAscent)) {
HXLINE(1549)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_90:;
            											}
HXDLIN(1549)											textIndex = endIndex;
            										}
            									}
HXLINE(1555)									if ((breakIndex == endIndex)) {
HXLINE(1555)										endIndex = (endIndex + 1);
            									}
HXLINE(1557)									textIndex = endIndex;
HXLINE(1559)									if ((endIndex == this->text.length)) {
HXLINE(1559)										{
HXLINE(1559)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1559)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1559)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1559)												bool _hx_tmp;
HXDLIN(1559)												if (::hx::IsNotNull( font )) {
HXLINE(1559)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1559)													_hx_tmp = false;
            												}
HXDLIN(1559)												if (_hx_tmp) {
HXLINE(1559)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1559)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1559)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1559)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1559)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1559)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1559)											if ((heightValue > maxHeightValue)) {
HXLINE(1559)												maxHeightValue = heightValue;
            											}
HXDLIN(1559)											if ((ascent > maxAscent)) {
HXLINE(1559)												maxAscent = ascent;
            											}
            										}
HXDLIN(1559)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1559)										while(true){
HXLINE(1559)											i = (i - 1);
HXDLIN(1559)											if (!((i > -1))) {
HXLINE(1559)												goto _hx_goto_92;
            											}
HXDLIN(1559)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1559)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1559)												goto _hx_goto_92;
            											}
HXDLIN(1559)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1559)												continue;
            											}
HXDLIN(1559)											lg->ascent = maxAscent;
HXDLIN(1559)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_92:;
HXDLIN(1559)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1559)										maxAscent = ((Float)0.0);
HXDLIN(1559)										maxHeightValue = 0;
HXDLIN(1559)										lineIndex = (lineIndex + 1);
HXDLIN(1559)										offsetX = ( (Float)(0) );
HXDLIN(1559)										firstLineOfParagraph = false;
            									}
            								}
            							}
            						}
HXLINE(1563)						int nextSpaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),textIndex);
HXLINE(1568)						if ((breakIndex == previousSpaceIndex)) {
HXLINE(1570)							layoutGroup->endIndex = breakIndex;
HXLINE(1572)							if ((((breakIndex - layoutGroup->startIndex) - layoutGroup->positions->length) < 0)) {
HXLINE(1575)								layoutGroup->positions->push(null());
            							}
HXLINE(1578)							textIndex = (breakIndex + 1);
            						}
HXLINE(1581)						previousSpaceIndex = spaceIndex;
HXLINE(1582)						spaceIndex = nextSpaceIndex;
HXLINE(1584)						bool _hx_tmp;
HXDLIN(1584)						bool _hx_tmp1;
HXDLIN(1584)						bool _hx_tmp2;
HXDLIN(1584)						if ((breakIndex > -1)) {
HXLINE(1584)							_hx_tmp2 = (breakIndex <= textIndex);
            						}
            						else {
HXLINE(1584)							_hx_tmp2 = false;
            						}
HXDLIN(1584)						if (_hx_tmp2) {
HXLINE(1584)							if ((spaceIndex <= breakIndex)) {
HXLINE(1584)								_hx_tmp1 = (spaceIndex == -1);
            							}
            							else {
HXLINE(1584)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE(1584)							_hx_tmp1 = false;
            						}
HXDLIN(1584)						if (!(_hx_tmp1)) {
HXLINE(1584)							_hx_tmp = (textIndex > this->text.length);
            						}
            						else {
HXLINE(1584)							_hx_tmp = true;
            						}
HXDLIN(1584)						if (_hx_tmp) {
HXLINE(1587)							goto _hx_goto_40;
            						}
            					}
            					_hx_goto_40:;
            				}
            				else {
HXLINE(1593)					if ((textIndex < this->text.length)) {
HXLINE(1597)						{
HXLINE(1597)							int endIndex = this->text.length;
HXDLIN(1597)							if ((textIndex >= endIndex)) {
HXLINE(1597)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1597)								widthValue = ( (Float)(0) );
            							}
            							else {
HXLINE(1597)								if ((endIndex <= formatRange->end)) {
HXLINE(1597)									::String text = _gthis->text;
HXDLIN(1597)									Float letterSpacing = ((Float)0.0);
HXDLIN(1597)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1597)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1597)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1597)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1597)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1597)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1597)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1597)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1597)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1597)									bool positions1;
HXDLIN(1597)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1597)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1597)										positions1 = true;
            									}
HXDLIN(1597)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1597)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1597)									_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1597)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1597)									Float width = ((Float)0.0);
HXDLIN(1597)									{
HXLINE(1597)										int _g = 0;
HXDLIN(1597)										while((_g < positions->length)){
HXLINE(1597)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1597)											_g = (_g + 1);
HXDLIN(1597)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1597)									widthValue = width;
            								}
            								else {
HXLINE(1597)									int tempIndex = textIndex;
HXDLIN(1597)									int tempRangeEnd = formatRange->end;
HXDLIN(1597)									int countRanges = 0;
HXDLIN(1597)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1597)									widthValue = ( (Float)(0) );
HXDLIN(1597)									while(true){
HXLINE(1597)										if ((tempIndex != tempRangeEnd)) {
HXLINE(1597)											::String text = _gthis->text;
HXDLIN(1597)											Float letterSpacing = ((Float)0.0);
HXDLIN(1597)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1597)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1597)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1597)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1597)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1597)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1597)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1597)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1597)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1597)											bool _hx_tmp;
HXDLIN(1597)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1597)												_hx_tmp = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1597)												_hx_tmp = true;
            											}
HXDLIN(1597)											_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1597)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1597)											_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1597)											::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1597)											positions = positions->concat(tempPositions);
            										}
HXDLIN(1597)										if ((tempRangeEnd != endIndex)) {
HXLINE(1597)											bool _hx_tmp;
HXDLIN(1597)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1597)												rangeIndex = (rangeIndex + 1);
HXDLIN(1597)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1597)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1597)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1597)												_hx_tmp = true;
            											}
            											else {
HXLINE(1597)												_hx_tmp = false;
            											}
HXDLIN(1597)											if (!(_hx_tmp)) {
HXLINE(1597)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1597)												goto _hx_goto_94;
            											}
HXDLIN(1597)											tempIndex = tempRangeEnd;
HXDLIN(1597)											if ((endIndex < formatRange->end)) {
HXLINE(1597)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1597)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1597)											countRanges = (countRanges + 1);
            										}
            										else {
HXLINE(1597)											Float width = ((Float)0.0);
HXDLIN(1597)											{
HXLINE(1597)												int _g = 0;
HXDLIN(1597)												while((_g < positions->length)){
HXLINE(1597)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1597)													_g = (_g + 1);
HXDLIN(1597)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1597)											widthValue = width;
HXDLIN(1597)											goto _hx_goto_94;
            										}
            									}
            									_hx_goto_94:;
HXDLIN(1597)									rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1597)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1597)										rangeIndex = (rangeIndex + 1);
HXDLIN(1597)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1597)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1597)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
            								}
            							}
            						}
HXLINE(1598)						{
HXLINE(1598)							int endIndex1 = this->text.length;
HXDLIN(1598)							bool _hx_tmp;
HXDLIN(1598)							if ((_gthis->width >= 4)) {
HXLINE(1598)								_hx_tmp = _gthis->wordWrap;
            							}
            							else {
HXLINE(1598)								_hx_tmp = false;
            							}
HXDLIN(1598)							if (_hx_tmp) {
HXLINE(1598)								::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1598)								int i;
HXDLIN(1598)								int bufferCount;
HXDLIN(1598)								int placeIndex;
HXDLIN(1598)								Float positionWidth;
HXDLIN(1598)								 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1598)								Float width = ((Float)0.0);
HXDLIN(1598)								{
HXLINE(1598)									int _g = 0;
HXDLIN(1598)									while((_g < remainingPositions->length)){
HXLINE(1598)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)										_g = (_g + 1);
HXDLIN(1598)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1598)								Float tempWidth = width;
HXDLIN(1598)								while(true){
HXLINE(1598)									bool _hx_tmp;
HXDLIN(1598)									if ((remainingPositions->length > 0)) {
HXLINE(1598)										int _hx_tmp1;
HXDLIN(1598)										if (firstLineOfParagraph) {
HXLINE(1598)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1598)											_hx_tmp1 = 0;
            										}
HXDLIN(1598)										_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            									}
            									else {
HXLINE(1598)										_hx_tmp = false;
            									}
HXDLIN(1598)									if (!(_hx_tmp)) {
HXLINE(1598)										goto _hx_goto_97;
            									}
HXDLIN(1598)									bufferCount = 0;
HXDLIN(1598)									i = bufferCount;
HXDLIN(1598)									positionWidth = ((Float)0.0);
HXDLIN(1598)									while(true){
HXLINE(1598)										int _hx_tmp;
HXDLIN(1598)										if (firstLineOfParagraph) {
HXLINE(1598)											_hx_tmp = indent;
            										}
            										else {
HXLINE(1598)											_hx_tmp = 0;
            										}
HXDLIN(1598)										if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1598)											goto _hx_goto_98;
            										}
HXDLIN(1598)										currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)										if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1598)											i = (i + 1);
HXDLIN(1598)											bufferCount = (bufferCount + 1);
            										}
            										else {
HXLINE(1598)											positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1598)											i = (i + 1);
            										}
            									}
            									_hx_goto_98:;
HXDLIN(1598)									if ((i == bufferCount)) {
HXLINE(1598)										i = (bufferCount + 1);
            									}
            									else {
HXLINE(1598)										while(true){
HXLINE(1598)											bool _hx_tmp;
HXDLIN(1598)											if ((i > 1)) {
HXLINE(1598)												int _hx_tmp1;
HXDLIN(1598)												if (firstLineOfParagraph) {
HXLINE(1598)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1598)													_hx_tmp1 = 0;
            												}
HXDLIN(1598)												_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            											}
            											else {
HXLINE(1598)												_hx_tmp = false;
            											}
HXDLIN(1598)											if (!(_hx_tmp)) {
HXLINE(1598)												goto _hx_goto_99;
            											}
HXDLIN(1598)											i = (i - 1);
HXDLIN(1598)											if (((i - bufferCount) > 0)) {
HXLINE(1598)												{
HXLINE(1598)													int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1598)													if ((textIndex >= endIndex)) {
HXLINE(1598)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1598)														if ((endIndex <= formatRange->end)) {
HXLINE(1598)															::String text = _gthis->text;
HXDLIN(1598)															Float letterSpacing = ((Float)0.0);
HXDLIN(1598)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1598)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)															bool positions1;
HXDLIN(1598)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1598)																positions1 = true;
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1598)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)															Float width = ((Float)0.0);
HXDLIN(1598)															{
HXLINE(1598)																int _g = 0;
HXDLIN(1598)																while((_g < positions->length)){
HXLINE(1598)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)																	_g = (_g + 1);
HXDLIN(1598)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1598)															widthValue = width;
            														}
            														else {
HXLINE(1598)															int tempIndex = textIndex;
HXDLIN(1598)															int tempRangeEnd = formatRange->end;
HXDLIN(1598)															int countRanges = 0;
HXDLIN(1598)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)															widthValue = ( (Float)(0) );
HXDLIN(1598)															while(true){
HXLINE(1598)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1598)																	::String text = _gthis->text;
HXDLIN(1598)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1598)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1598)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)																	bool _hx_tmp;
HXDLIN(1598)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1598)																		_hx_tmp = true;
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1598)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1598)																	::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1598)																if ((tempRangeEnd != endIndex)) {
HXLINE(1598)																	bool _hx_tmp;
HXDLIN(1598)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1598)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1598)																		_hx_tmp = false;
            																	}
HXDLIN(1598)																	if (!(_hx_tmp)) {
HXLINE(1598)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)																		goto _hx_goto_101;
            																	}
HXDLIN(1598)																	tempIndex = tempRangeEnd;
HXDLIN(1598)																	if ((endIndex < formatRange->end)) {
HXLINE(1598)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1598)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1598)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1598)																	Float width = ((Float)0.0);
HXDLIN(1598)																	{
HXLINE(1598)																		int _g = 0;
HXDLIN(1598)																		while((_g < positions->length)){
HXLINE(1598)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)																			_g = (_g + 1);
HXDLIN(1598)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1598)																	widthValue = width;
HXDLIN(1598)																	goto _hx_goto_101;
            																}
            															}
            															_hx_goto_101:;
HXDLIN(1598)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1598)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)																rangeIndex = (rangeIndex + 1);
HXDLIN(1598)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1598)												positionWidth = widthValue;
            											}
            											else {
HXLINE(1598)												i = 1;
HXDLIN(1598)												bufferCount = 0;
HXDLIN(1598)												{
HXLINE(1598)													int endIndex = (textIndex + 1);
HXDLIN(1598)													if ((textIndex >= endIndex)) {
HXLINE(1598)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1598)														if ((endIndex <= formatRange->end)) {
HXLINE(1598)															::String text = _gthis->text;
HXDLIN(1598)															Float letterSpacing = ((Float)0.0);
HXDLIN(1598)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1598)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)															bool positions1;
HXDLIN(1598)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1598)																positions1 = true;
            															}
HXDLIN(1598)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1598)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)															Float width = ((Float)0.0);
HXDLIN(1598)															{
HXLINE(1598)																int _g = 0;
HXDLIN(1598)																while((_g < positions->length)){
HXLINE(1598)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)																	_g = (_g + 1);
HXDLIN(1598)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1598)															widthValue = width;
            														}
            														else {
HXLINE(1598)															int tempIndex = textIndex;
HXDLIN(1598)															int tempRangeEnd = formatRange->end;
HXDLIN(1598)															int countRanges = 0;
HXDLIN(1598)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)															widthValue = ( (Float)(0) );
HXDLIN(1598)															while(true){
HXLINE(1598)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1598)																	::String text = _gthis->text;
HXDLIN(1598)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1598)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1598)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)																	bool _hx_tmp;
HXDLIN(1598)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1598)																		_hx_tmp = true;
            																	}
HXDLIN(1598)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1598)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1598)																	::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1598)																if ((tempRangeEnd != endIndex)) {
HXLINE(1598)																	bool _hx_tmp;
HXDLIN(1598)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1598)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1598)																		_hx_tmp = false;
            																	}
HXDLIN(1598)																	if (!(_hx_tmp)) {
HXLINE(1598)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)																		goto _hx_goto_104;
            																	}
HXDLIN(1598)																	tempIndex = tempRangeEnd;
HXDLIN(1598)																	if ((endIndex < formatRange->end)) {
HXLINE(1598)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1598)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1598)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1598)																	Float width = ((Float)0.0);
HXDLIN(1598)																	{
HXLINE(1598)																		int _g = 0;
HXDLIN(1598)																		while((_g < positions->length)){
HXLINE(1598)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)																			_g = (_g + 1);
HXDLIN(1598)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1598)																	widthValue = width;
HXDLIN(1598)																	goto _hx_goto_104;
            																}
            															}
            															_hx_goto_104:;
HXDLIN(1598)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1598)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)																rangeIndex = (rangeIndex + 1);
HXDLIN(1598)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1598)												positionWidth = ( (Float)(0) );
            											}
            										}
            										_hx_goto_99:;
            									}
HXDLIN(1598)									placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1598)									{
HXLINE(1598)										if ((placeIndex <= formatRange->end)) {
HXLINE(1598)											::String text = _gthis->text;
HXDLIN(1598)											Float letterSpacing = ((Float)0.0);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1598)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)											bool positions1;
HXDLIN(1598)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1598)												positions1 = true;
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)											_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1598)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)											Float width = ((Float)0.0);
HXDLIN(1598)											{
HXLINE(1598)												int _g = 0;
HXDLIN(1598)												while((_g < positions->length)){
HXLINE(1598)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)													_g = (_g + 1);
HXDLIN(1598)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1598)											widthValue = width;
HXDLIN(1598)											bool _hx_tmp;
HXDLIN(1598)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1598)												_hx_tmp = true;
            											}
HXDLIN(1598)											if (_hx_tmp) {
HXLINE(1598)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1598)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1598)												layoutGroup->format = formatRange->format;
HXDLIN(1598)												layoutGroup->startIndex = textIndex;
HXDLIN(1598)												layoutGroup->endIndex = placeIndex;
            											}
HXDLIN(1598)											layoutGroup->positions = positions;
HXDLIN(1598)											int _hx_tmp1;
HXDLIN(1598)											if (firstLineOfParagraph) {
HXLINE(1598)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1598)												_hx_tmp1 = 0;
            											}
HXDLIN(1598)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)											layoutGroup->ascent = ascent;
HXDLIN(1598)											layoutGroup->descent = descent;
HXDLIN(1598)											layoutGroup->leading = leading;
HXDLIN(1598)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)											layoutGroup->width = widthValue;
HXDLIN(1598)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)											offsetX = (offsetX + widthValue);
HXDLIN(1598)											if ((placeIndex == formatRange->end)) {
HXLINE(1598)												layoutGroup = null();
HXDLIN(1598)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)													rangeIndex = (rangeIndex + 1);
HXDLIN(1598)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
HXDLIN(1598)												{
HXLINE(1598)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1598)														bool _hx_tmp;
HXDLIN(1598)														if (::hx::IsNotNull( font )) {
HXLINE(1598)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1598)															_hx_tmp = false;
            														}
HXDLIN(1598)														if (_hx_tmp) {
HXLINE(1598)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1598)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1598)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)													if ((heightValue > maxHeightValue)) {
HXLINE(1598)														maxHeightValue = heightValue;
            													}
HXDLIN(1598)													if ((ascent > maxAscent)) {
HXLINE(1598)														maxAscent = ascent;
            													}
            												}
            											}
            										}
            										else {
HXLINE(1598)											while(true){
HXLINE(1598)												int tempRangeEnd;
HXDLIN(1598)												if ((placeIndex < formatRange->end)) {
HXLINE(1598)													tempRangeEnd = placeIndex;
            												}
            												else {
HXLINE(1598)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1598)												if ((textIndex != tempRangeEnd)) {
HXLINE(1598)													::String text = _gthis->text;
HXDLIN(1598)													Float letterSpacing = ((Float)0.0);
HXDLIN(1598)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1598)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)													bool positions1;
HXDLIN(1598)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)														positions1 = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1598)														positions1 = true;
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)													_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1598)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)													Float width = ((Float)0.0);
HXDLIN(1598)													{
HXLINE(1598)														int _g = 0;
HXDLIN(1598)														while((_g < positions->length)){
HXLINE(1598)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)															_g = (_g + 1);
HXDLIN(1598)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1598)													widthValue = width;
HXDLIN(1598)													bool _hx_tmp;
HXDLIN(1598)													if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)														_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            													}
            													else {
HXLINE(1598)														_hx_tmp = true;
            													}
HXDLIN(1598)													if (_hx_tmp) {
HXLINE(1598)														layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1598)														_gthis->layoutGroups->push(layoutGroup);
            													}
            													else {
HXLINE(1598)														layoutGroup->format = formatRange->format;
HXDLIN(1598)														layoutGroup->startIndex = textIndex;
HXDLIN(1598)														layoutGroup->endIndex = tempRangeEnd;
            													}
HXDLIN(1598)													layoutGroup->positions = positions;
HXDLIN(1598)													int _hx_tmp1;
HXDLIN(1598)													if (firstLineOfParagraph) {
HXLINE(1598)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1598)														_hx_tmp1 = 0;
            													}
HXDLIN(1598)													layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)													layoutGroup->ascent = ascent;
HXDLIN(1598)													layoutGroup->descent = descent;
HXDLIN(1598)													layoutGroup->leading = leading;
HXDLIN(1598)													layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)													layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)													layoutGroup->width = widthValue;
HXDLIN(1598)													layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)													offsetX = (offsetX + widthValue);
HXDLIN(1598)													textIndex = tempRangeEnd;
            												}
HXDLIN(1598)												if ((tempRangeEnd == formatRange->end)) {
HXLINE(1598)													layoutGroup = null();
            												}
HXDLIN(1598)												if ((tempRangeEnd == placeIndex)) {
HXLINE(1598)													goto _hx_goto_107;
            												}
HXDLIN(1598)												bool _hx_tmp;
HXDLIN(1598)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)													rangeIndex = (rangeIndex + 1);
HXDLIN(1598)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)													_hx_tmp = true;
            												}
            												else {
HXLINE(1598)													_hx_tmp = false;
            												}
HXDLIN(1598)												if (!(_hx_tmp)) {
HXLINE(1598)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)													goto _hx_goto_107;
            												}
HXDLIN(1598)												{
HXLINE(1598)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1598)														bool _hx_tmp;
HXDLIN(1598)														if (::hx::IsNotNull( font )) {
HXLINE(1598)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1598)															_hx_tmp = false;
            														}
HXDLIN(1598)														if (_hx_tmp) {
HXLINE(1598)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1598)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1598)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)													if ((heightValue > maxHeightValue)) {
HXLINE(1598)														maxHeightValue = heightValue;
            													}
HXDLIN(1598)													if ((ascent > maxAscent)) {
HXLINE(1598)														maxAscent = ascent;
            													}
            												}
            											}
            											_hx_goto_107:;
            										}
HXDLIN(1598)										textIndex = placeIndex;
            									}
HXDLIN(1598)									{
HXLINE(1598)										{
HXLINE(1598)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1598)												bool _hx_tmp;
HXDLIN(1598)												if (::hx::IsNotNull( font )) {
HXLINE(1598)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1598)													_hx_tmp = false;
            												}
HXDLIN(1598)												if (_hx_tmp) {
HXLINE(1598)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1598)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1598)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)											if ((heightValue > maxHeightValue)) {
HXLINE(1598)												maxHeightValue = heightValue;
            											}
HXDLIN(1598)											if ((ascent > maxAscent)) {
HXLINE(1598)												maxAscent = ascent;
            											}
            										}
HXDLIN(1598)										int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1598)										while(true){
HXLINE(1598)											i1 = (i1 - 1);
HXDLIN(1598)											if (!((i1 > -1))) {
HXLINE(1598)												goto _hx_goto_109;
            											}
HXDLIN(1598)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1598)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1598)												goto _hx_goto_109;
            											}
HXDLIN(1598)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1598)												continue;
            											}
HXDLIN(1598)											lg->ascent = maxAscent;
HXDLIN(1598)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_109:;
HXDLIN(1598)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1598)										maxAscent = ((Float)0.0);
HXDLIN(1598)										maxHeightValue = 0;
HXDLIN(1598)										lineIndex = (lineIndex + 1);
HXDLIN(1598)										offsetX = ( (Float)(0) );
HXDLIN(1598)										firstLineOfParagraph = false;
            									}
HXDLIN(1598)									if ((placeIndex >= endIndex1)) {
HXLINE(1598)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)										widthValue = ( (Float)(0) );
            									}
            									else {
HXLINE(1598)										if ((endIndex1 <= formatRange->end)) {
HXLINE(1598)											::String text = _gthis->text;
HXDLIN(1598)											Float letterSpacing = ((Float)0.0);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1598)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)											bool positions1;
HXDLIN(1598)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1598)												positions1 = true;
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)											_gthis1->set_text(text.substring(placeIndex,endIndex1));
HXDLIN(1598)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)											Float width = ((Float)0.0);
HXDLIN(1598)											{
HXLINE(1598)												int _g = 0;
HXDLIN(1598)												while((_g < positions->length)){
HXLINE(1598)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)													_g = (_g + 1);
HXDLIN(1598)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1598)											widthValue = width;
            										}
            										else {
HXLINE(1598)											int tempIndex = placeIndex;
HXDLIN(1598)											int tempRangeEnd = formatRange->end;
HXDLIN(1598)											int countRanges = 0;
HXDLIN(1598)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1598)											widthValue = ( (Float)(0) );
HXDLIN(1598)											while(true){
HXLINE(1598)												if ((tempIndex != tempRangeEnd)) {
HXLINE(1598)													::String text = _gthis->text;
HXDLIN(1598)													Float letterSpacing = ((Float)0.0);
HXDLIN(1598)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1598)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)													bool _hx_tmp;
HXDLIN(1598)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)														_hx_tmp = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1598)														_hx_tmp = true;
            													}
HXDLIN(1598)													_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1598)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)													_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1598)													::Array< ::Dynamic> tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)													positions = positions->concat(tempPositions);
            												}
HXDLIN(1598)												if ((tempRangeEnd != endIndex1)) {
HXLINE(1598)													bool _hx_tmp;
HXDLIN(1598)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)														rangeIndex = (rangeIndex + 1);
HXDLIN(1598)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)														_hx_tmp = true;
            													}
            													else {
HXLINE(1598)														_hx_tmp = false;
            													}
HXDLIN(1598)													if (!(_hx_tmp)) {
HXLINE(1598)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1092,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)														goto _hx_goto_111;
            													}
HXDLIN(1598)													tempIndex = tempRangeEnd;
HXDLIN(1598)													if ((endIndex1 < formatRange->end)) {
HXLINE(1598)														tempRangeEnd = endIndex1;
            													}
            													else {
HXLINE(1598)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1598)													countRanges = (countRanges + 1);
            												}
            												else {
HXLINE(1598)													Float width = ((Float)0.0);
HXDLIN(1598)													{
HXLINE(1598)														int _g = 0;
HXDLIN(1598)														while((_g < positions->length)){
HXLINE(1598)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)															_g = (_g + 1);
HXDLIN(1598)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1598)													widthValue = width;
HXDLIN(1598)													goto _hx_goto_111;
            												}
            											}
            											_hx_goto_111:;
HXDLIN(1598)											rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1598)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)												rangeIndex = (rangeIndex + 1);
HXDLIN(1598)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
            										}
            									}
HXDLIN(1598)									remainingPositions = positions;
HXDLIN(1598)									tempWidth = widthValue;
            								}
            								_hx_goto_97:;
            							}
HXDLIN(1598)							{
HXLINE(1598)								if ((endIndex1 <= formatRange->end)) {
HXLINE(1598)									::String text = _gthis->text;
HXDLIN(1598)									Float letterSpacing = ((Float)0.0);
HXDLIN(1598)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1598)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1598)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1598)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)									bool positions1;
HXDLIN(1598)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1598)										positions1 = true;
            									}
HXDLIN(1598)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)									_gthis1->set_text(text.substring(textIndex,endIndex1));
HXDLIN(1598)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)									Float width = ((Float)0.0);
HXDLIN(1598)									{
HXLINE(1598)										int _g = 0;
HXDLIN(1598)										while((_g < positions->length)){
HXLINE(1598)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)											_g = (_g + 1);
HXDLIN(1598)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1598)									widthValue = width;
HXDLIN(1598)									bool _hx_tmp;
HXDLIN(1598)									if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)										_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            									}
            									else {
HXLINE(1598)										_hx_tmp = true;
            									}
HXDLIN(1598)									if (_hx_tmp) {
HXLINE(1598)										layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex1);
HXDLIN(1598)										_gthis->layoutGroups->push(layoutGroup);
            									}
            									else {
HXLINE(1598)										layoutGroup->format = formatRange->format;
HXDLIN(1598)										layoutGroup->startIndex = textIndex;
HXDLIN(1598)										layoutGroup->endIndex = endIndex1;
            									}
HXDLIN(1598)									layoutGroup->positions = positions;
HXDLIN(1598)									int _hx_tmp1;
HXDLIN(1598)									if (firstLineOfParagraph) {
HXLINE(1598)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1598)										_hx_tmp1 = 0;
            									}
HXDLIN(1598)									layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)									layoutGroup->ascent = ascent;
HXDLIN(1598)									layoutGroup->descent = descent;
HXDLIN(1598)									layoutGroup->leading = leading;
HXDLIN(1598)									layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)									layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)									layoutGroup->width = widthValue;
HXDLIN(1598)									layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)									offsetX = (offsetX + widthValue);
HXDLIN(1598)									if ((endIndex1 == formatRange->end)) {
HXLINE(1598)										layoutGroup = null();
HXDLIN(1598)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)											rangeIndex = (rangeIndex + 1);
HXDLIN(1598)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXDLIN(1598)										{
HXLINE(1598)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1598)												bool _hx_tmp;
HXDLIN(1598)												if (::hx::IsNotNull( font )) {
HXLINE(1598)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1598)													_hx_tmp = false;
            												}
HXDLIN(1598)												if (_hx_tmp) {
HXLINE(1598)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1598)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1598)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)											if ((heightValue > maxHeightValue)) {
HXLINE(1598)												maxHeightValue = heightValue;
            											}
HXDLIN(1598)											if ((ascent > maxAscent)) {
HXLINE(1598)												maxAscent = ascent;
            											}
            										}
            									}
            								}
            								else {
HXLINE(1598)									while(true){
HXLINE(1598)										int tempRangeEnd;
HXDLIN(1598)										if ((endIndex1 < formatRange->end)) {
HXLINE(1598)											tempRangeEnd = endIndex1;
            										}
            										else {
HXLINE(1598)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1598)										if ((textIndex != tempRangeEnd)) {
HXLINE(1598)											::String text = _gthis->text;
HXDLIN(1598)											Float letterSpacing = ((Float)0.0);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1598)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1598)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1598)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1598)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1598)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1598)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1598)											bool positions1;
HXDLIN(1598)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1598)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1598)												positions1 = true;
            											}
HXDLIN(1598)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1598)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1598)											_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1598)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
HXDLIN(1598)											Float width = ((Float)0.0);
HXDLIN(1598)											{
HXLINE(1598)												int _g = 0;
HXDLIN(1598)												while((_g < positions->length)){
HXLINE(1598)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1598)													_g = (_g + 1);
HXDLIN(1598)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1598)											widthValue = width;
HXDLIN(1598)											bool _hx_tmp;
HXDLIN(1598)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1598)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1598)												_hx_tmp = true;
            											}
HXDLIN(1598)											if (_hx_tmp) {
HXLINE(1598)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1598)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1598)												layoutGroup->format = formatRange->format;
HXDLIN(1598)												layoutGroup->startIndex = textIndex;
HXDLIN(1598)												layoutGroup->endIndex = tempRangeEnd;
            											}
HXDLIN(1598)											layoutGroup->positions = positions;
HXDLIN(1598)											int _hx_tmp1;
HXDLIN(1598)											if (firstLineOfParagraph) {
HXLINE(1598)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1598)												_hx_tmp1 = 0;
            											}
HXDLIN(1598)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1598)											layoutGroup->ascent = ascent;
HXDLIN(1598)											layoutGroup->descent = descent;
HXDLIN(1598)											layoutGroup->leading = leading;
HXDLIN(1598)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1598)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1598)											layoutGroup->width = widthValue;
HXDLIN(1598)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1598)											offsetX = (offsetX + widthValue);
HXDLIN(1598)											textIndex = tempRangeEnd;
            										}
HXDLIN(1598)										if ((tempRangeEnd == formatRange->end)) {
HXLINE(1598)											layoutGroup = null();
            										}
HXDLIN(1598)										if ((tempRangeEnd == endIndex1)) {
HXLINE(1598)											goto _hx_goto_114;
            										}
HXDLIN(1598)										bool _hx_tmp;
HXDLIN(1598)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1598)											rangeIndex = (rangeIndex + 1);
HXDLIN(1598)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1598)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1598)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1598)											_hx_tmp = true;
            										}
            										else {
HXLINE(1598)											_hx_tmp = false;
            										}
HXDLIN(1598)										if (!(_hx_tmp)) {
HXLINE(1598)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1180,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1598)											goto _hx_goto_114;
            										}
HXDLIN(1598)										{
HXLINE(1598)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1598)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1598)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1598)												bool _hx_tmp;
HXDLIN(1598)												if (::hx::IsNotNull( font )) {
HXLINE(1598)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1598)													_hx_tmp = false;
            												}
HXDLIN(1598)												if (_hx_tmp) {
HXLINE(1598)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1598)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1598)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1598)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1598)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1598)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1598)											if ((heightValue > maxHeightValue)) {
HXLINE(1598)												maxHeightValue = heightValue;
            											}
HXDLIN(1598)											if ((ascent > maxAscent)) {
HXLINE(1598)												maxAscent = ascent;
            											}
            										}
            									}
            									_hx_goto_114:;
            								}
HXDLIN(1598)								textIndex = endIndex1;
            							}
            						}
HXLINE(1600)						{
HXLINE(1600)							{
HXLINE(1600)								if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1600)									ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1600)									descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            								}
            								else {
HXLINE(1600)									bool _hx_tmp;
HXDLIN(1600)									if (::hx::IsNotNull( font )) {
HXLINE(1600)										_hx_tmp = (font->unitsPerEM != 0);
            									}
            									else {
HXLINE(1600)										_hx_tmp = false;
            									}
HXDLIN(1600)									if (_hx_tmp) {
HXLINE(1600)										ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1600)										descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            									}
            									else {
HXLINE(1600)										ascent = ( (Float)(currentFormat->size) );
HXDLIN(1600)										descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            									}
            								}
HXDLIN(1600)								leading = ( (int)(currentFormat->leading) );
HXDLIN(1600)								heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1600)								if ((heightValue > maxHeightValue)) {
HXLINE(1600)									maxHeightValue = heightValue;
            								}
HXDLIN(1600)								if ((ascent > maxAscent)) {
HXLINE(1600)									maxAscent = ascent;
            								}
            							}
HXDLIN(1600)							int i = _gthis->layoutGroups->get_length();
HXDLIN(1600)							while(true){
HXLINE(1600)								i = (i - 1);
HXDLIN(1600)								if (!((i > -1))) {
HXLINE(1600)									goto _hx_goto_116;
            								}
HXDLIN(1600)								 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1600)								if ((lg->lineIndex < lineIndex)) {
HXLINE(1600)									goto _hx_goto_116;
            								}
HXDLIN(1600)								if ((lg->lineIndex > lineIndex)) {
HXLINE(1600)									continue;
            								}
HXDLIN(1600)								lg->ascent = maxAscent;
HXDLIN(1600)								lg->height = ( (Float)(maxHeightValue) );
            							}
            							_hx_goto_116:;
HXDLIN(1600)							offsetY = (offsetY + maxHeightValue);
HXDLIN(1600)							maxAscent = ((Float)0.0);
HXDLIN(1600)							maxHeightValue = 0;
HXDLIN(1600)							lineIndex = (lineIndex + 1);
HXDLIN(1600)							offsetX = ( (Float)(0) );
HXDLIN(1600)							firstLineOfParagraph = false;
            						}
            					}
HXLINE(1603)					textIndex = (textIndex + 1);
            				}
            			}
            		}
HXLINE(1608)		bool _hx_tmp3;
HXDLIN(1608)		if ((previousBreakIndex == (textIndex - 2))) {
HXLINE(1608)			_hx_tmp3 = (previousBreakIndex > -1);
            		}
            		else {
HXLINE(1608)			_hx_tmp3 = false;
            		}
HXDLIN(1608)		if (_hx_tmp3) {
HXLINE(1610)			{
HXLINE(1610)				int startIndex = (textIndex - 1);
HXDLIN(1610)				int endIndex = (textIndex - 1);
HXDLIN(1610)				bool _hx_tmp;
HXDLIN(1610)				if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1610)					_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            				}
            				else {
HXLINE(1610)					_hx_tmp = true;
            				}
HXDLIN(1610)				if (_hx_tmp) {
HXLINE(1610)					layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,startIndex,endIndex);
HXDLIN(1610)					_gthis->layoutGroups->push(layoutGroup);
            				}
            				else {
HXLINE(1610)					layoutGroup->format = formatRange->format;
HXDLIN(1610)					layoutGroup->startIndex = startIndex;
HXDLIN(1610)					layoutGroup->endIndex = endIndex;
            				}
            			}
HXLINE(1612)			layoutGroup->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1613)			layoutGroup->ascent = ascent;
HXLINE(1614)			layoutGroup->descent = descent;
HXLINE(1615)			layoutGroup->leading = leading;
HXLINE(1616)			layoutGroup->lineIndex = lineIndex;
HXLINE(1617)			int _hx_tmp1;
HXDLIN(1617)			if (firstLineOfParagraph) {
HXLINE(1617)				_hx_tmp1 = indent;
            			}
            			else {
HXLINE(1617)				_hx_tmp1 = 0;
            			}
HXDLIN(1617)			layoutGroup->offsetX = ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) );
HXLINE(1618)			layoutGroup->offsetY = (offsetY + 2);
HXLINE(1619)			layoutGroup->width = ( (Float)(0) );
HXLINE(1620)			Float _hx_tmp2;
HXDLIN(1620)			if ((::openfl::text::_TextFieldType::TextFieldType_Impl__obj::toString(this->type) == HX_("input",0a,c4,1d,be))) {
HXLINE(1620)				_hx_tmp2 = ( (Float)(heightValue) );
            			}
            			else {
HXLINE(1620)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN(1620)			layoutGroup->height = _hx_tmp2;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

::String TextEngine_obj::restrictText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1632_restrictText)
HXLINE(1633)		if (::hx::IsNull( value )) {
HXLINE(1635)			return value;
            		}
HXLINE(1638)		if (::hx::IsNotNull( this->_hx___restrictRegexp )) {
HXLINE(1640)			value = this->_hx___restrictRegexp->split(value)->join(HX_("",00,00,00,00));
            		}
HXLINE(1649)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,restrictText,return )

void TextEngine_obj::setTextAlignment(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1653_setTextAlignment)
HXLINE(1654)		int lineIndex = -1;
HXLINE(1655)		Float offsetX = ((Float)0.0);
HXLINE(1656)		Float totalWidth = (this->width - ( (Float)(4) ));
HXLINE(1657)		 ::openfl::text::_internal::TextLayoutGroup group;
HXDLIN(1657)		int lineLength;
HXLINE(1658)		bool lineMeasurementsDirty = false;
HXLINE(1660)		{
HXLINE(1660)			int _g = 0;
HXDLIN(1660)			int _g1 = this->layoutGroups->get_length();
HXDLIN(1660)			while((_g < _g1)){
HXLINE(1660)				_g = (_g + 1);
HXDLIN(1660)				int i = (_g - 1);
HXLINE(1662)				group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1664)				if ((group->lineIndex != lineIndex)) {
HXLINE(1666)					lineIndex = group->lineIndex;
HXLINE(1667)					totalWidth = ((this->width - ( (Float)(4) )) - ( (Float)(group->format->rightMargin) ));
HXLINE(1669)					 ::Dynamic _hx_switch_0 = group->format->align;
            					if (  (_hx_switch_0==0) ){
HXLINE(1672)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1674)							offsetX = ( (Float)(::Math_obj::round(((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)(2) )))) );
            						}
            						else {
HXLINE(1678)							offsetX = ( (Float)(0) );
            						}
HXLINE(1672)						goto _hx_goto_120;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1692)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1694)							lineLength = 1;
HXLINE(1696)							{
HXLINE(1696)								int _g = (i + 1);
HXDLIN(1696)								int _g1 = this->layoutGroups->get_length();
HXDLIN(1696)								while((_g < _g1)){
HXLINE(1696)									_g = (_g + 1);
HXDLIN(1696)									int j = (_g - 1);
HXLINE(1698)									if ((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->lineIndex == lineIndex)) {
HXLINE(1700)										bool _hx_tmp;
HXDLIN(1700)										if ((j != 0)) {
HXLINE(1700)											::String _hx_tmp1 = this->text;
HXDLIN(1700)											_hx_tmp = ::hx::IsEq( _hx_tmp1.charCodeAt((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->startIndex - 1)),32 );
            										}
            										else {
HXLINE(1700)											_hx_tmp = true;
            										}
HXDLIN(1700)										if (_hx_tmp) {
HXLINE(1702)											lineLength = (lineLength + 1);
            										}
            									}
            									else {
HXLINE(1707)										goto _hx_goto_121;
            									}
            								}
            								_hx_goto_121:;
            							}
HXLINE(1711)							if ((lineLength > 1)) {
HXLINE(1713)								group = this->layoutGroups->get(((i + lineLength) - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1715)								 ::Dynamic endChar = this->text.charCodeAt(group->endIndex);
HXLINE(1716)								bool _hx_tmp;
HXDLIN(1716)								bool _hx_tmp1;
HXDLIN(1716)								if ((group->endIndex < this->text.length)) {
HXLINE(1716)									_hx_tmp1 = ::hx::IsNotEq( endChar,10 );
            								}
            								else {
HXLINE(1716)									_hx_tmp1 = false;
            								}
HXDLIN(1716)								if (_hx_tmp1) {
HXLINE(1716)									_hx_tmp = ::hx::IsNotEq( endChar,13 );
            								}
            								else {
HXLINE(1716)									_hx_tmp = false;
            								}
HXDLIN(1716)								if (_hx_tmp) {
HXLINE(1718)									offsetX = ((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)((lineLength - 1)) ));
HXLINE(1719)									lineMeasurementsDirty = true;
HXLINE(1721)									int j = 1;
HXLINE(1722)									while(true){
HXLINE(1731)										 ::openfl::text::_internal::TextLayoutGroup fh = this->layoutGroups->get((i + j)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1731)										fh->offsetX = (fh->offsetX + (offsetX * ( (Float)(j) )));
HXLINE(1733)										j = (j + 1);
HXLINE(1722)										if (!((j < lineLength))) {
HXLINE(1722)											goto _hx_goto_122;
            										}
            									}
            									_hx_goto_122:;
            								}
            							}
            						}
HXLINE(1738)						offsetX = ( (Float)(0) );
HXLINE(1691)						goto _hx_goto_120;
            					}
            					if (  (_hx_switch_0==4) ){
HXLINE(1682)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1684)							offsetX = ( (Float)(::Math_obj::round((totalWidth - this->lineWidths->get(lineIndex)))) );
            						}
            						else {
HXLINE(1688)							offsetX = ( (Float)(0) );
            						}
HXLINE(1682)						goto _hx_goto_120;
            					}
            					/* default */{
HXLINE(1741)						offsetX = ( (Float)(0) );
            					}
            					_hx_goto_120:;
            				}
HXLINE(1745)				if ((offsetX > 0)) {
HXLINE(1747)					 ::openfl::text::_internal::TextLayoutGroup group1 = group;
HXDLIN(1747)					group1->offsetX = (group1->offsetX + offsetX);
            				}
            			}
            		}
HXLINE(1751)		if (lineMeasurementsDirty) {
HXLINE(1755)			this->getLineMeasurements();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

::String TextEngine_obj::trimText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1760_trimText)
HXLINE(1761)		if (::hx::IsNull( value )) {
HXLINE(1763)			return value;
            		}
HXLINE(1766)		bool _hx_tmp;
HXDLIN(1766)		if ((this->maxChars > 0)) {
HXLINE(1766)			_hx_tmp = (value.length > this->maxChars);
            		}
            		else {
HXLINE(1766)			_hx_tmp = false;
            		}
HXDLIN(1766)		if (_hx_tmp) {
HXLINE(1768)			value = value.substr(0,this->maxChars);
            		}
HXLINE(1771)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,trimText,return )

void TextEngine_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1775_update)
HXLINE(1776)		bool _hx_tmp;
HXDLIN(1776)		if (::hx::IsNotNull( this->text )) {
HXLINE(1776)			_hx_tmp = (this->textFormatRanges->get_length() == 0);
            		}
            		else {
HXLINE(1776)			_hx_tmp = true;
            		}
HXDLIN(1776)		if (_hx_tmp) {
HXLINE(1778)			this->lineAscents->set_length(0);
HXLINE(1779)			this->lineBreaks->set_length(0);
HXLINE(1780)			this->lineDescents->set_length(0);
HXLINE(1781)			this->lineLeadings->set_length(0);
HXLINE(1782)			this->lineHeights->set_length(0);
HXLINE(1783)			this->lineWidths->set_length(0);
HXLINE(1784)			this->layoutGroups->set_length(0);
HXLINE(1786)			this->textWidth = ( (Float)(0) );
HXLINE(1787)			this->textHeight = ( (Float)(0) );
HXLINE(1788)			this->numLines = 1;
HXLINE(1789)			this->maxScrollH = 0;
HXLINE(1790)			this->maxScrollV = 1;
HXLINE(1791)			this->bottomScrollV = 1;
            		}
            		else {
HXLINE(1795)			this->getLineBreaks();
HXLINE(1796)			this->getLayoutGroups();
HXLINE(1797)			this->getLineMeasurements();
HXLINE(1798)			this->setTextAlignment();
            		}
HXLINE(1801)		this->getBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1808_get_bottomScrollV)
HXDLIN(1808)		bool _hx_tmp;
HXDLIN(1808)		if ((this->numLines != 1)) {
HXDLIN(1808)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1808)			_hx_tmp = true;
            		}
HXDLIN(1808)		if (_hx_tmp) {
HXLINE(1810)			return 1;
            		}
            		else {
HXLINE(1814)			int ret = this->lineHeights->get_length();
HXLINE(1816)			Float tempHeight;
HXDLIN(1816)			if ((this->lineLeadings->get_length() == ret)) {
HXLINE(1816)				tempHeight = -(this->lineLeadings->get((ret - 1)));
            			}
            			else {
HXLINE(1816)				tempHeight = ((Float)0.0);
            			}
HXLINE(1818)			{
HXLINE(1818)				int _g = (this->get_scrollV() - 1);
HXDLIN(1818)				int _g1 = this->lineHeights->get_length();
HXDLIN(1818)				while((_g < _g1)){
HXLINE(1818)					_g = (_g + 1);
HXDLIN(1818)					int i = (_g - 1);
HXLINE(1820)					Float _hx_tmp = (tempHeight + this->lineHeights->get(i));
HXDLIN(1820)					if ((_hx_tmp <= (this->height - ( (Float)(4) )))) {
HXLINE(1822)						tempHeight = (tempHeight + this->lineHeights->get(i));
            					}
            					else {
HXLINE(1826)						ret = i;
HXLINE(1827)						goto _hx_goto_126;
            					}
            				}
            				_hx_goto_126:;
            			}
HXLINE(1831)			if ((ret < this->get_scrollV())) {
HXLINE(1831)				return this->get_scrollV();
            			}
HXLINE(1832)			return ret;
            		}
HXLINE(1808)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_bottomScrollV,return )

int TextEngine_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1839_get_maxScrollV)
HXDLIN(1839)		bool _hx_tmp;
HXDLIN(1839)		if ((this->numLines != 1)) {
HXDLIN(1839)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1839)			_hx_tmp = true;
            		}
HXDLIN(1839)		if (_hx_tmp) {
HXLINE(1841)			return 1;
            		}
            		else {
HXLINE(1845)			int i = (this->numLines - 1);
HXDLIN(1845)			Float tempHeight = ((Float)0.0);
HXLINE(1846)			int j = i;
HXLINE(1849)			while((i >= 0)){
HXLINE(1851)				Float _hx_tmp = (tempHeight + this->lineHeights->get(i));
HXDLIN(1851)				if ((_hx_tmp <= (this->height - ( (Float)(4) )))) {
HXLINE(1853)					tempHeight = (tempHeight + this->lineHeights->get(i));
HXLINE(1854)					i = (i - 1);
            				}
            				else {
HXLINE(1857)					goto _hx_goto_128;
            				}
            			}
            			_hx_goto_128:;
HXLINE(1860)			if ((i == j)) {
HXLINE(1860)				i = this->numLines;
            			}
            			else {
HXLINE(1863)				i = (i + 2);
            			}
HXLINE(1865)			if ((i < 1)) {
HXLINE(1865)				return 1;
            			}
HXLINE(1866)			return i;
            		}
HXLINE(1839)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_maxScrollV,return )

::String TextEngine_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1871_set_restrict)
HXLINE(1872)		if ((this->restrict == value)) {
HXLINE(1874)			return this->restrict;
            		}
HXLINE(1877)		this->restrict = value;
HXLINE(1879)		bool _hx_tmp;
HXDLIN(1879)		if (::hx::IsNotNull( this->restrict )) {
HXLINE(1879)			_hx_tmp = (this->restrict.length == 0);
            		}
            		else {
HXLINE(1879)			_hx_tmp = true;
            		}
HXDLIN(1879)		if (_hx_tmp) {
HXLINE(1881)			this->_hx___restrictRegexp = null();
            		}
            		else {
HXLINE(1885)			this->_hx___restrictRegexp = this->createRestrictRegexp(value);
            		}
HXLINE(1888)		return this->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

int TextEngine_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1892_get_scrollV)
HXLINE(1893)		bool _hx_tmp;
HXDLIN(1893)		if ((this->numLines != 1)) {
HXLINE(1893)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXLINE(1893)			_hx_tmp = true;
            		}
HXDLIN(1893)		if (_hx_tmp) {
HXLINE(1893)			return 1;
            		}
HXLINE(1895)		int max = this->get_maxScrollV();
HXLINE(1896)		if ((this->scrollV > max)) {
HXLINE(1896)			return max;
            		}
HXLINE(1897)		return this->scrollV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_scrollV,return )

int TextEngine_obj::set_scrollV(int value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1901_set_scrollV)
HXLINE(1902)		if ((value < 1)) {
HXLINE(1902)			value = 1;
            		}
HXLINE(1903)		return (this->scrollV = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_scrollV,return )

::String TextEngine_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1908_set_text)
HXDLIN(1908)		return (this->text = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::GUTTER;

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

 ::haxe::ds::StringMap TextEngine_obj::_hx___defaultFonts;

 ::openfl::text::Font TextEngine_obj::findFont(::String name){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_178_findFont)
HXLINE( 182)		{
HXLINE( 182)			int _g = 0;
HXDLIN( 182)			::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::_hx___registeredFonts;
HXDLIN( 182)			while((_g < _g1->length)){
HXLINE( 182)				 ::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 182)				_g = (_g + 1);
HXLINE( 184)				if (::hx::IsNull( registeredFont )) {
HXLINE( 184)					continue;
            				}
HXLINE( 186)				bool _hx_tmp;
HXDLIN( 186)				if ((registeredFont->name != name)) {
HXLINE( 187)					if (::hx::IsNotNull( registeredFont->_hx___fontPath )) {
HXLINE( 188)						if ((registeredFont->_hx___fontPath != name)) {
HXLINE( 186)							_hx_tmp = (registeredFont->_hx___fontPathWithoutDirectory == name);
            						}
            						else {
HXLINE( 186)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 186)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 186)					_hx_tmp = true;
            				}
HXDLIN( 186)				if (_hx_tmp) {
HXLINE( 190)					if (registeredFont->_hx___initialize()) {
HXLINE( 192)						return registeredFont;
            					}
            				}
            			}
            		}
HXLINE( 201)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);
HXLINE( 203)		if (::hx::IsNotNull( font )) {
HXLINE( 205)			::openfl::text::Font_obj::_hx___registeredFonts->push(font);
HXLINE( 206)			return font;
            		}
HXLINE( 210)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

 ::openfl::text::Font TextEngine_obj::findFontVariant( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_214_findFontVariant)
HXLINE( 215)		::String fontName = format->font;
HXLINE( 216)		 ::Dynamic bold = format->bold;
HXLINE( 217)		 ::Dynamic italic = format->italic;
HXLINE( 219)		if (::hx::IsNull( fontName )) {
HXLINE( 219)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 220)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 222)		bool _hx_tmp;
HXDLIN( 222)		bool _hx_tmp1;
HXDLIN( 222)		if (( (bool)(bold) )) {
HXLINE( 222)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 222)			_hx_tmp1 = false;
            		}
HXDLIN( 222)		if (_hx_tmp1) {
HXLINE( 222)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 222)			_hx_tmp = false;
            		}
HXDLIN( 222)		if (_hx_tmp) {
HXLINE( 224)			return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 226)			bool _hx_tmp;
HXDLIN( 226)			if (( (bool)(bold) )) {
HXLINE( 226)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 226)				_hx_tmp = false;
            			}
HXDLIN( 226)			if (_hx_tmp) {
HXLINE( 228)				return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 230)				bool _hx_tmp;
HXDLIN( 230)				if (( (bool)(italic) )) {
HXLINE( 230)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 230)					_hx_tmp = false;
            				}
HXDLIN( 230)				if (_hx_tmp) {
HXLINE( 232)					return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            			}
            		}
HXLINE( 235)		return ::openfl::text::_internal::TextEngine_obj::findFont(fontName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFontVariant,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_264_getFormatHeight)
HXLINE( 265)		Float ascent;
HXDLIN( 265)		Float descent;
HXLINE( 271)		 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(format);
HXLINE( 273)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 275)			ascent = (( (Float)(format->size) ) * ( (Float)(format->_hx___ascent) ));
HXLINE( 276)			descent = (( (Float)(format->size) ) * ( (Float)(format->_hx___descent) ));
            		}
            		else {
HXLINE( 278)			bool _hx_tmp;
HXDLIN( 278)			if (::hx::IsNotNull( font )) {
HXLINE( 278)				_hx_tmp = (font->unitsPerEM != 0);
            			}
            			else {
HXLINE( 278)				_hx_tmp = false;
            			}
HXDLIN( 278)			if (_hx_tmp) {
HXLINE( 281)				ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) ));
HXLINE( 282)				descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) )));
            			}
            			else {
HXLINE( 290)				ascent = ( (Float)(format->size) );
HXLINE( 291)				descent = (( (Float)(format->size) ) * ((Float)0.185));
            			}
            		}
HXLINE( 265)		int leading = ( (int)(format->leading) );
HXLINE( 296)		return ((ascent + descent) + leading);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_300_getFont)
HXLINE( 301)		::String fontName = format->font;
HXLINE( 302)		 ::Dynamic bold = format->bold;
HXLINE( 303)		 ::Dynamic italic = format->italic;
HXLINE( 305)		if (::hx::IsNull( fontName )) {
HXLINE( 305)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 306)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 308)		bool _hx_tmp;
HXDLIN( 308)		bool _hx_tmp1;
HXDLIN( 308)		if (( (bool)(bold) )) {
HXLINE( 308)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 308)			_hx_tmp1 = false;
            		}
HXDLIN( 308)		if (_hx_tmp1) {
HXLINE( 308)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 308)			_hx_tmp = false;
            		}
HXDLIN( 308)		if (_hx_tmp) {
HXLINE( 310)			fontName = (fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94));
HXLINE( 311)			bold = false;
HXLINE( 312)			italic = false;
            		}
            		else {
HXLINE( 314)			bool _hx_tmp;
HXDLIN( 314)			if (( (bool)(bold) )) {
HXLINE( 314)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 314)				_hx_tmp = false;
            			}
HXDLIN( 314)			if (_hx_tmp) {
HXLINE( 316)				fontName = (fontNamePrefix + HX_(" Bold",c5,3d,c7,98));
HXLINE( 317)				bold = false;
            			}
            			else {
HXLINE( 319)				bool _hx_tmp;
HXDLIN( 319)				if (( (bool)(italic) )) {
HXLINE( 319)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 319)					_hx_tmp = false;
            				}
HXDLIN( 319)				if (_hx_tmp) {
HXLINE( 321)					fontName = (fontNamePrefix + HX_(" Italic",30,7b,a7,6d));
HXLINE( 322)					italic = false;
            				}
            				else {
HXLINE( 328)					bool _hx_tmp;
HXDLIN( 328)					if (( (bool)(bold) )) {
HXLINE( 328)						if ((fontName.indexOf(HX_(" Bold ",bb,ce,8e,15),null()) <= -1)) {
HXLINE( 328)							_hx_tmp = ::StringTools_obj::endsWith(fontName,HX_(" Bold",c5,3d,c7,98));
            						}
            						else {
HXLINE( 328)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 328)						_hx_tmp = false;
            					}
HXDLIN( 328)					if (_hx_tmp) {
HXLINE( 330)						bold = false;
            					}
HXLINE( 333)					bool _hx_tmp1;
HXDLIN( 333)					if (( (bool)(italic) )) {
HXLINE( 333)						if ((fontName.indexOf(HX_(" Italic ",f0,4e,e4,84),null()) <= -1)) {
HXLINE( 333)							_hx_tmp1 = ::StringTools_obj::endsWith(fontName,HX_(" Italic",30,7b,a7,6d));
            						}
            						else {
HXLINE( 333)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE( 333)						_hx_tmp1 = false;
            					}
HXDLIN( 333)					if (_hx_tmp1) {
HXLINE( 335)						italic = false;
            					}
            				}
            			}
            		}
HXLINE( 339)		::String font;
HXDLIN( 339)		if (( (bool)(italic) )) {
HXLINE( 339)			font = HX_("italic ",30,e3,44,91);
            		}
            		else {
HXLINE( 339)			font = HX_("normal ",19,70,da,2b);
            		}
HXLINE( 340)		font = (font + HX_("normal ",19,70,da,2b));
HXLINE( 341)		::String font1;
HXDLIN( 341)		if (( (bool)(bold) )) {
HXLINE( 341)			font1 = HX_("bold ",fb,d2,f5,b6);
            		}
            		else {
HXLINE( 341)			font1 = HX_("normal ",19,70,da,2b);
            		}
HXDLIN( 341)		font = (font + font1);
HXLINE( 342)		font = (font + (format->size + HX_("px",08,62,00,00)));
HXLINE( 343)		font = (font + ((HX_("/",2f,00,00,00) + ((format->leading + format->size) + 3)) + HX_("px ",18,65,55,00)));
HXLINE( 345)		::String font2;
HXDLIN( 345)		::String _hx_switch_0 = fontName;
            		if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 345)			font2 = HX_("sans-serif",c3,60,fb,08);
HXDLIN( 345)			goto _hx_goto_138;
            		}
            		if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 345)			font2 = HX_("serif",7d,1f,2e,7a);
HXDLIN( 345)			goto _hx_goto_138;
            		}
            		if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 345)			font2 = HX_("monospace",c3,d1,e5,5e);
HXDLIN( 345)			goto _hx_goto_138;
            		}
            		/* default */{
HXLINE( 345)			font2 = ((HX_("'",27,00,00,00) +  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\\s'\"]+(.*)[\\s'\"]+$",eb,e4,eb,f5),HX_("",00,00,00,00))->replace(fontName,HX_("$1",8d,1f,00,00))) + HX_("'",27,00,00,00));
            		}
            		_hx_goto_138:;
HXDLIN( 345)		font = (font + (HX_("",00,00,00,00) + font2));
HXLINE( 353)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

 ::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_357_getFontInstance)
HXLINE( 361)		 ::openfl::text::Font instance = null();
HXLINE( 362)		::Array< ::String > fontList = null();
HXLINE( 364)		bool _hx_tmp;
HXDLIN( 364)		if (::hx::IsNotNull( format )) {
HXLINE( 364)			_hx_tmp = ::hx::IsNotNull( format->font );
            		}
            		else {
HXLINE( 364)			_hx_tmp = false;
            		}
HXDLIN( 364)		if (_hx_tmp) {
HXLINE( 366)			if (::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->exists(format->font)) {
HXLINE( 368)				return ( ( ::openfl::text::Font)(::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->get(format->font)) );
            			}
HXLINE( 371)			instance = ::openfl::text::_internal::TextEngine_obj::findFontVariant(format);
HXLINE( 372)			if (::hx::IsNotNull( instance )) {
HXLINE( 372)				return instance;
            			}
HXLINE( 374)			::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 376)			::String _hx_switch_0 = format->font;
            			if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 380)				if (( (bool)(format->bold) )) {
HXLINE( 382)					if (( (bool)(format->italic) )) {
HXLINE( 384)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/arialbi.ttf",73,0e,91,06)));
            					}
            					else {
HXLINE( 388)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/arialbd.ttf",ee,27,90,25)));
            					}
            				}
            				else {
HXLINE( 393)					if (( (bool)(format->italic) )) {
HXLINE( 395)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/ariali.ttf",2d,c9,3e,6e)));
            					}
            					else {
HXLINE( 399)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/arial.ttf",2c,34,8e,d8)));
            					}
            				}
HXLINE( 380)				goto _hx_goto_140;
            			}
            			if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 422)				goto _hx_goto_140;
            			}
            			if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 428)				if (( (bool)(format->bold) )) {
HXLINE( 430)					if (( (bool)(format->italic) )) {
HXLINE( 432)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/courbi.ttf",77,1e,b8,e7)));
            					}
            					else {
HXLINE( 436)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/courbd.ttf",f2,37,b7,06)));
            					}
            				}
            				else {
HXLINE( 441)					if (( (bool)(format->italic) )) {
HXLINE( 443)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/couri.ttf",a9,a5,b8,d7)));
            					}
            					else {
HXLINE( 447)						fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/cour.ttf",30,7b,d2,6a)));
            					}
            				}
HXLINE( 428)				goto _hx_goto_140;
            			}
            			/* default */{
HXLINE( 471)				fontList = ::Array_obj< ::String >::__new(1)->init(0,((systemFontDirectory + HX_("/",2f,00,00,00)) + format->font));
            			}
            			_hx_goto_140:;
HXLINE( 474)			if (::hx::IsNotNull( fontList )) {
HXLINE( 476)				int _g = 0;
HXDLIN( 476)				while((_g < fontList->length)){
HXLINE( 476)					::String font = fontList->__get(_g);
HXDLIN( 476)					_g = (_g + 1);
HXLINE( 478)					instance = ::openfl::text::_internal::TextEngine_obj::findFont(font);
HXLINE( 480)					if (::hx::IsNotNull( instance )) {
HXLINE( 482)						::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->set(format->font,instance);
HXLINE( 483)						return instance;
            					}
            				}
            			}
HXLINE( 488)			instance = ::openfl::text::_internal::TextEngine_obj::findFont(HX_("_serif",be,66,15,76));
HXLINE( 489)			if (::hx::IsNotNull( instance )) {
HXLINE( 489)				return instance;
            			}
            		}
HXLINE( 492)		::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 495)		if (( (bool)(format->bold) )) {
HXLINE( 497)			if (( (bool)(format->italic) )) {
HXLINE( 499)				fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/timesbi.ttf",36,79,1a,28)));
            			}
            			else {
HXLINE( 503)				fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/timesbd.ttf",b1,92,19,47)));
            			}
            		}
            		else {
HXLINE( 508)			if (( (bool)(format->italic) )) {
HXLINE( 510)				fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/timesi.ttf",ca,27,e8,a0)));
            			}
            			else {
HXLINE( 514)				fontList = ::Array_obj< ::String >::__new(1)->init(0,(systemFontDirectory + HX_("/times.ttf",2f,58,44,c5)));
            			}
            		}
HXLINE( 536)		{
HXLINE( 536)			int _g = 0;
HXDLIN( 536)			while((_g < fontList->length)){
HXLINE( 536)				::String font = fontList->__get(_g);
HXDLIN( 536)				_g = (_g + 1);
HXLINE( 538)				instance = ::openfl::text::_internal::TextEngine_obj::findFont(font);
HXLINE( 540)				if (::hx::IsNotNull( instance )) {
HXLINE( 542)					::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->set(format->font,instance);
HXLINE( 543)					return instance;
            				}
            			}
            		}
HXLINE( 547)		{
HXLINE( 547)			 ::openfl::text::Font value = null();
HXDLIN( 547)			::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->set(format->font,value);
            		}
HXLINE( 550)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new( ::openfl::text::TextField textField) {
	::hx::ObjectPtr< TextEngine_obj > __this = new TextEngine_obj();
	__this->__construct(textField);
	return __this;
}

::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField) {
	TextEngine_obj *__this = (TextEngine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEngine_obj), true, "openfl.text._internal.TextEngine"));
	*(void **)__this = TextEngine_obj::_hx_vtable;
	__this->__construct(textField);
	return __this;
}

TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textBounds,"textBounds");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textBounds,"textBounds");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
}

::hx::Val TextEngine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return ::hx::Val( scrollH ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollV() : scrollV ); }
		if (HX_FIELD_EQ(inName,"getLine") ) { return ::hx::Val( getLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return ::hx::Val( maxChars ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return ::hx::Val( numLines ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { return ::hx::Val( restrict ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		if (HX_FIELD_EQ(inName,"trimText") ) { return ::hx::Val( trimText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return ::hx::Val( sharpness ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( textWidth ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return ::hx::Val( embedFonts ); }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return ::hx::Val( lineBreaks ); }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return ::hx::Val( lineWidths ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return ::hx::Val( maxScrollH ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxScrollV() : maxScrollV ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		if (HX_FIELD_EQ(inName,"textBounds") ) { return ::hx::Val( textBounds ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( textHeight ); }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return ::hx::Val( _hx___hasFocus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return ::hx::Val( gridFitType ); }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return ::hx::Val( lineAscents ); }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return ::hx::Val( lineHeights ); }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return ::hx::Val( _hx___isKeyDown ); }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return ::hx::Val( _hx___cairoFont ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return ::hx::Val( layoutGroups ); }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return ::hx::Val( lineDescents ); }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return ::hx::Val( lineLeadings ); }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { return ::hx::Val( _hx___shapeCache ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return ::hx::Val( _hx___textLayout ); }
		if (HX_FIELD_EQ(inName,"restrictText") ) { return ::hx::Val( restrictText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return ::hx::Val( antiAliasType ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomScrollV() : bottomScrollV ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return ::hx::Val( getLineBreaks_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return ::hx::Val( _hx___measuredWidth ); }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return ::hx::Val( getLayoutGroups_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return ::hx::Val( textFormatRanges ); }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return ::hx::Val( _hx___measuredHeight ); }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return ::hx::Val( _hx___restrictRegexp ); }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return ::hx::Val( _hx___selectionStart ); }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return ::hx::Val( _hx___useIntAdvances ); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return ::hx::Val( setTextAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return ::hx::Val( getLineBreakIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return ::hx::Val( getLineMeasurements_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return ::hx::Val( createRestrictRegexp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = ( _hx___defaultFonts ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findFontVariant") ) { outValue = findFontVariant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val TextEngine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) );scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) );restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBounds") ) { textBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { _hx___hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { _hx___isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { _hx___cairoFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { _hx___shapeCache=inValue.Cast<  ::openfl::text::_internal::ShapeCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { _hx___textLayout=inValue.Cast<  ::openfl::text::_internal::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { _hx___measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { _hx___measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { _hx___restrictRegexp=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { _hx___selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { _hx___useIntAdvances=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { _hx___defaultFonts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("layoutGroups",9e,a2,6c,37));
	outFields->push(HX_("lineAscents",45,0c,c2,3e));
	outFields->push(HX_("lineBreaks",e8,fd,5b,ea));
	outFields->push(HX_("lineDescents",0d,ad,64,49));
	outFields->push(HX_("lineLeadings",01,23,97,76));
	outFields->push(HX_("lineHeights",18,99,8e,3e));
	outFields->push(HX_("lineWidths",c1,8a,a4,20));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textBounds",02,07,0e,9d));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textFormatRanges",fa,0e,49,a2));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__hasFocus",3e,1d,1a,34));
	outFields->push(HX_("__isKeyDown",b7,2f,72,ce));
	outFields->push(HX_("__measuredHeight",ed,b6,23,42));
	outFields->push(HX_("__measuredWidth",c0,49,ec,02));
	outFields->push(HX_("__restrictRegexp",45,9f,ae,a9));
	outFields->push(HX_("__selectionStart",96,e3,b9,43));
	outFields->push(HX_("__shapeCache",81,aa,e8,5f));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__textLayout",57,aa,3c,c8));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__useIntAdvances",d9,17,72,7d));
	outFields->push(HX_("__cairoFont",57,e7,b5,28));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEngine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_("antiAliasType",68,c4,fa,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,autoSize),HX_("autoSize",d0,8f,79,2f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_("bottomScrollV",fe,f7,87,8b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_("embedFonts",2b,c7,e1,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,gridFitType),HX_("gridFitType",05,f3,13,b4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_("layoutGroups",9e,a2,6c,37)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineAscents),HX_("lineAscents",45,0c,c2,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_("lineBreaks",e8,fd,5b,ea)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineDescents),HX_("lineDescents",0d,ad,64,49)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_("lineLeadings",01,23,97,76)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineHeights),HX_("lineHeights",18,99,8e,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineWidths),HX_("lineWidths",c1,8a,a4,20)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_("maxChars",99,ef,d0,ef)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_("maxScrollH",57,ad,fc,9a)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_("maxScrollV",65,ad,fc,9a)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_("numLines",d9,f1,11,32)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_("restrict",3c,cb,9e,f1)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_("scrollH",9b,33,d8,30)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_("scrollV",a9,33,d8,30)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_("sharpness",81,22,25,1b)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,textBounds),HX_("textBounds",02,07,0e,9d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_("textFormatRanges",fa,0e,49,a2)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextEngine_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextEngine_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___hasFocus),HX_("__hasFocus",3e,1d,1a,34)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___isKeyDown),HX_("__isKeyDown",b7,2f,72,ce)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredHeight),HX_("__measuredHeight",ed,b6,23,42)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredWidth),HX_("__measuredWidth",c0,49,ec,02)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TextEngine_obj,_hx___restrictRegexp),HX_("__restrictRegexp",45,9f,ae,a9)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___selectionStart),HX_("__selectionStart",96,e3,b9,43)},
	{::hx::fsObject /*  ::openfl::text::_internal::ShapeCache */ ,(int)offsetof(TextEngine_obj,_hx___shapeCache),HX_("__shapeCache",81,aa,e8,5f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextEngine_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextLayout */ ,(int)offsetof(TextEngine_obj,_hx___textLayout),HX_("__textLayout",57,aa,3c,c8)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextEngine_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___useIntAdvances),HX_("__useIntAdvances",d9,17,72,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___cairoFont),HX_("__cairoFont",57,e7,b5,28)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(TextEngine_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextEngine_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextEngine_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_("UTF8_TAB",07,d5,41,1d)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_("UTF8_ENDLINE",01,29,41,cf)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_("UTF8_SPACE",f8,7b,a9,c7)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_("UTF8_HYPHEN",60,3c,3f,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextEngine_obj::_hx___defaultFonts,HX_("__defaultFonts",63,76,ad,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEngine_obj_sMemberFields[] = {
	HX_("antiAliasType",68,c4,fa,e7),
	HX_("autoSize",d0,8f,79,2f),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("bottomScrollV",fe,f7,87,8b),
	HX_("bounds",75,86,1d,66),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("embedFonts",2b,c7,e1,8e),
	HX_("gridFitType",05,f3,13,b4),
	HX_("height",e7,07,4c,02),
	HX_("layoutGroups",9e,a2,6c,37),
	HX_("lineAscents",45,0c,c2,3e),
	HX_("lineBreaks",e8,fd,5b,ea),
	HX_("lineDescents",0d,ad,64,49),
	HX_("lineLeadings",01,23,97,76),
	HX_("lineHeights",18,99,8e,3e),
	HX_("lineWidths",c1,8a,a4,20),
	HX_("maxChars",99,ef,d0,ef),
	HX_("maxScrollH",57,ad,fc,9a),
	HX_("maxScrollV",65,ad,fc,9a),
	HX_("multiline",ed,d2,11,9e),
	HX_("numLines",d9,f1,11,32),
	HX_("restrict",3c,cb,9e,f1),
	HX_("scrollH",9b,33,d8,30),
	HX_("scrollV",a9,33,d8,30),
	HX_("selectable",96,b6,2a,c4),
	HX_("sharpness",81,22,25,1b),
	HX_("text",ad,cc,f9,4c),
	HX_("textBounds",02,07,0e,9d),
	HX_("textHeight",74,88,3c,39),
	HX_("textFormatRanges",fa,0e,49,a2),
	HX_("textWidth",19,46,50,63),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("textField",cd,24,81,99),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__hasFocus",3e,1d,1a,34),
	HX_("__isKeyDown",b7,2f,72,ce),
	HX_("__measuredHeight",ed,b6,23,42),
	HX_("__measuredWidth",c0,49,ec,02),
	HX_("__restrictRegexp",45,9f,ae,a9),
	HX_("__selectionStart",96,e3,b9,43),
	HX_("__shapeCache",81,aa,e8,5f),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("__textLayout",57,aa,3c,c8),
	HX_("__texture",bb,19,2f,20),
	HX_("__useIntAdvances",d9,17,72,7d),
	HX_("__cairoFont",57,e7,b5,28),
	HX_("__font",ef,c0,b8,f2),
	HX_("createRestrictRegexp",41,d0,6b,e1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getLine",aa,c7,35,1a),
	HX_("getLineBreaks",1e,5a,ce,46),
	HX_("getLineBreakIndex",1d,16,36,36),
	HX_("getLineMeasurements",c1,9f,81,56),
	HX_("getLayoutGroups",54,f8,56,5a),
	HX_("restrictText",09,12,3e,34),
	HX_("setTextAlignment",74,0f,33,62),
	HX_("trimText",af,ae,63,65),
	HX_("update",09,86,05,87),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextEngine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEngine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#endif

::hx::Class TextEngine_obj::__mClass;

static ::String TextEngine_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("UTF8_TAB",07,d5,41,1d),
	HX_("UTF8_ENDLINE",01,29,41,cf),
	HX_("UTF8_SPACE",f8,7b,a9,c7),
	HX_("UTF8_HYPHEN",60,3c,3f,bf),
	HX_("__defaultFonts",63,76,ad,da),
	HX_("findFont",a8,6a,54,96),
	HX_("findFontVariant",bd,22,bb,b2),
	HX_("getFormatHeight",34,24,4b,62),
	HX_("getFont",85,0d,43,16),
	HX_("getFontInstance",3a,76,96,9e),
	::String(null())
};

void TextEngine_obj::__register()
{
	TextEngine_obj _hx_dummy;
	TextEngine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextEngine",04,88,80,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = TextEngine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextEngine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEngine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEngine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEngine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEngine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_34_boot)
HXDLIN(  34)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("__cairoFont",57,e7,b5,28), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_36_boot)
HXDLIN(  36)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_37_boot)
HXDLIN(  37)		UTF8_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_38_boot)
HXDLIN(  38)		UTF8_ENDLINE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_39_boot)
HXDLIN(  39)		UTF8_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_40_boot)
HXDLIN(  40)		UTF8_HYPHEN = 45;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_41_boot)
HXDLIN(  41)		_hx___defaultFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
