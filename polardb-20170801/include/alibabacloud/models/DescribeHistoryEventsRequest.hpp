// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
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
        && this->resourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->taskId_ == nullptr && this->toStartTime_ == nullptr; };
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
    // The archive status of the event. Valid values:
    // 
    // - Archived: The event is archived.
    // 
    // - UnArchived: The event is not archived.
    // 
    // - All: All events.
    shared_ptr<string> archiveStatus_ {};
    // The category of the system event. Valid values:
    // - **Exception**: Exception events.
    // - **Optimize**: Optimization events.
    // - **Notification**: Notification events.
    // - **Maintenance**: Scheduled O&M events.
    shared_ptr<string> eventCategory_ {};
    // The ID of the event.
    shared_ptr<string> eventId_ {};
    // The event level. Valid values:
    // - **INFO**: Notification.
    // - **WARN**: Warning.
    // - **CRITICAL**: Alerting.
    shared_ptr<string> eventLevel_ {};
    // The status of the event. Valid values:
    // - **Inquiring**: Inquiring.
    // - **Scheduled**: Scheduled.
    // - **Running**: Running.
    // - **Succeed**: Succeeded.
    // - **Failed**: Failed.
    // - **Canceled**: Canceled.
    // > To query multiple statuses, separate them with commas (,).
    shared_ptr<string> eventStatus_ {};
    // The system event type. This parameter is valid only when InstanceEventType.N is not specified. Valid values: 
    // - **SystemMaintenance.Reboot**: The instance is restarted due to system maintenance.
    // - **SystemMaintenance.Redeploy**: Redeployment of the instance due to system maintenance.
    // - **SystemFailure.Reboot**: The instance is restarted due to a system fault.
    // - **SystemFailure.Redeploy**: Redeployment of the instance due to a system fault.
    // - **SystemFailure.Delete**: The instance is released because instance creation failed.
    // - **InstanceFailure.Reboot**: The instance is restarted due to an instance fault.
    // - **InstanceExpiration.Stop**: The subscription instance is stopped due to expiration.
    // - **InstanceExpiration.Delete**: The subscription instance is released due to expiration.
    // - **AccountUnbalanced.Stop**: The pay-as-you-go instance is stopped due to an overdue payment.
    // - **AccountUnbalanced.Delete**: The pay-as-you-go instance is released due to an overdue payment.
    // > The value of this parameter must be an instance system event, not a disk system event.
    shared_ptr<string> eventType_ {};
    // The start time of the task start time range. This parameter specifies that the start time of the queried tasks must be later than this time. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. The earliest supported time is 30 days ago. If the specified time is more than 30 days before the current time, it is automatically converted to 30 days ago. This parameter is actually required. If it is not provided, the API returns Param.Invalid (HTTP 400). Note: This parameter is required. If it is not provided, the API returns Param.Invalid (HTTP 400).
    shared_ptr<string> fromStartTime_ {};
    // The ID of the resource. This parameter is used to query tasks for the corresponding resource. You can specify up to 30 IDs and separate them with commas (,). Default value: empty, which indicates no limit.
    // 
    // > Currently, only cluster IDs are supported.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the resource. Valid values:
    // - **Instance**: Instance resources.
    // - **Instance**: Host: Host resources.
    // - **Instance**: User: User resources.
    shared_ptr<string> resourceType_ {};
    // The ID of the scheduled task to be canceled.
    // > * You can call the [DescribeScheduleTasks](https://help.aliyun.com/document_detail/199648.html) operation to query the information of all scheduled tasks under the current account, including the task IDs.
    // * Only tasks in the pending state (where the return value of the `Status` parameter is `pending`) can be canceled.
    shared_ptr<string> taskId_ {};
    // The end time of the task start time range. This parameter specifies that the start time of the queried tasks must be earlier than this time. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> toStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
