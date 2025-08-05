// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTRUNOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestRunOptionsBatchWindow.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestRunOptionsBusinessOption.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestRunOptionsDeadLetterQueue.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestRunOptionsRetryStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestRunOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestRunOptions& obj) { 
      DARABONBA_PTR_TO_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_TO_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_TO_JSON(Throttling, throttling_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestRunOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_FROM_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_FROM_JSON(Throttling, throttling_);
    };
    CreateEventStreamingRequestRunOptions() = default ;
    CreateEventStreamingRequestRunOptions(const CreateEventStreamingRequestRunOptions &) = default ;
    CreateEventStreamingRequestRunOptions(CreateEventStreamingRequestRunOptions &&) = default ;
    CreateEventStreamingRequestRunOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestRunOptions() = default ;
    CreateEventStreamingRequestRunOptions& operator=(const CreateEventStreamingRequestRunOptions &) = default ;
    CreateEventStreamingRequestRunOptions& operator=(CreateEventStreamingRequestRunOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchWindow_ != nullptr
        && this->businessOption_ != nullptr && this->deadLetterQueue_ != nullptr && this->errorsTolerance_ != nullptr && this->maximumTasks_ != nullptr && this->retryStrategy_ != nullptr
        && this->throttling_ != nullptr; };
    // batchWindow Field Functions 
    bool hasBatchWindow() const { return this->batchWindow_ != nullptr;};
    void deleteBatchWindow() { this->batchWindow_ = nullptr;};
    inline const Models::CreateEventStreamingRequestRunOptionsBatchWindow & batchWindow() const { DARABONBA_PTR_GET_CONST(batchWindow_, Models::CreateEventStreamingRequestRunOptionsBatchWindow) };
    inline Models::CreateEventStreamingRequestRunOptionsBatchWindow batchWindow() { DARABONBA_PTR_GET(batchWindow_, Models::CreateEventStreamingRequestRunOptionsBatchWindow) };
    inline CreateEventStreamingRequestRunOptions& setBatchWindow(const Models::CreateEventStreamingRequestRunOptionsBatchWindow & batchWindow) { DARABONBA_PTR_SET_VALUE(batchWindow_, batchWindow) };
    inline CreateEventStreamingRequestRunOptions& setBatchWindow(Models::CreateEventStreamingRequestRunOptionsBatchWindow && batchWindow) { DARABONBA_PTR_SET_RVALUE(batchWindow_, batchWindow) };


    // businessOption Field Functions 
    bool hasBusinessOption() const { return this->businessOption_ != nullptr;};
    void deleteBusinessOption() { this->businessOption_ = nullptr;};
    inline const Models::CreateEventStreamingRequestRunOptionsBusinessOption & businessOption() const { DARABONBA_PTR_GET_CONST(businessOption_, Models::CreateEventStreamingRequestRunOptionsBusinessOption) };
    inline Models::CreateEventStreamingRequestRunOptionsBusinessOption businessOption() { DARABONBA_PTR_GET(businessOption_, Models::CreateEventStreamingRequestRunOptionsBusinessOption) };
    inline CreateEventStreamingRequestRunOptions& setBusinessOption(const Models::CreateEventStreamingRequestRunOptionsBusinessOption & businessOption) { DARABONBA_PTR_SET_VALUE(businessOption_, businessOption) };
    inline CreateEventStreamingRequestRunOptions& setBusinessOption(Models::CreateEventStreamingRequestRunOptionsBusinessOption && businessOption) { DARABONBA_PTR_SET_RVALUE(businessOption_, businessOption) };


    // deadLetterQueue Field Functions 
    bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
    void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
    inline const Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue & deadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue) };
    inline Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue deadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue) };
    inline CreateEventStreamingRequestRunOptions& setDeadLetterQueue(const Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
    inline CreateEventStreamingRequestRunOptions& setDeadLetterQueue(Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline CreateEventStreamingRequestRunOptions& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // maximumTasks Field Functions 
    bool hasMaximumTasks() const { return this->maximumTasks_ != nullptr;};
    void deleteMaximumTasks() { this->maximumTasks_ = nullptr;};
    inline int64_t maximumTasks() const { DARABONBA_PTR_GET_DEFAULT(maximumTasks_, 0L) };
    inline CreateEventStreamingRequestRunOptions& setMaximumTasks(int64_t maximumTasks) { DARABONBA_PTR_SET_VALUE(maximumTasks_, maximumTasks) };


    // retryStrategy Field Functions 
    bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
    void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
    inline const Models::CreateEventStreamingRequestRunOptionsRetryStrategy & retryStrategy() const { DARABONBA_PTR_GET_CONST(retryStrategy_, Models::CreateEventStreamingRequestRunOptionsRetryStrategy) };
    inline Models::CreateEventStreamingRequestRunOptionsRetryStrategy retryStrategy() { DARABONBA_PTR_GET(retryStrategy_, Models::CreateEventStreamingRequestRunOptionsRetryStrategy) };
    inline CreateEventStreamingRequestRunOptions& setRetryStrategy(const Models::CreateEventStreamingRequestRunOptionsRetryStrategy & retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };
    inline CreateEventStreamingRequestRunOptions& setRetryStrategy(Models::CreateEventStreamingRequestRunOptionsRetryStrategy && retryStrategy) { DARABONBA_PTR_SET_RVALUE(retryStrategy_, retryStrategy) };


    // throttling Field Functions 
    bool hasThrottling() const { return this->throttling_ != nullptr;};
    void deleteThrottling() { this->throttling_ = nullptr;};
    inline int32_t throttling() const { DARABONBA_PTR_GET_DEFAULT(throttling_, 0) };
    inline CreateEventStreamingRequestRunOptions& setThrottling(int32_t throttling) { DARABONBA_PTR_SET_VALUE(throttling_, throttling) };


  protected:
    // The batch window.
    std::shared_ptr<Models::CreateEventStreamingRequestRunOptionsBatchWindow> batchWindow_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestRunOptionsBusinessOption> businessOption_ = nullptr;
    // Specifies whether to enable dead-letter queues. By default, dead-letter queues are disabled. Messages that fail to be pushed after the allowed retries as specified by the retry policy are discarded.
    std::shared_ptr<Models::CreateEventStreamingRequestRunOptionsDeadLetterQueue> deadLetterQueue_ = nullptr;
    // The exception tolerance policy. Valid values:
    // 
    // *   NONE: does not tolerate exceptions.
    // *   ALL: tolerates all exceptions.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The maximum number of concurrent tasks.
    std::shared_ptr<int64_t> maximumTasks_ = nullptr;
    // The retry policy that you want to use if events fail to be pushed.
    std::shared_ptr<Models::CreateEventStreamingRequestRunOptionsRetryStrategy> retryStrategy_ = nullptr;
    std::shared_ptr<int32_t> throttling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
