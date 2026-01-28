// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobExecutionProgressResponseBody() = default ;
    GetJobExecutionProgressResponseBody(const GetJobExecutionProgressResponseBody &) = default ;
    GetJobExecutionProgressResponseBody(GetJobExecutionProgressResponseBody &&) = default ;
    GetJobExecutionProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBody() = default ;
    GetJobExecutionProgressResponseBody& operator=(const GetJobExecutionProgressResponseBody &) = default ;
    GetJobExecutionProgressResponseBody& operator=(GetJobExecutionProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_TO_JSON(RootProgress, rootProgress_);
        DARABONBA_PTR_TO_JSON(ShardingProgress, shardingProgress_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
        DARABONBA_PTR_TO_JSON(TotalProgress, totalProgress_);
        DARABONBA_PTR_TO_JSON(WorkerProgress, workerProgress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_FROM_JSON(RootProgress, rootProgress_);
        DARABONBA_PTR_FROM_JSON(ShardingProgress, shardingProgress_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
        DARABONBA_PTR_FROM_JSON(TotalProgress, totalProgress_);
        DARABONBA_PTR_FROM_JSON(WorkerProgress, workerProgress_);
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
      class WorkerProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkerProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(Pulled, pulled_);
          DARABONBA_PTR_TO_JSON(Queue, queue_);
          DARABONBA_PTR_TO_JSON(Running, running_);
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(TraceId, traceId_);
          DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
        };
        friend void from_json(const Darabonba::Json& j, WorkerProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(Pulled, pulled_);
          DARABONBA_PTR_FROM_JSON(Queue, queue_);
          DARABONBA_PTR_FROM_JSON(Running, running_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
          DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
        };
        WorkerProgress() = default ;
        WorkerProgress(const WorkerProgress &) = default ;
        WorkerProgress(WorkerProgress &&) = default ;
        WorkerProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkerProgress() = default ;
        WorkerProgress& operator=(const WorkerProgress &) = default ;
        WorkerProgress& operator=(WorkerProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failed_ == nullptr
        && this->pulled_ == nullptr && this->queue_ == nullptr && this->running_ == nullptr && this->success_ == nullptr && this->total_ == nullptr
        && this->traceId_ == nullptr && this->workerAddr_ == nullptr; };
        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
        inline WorkerProgress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // pulled Field Functions 
        bool hasPulled() const { return this->pulled_ != nullptr;};
        void deletePulled() { this->pulled_ = nullptr;};
        inline int32_t getPulled() const { DARABONBA_PTR_GET_DEFAULT(pulled_, 0) };
        inline WorkerProgress& setPulled(int32_t pulled) { DARABONBA_PTR_SET_VALUE(pulled_, pulled) };


        // queue Field Functions 
        bool hasQueue() const { return this->queue_ != nullptr;};
        void deleteQueue() { this->queue_ = nullptr;};
        inline int32_t getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, 0) };
        inline WorkerProgress& setQueue(int32_t queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


        // running Field Functions 
        bool hasRunning() const { return this->running_ != nullptr;};
        void deleteRunning() { this->running_ = nullptr;};
        inline int32_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
        inline WorkerProgress& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline int32_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
        inline WorkerProgress& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline WorkerProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline WorkerProgress& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


        // workerAddr Field Functions 
        bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
        void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
        inline string getWorkerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
        inline WorkerProgress& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


      protected:
        shared_ptr<int32_t> failed_ {};
        shared_ptr<int32_t> pulled_ {};
        shared_ptr<int32_t> queue_ {};
        shared_ptr<int32_t> running_ {};
        shared_ptr<int32_t> success_ {};
        shared_ptr<int32_t> total_ {};
        shared_ptr<string> traceId_ {};
        shared_ptr<string> workerAddr_ {};
      };

      class TotalProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Finished, finished_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, TotalProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Finished, finished_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        TotalProgress() = default ;
        TotalProgress(const TotalProgress &) = default ;
        TotalProgress(TotalProgress &&) = default ;
        TotalProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalProgress() = default ;
        TotalProgress& operator=(const TotalProgress &) = default ;
        TotalProgress& operator=(TotalProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->finished_ == nullptr
        && this->total_ == nullptr; };
        // finished Field Functions 
        bool hasFinished() const { return this->finished_ != nullptr;};
        void deleteFinished() { this->finished_ = nullptr;};
        inline int64_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0L) };
        inline TotalProgress& setFinished(int64_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline TotalProgress& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int64_t> finished_ {};
        shared_ptr<int64_t> total_ {};
      };

      class TaskProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pulled, pulled_);
          DARABONBA_PTR_TO_JSON(Queue, queue_);
          DARABONBA_PTR_TO_JSON(Running, running_);
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, TaskProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pulled, pulled_);
          DARABONBA_PTR_FROM_JSON(Queue, queue_);
          DARABONBA_PTR_FROM_JSON(Running, running_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        TaskProgress() = default ;
        TaskProgress(const TaskProgress &) = default ;
        TaskProgress(TaskProgress &&) = default ;
        TaskProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskProgress() = default ;
        TaskProgress& operator=(const TaskProgress &) = default ;
        TaskProgress& operator=(TaskProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failed_ == nullptr
        && this->name_ == nullptr && this->pulled_ == nullptr && this->queue_ == nullptr && this->running_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int32_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0) };
        inline TaskProgress& setFailed(int32_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TaskProgress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pulled Field Functions 
        bool hasPulled() const { return this->pulled_ != nullptr;};
        void deletePulled() { this->pulled_ = nullptr;};
        inline int32_t getPulled() const { DARABONBA_PTR_GET_DEFAULT(pulled_, 0) };
        inline TaskProgress& setPulled(int32_t pulled) { DARABONBA_PTR_SET_VALUE(pulled_, pulled) };


        // queue Field Functions 
        bool hasQueue() const { return this->queue_ != nullptr;};
        void deleteQueue() { this->queue_ = nullptr;};
        inline int32_t getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, 0) };
        inline TaskProgress& setQueue(int32_t queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


        // running Field Functions 
        bool hasRunning() const { return this->running_ != nullptr;};
        void deleteRunning() { this->running_ = nullptr;};
        inline int32_t getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, 0) };
        inline TaskProgress& setRunning(int32_t running) { DARABONBA_PTR_SET_VALUE(running_, running) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline int32_t getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
        inline TaskProgress& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline TaskProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int32_t> failed_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> pulled_ {};
        shared_ptr<int32_t> queue_ {};
        shared_ptr<int32_t> running_ {};
        shared_ptr<int32_t> success_ {};
        shared_ptr<int32_t> total_ {};
      };

      class ShardingProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShardingProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusType, statusType_);
          DARABONBA_PTR_TO_JSON(WorkerAddr, workerAddr_);
        };
        friend void from_json(const Darabonba::Json& j, ShardingProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusType, statusType_);
          DARABONBA_PTR_FROM_JSON(WorkerAddr, workerAddr_);
        };
        ShardingProgress() = default ;
        ShardingProgress(const ShardingProgress &) = default ;
        ShardingProgress(ShardingProgress &&) = default ;
        ShardingProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShardingProgress() = default ;
        ShardingProgress& operator=(const ShardingProgress &) = default ;
        ShardingProgress& operator=(ShardingProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatusType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatusType& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Tips, tips_);
          };
          friend void from_json(const Darabonba::Json& j, StatusType& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Tips, tips_);
          };
          StatusType() = default ;
          StatusType(const StatusType &) = default ;
          StatusType(StatusType &&) = default ;
          StatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatusType() = default ;
          StatusType& operator=(const StatusType &) = default ;
          StatusType& operator=(StatusType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->tips_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline StatusType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StatusType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // tips Field Functions 
          bool hasTips() const { return this->tips_ != nullptr;};
          void deleteTips() { this->tips_ = nullptr;};
          inline const map<string, string> & getTips() const { DARABONBA_PTR_GET_CONST(tips_, map<string, string>) };
          inline map<string, string> getTips() { DARABONBA_PTR_GET(tips_, map<string, string>) };
          inline StatusType& setTips(const map<string, string> & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
          inline StatusType& setTips(map<string, string> && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> name_ {};
          // -
          shared_ptr<map<string, string>> tips_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->jobExecutionId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->statusType_ == nullptr && this->workerAddr_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ShardingProgress& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobExecutionId Field Functions 
        bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
        void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
        inline string getJobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
        inline ShardingProgress& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline ShardingProgress& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ShardingProgress& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusType Field Functions 
        bool hasStatusType() const { return this->statusType_ != nullptr;};
        void deleteStatusType() { this->statusType_ = nullptr;};
        inline const ShardingProgress::StatusType & getStatusType() const { DARABONBA_PTR_GET_CONST(statusType_, ShardingProgress::StatusType) };
        inline ShardingProgress::StatusType getStatusType() { DARABONBA_PTR_GET(statusType_, ShardingProgress::StatusType) };
        inline ShardingProgress& setStatusType(const ShardingProgress::StatusType & statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };
        inline ShardingProgress& setStatusType(ShardingProgress::StatusType && statusType) { DARABONBA_PTR_SET_RVALUE(statusType_, statusType) };


        // workerAddr Field Functions 
        bool hasWorkerAddr() const { return this->workerAddr_ != nullptr;};
        void deleteWorkerAddr() { this->workerAddr_ = nullptr;};
        inline string getWorkerAddr() const { DARABONBA_PTR_GET_DEFAULT(workerAddr_, "") };
        inline ShardingProgress& setWorkerAddr(string workerAddr) { DARABONBA_PTR_SET_VALUE(workerAddr_, workerAddr) };


      protected:
        // id
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> jobExecutionId_ {};
        shared_ptr<string> result_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<ShardingProgress::StatusType> statusType_ {};
        shared_ptr<string> workerAddr_ {};
      };

      class RootProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RootProgress& obj) { 
          DARABONBA_PTR_TO_JSON(Finished, finished_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, RootProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(Finished, finished_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        RootProgress() = default ;
        RootProgress(const RootProgress &) = default ;
        RootProgress(RootProgress &&) = default ;
        RootProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RootProgress() = default ;
        RootProgress& operator=(const RootProgress &) = default ;
        RootProgress& operator=(RootProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->finished_ == nullptr
        && this->total_ == nullptr; };
        // finished Field Functions 
        bool hasFinished() const { return this->finished_ != nullptr;};
        void deleteFinished() { this->finished_ = nullptr;};
        inline int64_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0L) };
        inline RootProgress& setFinished(int64_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline RootProgress& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int64_t> finished_ {};
        shared_ptr<int64_t> total_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->jobDescription_ == nullptr && this->rootProgress_ == nullptr && this->shardingProgress_ == nullptr && this->startTime_ == nullptr && this->taskProgress_ == nullptr
        && this->totalProgress_ == nullptr && this->workerProgress_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // jobDescription Field Functions 
      bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
      void deleteJobDescription() { this->jobDescription_ = nullptr;};
      inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
      inline Data& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


      // rootProgress Field Functions 
      bool hasRootProgress() const { return this->rootProgress_ != nullptr;};
      void deleteRootProgress() { this->rootProgress_ = nullptr;};
      inline const Data::RootProgress & getRootProgress() const { DARABONBA_PTR_GET_CONST(rootProgress_, Data::RootProgress) };
      inline Data::RootProgress getRootProgress() { DARABONBA_PTR_GET(rootProgress_, Data::RootProgress) };
      inline Data& setRootProgress(const Data::RootProgress & rootProgress) { DARABONBA_PTR_SET_VALUE(rootProgress_, rootProgress) };
      inline Data& setRootProgress(Data::RootProgress && rootProgress) { DARABONBA_PTR_SET_RVALUE(rootProgress_, rootProgress) };


      // shardingProgress Field Functions 
      bool hasShardingProgress() const { return this->shardingProgress_ != nullptr;};
      void deleteShardingProgress() { this->shardingProgress_ = nullptr;};
      inline const vector<Data::ShardingProgress> & getShardingProgress() const { DARABONBA_PTR_GET_CONST(shardingProgress_, vector<Data::ShardingProgress>) };
      inline vector<Data::ShardingProgress> getShardingProgress() { DARABONBA_PTR_GET(shardingProgress_, vector<Data::ShardingProgress>) };
      inline Data& setShardingProgress(const vector<Data::ShardingProgress> & shardingProgress) { DARABONBA_PTR_SET_VALUE(shardingProgress_, shardingProgress) };
      inline Data& setShardingProgress(vector<Data::ShardingProgress> && shardingProgress) { DARABONBA_PTR_SET_RVALUE(shardingProgress_, shardingProgress) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskProgress Field Functions 
      bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
      void deleteTaskProgress() { this->taskProgress_ = nullptr;};
      inline const vector<Data::TaskProgress> & getTaskProgress() const { DARABONBA_PTR_GET_CONST(taskProgress_, vector<Data::TaskProgress>) };
      inline vector<Data::TaskProgress> getTaskProgress() { DARABONBA_PTR_GET(taskProgress_, vector<Data::TaskProgress>) };
      inline Data& setTaskProgress(const vector<Data::TaskProgress> & taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };
      inline Data& setTaskProgress(vector<Data::TaskProgress> && taskProgress) { DARABONBA_PTR_SET_RVALUE(taskProgress_, taskProgress) };


      // totalProgress Field Functions 
      bool hasTotalProgress() const { return this->totalProgress_ != nullptr;};
      void deleteTotalProgress() { this->totalProgress_ = nullptr;};
      inline const Data::TotalProgress & getTotalProgress() const { DARABONBA_PTR_GET_CONST(totalProgress_, Data::TotalProgress) };
      inline Data::TotalProgress getTotalProgress() { DARABONBA_PTR_GET(totalProgress_, Data::TotalProgress) };
      inline Data& setTotalProgress(const Data::TotalProgress & totalProgress) { DARABONBA_PTR_SET_VALUE(totalProgress_, totalProgress) };
      inline Data& setTotalProgress(Data::TotalProgress && totalProgress) { DARABONBA_PTR_SET_RVALUE(totalProgress_, totalProgress) };


      // workerProgress Field Functions 
      bool hasWorkerProgress() const { return this->workerProgress_ != nullptr;};
      void deleteWorkerProgress() { this->workerProgress_ = nullptr;};
      inline const vector<Data::WorkerProgress> & getWorkerProgress() const { DARABONBA_PTR_GET_CONST(workerProgress_, vector<Data::WorkerProgress>) };
      inline vector<Data::WorkerProgress> getWorkerProgress() { DARABONBA_PTR_GET(workerProgress_, vector<Data::WorkerProgress>) };
      inline Data& setWorkerProgress(const vector<Data::WorkerProgress> & workerProgress) { DARABONBA_PTR_SET_VALUE(workerProgress_, workerProgress) };
      inline Data& setWorkerProgress(vector<Data::WorkerProgress> && workerProgress) { DARABONBA_PTR_SET_RVALUE(workerProgress_, workerProgress) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> jobDescription_ {};
      shared_ptr<Data::RootProgress> rootProgress_ {};
      shared_ptr<vector<Data::ShardingProgress>> shardingProgress_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<vector<Data::TaskProgress>> taskProgress_ {};
      shared_ptr<Data::TotalProgress> totalProgress_ {};
      shared_ptr<vector<Data::WorkerProgress>> workerProgress_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJobExecutionProgressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetJobExecutionProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetJobExecutionProgressResponseBody::Data) };
    inline GetJobExecutionProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetJobExecutionProgressResponseBody::Data) };
    inline GetJobExecutionProgressResponseBody& setData(const GetJobExecutionProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetJobExecutionProgressResponseBody& setData(GetJobExecutionProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJobExecutionProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobExecutionProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJobExecutionProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<GetJobExecutionProgressResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
