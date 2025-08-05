// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsRunOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& obj) { 
      DARABONBA_PTR_TO_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_TO_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_TO_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_TO_JSON(Throttling, throttling_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchWindow, batchWindow_);
      DARABONBA_PTR_FROM_JSON(BusinessOption, businessOption_);
      DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
      DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
      DARABONBA_PTR_FROM_JSON(MaximumTasks, maximumTasks_);
      DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
      DARABONBA_PTR_FROM_JSON(Throttling, throttling_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptions &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions(ListEventStreamingsResponseBodyDataEventStreamingsRunOptions &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptions() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptions &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& operator=(ListEventStreamingsResponseBodyDataEventStreamingsRunOptions &&) = default ;
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
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow & batchWindow() const { DARABONBA_PTR_GET_CONST(batchWindow_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow batchWindow() { DARABONBA_PTR_GET(batchWindow_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setBatchWindow(const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow & batchWindow) { DARABONBA_PTR_SET_VALUE(batchWindow_, batchWindow) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setBatchWindow(Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow && batchWindow) { DARABONBA_PTR_SET_RVALUE(batchWindow_, batchWindow) };


    // businessOption Field Functions 
    bool hasBusinessOption() const { return this->businessOption_ != nullptr;};
    void deleteBusinessOption() { this->businessOption_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption & businessOption() const { DARABONBA_PTR_GET_CONST(businessOption_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption businessOption() { DARABONBA_PTR_GET(businessOption_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setBusinessOption(const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption & businessOption) { DARABONBA_PTR_SET_VALUE(businessOption_, businessOption) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setBusinessOption(Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption && businessOption) { DARABONBA_PTR_SET_RVALUE(businessOption_, businessOption) };


    // deadLetterQueue Field Functions 
    bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
    void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue & deadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue deadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setDeadLetterQueue(const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setDeadLetterQueue(Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


    // errorsTolerance Field Functions 
    bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
    void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
    inline string errorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


    // maximumTasks Field Functions 
    bool hasMaximumTasks() const { return this->maximumTasks_ != nullptr;};
    void deleteMaximumTasks() { this->maximumTasks_ = nullptr;};
    inline int32_t maximumTasks() const { DARABONBA_PTR_GET_DEFAULT(maximumTasks_, 0) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setMaximumTasks(int32_t maximumTasks) { DARABONBA_PTR_SET_VALUE(maximumTasks_, maximumTasks) };


    // retryStrategy Field Functions 
    bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
    void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy & retryStrategy() const { DARABONBA_PTR_GET_CONST(retryStrategy_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy retryStrategy() { DARABONBA_PTR_GET(retryStrategy_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setRetryStrategy(const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy & retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setRetryStrategy(Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy && retryStrategy) { DARABONBA_PTR_SET_RVALUE(retryStrategy_, retryStrategy) };


    // throttling Field Functions 
    bool hasThrottling() const { return this->throttling_ != nullptr;};
    void deleteThrottling() { this->throttling_ = nullptr;};
    inline int32_t throttling() const { DARABONBA_PTR_GET_DEFAULT(throttling_, 0) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptions& setThrottling(int32_t throttling) { DARABONBA_PTR_SET_VALUE(throttling_, throttling) };


  protected:
    // The batch window.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow> batchWindow_ = nullptr;
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBusinessOption> businessOption_ = nullptr;
    // Indicates whether dead-letter queues are enabled. By default, dead-letter queues are disabled. Events that fail to be pushed are discarded after the maximum number of retries that is specified by the retry policy is reached.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue> deadLetterQueue_ = nullptr;
    // The exception tolerance policy. Valid values: NONE and ALL.
    std::shared_ptr<string> errorsTolerance_ = nullptr;
    // The maximum number of concurrent tasks.
    std::shared_ptr<int32_t> maximumTasks_ = nullptr;
    // The retry policy that is used if events fail to be pushed.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsRetryStrategy> retryStrategy_ = nullptr;
    std::shared_ptr<int32_t> throttling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
