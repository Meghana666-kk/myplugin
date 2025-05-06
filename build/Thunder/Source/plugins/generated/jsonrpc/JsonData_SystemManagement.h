// C++ classes for SystemManagement API JSON-RPC API.
// Generated automatically from 'IController.h'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

    namespace SystemManagement {

        // Method params/result classes
        //

        class CloneParamsData : public Core::JSON::Container {
        public:
            CloneParamsData()
                : Core::JSON::Container()
            {
                Add(_T("callsign"), &Callsign);
                Add(_T("newcallsign"), &Newcallsign);
            }

            CloneParamsData(const CloneParamsData&) = delete;
            CloneParamsData& operator=(const CloneParamsData&) = delete;

        public:
            Core::JSON::String Callsign;
            Core::JSON::String Newcallsign;
        }; // class CloneParamsData

        class DeleteParamsData : public Core::JSON::Container {
        public:
            DeleteParamsData()
                : Core::JSON::Container()
            {
                Add(_T("path"), &Path);
            }

            DeleteParamsData(const DeleteParamsData&) = delete;
            DeleteParamsData& operator=(const DeleteParamsData&) = delete;

        public:
            Core::JSON::String Path;
        }; // class DeleteParamsData

    } // namespace SystemManagement

} // namespace JsonData

}

