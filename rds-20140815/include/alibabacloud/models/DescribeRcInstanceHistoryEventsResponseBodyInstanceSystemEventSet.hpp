// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODYINSTANCESYSTEMEVENTSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus.hpp>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType.hpp>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& obj) { 
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
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet &&) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet() = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& operator=(const DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet &) = default ;
    DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& operator=(DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCycleStatus_ == nullptr
        && return this->eventFinishTime_ == nullptr && return this->eventId_ == nullptr && return this->eventPublishTime_ == nullptr && return this->eventType_ == nullptr && return this->extendedAttribute_ == nullptr
        && return this->impactLevel_ == nullptr && return this->instanceId_ == nullptr && return this->notBefore_ == nullptr && return this->reason_ == nullptr && return this->reasonCode_ == nullptr
        && return this->resourceType_ == nullptr; };
    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus & eventCycleStatus() const { DARABONBA_PTR_GET_CONST(eventCycleStatus_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus) };
    inline Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus eventCycleStatus() { DARABONBA_PTR_GET(eventCycleStatus_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventCycleStatus(const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus & eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventCycleStatus(Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus && eventCycleStatus) { DARABONBA_PTR_SET_RVALUE(eventCycleStatus_, eventCycleStatus) };


    // eventFinishTime Field Functions 
    bool hasEventFinishTime() const { return this->eventFinishTime_ != nullptr;};
    void deleteEventFinishTime() { this->eventFinishTime_ = nullptr;};
    inline string eventFinishTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinishTime_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventFinishTime(string eventFinishTime) { DARABONBA_PTR_SET_VALUE(eventFinishTime_, eventFinishTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventPublishTime Field Functions 
    bool hasEventPublishTime() const { return this->eventPublishTime_ != nullptr;};
    void deleteEventPublishTime() { this->eventPublishTime_ = nullptr;};
    inline string eventPublishTime() const { DARABONBA_PTR_GET_DEFAULT(eventPublishTime_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventPublishTime(string eventPublishTime) { DARABONBA_PTR_SET_VALUE(eventPublishTime_, eventPublishTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType & eventType() const { DARABONBA_PTR_GET_CONST(eventType_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType) };
    inline Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType eventType() { DARABONBA_PTR_GET(eventType_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventType(const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType & eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setEventType(Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType && eventType) { DARABONBA_PTR_SET_RVALUE(eventType_, eventType) };


    // extendedAttribute Field Functions 
    bool hasExtendedAttribute() const { return this->extendedAttribute_ != nullptr;};
    void deleteExtendedAttribute() { this->extendedAttribute_ = nullptr;};
    inline const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute & extendedAttribute() const { DARABONBA_PTR_GET_CONST(extendedAttribute_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute) };
    inline Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute extendedAttribute() { DARABONBA_PTR_GET(extendedAttribute_, Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setExtendedAttribute(const Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute & extendedAttribute) { DARABONBA_PTR_SET_VALUE(extendedAttribute_, extendedAttribute) };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setExtendedAttribute(Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute && extendedAttribute) { DARABONBA_PTR_SET_RVALUE(extendedAttribute_, extendedAttribute) };


    // impactLevel Field Functions 
    bool hasImpactLevel() const { return this->impactLevel_ != nullptr;};
    void deleteImpactLevel() { this->impactLevel_ = nullptr;};
    inline string impactLevel() const { DARABONBA_PTR_GET_DEFAULT(impactLevel_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setImpactLevel(string impactLevel) { DARABONBA_PTR_SET_VALUE(impactLevel_, impactLevel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The lifecycle state of the system event.
    std::shared_ptr<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventCycleStatus> eventCycleStatus_ = nullptr;
    // The time when the system event ended. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> eventFinishTime_ = nullptr;
    // The ID of the system event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The time when the system event was published. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> eventPublishTime_ = nullptr;
    // The type of the system event.
    std::shared_ptr<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetEventType> eventType_ = nullptr;
    // The extended attribute of the system event.
    std::shared_ptr<Models::DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSetExtendedAttribute> extendedAttribute_ = nullptr;
    // The impact level of the event.
    std::shared_ptr<string> impactLevel_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The start time of the scheduled execution of the system event. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The reason why the system event occurred.
    std::shared_ptr<string> reason_ = nullptr;
    // The reason code category for the system event.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The resource type. The value is fixed to INSTANCE.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
