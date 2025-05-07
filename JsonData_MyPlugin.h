/**
* If not stated otherwise in this file or this component's LICENSE
* file the following copyright and licenses apply:
*
* Copyright 2023 RDK Management
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**/

#pragma once

#include "Module.h"
#include <core/JSON.h>

namespace WPEFramework {

namespace JsonData {

namespace MyPlugin {

    // Method params/result data structures
    struct SetMessageParamsInfo : public Core::JSON::Container {
        SetMessageParamsInfo()
            : Core::JSON::Container()
            , Message()
        {
            Add(_T("message"), &Message);
        }

        SetMessageParamsInfo(const SetMessageParamsInfo& other)
            : Core::JSON::Container()
            , Message(other.Message)
        {
            Add(_T("message"), &Message);
        }

        ~SetMessageParamsInfo() override = default;

        SetMessageParamsInfo& operator=(const SetMessageParamsInfo& rhs)
        {
            Message = rhs.Message;
            return (*this);
        }

        Core::JSON::String Message;
    };

    struct GetMessageResultData : public Core::JSON::Container {
        GetMessageResultData()
            : Core::JSON::Container()
            , Message()
            , Success(false)
        {
            Add(_T("message"), &Message);
            Add(_T("success"), &Success);
        }

        GetMessageResultData(const GetMessageResultData& other)
            : Core::JSON::Container()
            , Message(other.Message)
            , Success(other.Success)
        {
            Add(_T("message"), &Message);
            Add(_T("success"), &Success);
        }

        ~GetMessageResultData() override = default;

        GetMessageResultData& operator=(const GetMessageResultData& rhs)
        {
            Message = rhs.Message;
            Success = rhs.Success;
            return (*this);
        }

        Core::JSON::String Message;
        Core::JSON::Boolean Success;
    };

} // namespace MyPlugin

} // namespace JsonData

} // namespace WPEFramework
