// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_DataMapNodeOfDataMapOfIntegerPnt_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfIntegerPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerPnt_HeaderFile
#include <Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerPnt.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class gp_Pnt;
class TColStd_MapIntegerHasher;
class BRepMesh_DataMapOfIntegerPnt;
class BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt;



class BRepMesh_DataMapNodeOfDataMapOfIntegerPnt : public TCollection_MapNode {

public:

  
      BRepMesh_DataMapNodeOfDataMapOfIntegerPnt(const Standard_Integer& K,const gp_Pnt& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        gp_Pnt& Value() const;




  DEFINE_STANDARD_RTTI(BRepMesh_DataMapNodeOfDataMapOfIntegerPnt)

protected:




private: 


Standard_Integer myKey;
gp_Pnt myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <gp_Pnt.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode BRepMesh_DataMapNodeOfDataMapOfIntegerPnt
#define TCollection_DataMapNode_hxx <BRepMesh_DataMapNodeOfDataMapOfIntegerPnt.hxx>
#define TCollection_DataMapIterator BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt
#define TCollection_DataMapIterator_hxx <BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepMesh_DataMapNodeOfDataMapOfIntegerPnt
#define TCollection_DataMapNode_Type_() BRepMesh_DataMapNodeOfDataMapOfIntegerPnt_Type_()
#define TCollection_DataMap BRepMesh_DataMapOfIntegerPnt
#define TCollection_DataMap_hxx <BRepMesh_DataMapOfIntegerPnt.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif