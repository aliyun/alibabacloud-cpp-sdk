// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPNGATEWAYDIAGNOSERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult.hpp>
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
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->diagnoseId_ == nullptr && return this->diagnoseResult_ == nullptr && return this->finishTime_ == nullptr && return this->finishedCount_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceInstanceId_ == nullptr && return this->resourceType_ == nullptr && return this->totalCount_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string diagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


    // diagnoseResult Field Functions 
    bool hasDiagnoseResult() const { return this->diagnoseResult_ != nullptr;};
    void deleteDiagnoseResult() { this->diagnoseResult_ = nullptr;};
    inline const vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult> & diagnoseResult() const { DARABONBA_PTR_GET_CONST(diagnoseResult_, vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult>) };
    inline vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult> diagnoseResult() { DARABONBA_PTR_GET(diagnoseResult_, vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult>) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseResult(const vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult> & diagnoseResult) { DARABONBA_PTR_SET_VALUE(diagnoseResult_, diagnoseResult) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setDiagnoseResult(vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult> && diagnoseResult) { DARABONBA_PTR_SET_RVALUE(diagnoseResult_, diagnoseResult) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // finishedCount Field Functions 
    bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
    void deleteFinishedCount() { this->finishedCount_ = nullptr;};
    inline int32_t finishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setFinishedCount(int32_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetVpnGatewayDiagnoseResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline GetVpnGatewayDiagnoseResultResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The time when the diagnostic started.
    // 
    // The time follows the ISO8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The ID of the diagnostic.
    std::shared_ptr<string> diagnoseId_ = nullptr;
    // The information about the diagnostic items.
    std::shared_ptr<vector<GetVpnGatewayDiagnoseResultResponseBodyDiagnoseResult>> diagnoseResult_ = nullptr;
    // The timestamp when the system finishes diagnosing the item.
    // 
    // The time follows the ISO8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The number of diagnostic items that have been diagnosed.
    std::shared_ptr<int32_t> finishedCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource that is diagnosed.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The type of the resource.
    // 
    // The value is set to **IPsec**, which indicates an IPsec-VPN connection.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The total number of diagnostic items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
