// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ShapeDefinition_HeaderFile
#define _StepRepr_ShapeDefinition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepRepr_ProductDefinitionShape_HeaderFile
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#endif
#ifndef _Handle_StepRepr_ShapeAspect_HeaderFile
#include <Handle_StepRepr_ShapeAspect.hxx>
#endif
#ifndef _Handle_StepRepr_ShapeAspectRelationship_HeaderFile
#include <Handle_StepRepr_ShapeAspectRelationship.hxx>
#endif
class Standard_Transient;
class StepRepr_ProductDefinitionShape;
class StepRepr_ShapeAspect;
class StepRepr_ShapeAspectRelationship;



class StepRepr_ShapeDefinition  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a ShapeDefinition SelectType <br>
  Standard_EXPORT   StepRepr_ShapeDefinition();
  //! Recognizes a ShapeDefinition Kind Entity that is : <br>
//!        1 -> ProductDefinitionShape <br>
//!        2 -> ShapeAspect <br>
//!        3 -> ShapeAspectRelationship <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a ProductDefinitionShape (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ProductDefinitionShape ProductDefinitionShape() const;
  //! returns Value as a ShapeAspect (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspect ShapeAspect() const;
  //! returns Value as a ShapeAspectRelationship (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspectRelationship ShapeAspectRelationship() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif