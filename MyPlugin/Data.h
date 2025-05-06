/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 Metrological
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
 */
 
 #pragma once

 #include "Module.h"
 
 namespace WPEFramework {
 namespace Data {
     // Parameters for the SetMessage method
     class MessageParameters : public Core::JSON::Container {
     private:
         MessageParameters(const MessageParameters&) = delete;
         MessageParameters& operator=(const MessageParameters&) = delete;
 
     public:
         MessageParameters()
             : Core::JSON::Container()
             , Message()
         {
             Add(_T("message"), &Message);
         }
         MessageParameters(const string& message)
             : Core::JSON::Container()
             , Message()
         {
             Add(_T("message"), &Message);
             Message = message;
         }
         ~MessageParameters() override = default;
 
     public:
         Core::JSON::String Message;
     };
 
     // Response for the GetMessage method
     class MessageResponse : public Core::JSON::Container {
     private:
         MessageResponse(const MessageResponse&) = delete;
         MessageResponse& operator=(const MessageResponse&) = delete;
 
     public:
         MessageResponse()
             : Core::JSON::Container()
             , Message()
             , Success(false)
         {
             Add(_T("message"), &Message);
             Add(_T("success"), &Success);
         }
         MessageResponse(const string& message, const bool success)
             : Core::JSON::Container()
             , Message()
             , Success(false)
         {
             Add(_T("message"), &Message);
             Add(_T("success"), &Success);
             Message = message;
             Success = success;
         }
         ~MessageResponse() override = default;
 
     public:
         Core::JSON::String Message;
         Core::JSON::Boolean Success;
     };
 }
 }