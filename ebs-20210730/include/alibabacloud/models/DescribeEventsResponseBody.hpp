// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceEvents, resourceEvents_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceEvents, resourceEvents_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody(DescribeEventsResponseBody &&) = default ;
    DescribeEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBody() = default ;
    DescribeEventsResponseBody& operator=(const DescribeEventsResponseBody &) = default ;
    DescribeEventsResponseBody& operator=(DescribeEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceEvents& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResourceEvents& obj) { 
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
      ResourceEvents() = default ;
      ResourceEvents(const ResourceEvents &) = default ;
      ResourceEvents(ResourceEvents &&) = default ;
      ResourceEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceEvents() = default ;
      ResourceEvents& operator=(const ResourceEvents &) = default ;
      ResourceEvents& operator=(ResourceEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->endTime_ == nullptr && this->eventLevel_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->extraAttributes_ == nullptr
        && this->recommendAction_ == nullptr && this->recommendParams_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ResourceEvents& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline ResourceEvents& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResourceEvents& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline ResourceEvents& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // extraAttributes Field Functions 
      bool hasExtraAttributes() const { return this->extraAttributes_ != nullptr;};
      void deleteExtraAttributes() { this->extraAttributes_ = nullptr;};
      inline string getExtraAttributes() const { DARABONBA_PTR_GET_DEFAULT(extraAttributes_, "") };
      inline ResourceEvents& setExtraAttributes(string extraAttributes) { DARABONBA_PTR_SET_VALUE(extraAttributes_, extraAttributes) };


      // recommendAction Field Functions 
      bool hasRecommendAction() const { return this->recommendAction_ != nullptr;};
      void deleteRecommendAction() { this->recommendAction_ = nullptr;};
      inline string getRecommendAction() const { DARABONBA_PTR_GET_DEFAULT(recommendAction_, "") };
      inline ResourceEvents& setRecommendAction(string recommendAction) { DARABONBA_PTR_SET_VALUE(recommendAction_, recommendAction) };


      // recommendParams Field Functions 
      bool hasRecommendParams() const { return this->recommendParams_ != nullptr;};
      void deleteRecommendParams() { this->recommendParams_ = nullptr;};
      inline string getRecommendParams() const { DARABONBA_PTR_GET_DEFAULT(recommendParams_, "") };
      inline ResourceEvents& setRecommendParams(string recommendParams) { DARABONBA_PTR_SET_VALUE(recommendParams_, recommendParams) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceEvents& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceEvents& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ResourceEvents& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The description of the event.
      shared_ptr<string> description_ {};
      // The end time of the event, expressed as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.
      shared_ptr<string> endTime_ {};
      // The level of the event. Valid values:
      // 
      // 1.  INFO
      // 2.  WARN
      // 3.  CRITICAL
      shared_ptr<string> eventLevel_ {};
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
      shared_ptr<string> eventName_ {};
      // The type of the event. Valid values:
      // 
      // 1.  Notification
      // 2.  SystemException
      // 3.  Alert
      shared_ptr<string> eventType_ {};
      // Extra attributes of event, possible fields are:
      // 
      // - EcsInstanceId: ECS instance ID where the cloud disk is mounted;
      // - Adapter: cloud disk mount point.
      shared_ptr<string> extraAttributes_ {};
      // The recommended action after the event occurred. Valid values:
      // 
      // *   ModifyDiskSpec
      // *   CreateSnapshot
      // *   ResizeDisk
      // *   AdjustProvision
      // *   ModifyInstanceSpec
      shared_ptr<string> recommendAction_ {};
      // The codes of the parameters for the recommended action after the event occurred.
      shared_ptr<string> recommendParams_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The start time of the event, expressed as the number of milliseconds after Jan 1, 1970 00:00:00 UTC.
      shared_ptr<string> startTime_ {};
      // The status of the event. Valid values:
      // 
      // 1.  WillExecute
      // 2.  Executing
      // 3.  Executed
      // 4.  Ignore
      // 5.  Expired
      // 6.  Deleted
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resourceEvents_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceEvents Field Functions 
    bool hasResourceEvents() const { return this->resourceEvents_ != nullptr;};
    void deleteResourceEvents() { this->resourceEvents_ = nullptr;};
    inline const vector<DescribeEventsResponseBody::ResourceEvents> & getResourceEvents() const { DARABONBA_PTR_GET_CONST(resourceEvents_, vector<DescribeEventsResponseBody::ResourceEvents>) };
    inline vector<DescribeEventsResponseBody::ResourceEvents> getResourceEvents() { DARABONBA_PTR_GET(resourceEvents_, vector<DescribeEventsResponseBody::ResourceEvents>) };
    inline DescribeEventsResponseBody& setResourceEvents(const vector<DescribeEventsResponseBody::ResourceEvents> & resourceEvents) { DARABONBA_PTR_SET_VALUE(resourceEvents_, resourceEvents) };
    inline DescribeEventsResponseBody& setResourceEvents(vector<DescribeEventsResponseBody::ResourceEvents> && resourceEvents) { DARABONBA_PTR_SET_RVALUE(resourceEvents_, resourceEvents) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The events.
    shared_ptr<vector<DescribeEventsResponseBody::ResourceEvents>> resourceEvents_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
