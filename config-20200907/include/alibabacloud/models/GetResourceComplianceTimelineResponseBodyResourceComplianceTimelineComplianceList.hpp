// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINECOMPLIANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCETIMELINERESPONSEBODYRESOURCECOMPLIANCETIMELINECOMPLIANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(ConfigurationDiff, configurationDiff_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(ConfigurationDiff, configurationDiff_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(const GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList &) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList &&) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList() = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& operator=(const GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList &) = default ;
    GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& operator=(GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->availabilityZone_ == nullptr && return this->captureTime_ == nullptr && return this->configuration_ == nullptr && return this->configurationDiff_ == nullptr && return this->region_ == nullptr
        && return this->resourceCreateTime_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceStatus_ == nullptr && return this->resourceType_ == nullptr
        && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // captureTime Field Functions 
    bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
    void deleteCaptureTime() { this->captureTime_ = nullptr;};
    inline int64_t captureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, 0L) };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setCaptureTime(int64_t captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string configuration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // configurationDiff Field Functions 
    bool hasConfigurationDiff() const { return this->configurationDiff_ != nullptr;};
    void deleteConfigurationDiff() { this->configurationDiff_ = nullptr;};
    inline string configurationDiff() const { DARABONBA_PTR_GET_DEFAULT(configurationDiff_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setConfigurationDiff(string configurationDiff) { DARABONBA_PTR_SET_VALUE(configurationDiff_, configurationDiff) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCreateTime Field Functions 
    bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
    void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
    inline int64_t resourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetResourceComplianceTimelineResponseBodyResourceComplianceTimelineComplianceList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the zone in which the resource resides.
    std::shared_ptr<string> availabilityZone_ = nullptr;
    // The timestamp when the compliance evaluation was recorded. Unit: milliseconds.
    std::shared_ptr<int64_t> captureTime_ = nullptr;
    // The rules associated with the resource and the compliance details of the rules.
    std::shared_ptr<string> configuration_ = nullptr;
    // The details of the resource changes that trigger the compliance evaluation.
    std::shared_ptr<string> configurationDiff_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The time when the resource was created. Unit: milliseconds.
    std::shared_ptr<int64_t> resourceCreateTime_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The status of the resource. The parameter value varies based on the resource type and may be left empty. Examples:
    // 
    // *   If the ResourceType parameter is set to ACS::ECS::Instance, the resource is an Elastic Compute Service (ECS) instance that has a specific state. In this case, the valid values of this parameter are Running and Stopped.
    // *   If the ResourceType parameter is ACS::OSS::Bucket, the resource is an Object Storage Service (OSS) bucket that is not in a specific state. In this case, this parameter is left empty.
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
