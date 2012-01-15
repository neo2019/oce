// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_DataMapOfShapeShapesSet_HeaderFile
#define _TNaming_DataMapOfShapeShapesSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TNaming_DataMapNodeOfDataMapOfShapeShapesSet_HeaderFile
#include <Handle_TNaming_DataMapNodeOfDataMapOfShapeShapesSet.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TNaming_ShapesSet;
class TopTools_ShapeMapHasher;
class TNaming_DataMapNodeOfDataMapOfShapeShapesSet;
class TNaming_DataMapIteratorOfDataMapOfShapeShapesSet;



class TNaming_DataMapOfShapeShapesSet  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TNaming_DataMapOfShapeShapesSet(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TNaming_DataMapOfShapeShapesSet& Assign(const TNaming_DataMapOfShapeShapesSet& Other) ;
    TNaming_DataMapOfShapeShapesSet& operator =(const TNaming_DataMapOfShapeShapesSet& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TNaming_DataMapOfShapeShapesSet()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const TNaming_ShapesSet& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const TNaming_ShapesSet& Find(const TopoDS_Shape& K) const;
   const TNaming_ShapesSet& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TNaming_ShapesSet& ChangeFind(const TopoDS_Shape& K) ;
    TNaming_ShapesSet& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   TNaming_DataMapOfShapeShapesSet(const TNaming_DataMapOfShapeShapesSet& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif