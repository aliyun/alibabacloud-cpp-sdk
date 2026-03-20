// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkflowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody(GetWorkflowInstanceResponseBody &&) = default ;
    GetWorkflowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody& operator=(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody& operator=(GetWorkflowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WfInstanceDag, wfInstanceDag_);
        DARABONBA_PTR_TO_JSON(WfInstanceInfo, wfInstanceInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WfInstanceDag, wfInstanceDag_);
        DARABONBA_PTR_FROM_JSON(WfInstanceInfo, wfInstanceInfo_);
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
      class WfInstanceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WfInstanceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, WfInstanceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        WfInstanceInfo() = default ;
        WfInstanceInfo(const WfInstanceInfo &) = default ;
        WfInstanceInfo(WfInstanceInfo &&) = default ;
        WfInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WfInstanceInfo() = default ;
        WfInstanceInfo& operator=(const WfInstanceInfo &) = default ;
        WfInstanceInfo& operator=(WfInstanceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataTime_ == nullptr
        && this->endTime_ == nullptr && this->scheduleTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // dataTime Field Functions 
        bool hasDataTime() const { return this->dataTime_ != nullptr;};
        void deleteDataTime() { this->dataTime_ = nullptr;};
        inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
        inline WfInstanceInfo& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline WfInstanceInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // scheduleTime Field Functions 
        bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
        void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
        inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
        inline WfInstanceInfo& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline WfInstanceInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline WfInstanceInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The data timestamp of the workflow instance.
        shared_ptr<string> dataTime_ {};
        // The time when the workflow instance stopped running.
        shared_ptr<string> endTime_ {};
        // The time when the workflow instance was scheduled to run.
        shared_ptr<string> scheduleTime_ {};
        // The time when the workflow instance started to run.
        shared_ptr<string> startTime_ {};
        // The state of the workflow instance. Valid values:
        // 
        // *   1: pending
        // *   2: preparing
        // *   3: running
        // *   4: successful
        // *   5: failed
        shared_ptr<int32_t> status_ {};
      };

      class WfInstanceDag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WfInstanceDag& obj) { 
          DARABONBA_PTR_TO_JSON(Edges, edges_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, WfInstanceDag& obj) { 
          DARABONBA_PTR_FROM_JSON(Edges, edges_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        };
        WfInstanceDag() = default ;
        WfInstanceDag(const WfInstanceDag &) = default ;
        WfInstanceDag(WfInstanceDag &&) = default ;
        WfInstanceDag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WfInstanceDag() = default ;
        WfInstanceDag& operator=(const WfInstanceDag &) = default ;
        WfInstanceDag& operator=(WfInstanceDag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Nodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
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
          Nodes() = default ;
          Nodes(const Nodes &) = default ;
          Nodes(Nodes &&) = default ;
          Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Nodes() = default ;
          Nodes& operator=(const Nodes &) = default ;
          Nodes& operator=(Nodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attempt_ == nullptr
        && this->dataTime_ == nullptr && this->endTime_ == nullptr && this->jobId_ == nullptr && this->jobInstanceId_ == nullptr && this->jobName_ == nullptr
        && this->result_ == nullptr && this->scheduleTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->workAddr_ == nullptr; };
          // attempt Field Functions 
          bool hasAttempt() const { return this->attempt_ != nullptr;};
          void deleteAttempt() { this->attempt_ = nullptr;};
          inline int32_t getAttempt() const { DARABONBA_PTR_GET_DEFAULT(attempt_, 0) };
          inline Nodes& setAttempt(int32_t attempt) { DARABONBA_PTR_SET_VALUE(attempt_, attempt) };


          // dataTime Field Functions 
          bool hasDataTime() const { return this->dataTime_ != nullptr;};
          void deleteDataTime() { this->dataTime_ = nullptr;};
          inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
          inline Nodes& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline Nodes& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
          inline Nodes& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // jobInstanceId Field Functions 
          bool hasJobInstanceId() const { return this->jobInstanceId_ != nullptr;};
          void deleteJobInstanceId() { this->jobInstanceId_ = nullptr;};
          inline int64_t getJobInstanceId() const { DARABONBA_PTR_GET_DEFAULT(jobInstanceId_, 0L) };
          inline Nodes& setJobInstanceId(int64_t jobInstanceId) { DARABONBA_PTR_SET_VALUE(jobInstanceId_, jobInstanceId) };


          // jobName Field Functions 
          bool hasJobName() const { return this->jobName_ != nullptr;};
          void deleteJobName() { this->jobName_ = nullptr;};
          inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
          inline Nodes& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline Nodes& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


          // scheduleTime Field Functions 
          bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
          void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
          inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
          inline Nodes& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline Nodes& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Nodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // workAddr Field Functions 
          bool hasWorkAddr() const { return this->workAddr_ != nullptr;};
          void deleteWorkAddr() { this->workAddr_ = nullptr;};
          inline string getWorkAddr() const { DARABONBA_PTR_GET_DEFAULT(workAddr_, "") };
          inline Nodes& setWorkAddr(string workAddr) { DARABONBA_PTR_SET_VALUE(workAddr_, workAddr) };


        protected:
          // The number of retries when the job failed.
          shared_ptr<int32_t> attempt_ {};
          // The data timestamp of the job.
          shared_ptr<string> dataTime_ {};
          // The time when the job stopped running.
          shared_ptr<string> endTime_ {};
          // The job ID.
          shared_ptr<int64_t> jobId_ {};
          // The ID of the job instance.
          shared_ptr<int64_t> jobInstanceId_ {};
          // The job name.
          shared_ptr<string> jobName_ {};
          // The execution result of the job.
          shared_ptr<string> result_ {};
          // The time when the job was scheduled.
          shared_ptr<string> scheduleTime_ {};
          // The time when the job started to run.
          shared_ptr<string> startTime_ {};
          // The state of the job instance. Valid values: 1: The job instance is waiting for execution. 3: The job instance is running. 4: The job instance is run. 5: The job instance failed to run. 9: The job instance is rejected. Enumeration class: com.alibaba.schedulerx.common.domain.InstanceStatus.
          shared_ptr<int32_t> status_ {};
          // The worker on which the job instance run.
          shared_ptr<string> workAddr_ {};
        };

        class Edges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Edges& obj) { 
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Target, target_);
          };
          friend void from_json(const Darabonba::Json& j, Edges& obj) { 
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
          };
          Edges() = default ;
          Edges(const Edges &) = default ;
          Edges(Edges &&) = default ;
          Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Edges() = default ;
          Edges& operator=(const Edges &) = default ;
          Edges& operator=(Edges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr; };
          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline int64_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
          inline Edges& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
          inline Edges& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        protected:
          // The upstream job instance of the current job instance. A value of 0 indicates that the upstream job instance is the root node.
          shared_ptr<int64_t> source_ {};
          // The downstream job instance of the current job instance.
          shared_ptr<int64_t> target_ {};
        };

        virtual bool empty() const override { return this->edges_ == nullptr
        && this->nodes_ == nullptr; };
        // edges Field Functions 
        bool hasEdges() const { return this->edges_ != nullptr;};
        void deleteEdges() { this->edges_ = nullptr;};
        inline const vector<WfInstanceDag::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<WfInstanceDag::Edges>) };
        inline vector<WfInstanceDag::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<WfInstanceDag::Edges>) };
        inline WfInstanceDag& setEdges(const vector<WfInstanceDag::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
        inline WfInstanceDag& setEdges(vector<WfInstanceDag::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline const vector<WfInstanceDag::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<WfInstanceDag::Nodes>) };
        inline vector<WfInstanceDag::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<WfInstanceDag::Nodes>) };
        inline WfInstanceDag& setNodes(const vector<WfInstanceDag::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
        inline WfInstanceDag& setNodes(vector<WfInstanceDag::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      protected:
        // The dependencies between job instances.
        shared_ptr<vector<WfInstanceDag::Edges>> edges_ {};
        // The job instances.
        shared_ptr<vector<WfInstanceDag::Nodes>> nodes_ {};
      };

      virtual bool empty() const override { return this->wfInstanceDag_ == nullptr
        && this->wfInstanceInfo_ == nullptr; };
      // wfInstanceDag Field Functions 
      bool hasWfInstanceDag() const { return this->wfInstanceDag_ != nullptr;};
      void deleteWfInstanceDag() { this->wfInstanceDag_ = nullptr;};
      inline const Data::WfInstanceDag & getWfInstanceDag() const { DARABONBA_PTR_GET_CONST(wfInstanceDag_, Data::WfInstanceDag) };
      inline Data::WfInstanceDag getWfInstanceDag() { DARABONBA_PTR_GET(wfInstanceDag_, Data::WfInstanceDag) };
      inline Data& setWfInstanceDag(const Data::WfInstanceDag & wfInstanceDag) { DARABONBA_PTR_SET_VALUE(wfInstanceDag_, wfInstanceDag) };
      inline Data& setWfInstanceDag(Data::WfInstanceDag && wfInstanceDag) { DARABONBA_PTR_SET_RVALUE(wfInstanceDag_, wfInstanceDag) };


      // wfInstanceInfo Field Functions 
      bool hasWfInstanceInfo() const { return this->wfInstanceInfo_ != nullptr;};
      void deleteWfInstanceInfo() { this->wfInstanceInfo_ = nullptr;};
      inline const Data::WfInstanceInfo & getWfInstanceInfo() const { DARABONBA_PTR_GET_CONST(wfInstanceInfo_, Data::WfInstanceInfo) };
      inline Data::WfInstanceInfo getWfInstanceInfo() { DARABONBA_PTR_GET(wfInstanceInfo_, Data::WfInstanceInfo) };
      inline Data& setWfInstanceInfo(const Data::WfInstanceInfo & wfInstanceInfo) { DARABONBA_PTR_SET_VALUE(wfInstanceInfo_, wfInstanceInfo) };
      inline Data& setWfInstanceInfo(Data::WfInstanceInfo && wfInstanceInfo) { DARABONBA_PTR_SET_RVALUE(wfInstanceInfo_, wfInstanceInfo) };


    protected:
      // The directed acyclic graph (DAG) of the workflow instance, including nodes and dependencies.
      shared_ptr<Data::WfInstanceDag> wfInstanceDag_ {};
      // The details of the workflow instance, including the state of the workflow instance, the time when the workflow instance started to run, the time when the workflow instance stopped running, the state of each job instance, and the dependencies between job instances.
      shared_ptr<Data::WfInstanceInfo> wfInstanceInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWorkflowInstanceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkflowInstanceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkflowInstanceResponseBody::Data) };
    inline GetWorkflowInstanceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkflowInstanceResponseBody::Data) };
    inline GetWorkflowInstanceResponseBody& setData(const GetWorkflowInstanceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkflowInstanceResponseBody& setData(GetWorkflowInstanceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkflowInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkflowInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The details of the workflow instance.
    shared_ptr<GetWorkflowInstanceResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
