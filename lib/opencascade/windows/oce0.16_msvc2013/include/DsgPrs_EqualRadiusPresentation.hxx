// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_EqualRadiusPresentation_HeaderFile
#define _DsgPrs_EqualRadiusPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class gp_Pnt;
class Geom_Plane;


//! A framework to define display of equality in radii. <br>
class DsgPrs_EqualRadiusPresentation  {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the points FirstCenter, SecondCenter, <br>
//! FirstPoint, SecondPoint, and the plane Plane to the <br>
//! presentation object aPresentation. <br>
//! The display attributes of these elements is defined by <br>
//! the attribute manager aDrawer. <br>
//! FirstCenter and SecondCenter are the centers of the <br>
//! first and second shapes respectively, and FirstPoint <br>
//! and SecondPoint are the attachment points of the radii to arcs. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& FirstCenter,const gp_Pnt& SecondCenter,const gp_Pnt& FirstPoint,const gp_Pnt& SecondPoint,const Handle(Geom_Plane)& Plane) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif