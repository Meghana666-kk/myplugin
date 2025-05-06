#pragma once

#include "Module.h"
#include <plugins/plugins.h>
#include <interfaces/JsonData_MyPlugin.h>

namespace WPEFramework {
namespace Plugin {

    class MyPlugin : public PluginHost::IPlugin, public PluginHost::JSONRPC {
    private:
        MyPlugin(const MyPlugin&) = delete;
        MyPlugin& operator=(const MyPlugin&) = delete;

    public:
        MyPlugin();
        virtual ~MyPlugin();

        // IPlugin interface implementation
        virtual const string Initialize(PluginHost::IShell* service) override;
        virtual void Deinitialize(PluginHost::IShell* service) override;
        virtual string Information() const override;

        BEGIN_INTERFACE_MAP(MyPlugin)
        INTERFACE_ENTRY(PluginHost::IPlugin)
        INTERFACE_ENTRY(PluginHost::IDispatcher)
        END_INTERFACE_MAP

    private:
        // JsonRpc implementation
        void RegisterAll();
        void UnregisterAll();
        
        // API implementation
        uint32_t endpoint_SetMessage(const JsonData::MyPlugin::SetMessageParamsInfo& params);
        uint32_t endpoint_GetMessage(JsonData::MyPlugin::GetMessageResultData& response);
        
        // Member variables
        string _message;
        uint8_t _skipURL;
        PluginHost::IShell* _service;
    };

} // namespace Plugin
} // namespace WPEFramework
