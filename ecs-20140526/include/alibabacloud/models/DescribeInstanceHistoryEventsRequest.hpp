// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeInstanceHistoryEventsRequest() = default ;
    DescribeInstanceHistoryEventsRequest(const DescribeInstanceHistoryEventsRequest &) = default ;
    DescribeInstanceHistoryEventsRequest(DescribeInstanceHistoryEventsRequest &&) = default ;
    DescribeInstanceHistoryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsRequest() = default ;
    DescribeInstanceHistoryEventsRequest& operator=(const DescribeInstanceHistoryEventsRequest &) = default ;
    DescribeInstanceHistoryEventsRequest& operator=(DescribeInstanceHistoryEventsRequest &&) = default ;
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
      // The key of tag N of the resource.
      shared_ptr<string> key_ {};
      // The value of tag N of the resource.
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
      // The latest scheduled end time for the system event. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> end_ {};
      // The earliest scheduled start time for the system event. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
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
      // The end of the time range in which to query published system events. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> end_ {};
      // The beginning of the time range in which to query published system events. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> start_ {};
    };

    virtual bool empty() const override { return this->eventPublishTime_ == nullptr
        && this->notBefore_ == nullptr && this->eventCycleStatus_ == nullptr && this->eventId_ == nullptr && this->eventType_ == nullptr && this->impactLevel_ == nullptr
        && this->instanceEventCycleStatus_ == nullptr && this->instanceEventType_ == nullptr && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr
        && this->tag_ == nullptr; };
    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline const DescribeInstanceHistoryEventsRequest::EventPublishTime & getEventPublishTime() const { DARABONBA_PTR_GET_CONST(eventPublishTime_, DescribeInstanceHistoryEventsRequest::EventPublishTime) };
    inline DescribeInstanceHistoryEventsRequest::EventPublishTime getEventPublishTime() { DARABONBA_PTR_GET(eventPublishTime_, DescribeInstanceHistoryEventsRequest::EventPublishTime) };
    inline DescribeInstanceHistoryEventsRequest& setEventPublishTime(const DescribeInstanceHistoryEventsRequest::EventPublishTime & eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };
    inline DescribeInstanceHistoryEventsRequest& setEventPublishTime(DescribeInstanceHistoryEventsRequest::EventPublishTime && eventPublishTime) { DARABONBA_PTR_SET_RVALUE(eventPublishTime_, eventPublishTime) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline const DescribeInstanceHistoryEventsRequest::NotBefore & getNotBefore() const { DARABONBA_PTR_GET_CONST(notBefore_, DescribeInstanceHistoryEventsRequest::NotBefore) };
    inline DescribeInstanceHistoryEventsRequest::NotBefore getNotBefore() { DARABONBA_PTR_GET(notBefore_, DescribeInstanceHistoryEventsRequest::NotBefore) };
    inline DescribeInstanceHistoryEventsRequest& setNotBefore(const DescribeInstanceHistoryEventsRequest::NotBefore & notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };
    inline DescribeInstanceHistoryEventsRequest& setNotBefore(DescribeInstanceHistoryEventsRequest::NotBefore && notBefore) { DARABONBA_PTR_SET_RVALUE(notBefore_, notBefore) };


    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline string getEventCycleStatus() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatus_, "") };
    inline DescribeInstanceHistoryEventsRequest& setEventCycleStatus(string eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline const vector<string> & getEventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
    inline vector<string> getEventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
    inline DescribeInstanceHistoryEventsRequest& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
    inline DescribeInstanceHistoryEventsRequest& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeInstanceHistoryEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // impactLevel Field Functions 
    bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
    void deleteImpactLevel() { this->impactLevel_ = nullptr;};
    inline string getImpactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
    inline DescribeInstanceHistoryEventsRequest& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


    // instanceEventCycleStatus Field Functions 
    bool hasInstanceEventCycleStatus() const { return this->instanceEventCycleStatus_ != nullptr;};
    void deleteInstanceEventCycleStatus() { this->instanceEventCycleStatus_ = nullptr;};
    inline const vector<string> & getInstanceEventCycleStatus() const { DARABONBA_PTR_GET_CONST(instanceEventCycleStatus_, vector<string>) };
    inline vector<string> getInstanceEventCycleStatus() { DARABONBA_PTR_GET(instanceEventCycleStatus_, vector<string>) };
    inline DescribeInstanceHistoryEventsRequest& setInstanceEventCycleStatus(const vector<string> & instanceEventCycleStatus) { DARABONBA_PTR_SET_VALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };
    inline DescribeInstanceHistoryEventsRequest& setInstanceEventCycleStatus(vector<string> && instanceEventCycleStatus) { DARABONBA_PTR_SET_RVALUE(instanceEventCycleStatus_, instanceEventCycleStatus) };


    // instanceEventType Field Functions 
    bool hasInstanceEventType() const { return this->instanceEventType_ != nullptr;};
    void deleteInstanceEventType() { this->instanceEventType_ = nullptr;};
    inline const vector<string> & getInstanceEventType() const { DARABONBA_PTR_GET_CONST(instanceEventType_, vector<string>) };
    inline vector<string> getInstanceEventType() { DARABONBA_PTR_GET(instanceEventType_, vector<string>) };
    inline DescribeInstanceHistoryEventsRequest& setInstanceEventType(const vector<string> & instanceEventType) { DARABONBA_PTR_SET_VALUE(instanceEventType_, instanceEventType) };
    inline DescribeInstanceHistoryEventsRequest& setInstanceEventType(vector<string> && instanceEventType) { DARABONBA_PTR_SET_RVALUE(instanceEventType_, instanceEventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceHistoryEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeInstanceHistoryEventsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceHistoryEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeInstanceHistoryEventsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstanceHistoryEventsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceHistoryEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceHistoryEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceHistoryEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceHistoryEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline DescribeInstanceHistoryEventsRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeInstanceHistoryEventsRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeInstanceHistoryEventsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeInstanceHistoryEventsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeInstanceHistoryEventsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInstanceHistoryEventsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInstanceHistoryEventsRequest::Tag>) };
    inline vector<DescribeInstanceHistoryEventsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeInstanceHistoryEventsRequest::Tag>) };
    inline DescribeInstanceHistoryEventsRequest& setTag(const vector<DescribeInstanceHistoryEventsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInstanceHistoryEventsRequest& setTag(vector<DescribeInstanceHistoryEventsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<DescribeInstanceHistoryEventsRequest::EventPublishTime> eventPublishTime_ {};
    shared_ptr<DescribeInstanceHistoryEventsRequest::NotBefore> notBefore_ {};
    // The lifecycle state of the system event. This parameter takes effect only when InstanceEventCycleStatus.N is not specified. Valid values:
    // 
    // *   Scheduled
    // *   Avoided
    // *   Executing
    // *   Executed
    // *   Canceled
    // *   Failed
    // *   Inquiring
    shared_ptr<string> eventCycleStatus_ {};
    // The ID of system event N. Valid values of N: 1 to 100. You can repeat this parameter to pass multiple values.
    shared_ptr<vector<string>> eventId_ {};
    // The type of the system event. This parameter takes effect only when InstanceEventType.N is not specified. Valid values:
    // 
    // *   SystemMaintenance.Reboot: The instance is restarted due to system maintenance.
    // *   SystemMaintenance.Redeploy: The instance is redeployed due to system maintenance.
    // *   SystemFailure.Reboot: The instance is restarted due to a system error.
    // *   SystemFailure.Redeploy: The instance is redeployed due to a system error.
    // *   SystemFailure.Delete: The instance is released due to an instance creation failure.
    // *   InstanceFailure.Reboot: The instance is restarted due to an instance error.
    // *   InstanceExpiration.Stop: The subscription instance is stopped due to expiration.
    // *   InstanceExpiration.Delete: The subscription instance is released due to expiration.
    // *   AccountUnbalanced.Stop: The pay-as-you-go instance is stopped due to an overdue payment.
    // *   AccountUnbalanced.Delete: The pay-as-you-go instance is released due to an overdue payment.
    // 
    // >  For more information, see [Overview](https://help.aliyun.com/document_detail/66574.html). The values of this parameter are applicable only to instance system events, but not to disk system events.
    shared_ptr<string> eventType_ {};
    // >  This parameter is not publicly available.
    shared_ptr<string> impactLevel_ {};
    // The lifecycle state of system event N. Valid values of N: 1 to 7. You can repeat this parameter to pass multiple values. Valid values:
    // 
    // *   Scheduled
    // *   Avoided
    // *   Executing
    // *   Executed
    // *   Canceled
    // *   Failed
    // *   Inquiring
    shared_ptr<vector<string>> instanceEventCycleStatus_ {};
    // The type of system event N. Valid values of N: 1 to 30. You can repeat this parameter to pass multiple values. Valid values:
    // 
    // *   SystemMaintenance.Reboot: The instance is restarted due to system maintenance.
    // *   SystemMaintenance.Redeploy: The instance is redeployed due to system maintenance.
    // *   SystemFailure.Reboot: The instance is restarted due to a system error.
    // *   SystemFailure.Redeploy: The instance is redeployed due to a system error.
    // *   SystemFailure.Delete: The instance is released due to an instance creation failure.
    // *   InstanceFailure.Reboot: The instance is restarted due to an instance error.
    // *   InstanceExpiration.Stop: The subscription instance is stopped due to expiration.
    // *   InstanceExpiration.Delete: The subscription instance is released due to expiration.
    // *   AccountUnbalanced.Stop: The pay-as-you-go instance is stopped due to an overdue payment.
    // *   AccountUnbalanced.Delete: The pay-as-you-go instance is released due to an overdue payment.
    // 
    // >  For more information, see [Overview](https://help.aliyun.com/document_detail/66574.html). The values of this parameter are applicable only to instance system events, but not to disk system events.
    shared_ptr<vector<string>> instanceEventType_ {};
    // The ID of the instance. If this parameter is not specified, the system events of all instances in the specified region are queried.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. Valid values: 10 to 100.
    // 
    // Default values:
    // 
    // *   If you set a value greater than 0 and less than 10, the default value is 10.
    // *   If you set this parameter to a value that is greater than 100, the default value is 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // >  This parameter is deprecated. We recommend that you specify MaxResults or NextToken for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // >  This parameter is deprecated. We recommend that you specify MaxResults or NextToken for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the resource. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the resource belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of resource N. Valid values of N: 1 to 100. You can repeat this parameter to pass multiple values. Valid values:
    // 
    // *   When `ResourceType` is set to instance, ResourceId.N specifies the ID of instance N.
    // *   When `ResourceType` is set to ddh, ResourceId.N specifies the ID of dedicated host N.
    // *   When `ResourceType` is set to managedhost, ResourceId.N specifies the ID of physical machine N from a smart hosting pool.
    // 
    // If this parameter is not specified, the system events of all resources of the type specified by `ResourceType` in the region specified by `RegionId` are queried.
    // 
    // >  We recommend that you use `ResourceId.N` to specify one or more resource IDs. If you specify both `ResourceId.N` and `InstanceId`, `ResourceId.N` takes precedence by default.
    shared_ptr<vector<string>> resourceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the resource. Valid values:
    // 
    // *   instance: ECS instance
    // *   ddh: dedicated host
    // *   managehost: physical machine in a smart hosting pool
    // 
    // Default value: instance.
    shared_ptr<string> resourceType_ {};
    // The list of tags.
    shared_ptr<vector<DescribeInstanceHistoryEventsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
