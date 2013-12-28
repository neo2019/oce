// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_Array1OfListOfInteger_HeaderFile
#define _TColStd_Array1OfListOfInteger_HeaderFile

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
class TColStd_ListOfInteger;



class TColStd_Array1OfListOfInteger  {
public:

  DEFINE_STANDARD_ALLOC

  
      TColStd_Array1OfListOfInteger(const Standard_Integer Low,const Standard_Integer Up);
  
      TColStd_Array1OfListOfInteger(const TColStd_ListOfInteger& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const TColStd_ListOfInteger& V) ;
  
        void Destroy() ;
~TColStd_Array1OfListOfInteger()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TColStd_Array1OfListOfInteger& Assign(const TColStd_Array1OfListOfInteger& Other) ;
   const TColStd_Array1OfListOfInteger& operator =(const TColStd_Array1OfListOfInteger& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const TColStd_ListOfInteger& Value) ;
  
       const TColStd_ListOfInteger& Value(const Standard_Integer Index) const;
     const TColStd_ListOfInteger& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        TColStd_ListOfInteger& ChangeValue(const Standard_Integer Index) ;
      TColStd_ListOfInteger& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TColStd_Array1OfListOfInteger(const TColStd_Array1OfListOfInteger& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item TColStd_ListOfInteger
#define Array1Item_hxx <TColStd_ListOfInteger.hxx>
#define TCollection_Array1 TColStd_Array1OfListOfInteger
#define TCollection_Array1_hxx <TColStd_Array1OfListOfInteger.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
