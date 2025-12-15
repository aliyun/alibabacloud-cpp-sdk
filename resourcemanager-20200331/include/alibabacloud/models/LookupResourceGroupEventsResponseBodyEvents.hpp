// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo.hpp>
#include <alibabacloud/models/LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class LookupResourceGroupEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupResourceGroupEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(SourceResourceGroupInfo, sourceResourceGroupInfo_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
    };
    friend void from_json(const Darabonba::Json& j, LookupResourceGroupEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(SourceResourceGroupInfo, sourceResourceGroupInfo_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
    };
    LookupResourceGroupEventsResponseBodyEvents() = default ;
    LookupResourceGroupEventsResponseBodyEvents(const LookupResourceGroupEventsResponseBodyEvents &) = default ;
    LookupResourceGroupEventsResponseBodyEvents(LookupResourceGroupEventsResponseBodyEvents &&) = default ;
    LookupResourceGroupEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupResourceGroupEventsResponseBodyEvents() = default ;
    LookupResourceGroupEventsResponseBodyEvents& operator=(const LookupResourceGroupEventsResponseBodyEvents &) = default ;
    LookupResourceGroupEventsResponseBodyEvents& operator=(LookupResourceGroupEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && return this->eventTime_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupDisplayName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->service_ == nullptr && return this->sourceResourceGroupInfo_ == nullptr && return this->targetResourceGroupInfo_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline LookupResourceGroupEventsResponseBodyEvents& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // sourceResourceGroupInfo Field Functions 
    bool hasSourceResourceGroupInfo() const { return this->sourceResourceGroupInfo_ != nullptr;};
    void deleteSourceResourceGroupInfo() { this->sourceResourceGroupInfo_ = nullptr;};
    inline const Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo & sourceResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(sourceResourceGroupInfo_, Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo) };
    inline Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo sourceResourceGroupInfo() { DARABONBA_PTR_GET(sourceResourceGroupInfo_, Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo) };
    inline LookupResourceGroupEventsResponseBodyEvents& setSourceResourceGroupInfo(const Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo & sourceResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupInfo_, sourceResourceGroupInfo) };
    inline LookupResourceGroupEventsResponseBodyEvents& setSourceResourceGroupInfo(Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo && sourceResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroupInfo_, sourceResourceGroupInfo) };


    // targetResourceGroupInfo Field Functions 
    bool hasTargetResourceGroupInfo() const { return this->targetResourceGroupInfo_ != nullptr;};
    void deleteTargetResourceGroupInfo() { this->targetResourceGroupInfo_ = nullptr;};
    inline const Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo & targetResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(targetResourceGroupInfo_, Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo) };
    inline Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo targetResourceGroupInfo() { DARABONBA_PTR_GET(targetResourceGroupInfo_, Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo) };
    inline LookupResourceGroupEventsResponseBodyEvents& setTargetResourceGroupInfo(const Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo & targetResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };
    inline LookupResourceGroupEventsResponseBodyEvents& setTargetResourceGroupInfo(Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo && targetResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };


  protected:
    std::shared_ptr<string> changeType_ = nullptr;
    std::shared_ptr<string> eventTime_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
    std::shared_ptr<Models::LookupResourceGroupEventsResponseBodyEventsSourceResourceGroupInfo> sourceResourceGroupInfo_ = nullptr;
    std::shared_ptr<Models::LookupResourceGroupEventsResponseBodyEventsTargetResourceGroupInfo> targetResourceGroupInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
