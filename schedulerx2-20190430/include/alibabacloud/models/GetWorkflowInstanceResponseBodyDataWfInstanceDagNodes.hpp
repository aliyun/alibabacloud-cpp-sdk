// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEDAGNODES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATAWFINSTANCEDAGNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Attempt, attempt_);
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobInstanceId, jobInstanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkAddr, workAddr_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Attempt, attempt_);
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobInstanceId, jobInstanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkAddr, workAddr_);
    };
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes(const GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes(GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes &&) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes() = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& operator=(const GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes &) = default ;
    GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& operator=(GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attempt_ == nullptr
        && return this->dataTime_ == nullptr && return this->endTime_ == nullptr && return this->jobId_ == nullptr && return this->jobInstanceId_ == nullptr && return this->jobName_ == nullptr
        && return this->result_ == nullptr && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->workAddr_ == nullptr; };
    // attempt Field Functions 
    bool hasAttempt() const { return this->attempt_ != nullptr;};
    void deleteAttempt() { this->attempt_ = nullptr;};
    inline int32_t attempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobInstanceId Field Functions 
    bool hasJobInstanceId() const { return this->jobInstanceId_ != nullptr;};
    void deleteJobInstanceId() { this->jobInstanceId_ = nullptr;};
    inline int64_t jobInstanceId() const { DARABONBA_PTR_GET_DEFAULT(jobInstanceId_, 0L) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setJobInstanceId(int64_t jobInstanceId) { DARABONBA_PTR_SET_VALUE(jobInstanceId_, jobInstanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workAddr Field Functions 
    bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
    void deleteWorkAddr() { this->workAddr_ = nullptr;};
    inline string workAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
    inline GetWorkflowInstanceResponseBodyDataWfInstanceDagNodes& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


  protected:
    // The number of retries when the job failed.
    std::shared_ptr<int32_t> attempt_ = nullptr;
    // The data timestamp of the job.
    std::shared_ptr<string> dataTime_ = nullptr;
    // The time when the job stopped running.
    std::shared_ptr<string> endTime_ = nullptr;
    // The job ID.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The ID of the job instance.
    std::shared_ptr<int64_t> jobInstanceId_ = nullptr;
    // The job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // The execution result of the job.
    std::shared_ptr<string> result_ = nullptr;
    // The time when the job was scheduled.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The time when the job started to run.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the job instance. Valid values: 1: The job instance is waiting for execution. 3: The job instance is running. 4: The job instance is run. 5: The job instance failed to run. 9: The job instance is rejected. Enumeration class: com.alibaba.schedulerx.common.domain.InstanceStatus.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The worker on which the job instance run.
    std::shared_ptr<string> workAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
