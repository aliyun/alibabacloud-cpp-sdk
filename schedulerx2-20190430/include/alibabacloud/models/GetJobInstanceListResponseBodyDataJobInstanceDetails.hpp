// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINSTANCELISTRESPONSEBODYDATAJOBINSTANCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINSTANCELISTRESPONSEBODYDATAJOBINSTANCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInstanceListResponseBodyDataJobInstanceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInstanceListResponseBodyDataJobInstanceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(WorkAddr, workAddr_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInstanceListResponseBodyDataJobInstanceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(WorkAddr, workAddr_);
    };
    GetJobInstanceListResponseBodyDataJobInstanceDetails() = default ;
    GetJobInstanceListResponseBodyDataJobInstanceDetails(const GetJobInstanceListResponseBodyDataJobInstanceDetails &) = default ;
    GetJobInstanceListResponseBodyDataJobInstanceDetails(GetJobInstanceListResponseBodyDataJobInstanceDetails &&) = default ;
    GetJobInstanceListResponseBodyDataJobInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInstanceListResponseBodyDataJobInstanceDetails() = default ;
    GetJobInstanceListResponseBodyDataJobInstanceDetails& operator=(const GetJobInstanceListResponseBodyDataJobInstanceDetails &) = default ;
    GetJobInstanceListResponseBodyDataJobInstanceDetails& operator=(GetJobInstanceListResponseBodyDataJobInstanceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataTime_ == nullptr
        && return this->endTime_ == nullptr && return this->executor_ == nullptr && return this->instanceId_ == nullptr && return this->jobId_ == nullptr && return this->progress_ == nullptr
        && return this->result_ == nullptr && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->timeType_ == nullptr
        && return this->triggerType_ == nullptr && return this->workAddr_ == nullptr; };
    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // workAddr Field Functions 
    bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
    void deleteWorkAddr() { this->workAddr_ = nullptr;};
    inline string workAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
    inline GetJobInstanceListResponseBodyDataJobInstanceDetails& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


  protected:
    // The data timestamp of the job instance.
    std::shared_ptr<string> dataTime_ = nullptr;
    // The end time of the job execution.
    std::shared_ptr<string> endTime_ = nullptr;
    // The user who executes the job.
    std::shared_ptr<string> executor_ = nullptr;
    // The job instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The job ID.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The progress of the job instance.
    std::shared_ptr<string> progress_ = nullptr;
    // The execution results of the job instance.
    std::shared_ptr<string> result_ = nullptr;
    // The time when the job was scheduled to run.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The start time of the job execution.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the job instance. Valid values:
    // 
    // *   **1**: The job instance is waiting for execution.
    // *   **3**: The job instance is running.
    // *   **4**: The job instance is successful.
    // *   **5**: The job instance failed.
    // *   **9**: The job instance is rejected.
    // 
    // Enumeration class: com.alibaba.schedulerx.common.domain.InstanceStatus
    std::shared_ptr<int32_t> status_ = nullptr;
    // The method that is used to specify the time when to schedule the job instance. Valid values:
    // 
    // *   **1**: cron
    // *   **3**: fix_rate
    // *   **4**: second_delay
    // *   **100**: api
    // 
    // Enumeration class: com.alibaba.schedulerx.common.domain.TimeType
    std::shared_ptr<int32_t> timeType_ = nullptr;
    // The trigger type of the job instance. Valid values:
    // 
    // *   **1**: The job instance was triggered at the scheduled time.
    // *   **2**: The job instance was triggered due to data updates.
    // *   **3**: The job instance was triggered by an API call.
    // *   **4**: The job instance was triggered because it is manually rerun.
    // *   **5**: The job instance was triggered because the system automatically reruns the job instance upon a system exception, such as a database exception.
    // 
    // Enumeration class: com.alibaba.schedulerx.common.domain.TriggerType
    std::shared_ptr<int32_t> triggerType_ = nullptr;
    // The endpoint of the triggered client. The value is in the IP address:Port number format.
    std::shared_ptr<string> workAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
