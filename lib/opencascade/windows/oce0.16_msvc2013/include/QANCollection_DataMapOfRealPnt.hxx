// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_DataMapOfRealPnt_HeaderFile
#define _QANCollection_DataMapOfRealPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_QANCollection_DataMapNodeOfDataMapOfRealPnt_HeaderFile
#include <Handle_QANCollection_DataMapNodeOfDataMapOfRealPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class gp_Pnt;
class TColStd_MapRealHasher;
class QANCollection_DataMapNodeOfDataMapOfRealPnt;
class QANCollection_DataMapIteratorOfDataMapOfRealPnt;



class QANCollection_DataMapOfRealPnt  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   QANCollection_DataMapOfRealPnt(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     QANCollection_DataMapOfRealPnt& Assign(const QANCollection_DataMapOfRealPnt& Other) ;
    QANCollection_DataMapOfRealPnt& operator =(const QANCollection_DataMapOfRealPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~QANCollection_DataMapOfRealPnt()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Real& K,const gp_Pnt& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Real& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Real& K) ;
  
  Standard_EXPORT    const gp_Pnt& Find(const Standard_Real& K) const;
   const gp_Pnt& operator()(const Standard_Real& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     gp_Pnt& ChangeFind(const Standard_Real& K) ;
    gp_Pnt& operator()(const Standard_Real& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Standard_Real& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Standard_Real& K) ;





protected:





private:

  
  Standard_EXPORT   QANCollection_DataMapOfRealPnt(const QANCollection_DataMapOfRealPnt& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif