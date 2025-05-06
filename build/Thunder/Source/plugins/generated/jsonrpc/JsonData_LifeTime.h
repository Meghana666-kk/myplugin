// C++ classes for LifeTime API JSON-RPC API.
// Generated automatically from 'IController.h'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace LifeTime {

        // Common classes
        //

        class ActivateParamsInfo : public Core::JSON::Container {
        public:
            ActivateParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("callsign"), &Callsign);
            }

            ActivateParamsInfo(const ActivateParamsInfo&) = delete;
            ActivateParamsInfo& operator=(const ActivateParamsInfo&) = delete;

        public:
            Core::JSON::String Callsign;
        }; // class ActivateParamsInfo

        // Method params/result classes
        //

        class HibernateParamsData : public Core::JSON::Container {
        public:
            HibernateParamsData()
                : Core::JSON::Container()
            {
                Add(_T("callsign"), &Callsign);
                Add(_T("timeout"), &Timeout);
            }

            HibernateParamsData(const HibernateParamsData&) = delete;
            HibernateParamsData& operator=(const HibernateParamsData&) = delete;

        public:
            Core::JSON::String Callsign;
            Core::JSON::DecUInt32 Timeout;
        }; // class HibernateParamsData

        class StateChangeParamsData : public Core::JSON::Container {
        public:
            StateChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("callsign"), &Callsign);
                Add(_T("state"), &State);
                Add(_T("reason"), &Reason);
            }

            StateChangeParamsData(const StateChangeParamsData&) = delete;
            StateChangeParamsData& operator=(const StateChangeParamsData&) = delete;

        public:
            Core::JSON::String Callsign;
            Core::JSON::EnumType<PluginHost::IShell::state> State;
            Core::JSON::EnumType<PluginHost::IShell::reason> Reason;
        }; // class StateChangeParamsData

    } // namespace LifeTime

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(PluginHost::IShell::state)
ENUM_CONVERSION_HANDLER(PluginHost::IShell::reason)

}

