// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_Array1OfMultiPoint_HeaderFile
#define _AppParCurves_Array1OfMultiPoint_HeaderFile

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
class AppParCurves_MultiPoint;



class AppParCurves_Array1OfMultiPoint  {
public:

  DEFINE_STANDARD_ALLOC

  
      AppParCurves_Array1OfMultiPoint(const Standard_Integer Low,const Standard_Integer Up);
  
      AppParCurves_Array1OfMultiPoint(const AppParCurves_MultiPoint& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const AppParCurves_MultiPoint& V) ;
  
        void Destroy() ;
~AppParCurves_Array1OfMultiPoint()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const AppParCurves_Array1OfMultiPoint& Assign(const AppParCurves_Array1OfMultiPoint& Other) ;
   const AppParCurves_Array1OfMultiPoint& operator =(const AppParCurves_Array1OfMultiPoint& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppParCurves_MultiPoint& Value) ;
  
       const AppParCurves_MultiPoint& Value(const Standard_Integer Index) const;
     const AppParCurves_MultiPoint& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        AppParCurves_MultiPoint& ChangeValue(const Standard_Integer Index) ;
      AppParCurves_MultiPoint& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   AppParCurves_Array1OfMultiPoint(const AppParCurves_Array1OfMultiPoint& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item AppParCurves_MultiPoint
#define Array1Item_hxx <AppParCurves_MultiPoint.hxx>
#define TCollection_Array1 AppParCurves_Array1OfMultiPoint
#define TCollection_Array1_hxx <AppParCurves_Array1OfMultiPoint.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
