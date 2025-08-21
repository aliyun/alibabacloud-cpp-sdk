// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPMRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPMRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListApmResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApmResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(deployedReplica, deployedReplica_);
      DARABONBA_PTR_TO_JSON(description, description_);
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
    friend void from_json(const Darabonba::Json& j, ListApmResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(deployedReplica, deployedReplica_);
      DARABONBA_PTR_FROM_JSON(description, description_);
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
    ListApmResponseBodyResult() = default ;
    ListApmResponseBodyResult(const ListApmResponseBodyResult &) = default ;
    ListApmResponseBodyResult(ListApmResponseBodyResult &&) = default ;
    ListApmResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApmResponseBodyResult() = default ;
    ListApmResponseBodyResult& operator=(const ListApmResponseBodyResult &) = default ;
    ListApmResponseBodyResult& operator=(ListApmResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->deployedReplica_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->nodeAmount_ != nullptr && this->outputES_ != nullptr
        && this->outputESUserName_ != nullptr && this->ownerId_ != nullptr && this->paymentType_ != nullptr && this->region_ != nullptr && this->replica_ != nullptr
        && this->resourceSpec_ != nullptr && this->status_ != nullptr && this->version_ != nullptr && this->vpcId_ != nullptr && this->vsArea_ != nullptr
        && this->vswitchId_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListApmResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // deployedReplica Field Functions 
    bool hasDeployedReplica() const { return this->deployedReplica_ != nullptr;};
    void deleteDeployedReplica() { this->deployedReplica_ = nullptr;};
    inline int64_t deployedReplica() const { DARABONBA_PTR_GET_DEFAULT(deployedReplica_, 0L) };
    inline ListApmResponseBodyResult& setDeployedReplica(int64_t deployedReplica) { DARABONBA_PTR_SET_VALUE(deployedReplica_, deployedReplica) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApmResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApmResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int64_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0L) };
    inline ListApmResponseBodyResult& setNodeAmount(int64_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // outputES Field Functions 
    bool hasOutputES() const { return this->outputES_ != nullptr;};
    void deleteOutputES() { this->outputES_ = nullptr;};
    inline string outputES() const { DARABONBA_PTR_GET_DEFAULT(outputES_, "") };
    inline ListApmResponseBodyResult& setOutputES(string outputES) { DARABONBA_PTR_SET_VALUE(outputES_, outputES) };


    // outputESUserName Field Functions 
    bool hasOutputESUserName() const { return this->outputESUserName_ != nullptr;};
    void deleteOutputESUserName() { this->outputESUserName_ = nullptr;};
    inline string outputESUserName() const { DARABONBA_PTR_GET_DEFAULT(outputESUserName_, "") };
    inline ListApmResponseBodyResult& setOutputESUserName(string outputESUserName) { DARABONBA_PTR_SET_VALUE(outputESUserName_, outputESUserName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListApmResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListApmResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListApmResponseBodyResult& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int64_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0L) };
    inline ListApmResponseBodyResult& setReplica(int64_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline string resourceSpec() const { DARABONBA_PTR_GET_DEFAULT(resourceSpec_, "") };
    inline ListApmResponseBodyResult& setResourceSpec(string resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApmResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListApmResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListApmResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string vsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline ListApmResponseBodyResult& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListApmResponseBodyResult& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> deployedReplica_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> nodeAmount_ = nullptr;
    std::shared_ptr<string> outputES_ = nullptr;
    std::shared_ptr<string> outputESUserName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> replica_ = nullptr;
    std::shared_ptr<string> resourceSpec_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vsArea_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
