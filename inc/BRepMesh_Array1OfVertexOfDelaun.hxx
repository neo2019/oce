// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_Array1OfVertexOfDelaun_HeaderFile
#define _BRepMesh_Array1OfVertexOfDelaun_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class BRepMesh_Vertex;



class BRepMesh_Array1OfVertexOfDelaun  {
public:

  DEFINE_STANDARD_ALLOC

  
      BRepMesh_Array1OfVertexOfDelaun(const Standard_Integer Low,const Standard_Integer Up);
  
      BRepMesh_Array1OfVertexOfDelaun(const BRepMesh_Vertex& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const BRepMesh_Vertex& V) ;
  
        void Destroy() ;
~BRepMesh_Array1OfVertexOfDelaun()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const BRepMesh_Array1OfVertexOfDelaun& Assign(const BRepMesh_Array1OfVertexOfDelaun& Other) ;
   const BRepMesh_Array1OfVertexOfDelaun& operator =(const BRepMesh_Array1OfVertexOfDelaun& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const BRepMesh_Vertex& Value) ;
  
       const BRepMesh_Vertex& Value(const Standard_Integer Index) const;
     const BRepMesh_Vertex& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        BRepMesh_Vertex& ChangeValue(const Standard_Integer Index) ;
      BRepMesh_Vertex& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   BRepMesh_Array1OfVertexOfDelaun(const BRepMesh_Array1OfVertexOfDelaun& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item BRepMesh_Vertex
#define Array1Item_hxx <BRepMesh_Vertex.hxx>
#define TCollection_Array1 BRepMesh_Array1OfVertexOfDelaun
#define TCollection_Array1_hxx <BRepMesh_Array1OfVertexOfDelaun.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
