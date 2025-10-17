// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATAWORKERPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATAWORKERPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyDataWorkerProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyDataWorkerProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Pulled, pulled_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Running, running_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyDataWorkerProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Pulled, pulled_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Running, running_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
    };
    GetJobExecutionProgressResponseBodyDataWorkerProgress() = default ;
    GetJobExecutionProgressResponseBodyDataWorkerProgress(const GetJobExecutionProgressResponseBodyDataWorkerProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataWorkerProgress(GetJobExecutionProgressResponseBodyDataWorkerProgress &&) = default ;
    GetJobExecutionProgressResponseBodyDataWorkerProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyDataWorkerProgress() = default ;
    GetJobExecutionProgressResponseBodyDataWorkerProgress& operator=(const GetJobExecutionProgressResponseBodyDataWorkerProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataWorkerProgress& operator=(GetJobExecutionProgressResponseBodyDataWorkerProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failed_ == nullptr
        && return this->pulled_ == nullptr && return this->queue_ == nullptr && return this->running_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr
        && return this->traceId_ == nullptr && return this->workerAddr_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // pulled Field Functions 
    bool hasPulled() const { return this->pulled_ != nullptr;};
    void deletePulled() { this->pulled_ = nullptr;};
    inline int32_t pulled() const { DARABONBA_PTR_GET_DEFAULT(pulled_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setPulled(int32_t pulled) { DARABONBA_PTR_SET_VALUE(pulled_, pulled) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline int32_t queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setQueue(int32_t queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int32_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int32_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // workerAddr Field Functions 
    bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
    void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
    inline string workerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
    inline GetJobExecutionProgressResponseBodyDataWorkerProgress& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


  protected:
    std::shared_ptr<int32_t> failed_ = nullptr;
    std::shared_ptr<int32_t> pulled_ = nullptr;
    std::shared_ptr<int32_t> queue_ = nullptr;
    std::shared_ptr<int32_t> running_ = nullptr;
    std::shared_ptr<int32_t> success_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<string> workerAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
