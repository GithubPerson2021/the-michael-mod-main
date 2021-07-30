#ifndef INCLUDED_polymod_format_JSONParseFormat
#define INCLUDED_polymod_format_JSONParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,JSONParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES JSONParseFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JSONParseFormat_obj OBJ_;
		JSONParseFormat_obj();

	public:
		enum { _hx_ClassId = 0x14b3bff5 };

		void __construct(::String space, ::Dynamic replacer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.JSONParseFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.JSONParseFormat"); }
		static ::hx::ObjectPtr< JSONParseFormat_obj > __new(::String space, ::Dynamic replacer);
		static ::hx::ObjectPtr< JSONParseFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::String space, ::Dynamic replacer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JSONParseFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("JSONParseFormat",82,2a,a6,1a); }

		 ::polymod::format::TextFileFormat format;
		::String space;
		 ::Dynamic replacer;
		Dynamic replacer_dyn() { return replacer;}
		 ::Dynamic parse(::String str);
		::Dynamic parse_dyn();

		::String append(::String baseText,::String appendText,::String id);
		::Dynamic append_dyn();

		::String merge(::String baseText,::String mergeText,::String id);
		::Dynamic merge_dyn();

		 ::Dynamic _mergeJson( ::Dynamic base, ::Dynamic entry,::String id);
		::Dynamic _mergeJson_dyn();

		::String _targSigElementToString( ::Dynamic target);
		::Dynamic _targSigElementToString_dyn();

		void _inject( ::Dynamic obj,::String target,int arrIndex, ::Dynamic payload,::String signatureSoFar);
		::Dynamic _inject_dyn();

		 ::Dynamic _mergeObjects( ::Dynamic a, ::Dynamic b,::String signatureSoFar);
		::Dynamic _mergeObjects_dyn();

		 ::Dynamic copyVal( ::Dynamic a);
		::Dynamic copyVal_dyn();

		bool isPrimitive( ::Dynamic a);
		::Dynamic isPrimitive_dyn();

		 ::Dynamic _descend( ::Dynamic obj, ::Dynamic target,::String signatureSoFar, ::Dynamic _hx_struct);
		::Dynamic _descend_dyn();

		::Array< ::Dynamic> _getTargetSignature(::String str);
		::Dynamic _getTargetSignature_dyn();

		::String print( ::Dynamic data);
		::Dynamic print_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_JSONParseFormat */ 
