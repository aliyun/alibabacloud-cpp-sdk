// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchWindow.hpp>
#include <alibabacloud/models/DeadLetterQueue.hpp>
#include <alibabacloud/models/RetryStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RunOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunOptions& obj) { 
      DARABONBA_PTR_TO_JSON(batchWindow, batchWindow_);
      DARABONBA_PTR_TO_JSON(deadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_TO_JSON(errorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(retryStrategy, retryStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, RunOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(batchWindow, batchWindow_);
      DARABONBA_PTR_FROM_JSON(deadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_FROM_JSON(errorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(retryStrategy, retryStrategy_);
    };
    RunOptions() = default ;
    RunOptions(const RunOptions &) = default ;
    RunOptions(RunOptions &&) = default ;
    RunOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunOptions() = default ;
    RunOptions& operator=(const RunOptions &) = default ;
    RunOptions& operator=(RunOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchWindow_ == nullptr
        && this->deadLetterQueue_ == nullptr && this->errorsTolerance_ == nullptr && this->mode_ == nullptr && this->retryStrategy_ == nullptr; };
    // batchWindow Field Functions 
    bool hasBatchWindow() const { return this->batchWindow_ != nullptr;};
    void deleteBatchWindow() { this->batchWindow_ = nullptr;};
    inline const BatchWindow & getBatchWindow() const { DARABONBA_PTR_GET_CONST(batchWindow_, BatchWindow) };
    inline BatchWindow getBatchWindow() { DARABONBA_PTR_GET(batchWindow_, BatchWindow) };
    inline RunOptions& setBatchWindow(const BatchWindow & batchWindow) { DARABONBA_PTR_SET_VALUE(batchWindow_, batchWindow) };
    inline RunOptions& setBatchWindow(BatchWindow && batchWindow) { DARABONBA_PTR_SET_RVALUE(batchWindow_, batchWindow) };


    // deadLetterQueue Field Functions 
    bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
    void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
    inline const DeadLetterQueue & getDeadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, DeadLetterQueue) };
    inline DeadLetterQueue getDeadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, DeadLetterQueue) };
    inline RunOptions& setDeadLetterQueue(const DeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
    inline RunOptions& setDeadLetterQueue(DeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string getErrorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline RunOptions& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RunOptions& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // retryStrategy Field Functions 
    bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
    void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
    inline const RetryStrategy & getRetryStrategy() const { DARABONBA_PTR_GET_CONST(retryStrategy_, RetryStrategy) };
    inline RetryStrategy getRetryStrategy() { DARABONBA_PTR_GET(retryStrategy_, RetryStrategy) };
    inline RunOptions& setRetryStrategy(const RetryStrategy & retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };
    inline RunOptions& setRetryStrategy(RetryStrategy && retryStrategy) { DARABONBA_PTR_SET_RVALUE(retryStrategy_, retryStrategy) };


  protected:
    // The batch window configurations.
    shared_ptr<BatchWindow> batchWindow_ {};
    // Whether to enable dead-letter queues. If you configure this parameter, dead-letter queues are enabled. By default, dead-letter queues are not enabled and messages are discarded when the retry policy is exhausted. Queues of Simple Message Queue (formerly MNS), ApsaraMQ for RocketMQ, and ApsaraMQ for Kafka, and EventBridge event buses can be used as dead-letter queues.
    shared_ptr<DeadLetterQueue> deadLetterQueue_ {};
    // The fault tolerance policy. Valid values:
    // 
    // *   **NONE**: does not tolerate exceptions.
    // *   **ALL**: tolerates all exceptions.
    // 
    // >  The default value is **NONE**.
    shared_ptr<string> errorsTolerance_ {};
    // The underlying application mode when message data is pushed to Function Compute. Valid values:
    // 
    // *   **event-streaming**: the event streaming mode. In this mode, events are pushed in arrays. One or more message events are pushed to the function in batches based on your push configurations. This mode is suitable for end-to-end streaming data processing scenarios. The event streaming mode supports the following event sources: Simple Message Queue (formerly MNS), ApsaraMQ for RocketMQ, ApsaraMQ for RabbitMQ, ApsaraMQ for Kafka, ApsaraMQ for MQTT, and Data Transmission Service (DTS).
    // *   **event-driven**: the event mode. In event mode, a single message is passed to the function as event parameters at a time. Events follow the CloudEvents specifications. The event mode supports the following event sources: Default, Simple Message Queue (formerly MNS), ApsaraMQ for RocketMQ, and ApsaraMQ for RabbitMQ. In this mode, batch configurations are not supported.
    shared_ptr<string> mode_ {};
    // The retry policy that you want to use if events fail to be pushed.
    shared_ptr<RetryStrategy> retryStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
