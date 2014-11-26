// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_FunctionGuide_HeaderFile
#define _GeomFill_FunctionGuide_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_GeomFill_SectionLaw_HeaderFile
#include <Handle_GeomFill_SectionLaw.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Adaptor3d_HCurve;
class GeomFill_SectionLaw;
class Geom_Curve;
class Geom_Surface;
class gp_Pnt;
class gp_XYZ;
class math_Vector;
class math_Matrix;
class gp_Vec;



class GeomFill_FunctionGuide  : public math_FunctionSetWithDerivatives {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomFill_FunctionGuide(const Handle(GeomFill_SectionLaw)& S,const Handle(Adaptor3d_HCurve)& Guide,const Standard_Real ParamOnLaw = 0.0);
  
  Standard_EXPORT     void SetParam(const Standard_Real Param,const gp_Pnt& Centre,const gp_XYZ& Dir,const gp_XYZ& XDir) ;
  //! returns the number of variables of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbVariables() const;
  //! returns the number of equations of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  //! returns the values <F> of the T derivatives for <br>
//!          the parameter Param . <br>
  Standard_EXPORT     Standard_Boolean DerivT(const math_Vector& X,const gp_XYZ& DCentre,const gp_XYZ& DDir,math_Vector& DFDT) ;
  //! returns the values <F> of the T2 derivatives for <br>
//!          the parameter Param . <br>//! returns the values <D> of  the TX derivatives for <br>
//!          the parameter Param . <br>
//!    returns Boolean  is static; <br>//! returns the values <T> of  the X2 derivatives for <br>
//!          the parameter Param . <br>
//!    returns Boolean  is static; <br>
  Standard_EXPORT     Standard_Boolean Deriv2T(const gp_XYZ& DCentre,const gp_XYZ& DDir,math_Vector& DFDT,math_Vector& D2FT) ;





protected:





private:

  
  Standard_EXPORT     void DSDT(const Standard_Real U,const Standard_Real V,const gp_XYZ& DCentre,const gp_XYZ& DDir,gp_Vec& DSDT) const;


Handle_Adaptor3d_HCurve TheGuide;
Handle_GeomFill_SectionLaw TheLaw;
Standard_Boolean isconst;
Handle_Geom_Curve TheCurve;
Handle_Geom_Curve TheConst;
Handle_Geom_Surface TheSurface;
Standard_Real First;
Standard_Real Last;
Standard_Real TheUonS;
gp_XYZ Centre;
gp_XYZ Dir;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif