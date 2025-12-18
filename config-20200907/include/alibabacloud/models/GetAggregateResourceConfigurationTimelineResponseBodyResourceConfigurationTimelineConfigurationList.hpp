// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODYRESOURCECONFIGURATIONTIMELINECONFIGURATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODYRESOURCECONFIGURATIONTIMELINECONFIGURATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_TO_JSON(ConfigurationDiff, configurationDiff_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_TO_JSON(ResourceEventType, resourceEventType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(CaptureTime, captureTime_);
      DARABONBA_PTR_FROM_JSON(ConfigurationDiff, configurationDiff_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_FROM_JSON(ResourceEventType, resourceEventType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() = default ;
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(const GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList &&) = default ;
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList() = default ;
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& operator=(const GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& operator=(GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->availabilityZone_ == nullptr && return this->captureTime_ == nullptr && return this->configurationDiff_ == nullptr && return this->region_ == nullptr && return this->resourceCreateTime_ == nullptr
        && return this->resourceEventType_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceType_ == nullptr && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // captureTime Field Functions 
    bool hasCaptureTime() const { return this->captureTime_ != nullptr;};
    void deleteCaptureTime() { this->captureTime_ = nullptr;};
    inline string captureTime() const { DARABONBA_PTR_GET_DEFAULT(captureTime_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setCaptureTime(string captureTime) { DARABONBA_PTR_SET_VALUE(captureTime_, captureTime) };


    // configurationDiff Field Functions 
    bool hasConfigurationDiff() const { return this->configurationDiff_ != nullptr;};
    void deleteConfigurationDiff() { this->configurationDiff_ = nullptr;};
    inline string configurationDiff() const { DARABONBA_PTR_GET_DEFAULT(configurationDiff_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setConfigurationDiff(string configurationDiff) { DARABONBA_PTR_SET_VALUE(configurationDiff_, configurationDiff) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCreateTime Field Functions 
    bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
    void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
    inline string resourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setResourceCreateTime(string resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


    // resourceEventType Field Functions 
    bool hasResourceEventType() const { return this->resourceEventType_ != nullptr;};
    void deleteResourceEventType() { this->resourceEventType_ = nullptr;};
    inline string resourceEventType() const { DARABONBA_PTR_GET_DEFAULT(resourceEventType_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setResourceEventType(string resourceEventType) { DARABONBA_PTR_SET_VALUE(resourceEventType_, resourceEventType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimelineConfigurationList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the zone in which the resource resides.
    std::shared_ptr<string> availabilityZone_ = nullptr;
    // The timestamp when the resource change snapshot was recorded. Unit: milliseconds.
    std::shared_ptr<string> captureTime_ = nullptr;
    // The details of the resource change that triggered the compliance evaluation.
    std::shared_ptr<string> configurationDiff_ = nullptr;
    // The ID of the region in which the resource resides.
    std::shared_ptr<string> region_ = nullptr;
    // The timestamp when the resource was created. Unit: milliseconds.
    std::shared_ptr<string> resourceCreateTime_ = nullptr;
    // The type of the resource change event involved. Valid values:
    // 
    // *   DISCOVERED: A resource is created.
    // *   DISCOVERED_REVISED: A resource is created by periodic remediation tasks.
    // *   MODIFY: A resource is modified.
    // *   MODIFY_REVISED: A resource is modified by periodic remediation tasks.
    // *   REMOVE: A resource is deleted.
    // 
    // > 
    // *   To ensure the integrity of resources, periodic remediation tasks are run to check data and generate events that indicate the creation of new resources. Such events are infrequent.
    // *   The time when a resource change event is generated by a periodic remediation task is considered as the detection time of Cloud Config. The detection time is later than the time when the resource is modified.
    std::shared_ptr<string> resourceEventType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
