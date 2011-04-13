// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerMaterial_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerMaterial_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Graphic3d_MaterialAspect_HeaderFile
#include <Graphic3d_MaterialAspect.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Graphic3d_MaterialAspect;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerMaterial;
class MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial;



class MeshVS_DataMapNodeOfDataMapOfIntegerMaterial : public TCollection_MapNode {

public:

  
      MeshVS_DataMapNodeOfDataMapOfIntegerMaterial(const Standard_Integer& K,const Graphic3d_MaterialAspect& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Graphic3d_MaterialAspect& Value() const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerMaterial)

protected:




private: 


Standard_Integer myKey;
Graphic3d_MaterialAspect myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Graphic3d_MaterialAspect
#define TheItem_hxx <Graphic3d_MaterialAspect.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerMaterial
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerMaterial.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerMaterial_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerMaterial
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerMaterial.hxx>

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