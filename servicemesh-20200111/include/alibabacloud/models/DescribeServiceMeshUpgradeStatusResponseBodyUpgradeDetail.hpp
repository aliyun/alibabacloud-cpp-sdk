// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSRESPONSEBODYUPGRADEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHUPGRADESTATUSRESPONSEBODYUPGRADEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpgradeDetailGatewayStatusRecordValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FinishedGatewaysNum, finishedGatewaysNum_);
      DARABONBA_PTR_TO_JSON(GatewayStatusRecord, gatewayStatusRecord_);
      DARABONBA_PTR_TO_JSON(MeshStatus, meshStatus_);
      DARABONBA_PTR_TO_JSON(TotalGatewaysNum, totalGatewaysNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishedGatewaysNum, finishedGatewaysNum_);
      DARABONBA_PTR_FROM_JSON(GatewayStatusRecord, gatewayStatusRecord_);
      DARABONBA_PTR_FROM_JSON(MeshStatus, meshStatus_);
      DARABONBA_PTR_FROM_JSON(TotalGatewaysNum, totalGatewaysNum_);
    };
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail() = default ;
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail(const DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail &) = default ;
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail(DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail &&) = default ;
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail() = default ;
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& operator=(const DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail &) = default ;
    DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& operator=(DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishedGatewaysNum_ == nullptr
        && return this->gatewayStatusRecord_ == nullptr && return this->meshStatus_ == nullptr && return this->totalGatewaysNum_ == nullptr; };
    // finishedGatewaysNum Field Functions 
    bool hasFinishedGatewaysNum() const { return this->finishedGatewaysNum_ != nullptr;};
    void deleteFinishedGatewaysNum() { this->finishedGatewaysNum_ = nullptr;};
    inline int64_t finishedGatewaysNum() const { DARABONBA_PTR_GET_DEFAULT(finishedGatewaysNum_, 0L) };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& setFinishedGatewaysNum(int64_t finishedGatewaysNum) { DARABONBA_PTR_SET_VALUE(finishedGatewaysNum_, finishedGatewaysNum) };


    // gatewayStatusRecord Field Functions 
    bool hasGatewayStatusRecord() const { return this->gatewayStatusRecord_ != nullptr;};
    void deleteGatewayStatusRecord() { this->gatewayStatusRecord_ = nullptr;};
    inline const map<string, Models::UpgradeDetailGatewayStatusRecordValue> & gatewayStatusRecord() const { DARABONBA_PTR_GET_CONST(gatewayStatusRecord_, map<string, Models::UpgradeDetailGatewayStatusRecordValue>) };
    inline map<string, Models::UpgradeDetailGatewayStatusRecordValue> gatewayStatusRecord() { DARABONBA_PTR_GET(gatewayStatusRecord_, map<string, Models::UpgradeDetailGatewayStatusRecordValue>) };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& setGatewayStatusRecord(const map<string, Models::UpgradeDetailGatewayStatusRecordValue> & gatewayStatusRecord) { DARABONBA_PTR_SET_VALUE(gatewayStatusRecord_, gatewayStatusRecord) };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& setGatewayStatusRecord(map<string, Models::UpgradeDetailGatewayStatusRecordValue> && gatewayStatusRecord) { DARABONBA_PTR_SET_RVALUE(gatewayStatusRecord_, gatewayStatusRecord) };


    // meshStatus Field Functions 
    bool hasMeshStatus() const { return this->meshStatus_ != nullptr;};
    void deleteMeshStatus() { this->meshStatus_ = nullptr;};
    inline string meshStatus() const { DARABONBA_PTR_GET_DEFAULT(meshStatus_, "") };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& setMeshStatus(string meshStatus) { DARABONBA_PTR_SET_VALUE(meshStatus_, meshStatus) };


    // totalGatewaysNum Field Functions 
    bool hasTotalGatewaysNum() const { return this->totalGatewaysNum_ != nullptr;};
    void deleteTotalGatewaysNum() { this->totalGatewaysNum_ = nullptr;};
    inline int64_t totalGatewaysNum() const { DARABONBA_PTR_GET_DEFAULT(totalGatewaysNum_, 0L) };
    inline DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail& setTotalGatewaysNum(int64_t totalGatewaysNum) { DARABONBA_PTR_SET_VALUE(totalGatewaysNum_, totalGatewaysNum) };


  protected:
    // The number of ingress gateways that are upgraded.
    std::shared_ptr<int64_t> finishedGatewaysNum_ = nullptr;
    // The information about the status of the ingress gateways.
    std::shared_ptr<map<string, Models::UpgradeDetailGatewayStatusRecordValue>> gatewayStatusRecord_ = nullptr;
    // The status of the ASM instance. Valid values:
    // 
    // *   running: The instance is running.
    // *   `upgrading`: The instance is being upgraded.
    // *   `upgrading_failed`: The upgrade of the instance fails.
    std::shared_ptr<string> meshStatus_ = nullptr;
    // The total number of ingress gateways in the ASM instance.
    std::shared_ptr<int64_t> totalGatewaysNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
