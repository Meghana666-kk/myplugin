// C++ classes for Metadata API JSON-RPC API.
// Generated automatically from 'IController.h'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace Metadata {

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

    } // namespace Metadata

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(PluginHost::IShell::state)
ENUM_CONVERSION_HANDLER(PluginHost::IShell::reason)

}

