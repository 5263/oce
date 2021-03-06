// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString_HeaderFile
#define _PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PCollection_HExtendedString.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
#include <Standard_Address.hxx>
class PCollection_HExtendedString;
class PColStd_FieldOfHArray1OfExtendedString;
class PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString;



class PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString();
  
    PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString(const Handle(PCollection_HExtendedString)& aValue);
  
      void SetValue (const Handle(PCollection_HExtendedString)& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  Handle(PCollection_HExtendedString) myValue;


};

#define Item Handle(PCollection_HExtendedString)
#define Item_hxx <PCollection_HExtendedString.hxx>
#define DBC_VArrayNode PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define DBC_VArrayNode_hxx <PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
#define DBC_VArrayTNode PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString
#define DBC_VArrayTNode_hxx <PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString.hxx>
#define Handle_DBC_VArrayNode Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString
#define DBC_VArrayNode_Type_() PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString_Type_()
#define DBC_VArray PColStd_FieldOfHArray1OfExtendedString
#define DBC_VArray_hxx <PColStd_FieldOfHArray1OfExtendedString.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString_HeaderFile
