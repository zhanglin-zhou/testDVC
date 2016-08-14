// DVCSamplePlugin.cpp : Implementation of CDVCSamplePlugin

#include "stdafx.h"
#include "DVCSamplePlugin.h"


// CDVCSamplePlugin

//IWTSPlugin

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
