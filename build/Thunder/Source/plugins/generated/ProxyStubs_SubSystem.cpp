//
// generated automatically from "ISubSystem.h"
//
// implements COM-RPC proxy stubs for:
//   - class PluginHost::IMetadata
//   - class PluginHost::ISubSystem
//   - class PluginHost::ISubSystem::INotification
//   - class PluginHost::ISubSystem::ISecurity
//   - class PluginHost::ISubSystem::IInternet
//   - class PluginHost::ISubSystem::ILocation
//   - class PluginHost::ISubSystem::IIdentifier
//   - class PluginHost::ISubSystem::ITime
//   - class PluginHost::ISubSystem::IProvisioning
//   - class PluginHost::ISubSystem::IDecryption
//

#include "Module.h"
#include "ISubSystem.h"

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
    // PluginHost::IMetadata interface stub definitions
    //
    // Methods:
    //  (0) virtual string BuildTreeHash() const = 0
    //  (1) virtual uint8_t Major() const = 0
    //  (2) virtual uint8_t Minor() const = 0
    //  (3) virtual uint8_t Patch() const = 0
    //

    ProxyStub::MethodHandler PluginHostMetadataStubMethods[] = {
        // (0) virtual string BuildTreeHash() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IMetadata* implementation = reinterpret_cast<const PluginHost::IMetadata*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->BuildTreeHash();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual uint8_t Major() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IMetadata* implementation = reinterpret_cast<const PluginHost::IMetadata*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Major();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        },

        // (2) virtual uint8_t Minor() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IMetadata* implementation = reinterpret_cast<const PluginHost::IMetadata*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Minor();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        },

        // (3) virtual uint8_t Patch() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::IMetadata* implementation = reinterpret_cast<const PluginHost::IMetadata*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint8_t result = implementation->Patch();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
        }
    }; // PluginHostMetadataStubMethods

    //
    // PluginHost::ISubSystem interface stub definitions
    //
    // Methods:
    //  (0) virtual void Register(PluginHost::ISubSystem::INotification*) = 0
    //  (1) virtual void Unregister(PluginHost::ISubSystem::INotification*) = 0
    //  (2) virtual void Set(const PluginHost::ISubSystem::subsystem, Core::IUnknown*) = 0
    //  (3) virtual const Core::IUnknown* Get(const PluginHost::ISubSystem::subsystem) const = 0
    //  (4) virtual bool IsActive(const PluginHost::ISubSystem::subsystem) const = 0
    //  (5) virtual string BuildTreeHash() const = 0
    //  (6) virtual string Version() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemStubMethods[] = {
        // (0) virtual void Register(PluginHost::ISubSystem::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem* implementation = reinterpret_cast<PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            PluginHost::ISubSystem::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);

                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Register(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (1) virtual void Unregister(PluginHost::ISubSystem::INotification*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem* implementation = reinterpret_cast<PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const Core::instance_id notificationImplementation = reader.Number<Core::instance_id>();

            PluginHost::ISubSystem::INotification* _notification = nullptr;
            ProxyStub::UnknownProxy* notificationProxy = nullptr;
            if (notificationImplementation != 0) {
                notificationProxy = RPC::Administrator::Instance().ProxyInstance(channel, notificationImplementation, false, _notification);

                ASSERT((_notification != nullptr) && (notificationProxy != nullptr));
            }

            implementation->Unregister(_notification);

            if (notificationProxy != nullptr) {
                RPC::Administrator::Instance().Release(notificationProxy, message->Response());
            }
        },

        // (2) virtual void Set(const PluginHost::ISubSystem::subsystem, Core::IUnknown*) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem* implementation = reinterpret_cast<PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::ISubSystem::subsystem _type = reader.Number<PluginHost::ISubSystem::subsystem>();
            const Core::instance_id informationImplementation = reader.Number<Core::instance_id>();

            Core::IUnknown* _information = nullptr;
            ProxyStub::UnknownProxy* informationProxy = nullptr;
            if (informationImplementation != 0) {
                informationProxy = RPC::Administrator::Instance().ProxyInstance(channel, informationImplementation, false, _information);

                ASSERT((_information != nullptr) && (informationProxy != nullptr));
            }

            implementation->Set(_type, _information);

            if (informationProxy != nullptr) {
                RPC::Administrator::Instance().Release(informationProxy, message->Response());
            }
        },

        // (3) virtual const Core::IUnknown* Get(const PluginHost::ISubSystem::subsystem) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& channel, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem* implementation = reinterpret_cast<const PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::ISubSystem::subsystem _type = reader.Number<PluginHost::ISubSystem::subsystem>();

            const Core::IUnknown* result = implementation->Get(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(result));

            RPC::Administrator::Instance().RegisterInterface(channel, result);
        },

        // (4) virtual bool IsActive(const PluginHost::ISubSystem::subsystem) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem* implementation = reinterpret_cast<const PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const PluginHost::ISubSystem::subsystem _type = reader.Number<PluginHost::ISubSystem::subsystem>();

            bool result = implementation->IsActive(_type);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (5) virtual string BuildTreeHash() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem* implementation = reinterpret_cast<const PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->BuildTreeHash();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (6) virtual string Version() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem* implementation = reinterpret_cast<const PluginHost::ISubSystem*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Version();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostSubSystemStubMethods

    //
    // PluginHost::ISubSystem::INotification interface stub definitions
    //
    // Methods:
    //  (0) virtual void Updated() = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemNotificationStubMethods[] = {
        // (0) virtual void Updated() = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem::INotification* implementation = reinterpret_cast<PluginHost::ISubSystem::INotification*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            implementation->Updated();
        }
    }; // PluginHostSubSystemNotificationStubMethods

    //
    // PluginHost::ISubSystem::ISecurity interface stub definitions
    //
    // Methods:
    //  (0) virtual string Callsign() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemSecurityStubMethods[] = {
        // (0) virtual string Callsign() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ISecurity* implementation = reinterpret_cast<const PluginHost::ISubSystem::ISecurity*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Callsign();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostSubSystemSecurityStubMethods

    //
    // PluginHost::ISubSystem::IInternet interface stub definitions
    //
    // Methods:
    //  (0) virtual string PublicIPAddress() const = 0
    //  (1) virtual PluginHost::ISubSystem::IInternet::network_type NetworkType() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemInternetStubMethods[] = {
        // (0) virtual string PublicIPAddress() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IInternet* implementation = reinterpret_cast<const PluginHost::ISubSystem::IInternet*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->PublicIPAddress();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual PluginHost::ISubSystem::IInternet::network_type NetworkType() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IInternet* implementation = reinterpret_cast<const PluginHost::ISubSystem::IInternet*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            PluginHost::ISubSystem::IInternet::network_type result = implementation->NetworkType();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<PluginHost::ISubSystem::IInternet::network_type>(result);
        }
    }; // PluginHostSubSystemInternetStubMethods

    //
    // PluginHost::ISubSystem::ILocation interface stub definitions
    //
    // Methods:
    //  (0) virtual string TimeZone() const = 0
    //  (1) virtual string Country() const = 0
    //  (2) virtual string Region() const = 0
    //  (3) virtual string City() const = 0
    //  (4) virtual int32_t Latitude() const
    //  (5) virtual int32_t Longitude() const
    //

    ProxyStub::MethodHandler PluginHostSubSystemLocationStubMethods[] = {
        // (0) virtual string TimeZone() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->TimeZone();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual string Country() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Country();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (2) virtual string Region() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Region();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual string City() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->City();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (4) virtual int32_t Latitude() const
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            int32_t result = implementation->Latitude();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<int32_t>(result);
        },

        // (5) virtual int32_t Longitude() const
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ILocation* implementation = reinterpret_cast<const PluginHost::ISubSystem::ILocation*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            int32_t result = implementation->Longitude();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<int32_t>(result);
        }
    }; // PluginHostSubSystemLocationStubMethods

    //
    // PluginHost::ISubSystem::IIdentifier interface stub definitions
    //
    // Methods:
    //  (0) virtual uint8_t Identifier(const uint8_t, uint8_t*) const = 0
    //  (1) virtual string Architecture() const = 0
    //  (2) virtual string Chipset() const = 0
    //  (3) virtual string FirmwareVersion() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemIdentifierStubMethods[] = {
        // (0) virtual uint8_t Identifier(const uint8_t, uint8_t*) const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IIdentifier* implementation = reinterpret_cast<const PluginHost::ISubSystem::IIdentifier*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint8_t _length = reader.Number<uint8_t>();

            uint8_t* _buffer{};

            if (_length != 0) {
                _buffer = static_cast<uint8_t*>(ALLOCA(_length));
            }

            uint8_t result = implementation->Identifier(_length, _buffer);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint8_t>(result);
            writer.Buffer<uint8_t>(_length, _buffer);
        },

        // (1) virtual string Architecture() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IIdentifier* implementation = reinterpret_cast<const PluginHost::ISubSystem::IIdentifier*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Architecture();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (2) virtual string Chipset() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IIdentifier* implementation = reinterpret_cast<const PluginHost::ISubSystem::IIdentifier*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Chipset();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (3) virtual string FirmwareVersion() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IIdentifier* implementation = reinterpret_cast<const PluginHost::ISubSystem::IIdentifier*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->FirmwareVersion();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostSubSystemIdentifierStubMethods

    //
    // PluginHost::ISubSystem::ITime interface stub definitions
    //
    // Methods:
    //  (0) virtual uint64_t TimeSync() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemTimeStubMethods[] = {
        // (0) virtual uint64_t TimeSync() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::ITime* implementation = reinterpret_cast<const PluginHost::ISubSystem::ITime*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint64_t result = implementation->TimeSync();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint64_t>(result);
        }
    }; // PluginHostSubSystemTimeStubMethods

    //
    // PluginHost::ISubSystem::IProvisioning interface stub definitions
    //
    // Methods:
    //  (0) virtual string Storage() const = 0
    //  (1) virtual bool Next(string&) = 0
    //  (2) virtual bool Previous(string&) = 0
    //  (3) virtual void Reset(const uint32_t) = 0
    //  (4) virtual bool IsValid() const = 0
    //  (5) virtual uint32_t Count() const = 0
    //  (6) virtual string Current() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemProvisioningStubMethods[] = {
        // (0) virtual string Storage() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<const PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Storage();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        },

        // (1) virtual bool Next(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Next(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (2) virtual bool Previous(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string _info{};

            bool result = implementation->Previous(_info);

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
            writer.Text(_info);
        },

        // (3) virtual void Reset(const uint32_t) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (4) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<const PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (5) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<const PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (6) virtual string Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IProvisioning* implementation = reinterpret_cast<const PluginHost::ISubSystem::IProvisioning*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostSubSystemProvisioningStubMethods

    //
    // PluginHost::ISubSystem::IDecryption interface stub definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    ProxyStub::MethodHandler PluginHostSubSystemDecryptionStubMethods[] = {
        // (0) virtual bool Next(string&) = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
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
            PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
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
            PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            RPC::Data::Frame::Reader reader(message->Parameters().Reader());
            const uint32_t _position = reader.Number<uint32_t>();

            implementation->Reset(_position);
        },

        // (3) virtual bool IsValid() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<const PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            bool result = implementation->IsValid();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Boolean(result);
        },

        // (4) virtual uint32_t Count() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<const PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            uint32_t result = implementation->Count();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Number<uint32_t>(result);
        },

        // (5) virtual string Current() const = 0
        //
        [](Core::ProxyType<Core::IPCChannel>& /* channel */, Core::ProxyType<RPC::InvokeMessage>& message) {
            const PluginHost::ISubSystem::IDecryption* implementation = reinterpret_cast<const PluginHost::ISubSystem::IDecryption*>(message->Parameters().Implementation());
            ASSERT(implementation != nullptr);

            string result = implementation->Current();

            RPC::Data::Frame::Writer writer(message->Response().Writer());
            writer.Text(result);
        }
    }; // PluginHostSubSystemDecryptionStubMethods

    // -----------------------------------------------------------------
    // PROXIES
    // -----------------------------------------------------------------

    //
    // PluginHost::IMetadata interface proxy definitions
    //
    // Methods:
    //  (0) virtual string BuildTreeHash() const = 0
    //  (1) virtual uint8_t Major() const = 0
    //  (2) virtual uint8_t Minor() const = 0
    //  (3) virtual uint8_t Patch() const = 0
    //

    class PluginHostMetadataProxy final : public ProxyStub::UnknownProxyType<PluginHost::IMetadata> {
    public:
        PluginHostMetadataProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        string BuildTreeHash() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        uint8_t Major() const override
        {
            IPCMessage message(BaseClass::Message(1));

            uint8_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint8_t>();

            return (result);
        }

        uint8_t Minor() const override
        {
            IPCMessage message(BaseClass::Message(2));

            uint8_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint8_t>();

            return (result);
        }

        uint8_t Patch() const override
        {
            IPCMessage message(BaseClass::Message(3));

            uint8_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint8_t>();

            return (result);
        }

    }; // class PluginHostMetadataProxy

    //
    // PluginHost::ISubSystem interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Register(PluginHost::ISubSystem::INotification*) = 0
    //  (1) virtual void Unregister(PluginHost::ISubSystem::INotification*) = 0
    //  (2) virtual void Set(const PluginHost::ISubSystem::subsystem, Core::IUnknown*) = 0
    //  (3) virtual const Core::IUnknown* Get(const PluginHost::ISubSystem::subsystem) const = 0
    //  (4) virtual bool IsActive(const PluginHost::ISubSystem::subsystem) const = 0
    //  (5) virtual string BuildTreeHash() const = 0
    //  (6) virtual string Version() const = 0
    //

    class PluginHostSubSystemProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem> {
    public:
        PluginHostSubSystemProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        void Register(PluginHost::ISubSystem::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        void Unregister(PluginHost::ISubSystem::INotification* _notification) override
        {
            IPCMessage message(BaseClass::Message(1));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<Core::instance_id>(RPC::instance_cast(_notification));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        void Set(const PluginHost::ISubSystem::subsystem _type, Core::IUnknown* _information) override
        {
            IPCMessage message(BaseClass::Message(2));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::ISubSystem::subsystem>(_type);
            writer.Number<Core::instance_id>(RPC::instance_cast(_information));

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());

            Complete(reader);
        }

        const Core::IUnknown* Get(const PluginHost::ISubSystem::subsystem _type) const override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::ISubSystem::subsystem>(_type);

            const Core::IUnknown* result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reinterpret_cast<const Core::IUnknown*>(Interface(reader.Number<Core::instance_id>(), Core::IUnknown::ID));

            return (result);
        }

        bool IsActive(const PluginHost::ISubSystem::subsystem _type) const override
        {
            IPCMessage message(BaseClass::Message(4));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<PluginHost::ISubSystem::subsystem>(_type);

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();

            return (result);
        }

        string BuildTreeHash() const override
        {
            IPCMessage message(BaseClass::Message(5));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string Version() const override
        {
            IPCMessage message(BaseClass::Message(6));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class PluginHostSubSystemProxy

    //
    // PluginHost::ISubSystem::INotification interface proxy definitions
    //
    // Methods:
    //  (0) virtual void Updated() = 0
    //

    class PluginHostSubSystemNotificationProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::INotification> {
    public:
        PluginHostSubSystemNotificationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        void Updated() override
        {
            IPCMessage message(BaseClass::Message(0));

            UnknownProxyType::Invoke(message);
        }

    }; // class PluginHostSubSystemNotificationProxy

    //
    // PluginHost::ISubSystem::ISecurity interface proxy definitions
    //
    // Methods:
    //  (0) virtual string Callsign() const = 0
    //

    class PluginHostSubSystemSecurityProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::ISecurity> {
    public:
        PluginHostSubSystemSecurityProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        string Callsign() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class PluginHostSubSystemSecurityProxy

    //
    // PluginHost::ISubSystem::IInternet interface proxy definitions
    //
    // Methods:
    //  (0) virtual string PublicIPAddress() const = 0
    //  (1) virtual PluginHost::ISubSystem::IInternet::network_type NetworkType() const = 0
    //

    class PluginHostSubSystemInternetProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::IInternet> {
    public:
        PluginHostSubSystemInternetProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        string PublicIPAddress() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        PluginHost::ISubSystem::IInternet::network_type NetworkType() const override
        {
            IPCMessage message(BaseClass::Message(1));

            PluginHost::ISubSystem::IInternet::network_type result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<PluginHost::ISubSystem::IInternet::network_type>();

            return (result);
        }

    }; // class PluginHostSubSystemInternetProxy

    //
    // PluginHost::ISubSystem::ILocation interface proxy definitions
    //
    // Methods:
    //  (0) virtual string TimeZone() const = 0
    //  (1) virtual string Country() const = 0
    //  (2) virtual string Region() const = 0
    //  (3) virtual string City() const = 0
    //  (4) virtual int32_t Latitude() const
    //  (5) virtual int32_t Longitude() const
    //

    class PluginHostSubSystemLocationProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::ILocation> {
    public:
        PluginHostSubSystemLocationProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        string TimeZone() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string Country() const override
        {
            IPCMessage message(BaseClass::Message(1));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string Region() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string City() const override
        {
            IPCMessage message(BaseClass::Message(3));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        int32_t Latitude() const override
        {
            IPCMessage message(BaseClass::Message(4));

            int32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<int32_t>();

            return (result);
        }

        int32_t Longitude() const override
        {
            IPCMessage message(BaseClass::Message(5));

            int32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<int32_t>();

            return (result);
        }

    }; // class PluginHostSubSystemLocationProxy

    //
    // PluginHost::ISubSystem::IIdentifier interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint8_t Identifier(const uint8_t, uint8_t*) const = 0
    //  (1) virtual string Architecture() const = 0
    //  (2) virtual string Chipset() const = 0
    //  (3) virtual string FirmwareVersion() const = 0
    //

    class PluginHostSubSystemIdentifierProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::IIdentifier> {
    public:
        PluginHostSubSystemIdentifierProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        uint8_t Identifier(const uint8_t _length, uint8_t* _buffer) const override
        {
            IPCMessage message(BaseClass::Message(0));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint8_t>(_length);

            uint8_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint8_t>();
            reader.Buffer<uint8_t>(_length, _buffer);

            return (result);
        }

        string Architecture() const override
        {
            IPCMessage message(BaseClass::Message(1));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string Chipset() const override
        {
            IPCMessage message(BaseClass::Message(2));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        string FirmwareVersion() const override
        {
            IPCMessage message(BaseClass::Message(3));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class PluginHostSubSystemIdentifierProxy

    //
    // PluginHost::ISubSystem::ITime interface proxy definitions
    //
    // Methods:
    //  (0) virtual uint64_t TimeSync() const = 0
    //

    class PluginHostSubSystemTimeProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::ITime> {
    public:
        PluginHostSubSystemTimeProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        uint64_t TimeSync() const override
        {
            IPCMessage message(BaseClass::Message(0));

            uint64_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint64_t>();

            return (result);
        }

    }; // class PluginHostSubSystemTimeProxy

    //
    // PluginHost::ISubSystem::IProvisioning interface proxy definitions
    //
    // Methods:
    //  (0) virtual string Storage() const = 0
    //  (1) virtual bool Next(string&) = 0
    //  (2) virtual bool Previous(string&) = 0
    //  (3) virtual void Reset(const uint32_t) = 0
    //  (4) virtual bool IsValid() const = 0
    //  (5) virtual uint32_t Count() const = 0
    //  (6) virtual string Current() const = 0
    //

    class PluginHostSubSystemProvisioningProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::IProvisioning> {
    public:
        PluginHostSubSystemProvisioningProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

        string Storage() const override
        {
            IPCMessage message(BaseClass::Message(0));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

        bool Next(string& _info) override
        {
            IPCMessage message(BaseClass::Message(1));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info = reader.Text();

            return (result);
        }

        bool Previous(string& _info) override
        {
            IPCMessage message(BaseClass::Message(2));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();
            _info = reader.Text();

            return (result);
        }

        void Reset(const uint32_t _position) override
        {
            IPCMessage message(BaseClass::Message(3));

            RPC::Data::Frame::Writer writer(message->Parameters().Writer());
            writer.Number<uint32_t>(_position);

            UnknownProxyType::Invoke(message);
        }

        bool IsValid() const override
        {
            IPCMessage message(BaseClass::Message(4));

            bool result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Boolean();

            return (result);
        }

        uint32_t Count() const override
        {
            IPCMessage message(BaseClass::Message(5));

            uint32_t result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Number<uint32_t>();

            return (result);
        }

        string Current() const override
        {
            IPCMessage message(BaseClass::Message(6));

            string result{};

            UnknownProxyType::Invoke(message);
            RPC::Data::Frame::Reader reader(message->Response().Reader());
            result = reader.Text();

            return (result);
        }

    }; // class PluginHostSubSystemProvisioningProxy

    //
    // PluginHost::ISubSystem::IDecryption interface proxy definitions
    //
    // Methods:
    //  (0) virtual bool Next(string&) = 0
    //  (1) virtual bool Previous(string&) = 0
    //  (2) virtual void Reset(const uint32_t) = 0
    //  (3) virtual bool IsValid() const = 0
    //  (4) virtual uint32_t Count() const = 0
    //  (5) virtual string Current() const = 0
    //

    class PluginHostSubSystemDecryptionProxy final : public ProxyStub::UnknownProxyType<PluginHost::ISubSystem::IDecryption> {
    public:
        PluginHostSubSystemDecryptionProxy(const Core::ProxyType<Core::IPCChannel>& channel, const Core::instance_id implementation, const bool otherSideInformed)
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

    }; // class PluginHostSubSystemDecryptionProxy

    POP_WARNING()
    POP_WARNING()

    // -----------------------------------------------------------------
    // REGISTRATION
    // -----------------------------------------------------------------

    namespace {

        typedef ProxyStub::UnknownStubType<PluginHost::IMetadata, PluginHostMetadataStubMethods> PluginHostMetadataStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem, PluginHostSubSystemStubMethods> PluginHostSubSystemStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::INotification, PluginHostSubSystemNotificationStubMethods> PluginHostSubSystemNotificationStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::ISecurity, PluginHostSubSystemSecurityStubMethods> PluginHostSubSystemSecurityStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::IInternet, PluginHostSubSystemInternetStubMethods> PluginHostSubSystemInternetStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::ILocation, PluginHostSubSystemLocationStubMethods> PluginHostSubSystemLocationStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::IIdentifier, PluginHostSubSystemIdentifierStubMethods> PluginHostSubSystemIdentifierStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::ITime, PluginHostSubSystemTimeStubMethods> PluginHostSubSystemTimeStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::IProvisioning, PluginHostSubSystemProvisioningStubMethods> PluginHostSubSystemProvisioningStub;
        typedef ProxyStub::UnknownStubType<PluginHost::ISubSystem::IDecryption, PluginHostSubSystemDecryptionStubMethods> PluginHostSubSystemDecryptionStub;

        static class Instantiation {
        public:
            Instantiation()
            {
                RPC::Administrator::Instance().Announce<PluginHost::IMetadata, PluginHostMetadataProxy, PluginHostMetadataStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem, PluginHostSubSystemProxy, PluginHostSubSystemStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::INotification, PluginHostSubSystemNotificationProxy, PluginHostSubSystemNotificationStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::ISecurity, PluginHostSubSystemSecurityProxy, PluginHostSubSystemSecurityStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::IInternet, PluginHostSubSystemInternetProxy, PluginHostSubSystemInternetStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::ILocation, PluginHostSubSystemLocationProxy, PluginHostSubSystemLocationStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::IIdentifier, PluginHostSubSystemIdentifierProxy, PluginHostSubSystemIdentifierStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::ITime, PluginHostSubSystemTimeProxy, PluginHostSubSystemTimeStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::IProvisioning, PluginHostSubSystemProvisioningProxy, PluginHostSubSystemProvisioningStub>();
                RPC::Administrator::Instance().Announce<PluginHost::ISubSystem::IDecryption, PluginHostSubSystemDecryptionProxy, PluginHostSubSystemDecryptionStub>();
            }
            ~Instantiation()
            {
                RPC::Administrator::Instance().Recall<PluginHost::IMetadata>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::INotification>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::ISecurity>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::IInternet>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::ILocation>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::IIdentifier>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::ITime>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::IProvisioning>();
                RPC::Administrator::Instance().Recall<PluginHost::ISubSystem::IDecryption>();
            }
        } ProxyStubRegistration;

    } // namespace

} // namespace ProxyStubs

}
