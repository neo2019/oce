// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_SequenceNodeOfSequenceOfBasicElt_HeaderFile
#define _MAT_SequenceNodeOfSequenceOfBasicElt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MAT_SequenceNodeOfSequenceOfBasicElt.hxx>

#include <Handle_MAT_BasicElt.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class MAT_BasicElt;
class MAT_SequenceOfBasicElt;



class MAT_SequenceNodeOfSequenceOfBasicElt : public TCollection_SeqNode
{

public:

  
    MAT_SequenceNodeOfSequenceOfBasicElt(const Handle(MAT_BasicElt)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(MAT_BasicElt)& Value()  const;




  DEFINE_STANDARD_RTTI(MAT_SequenceNodeOfSequenceOfBasicElt)

protected:




private: 


  Handle(MAT_BasicElt) myValue;


};

#define SeqItem Handle(MAT_BasicElt)
#define SeqItem_hxx <MAT_BasicElt.hxx>
#define TCollection_SequenceNode MAT_SequenceNodeOfSequenceOfBasicElt
#define TCollection_SequenceNode_hxx <MAT_SequenceNodeOfSequenceOfBasicElt.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT_SequenceNodeOfSequenceOfBasicElt
#define TCollection_SequenceNode_Type_() MAT_SequenceNodeOfSequenceOfBasicElt_Type_()
#define TCollection_Sequence MAT_SequenceOfBasicElt
#define TCollection_Sequence_hxx <MAT_SequenceOfBasicElt.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MAT_SequenceNodeOfSequenceOfBasicElt_HeaderFile
