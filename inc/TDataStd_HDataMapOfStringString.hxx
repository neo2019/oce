// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_HDataMapOfStringString_HeaderFile
#define _TDataStd_HDataMapOfStringString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataStd_HDataMapOfStringString.hxx>

#include <TDataStd_DataMapOfStringString.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class TDataStd_DataMapOfStringString;


//! Extension of TDataStd_DataMapOfStringString class
//! to be manipulated by handle.
class TDataStd_HDataMapOfStringString : public MMgt_TShared
{

public:

  
  Standard_EXPORT TDataStd_HDataMapOfStringString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDataStd_HDataMapOfStringString(const TDataStd_DataMapOfStringString& theOther);
  
     const  TDataStd_DataMapOfStringString& Map()  const;
  
      TDataStd_DataMapOfStringString& ChangeMap() ;




  DEFINE_STANDARD_RTTI(TDataStd_HDataMapOfStringString)

protected:




private: 


  TDataStd_DataMapOfStringString myMap;


};


#include <TDataStd_HDataMapOfStringString.lxx>





#endif // _TDataStd_HDataMapOfStringString_HeaderFile
