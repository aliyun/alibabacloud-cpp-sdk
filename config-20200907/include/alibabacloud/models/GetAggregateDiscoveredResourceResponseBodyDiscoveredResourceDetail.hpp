// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCERESPONSEBODYDISCOVEREDRESOURCEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEDISCOVEREDRESOURCERESPONSEBODYDISCOVEREDRESOURCEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCreationTime, resourceCreationTime_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCreationTime, resourceCreationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail() = default ;
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail(const GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail &) = default ;
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail(GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail &&) = default ;
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail() = default ;
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& operator=(const GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail &) = default ;
    GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& operator=(GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->availabilityZone_ == nullptr && return this->complianceType_ == nullptr && return this->configuration_ == nullptr && return this->region_ == nullptr && return this->resourceCreationTime_ == nullptr
        && return this->resourceDeleted_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceStatus_ == nullptr && return this->resourceType_ == nullptr
        && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string complianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string configuration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCreationTime Field Functions 
    bool hasResourceCreationTime() const { return this->resourceCreationTime_ != nullptr;};
    void deleteResourceCreationTime() { this->resourceCreationTime_ = nullptr;};
    inline int64_t resourceCreationTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreationTime_, 0L) };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceCreationTime(int64_t resourceCreationTime) { DARABONBA_PTR_SET_VALUE(resourceCreationTime_, resourceCreationTime) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline int32_t resourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetAggregateDiscoveredResourceResponseBodyDiscoveredResourceDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the zone in which the resource resides.
    std::shared_ptr<string> availabilityZone_ = nullptr;
    // The compliance evaluation result of the resource. Valid values:
    // 
    // *   COMPLIANT: The resource is evaluated as compliant.
    // *   NON_COMPLIANT: The resource is evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resource.
    // *   INSUFFICIENT_DATA: No data is available.
    // *   IGNORED: The resource is ignored during compliance evaluation.
    std::shared_ptr<string> complianceType_ = nullptr;
    // The configuration of the resource.
    std::shared_ptr<string> configuration_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The timestamp when the resource was created.
    std::shared_ptr<int64_t> resourceCreationTime_ = nullptr;
    // Indicates whether the resource was deleted. Valid values:
    // 
    // *   1: The resource was not deleted.
    // *   0: The resource was deleted.
    std::shared_ptr<int32_t> resourceDeleted_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The status of the resource. The value of this parameter varies based on the resource type and may be empty.
    // 
    // *   If the ResourceType parameter is set to ACS::ECS::Instance, the resource is an ECS instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
    // *   If the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is left empty.
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<string> tags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
