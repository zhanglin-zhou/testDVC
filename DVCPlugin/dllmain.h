// dllmain.h : Declaration of module class.

class CDVCPluginModule : public ATL::CAtlDllModuleT< CDVCPluginModule >
{
public :
	DECLARE_LIBID(LIBID_DVCPluginLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DVCPLUGIN, "{E844BBF8-281C-4E20-BCAF-8F3260D98E2C}")
};

extern class CDVCPluginModule _AtlModule;
