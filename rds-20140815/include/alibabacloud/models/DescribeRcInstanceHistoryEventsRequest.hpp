// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag that is added to the resource.
      shared_ptr<string> key_ {};
      // The value of tag N of the port list.
      shared_ptr<string> value_ {};
    };

    class NotBefore : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotBefore& obj) { 
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Start, start_);
      };
      friend void from_json(const Darabonba::Json& j, NotBefore& obj) { 
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
      };
      NotBefore() = default ;
      NotBefore(const NotBefore &) = default ;
      NotBefore(NotBefore &&) = default ;
      NotBefore(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotBefore() = default ;
      NotBefore& operator=(const NotBefore &) = default ;
      NotBefore& operator=(NotBefore &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
      inline NotBefore& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
      inline NotBefore& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The end time of the scheduled execution period for the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> end_ {};
      // The start time of the scheduled execution period for the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> start_ {};
    };

    class EventPublishTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventPublishTime& obj) { 
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Start, start_);
      };
      friend void from_json(const Darabonba::Json& j, EventPublishTime& obj) { 
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
      };
      EventPublishTime() = default ;
      EventPublishTime(const EventPublishTime &) = default ;
      EventPublishTime(EventPublishTime &&) = default ;
      EventPublishTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventPublishTime() = default ;
      EventPublishTime& operator=(const EventPublishTime &) = default ;
      EventPublishTime& operator=(EventPublishTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
      inline EventPublishTime& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
      inline EventPublishTime& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The end of the time range in which to query published system events. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> end_ {};
      // The beginning of the time range in which to query published system events. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      shared_ptr<string> start_ {};
    };

    virtual bool empty() const override { return this->eventPublishTime_ == nullptr
        && this->notBefore_ == nullptr && this->eventCycleStatus_ == nullptr && this->eventId_ == nullptr && this->eventType_ == nullptr && this->impactLevel_ == nullptr
        && this->instanceEventCycleStatus_ == nullptr && this->instanceEventType_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->tag_ == nullptr; };
    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline const DescribeRCInstanceHistoryEventsRequest::EventPublishTime & getEventPublishTime() const { DARABONBA_PTR_GET_CONST(eventPublishTime_, DescribeRCInstanceHistoryEventsRequest::EventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequest::EventPublishTime getEventPublishTime() { DARABONBA_PTR_GET(eventPublishTime_, DescribeRCInstanceHistoryEventsRequest::EventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventPublishTime(const DescribeRCInstanceHistoryEventsRequest::EventPublishTime & eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventPublishTime(DescribeRCInstanceHistoryEventsRequest::EventPublishTime && eventPublishTime) { DARABONBA_PTR_SET_RVALUE(eventPublishTime_, eventPublishTime) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline const DescribeRCInstanceHistoryEventsRequest::NotBefore & getNotBefore() const { DARABONBA_PTR_GET_CONST(notBefore_, DescribeRCInstanceHistoryEventsRequest::NotBefore) };
    inline DescribeRCInstanceHistoryEventsRequest::NotBefore getNotBefore() { DARABONBA_PTR_GET(notBefore_, DescribeRCInstanceHistoryEventsRequest::NotBefore) };
    inline DescribeRCInstanceHistoryEventsRequest& setNotBefore(const DescribeRCInstanceHistoryEventsRequest::NotBefore & notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };
    inline DescribeRCInstanceHistoryEventsRequest& setNotBefore(DescribeRCInstanceHistoryEventsRequest::NotBefore && notBefore) { DARABONBA_PTR_SET_RVALUE(notBefore_, notBefore) };


    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline string getEventCycleStatus() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatus_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setEventCycleStatus(string eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline const vector<string> & getEventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
    inline vector<string> getEventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
    inline DescribeRCInstanceHistoryEventsRequest& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // impactLevel Field Functions 
    bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
    void deleteImpactLevel() { this->impactLevel_ = nullptr;};
    inline string getImpactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


    // instanceEventCycleStatus Field Functions 
    bool hasInstanceEventCycleStatus() const { return this->instanceEventCycleStatus_ != nullptr;};
    void deleteInstanceEventCycleStatus() { this->instanceEventCycleStatus_ = nullptr;};
    inline const vector<string> & getInstanceEventCycleStatus() const { DARABONBA_PTR_GET_CONST(instanceEventCycleStatus_, vector<string>) };
    inline vector<string> getInstanceEventCycleStatus() { DARABONBA_PTR_GET(instanceEventCycleStatus_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventCycleStatus(const vector<string> & instanceEventCycleStatus) { DARABONBA_PTR_SET_VALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventCycleStatus(vector<string> && instanceEventCycleStatus) { DARABONBA_PTR_SET_RVALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };


    // instanceEventType Field Functions 
    bool hasInstanceEventType() const { return this->instanceEventType_ != nullptr;};
    void deleteInstanceEventType() { this->instanceEventType_ = nullptr;};
    inline const vector<string> & getInstanceEventType() const { DARABONBA_PTR_GET_CONST(instanceEventType_, vector<string>) };
    inline vector<string> getInstanceEventType() { DARABONBA_PTR_GET(instanceEventType_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventType(const vector<string> & instanceEventType) { DARABONBA_PTR_SET_VALUE(instanceEventType_, instanceEventType) };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceEventType(vector<string> && instanceEventType) { DARABONBA_PTR_SET_RVALUE(instanceEventType_, instanceEventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeRCInstanceHistoryEventsRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeRCInstanceHistoryEventsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeRCInstanceHistoryEventsRequest::Tag>) };
    inline vector<DescribeRCInstanceHistoryEventsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeRCInstanceHistoryEventsRequest::Tag>) };
    inline DescribeRCInstanceHistoryEventsRequest& setTag(const vector<DescribeRCInstanceHistoryEventsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCInstanceHistoryEventsRequest& setTag(vector<DescribeRCInstanceHistoryEventsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<DescribeRCInstanceHistoryEventsRequest::EventPublishTime> eventPublishTime_ {};
    shared_ptr<DescribeRCInstanceHistoryEventsRequest::NotBefore> notBefore_ {};
    // The lifecycle state of the system event. This parameter is valid only when the **InstanceEventCycleStatus.N** parameter is not specified. Valid values:
    // 
    // *   **Scheduled**
    // *   **Avoided**
    // *   **Executing**
    // *   **Executed**
    // *   **Canceled**
    // *   **Failed**
    // *   **Inquiring**
    shared_ptr<string> eventCycleStatus_ {};
    // The IDs of one or more system events.
    shared_ptr<vector<string>> eventId_ {};
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
    shared_ptr<string> eventType_ {};
    // The reserved parameter. This parameter is not supported.
    shared_ptr<string> impactLevel_ {};
    // The lifecycle states of system events.
    shared_ptr<vector<string>> instanceEventCycleStatus_ {};
    // The type of system event N.
    shared_ptr<vector<string>> instanceEventType_ {};
    // The instance ID. If you do not specify an instance ID, system events of all instances in the specified region are queried.
    shared_ptr<string> instanceId_ {};
    // The reserved parameter. This parameter is not supported.
    shared_ptr<string> maxResults_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The maximum number of entries returned per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group that you want to query.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of resource N.
    shared_ptr<vector<string>> resourceId_ {};
    // An array that consists of the tags that are supported by system events.
    shared_ptr<vector<DescribeRCInstanceHistoryEventsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
