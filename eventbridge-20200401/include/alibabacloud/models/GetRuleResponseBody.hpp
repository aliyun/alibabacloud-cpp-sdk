// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
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
  class GetRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRuleResponseBody() = default ;
    GetRuleResponseBody(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody(GetRuleResponseBody &&) = default ;
    GetRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBody() = default ;
    GetRuleResponseBody& operator=(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody& operator=(GetRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTimestamp, createdTimestamp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
        DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
        DARABONBA_PTR_TO_JSON(RuleARN, ruleARN_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTimestamp, createdTimestamp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
        DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
        DARABONBA_PTR_FROM_JSON(RuleARN, ruleARN_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
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
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(ConcurrentConfig, concurrentConfig_);
          DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
          DARABONBA_ANY_TO_JSON(DetailMap, detailMap_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ParamList, paramList_);
          DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
          DARABONBA_PTR_TO_JSON(PushSelector, pushSelector_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(ConcurrentConfig, concurrentConfig_);
          DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
          DARABONBA_ANY_FROM_JSON(DetailMap, detailMap_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
          DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
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
        class ParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(ResourceKey, resourceKey_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(ResourceKey, resourceKey_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ParamList() = default ;
          ParamList(const ParamList &) = default ;
          ParamList(ParamList &&) = default ;
          ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamList() = default ;
          ParamList& operator=(const ParamList &) = default ;
          ParamList& operator=(ParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->resourceKey_ == nullptr && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ParamList& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // resourceKey Field Functions 
          bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
          void deleteResourceKey() { this->resourceKey_ = nullptr;};
          inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
          inline ParamList& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ParamList& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The format that is used by the event target parameter. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
          shared_ptr<string> form_ {};
          // The resource key of the event target. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
          shared_ptr<string> resourceKey_ {};
          // The template based on which events are delivered to the event target.
          shared_ptr<string> template_ {};
          // The event target.
          shared_ptr<string> value_ {};
        };

        class DeadLetterQueue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeadLetterQueue& obj) { 
            DARABONBA_PTR_TO_JSON(Arn, arn_);
            DARABONBA_PTR_TO_JSON(Network, network_);
            DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, DeadLetterQueue& obj) { 
            DARABONBA_PTR_FROM_JSON(Arn, arn_);
            DARABONBA_PTR_FROM_JSON(Network, network_);
            DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          };
          DeadLetterQueue() = default ;
          DeadLetterQueue(const DeadLetterQueue &) = default ;
          DeadLetterQueue(DeadLetterQueue &&) = default ;
          DeadLetterQueue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeadLetterQueue() = default ;
          DeadLetterQueue& operator=(const DeadLetterQueue &) = default ;
          DeadLetterQueue& operator=(DeadLetterQueue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arn_ == nullptr
        && this->network_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
          // arn Field Functions 
          bool hasArn() const { return this->arn_ != nullptr;};
          void deleteArn() { this->arn_ = nullptr;};
          inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
          inline DeadLetterQueue& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


          // network Field Functions 
          bool hasNetwork() const { return this->network_ != nullptr;};
          void deleteNetwork() { this->network_ = nullptr;};
          inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
          inline DeadLetterQueue& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline DeadLetterQueue& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
          inline DeadLetterQueue& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline DeadLetterQueue& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The Alibaba Cloud Resource Name (ARN) of the dead-letter queue.
          shared_ptr<string> arn_ {};
          shared_ptr<string> network_ {};
          shared_ptr<string> securityGroupId_ {};
          shared_ptr<string> vSwitchIds_ {};
          shared_ptr<string> vpcId_ {};
        };

        class ConcurrentConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConcurrentConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
          };
          friend void from_json(const Darabonba::Json& j, ConcurrentConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
          };
          ConcurrentConfig() = default ;
          ConcurrentConfig(const ConcurrentConfig &) = default ;
          ConcurrentConfig(ConcurrentConfig &&) = default ;
          ConcurrentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConcurrentConfig() = default ;
          ConcurrentConfig& operator=(const ConcurrentConfig &) = default ;
          ConcurrentConfig& operator=(ConcurrentConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->concurrency_ == nullptr; };
          // concurrency Field Functions 
          bool hasConcurrency() const { return this->concurrency_ != nullptr;};
          void deleteConcurrency() { this->concurrency_ = nullptr;};
          inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
          inline ConcurrentConfig& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


        protected:
          shared_ptr<int64_t> concurrency_ {};
        };

        virtual bool empty() const override { return this->concurrentConfig_ == nullptr
        && this->deadLetterQueue_ == nullptr && this->detailMap_ == nullptr && this->endpoint_ == nullptr && this->errorsTolerance_ == nullptr && this->id_ == nullptr
        && this->paramList_ == nullptr && this->pushRetryStrategy_ == nullptr && this->pushSelector_ == nullptr && this->type_ == nullptr; };
        // concurrentConfig Field Functions 
        bool hasConcurrentConfig() const { return this->concurrentConfig_ != nullptr;};
        void deleteConcurrentConfig() { this->concurrentConfig_ = nullptr;};
        inline const Targets::ConcurrentConfig & getConcurrentConfig() const { DARABONBA_PTR_GET_CONST(concurrentConfig_, Targets::ConcurrentConfig) };
        inline Targets::ConcurrentConfig getConcurrentConfig() { DARABONBA_PTR_GET(concurrentConfig_, Targets::ConcurrentConfig) };
        inline Targets& setConcurrentConfig(const Targets::ConcurrentConfig & concurrentConfig) { DARABONBA_PTR_SET_VALUE(concurrentConfig_, concurrentConfig) };
        inline Targets& setConcurrentConfig(Targets::ConcurrentConfig && concurrentConfig) { DARABONBA_PTR_SET_RVALUE(concurrentConfig_, concurrentConfig) };


        // deadLetterQueue Field Functions 
        bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
        void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
        inline const Targets::DeadLetterQueue & getDeadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, Targets::DeadLetterQueue) };
        inline Targets::DeadLetterQueue getDeadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, Targets::DeadLetterQueue) };
        inline Targets& setDeadLetterQueue(const Targets::DeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
        inline Targets& setDeadLetterQueue(Targets::DeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


        // detailMap Field Functions 
        bool hasDetailMap() const { return this->detailMap_ != nullptr;};
        void deleteDetailMap() { this->detailMap_ = nullptr;};
        inline         const Darabonba::Json & getDetailMap() const { DARABONBA_GET(detailMap_) };
        Darabonba::Json & getDetailMap() { DARABONBA_GET(detailMap_) };
        inline Targets& setDetailMap(const Darabonba::Json & detailMap) { DARABONBA_SET_VALUE(detailMap_, detailMap) };
        inline Targets& setDetailMap(Darabonba::Json && detailMap) { DARABONBA_SET_RVALUE(detailMap_, detailMap) };


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


        // paramList Field Functions 
        bool hasParamList() const { return this->paramList_ != nullptr;};
        void deleteParamList() { this->paramList_ = nullptr;};
        inline const vector<Targets::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Targets::ParamList>) };
        inline vector<Targets::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<Targets::ParamList>) };
        inline Targets& setParamList(const vector<Targets::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
        inline Targets& setParamList(vector<Targets::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


        // pushRetryStrategy Field Functions 
        bool hasPushRetryStrategy() const { return this->pushRetryStrategy_ != nullptr;};
        void deletePushRetryStrategy() { this->pushRetryStrategy_ = nullptr;};
        inline string getPushRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushRetryStrategy_, "") };
        inline Targets& setPushRetryStrategy(string pushRetryStrategy) { DARABONBA_PTR_SET_VALUE(pushRetryStrategy_, pushRetryStrategy) };


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
        shared_ptr<Targets::ConcurrentConfig> concurrentConfig_ {};
        // The dead-letter queue.
        shared_ptr<Targets::DeadLetterQueue> deadLetterQueue_ {};
        // The information about the event target.
        Darabonba::Json detailMap_ {};
        // The endpoint of the event target.
        shared_ptr<string> endpoint_ {};
        // The fault tolerance policy. Valid values: ALL and NONE. ALL: Fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations. NONE: Fault tolerance is not allowed. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
        shared_ptr<string> errorsTolerance_ {};
        // The ID of the event target.
        shared_ptr<string> id_ {};
        // The parameters that are configured for the event target.
        shared_ptr<vector<Targets::ParamList>> paramList_ {};
        // The retry policy that is used to push failed events. Valid values: BACKOFF_RETRY and EXPONENTIAL_DECAY_RETRY. BACKOFF_RETRY: backoff retry. A failed event can be retried up to three times. The interval between two consecutive retries is a random value between 10 seconds and 20 seconds. EXPONENTIAL_DECAY_RETRY: exponential decay retry. A failed event can be retried up to 176 times. The interval between two consecutive retries exponentially increases to a maximum of 512 seconds. The total retry time is 1 day. The specific retry intervals are 1, 2, 4, 8, 16, 32, 64, 128, 256, and 512 seconds. The interval of 512 seconds is used for 167 retries.
        shared_ptr<string> pushRetryStrategy_ {};
        // The transformer that is used to push events.
        shared_ptr<string> pushSelector_ {};
        // The type of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/185887.html).
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createdTimestamp_ == nullptr
        && this->description_ == nullptr && this->eventBusName_ == nullptr && this->filterPattern_ == nullptr && this->ruleARN_ == nullptr && this->ruleName_ == nullptr
        && this->status_ == nullptr && this->targets_ == nullptr; };
      // createdTimestamp Field Functions 
      bool hasCreatedTimestamp() const { return this->createdTimestamp_ != nullptr;};
      void deleteCreatedTimestamp() { this->createdTimestamp_ = nullptr;};
      inline int64_t getCreatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createdTimestamp_, 0L) };
      inline Data& setCreatedTimestamp(int64_t createdTimestamp) { DARABONBA_PTR_SET_VALUE(createdTimestamp_, createdTimestamp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventBusName Field Functions 
      bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
      void deleteEventBusName() { this->eventBusName_ = nullptr;};
      inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
      inline Data& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


      // filterPattern Field Functions 
      bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
      void deleteFilterPattern() { this->filterPattern_ = nullptr;};
      inline string getFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
      inline Data& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


      // ruleARN Field Functions 
      bool hasRuleARN() const { return this->ruleARN_ != nullptr;};
      void deleteRuleARN() { this->ruleARN_ = nullptr;};
      inline string getRuleARN() const { DARABONBA_PTR_GET_DEFAULT(ruleARN_, "") };
      inline Data& setRuleARN(string ruleARN) { DARABONBA_PTR_SET_VALUE(ruleARN_, ruleARN) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Data::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Data::Targets>) };
      inline vector<Data::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Data::Targets>) };
      inline Data& setTargets(const vector<Data::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Data& setTargets(vector<Data::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      // The timestamp that indicates when the event rule was created.
      shared_ptr<int64_t> createdTimestamp_ {};
      // The description of the event rule.
      shared_ptr<string> description_ {};
      // The name of the event bus.
      shared_ptr<string> eventBusName_ {};
      // The event pattern, in JSON format. Valid values: stringEqual and stringExpression. You can specify up to five expressions in the map data structure in each field.
      // 
      // You can specify up to five expressions in the map data structure in each field.
      shared_ptr<string> filterPattern_ {};
      // The Alibaba Cloud Resource Name (ARN) of the event rule.
      shared_ptr<string> ruleARN_ {};
      // The name of the event rule.
      shared_ptr<string> ruleName_ {};
      // The status of the event rule. Valid values: ENABLE (default): The event rule is enabled. DISABLE: The event rule is disabled.
      shared_ptr<string> status_ {};
      // The event targets.
      shared_ptr<vector<Data::Targets>> targets_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuleResponseBody::Data) };
    inline GetRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuleResponseBody::Data) };
    inline GetRuleResponseBody& setData(const GetRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuleResponseBody& setData(GetRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value Success indicates that the request is successful. Other values indicate that the request failed. For a list of error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The returned parameters.
    shared_ptr<GetRuleResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful. If the operation is successful, the value true is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
