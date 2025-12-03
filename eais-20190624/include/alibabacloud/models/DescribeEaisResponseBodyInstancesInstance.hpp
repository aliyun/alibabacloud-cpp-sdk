// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEaisResponseBodyInstancesInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DescribeEaisResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEaisResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_TO_JSON(ClientInstanceName, clientInstanceName_);
      DARABONBA_PTR_TO_JSON(ClientInstanceType, clientInstanceType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(JupyterUrl, jupyterUrl_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEaisResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_FROM_JSON(ClientInstanceName, clientInstanceName_);
      DARABONBA_PTR_FROM_JSON(ClientInstanceType, clientInstanceType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(JupyterUrl, jupyterUrl_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeEaisResponseBodyInstancesInstance() = default ;
    DescribeEaisResponseBodyInstancesInstance(const DescribeEaisResponseBodyInstancesInstance &) = default ;
    DescribeEaisResponseBodyInstancesInstance(DescribeEaisResponseBodyInstancesInstance &&) = default ;
    DescribeEaisResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEaisResponseBodyInstancesInstance() = default ;
    DescribeEaisResponseBodyInstancesInstance& operator=(const DescribeEaisResponseBodyInstancesInstance &) = default ;
    DescribeEaisResponseBodyInstancesInstance& operator=(DescribeEaisResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->clientInstanceId_ == nullptr && return this->clientInstanceName_ == nullptr && return this->clientInstanceType_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr
        && return this->elasticAcceleratedInstanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->jupyterUrl_ == nullptr && return this->paymentType_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientInstanceId Field Functions 
    bool hasClientInstanceId() const { return this->clientInstanceId_ != nullptr;};
    void deleteClientInstanceId() { this->clientInstanceId_ = nullptr;};
    inline string clientInstanceId() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setClientInstanceId(string clientInstanceId) { DARABONBA_PTR_SET_VALUE(clientInstanceId_, clientInstanceId) };


    // clientInstanceName Field Functions 
    bool hasClientInstanceName() const { return this->clientInstanceName_ != nullptr;};
    void deleteClientInstanceName() { this->clientInstanceName_ = nullptr;};
    inline string clientInstanceName() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceName_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setClientInstanceName(string clientInstanceName) { DARABONBA_PTR_SET_VALUE(clientInstanceName_, clientInstanceName) };


    // clientInstanceType Field Functions 
    bool hasClientInstanceType() const { return this->clientInstanceType_ != nullptr;};
    void deleteClientInstanceType() { this->clientInstanceType_ = nullptr;};
    inline string clientInstanceType() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceType_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setClientInstanceType(string clientInstanceType) { DARABONBA_PTR_SET_VALUE(clientInstanceType_, clientInstanceType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticAcceleratedInstanceId Field Functions 
    bool hasElasticAcceleratedInstanceId() const { return this->elasticAcceleratedInstanceId_ != nullptr;};
    void deleteElasticAcceleratedInstanceId() { this->elasticAcceleratedInstanceId_ = nullptr;};
    inline string elasticAcceleratedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticAcceleratedInstanceId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setElasticAcceleratedInstanceId(string elasticAcceleratedInstanceId) { DARABONBA_PTR_SET_VALUE(elasticAcceleratedInstanceId_, elasticAcceleratedInstanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jupyterUrl Field Functions 
    bool hasJupyterUrl() const { return this->jupyterUrl_ != nullptr;};
    void deleteJupyterUrl() { this->jupyterUrl_ = nullptr;};
    inline string jupyterUrl() const { DARABONBA_PTR_GET_DEFAULT(jupyterUrl_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setJupyterUrl(string jupyterUrl) { DARABONBA_PTR_SET_VALUE(jupyterUrl_, jupyterUrl) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeEaisResponseBodyInstancesInstanceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeEaisResponseBodyInstancesInstanceTags) };
    inline Models::DescribeEaisResponseBodyInstancesInstanceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeEaisResponseBodyInstancesInstanceTags) };
    inline DescribeEaisResponseBodyInstancesInstance& setTags(const Models::DescribeEaisResponseBodyInstancesInstanceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEaisResponseBodyInstancesInstance& setTags(Models::DescribeEaisResponseBodyInstancesInstanceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeEaisResponseBodyInstancesInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> clientInstanceId_ = nullptr;
    std::shared_ptr<string> clientInstanceName_ = nullptr;
    std::shared_ptr<string> clientInstanceType_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> elasticAcceleratedInstanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> jupyterUrl_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeEaisResponseBodyInstancesInstanceTags> tags_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
