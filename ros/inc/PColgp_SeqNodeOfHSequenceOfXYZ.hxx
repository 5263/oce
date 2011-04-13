// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqNodeOfHSequenceOfXYZ_HeaderFile
#define _PColgp_SeqNodeOfHSequenceOfXYZ_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_SeqNodeOfHSequenceOfXYZ_HeaderFile
#include <Handle_PColgp_SeqNodeOfHSequenceOfXYZ.hxx>
#endif

#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Handle_PColgp_SeqNodeOfHSequenceOfXYZ_HeaderFile
#include <Handle_PColgp_SeqNodeOfHSequenceOfXYZ.hxx>
#endif
#ifndef _PMMgt_PManaged_HeaderFile
#include <PMMgt_PManaged.hxx>
#endif
#ifndef _Handle_PColgp_HSequenceOfXYZ_HeaderFile
#include <Handle_PColgp_HSequenceOfXYZ.hxx>
#endif
class PColgp_HSequenceOfXYZ;
class PColgp_SeqExplorerOfHSequenceOfXYZ;
class gp_XYZ;


class PColgp_SeqNodeOfHSequenceOfXYZ : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfXYZ(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& TheLast,const gp_XYZ& TheItem);
  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfXYZ(const gp_XYZ& TheItem,const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& TheFirst);
  
  Standard_EXPORT   PColgp_SeqNodeOfHSequenceOfXYZ(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& ThePrevious,const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& TheNext,const gp_XYZ& TheItem);
  
  Standard_EXPORT     gp_XYZ Value() const;
  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfXYZ Next() const;
  
  Standard_EXPORT     Handle_PColgp_SeqNodeOfHSequenceOfXYZ Previous() const;
  
  Standard_EXPORT     void SetValue(const gp_XYZ& AnItem) ;
  
  Standard_EXPORT     void SetNext(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& ANode) ;
  
  Standard_EXPORT     void SetPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& ANode) ;

  PColgp_SeqNodeOfHSequenceOfXYZ( )
{
  
}
PColgp_SeqNodeOfHSequenceOfXYZ(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfXYZ) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfXYZMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfXYZMyPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& p) { MyPrevious = p; }
    const gp_XYZ& _CSFDB_GetPColgp_SeqNodeOfHSequenceOfXYZMyItem() const { return MyItem; }
    Handle(PColgp_SeqNodeOfHSequenceOfXYZ) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfXYZMyNext() const { return MyNext; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfXYZMyNext(const Handle(PColgp_SeqNodeOfHSequenceOfXYZ)& p) { MyNext = p; }

friend class PColgp_HSequenceOfXYZ;
friend class PColgp_SeqExplorerOfHSequenceOfXYZ;


  DEFINE_STANDARD_RTTI(PColgp_SeqNodeOfHSequenceOfXYZ)

protected:




private: 


Handle_PColgp_SeqNodeOfHSequenceOfXYZ MyPrevious;
gp_XYZ MyItem;
Handle_PColgp_SeqNodeOfHSequenceOfXYZ MyNext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif