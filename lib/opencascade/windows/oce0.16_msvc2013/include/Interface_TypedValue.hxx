// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_TypedValue_HeaderFile
#define _Interface_TypedValue_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_TypedValue_HeaderFile
#include <Handle_Interface_TypedValue.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfAsciiString_HeaderFile
#include <Handle_TColStd_HArray1OfAsciiString.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfInteger_HeaderFile
#include <Handle_Dico_DictionaryOfInteger.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _MoniTool_TypedValue_HeaderFile
#include <MoniTool_TypedValue.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Interface_ParamType_HeaderFile
#include <Interface_ParamType.hxx>
#endif
#ifndef _MoniTool_ValueType_HeaderFile
#include <MoniTool_ValueType.hxx>
#endif
class Standard_Type;
class TColStd_HArray1OfAsciiString;
class Dico_DictionaryOfInteger;
class TCollection_HAsciiString;
class Standard_Transient;
class Interface_InterfaceError;


//! Now strictly equivalent to TypedValue from MoniTool, <br>
//!           except for ParamType which remains for compatibility reasons <br>
//! <br>
//!           This class allows to dynamically manage .. typed values, i.e. <br>
//!           values which have an alphanumeric expression, but with <br>
//!           controls. Such as "must be an Integer" or "Enumerative Text" <br>
//!           etc <br>
//! <br>
//!           Hence, a TypedValue brings a specification (type + constraints <br>
//!           if any) and a value. Its basic form is a string, it can be <br>
//!           specified as integer or real or enumerative string, then <br>
//!           queried as such. <br>
//!           Its string content, which is a Handle(HAsciiString) can be <br>
//!           shared by other data structures, hence gives a direct on line <br>
//!           access to its value. <br>
class Interface_TypedValue : public MoniTool_TypedValue {

public:

  //! Creates a TypedValue, with a name <br>
//! <br>
//!           type gives the type of the parameter, default is free text <br>
//!           Also available : Integer, Real, Enum, Entity (i.e. Object) <br>
//!           More precise specifications, titles, can be given to the <br>
//!           TypedValue once created <br>
//! <br>
//!           init gives an initial value. If it is not given, the <br>
//!           TypedValue begins as "not set", its value is empty <br>
  Standard_EXPORT   Interface_TypedValue(const Standard_CString name,const Interface_ParamType type = Interface_ParamText,const Standard_CString init = "");
  //! Returns the type <br>
//!           I.E. calls ValueType then makes correspondance between <br>
//!             ParamType from Interface (which remains for compatibility <br>
//!              reasons) and ValueType from MoniTool <br>
  Standard_EXPORT     Interface_ParamType Type() const;
  //! Correspondance ParamType from Interface  to <br>
//!               ValueType from MoniTool <br>
  Standard_EXPORT   static  MoniTool_ValueType ParamTypeToValueType(const Interface_ParamType typ) ;
  //! Correspondance ParamType from Interface  to <br>
//!               ValueType from MoniTool <br>
  Standard_EXPORT   static  Interface_ParamType ValueTypeToParamType(const MoniTool_ValueType typ) ;




  DEFINE_STANDARD_RTTI(Interface_TypedValue)

protected:




private: 


TCollection_AsciiString thename;
TCollection_AsciiString thedef;
TCollection_AsciiString thelabel;
Handle_Standard_Type theotyp;
TCollection_AsciiString theunidef;
Handle_TColStd_HArray1OfAsciiString theenums;
Handle_Dico_DictionaryOfInteger theeadds;
TCollection_AsciiString thesatisn;
Handle_TCollection_HAsciiString thehval;
Handle_Standard_Transient theoval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif