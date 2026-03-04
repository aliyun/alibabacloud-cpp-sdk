// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
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
  class ListRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRulesResponseBody() = default ;
    ListRulesResponseBody(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody(ListRulesResponseBody &&) = default ;
    ListRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBody() = default ;
    ListRulesResponseBody& operator=(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody& operator=(ListRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedTimestamp, createdTimestamp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_ANY_TO_JSON(DetailMap, detailMap_);
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
          DARABONBA_PTR_TO_JSON(RuleARN, ruleARN_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Targets, targets_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedTimestamp, createdTimestamp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_ANY_FROM_JSON(DetailMap, detailMap_);
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
          DARABONBA_PTR_FROM_JSON(RuleARN, ruleARN_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Targets, targets_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Targets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Targets& obj) { 
            DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(PushSelector, pushSelector_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Targets& obj) { 
            DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(PushSelector, pushSelector_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Targets() = default ;
          Targets(const Targets &) = default ;
          Targets(Targets &&) = default ;
          Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Targets() = default ;
          Targets& operator=(const Targets &) = default ;
          Targets& operator=(Targets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->errorsTolerance_ == nullptr && this->id_ == nullptr && this->pushSelector_ == nullptr && this->type_ == nullptr; };
          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline Targets& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // errorsTolerance Field Functions 
          bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
          void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
          inline string getErrorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
          inline Targets& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Targets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // pushSelector Field Functions 
          bool hasPushSelector() const { return this->pushSelector_ != nullptr;};
          void deletePushSelector() { this->pushSelector_ = nullptr;};
          inline string getPushSelector() const { DARABONBA_PTR_GET_DEFAULT(pushSelector_, "") };
          inline Targets& setPushSelector(string pushSelector) { DARABONBA_PTR_SET_VALUE(pushSelector_, pushSelector) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The endpoint of the event target.
          shared_ptr<string> endpoint_ {};
          // The fault tolerance policy. Valid values:
          // 
          // *   **ALL**: Fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations.
          // *   **NONE**: Fault tolerance is prohibited. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
          shared_ptr<string> errorsTolerance_ {};
          // The ID of the custom event target.
          shared_ptr<string> id_ {};
          // The transformer that is used to push events.
          shared_ptr<string> pushSelector_ {};
          // The type of the event target. For more information, see [Event target parameters.](https://www.alibabacloud.com/help/en/eventbridge/latest/event-target-parameters)
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->createdTimestamp_ == nullptr
        && this->description_ == nullptr && this->detailMap_ == nullptr && this->eventBusName_ == nullptr && this->filterPattern_ == nullptr && this->ruleARN_ == nullptr
        && this->ruleName_ == nullptr && this->status_ == nullptr && this->targets_ == nullptr; };
        // createdTimestamp Field Functions 
        bool hasCreatedTimestamp() const { return this->createdTimestamp_ != nullptr;};
        void deleteCreatedTimestamp() { this->createdTimestamp_ = nullptr;};
        inline int64_t getCreatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createdTimestamp_, 0L) };
        inline Rules& setCreatedTimestamp(int64_t createdTimestamp) { DARABONBA_PTR_SET_VALUE(createdTimestamp_, createdTimestamp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // detailMap Field Functions 
        bool hasDetailMap() const { return this->detailMap_ != nullptr;};
        void deleteDetailMap() { this->detailMap_ = nullptr;};
        inline         const Darabonba::Json & getDetailMap() const { DARABONBA_GET(detailMap_) };
        Darabonba::Json & getDetailMap() { DARABONBA_GET(detailMap_) };
        inline Rules& setDetailMap(const Darabonba::Json & detailMap) { DARABONBA_SET_VALUE(detailMap_, detailMap) };
        inline Rules& setDetailMap(Darabonba::Json && detailMap) { DARABONBA_SET_RVALUE(detailMap_, detailMap) };


        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline Rules& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // filterPattern Field Functions 
        bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
        void deleteFilterPattern() { this->filterPattern_ = nullptr;};
        inline string getFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
        inline Rules& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


        // ruleARN Field Functions 
        bool hasRuleARN() const { return this->ruleARN_ != nullptr;};
        void deleteRuleARN() { this->ruleARN_ = nullptr;};
        inline string getRuleARN() const { DARABONBA_PTR_GET_DEFAULT(ruleARN_, "") };
        inline Rules& setRuleARN(string ruleARN) { DARABONBA_PTR_SET_VALUE(ruleARN_, ruleARN) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Rules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // targets Field Functions 
        bool hasTargets() const { return this->targets_ != nullptr;};
        void deleteTargets() { this->targets_ = nullptr;};
        inline const vector<Rules::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Rules::Targets>) };
        inline vector<Rules::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Rules::Targets>) };
        inline Rules& setTargets(const vector<Rules::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
        inline Rules& setTargets(vector<Rules::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      protected:
        // The creation timestamp.
        shared_ptr<int64_t> createdTimestamp_ {};
        // The rule description.
        shared_ptr<string> description_ {};
        // The details of the event rule.
        Darabonba::Json detailMap_ {};
        // The name of the event bus.
        shared_ptr<string> eventBusName_ {};
        // The event pattern, in JSON format. Valid values:
        // 
        // *   **stringEqual**: Up to five expressions in the map data structure can be specified in each field.
        // *   **stringExpression**: Up to five expressions in the map data structure can be specified in each field.
        shared_ptr<string> filterPattern_ {};
        // The Alibaba Cloud Resource Name (ARN) of the rule.
        shared_ptr<string> ruleARN_ {};
        // The name of the event rule.
        shared_ptr<string> ruleName_ {};
        // The status of the event rule. Valid values:
        // 
        // *   **ENABLE** (default)
        // *   **DISABLE**
        shared_ptr<string> status_ {};
        // The event targets.
        shared_ptr<vector<Rules::Targets>> targets_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->rules_ == nullptr && this->total_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // If excess return values exist, this parameter is returned.
      shared_ptr<string> nextToken_ {};
      // The event rules.
      shared_ptr<vector<Data::Rules>> rules_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRulesResponseBody::Data) };
    inline ListRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRulesResponseBody::Data) };
    inline ListRulesResponseBody& setData(const ListRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRulesResponseBody& setData(ListRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // *   **Success**: The request was successful.
    // *   **Other codes**: The request failed. For more information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListRulesResponseBody::Data> data_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
