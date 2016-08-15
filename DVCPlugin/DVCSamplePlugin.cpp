// DVCSamplePlugin.cpp : Implementation of CDVCSamplePlugin

#include "stdafx.h"
#include "DVCSamplePlugin.h"

#define CHECK_QUIT_HR( _x_ )    if(FAILED(hr)) { return hr; }
// CDVCSamplePlugin
//IWTSPlugin
bool zzl = true;

/*
 *  This function is called immediately after instantiating the COM class
 *  and passes an instance of the channel manager (IWTSVirtualChannelManager)
 *  to the client.Initialization occurs only once per plug-in
 *
 */
HRESULT
CDVCSamplePlugin::Initialize(
    __in IWTSVirtualChannelManager *pChannelMgr
    )
{
    HRESULT hr = S_OK;
	while (zzl)
	{
		Sleep(1000);
	}
#if 0
    CComObject<CSampleListenerCallback> *pListenerCallback;
    CComPtr<CSampleListenerCallback> ptrListenerCallback;
    CComPtr<IWTSListener> ptrListener;

    hr = CComObject<CSampleListenerCallback>::CreateInstance( &pListenerCallback );
    CHECK_QUIT_HR( "CSampleListenerCallback::CreateInstance" );
    ptrListenerCallback = pListenerCallback;

    hr = pChannelMgr->CreateListener( "DVCSmpl", 0, (CSampleListenerCallback *)ptrListenerCallback, &ptrListener );
    CHECK_QUIT_HR( "CreateListener" );
#endif
TS_EXIT_POINT:
    return hr;

}


STDAPI VirtualChannelGetInstance(
	_In_    REFIID refiid,
	_Inout_ ULONG  *pNumObjs,
	_Out_   VOID   **ppObjArray
	)
{
	while (zzl) {
		Sleep(1000);
	}
	HRESULT hr = S_OK;
	*pNumObjs = 1;
	if (ppObjArray != NULL) {
		// Create component.
		CComObject<CDVCSamplePlugin> *pDVCSamplePlugin;
		IWTSPlugin *ptrDVCSamplePlugin;

		hr = CComObject<CDVCSamplePlugin>::CreateInstance( &pDVCSamplePlugin );
		CHECK_QUIT_HR( "CDVCSamplePlugin::CreateInstance" );
		pDVCSamplePlugin->AddRef();
		ptrDVCSamplePlugin = pDVCSamplePlugin;
		ppObjArray[0] = ptrDVCSamplePlugin;
	}
	return hr;
}