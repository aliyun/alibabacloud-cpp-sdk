// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATARUNOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATARUNOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataRunOptionsBatchWindow.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataRunOptionsBusinessOption.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataRunOptionsRetryStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataRunOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataRunOptions& obj) { 
      DARABONBA_PTR_TO_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_TO_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_TO_JSON(Throttling, throttling_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataRunOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_FROM_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_FROM_JSON(Throttling, throttling_);
    };
    GetEventStreamingResponseBodyDataRunOptions() = default ;
    GetEventStreamingResponseBodyDataRunOptions(const GetEventStreamingResponseBodyDataRunOptions &) = default ;
    GetEventStreamingResponseBodyDataRunOptions(GetEventStreamingResponseBodyDataRunOptions &&) = default ;
    GetEventStreamingResponseBodyDataRunOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataRunOptions() = default ;
    GetEventStreamingResponseBodyDataRunOptions& operator=(const GetEventStreamingResponseBodyDataRunOptions &) = default ;
    GetEventStreamingResponseBodyDataRunOptions& operator=(GetEventStreamingResponseBodyDataRunOptions &&) = default ;
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
    inline const Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow & batchWindow() const { DARABONBA_PTR_GET_CONST(batchWindow_, Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow) };
    inline Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow batchWindow() { DARABONBA_PTR_GET(batchWindow_, Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow) };
    inline GetEventStreamingResponseBodyDataRunOptions& setBatchWindow(const Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow & batchWindow) { DARABONBA_PTR_SET_VALUE(batchWindow_, batchWindow) };
    inline GetEventStreamingResponseBodyDataRunOptions& setBatchWindow(Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow && batchWindow) { DARABONBA_PTR_SET_RVALUE(batchWindow_, batchWindow) };


    // businessOption Field Functions 
    bool hasBusinessOption() const { return this->businessOption_ != nullptr;};
    void deleteBusinessOption() { this->businessOption_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption & businessOption() const { DARABONBA_PTR_GET_CONST(businessOption_, Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption) };
    inline Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption businessOption() { DARABONBA_PTR_GET(businessOption_, Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption) };
    inline GetEventStreamingResponseBodyDataRunOptions& setBusinessOption(const Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption & businessOption) { DARABONBA_PTR_SET_VALUE(businessOption_, businessOption) };
    inline GetEventStreamingResponseBodyDataRunOptions& setBusinessOption(Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption && businessOption) { DARABONBA_PTR_SET_RVALUE(businessOption_, businessOption) };


    // deadLetterQueue Field Functions 
    bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
    void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue & deadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue) };
    inline Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue deadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue) };
    inline GetEventStreamingResponseBodyDataRunOptions& setDeadLetterQueue(const Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
    inline GetEventStreamingResponseBodyDataRunOptions& setDeadLetterQueue(Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline GetEventStreamingResponseBodyDataRunOptions& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // maximumTasks Field Functions 
    bool hasMaximumTasks() const { return this->maximumTasks_ != nullptr;};
    void deleteMaximumTasks() { this->maximumTasks_ = nullptr;};
    inline int32_t maximumTasks() const { DARABONBA_PTR_GET_DEFAULT(maximumTasks_, 0) };
    inline GetEventStreamingResponseBodyDataRunOptions& setMaximumTasks(int32_t maximumTasks) { DARABONBA_PTR_SET_VALUE(maximumTasks_, maximumTasks) };


    // retryStrategy Field Functions 
    bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
    void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy & retryStrategy() const { DARABONBA_PTR_GET_CONST(retryStrategy_, Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy) };
    inline Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy retryStrategy() { DARABONBA_PTR_GET(retryStrategy_, Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy) };
    inline GetEventStreamingResponseBodyDataRunOptions& setRetryStrategy(const Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy & retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };
    inline GetEventStreamingResponseBodyDataRunOptions& setRetryStrategy(Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy && retryStrategy) { DARABONBA_PTR_SET_RVALUE(retryStrategy_, retryStrategy) };


    // throttling Field Functions 
    bool hasThrottling() const { return this->throttling_ != nullptr;};
    void deleteThrottling() { this->throttling_ = nullptr;};
    inline int32_t throttling() const { DARABONBA_PTR_GET_DEFAULT(throttling_, 0) };
    inline GetEventStreamingResponseBodyDataRunOptions& setThrottling(int32_t throttling) { DARABONBA_PTR_SET_VALUE(throttling_, throttling) };


  protected:
    // The batch window.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataRunOptionsBatchWindow> batchWindow_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataRunOptionsBusinessOption> businessOption_ = nullptr;
    // Indicates whether dead-letter queues are enabled. By default, dead-letter queues are disabled. Messages that fail to be pushed after allowed retries as specified by the retry policy are discarded.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataRunOptionsDeadLetterQueue> deadLetterQueue_ = nullptr;
    // The fault tolerance policy. The value NONE specifies that faults are not tolerated, and the value All specifies that all faults are tolerated.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The concurrency level.
    std::shared_ptr<int32_t> maximumTasks_ = nullptr;
    // The information about the retry policy that is used if the event fails to be pushed.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataRunOptionsRetryStrategy> retryStrategy_ = nullptr;
    std::shared_ptr<int32_t> throttling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
