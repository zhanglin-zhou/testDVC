// DVCSamplePlugin.h : Declaration of the CDVCSamplePlugin

#pragma once
#include "resource.h"       // main symbols



#include "DVCPlugin_i.h"
#include <tsvirtualchannels.h>



using namespace ATL;


// CDVCSamplePlugin

class ATL_NO_VTABLE CDVCSamplePlugin :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDVCSamplePlugin, &CLSID_DVCSamplePlugin>,
	public IWTSPlugin
{
public:
	CDVCSamplePlugin()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_DVCSAMPLEPLUGIN)


BEGIN_COM_MAP(CDVCSamplePlugin)
	COM_INTERFACE_ENTRY(IWTSPlugin)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}
	// implement IWTSPlugin
	//
	HRESULT STDMETHODCALLTYPE
		Initialize( __in IWTSVirtualChannelManager *pChannelMgr );

	HRESULT STDMETHODCALLTYPE
		Connected()
	{   return S_OK; }

	HRESULT STDMETHODCALLTYPE
		Disconnected( DWORD dwDisconnectCode )
	{   return S_OK; }

	HRESULT STDMETHODCALLTYPE
		Terminated()
	{   return S_OK; }
public:



};

OBJECT_ENTRY_AUTO(__uuidof(DVCSamplePlugin), CDVCSamplePlugin)
