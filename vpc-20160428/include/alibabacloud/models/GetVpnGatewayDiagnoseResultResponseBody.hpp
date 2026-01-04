// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpnGatewayDiagnoseResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpnGatewayDiagnoseResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_TO_JSON(DiagnoseResult, diagnoseResult_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpnGatewayDiagnoseResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
      DARABONBA_PTR_FROM_JSON(DiagnoseResult, diagnoseResult_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    GetVpnGatewayDiagnoseResultResponseBody() = default ;
    GetVpnGatewayDiagnoseResultResponseBody(const GetVpnGatewayDiagnoseResultResponseBody &) = default ;
    GetVpnGatewayDiagnoseResultResponseBody(GetVpnGatewayDiagnoseResultResponseBody &&) = default ;
    GetVpnGatewayDiagnoseResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpnGatewayDiagnoseResultResponseBody() = default ;
    GetVpnGatewayDiagnoseResultResponseBody& operator=(const GetVpnGatewayDiagnoseResultResponseBody &) = default ;
    GetVpnGatewayDiagnoseResultResponseBody& operator=(GetVpnGatewayDiagnoseResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiagnoseResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnoseResult& obj) { 
        DARABONBA_PTR_TO_JSON(DiagnoseName, diagnoseName_);
        DARABONBA_PTR_TO_JSON(DiagnoseResultDescription, diagnoseResultDescription_);
        DARABONBA_PTR_TO_JSON(DiagnoseResultLevel, diagnoseResultLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnoseResult& obj) { 
        DARABONBA_PTR_FROM_JSON(DiagnoseName, diagnoseName_);
        DARABONBA_PTR_FROM_JSON(DiagnoseResultDescription, diagnoseResultDescription_);
        DARABONBA_PTR_FROM_JSON(DiagnoseResultLevel, diagnoseResultLevel_);
      };
      DiagnoseResult() = default ;
      DiagnoseResult(const DiagnoseResult &) = default ;
      DiagnoseResult(DiagnoseResult &&) = default ;
      DiagnoseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnoseResult() = default ;
      DiagnoseResult& operator=(const DiagnoseResult &) = default ;
      DiagnoseResult& operator=(DiagnoseResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diagnoseName_ == nullptr
        && this->diagnoseResultDescription_ == nullptr && this->diagnoseResultLevel_ == nullptr; };
      // diagnoseName Field Functions 
      bool hasDiagnoseName() const { return this->diagnoseName_ != nullptr;};
      void deleteDiagnoseName() { this->diagnoseName_ = nullptr;};
      inline string getDiagnoseName() const { DARABONBA_PTR_GET_DEFAULT(diagnoseName_, "") };
      inline DiagnoseResult& setDiagnoseName(string diagnoseName) { DARABONBA_PTR_SET_VALUE(diagnoseName_, diagnoseName) };


      // diagnoseResultDescription Field Functions 
      bool hasDiagnoseResultDescription() const { return this->diagnoseResultDescription_ != nullptr;};
      void deleteDiagnoseResultDescription() { this->diagnoseResultDescription_ = nullptr;};
      inline string getDiagnoseResultDescription() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResultDescription_, "") };
      inline DiagnoseResult& setDiagnoseResultDescription(string diagnoseResultDescription) { DARABONBA_PTR_SET_VALUE(diagnoseResultDescription_, diagnoseResultDescription) };


      // diagnoseResultLevel Field Functions 
      bool hasDiagnoseResultLevel() const { return this->diagnoseResultLevel_ != nullptr;};
      void deleteDiagnoseResultLevel() { this->diagnoseResultLevel_ = nullptr;};
      inline string getDiagnoseResultLevel() const { DARABONBA_PTR_GET_DEFAULT(diagnoseResultLevel_, "") };
      inline DiagnoseResult& setDiagnoseResultLevel(string diagnoseResultLevel) { DARABONBA_PTR_SET_VALUE(diagnoseResultLevel_, diagnoseResultLevel) };


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
      shared_ptr<string> diagnoseName_ {};
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
      shared_ptr<string> diagnoseResultDescription_ {};
      // The diagnostic result level.
      // 
      // *   **normal**
      // *   **warning**
      // *   **error**
      // 
      // For more information, see [Background information about quick diagnostics](https://help.aliyun.com/document_detail/190330.html).
      shared_ptr<string> diagnoseResultLevel_ {};
    };

    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->diagnoseId_ == nullptr && this->diagnoseResult_ == nullptr && this->finishTime_ == nullptr && this->finishedCount_ == nullptr && this->requestId_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceType_ == nullptr && this->totalCount_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // diagnoseResult Field Functions 
    bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
    void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
    inline const vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult> & getDiagnoseResult() const { DARABONBA_PTR_GET_CONST(diagnoseResult_, vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult>) };
    inline vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult> getDiagnoseResult() { DARABONBA_PTR_GET(diagnoseResult_, vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult>) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseResult(const vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult> & diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseResult(vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult> && diagnoseResult) { DARABONBA_PTR_SET_RVALUE(diagnoseResult_, diagnoseResult) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // finishedCount Field Functions 
    bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
    void deleteFinishedCount() { this->finishedCount_ = nullptr;};
    inline int32_t getFinishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setFinishedCount(int32_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The time when the diagnostic started.
    // 
    // The time follows the ISO8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    shared_ptr<string> beginTime_ {};
    // The ID of the diagnostic.
    shared_ptr<string> diagnoseId_ {};
    // The information about the diagnostic items.
    shared_ptr<vector<GetVpnGatewayDiagnoseResultResponseBody::DiagnoseResult>> diagnoseResult_ {};
    // The timestamp when the system finishes diagnosing the item.
    // 
    // The time follows the ISO8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    shared_ptr<string> finishTime_ {};
    // The number of diagnostic items that have been diagnosed.
    shared_ptr<int32_t> finishedCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource that is diagnosed.
    shared_ptr<string> resourceInstanceId_ {};
    // The type of the resource.
    // 
    // The value is set to **IPsec**, which indicates an IPsec-VPN connection.
    shared_ptr<string> resourceType_ {};
    // The total number of diagnostic items.
    shared_ptr<int32_t> totalCount_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
