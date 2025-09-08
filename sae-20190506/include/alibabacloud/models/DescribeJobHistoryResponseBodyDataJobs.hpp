// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODYDATAJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODYDATAJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobHistoryResponseBodyDataJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobHistoryResponseBodyDataJobs& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Succeeded, succeeded_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobHistoryResponseBodyDataJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Succeeded, succeeded_);
    };
    DescribeJobHistoryResponseBodyDataJobs() = default ;
    DescribeJobHistoryResponseBodyDataJobs(const DescribeJobHistoryResponseBodyDataJobs &) = default ;
    DescribeJobHistoryResponseBodyDataJobs(DescribeJobHistoryResponseBodyDataJobs &&) = default ;
    DescribeJobHistoryResponseBodyDataJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobHistoryResponseBodyDataJobs() = default ;
    DescribeJobHistoryResponseBodyDataJobs& operator=(const DescribeJobHistoryResponseBodyDataJobs &) = default ;
    DescribeJobHistoryResponseBodyDataJobs& operator=(DescribeJobHistoryResponseBodyDataJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->completionTime_ != nullptr && this->failed_ != nullptr && this->jobId_ != nullptr && this->message_ != nullptr && this->startTime_ != nullptr
        && this->state_ != nullptr && this->succeeded_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline DescribeJobHistoryResponseBodyDataJobs& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // completionTime Field Functions 
    bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
    void deleteCompletionTime() { this->completionTime_ = nullptr;};
    inline int64_t completionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, 0L) };
    inline DescribeJobHistoryResponseBodyDataJobs& setCompletionTime(int64_t completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int64_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
    inline DescribeJobHistoryResponseBodyDataJobs& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobHistoryResponseBodyDataJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobHistoryResponseBodyDataJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeJobHistoryResponseBodyDataJobs& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeJobHistoryResponseBodyDataJobs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline int64_t succeeded() const { DARABONBA_PTR_GET_DEFAULT(succeeded_, 0L) };
    inline DescribeJobHistoryResponseBodyDataJobs& setSucceeded(int64_t succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };


  protected:
    // The number of running instances.
    std::shared_ptr<int64_t> active_ = nullptr;
    // The time when the job was executed.
    std::shared_ptr<int64_t> completionTime_ = nullptr;
    // The number of instances that failed to run.
    std::shared_ptr<int64_t> failed_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The message returned if exceptions occur during job running.
    std::shared_ptr<string> message_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **0**: The job was not executed.
    // *   **1**: The job was executed.
    // *   **2**: The job failed to be executed.
    // *   **3**: The job is being executed.
    std::shared_ptr<string> state_ = nullptr;
    // The number of instances that are successfully run.
    std::shared_ptr<int64_t> succeeded_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
