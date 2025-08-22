// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATATASKPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATATASKPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyDataTaskProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyDataTaskProgress& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pulled, pulled_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Running, running_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyDataTaskProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pulled, pulled_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Running, running_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetJobExecutionProgressResponseBodyDataTaskProgress() = default ;
    GetJobExecutionProgressResponseBodyDataTaskProgress(const GetJobExecutionProgressResponseBodyDataTaskProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataTaskProgress(GetJobExecutionProgressResponseBodyDataTaskProgress &&) = default ;
    GetJobExecutionProgressResponseBodyDataTaskProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyDataTaskProgress() = default ;
    GetJobExecutionProgressResponseBodyDataTaskProgress& operator=(const GetJobExecutionProgressResponseBodyDataTaskProgress &) = default ;
    GetJobExecutionProgressResponseBodyDataTaskProgress& operator=(GetJobExecutionProgressResponseBodyDataTaskProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failed_ != nullptr
        && this->name_ != nullptr && this->pulled_ != nullptr && this->queue_ != nullptr && this->running_ != nullptr && this->success_ != nullptr
        && this->total_ != nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int32_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pulled Field Functions 
    bool hasPulled() const { return this->pulled_ != nullptr;};
    void deletePulled() { this->pulled_ = nullptr;};
    inline int32_t pulled() const { DARABONBA_PTR_GET_DEFAULT(pulled_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setPulled(int32_t pulled) { DARABONBA_PTR_SET_VALUE(pulled_, pulled) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline int32_t queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setQueue(int32_t queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // running Field Functions 
    bool hasRunning() const { return this->running_ != nullptr;};
    void deleteRunning() { this->running_ = nullptr;};
    inline int32_t running() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int32_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetJobExecutionProgressResponseBodyDataTaskProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> failed_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pulled_ = nullptr;
    std::shared_ptr<int32_t> queue_ = nullptr;
    std::shared_ptr<int32_t> running_ = nullptr;
    std::shared_ptr<int32_t> success_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
