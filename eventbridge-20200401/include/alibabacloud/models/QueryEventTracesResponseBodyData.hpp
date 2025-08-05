// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryEventTracesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventTracesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(NotifyLatency, notifyLatency_);
      DARABONBA_PTR_TO_JSON(NotifyStatus, notifyStatus_);
      DARABONBA_PTR_TO_JSON(NotifyTime, notifyTime_);
      DARABONBA_PTR_TO_JSON(ReceivedTime, receivedTime_);
      DARABONBA_PTR_TO_JSON(RuleMatchingTime, ruleMatchingTime_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventTracesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(NotifyLatency, notifyLatency_);
      DARABONBA_PTR_FROM_JSON(NotifyStatus, notifyStatus_);
      DARABONBA_PTR_FROM_JSON(NotifyTime, notifyTime_);
      DARABONBA_PTR_FROM_JSON(ReceivedTime, receivedTime_);
      DARABONBA_PTR_FROM_JSON(RuleMatchingTime, ruleMatchingTime_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    QueryEventTracesResponseBodyData() = default ;
    QueryEventTracesResponseBodyData(const QueryEventTracesResponseBodyData &) = default ;
    QueryEventTracesResponseBodyData(QueryEventTracesResponseBodyData &&) = default ;
    QueryEventTracesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventTracesResponseBodyData() = default ;
    QueryEventTracesResponseBodyData& operator=(const QueryEventTracesResponseBodyData &) = default ;
    QueryEventTracesResponseBodyData& operator=(QueryEventTracesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->actionTime_ != nullptr && this->endpoint_ != nullptr && this->eventBusName_ != nullptr && this->eventId_ != nullptr && this->eventSource_ != nullptr
        && this->notifyLatency_ != nullptr && this->notifyStatus_ != nullptr && this->notifyTime_ != nullptr && this->receivedTime_ != nullptr && this->ruleMatchingTime_ != nullptr
        && this->ruleName_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline QueryEventTracesResponseBodyData& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionTime Field Functions 
    bool hasActionTime() const { return this->actionTime_ != nullptr;};
    void deleteActionTime() { this->actionTime_ = nullptr;};
    inline int64_t actionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, 0L) };
    inline QueryEventTracesResponseBodyData& setActionTime(int64_t actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline QueryEventTracesResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline QueryEventTracesResponseBodyData& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline QueryEventTracesResponseBodyData& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventSource Field Functions 
    bool hasEventSource() const { return this->eventSource_ != nullptr;};
    void deleteEventSource() { this->eventSource_ = nullptr;};
    inline string eventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
    inline QueryEventTracesResponseBodyData& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // notifyLatency Field Functions 
    bool hasNotifyLatency() const { return this->notifyLatency_ != nullptr;};
    void deleteNotifyLatency() { this->notifyLatency_ = nullptr;};
    inline string notifyLatency() const { DARABONBA_PTR_GET_DEFAULT(notifyLatency_, "") };
    inline QueryEventTracesResponseBodyData& setNotifyLatency(string notifyLatency) { DARABONBA_PTR_SET_VALUE(notifyLatency_, notifyLatency) };


    // notifyStatus Field Functions 
    bool hasNotifyStatus() const { return this->notifyStatus_ != nullptr;};
    void deleteNotifyStatus() { this->notifyStatus_ = nullptr;};
    inline string notifyStatus() const { DARABONBA_PTR_GET_DEFAULT(notifyStatus_, "") };
    inline QueryEventTracesResponseBodyData& setNotifyStatus(string notifyStatus) { DARABONBA_PTR_SET_VALUE(notifyStatus_, notifyStatus) };


    // notifyTime Field Functions 
    bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
    void deleteNotifyTime() { this->notifyTime_ = nullptr;};
    inline int64_t notifyTime() const { DARABONBA_PTR_GET_DEFAULT(notifyTime_, 0L) };
    inline QueryEventTracesResponseBodyData& setNotifyTime(int64_t notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };


    // receivedTime Field Functions 
    bool hasReceivedTime() const { return this->receivedTime_ != nullptr;};
    void deleteReceivedTime() { this->receivedTime_ = nullptr;};
    inline int64_t receivedTime() const { DARABONBA_PTR_GET_DEFAULT(receivedTime_, 0L) };
    inline QueryEventTracesResponseBodyData& setReceivedTime(int64_t receivedTime) { DARABONBA_PTR_SET_VALUE(receivedTime_, receivedTime) };


    // ruleMatchingTime Field Functions 
    bool hasRuleMatchingTime() const { return this->ruleMatchingTime_ != nullptr;};
    void deleteRuleMatchingTime() { this->ruleMatchingTime_ = nullptr;};
    inline string ruleMatchingTime() const { DARABONBA_PTR_GET_DEFAULT(ruleMatchingTime_, "") };
    inline QueryEventTracesResponseBodyData& setRuleMatchingTime(string ruleMatchingTime) { DARABONBA_PTR_SET_VALUE(ruleMatchingTime_, ruleMatchingTime) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline QueryEventTracesResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The type of the event trace. Valid values: PutEvent, FilterEvent, and PushEvent. The value PutEvent indicates that the event was delivered. The value FilterEvent indicates that the event was filtered. The value PushEvent indicates that the event was pushed.
    std::shared_ptr<string> action_ = nullptr;
    // The execution time of the event trace.
    std::shared_ptr<int64_t> actionTime_ = nullptr;
    // The endpoint of the event target. This parameter is returned only if Action is set to PushEvent.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The name of the event source.
    std::shared_ptr<string> eventSource_ = nullptr;
    // The delay period for which the event was delivered to the event target. This parameter is returned only if Action is set to PushEvent.
    std::shared_ptr<string> notifyLatency_ = nullptr;
    // The delivery status.
    std::shared_ptr<string> notifyStatus_ = nullptr;
    // The time when the event was delivered to the event target. This parameter is returned only if Action is set to PushEvent.
    std::shared_ptr<int64_t> notifyTime_ = nullptr;
    // The time when the event was delivered to the event bus. This parameter is returned only if Action is set to PutEvent.
    std::shared_ptr<int64_t> receivedTime_ = nullptr;
    // The time when the event rule was matched. This parameter is returned only if Action is set to FilterEvent.
    std::shared_ptr<string> ruleMatchingTime_ = nullptr;
    // The name of the event rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
