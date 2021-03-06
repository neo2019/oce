// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_SurfaceOfRevolution_HeaderFile
#define _PGeom_SurfaceOfRevolution_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom_SurfaceOfRevolution.hxx>

#include <gp_Pnt.hxx>
#include <PGeom_SweptSurface.hxx>
#include <Handle_PGeom_Curve.hxx>
class PGeom_Curve;
class gp_Dir;
class gp_Pnt;


class PGeom_SurfaceOfRevolution : public PGeom_SweptSurface
{

public:

  
  //! Creates a SurfaceOfRevolution with default values.
  Standard_EXPORT PGeom_SurfaceOfRevolution();
  
  //! Creates a SurfaceOfRevolution with these values.
  Standard_EXPORT PGeom_SurfaceOfRevolution(const Handle(PGeom_Curve)& aBasisCurve, const gp_Dir& aDirection, const gp_Pnt& aLocation);
  
  //! Set the value of the field location with <aLocation>.
  Standard_EXPORT   void Location (const gp_Pnt& aLocation) ;
  
  //! Returns the value of the field location.
  Standard_EXPORT   gp_Pnt Location()  const;

PGeom_SurfaceOfRevolution(const Storage_stCONSTclCOM& a) : PGeom_SweptSurface(a)
{
  
}
    const gp_Pnt& _CSFDB_GetPGeom_SurfaceOfRevolutionlocation() const { return location; }



  DEFINE_STANDARD_RTTI(PGeom_SurfaceOfRevolution)

protected:




private: 


  gp_Pnt location;


};







#endif // _PGeom_SurfaceOfRevolution_HeaderFile
