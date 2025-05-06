// C++ classes for NetworkManager JSON-RPC API.
// Generated automatically from 'NetworkManager.json'. DO NOT EDIT.

// Note: This code is inherently not thread safe. If required, proper synchronisation must be added.

#pragma once

#include <core/JSON.h>
#include <core/Enumerate.h>

namespace WPEFramework {

namespace JsonData {

    namespace NetworkManager {

        // Common classes
        //

        class GetIPSettingsParamsInfo : public Core::JSON::Container {
        public:
            GetIPSettingsParamsInfo()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("ipversion"), &Ipversion);
            }

            GetIPSettingsParamsInfo(const GetIPSettingsParamsInfo&) = delete;
            GetIPSettingsParamsInfo& operator=(const GetIPSettingsParamsInfo&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::String Ipversion;
        }; // class GetIPSettingsParamsInfo

        class GetPrimaryInterfaceResultInfo : public Core::JSON::Container {
        public:
            GetPrimaryInterfaceResultInfo()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
            }

            GetPrimaryInterfaceResultInfo(const GetPrimaryInterfaceResultInfo&) = delete;
            GetPrimaryInterfaceResultInfo& operator=(const GetPrimaryInterfaceResultInfo&) = delete;

        public:
            Core::JSON::String Interface;
        }; // class GetPrimaryInterfaceResultInfo

        class SetLogLevelResultInfo : public Core::JSON::Container {
        public:
            SetLogLevelResultInfo()
                : Core::JSON::Container()
            {
                Add(_T("success"), &Success);
            }

            SetLogLevelResultInfo(const SetLogLevelResultInfo&) = delete;
            SetLogLevelResultInfo& operator=(const SetLogLevelResultInfo&) = delete;

        public:
            Core::JSON::Boolean Success;
        }; // class SetLogLevelResultInfo

        // Method params/result classes
        //

        class AddToKnownSSIDsParamsData : public Core::JSON::Container {
        public:
            AddToKnownSSIDsParamsData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("passphrase"), &Passphrase);
                Add(_T("security"), &Security);
            }

            AddToKnownSSIDsParamsData(const AddToKnownSSIDsParamsData&) = delete;
            AddToKnownSSIDsParamsData& operator=(const AddToKnownSSIDsParamsData&) = delete;

        public:
            Core::JSON::String Ssid;
            Core::JSON::String Passphrase;
            Core::JSON::DecUInt32 Security;
        }; // class AddToKnownSSIDsParamsData

        class GetAvailableInterfacesResultData : public Core::JSON::Container {
        public:
            class InterfacesDataElem : public Core::JSON::Container {
            public:
                InterfacesDataElem()
                    : Core::JSON::Container()
                {
                    _Init();
                }

                InterfacesDataElem(const InterfacesDataElem& _other)
                    : Core::JSON::Container()
                    , Type(_other.Type)
                    , Name(_other.Name)
                    , Mac(_other.Mac)
                    , Enabled(_other.Enabled)
                    , Connected(_other.Connected)
                {
                    _Init();
                }

                InterfacesDataElem& operator=(const InterfacesDataElem& _rhs)
                {
                    Type = _rhs.Type;
                    Name = _rhs.Name;
                    Mac = _rhs.Mac;
                    Enabled = _rhs.Enabled;
                    Connected = _rhs.Connected;
                    return (*this);
                }

            private:
                void _Init()
                {
                    Add(_T("type"), &Type);
                    Add(_T("name"), &Name);
                    Add(_T("mac"), &Mac);
                    Add(_T("enabled"), &Enabled);
                    Add(_T("connected"), &Connected);
                }

            public:
                Core::JSON::String Type;
                Core::JSON::String Name;
                Core::JSON::String Mac;
                Core::JSON::Boolean Enabled;
                Core::JSON::Boolean Connected;
            }; // class InterfacesDataElem

            GetAvailableInterfacesResultData()
                : Core::JSON::Container()
            {
                Add(_T("interfaces"), &Interfaces);
                Add(_T("success"), &Success);
            }

            GetAvailableInterfacesResultData(const GetAvailableInterfacesResultData&) = delete;
            GetAvailableInterfacesResultData& operator=(const GetAvailableInterfacesResultData&) = delete;

        public:
            Core::JSON::ArrayType<GetAvailableInterfacesResultData::InterfacesDataElem> Interfaces;
            Core::JSON::Boolean Success;
        }; // class GetAvailableInterfacesResultData

        class GetCaptivePortalURIResultData : public Core::JSON::Container {
        public:
            GetCaptivePortalURIResultData()
                : Core::JSON::Container()
            {
                Add(_T("uri"), &Uri);
                Add(_T("success"), &Success);
            }

            GetCaptivePortalURIResultData(const GetCaptivePortalURIResultData&) = delete;
            GetCaptivePortalURIResultData& operator=(const GetCaptivePortalURIResultData&) = delete;

        public:
            Core::JSON::String Uri;
            Core::JSON::Boolean Success;
        }; // class GetCaptivePortalURIResultData

        class GetConnectedSSIDResultData : public Core::JSON::Container {
        public:
            GetConnectedSSIDResultData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("bssid"), &Bssid);
                Add(_T("security"), &Security);
                Add(_T("strength"), &Strength);
                Add(_T("frequency"), &Frequency);
                Add(_T("rate"), &Rate);
                Add(_T("noise"), &Noise);
                Add(_T("success"), &Success);
            }

            GetConnectedSSIDResultData(const GetConnectedSSIDResultData&) = delete;
            GetConnectedSSIDResultData& operator=(const GetConnectedSSIDResultData&) = delete;

        public:
            Core::JSON::String Ssid;
            Core::JSON::String Bssid;
            Core::JSON::String Security;
            Core::JSON::String Strength;
            Core::JSON::String Frequency;
            Core::JSON::String Rate;
            Core::JSON::String Noise;
            Core::JSON::Boolean Success;
        }; // class GetConnectedSSIDResultData

        class GetConnectivityTestEndpointsResultData : public Core::JSON::Container {
        public:
            GetConnectivityTestEndpointsResultData()
                : Core::JSON::Container()
            {
                Add(_T("endpoints"), &Endpoints);
                Add(_T("success"), &Success);
            }

            GetConnectivityTestEndpointsResultData(const GetConnectivityTestEndpointsResultData&) = delete;
            GetConnectivityTestEndpointsResultData& operator=(const GetConnectivityTestEndpointsResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> Endpoints;
            Core::JSON::Boolean Success;
        }; // class GetConnectivityTestEndpointsResultData

        class GetIPSettingsResultData : public Core::JSON::Container {
        public:
            GetIPSettingsResultData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("autoconfig"), &Autoconfig);
                Add(_T("dhcpserver"), &Dhcpserver);
                Add(_T("ipaddress"), &Ipaddress);
                Add(_T("prefix"), &Prefix);
                Add(_T("gateway"), &Gateway);
                Add(_T("ula"), &Ula);
                Add(_T("primarydns"), &Primarydns);
                Add(_T("secondarydns"), &Secondarydns);
                Add(_T("success"), &Success);
            }

            GetIPSettingsResultData(const GetIPSettingsResultData&) = delete;
            GetIPSettingsResultData& operator=(const GetIPSettingsResultData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::String Ipversion;
            Core::JSON::Boolean Autoconfig;
            Core::JSON::String Dhcpserver;
            Core::JSON::String Ipaddress;
            Core::JSON::DecUInt32 Prefix;
            Core::JSON::String Gateway;
            Core::JSON::String Ula;
            Core::JSON::String Primarydns;
            Core::JSON::String Secondarydns;
            Core::JSON::Boolean Success;
        }; // class GetIPSettingsResultData

        class GetInterfaceStateResultData : public Core::JSON::Container {
        public:
            GetInterfaceStateResultData()
                : Core::JSON::Container()
            {
                Add(_T("enabled"), &Enabled);
                Add(_T("success"), &Success);
            }

            GetInterfaceStateResultData(const GetInterfaceStateResultData&) = delete;
            GetInterfaceStateResultData& operator=(const GetInterfaceStateResultData&) = delete;

        public:
            Core::JSON::Boolean Enabled;
            Core::JSON::Boolean Success;
        }; // class GetInterfaceStateResultData

        class GetKnownSSIDsResultData : public Core::JSON::Container {
        public:
            GetKnownSSIDsResultData()
                : Core::JSON::Container()
            {
                Add(_T("ssids"), &Ssids);
                Add(_T("success"), &Success);
            }

            GetKnownSSIDsResultData(const GetKnownSSIDsResultData&) = delete;
            GetKnownSSIDsResultData& operator=(const GetKnownSSIDsResultData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> Ssids;
            Core::JSON::Boolean Success;
        }; // class GetKnownSSIDsResultData

        class GetLogLevelResultData : public Core::JSON::Container {
        public:
            GetLogLevelResultData()
                : Core::JSON::Container()
            {
                Add(_T("level"), &Level);
                Add(_T("success"), &Success);
            }

            GetLogLevelResultData(const GetLogLevelResultData&) = delete;
            GetLogLevelResultData& operator=(const GetLogLevelResultData&) = delete;

        public:
            Core::JSON::DecUInt32 Level;
            Core::JSON::Boolean Success;
        }; // class GetLogLevelResultData

        class GetPublicIPResultData : public Core::JSON::Container {
        public:
            GetPublicIPResultData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("ipaddress"), &Ipaddress);
                Add(_T("success"), &Success);
            }

            GetPublicIPResultData(const GetPublicIPResultData&) = delete;
            GetPublicIPResultData& operator=(const GetPublicIPResultData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::String Ipversion;
            Core::JSON::String Ipaddress;
            Core::JSON::Boolean Success;
        }; // class GetPublicIPResultData

        class GetStunEndpointResultData : public Core::JSON::Container {
        public:
            GetStunEndpointResultData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("port"), &Port);
                Add(_T("timeout"), &Timeout);
                Add(_T("cacheLifetime"), &CacheLifetime);
                Add(_T("success"), &Success);
            }

            GetStunEndpointResultData(const GetStunEndpointResultData&) = delete;
            GetStunEndpointResultData& operator=(const GetStunEndpointResultData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::DecUInt32 Port;
            Core::JSON::DecUInt32 Timeout;
            Core::JSON::DecUInt32 CacheLifetime;
            Core::JSON::Boolean Success;
        }; // class GetStunEndpointResultData

        class GetSupportedSecurityModesResultData : public Core::JSON::Container {
        public:
            class Security_modesData : public Core::JSON::Container {
            public:
                Security_modesData()
                    : Core::JSON::Container()
                {
                    Add(_T("NONE"), &NONE);
                    Add(_T("WPA_PSK"), &WPA_PSK);
                    Add(_T("SAE"), &SAE);
                    Add(_T("EAP"), &EAP);
                }

                Security_modesData(const Security_modesData&) = delete;
                Security_modesData& operator=(const Security_modesData&) = delete;

            public:
                Core::JSON::DecUInt32 NONE;
                Core::JSON::DecUInt32 WPA_PSK;
                Core::JSON::DecUInt32 SAE;
                Core::JSON::DecUInt32 EAP;
            }; // class Security_modesData

            GetSupportedSecurityModesResultData()
                : Core::JSON::Container()
            {
                Add(_T("security_modes"), &Security_modes);
                Add(_T("success"), &Success);
            }

            GetSupportedSecurityModesResultData(const GetSupportedSecurityModesResultData&) = delete;
            GetSupportedSecurityModesResultData& operator=(const GetSupportedSecurityModesResultData&) = delete;

        public:
            GetSupportedSecurityModesResultData::Security_modesData Security_modes;
            Core::JSON::Boolean Success;
        }; // class GetSupportedSecurityModesResultData

        class GetWiFiSignalQualityResultData : public Core::JSON::Container {
        public:
            GetWiFiSignalQualityResultData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("quality"), &Quality);
                Add(_T("snr"), &Snr);
                Add(_T("strength"), &Strength);
                Add(_T("noise"), &Noise);
                Add(_T("success"), &Success);
            }

            GetWiFiSignalQualityResultData(const GetWiFiSignalQualityResultData&) = delete;
            GetWiFiSignalQualityResultData& operator=(const GetWiFiSignalQualityResultData&) = delete;

        public:
            Core::JSON::String Ssid;
            Core::JSON::String Quality;
            Core::JSON::String Snr;
            Core::JSON::String Strength;
            Core::JSON::String Noise;
            Core::JSON::Boolean Success;
        }; // class GetWiFiSignalQualityResultData

        class GetWifiStateResultData : public Core::JSON::Container {
        public:
            GetWifiStateResultData()
                : Core::JSON::Container()
            {
                Add(_T("state"), &State);
                Add(_T("status"), &Status);
                Add(_T("success"), &Success);
            }

            GetWifiStateResultData(const GetWifiStateResultData&) = delete;
            GetWifiStateResultData& operator=(const GetWifiStateResultData&) = delete;

        public:
            Core::JSON::DecUInt32 State;
            Core::JSON::String Status;
            Core::JSON::Boolean Success;
        }; // class GetWifiStateResultData

        class IsConnectedToInternetResultData : public Core::JSON::Container {
        public:
            IsConnectedToInternetResultData()
                : Core::JSON::Container()
            {
                Add(_T("ipversion"), &Ipversion);
                Add(_T("interface"), &Interface);
                Add(_T("connected"), &Connected);
                Add(_T("state"), &State);
                Add(_T("status"), &Status);
                Add(_T("success"), &Success);
            }

            IsConnectedToInternetResultData(const IsConnectedToInternetResultData&) = delete;
            IsConnectedToInternetResultData& operator=(const IsConnectedToInternetResultData&) = delete;

        public:
            Core::JSON::String Ipversion;
            Core::JSON::String Interface;
            Core::JSON::Boolean Connected;
            Core::JSON::DecUInt32 State;
            Core::JSON::String Status;
            Core::JSON::Boolean Success;
        }; // class IsConnectedToInternetResultData

        class OnActiveInterfaceChangeParamsData : public Core::JSON::Container {
        public:
            OnActiveInterfaceChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("prevActiveInterface"), &PrevActiveInterface);
                Add(_T("activeInterface"), &ActiveInterface);
            }

            OnActiveInterfaceChangeParamsData(const OnActiveInterfaceChangeParamsData&) = delete;
            OnActiveInterfaceChangeParamsData& operator=(const OnActiveInterfaceChangeParamsData&) = delete;

        public:
            Core::JSON::String PrevActiveInterface;
            Core::JSON::String ActiveInterface;
        }; // class OnActiveInterfaceChangeParamsData

        class OnAddressChangeParamsData : public Core::JSON::Container {
        public:
            enum class StatusType : uint8_t {
                `ACQUIRED`,
                `LOST`
            };

            OnAddressChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("ipaddress"), &Ipaddress);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("status"), &Status);
            }

            OnAddressChangeParamsData(const OnAddressChangeParamsData&) = delete;
            OnAddressChangeParamsData& operator=(const OnAddressChangeParamsData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::String Ipaddress;
            Core::JSON::String Ipversion;
            Core::JSON::EnumType<OnAddressChangeParamsData::StatusType> Status;
        }; // class OnAddressChangeParamsData

        class OnAvailableSSIDsParamsData : public Core::JSON::Container {
        public:
            class SsidsDataElem : public Core::JSON::Container {
            public:
                SsidsDataElem()
                    : Core::JSON::Container()
                {
                    _Init();
                }

                SsidsDataElem(const SsidsDataElem& _other)
                    : Core::JSON::Container()
                    , Ssid(_other.Ssid)
                    , Security(_other.Security)
                    , Strength(_other.Strength)
                    , Frequency(_other.Frequency)
                {
                    _Init();
                }

                SsidsDataElem& operator=(const SsidsDataElem& _rhs)
                {
                    Ssid = _rhs.Ssid;
                    Security = _rhs.Security;
                    Strength = _rhs.Strength;
                    Frequency = _rhs.Frequency;
                    return (*this);
                }

            private:
                void _Init()
                {
                    Add(_T("ssid"), &Ssid);
                    Add(_T("security"), &Security);
                    Add(_T("strength"), &Strength);
                    Add(_T("frequency"), &Frequency);
                }

            public:
                Core::JSON::String Ssid;
                Core::JSON::DecUInt32 Security;
                Core::JSON::String Strength;
                Core::JSON::String Frequency;
            }; // class SsidsDataElem

            OnAvailableSSIDsParamsData()
                : Core::JSON::Container()
            {
                Add(_T("ssids"), &Ssids);
            }

            OnAvailableSSIDsParamsData(const OnAvailableSSIDsParamsData&) = delete;
            OnAvailableSSIDsParamsData& operator=(const OnAvailableSSIDsParamsData&) = delete;

        public:
            Core::JSON::ArrayType<OnAvailableSSIDsParamsData::SsidsDataElem> Ssids;
        }; // class OnAvailableSSIDsParamsData

        class OnInterfaceStateChangeParamsData : public Core::JSON::Container {
        public:
            OnInterfaceStateChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("state"), &State);
                Add(_T("status"), &Status);
            }

            OnInterfaceStateChangeParamsData(const OnInterfaceStateChangeParamsData&) = delete;
            OnInterfaceStateChangeParamsData& operator=(const OnInterfaceStateChangeParamsData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::DecUInt32 State;
            Core::JSON::String Status;
        }; // class OnInterfaceStateChangeParamsData

        class OnInternetStatusChangeParamsData : public Core::JSON::Container {
        public:
            OnInternetStatusChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("prevState"), &PrevState);
                Add(_T("prevStatus"), &PrevStatus);
                Add(_T("state"), &State);
                Add(_T("status"), &Status);
            }

            OnInternetStatusChangeParamsData(const OnInternetStatusChangeParamsData&) = delete;
            OnInternetStatusChangeParamsData& operator=(const OnInternetStatusChangeParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 PrevState;
            Core::JSON::String PrevStatus;
            Core::JSON::DecUInt32 State;
            Core::JSON::String Status;
        }; // class OnInternetStatusChangeParamsData

        class OnWiFiSignalQualityChangeParamsData : public Core::JSON::Container {
        public:
            OnWiFiSignalQualityChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("quality"), &Quality);
                Add(_T("snr"), &Snr);
                Add(_T("strength"), &Strength);
                Add(_T("noise"), &Noise);
            }

            OnWiFiSignalQualityChangeParamsData(const OnWiFiSignalQualityChangeParamsData&) = delete;
            OnWiFiSignalQualityChangeParamsData& operator=(const OnWiFiSignalQualityChangeParamsData&) = delete;

        public:
            Core::JSON::String Ssid;
            Core::JSON::String Quality;
            Core::JSON::String Snr;
            Core::JSON::String Strength;
            Core::JSON::String Noise;
        }; // class OnWiFiSignalQualityChangeParamsData

        class OnWiFiStateChangeParamsData : public Core::JSON::Container {
        public:
            OnWiFiStateChangeParamsData()
                : Core::JSON::Container()
            {
                Add(_T("state"), &State);
                Add(_T("status"), &Status);
            }

            OnWiFiStateChangeParamsData(const OnWiFiStateChangeParamsData&) = delete;
            OnWiFiStateChangeParamsData& operator=(const OnWiFiStateChangeParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 State;
            Core::JSON::String Status;
        }; // class OnWiFiStateChangeParamsData

        class PingParamsData : public Core::JSON::Container {
        public:
            PingParamsData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("count"), &Count);
                Add(_T("timeout"), &Timeout);
                Add(_T("guid"), &Guid);
            }

            PingParamsData(const PingParamsData&) = delete;
            PingParamsData& operator=(const PingParamsData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::String Ipversion;
            Core::JSON::DecUInt32 Count;
            Core::JSON::DecUInt32 Timeout;
            Core::JSON::String Guid;
        }; // class PingParamsData

        class PingResultData : public Core::JSON::Container {
        public:
            PingResultData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("packetsTransmitted"), &PacketsTransmitted);
                Add(_T("packetsReceived"), &PacketsReceived);
                Add(_T("packetLoss"), &PacketLoss);
                Add(_T("tripMin"), &TripMin);
                Add(_T("tripAvg"), &TripAvg);
                Add(_T("tripMax"), &TripMax);
                Add(_T("tripStdDev"), &TripStdDev);
                Add(_T("error"), &Error);
                Add(_T("guid"), &Guid);
                Add(_T("success"), &Success);
            }

            PingResultData(const PingResultData&) = delete;
            PingResultData& operator=(const PingResultData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::DecUInt32 PacketsTransmitted;
            Core::JSON::DecUInt32 PacketsReceived;
            Core::JSON::String PacketLoss;
            Core::JSON::String TripMin;
            Core::JSON::String TripAvg;
            Core::JSON::String TripMax;
            Core::JSON::String TripStdDev;
            Core::JSON::String Error;
            Core::JSON::String Guid;
            Core::JSON::Boolean Success;
        }; // class PingResultData

        class RemoveKnownSSIDParamsData : public Core::JSON::Container {
        public:
            RemoveKnownSSIDParamsData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
            }

            RemoveKnownSSIDParamsData(const RemoveKnownSSIDParamsData&) = delete;
            RemoveKnownSSIDParamsData& operator=(const RemoveKnownSSIDParamsData&) = delete;

        public:
            Core::JSON::String Ssid;
        }; // class RemoveKnownSSIDParamsData

        class SetConnectivityTestEndpointsParamsData : public Core::JSON::Container {
        public:
            SetConnectivityTestEndpointsParamsData()
                : Core::JSON::Container()
            {
                Add(_T("endpoints"), &Endpoints);
            }

            SetConnectivityTestEndpointsParamsData(const SetConnectivityTestEndpointsParamsData&) = delete;
            SetConnectivityTestEndpointsParamsData& operator=(const SetConnectivityTestEndpointsParamsData&) = delete;

        public:
            Core::JSON::ArrayType<Core::JSON::String> Endpoints;
        }; // class SetConnectivityTestEndpointsParamsData

        class SetIPSettingsParamsData : public Core::JSON::Container {
        public:
            SetIPSettingsParamsData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("autoconfig"), &Autoconfig);
                Add(_T("ipaddress"), &Ipaddress);
                Add(_T("prefix"), &Prefix);
                Add(_T("gateway"), &Gateway);
                Add(_T("primarydns"), &Primarydns);
                Add(_T("secondarydns"), &Secondarydns);
            }

            SetIPSettingsParamsData(const SetIPSettingsParamsData&) = delete;
            SetIPSettingsParamsData& operator=(const SetIPSettingsParamsData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::String Ipversion;
            Core::JSON::Boolean Autoconfig;
            Core::JSON::String Ipaddress;
            Core::JSON::DecUInt32 Prefix;
            Core::JSON::String Gateway;
            Core::JSON::String Primarydns;
            Core::JSON::String Secondarydns;
        }; // class SetIPSettingsParamsData

        class SetInterfaceStateParamsData : public Core::JSON::Container {
        public:
            SetInterfaceStateParamsData()
                : Core::JSON::Container()
            {
                Add(_T("interface"), &Interface);
                Add(_T("enabled"), &Enabled);
            }

            SetInterfaceStateParamsData(const SetInterfaceStateParamsData&) = delete;
            SetInterfaceStateParamsData& operator=(const SetInterfaceStateParamsData&) = delete;

        public:
            Core::JSON::String Interface;
            Core::JSON::Boolean Enabled;
        }; // class SetInterfaceStateParamsData

        class SetLogLevelParamsData : public Core::JSON::Container {
        public:
            SetLogLevelParamsData()
                : Core::JSON::Container()
            {
                Add(_T("level"), &Level);
            }

            SetLogLevelParamsData(const SetLogLevelParamsData&) = delete;
            SetLogLevelParamsData& operator=(const SetLogLevelParamsData&) = delete;

        public:
            Core::JSON::DecUInt32 Level;
        }; // class SetLogLevelParamsData

        class SetStunEndpointParamsData : public Core::JSON::Container {
        public:
            SetStunEndpointParamsData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("port"), &Port);
                Add(_T("timeout"), &Timeout);
                Add(_T("cacheLifetime"), &CacheLifetime);
            }

            SetStunEndpointParamsData(const SetStunEndpointParamsData&) = delete;
            SetStunEndpointParamsData& operator=(const SetStunEndpointParamsData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::DecUInt32 Port;
            Core::JSON::DecUInt32 Timeout;
            Core::JSON::DecUInt32 CacheLifetime;
        }; // class SetStunEndpointParamsData

        class StartWPSParamsData : public Core::JSON::Container {
        public:
            StartWPSParamsData()
                : Core::JSON::Container()
            {
                Add(_T("method"), &Method);
                Add(_T("pin"), &Pin);
            }

            StartWPSParamsData(const StartWPSParamsData&) = delete;
            StartWPSParamsData& operator=(const StartWPSParamsData&) = delete;

        public:
            Core::JSON::String Method;
            Core::JSON::String Pin;
        }; // class StartWPSParamsData

        class StartWPSResultData : public Core::JSON::Container {
        public:
            StartWPSResultData()
                : Core::JSON::Container()
            {
                Add(_T("pin"), &Pin);
                Add(_T("success"), &Success);
            }

            StartWPSResultData(const StartWPSResultData&) = delete;
            StartWPSResultData& operator=(const StartWPSResultData&) = delete;

        public:
            Core::JSON::String Pin;
            Core::JSON::Boolean Success;
        }; // class StartWPSResultData

        class StartWiFiScanParamsData : public Core::JSON::Container {
        public:
            StartWiFiScanParamsData()
                : Core::JSON::Container()
            {
                Add(_T("frequency"), &Frequency);
                Add(_T("ssids"), &Ssids);
            }

            StartWiFiScanParamsData(const StartWiFiScanParamsData&) = delete;
            StartWiFiScanParamsData& operator=(const StartWiFiScanParamsData&) = delete;

        public:
            Core::JSON::String Frequency;
            Core::JSON::ArrayType<Core::JSON::String> Ssids;
        }; // class StartWiFiScanParamsData

        class TraceParamsData : public Core::JSON::Container {
        public:
            TraceParamsData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("ipversion"), &Ipversion);
                Add(_T("packets"), &Packets);
                Add(_T("guid"), &Guid);
            }

            TraceParamsData(const TraceParamsData&) = delete;
            TraceParamsData& operator=(const TraceParamsData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::String Ipversion;
            Core::JSON::DecUInt32 Packets;
            Core::JSON::String Guid;
        }; // class TraceParamsData

        class TraceResultData : public Core::JSON::Container {
        public:
            TraceResultData()
                : Core::JSON::Container()
            {
                Add(_T("endpoint"), &Endpoint);
                Add(_T("results"), &Results);
                Add(_T("guid"), &Guid);
                Add(_T("success"), &Success);
            }

            TraceResultData(const TraceResultData&) = delete;
            TraceResultData& operator=(const TraceResultData&) = delete;

        public:
            Core::JSON::String Endpoint;
            Core::JSON::String Results;
            Core::JSON::String Guid;
            Core::JSON::Boolean Success;
        }; // class TraceResultData

        class WiFiConnectParamsData : public Core::JSON::Container {
        public:
            WiFiConnectParamsData()
                : Core::JSON::Container()
            {
                Add(_T("ssid"), &Ssid);
                Add(_T("passphrase"), &Passphrase);
                Add(_T("ca_cert"), &Ca_cert);
                Add(_T("client_cert"), &Client_cert);
                Add(_T("private_key"), &Private_key);
                Add(_T("private_key_passwd"), &Private_key_passwd);
                Add(_T("eap"), &Eap);
                Add(_T("eap_identity"), &Eap_identity);
                Add(_T("eap_password"), &Eap_password);
                Add(_T("eap_phase1"), &Eap_phase1);
                Add(_T("eap_phase2"), &Eap_phase2);
                Add(_T("persist"), &Persist);
            }

            WiFiConnectParamsData(const WiFiConnectParamsData&) = delete;
            WiFiConnectParamsData& operator=(const WiFiConnectParamsData&) = delete;

        public:
            Core::JSON::String Ssid;
            Core::JSON::String Passphrase;
            Core::JSON::String Ca_cert;
            Core::JSON::String Client_cert;
            Core::JSON::String Private_key;
            Core::JSON::String Private_key_passwd;
            Core::JSON::String Eap;
            Core::JSON::String Eap_identity;
            Core::JSON::String Eap_password;
            Core::JSON::String Eap_phase1;
            Core::JSON::String Eap_phase2;
            Core::JSON::Boolean Persist;
        }; // class WiFiConnectParamsData

    } // namespace NetworkManager

} // namespace JsonData

// Enum conversion handlers
ENUM_CONVERSION_HANDLER(JsonData::NetworkManager::OnAddressChangeParamsData::StatusType)

}

