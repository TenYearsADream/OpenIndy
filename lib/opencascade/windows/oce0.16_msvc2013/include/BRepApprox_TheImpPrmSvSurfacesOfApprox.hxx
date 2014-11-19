// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepApprox_TheImpPrmSvSurfacesOfApprox_HeaderFile
#define _BRepApprox_TheImpPrmSvSurfacesOfApprox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox_HeaderFile
#include <BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx>
#endif
#ifndef _ApproxInt_SvSurfaces_HeaderFile
#include <ApproxInt_SvSurfaces.hxx>
#endif
#ifndef _Handle_BRepApprox_ApproxLine_HeaderFile
#include <Handle_BRepApprox_ApproxLine.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepAdaptor_Surface;
class BRepApprox_SurfaceTool;
class IntSurf_Quadric;
class IntSurf_QuadricTool;
class BRepApprox_ApproxLine;
class BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;



class BRepApprox_TheImpPrmSvSurfacesOfApprox  : public ApproxInt_SvSurfaces {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepApprox_TheImpPrmSvSurfacesOfApprox(const BRepAdaptor_Surface& Surf1,const IntSurf_Quadric& Surf2);
  
  Standard_EXPORT   BRepApprox_TheImpPrmSvSurfacesOfApprox(const IntSurf_Quadric& Surf1,const BRepAdaptor_Surface& Surf2);
  
  Standard_EXPORT     Standard_Boolean Compute(Standard_Real& u1,Standard_Real& v1,Standard_Real& u2,Standard_Real& v2,gp_Pnt& Pt,gp_Vec& Tg,gp_Vec2d& Tguv1,gp_Vec2d& Tguv2) ;
  
  Standard_EXPORT     void Pnt(const Standard_Real u1,const Standard_Real v1,const Standard_Real u2,const Standard_Real v2,gp_Pnt& P) ;
  
  Standard_EXPORT     Standard_Boolean Tangency(const Standard_Real u1,const Standard_Real v1,const Standard_Real u2,const Standard_Real v2,gp_Vec& Tg) ;
  
  Standard_EXPORT     Standard_Boolean TangencyOnSurf1(const Standard_Real u1,const Standard_Real v1,const Standard_Real u2,const Standard_Real v2,gp_Vec2d& Tg) ;
  
  Standard_EXPORT     Standard_Boolean TangencyOnSurf2(const Standard_Real u1,const Standard_Real v1,const Standard_Real u2,const Standard_Real v2,gp_Vec2d& Tg) ;





protected:





private:



gp_Pnt2d MyParOnS1;
gp_Pnt2d MyParOnS2;
gp_Pnt MyPnt;
gp_Vec2d MyTguv1;
gp_Vec2d MyTguv2;
gp_Vec MyTg;
Standard_Boolean MyIsTangent;
Standard_Boolean MyHasBeenComputed;
gp_Pnt2d MyParOnS1bis;
gp_Pnt2d MyParOnS2bis;
gp_Pnt MyPntbis;
gp_Vec2d MyTguv1bis;
gp_Vec2d MyTguv2bis;
gp_Vec MyTgbis;
Standard_Boolean MyIsTangentbis;
Standard_Boolean MyHasBeenComputedbis;
Standard_Boolean MyImplicitFirst;
BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox MyZerImpFunc;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif