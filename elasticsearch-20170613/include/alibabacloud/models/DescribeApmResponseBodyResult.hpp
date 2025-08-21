// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPMRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPMRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeApmResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApmResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(apmServerDomain, apmServerDomain_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(deployedReplica, deployedReplica_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(outputES, outputES_);
      DARABONBA_PTR_TO_JSON(outputESUserName, outputESUserName_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApmResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(apmServerDomain, apmServerDomain_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(deployedReplica, deployedReplica_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(outputES, outputES_);
      DARABONBA_PTR_FROM_JSON(outputESUserName, outputESUserName_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
    };
    DescribeApmResponseBodyResult() = default ;
    DescribeApmResponseBodyResult(const DescribeApmResponseBodyResult &) = default ;
    DescribeApmResponseBodyResult(DescribeApmResponseBodyResult &&) = default ;
    DescribeApmResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApmResponseBodyResult() = default ;
    DescribeApmResponseBodyResult& operator=(const DescribeApmResponseBodyResult &) = default ;
    DescribeApmResponseBodyResult& operator=(DescribeApmResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apmServerDomain_ != nullptr
        && this->createdAt_ != nullptr && this->deployedReplica_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->instanceId_ != nullptr
        && this->nodeAmount_ != nullptr && this->outputES_ != nullptr && this->outputESUserName_ != nullptr && this->ownerId_ != nullptr && this->paymentType_ != nullptr
        && this->region_ != nullptr && this->replica_ != nullptr && this->resourceSpec_ != nullptr && this->status_ != nullptr && this->version_ != nullptr
        && this->vpcId_ != nullptr && this->vsArea_ != nullptr && this->vswitchId_ != nullptr; };
    // apmServerDomain Field Functions 
    bool hasApmServerDomain() const { return this->apmServerDomain_ != nullptr;};
    void deleteApmServerDomain() { this->apmServerDomain_ = nullptr;};
    inline string apmServerDomain() const { DARABONBA_PTR_GET_DEFAULT(apmServerDomain_, "") };
    inline DescribeApmResponseBodyResult& setApmServerDomain(string apmServerDomain) { DARABONBA_PTR_SET_VALUE(apmServerDomain_, apmServerDomain) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DescribeApmResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // deployedReplica Field Functions 
    bool hasDeployedReplica() const { return this->deployedReplica_ != nullptr;};
    void deleteDeployedReplica() { this->deployedReplica_ = nullptr;};
    inline int64_t deployedReplica() const { DARABONBA_PTR_GET_DEFAULT(deployedReplica_, 0L) };
    inline DescribeApmResponseBodyResult& setDeployedReplica(int64_t deployedReplica) { DARABONBA_PTR_SET_VALUE(deployedReplica_, deployedReplica) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApmResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeApmResponseBodyResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApmResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int64_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0L) };
    inline DescribeApmResponseBodyResult& setNodeAmount(int64_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // outputES Field Functions 
    bool hasOutputES() const { return this->outputES_ != nullptr;};
    void deleteOutputES() { this->outputES_ = nullptr;};
    inline string outputES() const { DARABONBA_PTR_GET_DEFAULT(outputES_, "") };
    inline DescribeApmResponseBodyResult& setOutputES(string outputES) { DARABONBA_PTR_SET_VALUE(outputES_, outputES) };


    // outputESUserName Field Functions 
    bool hasOutputESUserName() const { return this->outputESUserName_ != nullptr;};
    void deleteOutputESUserName() { this->outputESUserName_ = nullptr;};
    inline string outputESUserName() const { DARABONBA_PTR_GET_DEFAULT(outputESUserName_, "") };
    inline DescribeApmResponseBodyResult& setOutputESUserName(string outputESUserName) { DARABONBA_PTR_SET_VALUE(outputESUserName_, outputESUserName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeApmResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeApmResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeApmResponseBodyResult& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline DescribeApmResponseBodyResult& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline string resourceSpec() const { DARABONBA_PTR_GET_DEFAULT(resourceSpec_, "") };
    inline DescribeApmResponseBodyResult& setResourceSpec(string resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApmResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeApmResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeApmResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string vsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline DescribeApmResponseBodyResult& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeApmResponseBodyResult& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Instance domain.
    std::shared_ptr<string> apmServerDomain_ = nullptr;
    // Creation time.
    std::shared_ptr<string> createdAt_ = nullptr;
    // Deployed replica count.
    std::shared_ptr<int64_t> deployedReplica_ = nullptr;
    // Instance name.
    std::shared_ptr<string> description_ = nullptr;
    // Instance expiration time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Number of nodes.
    std::shared_ptr<int64_t> nodeAmount_ = nullptr;
    // Associated Elasticsearch instance.
    std::shared_ptr<string> outputES_ = nullptr;
    // Username of the associated Elasticsearch instance.
    std::shared_ptr<string> outputESUserName_ = nullptr;
    // User account ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Payment method, with the following values:
    // 
    // - postpaid: Pay-as-you-go.
    // 
    // - prepaid: Subscription.
    std::shared_ptr<string> paymentType_ = nullptr;
    // Region.
    std::shared_ptr<string> region_ = nullptr;
    // Replica count.
    std::shared_ptr<int32_t> replica_ = nullptr;
    // Specification, with the following values:
    // 
    // - C1M2 (1 core, 2 GB)
    // 
    // - C2M4 (2 cores, 4 GB)
    std::shared_ptr<string> resourceSpec_ = nullptr;
    // Lifecycle status, with the following values:
    // 
    // - CREATING: Creating.
    // 
    // - ACTIVATING: Activating.
    // 
    // - ACTIVE: Active.
    // 
    // - INACTIVE: Frozen.
    // 
    // - INVALID: Invalid.
    std::shared_ptr<string> status_ = nullptr;
    // Version information.
    std::shared_ptr<string> version_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Availability zone where the switch is located.
    std::shared_ptr<string> vsArea_ = nullptr;
    // Switch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
