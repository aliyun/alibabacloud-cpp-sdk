// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODYDIAGNOSERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODYDIAGNOSERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseName, diagnoseName_);
      DARABONBA_PTR_TO_JSON(DiagnoseResultDescription, diagnoseResultDescription_);
      DARABONBA_PTR_TO_JSON(DiagnoseResultLevel, diagnoseResultLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseName, diagnoseName_);
      DARABONBA_PTR_FROM_JSON(DiagnoseResultDescription, diagnoseResultDescription_);
      DARABONBA_PTR_FROM_JSON(DiagnoseResultLevel, diagnoseResultLevel_);
    };
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult() = default ;
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult(const GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult &) = default ;
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult(GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult &&) = default ;
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult() = default ;
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& operator=(const GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult &) = default ;
    GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& operator=(GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diagnoseName_ != nullptr
        && this->diagnoseResultDescription_ != nullptr && this->diagnoseResultLevel_ != nullptr; };
    // diagnoseName Field Functions 
    bool hasDiagnoseName() const { return this->diagnoseName_ != nullptr;};
    void deleteDiagnoseName() { this->diagnoseName_ = nullptr;};
    inline string diagnoseName() const { DARABONBA_PTR_GET_DEFAULT(diagnoseName_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& setDiagnoseName(string diagnoseName) { DARABONBA_PTR_SET_VALUE(diagnoseName_, diagnoseName) };


    // diagnoseResultDescription Field Functions 
    bool hasDiagnoseResultDescription() const { return this->diagnoseResultDescription_ != nullptr;};
    void deleteDiagnoseResultDescription() { this->diagnoseResultDescription_ = nullptr;};
    inline string diagnoseResultDescription() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResultDescription_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& setDiagnoseResultDescription(string diagnoseResultDescription) { DARABONBA_PTR_SET_VALUE(diagnoseResultDescription_, diagnoseResultDescription) };


    // diagnoseResultLevel Field Functions 
    bool hasDiagnoseResultLevel() const { return this->diagnoseResultLevel_ != nullptr;};
    void deleteDiagnoseResultLevel() { this->diagnoseResultLevel_ = nullptr;};
    inline string diagnoseResultLevel() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResultLevel_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult& setDiagnoseResultLevel(string diagnoseResultLevel) { DARABONBA_PTR_SET_VALUE(diagnoseResultLevel_, diagnoseResultLevel) };


  protected:
    // The diagnostic item.
    // 
    // *   **RouteEntryConflict**: route conflicts.
    // *   **VpnRouteQuota**: the quota of destination-based routes for the VPN gateway.
    // *   **VpnIPsecQuota**: the quota of IPsec-VPN connections for the VPN gateway.
    // *   **VpnPbrRouteQuota**: the quota of policy-based routes for the VPN gateway.
    // *   **VcoConfigConsistency**: the consistency of the IPsec-VPN connection.
    // *   **VcoUserInternetIpConnectivity**: Internet connectivity of the customer gateway.
    // *   **VcoPrivateConnectivity**: private network connectivity.
    // 
    // For more information about the diagnostic items, see [Background information about quick diagnostics](https://help.aliyun.com/document_detail/190330.html).
    std::shared_ptr<string> diagnoseName_ = nullptr;
    // The diagnostic result.
    // 
    // The system returns different results for each diagnostic item.
    // 
    // *   **RouteEntryConflict**: information about route conflicts.
    // 
    // *   **VpnRouteQuota**:
    // 
    //     *   **quotaName**: the quota ID of destination-based routes.
    //     *   **quantity**: the quota of destination-based routes for the VPN gateway.
    //     *   **used**: the number of destination-based routes created for the VPN gateway.
    // 
    // *   **VpnIPsecQuota**:
    // 
    //     *   **quotaName**: the quota ID of IPsec-VPN connections.
    //     *   **quantity**: the quota of IPsec-VPN connections for the VPN gateway.
    //     *   **used**: the number of IPsec-VPN connections created for the VPN gateway.
    // 
    // *   **VpnPbrRouteQuota**:
    // 
    //     *   **quotaName**: the quota ID of policy-based routes.
    //     *   **quantity**: the quota of policy-based routes for the VPN gateway.
    //     *   **used**: the number of policy-based routes created for the VPN gateway.
    // 
    // *   **VcoConfigConsistency**:
    // 
    //     *   **vcoLackConf**: The system cannot obtain the configuration of the peer of the IPsec-VPN connection.
    //     *   **vcoRunningConf**: the configurations that have been added to the peer of the IPsec-VPN connection.
    //     *   **vcoDiffConf**: the configurations that are inconsistent between the local end and the peer.
    //     *   **vcoConf**: the configurations that have been added to the local end.
    // 
    // *   **VcoUserInternetIpConnectivity**:
    // 
    //     *   **targetIp**: the public IP address of the customer gateway.
    //     *   **rtt**: the latency when the system accesses the public IP address of the customer gateway. Unit: milliseconds.
    //     *   **lossRate**: the packet loss when the system accesses the public IP address of the customer gateway.
    // 
    // *   **VcoPrivateConnectivity**:
    // 
    //     *   **targetIp**: the source IP address.
    //     *   **srcIp**: the destination IP address.
    //     *   **rtt**: the latency when the source IP address accesses the destination IP address. Unit: milliseconds.
    //     *   **lossRate**: the packet loss when the source IP address accesses the destination IP address.
    std::shared_ptr<string> diagnoseResultDescription_ = nullptr;
    // The diagnostic result level.
    // 
    // *   **normal**
    // *   **warning**
    // *   **error**
    // 
    // For more information, see [Background information about quick diagnostics](https://help.aliyun.com/document_detail/190330.html).
    std::shared_ptr<string> diagnoseResultLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
