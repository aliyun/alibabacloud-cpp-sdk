// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobInstanceResponseBody() = default ;
    GetJobInstanceResponseBody(const GetJobInstanceResponseBody &) = default ;
    GetJobInstanceResponseBody(GetJobInstanceResponseBody &&) = default ;
    GetJobInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInstanceResponseBody() = default ;
    GetJobInstanceResponseBody& operator=(const GetJobInstanceResponseBody &) = default ;
    GetJobInstanceResponseBody& operator=(GetJobInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobInstanceDetail, jobInstanceDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobInstanceDetail, jobInstanceDetail_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobInstanceDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobInstanceDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Executor, executor_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeType, timeType_);
          DARABONBA_PTR_TO_JSON(TraceId, traceId_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(WorkAddr, workAddr_);
        };
        friend void from_json(const Darabonba::Json& j, JobInstanceDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Executor, executor_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
          DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(WorkAddr, workAddr_);
        };
        JobInstanceDetail() = default ;
        JobInstanceDetail(const JobInstanceDetail &) = default ;
        JobInstanceDetail(JobInstanceDetail &&) = default ;
        JobInstanceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobInstanceDetail() = default ;
        JobInstanceDetail& operator=(const JobInstanceDetail &) = default ;
        JobInstanceDetail& operator=(JobInstanceDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataTime_ == nullptr
        && this->endTime_ == nullptr && this->executor_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr
        && this->parameters_ == nullptr && this->progress_ == nullptr && this->result_ == nullptr && this->scheduleTime_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->timeType_ == nullptr && this->traceId_ == nullptr && this->triggerType_ == nullptr && this->workAddr_ == nullptr; };
        // dataTime Field Functions 
        bool hasDataTime() const { return this->dataTime_ != nullptr;};
        void deleteDataTime() { this->dataTime_ = nullptr;};
        inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
        inline JobInstanceDetail& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline JobInstanceDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // executor Field Functions 
        bool hasExecutor() const { return this->executor_ != nullptr;};
        void deleteExecutor() { this->executor_ = nullptr;};
        inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
        inline JobInstanceDetail& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline JobInstanceDetail& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
        inline JobInstanceDetail& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline JobInstanceDetail& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline JobInstanceDetail& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline JobInstanceDetail& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline JobInstanceDetail& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // scheduleTime Field Functions 
        bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
        void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
        inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
        inline JobInstanceDetail& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline JobInstanceDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline JobInstanceDetail& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeType Field Functions 
        bool hasTimeType() const { return this->timeType_ != nullptr;};
        void deleteTimeType() { this->timeType_ = nullptr;};
        inline int32_t getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
        inline JobInstanceDetail& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline JobInstanceDetail& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline int32_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
        inline JobInstanceDetail& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // workAddr Field Functions 
        bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
        void deleteWorkAddr() { this->workAddr_ = nullptr;};
        inline string getWorkAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
        inline JobInstanceDetail& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


      protected:
        // The data timestamp of the job instance.
        shared_ptr<string> dataTime_ {};
        // The end time of the job execution.
        shared_ptr<string> endTime_ {};
        // The user who executes the job.
        shared_ptr<string> executor_ {};
        // The job instance ID.
        shared_ptr<int64_t> instanceId_ {};
        // The job ID.
        shared_ptr<int64_t> jobId_ {};
        // The job name.
        shared_ptr<string> jobName_ {};
        // The parameters of the job instance.
        shared_ptr<string> parameters_ {};
        // The progress of the job instance.
        shared_ptr<string> progress_ {};
        // The execution results of the job instance.
        shared_ptr<string> result_ {};
        // The time when the job was scheduled to run.
        shared_ptr<string> scheduleTime_ {};
        // The start time of the job execution.
        shared_ptr<string> startTime_ {};
        // The state of the job instance. Valid values:
        // 
        // - **1**: The job instance is waiting for execution.
        // 
        // - **3**: The job instance is running.
        // 
        // - **4**: The job instance is successful.
        // 
        // - **5**: The job instance failed.
        // 
        // - **9**: The job instance is rejected.
        // 
        // Enumeration class: com.alibaba.schedulerx.common.domain.InstanceStatus
        shared_ptr<int32_t> status_ {};
        // The method that is used to specify the time when to schedule the job instance. Valid values:
        // 
        // - **1**: cron
        // 
        // - **3**: fix_rate
        // 
        // - **4**: second_delay
        // 
        // - **100**: api
        // 
        // Enumeration class: com.alibaba.schedulerx.common.domain.TimeType
        shared_ptr<int32_t> timeType_ {};
        // The trace ID, which can be used to query trace details.
        shared_ptr<string> traceId_ {};
        // The trigger type of the job instance. Valid values:
        // 
        // - **1**: The job instance was triggered at the scheduled time.
        // 
        // - **2**: The job instance was triggered due to data update.
        // 
        // - **3**: The job instance was triggered by an API call.
        // 
        // - **4**: The job instance was triggered because it is manually rerun.
        // 
        // - **5**: The job instance was triggered because the system automatically reruns the job instance upon a system exception, such as a database exception.
        // 
        // Enumeration class: com.alibaba.schedulerx.common.domain.TriggerType
        shared_ptr<int32_t> triggerType_ {};
        // The endpoint of the triggered client. The value is in the IP address:Port number format.
        shared_ptr<string> workAddr_ {};
      };

      virtual bool empty() const override { return this->jobInstanceDetail_ == nullptr; };
      // jobInstanceDetail Field Functions 
      bool hasJobInstanceDetail() const { return this->jobInstanceDetail_ != nullptr;};
      void deleteJobInstanceDetail() { this->jobInstanceDetail_ = nullptr;};
      inline const Data::JobInstanceDetail & getJobInstanceDetail() const { DARABONBA_PTR_GET_CONST(jobInstanceDetail_, Data::JobInstanceDetail) };
      inline Data::JobInstanceDetail getJobInstanceDetail() { DARABONBA_PTR_GET(jobInstanceDetail_, Data::JobInstanceDetail) };
      inline Data& setJobInstanceDetail(const Data::JobInstanceDetail & jobInstanceDetail) { DARABONBA_PTR_SET_VALUE(jobInstanceDetail_, jobInstanceDetail) };
      inline Data& setJobInstanceDetail(Data::JobInstanceDetail && jobInstanceDetail) { DARABONBA_PTR_SET_RVALUE(jobInstanceDetail_, jobInstanceDetail) };


    protected:
      // The details of the job instance.
      shared_ptr<Data::JobInstanceDetail> jobInstanceDetail_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJobInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobInstanceResponseBody::Data) };
    inline GetJobInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobInstanceResponseBody::Data) };
    inline GetJobInstanceResponseBody& setData(const GetJobInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobInstanceResponseBody& setData(GetJobInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJobInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJobInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The information about the job instance.
    shared_ptr<GetJobInstanceResponseBody::Data> data_ {};
    // The error message that is returned only if the corresponding error occurs.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**
    // 
    // - **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
