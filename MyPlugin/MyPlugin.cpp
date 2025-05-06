#include "MyPlugin.h"
#include <interfaces/JsonData_MyPlugin.h>
#include <string>  
#include <cstdio>

#define INFOLOG(fmt, ...) printf("INFO: " fmt "\n", ##__VA_ARGS__)
#define ERRORLOG(fmt, ...) fprintf(stderr, "ERROR: " fmt "\n", ##__VA_ARGS__)

namespace WPEFramework {
namespace Plugin {

    SERVICE_REGISTRATION(MyPlugin, 1, 0);

    MyPlugin::MyPlugin()
        : PluginHost::JSONRPC()
        , _message("")
        , _skipURL(0)
        , _service(nullptr)
    {
        RegisterAll();
    }

    MyPlugin::~MyPlugin()
    {
        UnregisterAll();
    }

    const string MyPlugin::Initialize(PluginHost::IShell* service)
    {
        ASSERT(service != nullptr);
        ASSERT(_service == nullptr);
	
	SYSLOG(Logging::Startup, (_T("Initializing MyPlugin")));

        _service = service;
        _skipURL = static_cast<uint8_t>(service->WebPrefix().length());

        // On success return empty, to indicate there is no error text.
        return (string());
    }

    void MyPlugin::Deinitialize(PluginHost::IShell* service)
    {
        ASSERT(service == _service);

	SYSLOG(Logging::Shutdown, (_T("Deinitializing MyPlugin")));

        _service = nullptr;
    }

    string MyPlugin::Information() const
    {
        // No additional info to report.
        return (string());
    }

    void MyPlugin::RegisterAll()
    {
        Register<JsonData::MyPlugin::SetMessageParamsInfo, void>(_T("SetMessage"), &MyPlugin::endpoint_SetMessage, this);
        Register<void, JsonData::MyPlugin::GetMessageResultData>(_T("GetMessage"), &MyPlugin::endpoint_GetMessage, this);
    }

    void MyPlugin::UnregisterAll()
    {
        Unregister(_T("GetMessage"));
        Unregister(_T("SetMessage"));
    }

    // API implementation
    uint32_t MyPlugin::endpoint_SetMessage(const JsonData::MyPlugin::SetMessageParamsInfo& params)
    {
	//INFOLOG("Setting message to: %s", params.Message.Value().c_str());    
        _message = params.Message.Value();
	INFOLOG("Setting message to: %s", _message.c_str());
        return Core::ERROR_NONE;
    }

    uint32_t MyPlugin::endpoint_GetMessage(JsonData::MyPlugin::GetMessageResultData& response)
    {
	//INFOLOG("Getting message: %s, Success: %d", response.Message.c_str(), response.Success);    
        response.Message = _message;
        response.Success = true;
	INFOLOG("Getting message: %s, Success: %d", _message.c_str(), response.Success);
        return Core::ERROR_NONE;
    }

} // namespace Plugin
} // namespace WPEFramework
