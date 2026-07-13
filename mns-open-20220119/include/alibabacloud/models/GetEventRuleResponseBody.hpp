// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventMatchRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEventRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEventRuleResponseBody() = default ;
    GetEventRuleResponseBody(const GetEventRuleResponseBody &) = default ;
    GetEventRuleResponseBody(GetEventRuleResponseBody &&) = default ;
    GetEventRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventRuleResponseBody() = default ;
    GetEventRuleResponseBody& operator=(const GetEventRuleResponseBody &) = default ;
    GetEventRuleResponseBody& operator=(GetEventRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
        DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
        DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
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
      class Subscriptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subscriptions& obj) { 
          DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
        };
        friend void from_json(const Darabonba::Json& j, Subscriptions& obj) { 
          DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
        };
        Subscriptions() = default ;
        Subscriptions(const Subscriptions &) = default ;
        Subscriptions(Subscriptions &&) = default ;
        Subscriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subscriptions() = default ;
        Subscriptions& operator=(const Subscriptions &) = default ;
        Subscriptions& operator=(Subscriptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
        // endpointType Field Functions 
        bool hasEndpointType() const { return this->endpointType_ != nullptr;};
        void deleteEndpointType() { this->endpointType_ = nullptr;};
        inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
        inline Subscriptions& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


        // endpointValue Field Functions 
        bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
        void deleteEndpointValue() { this->endpointValue_ = nullptr;};
        inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
        inline Subscriptions& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


      protected:
        // The endpoint type. Valid values:
        // 
        // - **queue**: A queue.
        // 
        // - **topic**: A topic.
        shared_ptr<string> endpointType_ {};
        // The value of the endpoint.
        shared_ptr<string> endpointValue_ {};
      };

      class Endpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
          DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
        };
        Endpoint() = default ;
        Endpoint(const Endpoint &) = default ;
        Endpoint(Endpoint &&) = default ;
        Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoint() = default ;
        Endpoint& operator=(const Endpoint &) = default ;
        Endpoint& operator=(Endpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
        // endpointType Field Functions 
        bool hasEndpointType() const { return this->endpointType_ != nullptr;};
        void deleteEndpointType() { this->endpointType_ = nullptr;};
        inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
        inline Endpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


        // endpointValue Field Functions 
        bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
        void deleteEndpointValue() { this->endpointValue_ = nullptr;};
        inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
        inline Endpoint& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


      protected:
        // The endpoint type. Valid values:
        // 
        // - **queue**: A queue.
        // 
        // - **topic**: A topic.
        shared_ptr<string> endpointType_ {};
        // The value of the endpoint.
        shared_ptr<string> endpointValue_ {};
      };

      virtual bool empty() const override { return this->deliveryMode_ == nullptr
        && this->endpoint_ == nullptr && this->eventTypes_ == nullptr && this->matchRules_ == nullptr && this->ruleName_ == nullptr && this->subscriptions_ == nullptr
        && this->topicName_ == nullptr; };
      // deliveryMode Field Functions 
      bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
      void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
      inline string getDeliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
      inline Data& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline const Data::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, Data::Endpoint) };
      inline Data::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, Data::Endpoint) };
      inline Data& setEndpoint(const Data::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
      inline Data& setEndpoint(Data::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


      // eventTypes Field Functions 
      bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
      void deleteEventTypes() { this->eventTypes_ = nullptr;};
      inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
      inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
      inline Data& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
      inline Data& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


      // matchRules Field Functions 
      bool hasMatchRules() const { return this->matchRules_ != nullptr;};
      void deleteMatchRules() { this->matchRules_ = nullptr;};
      inline const vector<vector<EventMatchRule>> & getMatchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<EventMatchRule>>) };
      inline vector<vector<EventMatchRule>> getMatchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<EventMatchRule>>) };
      inline Data& setMatchRules(const vector<vector<EventMatchRule>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
      inline Data& setMatchRules(vector<vector<EventMatchRule>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // subscriptions Field Functions 
      bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
      void deleteSubscriptions() { this->subscriptions_ = nullptr;};
      inline const vector<Data::Subscriptions> & getSubscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<Data::Subscriptions>) };
      inline vector<Data::Subscriptions> getSubscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<Data::Subscriptions>) };
      inline Data& setSubscriptions(const vector<Data::Subscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
      inline Data& setSubscriptions(vector<Data::Subscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    protected:
      // This field is deprecated.
      shared_ptr<string> deliveryMode_ {};
      // The endpoint address.
      shared_ptr<Data::Endpoint> endpoint_ {};
      // A list of event types.
      shared_ptr<vector<string>> eventTypes_ {};
      // The event matching rules. The rules have an OR relationship.
      shared_ptr<vector<vector<EventMatchRule>>> matchRules_ {};
      // The name of the event notification rule.
      shared_ptr<string> ruleName_ {};
      // Subscription endpoints.
      shared_ptr<vector<Data::Subscriptions>> subscriptions_ {};
      // The name of the topic.
      shared_ptr<string> topicName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetEventRuleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEventRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEventRuleResponseBody::Data) };
    inline GetEventRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEventRuleResponseBody::Data) };
    inline GetEventRuleResponseBody& setData(const GetEventRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEventRuleResponseBody& setData(GetEventRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEventRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEventRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEventRuleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEventRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The query results.
    shared_ptr<GetEventRuleResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The unique ID generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The status of the response.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
