// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFi2d_HeaderFile
#define _ChFi2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ChFi2d_ConstructionError_HeaderFile
#include <ChFi2d_ConstructionError.hxx>
#endif
class TopoDS_Edge;
class TopoDS_Vertex;
class TopoDS_Face;
class ChFi2d_Builder;


//! This package contains the algorithms used to build <br>
//!          fillets or chamfers on planar wire. <br>
//! <br>
//! This package provides two algorithms for 2D fillets: <br>
//!     ChFi2d_Builder - it constructs a fillet or chamfer <br>
//!                      for linear and circular edges of a face. <br>
//!     ChFi2d_FilletAPI - it encapsulates two algorithms: <br>
//!         ChFi2d_AnaFilletAlgo - analytical constructor of the fillet. <br>
//!                                It works only for linear and circular edges, <br>
//!                                having a common point. <br>
//!         ChFi2d_FilletAlgo - iteration recursive method constructing <br>
//!                             the fillet edge for any type of edges including <br>
//!                             ellipses and b-splines. <br>
//!                             The edges may even have no common point. <br>
//!     ChFi2d_ChamferAPI - an algoroithm for construction of chamfers <br>
//!                         between two linear edges of a plane. <br>
//! <br>
//! The algorithms ChFi2d_AnaFilletAlgo and ChFi2d_FilletAlgo may be used directly <br>
//! or via the interface class ChFi2d_FilletAPI. <br>
class ChFi2d  {
public:

  DEFINE_STANDARD_ALLOC






protected:





private:

  
  Standard_EXPORT   static  Standard_Boolean CommonVertex(const TopoDS_Edge& E1,const TopoDS_Edge& E2,TopoDS_Vertex& V) ;
  
  Standard_EXPORT   static  ChFi2d_ConstructionError FindConnectedEdges(const TopoDS_Face& F,const TopoDS_Vertex& V,TopoDS_Edge& E1,TopoDS_Edge& E2) ;



friend class ChFi2d_Builder;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
