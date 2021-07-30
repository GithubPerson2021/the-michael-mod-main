#ifndef INCLUDED_Character
#define INCLUDED_Character

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES Character_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Character_obj OBJ_;
		Character_obj();

	public:
		enum { _hx_ClassId = 0x55af02e5 };

		void __construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Character")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Character"); }
		static ::hx::ObjectPtr< Character_obj > __new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		static ::hx::ObjectPtr< Character_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Character_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Character",89,bb,a4,e3); }

		 ::haxe::ds::StringMap animOffsets;
		bool debugMode;
		bool isPlayer;
		::String curCharacter;
		Float holdTimer;
		bool powerup;
		virtual void update(Float elapsed);

		bool danced;
		void dance();
		::Dynamic dance_dyn();

		void playAnim(::String AnimName,::hx::Null< bool >  Force,::hx::Null< bool >  Reversed,::hx::Null< int >  Frame);
		::Dynamic playAnim_dyn();

		void addOffset(::String name,::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic addOffset_dyn();

};


#endif /* INCLUDED_Character */ 
