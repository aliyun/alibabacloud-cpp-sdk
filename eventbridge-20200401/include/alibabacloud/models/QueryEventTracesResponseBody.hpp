// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTTRACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class QueryEventTracesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventTracesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventTracesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEventTracesResponseBody() = default ;
    QueryEventTracesResponseBody(const QueryEventTracesResponseBody &) = default ;
    QueryEventTracesResponseBody(QueryEventTracesResponseBody &&) = default ;
    QueryEventTracesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventTracesResponseBody() = default ;
    QueryEventTracesResponseBody& operator=(const QueryEventTracesResponseBody &) = default ;
    QueryEventTracesResponseBody& operator=(QueryEventTracesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionTime_ == nullptr && this->endpoint_ == nullptr && this->eventBusName_ == nullptr && this->eventId_ == nullptr && this->eventSource_ == nullptr
        && this->notifyLatency_ == nullptr && this->notifyStatus_ == nullptr && this->notifyTime_ == nullptr && this->receivedTime_ == nullptr && this->ruleMatchingTime_ == nullptr
        && this->ruleName_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionTime Field Functions 
      bool hasActionTime() const { return this->actionTime_ != nullptr;};
      void deleteActionTime() { this->actionTime_ = nullptr;};
      inline int64_t getActionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, 0L) };
      inline Data& setActionTime(int64_t actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // eventBusName Field Functions 
      bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
      void deleteEventBusName() { this->eventBusName_ = nullptr;};
      inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
      inline Data& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Data& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventSource Field Functions 
      bool hasEventSource() const { return this->eventSource_ != nullptr;};
      void deleteEventSource() { this->eventSource_ = nullptr;};
      inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
      inline Data& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


      // notifyLatency Field Functions 
      bool hasNotifyLatency() const { return this->notifyLatency_ != nullptr;};
      void deleteNotifyLatency() { this->notifyLatency_ = nullptr;};
      inline string getNotifyLatency() const { DARABONBA_PTR_GET_DEFAULT(notifyLatency_, "") };
      inline Data& setNotifyLatency(string notifyLatency) { DARABONBA_PTR_SET_VALUE(notifyLatency_, notifyLatency) };


      // notifyStatus Field Functions 
      bool hasNotifyStatus() const { return this->notifyStatus_ != nullptr;};
      void deleteNotifyStatus() { this->notifyStatus_ = nullptr;};
      inline string getNotifyStatus() const { DARABONBA_PTR_GET_DEFAULT(notifyStatus_, "") };
      inline Data& setNotifyStatus(string notifyStatus) { DARABONBA_PTR_SET_VALUE(notifyStatus_, notifyStatus) };


      // notifyTime Field Functions 
      bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
      void deleteNotifyTime() { this->notifyTime_ = nullptr;};
      inline int64_t getNotifyTime() const { DARABONBA_PTR_GET_DEFAULT(notifyTime_, 0L) };
      inline Data& setNotifyTime(int64_t notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };


      // receivedTime Field Functions 
      bool hasReceivedTime() const { return this->receivedTime_ != nullptr;};
      void deleteReceivedTime() { this->receivedTime_ = nullptr;};
      inline int64_t getReceivedTime() const { DARABONBA_PTR_GET_DEFAULT(receivedTime_, 0L) };
      inline Data& setReceivedTime(int64_t receivedTime) { DARABONBA_PTR_SET_VALUE(receivedTime_, receivedTime) };


      // ruleMatchingTime Field Functions 
      bool hasRuleMatchingTime() const { return this->ruleMatchingTime_ != nullptr;};
      void deleteRuleMatchingTime() { this->ruleMatchingTime_ = nullptr;};
      inline string getRuleMatchingTime() const { DARABONBA_PTR_GET_DEFAULT(ruleMatchingTime_, "") };
      inline Data& setRuleMatchingTime(string ruleMatchingTime) { DARABONBA_PTR_SET_VALUE(ruleMatchingTime_, ruleMatchingTime) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      // The type of the event trace. Valid values: PutEvent, FilterEvent, and PushEvent. The value PutEvent indicates that the event was delivered. The value FilterEvent indicates that the event was filtered. The value PushEvent indicates that the event was pushed.
      shared_ptr<string> action_ {};
      // The execution time of the event trace.
      shared_ptr<int64_t> actionTime_ {};
      // The endpoint of the event target. This parameter is returned only if Action is set to PushEvent.
      shared_ptr<string> endpoint_ {};
      // The name of the event bus.
      shared_ptr<string> eventBusName_ {};
      // The event ID.
      shared_ptr<string> eventId_ {};
      // The name of the event source.
      shared_ptr<string> eventSource_ {};
      // The delay period for which the event was delivered to the event target. This parameter is returned only if Action is set to PushEvent.
      shared_ptr<string> notifyLatency_ {};
      // The delivery status.
      shared_ptr<string> notifyStatus_ {};
      // The time when the event was delivered to the event target. This parameter is returned only if Action is set to PushEvent.
      shared_ptr<int64_t> notifyTime_ {};
      // The time when the event was delivered to the event bus. This parameter is returned only if Action is set to PutEvent.
      shared_ptr<int64_t> receivedTime_ {};
      // The time when the event rule was matched. This parameter is returned only if Action is set to FilterEvent.
      shared_ptr<string> ruleMatchingTime_ {};
      // The name of the event rule.
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEventTracesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryEventTracesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryEventTracesResponseBody::Data>) };
    inline vector<QueryEventTracesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryEventTracesResponseBody::Data>) };
    inline QueryEventTracesResponseBody& setData(const vector<QueryEventTracesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEventTracesResponseBody& setData(vector<QueryEventTracesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEventTracesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEventTracesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEventTracesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // 200: The request was successful.
    // 
    // Other codes: The request failed. For information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The name of the event source.
    shared_ptr<vector<QueryEventTracesResponseBody::Data>> data_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
