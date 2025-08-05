// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRuleRequestEventTargetsConcurrentConfig.hpp>
#include <alibabacloud/models/CreateRuleRequestEventTargetsDeadLetterQueue.hpp>
#include <vector>
#include <alibabacloud/models/CreateRuleRequestEventTargetsParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateRuleRequestEventTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestEventTargets& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentConfig, concurrentConfig_);
      DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestEventTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentConfig, concurrentConfig_);
      DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateRuleRequestEventTargets() = default ;
    CreateRuleRequestEventTargets(const CreateRuleRequestEventTargets &) = default ;
    CreateRuleRequestEventTargets(CreateRuleRequestEventTargets &&) = default ;
    CreateRuleRequestEventTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestEventTargets() = default ;
    CreateRuleRequestEventTargets& operator=(const CreateRuleRequestEventTargets &) = default ;
    CreateRuleRequestEventTargets& operator=(CreateRuleRequestEventTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrentConfig_ != nullptr
        && this->deadLetterQueue_ != nullptr && this->endpoint_ != nullptr && this->errorsTolerance_ != nullptr && this->id_ != nullptr && this->paramList_ != nullptr
        && this->pushRetryStrategy_ != nullptr && this->type_ != nullptr; };
    // concurrentConfig Field Functions 
    bool hasConcurrentConfig() const { return this->concurrentConfig_ != nullptr;};
    void deleteConcurrentConfig() { this->concurrentConfig_ = nullptr;};
    inline const Models::CreateRuleRequestEventTargetsConcurrentConfig & concurrentConfig() const { DARABONBA_PTR_GET_CONST(concurrentConfig_, Models::CreateRuleRequestEventTargetsConcurrentConfig) };
    inline Models::CreateRuleRequestEventTargetsConcurrentConfig concurrentConfig() { DARABONBA_PTR_GET(concurrentConfig_, Models::CreateRuleRequestEventTargetsConcurrentConfig) };
    inline CreateRuleRequestEventTargets& setConcurrentConfig(const Models::CreateRuleRequestEventTargetsConcurrentConfig & concurrentConfig) { DARABONBA_PTR_SET_VALUE(concurrentConfig_, concurrentConfig) };
    inline CreateRuleRequestEventTargets& setConcurrentConfig(Models::CreateRuleRequestEventTargetsConcurrentConfig && concurrentConfig) { DARABONBA_PTR_SET_RVALUE(concurrentConfig_, concurrentConfig) };


    // deadLetterQueue Field Functions 
    bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
    void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
    inline const Models::CreateRuleRequestEventTargetsDeadLetterQueue & deadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, Models::CreateRuleRequestEventTargetsDeadLetterQueue) };
    inline Models::CreateRuleRequestEventTargetsDeadLetterQueue deadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, Models::CreateRuleRequestEventTargetsDeadLetterQueue) };
    inline CreateRuleRequestEventTargets& setDeadLetterQueue(const Models::CreateRuleRequestEventTargetsDeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
    inline CreateRuleRequestEventTargets& setDeadLetterQueue(Models::CreateRuleRequestEventTargetsDeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateRuleRequestEventTargets& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline CreateRuleRequestEventTargets& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateRuleRequestEventTargets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::CreateRuleRequestEventTargetsParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::CreateRuleRequestEventTargetsParamList>) };
    inline vector<Models::CreateRuleRequestEventTargetsParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::CreateRuleRequestEventTargetsParamList>) };
    inline CreateRuleRequestEventTargets& setParamList(const vector<Models::CreateRuleRequestEventTargetsParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline CreateRuleRequestEventTargets& setParamList(vector<Models::CreateRuleRequestEventTargetsParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // pushRetryStrategy Field Functions 
    bool hasPushRetryStrategy() const { return this->pushRetryStrategy_ != nullptr;};
    void deletePushRetryStrategy() { this->pushRetryStrategy_ = nullptr;};
    inline string pushRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushRetryStrategy_, "") };
    inline CreateRuleRequestEventTargets& setPushRetryStrategy(string pushRetryStrategy) { DARABONBA_PTR_SET_VALUE(pushRetryStrategy_, pushRetryStrategy) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRuleRequestEventTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The concurrency configuration.
    std::shared_ptr<Models::CreateRuleRequestEventTargetsConcurrentConfig> concurrentConfig_ = nullptr;
    // The dead-letter queue. Events that are not processed or whose maximum number of retries is exceeded are written to the dead-letter queue. You can use queues in ApsaraMQ for RocketMQ, Simple Message Queue (SMQ, formerly MNS), and ApsaraMQ for Kafka as dead-letter queues. You can also use event buses in EventBridge as dead-letter queues.
    std::shared_ptr<Models::CreateRuleRequestEventTargetsDeadLetterQueue> deadLetterQueue_ = nullptr;
    // The endpoint of the event target.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The fault tolerance policy. Valid values: ALL and NONE. The value ALL specifies that fault tolerance is allowed. If an error occurs in an event, event processing is not blocked. If the event fails to be sent after the maximum number of retries specified by the retry policy is reached, the event is delivered to the dead-letter queue or discarded based on your configurations. The value NONE specifies that fault tolerance is not allowed. If an error occurs in an event and the event fails to be sent after the maximum number of retries specified by the retry policy is reached, event processing is blocked.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The ID of the event target.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The parameters that are configured for the event target.
    std::shared_ptr<vector<Models::CreateRuleRequestEventTargetsParamList>> paramList_ = nullptr;
    // The retry policy that you want to use to push failed events. Valid values: BACKOFF_RETRY and EXPONENTIAL_DECAY_RETRY. BACKOFF_RETRY: A failed event can be retried up to three times. The interval between two consecutive retries is a random value from 10 seconds to 20 seconds. EXPONENTIAL_DECAY_RETRY: A failed event can be retried up to 176 times. The interval between two consecutive retries exponentially increases to a maximum of 512 seconds. The total retry time is 1 day. The specific retry intervals are 1, 2, 4, 8, 16, 32, 64, 128, 256, and 512 seconds. The interval of 512 seconds is used for 167 retries.
    std::shared_ptr<string> pushRetryStrategy_ = nullptr;
    // The type of the event target. For more information, see [Event target parameters](https://help.aliyun.com/document_detail/185887.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
