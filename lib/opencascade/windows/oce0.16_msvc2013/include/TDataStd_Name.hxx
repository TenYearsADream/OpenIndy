// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Name_HeaderFile
#define _TDataStd_Name_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_Name_HeaderFile
#include <Handle_TDataStd_Name.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_DomainError;
class Standard_GUID;
class TDF_Label;
class TCollection_ExtendedString;
class TDF_Attribute;
class TDF_RelocationTable;


//! Used to define a name attribute containing a string which specifies the name. <br>
class TDataStd_Name : public TDF_Attribute {

public:

  //! class methods working on the name itself <br>
//!          ======================================== <br>//! Returns the GUID for name attributes. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Creates (if does not exist) and sets the name in the name attribute. <br>//! from any label <L>  search in father  labels (L is not <br>
//!          concerned) the first name attribute.if found set it in <br>
//!          <father>. <br>//! class methods working on the name tree <br>
//!          ====================================== <br>//! Search in the  whole TDF_Data the Name attribute which <br>
//!           fit with <fullPath>. Returns True if found. <br>//!  Search  under <currentLabel>  a  label which fit with <br>
//!          <name>. Returns True if  found. Shortcut which  avoids <br>
//!          building a ListOfExtendedStrin. <br>//!  Search in the whole TDF_Data the label which fit with name <br>
//!           Returns True if found. <br>//! tools methods to translate path <-> pathlist <br>
//!          =========================================== <br>//! move to draw For Draw test we may provide this tool method which convert a path in a <br>
//!	    	sequence of string to call after the FindLabel methods. <br>
//!          Example: if it's given "Assembly:Part_1:Sketch_5" it will return in <pathlist> <br>
//!          the list of 3 strings: "Assembly","Part_1","Sketch_5". <br>//! move to draw from <pathlist> build the string path <br>//! Name methods <br>
//!          ============ <br>
  Standard_EXPORT   static  Handle_TDataStd_Name Set(const TDF_Label& label,const TCollection_ExtendedString& string) ;
  
  Standard_EXPORT   TDataStd_Name();
  //! Sets <S> as name. Raises if <S> is not a valid name. <br>
  Standard_EXPORT     void Set(const TCollection_ExtendedString& S) ;
  
//!    Returns the name contained in this name attribute. <br>
  Standard_EXPORT    const TCollection_ExtendedString& Get() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_Name)

protected:




private: 


TCollection_ExtendedString myString;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif