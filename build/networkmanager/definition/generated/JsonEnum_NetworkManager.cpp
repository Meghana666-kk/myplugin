// Enumeration code for NetworkManager JSON-RPC API.
// Generated automatically from 'NetworkManager.json'.

#include <core/Enumerate.h>

#include "definitions.h"
#include "JsonData_NetworkManager.h"

namespace WPEFramework {

ENUM_CONVERSION_BEGIN(JsonData::NetworkManager::OnAddressChangeParamsData::StatusType)
    { JsonData::NetworkManager::OnAddressChangeParamsData::StatusType::`ACQUIRED`, _TXT("`ACQUIRED`") },
    { JsonData::NetworkManager::OnAddressChangeParamsData::StatusType::`LOST`, _TXT("`LOST`") },
ENUM_CONVERSION_END(JsonData::NetworkManager::OnAddressChangeParamsData::StatusType)

}
