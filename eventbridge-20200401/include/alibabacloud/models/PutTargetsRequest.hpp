// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTTARGETSREQUEST_HPP_
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
  class PutTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PutTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    PutTargetsRequest() = default ;
    PutTargetsRequest(const PutTargetsRequest &) = default ;
    PutTargetsRequest(PutTargetsRequest &&) = default ;
    PutTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTargetsRequest() = default ;
    PutTargetsRequest& operator=(const PutTargetsRequest &) = default ;
    PutTargetsRequest& operator=(PutTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(ConcurrentConfig, concurrentConfig_);
        DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(ConcurrentConfig, concurrentConfig_);
        DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
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
        // The format of input parameters for the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/185887.html).
        shared_ptr<string> form_ {};
        // The resource key of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/185887.html).
        shared_ptr<string> resourceKey_ {};
        // The structure of the template for the event target.
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
        // The Alibaba Cloud Resource Name (ARN) of the dead-letter queue. Events that are not processed or whose maximum retries are exceeded are written to the dead-letter queue.
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
        // The concurrency.
        shared_ptr<int64_t> concurrency_ {};
      };

      virtual bool empty() const override { return this->concurrentConfig_ == nullptr
        && this->deadLetterQueue_ == nullptr && this->endpoint_ == nullptr && this->errorsTolerance_ == nullptr && this->id_ == nullptr && this->paramList_ == nullptr
        && this->pushRetryStrategy_ == nullptr && this->type_ == nullptr; };
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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Targets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The concurrency configuration.
      shared_ptr<Targets::ConcurrentConfig> concurrentConfig_ {};
      // The dead-letter queue. Events that are not processed or whose maximum retries are exceeded are written to the dead-letter queue. You can use queues in ApsaraMQ for RocketMQ, Simple Message Queue (SMQ, formerly MNS), and ApsaraMQ for Kafka as dead-letter queues. You can also use event buses in EventBridge as dead-letter queues.
      shared_ptr<Targets::DeadLetterQueue> deadLetterQueue_ {};
      // The endpoint of the event target.
      shared_ptr<string> endpoint_ {};
      // The fault tolerance policy. Valid values:
      // 
      // *   **ALL**: allows fault tolerance. If an error occurs, event processing is not blocked. If the message exceeds the number of retries specified by the retry policy, the message is delivered to a dead-letter queue or discarded based on your configurations.
      // *   **NONE**: prohibits fault tolerance. If an error occurs and the message exceeds the number of retries specified by the retry policy, event processing is blocked.
      shared_ptr<string> errorsTolerance_ {};
      // The ID of the event target.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The parameters that are configured for the event target.
      shared_ptr<vector<Targets::ParamList>> paramList_ {};
      // The retry policy to be used to push events. Valid values:
      // 
      // *   **BACKOFF_RETRY**: backoff retry. A failed event can be retried up to three times. The interval between two consecutive retries is a random value from 10 seconds to 20 seconds.
      // *   **EXPONENTIAL_DECAY_RETRY**: exponential decay retry. A failed event can be retried up to 176 times. The interval between two consecutive retries exponentially increases to a maximum of 512 seconds. The total retry time is 1 day. The specific retry intervals are 1, 2, 4, 8, 16, 32, 64, 128, 256, and 512 seconds. The interval of 512 seconds is used for 167 retries.
      shared_ptr<string> pushRetryStrategy_ {};
      // The type of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/185887.html).
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->eventBusName_ == nullptr
        && this->ruleName_ == nullptr && this->targets_ == nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline PutTargetsRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<PutTargetsRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<PutTargetsRequest::Targets>) };
    inline vector<PutTargetsRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<PutTargetsRequest::Targets>) };
    inline PutTargetsRequest& setTargets(const vector<PutTargetsRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PutTargetsRequest& setTargets(vector<PutTargetsRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    shared_ptr<string> eventBusName_ {};
    // The name of the event rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The event targets to be created or updated. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    // 
    // This parameter is required.
    shared_ptr<vector<PutTargetsRequest::Targets>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
