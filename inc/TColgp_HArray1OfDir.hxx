// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray1OfDir_HeaderFile
#define _TColgp_HArray1OfDir_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfDir_HeaderFile
#include <Handle_TColgp_HArray1OfDir.hxx>
#endif

#ifndef _TColgp_Array1OfDir_HeaderFile
#include <TColgp_Array1OfDir.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_Dir;
class TColgp_Array1OfDir;



class TColgp_HArray1OfDir : public MMgt_TShared {

public:

  
      TColgp_HArray1OfDir(const Standard_Integer Low,const Standard_Integer Up);
  
      TColgp_HArray1OfDir(const Standard_Integer Low,const Standard_Integer Up,const gp_Dir& V);
  
        void Init(const gp_Dir& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const gp_Dir& Value) ;
  
       const gp_Dir& Value(const Standard_Integer Index) const;
  
        gp_Dir& ChangeValue(const Standard_Integer Index) ;
  
       const TColgp_Array1OfDir& Array1() const;
  
        TColgp_Array1OfDir& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray1OfDir)

protected:




private: 


TColgp_Array1OfDir myArray;


};

#define ItemHArray1 gp_Dir
#define ItemHArray1_hxx <gp_Dir.hxx>
#define TheArray1 TColgp_Array1OfDir
#define TheArray1_hxx <TColgp_Array1OfDir.hxx>
#define TCollection_HArray1 TColgp_HArray1OfDir
#define TCollection_HArray1_hxx <TColgp_HArray1OfDir.hxx>
#define Handle_TCollection_HArray1 Handle_TColgp_HArray1OfDir
#define TCollection_HArray1_Type_() TColgp_HArray1OfDir_Type_()

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
