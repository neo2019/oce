// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dAdaptor_HCurve_HeaderFile
#define _Geom2dAdaptor_HCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Geom2dAdaptor_HCurve.hxx>

#include <Geom2dAdaptor_GHCurve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Standard_Real.hxx>
class Standard_ConstructionError;
class Geom2dAdaptor_Curve;
class Geom2d_Curve;


//! Provides an interface between the services provided by any
//! curve from the package Geom2d and those required
//! of the curve by algorithms, which use it.
class Geom2dAdaptor_HCurve : public Geom2dAdaptor_GHCurve
{

public:

  
  Standard_EXPORT Geom2dAdaptor_HCurve();
  
  Standard_EXPORT Geom2dAdaptor_HCurve(const Geom2dAdaptor_Curve& AS);
  
  Standard_EXPORT Geom2dAdaptor_HCurve(const Handle(Geom2d_Curve)& S);
  
  //! ConstructionError is raised if UFirst>ULast or VFirst>VLast
  Standard_EXPORT Geom2dAdaptor_HCurve(const Handle(Geom2d_Curve)& S, const Standard_Real UFirst, const Standard_Real ULast);




  DEFINE_STANDARD_RTTI(Geom2dAdaptor_HCurve)

protected:




private: 




};







#endif // _Geom2dAdaptor_HCurve_HeaderFile
