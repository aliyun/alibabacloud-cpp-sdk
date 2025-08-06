// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETINSTANCESYSTEMEVENTTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSETINSTANCESYSTEMEVENTTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& obj) { 
      DARABONBA_PTR_TO_JSON(EventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_TO_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ExtendedAttribute, extendedAttribute_);
      DARABONBA_PTR_TO_JSON(ImpactLevel, impactLevel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_FROM_JSON(EventFinishTime, eventFinishTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventPublishTime, eventPublishTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ExtendedAttribute, extendedAttribute_);
      DARABONBA_PTR_FROM_JSON(ImpactLevel, impactLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType &&) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType() = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& operator=(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType &) = default ;
    DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& operator=(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventCycleStatus_ != nullptr
        && this->eventFinishTime_ != nullptr && this->eventId_ != nullptr && this->eventPublishTime_ != nullptr && this->eventType_ != nullptr && this->extendedAttribute_ != nullptr
        && this->impactLevel_ != nullptr && this->instanceId_ != nullptr && this->notBefore_ != nullptr && this->reason_ != nullptr && this->reasonCode_ != nullptr
        && this->resourceType_ != nullptr; };
    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus & eventCycleStatus() const { DARABONBA_PTR_GET_CONST(eventCycleStatus_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus) };
    inline Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus eventCycleStatus() { DARABONBA_PTR_GET(eventCycleStatus_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventCycleStatus(const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus & eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventCycleStatus(Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus && eventCycleStatus) { DARABONBA_PTR_SET_RVALUE(eventCycleStatus_, eventCycleStatus) };


    // eventFinishTime Field Functions 
    bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
    void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
    inline string eventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline string eventPublishTime() const { DARABONBA_PTR_GET_DEFAULT(eventPublishTime_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventPublishTime(string eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType & eventType() const { DARABONBA_PTR_GET_CONST(eventType_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType) };
    inline Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType eventType() { DARABONBA_PTR_GET(eventType_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventType(const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType & eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setEventType(Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType && eventType) { DARABONBA_PTR_SET_RVALUE(eventType_, eventType) };


    // extendedAttribute Field Functions 
    bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
    void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
    inline const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute & extendedAttribute() const { DARABONBA_PTR_GET_CONST(extendedAttribute_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute) };
    inline Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute extendedAttribute() { DARABONBA_PTR_GET(extendedAttribute_, Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setExtendedAttribute(const Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute & extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setExtendedAttribute(Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute && extendedAttribute) { DARABONBA_PTR_SET_RVALUE(extendedAttribute_, extendedAttribute) };


    // impactLevel Field Functions 
    bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
    void deleteImpactLevel() { this->impactLevel_ = nullptr;};
    inline string impactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The lifecycle status of the system event.
    std::shared_ptr<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventCycleStatus> eventCycleStatus_ = nullptr;
    // The time when the system event ended. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> eventFinishTime_ = nullptr;
    // The ID of the system event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The time when the system event was published. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> eventPublishTime_ = nullptr;
    // The type of the system event.
    std::shared_ptr<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeEventType> eventType_ = nullptr;
    // The extended attribute of the system event.
    std::shared_ptr<Models::DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSetInstanceSystemEventTypeExtendedAttribute> extendedAttribute_ = nullptr;
    // The impact level of the system event.
    std::shared_ptr<string> impactLevel_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The scheduled start time of the system event. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The reason why the system event occurred.
    std::shared_ptr<string> reason_ = nullptr;
    // The reason code category for the system event.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   instance: ECS instance
    // *   ddh: dedicated host
    // *   managehost: physical machine in a smart hosting pool
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
