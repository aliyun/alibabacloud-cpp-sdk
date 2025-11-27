// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsRequestEventPublishTime.hpp>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsRequestNotBefore.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(EventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ImpactLevel, impactLevel_);
      DARABONBA_PTR_TO_JSON(InstanceEventCycleStatus, instanceEventCycleStatus_);
      DARABONBA_PTR_TO_JSON(InstanceEventType, instanceEventType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(EventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ImpactLevel, impactLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceEventCycleStatus, instanceEventCycleStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceEventType, instanceEventType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeRCInstanceHistoryEventsRequest() = default ;
    DescribeRCInstanceHistoryEventsRequest(const DescribeRCInstanceHistoryEventsRequest &) = default ;
    DescribeRCInstanceHistoryEventsRequest(DescribeRCInstanceHistoryEventsRequest &&) = default ;
    DescribeRCInstanceHistoryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsRequest() = default ;
    DescribeRCInstanceHistoryEventsRequest& operator=(const DescribeRCInstanceHistoryEventsRequest &) = default ;
    DescribeRCInstanceHistoryEventsRequest& operator=(DescribeRCInstanceHistoryEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventPublishTime_ == nullptr
        && return this->notBefore_ == nullptr && return this->eventCycleStatus_ == nullptr && return this->eventId_ == nullptr && return this->eventType_ == nullptr && return this->impactLevel_ == nullptr
        && return this->instanceEventCycleStatus_ == nullptr && return this->instanceEventType_ == nullptr && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceId_ == nullptr && return this->tag_ == nullptr; };
    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline const DescribeRCInstanceHistoryEventsRequestEventPublishTime & eventPublishTime() const { DARABONBA_PTR_GET_CONST(eventPublishTime_, DescribeRCInstanceHistoryEventsRequestEventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequestEventPublishTime eventPublishTime() { DARABONBA_PTR_GET(eventPublishTime_, DescribeRCInstanceHistoryEventsRequestEventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventPublishTime(const DescribeRCInstanceHistoryEventsRequestEventPublishTime & eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventPublishTime(DescribeRCInstanceHistoryEventsRequestEventPublishTime && eventPublishTime) { DARABONBA_PTR_SET_RVALUE(eventPublishTime_, eventPublishTime) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline const DescribeRCInstanceHistoryEventsRequestNotBefore & notBefore() const { DARABONBA_PTR_GET_CONST(notBefore_, DescribeRCInstanceHistoryEventsRequestNotBefore) };
    inline DescribeRCInstanceHistoryEventsRequestNotBefore notBefore() { DARABONBA_PTR_GET(notBefore_, DescribeRCInstanceHistoryEventsRequestNotBefore) };
    inline DescribeRCInstanceHistoryEventsRequest& setNotBefore(const DescribeRCInstanceHistoryEventsRequestNotBefore & notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };
    inline DescribeRCInstanceHistoryEventsRequest& setNotBefore(DescribeRCInstanceHistoryEventsRequestNotBefore && notBefore) { DARABONBA_PTR_SET_RVALUE(notBefore_, notBefore) };


    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline string eventCycleStatus() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatus_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setEventCycleStatus(string eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline const vector<string> & eventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
    inline vector<string> eventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // impactLevel Field Functions 
    bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
    void deleteImpactLevel() { this->impactLevel_ = nullptr;};
    inline string impactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


    // instanceEventCycleStatus Field Functions 
    bool hasInstanceEventCycleStatus() const { return this->instanceEventCycleStatus_ != nullptr;};
    void deleteInstanceEventCycleStatus() { this->instanceEventCycleStatus_ = nullptr;};
    inline const vector<string> & instanceEventCycleStatus() const { DARABONBA_PTR_GET_CONST(instanceEventCycleStatus_, vector<string>) };
    inline vector<string> instanceEventCycleStatus() { DARABONBA_PTR_GET(instanceEventCycleStatus_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventCycleStatus(const vector<string> & instanceEventCycleStatus) { DARABONBA_PTR_SET_VALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventCycleStatus(vector<string> && instanceEventCycleStatus) { DARABONBA_PTR_SET_RVALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };


    // instanceEventType Field Functions 
    bool hasInstanceEventType() const { return this->instanceEventType_ != nullptr;};
    void deleteInstanceEventType() { this->instanceEventType_ = nullptr;};
    inline const vector<string> & instanceEventType() const { DARABONBA_PTR_GET_CONST(instanceEventType_, vector<string>) };
    inline vector<string> instanceEventType() { DARABONBA_PTR_GET(instanceEventType_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventType(const vector<string> & instanceEventType) { DARABONBA_PTR_SET_VALUE(instanceEventType_, instanceEventType) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventType(vector<string> && instanceEventType) { DARABONBA_PTR_SET_RVALUE(instanceEventType_, instanceEventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeRCInstanceHistoryEventsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeRCInstanceHistoryEventsRequestTag>) };
    inline vector<DescribeRCInstanceHistoryEventsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeRCInstanceHistoryEventsRequestTag>) };
    inline DescribeRCInstanceHistoryEventsRequest& setTag(const vector<DescribeRCInstanceHistoryEventsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCInstanceHistoryEventsRequest& setTag(vector<DescribeRCInstanceHistoryEventsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<DescribeRCInstanceHistoryEventsRequestEventPublishTime> eventPublishTime_ = nullptr;
    std::shared_ptr<DescribeRCInstanceHistoryEventsRequestNotBefore> notBefore_ = nullptr;
    // The lifecycle state of the system event. This parameter is valid only when the **InstanceEventCycleStatus.N** parameter is not specified. Valid values:
    // 
    // *   **Scheduled**
    // *   **Avoided**
    // *   **Executing**
    // *   **Executed**
    // *   **Canceled**
    // *   **Failed**
    // *   **Inquiring**
    std::shared_ptr<string> eventCycleStatus_ = nullptr;
    // The IDs of one or more system events.
    std::shared_ptr<vector<string>> eventId_ = nullptr;
    // The system event type. This parameter is valid only when the **InstanceEventType.N** parameter is not specified. Valid values:
    // 
    // *   **SystemMaintenance.Reboot**: The instance was restarted due to system maintenance.
    // *   **SystemMaintenance.Redeploy**: The instance was redeployed due to system maintenance.
    // *   **SystemFailure.Reboot**: The instance was restarted due to system failures.
    // *   **SystemFailure.Redeploy**: The instance was redeployed due to system failures.
    // *   **SystemFailure.Delete**: The instance was released due to an instance creation failure.
    // *   **InstanceFailure.Reboot**: The instance was restarted due to an instance error.
    // *   **InstanceExpiration.Stop**: The subscription instance was stopped due to expiration.
    // *   **InstanceExpiration.Delete**: The subscription instance was released due to expiration.
    // *   **AccountUnbalanced.Stop**: The pay-as-you-go instance is stopped due to an overdue payment.
    // *   **AccountUnbalanced.Delete**: The pay-as-you-go instance was released due to an overdue payment.
    // 
    // >  The values of this parameter are applicable only to instance system events, but not to disk system events.
    std::shared_ptr<string> eventType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> impactLevel_ = nullptr;
    // The lifecycle states of system events.
    std::shared_ptr<vector<string>> instanceEventCycleStatus_ = nullptr;
    // The type of system event N.
    std::shared_ptr<vector<string>> instanceEventType_ = nullptr;
    // The instance ID. If you do not specify an instance ID, system events of all instances in the specified region are queried.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group that you want to query.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of resource N.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    // An array that consists of the tags that are supported by system events.
    std::shared_ptr<vector<DescribeRCInstanceHistoryEventsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
