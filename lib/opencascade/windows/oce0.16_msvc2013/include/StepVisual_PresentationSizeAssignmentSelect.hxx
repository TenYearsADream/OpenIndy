// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentationSizeAssignmentSelect_HeaderFile
#define _StepVisual_PresentationSizeAssignmentSelect_HeaderFile

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
#ifndef _Handle_StepVisual_PresentationView_HeaderFile
#include <Handle_StepVisual_PresentationView.hxx>
#endif
#ifndef _Handle_StepVisual_PresentationArea_HeaderFile
#include <Handle_StepVisual_PresentationArea.hxx>
#endif
#ifndef _Handle_StepVisual_AreaInSet_HeaderFile
#include <Handle_StepVisual_AreaInSet.hxx>
#endif
class Standard_Transient;
class StepVisual_PresentationView;
class StepVisual_PresentationArea;
class StepVisual_AreaInSet;



class StepVisual_PresentationSizeAssignmentSelect  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a PresentationSizeAssignmentSelect SelectType <br>
  Standard_EXPORT   StepVisual_PresentationSizeAssignmentSelect();
  //! Recognizes a PresentationSizeAssignmentSelect Kind Entity that is : <br>
//!        1 -> PresentationView <br>
//!        2 -> PresentationArea <br>
//!        3 -> AreaInSet <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a PresentationView (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationView PresentationView() const;
  //! returns Value as a PresentationArea (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationArea PresentationArea() const;
  //! returns Value as a AreaInSet (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_AreaInSet AreaInSet() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif