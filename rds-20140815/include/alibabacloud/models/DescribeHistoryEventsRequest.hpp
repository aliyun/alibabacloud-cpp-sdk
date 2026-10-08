// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHistoryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_TO_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(FromStartTime, fromStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(ToStartTime, toStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_FROM_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(FromStartTime, fromStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(ToStartTime, toStartTime_);
    };
    DescribeHistoryEventsRequest() = default ;
    DescribeHistoryEventsRequest(const DescribeHistoryEventsRequest &) = default ;
    DescribeHistoryEventsRequest(DescribeHistoryEventsRequest &&) = default ;
    DescribeHistoryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsRequest() = default ;
    DescribeHistoryEventsRequest& operator=(const DescribeHistoryEventsRequest &) = default ;
    DescribeHistoryEventsRequest& operator=(DescribeHistoryEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveStatus_ == nullptr
        && this->eventCategory_ == nullptr && this->eventId_ == nullptr && this->eventLevel_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr
        && this->fromStartTime_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->securityToken_ == nullptr && this->taskId_ == nullptr && this->toStartTime_ == nullptr; };
    // archiveStatus Field Functions 
    bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
    void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
    inline string getArchiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
    inline DescribeHistoryEventsRequest& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


    // eventCategory Field Functions 
    bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
    void deleteEventCategory() { this->eventCategory_ = nullptr;};
    inline string getEventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
    inline DescribeHistoryEventsRequest& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeHistoryEventsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeHistoryEventsRequest& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
    inline DescribeHistoryEventsRequest& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeHistoryEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // fromStartTime Field Functions 
    bool hasFromStartTime() const { return this->fromStartTime_ != nullptr;};
    void deleteFromStartTime() { this->fromStartTime_ = nullptr;};
    inline string getFromStartTime() const { DARABONBA_PTR_GET_DEFAULT(fromStartTime_, "") };
    inline DescribeHistoryEventsRequest& setFromStartTime(string fromStartTime) { DARABONBA_PTR_SET_VALUE(fromStartTime_, fromStartTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHistoryEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHistoryEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeHistoryEventsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeHistoryEventsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeHistoryEventsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // toStartTime Field Functions 
    bool hasToStartTime() const { return this->toStartTime_ != nullptr;};
    void deleteToStartTime() { this->toStartTime_ = nullptr;};
    inline string getToStartTime() const { DARABONBA_PTR_GET_DEFAULT(toStartTime_, "") };
    inline DescribeHistoryEventsRequest& setToStartTime(string toStartTime) { DARABONBA_PTR_SET_VALUE(toStartTime_, toStartTime) };


  protected:
    // The event status. Valid values:
    // - **Archived**: archived.
    // - **UnArchived**: not archived.
    // - **All**: all.
    shared_ptr<string> archiveStatus_ {};
    // The system event categorization. Valid values:
    // - **Exception**: abnormal event.
    // - **Optimize**: optimization events.
    // - **Notification**: notification event.
    // - **Maintenance**: scheduled maintenance event.
    shared_ptr<string> eventCategory_ {};
    // The event ID.
    shared_ptr<string> eventId_ {};
    // The event level. Valid values:
    // - **INFO**: notification.
    // - **WARN**: warning.
    // - **CRITICAL**: critical.
    shared_ptr<string> eventLevel_ {};
    // The event status. Valid values:
    // - **Inquiring**: inquiring.
    // - **Scheduled**: scheduled.
    // - **Running**: running.
    // - **Succeed**: completed.
    // - **Failed**: failed.
    // - **Canceled**: canceled.
    // > To query multiple statuses, separate them with commas (,).
    shared_ptr<string> eventStatus_ {};
    // The system event type. This parameter takes effect only when InstanceEventType.N is not specified. Valid values: 
    // - **SystemMaintenance.Reboot**: The instance is restarted due to system maintenance.
    // - **SystemMaintenance.Redeploy**: The instance is redeployed due to system maintenance.
    // - **SystemFailure.Reboot**: The instance is restarted due to a system error.
    // - **SystemFailure.Redeploy**: The instance is redeployed due to a system error.
    // - **SystemFailure.Delete**: The instance is released due to an instance creation failure.
    // - **InstanceFailure.Reboot**: The instance is restarted due to an instance error.
    // - **InstanceExpiration.Stop**: The instance is stopped due to subscription expiration.
    // - **InstanceExpiration.Delete**: The instance is released due to subscription expiration.
    // - **AccountUnbalanced.Stop**: The pay-as-you-go instance is stopped due to an overdue payment.
    // - **AccountUnbalanced.Delete**: The pay-as-you-go instance is released due to an overdue payment.
    // > The value of this parameter can only be an instance system event, not a cloud disk system event.
    shared_ptr<string> eventType_ {};
    // The beginning of the time range for the task start time. Tasks whose start time is later than this time are queried. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in `UTC +0`. The earliest supported time is 30 days before the current time. If the specified time is more than 30 days before the current time, it is automatically converted to 30 days before the current time.
    // 
    // This parameter is required.
    shared_ptr<string> fromStartTime_ {};
    // The ApsaraDB RDS instance ID.
    shared_ptr<string> instanceId_ {};
    // The page number. The value must be greater than 0 and cannot exceed the maximum value of the integer type. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/610399.html) to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The resource type. Valid values:
    // - **Instance**: instance resource.
    // - **Host**: host resource.
    // - **User**: user resource.
    // > If this parameter is not specified, all resource types are queried.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> securityToken_ {};
    // The task ID. Specify this parameter to retrieve data for a specific task.
    shared_ptr<string> taskId_ {};
    // The end of the time range for the task start time. Tasks whose start time is earlier than this time are queried. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in `UTC +0`.
    // 
    // This parameter is required.
    shared_ptr<string> toStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
