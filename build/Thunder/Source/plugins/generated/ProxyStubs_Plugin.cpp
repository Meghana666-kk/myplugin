//
// generated automatically from "IPlugin.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IPlugin
//   - class PluginHost::IPlugin::INotification
//   - class PluginHost::IPlugin::ILifeTime
//   - class PluginHost::ICompositPlugin
//   - class PluginHost::ICompositPlugin::INotification
//   - class PluginHost::IAuthenticate
//

#include "Module.h"
#include "IPlugin.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    using namespace PluginHost;

    PUSH_WARNING(DISABLE_WARNING_DEPRECATED_USE)
    PUSH_WARNING(DISABLE_WARNING_TYPE_LIMITS)

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // PluginHost::IPlugin interface stub definitions
    //
    // Methods:
    //  (0) virtual const string Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual string Information() const = 0
    //

    ProxyStub::MethodHandler PluginHostPluginStubMethods[] = {
        // (0) virtual const string Initialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin* implementation = reinterpret_cast<PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id shellImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _shell = nullptr;
            ProxyStub::UnknownProxy* shellProxy = nullptr;
            if (shellImplementation != 0) {
                shellProxy = RPC::Administrator::Instance().ProxyInstance(channel, shellImplementation, false, _shell);

                ASSERT((_shell != nullptr) && (shellProxy != nullptr));
            }

            const string result = implementation->Initialize(_shell);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);

            if (shellProxy != nullptr) {
                RPC::Administrator::Instance().Release(shellProxy, message->Response());
            }
        },

        // (1) virtual void Deinitialize(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin* implementation = reinterpret_cast<PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id shellImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _shell = nullptr;
            ProxyStub::UnknownProxy* shellProxy = nullptr;
            if (shellImplementation != 0) {
                shellProxy = RPC::Administrator::Instance().ProxyInstance(channel, shellImplementation, false, _shell);

                ASSERT((_shell != nullptr) && (shellProxy != nullptr));
            }

            implementation->Deinitialize(_shell);

            if (shellProxy != nullptr) {
                RPC::Administrator::Instance().Release(shellProxy, message->Response());
            }
        },

        // (2) virtual string Information() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IPlugin* implementation = reinterpret_cast<const PluginHost::IPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Information();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostPluginStubMethods

    //
    // PluginHost::IPlugin::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Activated(const string&, PluginHost::IShell*) = 0
    //  (1) virtual void Deactivated(const string&, PluginHost::IShell*) = 0
    //  (2) virtual void Unavailable(const string&, PluginHost::IShell*) = 0
    //

    ProxyStub::MethodHandler PluginHostPluginNotificationStubMethods[] = {
        // (0) virtual void Activated(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::INotification* implementation = reinterpret_cast<PluginHost::IPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->Activated(static_cast<const string&>(_callsign), _plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        },

        // (1) virtual void Deactivated(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::INotification* implementation = reinterpret_cast<PluginHost::IPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->Deactivated(static_cast<const string&>(_callsign), _plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        },

        // (2) virtual void Unavailable(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::INotification* implementation = reinterpret_cast<PluginHost::IPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->Unavailable(static_cast<const string&>(_callsign), _plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        }
    }; // PluginHostPluginNotificationStubMethods

    //
    // PluginHost::IPlugin::ILifeTime interface stub definitions
    //
    // Methods:
    //  (0) virtual void Initialize(const string&, PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialized(const string&, PluginHost::IShell*) = 0
    //

    ProxyStub::MethodHandler PluginHostPluginLifeTimeStubMethods[] = {
        // (0) virtual void Initialize(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::ILifeTime* implementation = reinterpret_cast<PluginHost::IPlugin::ILifeTime*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->Initialize(static_cast<const string&>(_callsign), _plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        },

        // (1) virtual void Deinitialized(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IPlugin::ILifeTime* implementation = reinterpret_cast<PluginHost::IPlugin::ILifeTime*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            implementation->Deinitialized(static_cast<const string&>(_callsign), _plugin);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        }
    }; // PluginHostPluginLifeTimeStubMethods

    //
    // PluginHost::ICompositPlugin interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(PluginHost::ICompositPlugin::INotification*) = 0
    //  (1) virtual uint32_t Unregister(PluginHost::ICompositPlugin::INotification*) = 0
    //

    ProxyStub::MethodHandler PluginHostCompositPluginStubMethods[] = {
        // (0) virtual uint32_t Register(PluginHost::ICompositPlugin::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ICompositPlugin* implementation = reinterpret_cast<PluginHost::ICompositPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_e829b68aImplementation = reader.Number<Core::instance_id>();

            PluginHost::ICompositPlugin::INotification* _parameter_e829b68a = nullptr;
            ProxyStub::UnknownProxy* parameter_e829b68aProxy = nullptr;
            if (parameter_e829b68aImplementation != 0) {
                parameter_e829b68aProxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_e829b68aImplementation, false, _parameter_e829b68a);

                ASSERT((_parameter_e829b68a != nullptr) && (parameter_e829b68aProxy != nullptr));
            }

            uint32_t result = implementation->Register(_parameter_e829b68a);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_e829b68aProxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_e829b68aProxy, message->Response());
            }
        },

        // (1) virtual uint32_t Unregister(PluginHost::ICompositPlugin::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ICompositPlugin* implementation = reinterpret_cast<PluginHost::ICompositPlugin*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id parameter_fbc89595Implementation = reader.Number<Core::instance_id>();

            PluginHost::ICompositPlugin::INotification* _parameter_fbc89595 = nullptr;
            ProxyStub::UnknownProxy* parameter_fbc89595Proxy = nullptr;
            if (parameter_fbc89595Implementation != 0) {
                parameter_fbc89595Proxy = RPC::Administrator::Instance().ProxyInstance(channel, parameter_fbc89595Implementation, false, _parameter_fbc89595);

                ASSERT((_parameter_fbc89595 != nullptr) && (parameter_fbc89595Proxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_parameter_fbc89595);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (parameter_fbc89595Proxy != nullptr) {
                RPC::Administrator::Instance().Release(parameter_fbc89595Proxy, message->Response());
            }
        }
    }; // PluginHostCompositPluginStubMethods

    //
    // PluginHost::ICompositPlugin::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t Activated(const string&, PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Deactivated(const string&, PluginHost::IShell*) = 0
    //

    ProxyStub::MethodHandler PluginHostCompositPluginNotificationStubMethods[] = {
        // (0) virtual uint32_t Activated(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ICompositPlugin::INotification* implementation = reinterpret_cast<PluginHost::ICompositPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            uint32_t result = implementation->Activated(static_cast<const string&>(_callsign), _plugin);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        },

        // (1) virtual uint32_t Deactivated(const string&, PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ICompositPlugin::INotification* implementation = reinterpret_cast<PluginHost::ICompositPlugin::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _callsign = reader.Text();
            const Core::instance_id pluginImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _plugin = nullptr;
            ProxyStub::UnknownProxy* pluginProxy = nullptr;
            if (pluginImplementation != 0) {
                pluginProxy = RPC::Administrator::Instance().ProxyInstance(channel, pluginImplementation, false, _plugin);

                ASSERT((_plugin != nullptr) && (pluginProxy != nullptr));
            }

            uint32_t result = implementation->Deactivated(static_cast<const string&>(_callsign), _plugin);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (pluginProxy != nullptr) {
                RPC::Administrator::Instance().Release(pluginProxy, message->Response());
            }
        }
    }; // PluginHostCompositPluginNotificationStubMethods

    //
    // PluginHost::IAuthenticate interface stub definitions
    //
    // Methods:
    //  (0) virtual Core::hresult CreateToken(const uint16_t, const uint8_t*, string&) = 0
    //  (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
    //

    ProxyStub::MethodHandler PluginHostAuthenticateStubMethods[] = {
        // (0) virtual Core::hresult CreateToken(const uint16_t, const uint8_t*, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IAuthenticate* implementation = reinterpret_cast<PluginHost::IAuthenticate*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint8_t* _buffer{};
            const uint16_t bufferLen = reader.LockBuffer<uint16_t>(_buffer);
            reader.UnlockBuffer(bufferLen);

            string _token{};

            Core::hresult result = implementation->CreateToken(bufferLen, _buffer, _token);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::hresult>(result);
            writer.Text(_token);
        },

        // (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::IAuthenticate* implementation = reinterpret_cast<PluginHost::IAuthenticate*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _token = reader.Text();

            PluginHost::ISecurity* result = implementation->Officer(static_cast<const string&>(_token));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        }
    }; // PluginHostAuthenticateStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IPlugin interface proxy definitions
    //
    // Methods:
    //  (0) virtual const string Initialize(PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialize(PluginHost::IShell*) = 0
    //  (2) virtual string Information() const = 0
    //

    class PluginHostPluginProxy final : public ProxyStub::UnknownProxyType<PluginHost::IPlugin> {
    public:
        PluginHostPluginProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        const string Initialize(PluginHost::IShell* _shell) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_shell));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            Complete(reader);

            return (result);
        }

        void Deinitialize(PluginHost::IShell* _shell) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_shell));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        string Information() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class PluginHostPluginProxy

    //
    // PluginHost::IPlugin::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Activated(const string&, PluginHost::IShell*) = 0
    //  (1) virtual void Deactivated(const string&, PluginHost::IShell*) = 0
    //  (2) virtual void Unavailable(const string&, PluginHost::IShell*) = 0
    //

    class PluginHostPluginNotificationProxy final : public ProxyStub::UnknownProxyType<PluginHost::IPlugin::INotification> {
    public:
        PluginHostPluginNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        void Activated(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        void Deactivated(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        void Unavailable(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

    }; // class PluginHostPluginNotificationProxy

    //
    // PluginHost::IPlugin::ILifeTime interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Initialize(const string&, PluginHost::IShell*) = 0
    //  (1) virtual void Deinitialized(const string&, PluginHost::IShell*) = 0
    //

    class PluginHostPluginLifeTimeProxy final : public ProxyStub::UnknownProxyType<PluginHost::IPlugin::ILifeTime> {
    public:
        PluginHostPluginLifeTimeProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        void Initialize(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        void Deinitialized(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

    }; // class PluginHostPluginLifeTimeProxy

    //
    // PluginHost::ICompositPlugin interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Register(PluginHost::ICompositPlugin::INotification*) = 0
    //  (1) virtual uint32_t Unregister(PluginHost::ICompositPlugin::INotification*) = 0
    //

    class PluginHostCompositPluginProxy final : public ProxyStub::UnknownProxyType<PluginHost::ICompositPlugin> {
    public:
        PluginHostCompositPluginProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        uint32_t Register(PluginHost::ICompositPlugin::INotification* _parameter_e829b68a) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_e829b68a));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            Complete(reader);

            return (result);
        }

        uint32_t Unregister(PluginHost::ICompositPlugin::INotification* _parameter_fbc89595) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_parameter_fbc89595));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            Complete(reader);

            return (result);
        }

    }; // class PluginHostCompositPluginProxy

    //
    // PluginHost::ICompositPlugin::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t Activated(const string&, PluginHost::IShell*) = 0
    //  (1) virtual uint32_t Deactivated(const string&, PluginHost::IShell*) = 0
    //

    class PluginHostCompositPluginNotificationProxy final : public ProxyStub::UnknownProxyType<PluginHost::ICompositPlugin::INotification> {
    public:
        PluginHostCompositPluginNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        uint32_t Activated(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            Complete(reader);

            return (result);
        }

        uint32_t Deactivated(const string& _callsign, PluginHost::IShell* _plugin) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_callsign));
            writer.Number<Core::instance_id>(RPC::instance_cast(_plugin));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            Complete(reader);

            return (result);
        }

    }; // class PluginHostCompositPluginNotificationProxy

    //
    // PluginHost::IAuthenticate interface proxy definitions
    //
    // Methods:
    //  (0) virtual Core::hresult CreateToken(const uint16_t, const uint8_t*, string&) = 0
    //  (1) virtual PluginHost::ISecurity* Officer(const string&) = 0
    //

    class PluginHostAuthenticateProxy final : public ProxyStub::UnknownProxyType<PluginHost::IAuthenticate> {
    public:
        PluginHostAuthenticateProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
            : BaseClass(channel, implementation, otherSideInformed)
        {
        }

        uint32_t Complete(RPC::Data::Frame::Reader& reader)
        {
            uint32_t result = Core::ERROR_NONE;

            while (reader.HasData() == true) {
                const Core::instance_id implementation = reader.Number<Core::instance_id>();
                ASSERT(implementation != 0);

                const uint32_t id = reader.Number<uint32_t>();
                const RPC::Data::Output::mode how = reader.Number<RPC::Data::Output::mode>();

                result = UnknownProxyType::Complete(implementation, id, how);
                if (result != Core::ERROR_NONE) { return (COM_ERROR | result); }
            }

            return (result);
        }

        Core::hresult CreateToken(const uint16_t bufferLen, const uint8_t* _buffer, string& _token) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Buffer<uint16_t>(bufferLen, _buffer);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<Core::hresult>();
                if ((hresult & COM_ERROR) == 0) {
                    _token = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        PluginHost::ISecurity* Officer(const string& _token) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_token));

            PluginHost::ISecurity* result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reinterpret_cast<PluginHost::ISecurity*>(Interface(reader.Number<Core::instance_id>(), PluginHost::ISecurity::ID));

            return (result);
        }

    }; // class PluginHostAuthenticateProxy

    POP_WARNING()
    POP_WARNING()

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IPlugin, PluginHostPluginStubMethods> PluginHostPluginStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IPlugin::INotification, PluginHostPluginNotificationStubMethods> PluginHostPluginNotificationStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IPlugin::ILifeTime, PluginHostPluginLifeTimeStubMethods> PluginHostPluginLifeTimeStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ICompositPlugin, PluginHostCompositPluginStubMethods> PluginHostCompositPluginStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ICompositPlugin::INotification, PluginHostCompositPluginNotificationStubMethods> PluginHostCompositPluginNotificationStub;
        typedef ProxyStub::UnknownStubType<PluginHost::IAuthenticate, PluginHostAuthenticateStubMethods> PluginHostAuthenticateStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IPlugin, PluginHostPluginProxy, PluginHostPluginStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IPlugin::INotification, PluginHostPluginNotificationProxy, PluginHostPluginNotificationStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IPlugin::ILifeTime, PluginHostPluginLifeTimeProxy, PluginHostPluginLifeTimeStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ICompositPlugin, PluginHostCompositPluginProxy, PluginHostCompositPluginStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ICompositPlugin::INotification, PluginHostCompositPluginNotificationProxy, PluginHostCompositPluginNotificationStub>();
                RPC::Administrator::Instance().Announce<PluginHost::IAuthenticate, PluginHostAuthenticateProxy, PluginHostAuthenticateStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IPlugin>();
                RPC::Administrator::Instance().Recall<PluginHost::IPlugin::INotification>();
                RPC::Administrator::Instance().Recall<PluginHost::IPlugin::ILifeTime>();
                RPC::Administrator::Instance().Recall<PluginHost::ICompositPlugin>();
                RPC::Administrator::Instance().Recall<PluginHost::ICompositPlugin::INotification>();
                RPC::Administrator::Instance().Recall<PluginHost::IAuthenticate>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
