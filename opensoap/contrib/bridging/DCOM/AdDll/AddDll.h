// AddDll.h : CAddDll の宣言

#ifndef __ADDDLL_H_
#define __ADDDLL_H_

#include "resource.h"       // メイン シンボル

/////////////////////////////////////////////////////////////////////////////
// CAddDll
class ATL_NO_VTABLE CAddDll : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAddDll, &CLSID_AddDll>,
	public IAddDll
{
public:
	CAddDll()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ADDDLL)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAddDll)
	COM_INTERFACE_ENTRY(IAddDll)
END_COM_MAP()

// IAddDll
public:
	STDMETHOD(Add)(/*[in]*/ double a, /*[in]*/ double b, /*[out,retval]*/ double *result);
};

#endif //__ADDDLL_H_
