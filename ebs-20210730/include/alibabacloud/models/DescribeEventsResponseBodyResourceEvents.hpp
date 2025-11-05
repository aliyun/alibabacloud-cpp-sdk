// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYRESOURCEEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYRESOURCEEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEventsResponseBodyResourceEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyResourceEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ExtraAttributes, extraAttributes_);
      DARABONBA_PTR_TO_JSON(RecommendAction, recommendAction_);
      DARABONBA_PTR_TO_JSON(RecommendParams, recommendParams_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyResourceEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ExtraAttributes, extraAttributes_);
      DARABONBA_PTR_FROM_JSON(RecommendAction, recommendAction_);
      DARABONBA_PTR_FROM_JSON(RecommendParams, recommendParams_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventsResponseBodyResourceEvents() = default ;
    DescribeEventsResponseBodyResourceEvents(const DescribeEventsResponseBodyResourceEvents &) = default ;
    DescribeEventsResponseBodyResourceEvents(DescribeEventsResponseBodyResourceEvents &&) = default ;
    DescribeEventsResponseBodyResourceEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyResourceEvents() = default ;
    DescribeEventsResponseBodyResourceEvents& operator=(const DescribeEventsResponseBodyResourceEvents &) = default ;
    DescribeEventsResponseBodyResourceEvents& operator=(DescribeEventsResponseBodyResourceEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->endTime_ == nullptr && return this->eventLevel_ == nullptr && return this->eventName_ == nullptr && return this->eventType_ == nullptr && return this->extraAttributes_ == nullptr
        && return this->recommendAction_ == nullptr && return this->recommendParams_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // extraAttributes Field Functions 
    bool hasExtraAttributes() const { return this->extraAttributes_ != nullptr;};
    void deleteExtraAttributes() { this->extraAttributes_ = nullptr;};
    inline string extraAttributes() const { DARABONBA_PTR_GET_DEFAULT(extraAttributes_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setExtraAttributes(string extraAttributes) { DARABONBA_PTR_SET_VALUE(extraAttributes_, extraAttributes) };


    // recommendAction Field Functions 
    bool hasRecommendAction() const { return this->recommendAction_ != nullptr;};
    void deleteRecommendAction() { this->recommendAction_ = nullptr;};
    inline string recommendAction() const { DARABONBA_PTR_GET_DEFAULT(recommendAction_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setRecommendAction(string recommendAction) { DARABONBA_PTR_SET_VALUE(recommendAction_, recommendAction) };


    // recommendParams Field Functions 
    bool hasRecommendParams() const { return this->recommendParams_ != nullptr;};
    void deleteRecommendParams() { this->recommendParams_ = nullptr;};
    inline string recommendParams() const { DARABONBA_PTR_GET_DEFAULT(recommendParams_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setRecommendParams(string recommendParams) { DARABONBA_PTR_SET_VALUE(recommendParams_, recommendParams) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEventsResponseBodyResourceEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the event.
    std::shared_ptr<string> description_ = nullptr;
    // The end time of the event, expressed as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The level of the event. Valid values:
    // 
    // 1.  INFO
    // 2.  WARN
    // 3.  CRITICAL
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The name of the event. Valid values:
    // 
    // *   NoSnapshot: indicates the event that is triggered because no snapshot is created for a disk to protect data on the disk.
    // *   BurstIOTriggered: indicates the event that is triggered when a burst I/O operation is performed on a disk.
    // *   CostOptimizationNeeded: indicates the event that is triggered when cost optimization is required.
    // *   DiskSpecNotMatchedWithInstance: indicates the event that is triggered because the specifications of a disk do not match the instance to which the disk is attached.
    // *   DiskIONo4kAligned: indicates the event that is triggered because the physical and logical sectors involved in a read or write operation are not 4K aligned.
    // *   DiskIOHang: indicates the event that is triggered when an I/O hang occurs on a disk.
    // *   InstanceIOPSExceedInstanceMaxLimit: indicates the event that is triggered when the number of IOPS on an instance reaches the upper limit.
    // *   InstanceBPSExceedInstanceMaxLimit: indicates the event that is triggered when the number of BPS on an instance reaches the upper limit.
    // *   DiskIOPSExceedInstanceMaxLimit: indicates the event that is triggered when the number of IOPS on a disk reaches the upper limit for the associated instance.
    // *   DiskBPSExceedInstanceMaxLimit: indicates the event that is triggered when the number of BPS on a disk reaches the upper limit for the associated instance.
    // *   DiskIOPSExceedDiskMaxLimit: indicates the event that is triggered when the number of IOPS on a disk reaches the upper limit for the disk.
    // *   DiskBPSExceedDiskMaxLimit: indicates the event that is triggered when the number of BPS on a disk reaches the upper limit for the disk.
    std::shared_ptr<string> eventName_ = nullptr;
    // The type of the event. Valid values:
    // 
    // 1.  Notification
    // 2.  SystemException
    // 3.  Alert
    std::shared_ptr<string> eventType_ = nullptr;
    // Extra attributes of event, possible fields are:
    // 
    // - EcsInstanceId: ECS instance ID where the cloud disk is mounted;
    // - Adapter: cloud disk mount point.
    std::shared_ptr<string> extraAttributes_ = nullptr;
    // The recommended action after the event occurred. Valid values:
    // 
    // *   ModifyDiskSpec
    // *   CreateSnapshot
    // *   ResizeDisk
    // *   AdjustProvision
    // *   ModifyInstanceSpec
    std::shared_ptr<string> recommendAction_ = nullptr;
    // The codes of the parameters for the recommended action after the event occurred.
    std::shared_ptr<string> recommendParams_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The start time of the event, expressed as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the event. Valid values:
    // 
    // 1.  WillExecute
    // 2.  Executing
    // 3.  Executed
    // 4.  Ignore
    // 5.  Expired
    // 6.  Deleted
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
