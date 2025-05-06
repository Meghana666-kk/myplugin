//
// generated automatically from "INetworkManager.h"
//
// implements COM-RPC proxy stubs for:
//   - class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = Exchange::INetworkManager::InterfaceDetails, INTERFACE_ID = Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR]
//   - class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = Exchange::INetworkManager::WIFISecurityModeInfo, INTERFACE_ID = Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR]
//   - class RPC::IIteratorType<typename ELEMENT, const uint32_t> [with ELEMENT = string, INTERFACE_ID = RPC::ID_STRINGITERATOR]
//   - class Exchange::INetworkManager
//   - class Exchange::INetworkManager::INotification
//

#include "INetworkManager.h"

#include <com/com.h>

namespace WPEFramework {

namespace ProxyStubs {

    PUSH_WARNING(DISABLE_WARNING_DEPRECATED_USE)
    PUSH_WARNING(DISABLE_WARNING_TYPE_LIMITS)

    // -----------------------------------------------------------------
    // STUBS
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance03682DC2 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::INetworkManager::InterfaceDetails&) = 0
    //  (1) virtual bool Previous(Exchange::INetworkManager::InterfaceDetails&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::INetworkManager::InterfaceDetails Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance03682DC2StubMethods[] = {
        // (0) virtual bool Next(Exchange::INetworkManager::InterfaceDetails&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::InterfaceDetails _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::INetworkManager::InterfaceType>(_info.type);
            writer.Text(_info.name);
            writer.Text(_info.mac);
            writer.Boolean(_info.enabled);
            writer.Boolean(_info.connected);
        },

        // (1) virtual bool Previous(Exchange::INetworkManager::InterfaceDetails&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::InterfaceDetails _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::INetworkManager::InterfaceType>(_info.type);
            writer.Text(_info.name);
            writer.Text(_info.mac);
            writer.Boolean(_info.enabled);
            writer.Boolean(_info.connected);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::INetworkManager::InterfaceDetails Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::InterfaceDetails result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::INetworkManager::InterfaceType>(result.type);
            writer.Text(result.name);
            writer.Text(result.mac);
            writer.Boolean(result.enabled);
            writer.Boolean(result.connected);
        }
    }; // RPCIteratorTypeInstance03682DC2StubMethods

    //
    // RPC::IIteratorTypeInstance8C930906 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
    //  (1) virtual bool Previous(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::INetworkManager::WIFISecurityModeInfo Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance8C930906StubMethods[] = {
        // (0) virtual bool Next(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::WIFISecurityModeInfo _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(_info.security);
            writer.Text(_info.securityName);
        },

        // (1) virtual bool Previous(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::WIFISecurityModeInfo _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(_info.security);
            writer.Text(_info.securityName);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual Exchange::INetworkManager::WIFISecurityModeInfo Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::WIFISecurityModeInfo result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(result.security);
            writer.Text(result.securityName);
        }
    }; // RPCIteratorTypeInstance8C930906StubMethods

    //
    // RPC::IIteratorTypeInstance9CAEC085 interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    ProxyStub::MethodHandler RPCIteratorTypeInstance9CAEC085StubMethods[] = {
        // (0) virtual bool Next(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (1) virtual bool Previous(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (2) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            interface* implementation = reinterpret_cast<interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual string Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            using interface = RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>;

            const interface* implementation = reinterpret_cast<const interface*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // RPCIteratorTypeInstance9CAEC085StubMethods

    //
    // Exchange::INetworkManager interface stub definitions
    //
    // Methods:
    //  (0) virtual uint32_t GetAvailableInterfaces(Exchange::INetworkManager::IInterfaceDetailsIterator*&) = 0
    //  (1) virtual uint32_t GetPrimaryInterface(string&) = 0
    //  (2) virtual uint32_t SetPrimaryInterface(const string&) = 0
    //  (3) virtual uint32_t SetInterfaceState(const string&, const bool) = 0
    //  (4) virtual uint32_t GetInterfaceState(const string&, bool&) = 0
    //  (5) virtual uint32_t GetIPSettings(string&, const string&, Exchange::INetworkManager::IPAddress&) = 0
    //  (6) virtual uint32_t SetIPSettings(const string&, const Exchange::INetworkManager::IPAddress&) = 0
    //  (7) virtual uint32_t GetStunEndpoint(string&, uint32_t&, uint32_t&, uint32_t&) const = 0
    //  (8) virtual uint32_t SetStunEndpoint(const string, const uint32_t, const uint32_t, const uint32_t) = 0
    //  (9) virtual uint32_t GetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator*&) const = 0
    //  (10) virtual uint32_t SetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator* const) = 0
    //  (11) virtual uint32_t IsConnectedToInternet(string&, string&, Exchange::INetworkManager::InternetStatus&) = 0
    //  (12) virtual uint32_t GetCaptivePortalURI(string&) const = 0
    //  (13) virtual uint32_t GetPublicIP(string&, string&, string&) = 0
    //  (14) virtual uint32_t Ping(const string, const string, const uint32_t, const uint16_t, const string, string&) = 0
    //  (15) virtual uint32_t Trace(const string, const string, const uint32_t, const string, string&) = 0
    //  (16) virtual uint32_t StartWiFiScan(const string&, Exchange::INetworkManager::IStringIterator* const) = 0
    //  (17) virtual uint32_t StopWiFiScan() = 0
    //  (18) virtual uint32_t GetKnownSSIDs(Exchange::INetworkManager::IStringIterator*&) = 0
    //  (19) virtual uint32_t AddToKnownSSIDs(const Exchange::INetworkManager::WiFiConnectTo&) = 0
    //  (20) virtual uint32_t RemoveKnownSSID(const string&) = 0
    //  (21) virtual uint32_t WiFiConnect(const Exchange::INetworkManager::WiFiConnectTo&) = 0
    //  (22) virtual uint32_t WiFiDisconnect() = 0
    //  (23) virtual uint32_t GetConnectedSSID(Exchange::INetworkManager::WiFiSSIDInfo&) = 0
    //  (24) virtual uint32_t StartWPS(const Exchange::INetworkManager::WiFiWPS&, const string&) = 0
    //  (25) virtual uint32_t StopWPS() = 0
    //  (26) virtual uint32_t GetWifiState(Exchange::INetworkManager::WiFiState&) = 0
    //  (27) virtual uint32_t GetWiFiSignalQuality(string&, string&, string&, string&, Exchange::INetworkManager::WiFiSignalQuality&) = 0
    //  (28) virtual uint32_t GetSupportedSecurityModes(Exchange::INetworkManager::ISecurityModeIterator*&) const = 0
    //  (29) virtual uint32_t SetLogLevel(const Exchange::INetworkManager::Logging&) = 0
    //  (30) virtual uint32_t GetLogLevel(Exchange::INetworkManager::Logging&) = 0
    //  (31) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (32) virtual uint32_t Register(Exchange::INetworkManager::INotification*) = 0
    //  (33) virtual uint32_t Unregister(Exchange::INetworkManager::INotification*) = 0
    //

    ProxyStub::MethodHandler ExchangeNetworkManagerStubMethods[] = {
        // (0) virtual uint32_t GetAvailableInterfaces(Exchange::INetworkManager::IInterfaceDetailsIterator*&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::IInterfaceDetailsIterator* _interfaces{};

            uint32_t result = implementation->GetAvailableInterfaces(_interfaces);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_interfaces));

            RPC::Administrator::Instance().RegisterInterface(channel, _interfaces);
        },

        // (1) virtual uint32_t GetPrimaryInterface(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _interface{};

            uint32_t result = implementation->GetPrimaryInterface(_interface);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_interface);
        },

        // (2) virtual uint32_t SetPrimaryInterface(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _interface = reader.Text();

            uint32_t result = implementation->SetPrimaryInterface(static_cast<const string&>(_interface));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (3) virtual uint32_t SetInterfaceState(const string&, const bool) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _interface = reader.Text();
            const bool _enabled = reader.Boolean();

            uint32_t result = implementation->SetInterfaceState(static_cast<const string&>(_interface), _enabled);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (4) virtual uint32_t GetInterfaceState(const string&, bool&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _interface = reader.Text();

            bool _enabled{};

            uint32_t result = implementation->GetInterfaceState(static_cast<const string&>(_interface), _enabled);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Boolean(_enabled);
        },

        // (5) virtual uint32_t GetIPSettings(string&, const string&, Exchange::INetworkManager::IPAddress&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            string _interface = reader.Text();
            const string _ipversion = reader.Text();

            Exchange::INetworkManager::IPAddress _address{};

            uint32_t result = implementation->GetIPSettings(_interface, static_cast<const string&>(_ipversion), _address);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_interface);
            writer.Text(_address.ipversion);
            writer.Boolean(_address.autoconfig);
            writer.Text(_address.dhcpserver);
            writer.Text(_address.ula);
            writer.Text(_address.ipaddress);
            writer.Number<uint32_t>(_address.prefix);
            writer.Text(_address.gateway);
            writer.Text(_address.primarydns);
            writer.Text(_address.secondarydns);
        },

        // (6) virtual uint32_t SetIPSettings(const string&, const Exchange::INetworkManager::IPAddress&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _interface = reader.Text();
            Exchange::INetworkManager::IPAddress _address{};
            _address.ipversion = reader.Text();
            _address.autoconfig = reader.Boolean();
            _address.dhcpserver = reader.Text();
            _address.ula = reader.Text();
            _address.ipaddress = reader.Text();
            _address.prefix = reader.Number<uint32_t>();
            _address.gateway = reader.Text();
            _address.primarydns = reader.Text();
            _address.secondarydns = reader.Text();

            uint32_t result = implementation->SetIPSettings(static_cast<const string&>(_interface), static_cast<const Exchange::INetworkManager::IPAddress&>(_address));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (7) virtual uint32_t GetStunEndpoint(string&, uint32_t&, uint32_t&, uint32_t&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::INetworkManager* implementation = reinterpret_cast<const Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _endpoint{};
            uint32_t _port{};
            uint32_t _timeout{};
            uint32_t _cacheLifetime{};

            uint32_t result = implementation->GetStunEndpoint(_endpoint, _port, _timeout, _cacheLifetime);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_endpoint);
            writer.Number<uint32_t>(_port);
            writer.Number<uint32_t>(_timeout);
            writer.Number<uint32_t>(_cacheLifetime);
        },

        // (8) virtual uint32_t SetStunEndpoint(const string, const uint32_t, const uint32_t, const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _endpoint = reader.Text();
            const uint32_t _port = reader.Number<uint32_t>();
            const uint32_t _timeout = reader.Number<uint32_t>();
            const uint32_t _cacheLifetime = reader.Number<uint32_t>();

            uint32_t result = implementation->SetStunEndpoint(_endpoint, _port, _timeout, _cacheLifetime);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (9) virtual uint32_t GetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::INetworkManager* implementation = reinterpret_cast<const Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::IStringIterator* _endpoints{};

            uint32_t result = implementation->GetConnectivityTestEndpoints(_endpoints);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_endpoints));

            RPC::Administrator::Instance().RegisterInterface(channel, _endpoints);
        },

        // (10) virtual uint32_t SetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator* const) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id endpointsImplementation = reader.Number<Core::instance_id>();

            Exchange::INetworkManager::IStringIterator* _endpoints = nullptr;
            ProxyStub::UnknownProxy* endpointsProxy = nullptr;
            if (endpointsImplementation != 0) {
                endpointsProxy = RPC::Administrator::Instance().ProxyInstance(channel, endpointsImplementation, false, _endpoints);

                ASSERT((_endpoints != nullptr) && (endpointsProxy != nullptr));
            }

            uint32_t result = implementation->SetConnectivityTestEndpoints(_endpoints);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (endpointsProxy != nullptr) {
                RPC::Administrator::Instance().Release(endpointsProxy, message->Response());
            }
        },

        // (11) virtual uint32_t IsConnectedToInternet(string&, string&, Exchange::INetworkManager::InternetStatus&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            string _ipversion = reader.Text();
            string _interface = reader.Text();

            Exchange::INetworkManager::InternetStatus _status{};

            uint32_t result = implementation->IsConnectedToInternet(_ipversion, _interface, _status);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_ipversion);
            writer.Text(_interface);
            writer.Number<Exchange::INetworkManager::InternetStatus>(_status);
        },

        // (12) virtual uint32_t GetCaptivePortalURI(string&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::INetworkManager* implementation = reinterpret_cast<const Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _uri{};

            uint32_t result = implementation->GetCaptivePortalURI(_uri);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_uri);
        },

        // (13) virtual uint32_t GetPublicIP(string&, string&, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            string _interface = reader.Text();
            string _ipversion = reader.Text();

            string _ipaddress{};

            uint32_t result = implementation->GetPublicIP(_interface, _ipversion, _ipaddress);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_interface);
            writer.Text(_ipversion);
            writer.Text(_ipaddress);
        },

        // (14) virtual uint32_t Ping(const string, const string, const uint32_t, const uint16_t, const string, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _ipversion = reader.Text();
            const string _endpoint = reader.Text();
            const uint32_t _count = reader.Number<uint32_t>();
            const uint16_t _timeout = reader.Number<uint16_t>();
            const string _guid = reader.Text();

            string _response{};

            uint32_t result = implementation->Ping(_ipversion, _endpoint, _count, _timeout, _guid, _response);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_response);
        },

        // (15) virtual uint32_t Trace(const string, const string, const uint32_t, const string, string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _ipversion = reader.Text();
            const string _endpoint = reader.Text();
            const uint32_t _nqueries = reader.Number<uint32_t>();
            const string _guid = reader.Text();

            string _response{};

            uint32_t result = implementation->Trace(_ipversion, _endpoint, _nqueries, _guid, _response);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_response);
        },

        // (16) virtual uint32_t StartWiFiScan(const string&, Exchange::INetworkManager::IStringIterator* const) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _frequency = reader.Text();
            const Core::instance_id ssidsImplementation = reader.Number<Core::instance_id>();

            Exchange::INetworkManager::IStringIterator* _ssids = nullptr;
            ProxyStub::UnknownProxy* ssidsProxy = nullptr;
            if (ssidsImplementation != 0) {
                ssidsProxy = RPC::Administrator::Instance().ProxyInstance(channel, ssidsImplementation, false, _ssids);

                ASSERT((_ssids != nullptr) && (ssidsProxy != nullptr));
            }

            uint32_t result = implementation->StartWiFiScan(static_cast<const string&>(_frequency), _ssids);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (ssidsProxy != nullptr) {
                RPC::Administrator::Instance().Release(ssidsProxy, message->Response());
            }
        },

        // (17) virtual uint32_t StopWiFiScan() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->StopWiFiScan();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (18) virtual uint32_t GetKnownSSIDs(Exchange::INetworkManager::IStringIterator*&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::IStringIterator* _ssids{};

            uint32_t result = implementation->GetKnownSSIDs(_ssids);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_ssids));

            RPC::Administrator::Instance().RegisterInterface(channel, _ssids);
        },

        // (19) virtual uint32_t AddToKnownSSIDs(const Exchange::INetworkManager::WiFiConnectTo&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Exchange::INetworkManager::WiFiConnectTo _ssid{};
            _ssid.ssid = reader.Text();
            _ssid.passphrase = reader.Text();
            _ssid.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
            _ssid.ca_cert = reader.Text();
            _ssid.client_cert = reader.Text();
            _ssid.private_key = reader.Text();
            _ssid.private_key_passwd = reader.Text();
            _ssid.eap = reader.Text();
            _ssid.eap_identity = reader.Text();
            _ssid.eap_password = reader.Text();
            _ssid.eap_phase1 = reader.Text();
            _ssid.eap_phase2 = reader.Text();
            _ssid.persist = reader.Boolean();

            uint32_t result = implementation->AddToKnownSSIDs(static_cast<const Exchange::INetworkManager::WiFiConnectTo&>(_ssid));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (20) virtual uint32_t RemoveKnownSSID(const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _ssid = reader.Text();

            uint32_t result = implementation->RemoveKnownSSID(static_cast<const string&>(_ssid));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (21) virtual uint32_t WiFiConnect(const Exchange::INetworkManager::WiFiConnectTo&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            Exchange::INetworkManager::WiFiConnectTo _ssid{};
            _ssid.ssid = reader.Text();
            _ssid.passphrase = reader.Text();
            _ssid.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
            _ssid.ca_cert = reader.Text();
            _ssid.client_cert = reader.Text();
            _ssid.private_key = reader.Text();
            _ssid.private_key_passwd = reader.Text();
            _ssid.eap = reader.Text();
            _ssid.eap_identity = reader.Text();
            _ssid.eap_password = reader.Text();
            _ssid.eap_phase1 = reader.Text();
            _ssid.eap_phase2 = reader.Text();
            _ssid.persist = reader.Boolean();

            uint32_t result = implementation->WiFiConnect(static_cast<const Exchange::INetworkManager::WiFiConnectTo&>(_ssid));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (22) virtual uint32_t WiFiDisconnect() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->WiFiDisconnect();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (23) virtual uint32_t GetConnectedSSID(Exchange::INetworkManager::WiFiSSIDInfo&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::WiFiSSIDInfo _ssidInfo{};

            uint32_t result = implementation->GetConnectedSSID(_ssidInfo);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_ssidInfo.ssid);
            writer.Text(_ssidInfo.bssid);
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(_ssidInfo.security);
            writer.Text(_ssidInfo.strength);
            writer.Text(_ssidInfo.frequency);
            writer.Text(_ssidInfo.rate);
            writer.Text(_ssidInfo.noise);
        },

        // (24) virtual uint32_t StartWPS(const Exchange::INetworkManager::WiFiWPS&, const string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetworkManager::WiFiWPS _method = reader.Number<Exchange::INetworkManager::WiFiWPS>();
            const string _pin = reader.Text();

            uint32_t result = implementation->StartWPS(static_cast<const Exchange::INetworkManager::WiFiWPS&>(_method), static_cast<const string&>(_pin));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (25) virtual uint32_t StopWPS() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->StopWPS();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (26) virtual uint32_t GetWifiState(Exchange::INetworkManager::WiFiState&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::WiFiState _state{};

            uint32_t result = implementation->GetWifiState(_state);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::INetworkManager::WiFiState>(_state);
        },

        // (27) virtual uint32_t GetWiFiSignalQuality(string&, string&, string&, string&, Exchange::INetworkManager::WiFiSignalQuality&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _ssid{};
            string _strength{};
            string _noise{};
            string _snr{};
            Exchange::INetworkManager::WiFiSignalQuality _quality{};

            uint32_t result = implementation->GetWiFiSignalQuality(_ssid, _strength, _noise, _snr, _quality);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Text(_ssid);
            writer.Text(_strength);
            writer.Text(_noise);
            writer.Text(_snr);
            writer.Number<Exchange::INetworkManager::WiFiSignalQuality>(_quality);
        },

        // (28) virtual uint32_t GetSupportedSecurityModes(Exchange::INetworkManager::ISecurityModeIterator*&) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const Exchange::INetworkManager* implementation = reinterpret_cast<const Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::ISecurityModeIterator* _modes{};

            uint32_t result = implementation->GetSupportedSecurityModes(_modes);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Core::instance_id>(RPC::instance_cast(_modes));

            RPC::Administrator::Instance().RegisterInterface(channel, _modes);
        },

        // (29) virtual uint32_t SetLogLevel(const Exchange::INetworkManager::Logging&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetworkManager::Logging _level = reader.Number<Exchange::INetworkManager::Logging>();

            uint32_t result = implementation->SetLogLevel(static_cast<const Exchange::INetworkManager::Logging&>(_level));

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (30) virtual uint32_t GetLogLevel(Exchange::INetworkManager::Logging&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            Exchange::INetworkManager::Logging _level{};

            uint32_t result = implementation->GetLogLevel(_level);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
            writer.Number<Exchange::INetworkManager::Logging>(_level);
        },

        // (31) virtual uint32_t Configure(PluginHost::IShell*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id serviceImplementation = reader.Number<Core::instance_id>();

            PluginHost::IShell* _service = nullptr;
            ProxyStub::UnknownProxy* serviceProxy = nullptr;
            if (serviceImplementation != 0) {
                serviceProxy = RPC::Administrator::Instance().ProxyInstance(channel, serviceImplementation, false, _service);

                ASSERT((_service != nullptr) && (serviceProxy != nullptr));
            }

            uint32_t result = implementation->Configure(_service);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (serviceProxy != nullptr) {
                RPC::Administrator::Instance().Release(serviceProxy, message->Response());
            }
        },

        // (32) virtual uint32_t Register(Exchange::INetworkManager::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::INetworkManager::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);

                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Register(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (33) virtual uint32_t Unregister(Exchange::INetworkManager::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager* implementation = reinterpret_cast<Exchange::INetworkManager*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            Exchange::INetworkManager::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);

                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            uint32_t result = implementation->Unregister(_notification);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        }
    }; // ExchangeNetworkManagerStubMethods

    //
    // Exchange::INetworkManager::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void onInterfaceStateChange(const Exchange::INetworkManager::InterfaceState, const string) = 0
    //  (1) virtual void onActiveInterfaceChange(const string, const string) = 0
    //  (2) virtual void onIPAddressChange(const string, const string, const string, const Exchange::INetworkManager::IPStatus) = 0
    //  (3) virtual void onInternetStatusChange(const Exchange::INetworkManager::InternetStatus, const Exchange::INetworkManager::InternetStatus) = 0
    //  (4) virtual void onAvailableSSIDs(const string) = 0
    //  (5) virtual void onWiFiStateChange(const Exchange::INetworkManager::WiFiState) = 0
    //  (6) virtual void onWiFiSignalQualityChange(const string, const string, const string, const string, const Exchange::INetworkManager::WiFiSignalQuality) = 0
    //

    ProxyStub::MethodHandler ExchangeNetworkManagerNotificationStubMethods[] = {
        // (0) virtual void onInterfaceStateChange(const Exchange::INetworkManager::InterfaceState, const string) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetworkManager::InterfaceState _state = reader.Number<Exchange::INetworkManager::InterfaceState>();
            const string _interface = reader.Text();

            implementation->onInterfaceStateChange(_state, _interface);
        },

        // (1) virtual void onActiveInterfaceChange(const string, const string) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _prevActiveInterface = reader.Text();
            const string _currentActiveInterface = reader.Text();

            implementation->onActiveInterfaceChange(_prevActiveInterface, _currentActiveInterface);
        },

        // (2) virtual void onIPAddressChange(const string, const string, const string, const Exchange::INetworkManager::IPStatus) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _interface = reader.Text();
            const string _ipversion = reader.Text();
            const string _ipaddress = reader.Text();
            const Exchange::INetworkManager::IPStatus _status = reader.Number<Exchange::INetworkManager::IPStatus>();

            implementation->onIPAddressChange(_interface, _ipversion, _ipaddress, _status);
        },

        // (3) virtual void onInternetStatusChange(const Exchange::INetworkManager::InternetStatus, const Exchange::INetworkManager::InternetStatus) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetworkManager::InternetStatus _prevState = reader.Number<Exchange::INetworkManager::InternetStatus>();
            const Exchange::INetworkManager::InternetStatus _currState = reader.Number<Exchange::INetworkManager::InternetStatus>();

            implementation->onInternetStatusChange(_prevState, _currState);
        },

        // (4) virtual void onAvailableSSIDs(const string) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _jsonOfScanResults = reader.Text();

            implementation->onAvailableSSIDs(_jsonOfScanResults);
        },

        // (5) virtual void onWiFiStateChange(const Exchange::INetworkManager::WiFiState) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Exchange::INetworkManager::WiFiState _state = reader.Number<Exchange::INetworkManager::WiFiState>();

            implementation->onWiFiStateChange(_state);
        },

        // (6) virtual void onWiFiSignalQualityChange(const string, const string, const string, const string, const Exchange::INetworkManager::WiFiSignalQuality) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            Exchange::INetworkManager::INotification* implementation = reinterpret_cast<Exchange::INetworkManager::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const string _ssid = reader.Text();
            const string _strength = reader.Text();
            const string _noise = reader.Text();
            const string _snr = reader.Text();
            const Exchange::INetworkManager::WiFiSignalQuality _quality = reader.Number<Exchange::INetworkManager::WiFiSignalQuality>();

            implementation->onWiFiSignalQualityChange(_ssid, _strength, _noise, _snr, _quality);
        }
    }; // ExchangeNetworkManagerNotificationStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // RPC::IIteratorTypeInstance03682DC2 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::INetworkManager::InterfaceDetails&) = 0
    //  (1) virtual bool Previous(Exchange::INetworkManager::InterfaceDetails&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::INetworkManager::InterfaceDetails Current() const = 0
    //

    class RPCIteratorTypeInstance03682DC2Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>> {
    public:
        RPCIteratorTypeInstance03682DC2Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        bool Next(Exchange::INetworkManager::InterfaceDetails& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info.type = reader.Number<Exchange::INetworkManager::InterfaceType>();
            _info.name = reader.Text();
            _info.mac = reader.Text();
            _info.enabled = reader.Boolean();
            _info.connected = reader.Boolean();

            return (result);
        }

        bool Previous(Exchange::INetworkManager::InterfaceDetails& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info.type = reader.Number<Exchange::INetworkManager::InterfaceType>();
            _info.name = reader.Text();
            _info.mac = reader.Text();
            _info.enabled = reader.Boolean();
            _info.connected = reader.Boolean();

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            UnknownProxyType::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            return (result);
        }

        Exchange::INetworkManager::InterfaceDetails Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::INetworkManager::InterfaceDetails result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result.type = reader.Number<Exchange::INetworkManager::InterfaceType>();
            result.name = reader.Text();
            result.mac = reader.Text();
            result.enabled = reader.Boolean();
            result.connected = reader.Boolean();

            return (result);
        }

    }; // class RPCIteratorTypeInstance03682DC2Proxy

    //
    // RPC::IIteratorTypeInstance8C930906 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
    //  (1) virtual bool Previous(Exchange::INetworkManager::WIFISecurityModeInfo&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual Exchange::INetworkManager::WIFISecurityModeInfo Current() const = 0
    //

    class RPCIteratorTypeInstance8C930906Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>> {
    public:
        RPCIteratorTypeInstance8C930906Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        bool Next(Exchange::INetworkManager::WIFISecurityModeInfo& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
            _info.securityName = reader.Text();

            return (result);
        }

        bool Previous(Exchange::INetworkManager::WIFISecurityModeInfo& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
            _info.securityName = reader.Text();

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            UnknownProxyType::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            return (result);
        }

        Exchange::INetworkManager::WIFISecurityModeInfo Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            Exchange::INetworkManager::WIFISecurityModeInfo result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
            result.securityName = reader.Text();

            return (result);
        }

    }; // class RPCIteratorTypeInstance8C930906Proxy

    //
    // RPC::IIteratorTypeInstance9CAEC085 interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    class RPCIteratorTypeInstance9CAEC085Proxy final : public ProxyStub::UnknownProxyType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>> {
    public:
        RPCIteratorTypeInstance9CAEC085Proxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        bool Next(string& _info) override
        {
            IPCMessage message(BaseClass::Message(0));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info = reader.Text();

            return (result);
        }

        bool Previous(string& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info = reader.Text();

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            UnknownProxyType::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(3));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(4));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            return (result);
        }

        string Current() const override
        {
            IPCMessage message(BaseClass::Message(5));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class RPCIteratorTypeInstance9CAEC085Proxy

    //
    // Exchange::INetworkManager interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint32_t GetAvailableInterfaces(Exchange::INetworkManager::IInterfaceDetailsIterator*&) = 0
    //  (1) virtual uint32_t GetPrimaryInterface(string&) = 0
    //  (2) virtual uint32_t SetPrimaryInterface(const string&) = 0
    //  (3) virtual uint32_t SetInterfaceState(const string&, const bool) = 0
    //  (4) virtual uint32_t GetInterfaceState(const string&, bool&) = 0
    //  (5) virtual uint32_t GetIPSettings(string&, const string&, Exchange::INetworkManager::IPAddress&) = 0
    //  (6) virtual uint32_t SetIPSettings(const string&, const Exchange::INetworkManager::IPAddress&) = 0
    //  (7) virtual uint32_t GetStunEndpoint(string&, uint32_t&, uint32_t&, uint32_t&) const = 0
    //  (8) virtual uint32_t SetStunEndpoint(const string, const uint32_t, const uint32_t, const uint32_t) = 0
    //  (9) virtual uint32_t GetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator*&) const = 0
    //  (10) virtual uint32_t SetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator* const) = 0
    //  (11) virtual uint32_t IsConnectedToInternet(string&, string&, Exchange::INetworkManager::InternetStatus&) = 0
    //  (12) virtual uint32_t GetCaptivePortalURI(string&) const = 0
    //  (13) virtual uint32_t GetPublicIP(string&, string&, string&) = 0
    //  (14) virtual uint32_t Ping(const string, const string, const uint32_t, const uint16_t, const string, string&) = 0
    //  (15) virtual uint32_t Trace(const string, const string, const uint32_t, const string, string&) = 0
    //  (16) virtual uint32_t StartWiFiScan(const string&, Exchange::INetworkManager::IStringIterator* const) = 0
    //  (17) virtual uint32_t StopWiFiScan() = 0
    //  (18) virtual uint32_t GetKnownSSIDs(Exchange::INetworkManager::IStringIterator*&) = 0
    //  (19) virtual uint32_t AddToKnownSSIDs(const Exchange::INetworkManager::WiFiConnectTo&) = 0
    //  (20) virtual uint32_t RemoveKnownSSID(const string&) = 0
    //  (21) virtual uint32_t WiFiConnect(const Exchange::INetworkManager::WiFiConnectTo&) = 0
    //  (22) virtual uint32_t WiFiDisconnect() = 0
    //  (23) virtual uint32_t GetConnectedSSID(Exchange::INetworkManager::WiFiSSIDInfo&) = 0
    //  (24) virtual uint32_t StartWPS(const Exchange::INetworkManager::WiFiWPS&, const string&) = 0
    //  (25) virtual uint32_t StopWPS() = 0
    //  (26) virtual uint32_t GetWifiState(Exchange::INetworkManager::WiFiState&) = 0
    //  (27) virtual uint32_t GetWiFiSignalQuality(string&, string&, string&, string&, Exchange::INetworkManager::WiFiSignalQuality&) = 0
    //  (28) virtual uint32_t GetSupportedSecurityModes(Exchange::INetworkManager::ISecurityModeIterator*&) const = 0
    //  (29) virtual uint32_t SetLogLevel(const Exchange::INetworkManager::Logging&) = 0
    //  (30) virtual uint32_t GetLogLevel(Exchange::INetworkManager::Logging&) = 0
    //  (31) virtual uint32_t Configure(PluginHost::IShell*) = 0
    //  (32) virtual uint32_t Register(Exchange::INetworkManager::INotification*) = 0
    //  (33) virtual uint32_t Unregister(Exchange::INetworkManager::INotification*) = 0
    //

    class ExchangeNetworkManagerProxy final : public ProxyStub::UnknownProxyType<Exchange::INetworkManager> {
    public:
        ExchangeNetworkManagerProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        uint32_t GetAvailableInterfaces(Exchange::INetworkManager::IInterfaceDetailsIterator*& _interfaces) override
        {
            IPCMessage message(BaseClass::Message(0));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _interfaces = reinterpret_cast<Exchange::INetworkManager::IInterfaceDetailsIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::INetworkManager::IInterfaceDetailsIterator::ID));
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetPrimaryInterface(string& _interface) override
        {
            IPCMessage message(BaseClass::Message(1));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _interface = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetPrimaryInterface(const string& _interface) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_interface));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetInterfaceState(const string& _interface, const bool _enabled) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_interface));
            writer.Boolean(_enabled);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetInterfaceState(const string& _interface, bool& _enabled) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_interface));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _enabled = reader.Boolean();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetIPSettings(string& _interface, const string& _ipversion, Exchange::INetworkManager::IPAddress& _address) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_interface);
            writer.Text(static_cast<const string&>(_ipversion));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _interface = reader.Text();
                    _address.ipversion = reader.Text();
                    _address.autoconfig = reader.Boolean();
                    _address.dhcpserver = reader.Text();
                    _address.ula = reader.Text();
                    _address.ipaddress = reader.Text();
                    _address.prefix = reader.Number<uint32_t>();
                    _address.gateway = reader.Text();
                    _address.primarydns = reader.Text();
                    _address.secondarydns = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetIPSettings(const string& _interface, const Exchange::INetworkManager::IPAddress& _address) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_interface));
            writer.Text(_address.ipversion);
            writer.Boolean(_address.autoconfig);
            writer.Text(_address.dhcpserver);
            writer.Text(_address.ula);
            writer.Text(_address.ipaddress);
            writer.Number<uint32_t>(_address.prefix);
            writer.Text(_address.gateway);
            writer.Text(_address.primarydns);
            writer.Text(_address.secondarydns);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetStunEndpoint(string& _endpoint, uint32_t& _port, uint32_t& _timeout, uint32_t& _cacheLifetime) const override
        {
            IPCMessage message(BaseClass::Message(7));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _endpoint = reader.Text();
                    _port = reader.Number<uint32_t>();
                    _timeout = reader.Number<uint32_t>();
                    _cacheLifetime = reader.Number<uint32_t>();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetStunEndpoint(const string _endpoint, const uint32_t _port, const uint32_t _timeout, const uint32_t _cacheLifetime) override
        {
            IPCMessage message(BaseClass::Message(8));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_endpoint);
            writer.Number<uint32_t>(_port);
            writer.Number<uint32_t>(_timeout);
            writer.Number<uint32_t>(_cacheLifetime);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator*& _endpoints) const override
        {
            IPCMessage message(BaseClass::Message(9));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _endpoints = reinterpret_cast<Exchange::INetworkManager::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::INetworkManager::IStringIterator::ID));
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetConnectivityTestEndpoints(Exchange::INetworkManager::IStringIterator* const _endpoints) override
        {
            IPCMessage message(BaseClass::Message(10));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_endpoints));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();

                Complete(reader);
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t IsConnectedToInternet(string& _ipversion, string& _interface, Exchange::INetworkManager::InternetStatus& _status) override
        {
            IPCMessage message(BaseClass::Message(11));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ipversion);
            writer.Text(_interface);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _ipversion = reader.Text();
                    _interface = reader.Text();
                    _status = reader.Number<Exchange::INetworkManager::InternetStatus>();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetCaptivePortalURI(string& _uri) const override
        {
            IPCMessage message(BaseClass::Message(12));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _uri = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetPublicIP(string& _interface, string& _ipversion, string& _ipaddress) override
        {
            IPCMessage message(BaseClass::Message(13));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_interface);
            writer.Text(_ipversion);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _interface = reader.Text();
                    _ipversion = reader.Text();
                    _ipaddress = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t Ping(const string _ipversion, const string _endpoint, const uint32_t _count, const uint16_t _timeout, const string _guid, string& _response) override
        {
            IPCMessage message(BaseClass::Message(14));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ipversion);
            writer.Text(_endpoint);
            writer.Number<uint32_t>(_count);
            writer.Number<uint16_t>(_timeout);
            writer.Text(_guid);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _response = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t Trace(const string _ipversion, const string _endpoint, const uint32_t _nqueries, const string _guid, string& _response) override
        {
            IPCMessage message(BaseClass::Message(15));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ipversion);
            writer.Text(_endpoint);
            writer.Number<uint32_t>(_nqueries);
            writer.Text(_guid);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _response = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t StartWiFiScan(const string& _frequency, Exchange::INetworkManager::IStringIterator* const _ssids) override
        {
            IPCMessage message(BaseClass::Message(16));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_frequency));
            writer.Number<Core::instance_id>(RPC::instance_cast(_ssids));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();

                Complete(reader);
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t StopWiFiScan() override
        {
            IPCMessage message(BaseClass::Message(17));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetKnownSSIDs(Exchange::INetworkManager::IStringIterator*& _ssids) override
        {
            IPCMessage message(BaseClass::Message(18));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _ssids = reinterpret_cast<Exchange::INetworkManager::IStringIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::INetworkManager::IStringIterator::ID));
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t AddToKnownSSIDs(const Exchange::INetworkManager::WiFiConnectTo& _ssid) override
        {
            IPCMessage message(BaseClass::Message(19));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ssid.ssid);
            writer.Text(_ssid.passphrase);
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(_ssid.security);
            writer.Text(_ssid.ca_cert);
            writer.Text(_ssid.client_cert);
            writer.Text(_ssid.private_key);
            writer.Text(_ssid.private_key_passwd);
            writer.Text(_ssid.eap);
            writer.Text(_ssid.eap_identity);
            writer.Text(_ssid.eap_password);
            writer.Text(_ssid.eap_phase1);
            writer.Text(_ssid.eap_phase2);
            writer.Boolean(_ssid.persist);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t RemoveKnownSSID(const string& _ssid) override
        {
            IPCMessage message(BaseClass::Message(20));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(static_cast<const string&>(_ssid));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t WiFiConnect(const Exchange::INetworkManager::WiFiConnectTo& _ssid) override
        {
            IPCMessage message(BaseClass::Message(21));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ssid.ssid);
            writer.Text(_ssid.passphrase);
            writer.Number<Exchange::INetworkManager::WIFISecurityMode>(_ssid.security);
            writer.Text(_ssid.ca_cert);
            writer.Text(_ssid.client_cert);
            writer.Text(_ssid.private_key);
            writer.Text(_ssid.private_key_passwd);
            writer.Text(_ssid.eap);
            writer.Text(_ssid.eap_identity);
            writer.Text(_ssid.eap_password);
            writer.Text(_ssid.eap_phase1);
            writer.Text(_ssid.eap_phase2);
            writer.Boolean(_ssid.persist);

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t WiFiDisconnect() override
        {
            IPCMessage message(BaseClass::Message(22));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetConnectedSSID(Exchange::INetworkManager::WiFiSSIDInfo& _ssidInfo) override
        {
            IPCMessage message(BaseClass::Message(23));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _ssidInfo.ssid = reader.Text();
                    _ssidInfo.bssid = reader.Text();
                    _ssidInfo.security = reader.Number<Exchange::INetworkManager::WIFISecurityMode>();
                    _ssidInfo.strength = reader.Text();
                    _ssidInfo.frequency = reader.Text();
                    _ssidInfo.rate = reader.Text();
                    _ssidInfo.noise = reader.Text();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t StartWPS(const Exchange::INetworkManager::WiFiWPS& _method, const string& _pin) override
        {
            IPCMessage message(BaseClass::Message(24));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetworkManager::WiFiWPS>(static_cast<const Exchange::INetworkManager::WiFiWPS&>(_method));
            writer.Text(static_cast<const string&>(_pin));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t StopWPS() override
        {
            IPCMessage message(BaseClass::Message(25));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetWifiState(Exchange::INetworkManager::WiFiState& _state) override
        {
            IPCMessage message(BaseClass::Message(26));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _state = reader.Number<Exchange::INetworkManager::WiFiState>();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetWiFiSignalQuality(string& _ssid, string& _strength, string& _noise, string& _snr, Exchange::INetworkManager::WiFiSignalQuality& _quality) override
        {
            IPCMessage message(BaseClass::Message(27));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _ssid = reader.Text();
                    _strength = reader.Text();
                    _noise = reader.Text();
                    _snr = reader.Text();
                    _quality = reader.Number<Exchange::INetworkManager::WiFiSignalQuality>();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetSupportedSecurityModes(Exchange::INetworkManager::ISecurityModeIterator*& _modes) const override
        {
            IPCMessage message(BaseClass::Message(28));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _modes = reinterpret_cast<Exchange::INetworkManager::ISecurityModeIterator*>(Interface(reader.Number<Core::instance_id>(), Exchange::INetworkManager::ISecurityModeIterator::ID));
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t SetLogLevel(const Exchange::INetworkManager::Logging& _level) override
        {
            IPCMessage message(BaseClass::Message(29));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetworkManager::Logging>(static_cast<const Exchange::INetworkManager::Logging&>(_level));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t GetLogLevel(Exchange::INetworkManager::Logging& _level) override
        {
            IPCMessage message(BaseClass::Message(30));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();
                if ((hresult & COM_ERROR) == 0) {
                    _level = reader.Number<Exchange::INetworkManager::Logging>();
                }
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t Configure(PluginHost::IShell* _service) override
        {
            IPCMessage message(BaseClass::Message(31));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_service));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();

                Complete(reader);
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t Register(Exchange::INetworkManager::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(32));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();

                Complete(reader);
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

        uint32_t Unregister(Exchange::INetworkManager::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(33));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            Core::hresult hresult = UnknownProxyType::Invoke(message);
            if (hresult == Core::ERROR_NONE) {
                RPC::Data::Frame::Reader reader(message->Response().Reader());
                hresult = reader.Number<uint32_t>();

                Complete(reader);
            } else {
                hresult |= COM_ERROR;
            }

            return (hresult);
        }

    }; // class ExchangeNetworkManagerProxy

    //
    // Exchange::INetworkManager::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void onInterfaceStateChange(const Exchange::INetworkManager::InterfaceState, const string) = 0
    //  (1) virtual void onActiveInterfaceChange(const string, const string) = 0
    //  (2) virtual void onIPAddressChange(const string, const string, const string, const Exchange::INetworkManager::IPStatus) = 0
    //  (3) virtual void onInternetStatusChange(const Exchange::INetworkManager::InternetStatus, const Exchange::INetworkManager::InternetStatus) = 0
    //  (4) virtual void onAvailableSSIDs(const string) = 0
    //  (5) virtual void onWiFiStateChange(const Exchange::INetworkManager::WiFiState) = 0
    //  (6) virtual void onWiFiSignalQualityChange(const string, const string, const string, const string, const Exchange::INetworkManager::WiFiSignalQuality) = 0
    //

    class ExchangeNetworkManagerNotificationProxy final : public ProxyStub::UnknownProxyType<Exchange::INetworkManager::INotification> {
    public:
        ExchangeNetworkManagerNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        void onInterfaceStateChange(const Exchange::INetworkManager::InterfaceState _state, const string _interface) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetworkManager::InterfaceState>(_state);
            writer.Text(_interface);

            UnknownProxyType::Invoke(message);
        }

        void onActiveInterfaceChange(const string _prevActiveInterface, const string _currentActiveInterface) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_prevActiveInterface);
            writer.Text(_currentActiveInterface);

            UnknownProxyType::Invoke(message);
        }

        void onIPAddressChange(const string _interface, const string _ipversion, const string _ipaddress, const Exchange::INetworkManager::IPStatus _status) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_interface);
            writer.Text(_ipversion);
            writer.Text(_ipaddress);
            writer.Number<Exchange::INetworkManager::IPStatus>(_status);

            UnknownProxyType::Invoke(message);
        }

        void onInternetStatusChange(const Exchange::INetworkManager::InternetStatus _prevState, const Exchange::INetworkManager::InternetStatus _currState) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetworkManager::InternetStatus>(_prevState);
            writer.Number<Exchange::INetworkManager::InternetStatus>(_currState);

            UnknownProxyType::Invoke(message);
        }

        void onAvailableSSIDs(const string _jsonOfScanResults) override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_jsonOfScanResults);

            UnknownProxyType::Invoke(message);
        }

        void onWiFiStateChange(const Exchange::INetworkManager::WiFiState _state) override
        {
            IPCMessage message(BaseClass::Message(5));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Exchange::INetworkManager::WiFiState>(_state);

            UnknownProxyType::Invoke(message);
        }

        void onWiFiSignalQualityChange(const string _ssid, const string _strength, const string _noise, const string _snr, const Exchange::INetworkManager::WiFiSignalQuality _quality) override
        {
            IPCMessage message(BaseClass::Message(6));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Text(_ssid);
            writer.Text(_strength);
            writer.Text(_noise);
            writer.Text(_snr);
            writer.Number<Exchange::INetworkManager::WiFiSignalQuality>(_quality);

            UnknownProxyType::Invoke(message);
        }

    }; // class ExchangeNetworkManagerNotificationProxy

    POP_WARNING()
    POP_WARNING()

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>, RPCIteratorTypeInstance03682DC2StubMethods> RPCIteratorTypeInstance03682DC2Stub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>, RPCIteratorTypeInstance8C930906StubMethods> RPCIteratorTypeInstance8C930906Stub;
        typedef ProxyStub::UnknownStubType<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstance9CAEC085StubMethods> RPCIteratorTypeInstance9CAEC085Stub;
        typedef ProxyStub::UnknownStubType<Exchange::INetworkManager, ExchangeNetworkManagerStubMethods> ExchangeNetworkManagerStub;
        typedef ProxyStub::UnknownStubType<Exchange::INetworkManager::INotification, ExchangeNetworkManagerNotificationStubMethods> ExchangeNetworkManagerNotificationStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>, RPCIteratorTypeInstance03682DC2Proxy, RPCIteratorTypeInstance03682DC2Stub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>, RPCIteratorTypeInstance8C930906Proxy, RPCIteratorTypeInstance8C930906Stub>();
                RPC::Administrator::Instance().Announce<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>, RPCIteratorTypeInstance9CAEC085Proxy, RPCIteratorTypeInstance9CAEC085Stub>();
                RPC::Administrator::Instance().Announce<Exchange::INetworkManager, ExchangeNetworkManagerProxy, ExchangeNetworkManagerStub>();
                RPC::Administrator::Instance().Announce<Exchange::INetworkManager::INotification, ExchangeNetworkManagerNotificationProxy, ExchangeNetworkManagerNotificationStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::INetworkManager::InterfaceDetails, Exchange::ID_NETWORKMANAGER_INTERFACE_DETAILS_ITERATOR>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<Exchange::INetworkManager::WIFISecurityModeInfo, Exchange::ID_NETWORKMANAGER_WIFI_SECURITY_MODE_ITERATOR>>();
                RPC::Administrator::Instance().Recall<RPC::IIteratorType<string, RPC::ID_STRINGITERATOR>>();
                RPC::Administrator::Instance().Recall<Exchange::INetworkManager>();
                RPC::Administrator::Instance().Recall<Exchange::INetworkManager::INotification>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
