#ifndef INCLUDED_flixel_system_FlxQuadTree
#define INCLUDED_flixel_system_FlxQuadTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxLinkedList)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxQuadTree)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxQuadTree_obj : public  ::flixel::math::FlxRect_obj
{
	public:
		typedef  ::flixel::math::FlxRect_obj super;
		typedef FlxQuadTree_obj OBJ_;
		FlxQuadTree_obj();

	public:
		enum { _hx_ClassId = 0x1fbb2b20 };

		void __construct(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxQuadTree")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.FlxQuadTree"); }
		static ::hx::ObjectPtr< FlxQuadTree_obj > __new(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent);
		static ::hx::ObjectPtr< FlxQuadTree_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxQuadTree_obj();

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
		::String __ToString() const { return HX_("FlxQuadTree",37,48,37,ec); }

		static void __boot();
		static int A_LIST;
		static int B_LIST;
		static int divisions;
		static int _min;
		static  ::flixel::FlxObject _object;
		static Float _objectLeftEdge;
		static Float _objectTopEdge;
		static Float _objectRightEdge;
		static Float _objectBottomEdge;
		static int _list;
		static bool _useBothLists;
		static  ::Dynamic _processingCallback;
		static Dynamic _processingCallback_dyn() { return _processingCallback;}
		static  ::Dynamic _notifyCallback;
		static Dynamic _notifyCallback_dyn() { return _notifyCallback;}
		static  ::flixel::_hx_system::FlxLinkedList _iterator;
		static Float _objectHullX;
		static Float _objectHullY;
		static Float _objectHullWidth;
		static Float _objectHullHeight;
		static Float _checkObjectHullX;
		static Float _checkObjectHullY;
		static Float _checkObjectHullWidth;
		static Float _checkObjectHullHeight;
		static int _NUM_CACHED_QUAD_TREES;
		static  ::flixel::_hx_system::FlxQuadTree _cachedTreesHead;
		static  ::flixel::_hx_system::FlxQuadTree recycle(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent);
		static ::Dynamic recycle_dyn();

		static void clearCache();
		static ::Dynamic clearCache_dyn();

		bool exists;
		bool _canSubdivide;
		 ::flixel::_hx_system::FlxLinkedList _headA;
		 ::flixel::_hx_system::FlxLinkedList _tailA;
		 ::flixel::_hx_system::FlxLinkedList _headB;
		 ::flixel::_hx_system::FlxLinkedList _tailB;
		 ::flixel::_hx_system::FlxQuadTree _northWestTree;
		 ::flixel::_hx_system::FlxQuadTree _northEastTree;
		 ::flixel::_hx_system::FlxQuadTree _southEastTree;
		 ::flixel::_hx_system::FlxQuadTree _southWestTree;
		Float _leftEdge;
		Float _rightEdge;
		Float _topEdge;
		Float _bottomEdge;
		Float _halfWidth;
		Float _halfHeight;
		Float _midpointX;
		Float _midpointY;
		 ::flixel::_hx_system::FlxQuadTree next;
		void reset(Float X,Float Y,Float Width,Float Height, ::flixel::_hx_system::FlxQuadTree Parent);
		::Dynamic reset_dyn();

		void destroy();

		void load( ::flixel::FlxBasic ObjectOrGroup1, ::flixel::FlxBasic ObjectOrGroup2, ::Dynamic NotifyCallback, ::Dynamic ProcessCallback);
		::Dynamic load_dyn();

		void add( ::flixel::FlxBasic ObjectOrGroup,int list);
		::Dynamic add_dyn();

		void addObject();
		::Dynamic addObject_dyn();

		void addToList();
		::Dynamic addToList_dyn();

		bool execute();
		::Dynamic execute_dyn();

		bool overlapNode();
		::Dynamic overlapNode_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxQuadTree */ 
