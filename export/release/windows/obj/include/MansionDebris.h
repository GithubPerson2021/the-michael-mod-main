#ifndef INCLUDED_MansionDebris
#define INCLUDED_MansionDebris

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(MansionDebris)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MansionDebris_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MansionDebris_obj OBJ_;
		MansionDebris_obj();

	public:
		enum { _hx_ClassId = 0x4ab2c70a };

		void __construct(Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MansionDebris")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MansionDebris"); }
		static ::hx::ObjectPtr< MansionDebris_obj > __new(Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor);
		static ::hx::ObjectPtr< MansionDebris_obj > __alloc(::hx::Ctx *_hx_ctx,Float sX,Float sY,::String debName,Float scroll,Float tFactor,Float tDelay,Float posFactor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MansionDebris_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MansionDebris",ca,b1,6b,6e); }

		Float sc;
		Float tF;
		Float tD;
		Float pF;
		Float sx;
		Float sy;
		Float time;
		Float grav;
		Float vsp;
		Float hsp;
		void update(Float elapsed);

};


#endif /* INCLUDED_MansionDebris */ 
