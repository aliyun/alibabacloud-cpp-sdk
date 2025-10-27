// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSMAPTASKXATTRS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSMAPTASKXATTRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobsResponseBodyDataJobsMapTaskXAttrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataJobsMapTaskXAttrs& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerSize, consumerSize_);
      DARABONBA_PTR_TO_JSON(DispatcherSize, dispatcherSize_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueueSize, queueSize_);
      DARABONBA_PTR_TO_JSON(TaskAttemptInterval, taskAttemptInterval_);
      DARABONBA_PTR_TO_JSON(TaskMaxAttempt, taskMaxAttempt_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataJobsMapTaskXAttrs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerSize, consumerSize_);
      DARABONBA_PTR_FROM_JSON(DispatcherSize, dispatcherSize_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueueSize, queueSize_);
      DARABONBA_PTR_FROM_JSON(TaskAttemptInterval, taskAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(TaskMaxAttempt, taskMaxAttempt_);
    };
    ListJobsResponseBodyDataJobsMapTaskXAttrs() = default ;
    ListJobsResponseBodyDataJobsMapTaskXAttrs(const ListJobsResponseBodyDataJobsMapTaskXAttrs &) = default ;
    ListJobsResponseBodyDataJobsMapTaskXAttrs(ListJobsResponseBodyDataJobsMapTaskXAttrs &&) = default ;
    ListJobsResponseBodyDataJobsMapTaskXAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataJobsMapTaskXAttrs() = default ;
    ListJobsResponseBodyDataJobsMapTaskXAttrs& operator=(const ListJobsResponseBodyDataJobsMapTaskXAttrs &) = default ;
    ListJobsResponseBodyDataJobsMapTaskXAttrs& operator=(ListJobsResponseBodyDataJobsMapTaskXAttrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerSize_ == nullptr
        && return this->dispatcherSize_ == nullptr && return this->pageSize_ == nullptr && return this->queueSize_ == nullptr && return this->taskAttemptInterval_ == nullptr && return this->taskMaxAttempt_ == nullptr; };
    // consumerSize Field Functions 
    bool hasConsumerSize() const { return this->consumerSize_ != nullptr;};
    void deleteConsumerSize() { this->consumerSize_ = nullptr;};
    inline int32_t consumerSize() const { DARABONBA_PTR_GET_DEFAULT(consumerSize_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setConsumerSize(int32_t consumerSize) { DARABONBA_PTR_SET_VALUE(consumerSize_, consumerSize) };


    // dispatcherSize Field Functions 
    bool hasDispatcherSize() const { return this->dispatcherSize_ != nullptr;};
    void deleteDispatcherSize() { this->dispatcherSize_ = nullptr;};
    inline int32_t dispatcherSize() const { DARABONBA_PTR_GET_DEFAULT(dispatcherSize_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setDispatcherSize(int32_t dispatcherSize) { DARABONBA_PTR_SET_VALUE(dispatcherSize_, dispatcherSize) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queueSize Field Functions 
    bool hasQueueSize() const { return this->queueSize_ != nullptr;};
    void deleteQueueSize() { this->queueSize_ = nullptr;};
    inline int32_t queueSize() const { DARABONBA_PTR_GET_DEFAULT(queueSize_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setQueueSize(int32_t queueSize) { DARABONBA_PTR_SET_VALUE(queueSize_, queueSize) };


    // taskAttemptInterval Field Functions 
    bool hasTaskAttemptInterval() const { return this->taskAttemptInterval_ != nullptr;};
    void deleteTaskAttemptInterval() { this->taskAttemptInterval_ = nullptr;};
    inline int32_t taskAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(taskAttemptInterval_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setTaskAttemptInterval(int32_t taskAttemptInterval) { DARABONBA_PTR_SET_VALUE(taskAttemptInterval_, taskAttemptInterval) };


    // taskMaxAttempt Field Functions 
    bool hasTaskMaxAttempt() const { return this->taskMaxAttempt_ != nullptr;};
    void deleteTaskMaxAttempt() { this->taskMaxAttempt_ = nullptr;};
    inline int32_t taskMaxAttempt() const { DARABONBA_PTR_GET_DEFAULT(taskMaxAttempt_, 0) };
    inline ListJobsResponseBodyDataJobsMapTaskXAttrs& setTaskMaxAttempt(int32_t taskMaxAttempt) { DARABONBA_PTR_SET_VALUE(taskMaxAttempt_, taskMaxAttempt) };


  protected:
    // The number of threads that are triggered by a standalone job at a time. Default value: 5.
    std::shared_ptr<int32_t> consumerSize_ = nullptr;
    // The number of task distribution threads. Default value: 5.
    std::shared_ptr<int32_t> dispatcherSize_ = nullptr;
    // The number of tasks that are pulled by a parallel job at a time. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The maximum number of task queues that can be cached. Default value: 10000.
    std::shared_ptr<int32_t> queueSize_ = nullptr;
    // The interval at which the system retries to run the task after a task failure.
    std::shared_ptr<int32_t> taskAttemptInterval_ = nullptr;
    // The number of retries after a task failure.
    std::shared_ptr<int32_t> taskMaxAttempt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
