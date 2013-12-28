// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_HArray1OfLocationLaw_HeaderFile
#define _GeomFill_HArray1OfLocationLaw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_HArray1OfLocationLaw_HeaderFile
#include <Handle_GeomFill_HArray1OfLocationLaw.hxx>
#endif

#ifndef _GeomFill_Array1OfLocationLaw_HeaderFile
#include <GeomFill_Array1OfLocationLaw.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_GeomFill_LocationLaw_HeaderFile
#include <Handle_GeomFill_LocationLaw.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class GeomFill_LocationLaw;
class GeomFill_Array1OfLocationLaw;



class GeomFill_HArray1OfLocationLaw : public MMgt_TShared {

public:

  
      GeomFill_HArray1OfLocationLaw(const Standard_Integer Low,const Standard_Integer Up);
  
      GeomFill_HArray1OfLocationLaw(const Standard_Integer Low,const Standard_Integer Up,const Handle(GeomFill_LocationLaw)& V);
  
        void Init(const Handle(GeomFill_LocationLaw)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(GeomFill_LocationLaw)& Value) ;
  
       const Handle_GeomFill_LocationLaw& Value(const Standard_Integer Index) const;
  
        Handle_GeomFill_LocationLaw& ChangeValue(const Standard_Integer Index) ;
  
       const GeomFill_Array1OfLocationLaw& Array1() const;
  
        GeomFill_Array1OfLocationLaw& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(GeomFill_HArray1OfLocationLaw)

protected:




private: 


GeomFill_Array1OfLocationLaw myArray;


};

#define ItemHArray1 Handle_GeomFill_LocationLaw
#define ItemHArray1_hxx <GeomFill_LocationLaw.hxx>
#define TheArray1 GeomFill_Array1OfLocationLaw
#define TheArray1_hxx <GeomFill_Array1OfLocationLaw.hxx>
#define TCollection_HArray1 GeomFill_HArray1OfLocationLaw
#define TCollection_HArray1_hxx <GeomFill_HArray1OfLocationLaw.hxx>
#define Handle_TCollection_HArray1 Handle_GeomFill_HArray1OfLocationLaw
#define TCollection_HArray1_Type_() GeomFill_HArray1OfLocationLaw_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
