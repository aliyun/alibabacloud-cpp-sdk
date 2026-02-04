// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJobProgress, analysisJobProgress_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorAnalysisItem, errorAnalysisItem_);
      DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_TO_JSON(FullNetCheckJobStatus, fullNetCheckJobStatus_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_TO_JSON(NetworkDiagnosisResult, networkDiagnosisResult_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubDistributedJobStatus, subDistributedJobStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJobProgress, analysisJobProgress_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorAnalysisItem, errorAnalysisItem_);
      DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_FROM_JSON(FullNetCheckJobStatus, fullNetCheckJobStatus_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_FROM_JSON(NetworkDiagnosisResult, networkDiagnosisResult_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubDistributedJobStatus, subDistributedJobStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePreCheckStatusResponseBody() = default ;
    DescribePreCheckStatusResponseBody(const DescribePreCheckStatusResponseBody &) = default ;
    DescribePreCheckStatusResponseBody(DescribePreCheckStatusResponseBody &&) = default ;
    DescribePreCheckStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBody() = default ;
    DescribePreCheckStatusResponseBody& operator=(const DescribePreCheckStatusResponseBody &) = default ;
    DescribePreCheckStatusResponseBody& operator=(DescribePreCheckStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubDistributedJobStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubDistributedJobStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, SubDistributedJobStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      SubDistributedJobStatus() = default ;
      SubDistributedJobStatus(const SubDistributedJobStatus &) = default ;
      SubDistributedJobStatus(SubDistributedJobStatus &&) = default ;
      SubDistributedJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubDistributedJobStatus() = default ;
      SubDistributedJobStatus& operator=(const SubDistributedJobStatus &) = default ;
      SubDistributedJobStatus& operator=(SubDistributedJobStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobProgress& obj) { 
          DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
          DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_TO_JSON(Current, current_);
          DARABONBA_PTR_TO_JSON(DdlSql, ddlSql_);
          DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
          DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
          DARABONBA_PTR_TO_JSON(DiffRow, diffRow_);
          DARABONBA_PTR_TO_JSON(ErrDetail, errDetail_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IgnoreFlag, ignoreFlag_);
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Logs, logs_);
          DARABONBA_PTR_TO_JSON(Names, names_);
          DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_TO_JSON(ParentObj, parentObj_);
          DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          DARABONBA_PTR_TO_JSON(Skip, skip_);
          DARABONBA_PTR_TO_JSON(SourceSchema, sourceSchema_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Sub, sub_);
          DARABONBA_PTR_TO_JSON(TargetNames, targetNames_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, JobProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
          DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_FROM_JSON(Current, current_);
          DARABONBA_PTR_FROM_JSON(DdlSql, ddlSql_);
          DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
          DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
          DARABONBA_PTR_FROM_JSON(DiffRow, diffRow_);
          DARABONBA_PTR_FROM_JSON(ErrDetail, errDetail_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IgnoreFlag, ignoreFlag_);
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Logs, logs_);
          DARABONBA_PTR_FROM_JSON(Names, names_);
          DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_FROM_JSON(ParentObj, parentObj_);
          DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          DARABONBA_PTR_FROM_JSON(Skip, skip_);
          DARABONBA_PTR_FROM_JSON(SourceSchema, sourceSchema_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Sub, sub_);
          DARABONBA_PTR_FROM_JSON(TargetNames, targetNames_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        JobProgress() = default ;
        JobProgress(const JobProgress &) = default ;
        JobProgress(JobProgress &&) = default ;
        JobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobProgress() = default ;
        JobProgress& operator=(const JobProgress &) = default ;
        JobProgress& operator=(JobProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Logs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logs& obj) { 
            DARABONBA_PTR_TO_JSON(ErrData, errData_);
            DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_TO_JSON(ErrType, errType_);
            DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
          };
          friend void from_json(const Darabonba::Json& j, Logs& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrData, errData_);
            DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_FROM_JSON(ErrType, errType_);
            DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
          };
          Logs() = default ;
          Logs(const Logs &) = default ;
          Logs(Logs &&) = default ;
          Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logs() = default ;
          Logs& operator=(const Logs &) = default ;
          Logs& operator=(Logs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errData_ == nullptr
        && this->errMsg_ == nullptr && this->errType_ == nullptr && this->logLevel_ == nullptr; };
          // errData Field Functions 
          bool hasErrData() const { return this->errData_ != nullptr;};
          void deleteErrData() { this->errData_ = nullptr;};
          inline string getErrData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
          inline Logs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline Logs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // errType Field Functions 
          bool hasErrType() const { return this->errType_ != nullptr;};
          void deleteErrType() { this->errType_ = nullptr;};
          inline string getErrType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
          inline Logs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


          // logLevel Field Functions 
          bool hasLogLevel() const { return this->logLevel_ != nullptr;};
          void deleteLogLevel() { this->logLevel_ = nullptr;};
          inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
          inline Logs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


        protected:
          // The record of errors.
          shared_ptr<string> errData_ {};
          // The error message.
          shared_ptr<string> errMsg_ {};
          // The error type.
          shared_ptr<string> errType_ {};
          // The level of logs.
          shared_ptr<string> logLevel_ {};
        };

        virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->canSkip_ == nullptr && this->current_ == nullptr && this->ddlSql_ == nullptr && this->delaySeconds_ == nullptr && this->destSchema_ == nullptr
        && this->diffRow_ == nullptr && this->errDetail_ == nullptr && this->errMsg_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->ignoreFlag_ == nullptr && this->item_ == nullptr && this->jobId_ == nullptr && this->logs_ == nullptr && this->names_ == nullptr
        && this->orderNum_ == nullptr && this->parentObj_ == nullptr && this->repairMethod_ == nullptr && this->skip_ == nullptr && this->sourceSchema_ == nullptr
        && this->state_ == nullptr && this->sub_ == nullptr && this->targetNames_ == nullptr && this->total_ == nullptr; };
        // bootTime Field Functions 
        bool hasBootTime() const { return this->bootTime_ != nullptr;};
        void deleteBootTime() { this->bootTime_ = nullptr;};
        inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
        inline JobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


        // canSkip Field Functions 
        bool hasCanSkip() const { return this->canSkip_ != nullptr;};
        void deleteCanSkip() { this->canSkip_ = nullptr;};
        inline bool getCanSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
        inline JobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


        // current Field Functions 
        bool hasCurrent() const { return this->current_ != nullptr;};
        void deleteCurrent() { this->current_ = nullptr;};
        inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
        inline JobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


        // ddlSql Field Functions 
        bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
        void deleteDdlSql() { this->ddlSql_ = nullptr;};
        inline string getDdlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
        inline JobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


        // delaySeconds Field Functions 
        bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
        void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
        inline int32_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
        inline JobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


        // destSchema Field Functions 
        bool hasDestSchema() const { return this->destSchema_ != nullptr;};
        void deleteDestSchema() { this->destSchema_ = nullptr;};
        inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
        inline JobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


        // diffRow Field Functions 
        bool hasDiffRow() const { return this->diffRow_ != nullptr;};
        void deleteDiffRow() { this->diffRow_ = nullptr;};
        inline int64_t getDiffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
        inline JobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


        // errDetail Field Functions 
        bool hasErrDetail() const { return this->errDetail_ != nullptr;};
        void deleteErrDetail() { this->errDetail_ = nullptr;};
        inline string getErrDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
        inline JobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline JobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline JobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline JobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ignoreFlag Field Functions 
        bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
        void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
        inline string getIgnoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
        inline JobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline JobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline JobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // logs Field Functions 
        bool hasLogs() const { return this->logs_ != nullptr;};
        void deleteLogs() { this->logs_ = nullptr;};
        inline const vector<JobProgress::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<JobProgress::Logs>) };
        inline vector<JobProgress::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<JobProgress::Logs>) };
        inline JobProgress& setLogs(const vector<JobProgress::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
        inline JobProgress& setLogs(vector<JobProgress::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


        // names Field Functions 
        bool hasNames() const { return this->names_ != nullptr;};
        void deleteNames() { this->names_ = nullptr;};
        inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
        inline JobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
        inline JobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // parentObj Field Functions 
        bool hasParentObj() const { return this->parentObj_ != nullptr;};
        void deleteParentObj() { this->parentObj_ = nullptr;};
        inline string getParentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
        inline JobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


        // repairMethod Field Functions 
        bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
        void deleteRepairMethod() { this->repairMethod_ = nullptr;};
        inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
        inline JobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        // skip Field Functions 
        bool hasSkip() const { return this->skip_ != nullptr;};
        void deleteSkip() { this->skip_ = nullptr;};
        inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
        inline JobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


        // sourceSchema Field Functions 
        bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
        void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
        inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
        inline JobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline JobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // sub Field Functions 
        bool hasSub() const { return this->sub_ != nullptr;};
        void deleteSub() { this->sub_ = nullptr;};
        inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
        inline JobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


        // targetNames Field Functions 
        bool hasTargetNames() const { return this->targetNames_ != nullptr;};
        void deleteTargetNames() { this->targetNames_ = nullptr;};
        inline string getTargetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
        inline JobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline JobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // The time when the subtask was started. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
        shared_ptr<string> bootTime_ {};
        // Indicates whether the subtask can be ignored if it fails. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> canSkip_ {};
        // The number of the subtasks that are running.
        shared_ptr<string> current_ {};
        // The DDL statements.
        shared_ptr<string> ddlSql_ {};
        // The latency of incremental data migration or synchronization.
        shared_ptr<int32_t> delaySeconds_ {};
        // The name of the database to which the object in the destination instance belongs.
        shared_ptr<string> destSchema_ {};
        // This parameter will be removed in the future.
        shared_ptr<int64_t> diffRow_ {};
        // The error details of the subtask failure.
        shared_ptr<string> errDetail_ {};
        // The error message of the subtask failure.
        shared_ptr<string> errMsg_ {};
        // The time when the subtask was complete. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
        shared_ptr<string> finishTime_ {};
        // The ID of the entry in the metadatabase.
        shared_ptr<string> id_ {};
        // Indicates whether DTS ignores the subtask and proceeds with the next subtask. Valid values:
        // 
        // *   **N**: no.
        // *   **Y**: yes.
        shared_ptr<string> ignoreFlag_ {};
        // The name of the subtask.
        shared_ptr<string> item_ {};
        // The subtask ID.
        shared_ptr<string> jobId_ {};
        // The operations logs of errors.
        shared_ptr<vector<JobProgress::Logs>> logs_ {};
        // The name of the subtask.
        shared_ptr<string> names_ {};
        // The serial number of the subtask.
        shared_ptr<int32_t> orderNum_ {};
        // This parameter will be removed in the future.
        shared_ptr<string> parentObj_ {};
        // The method to fix a precheck failure.
        shared_ptr<string> repairMethod_ {};
        // Indicates whether the subtask was ignored. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> skip_ {};
        // The name of the database to which the object in the source instance belongs.
        shared_ptr<string> sourceSchema_ {};
        // The status of the subtask. Valid values:
        // 
        // *   **NotStarted**: The subtask is not started.
        // *   **Suspending**: The subtask is paused.
        // *   **Checking**: The subtask is being checked.
        // *   **Migrating**: The subtask is in progress. Data is being migrated.
        // *   **Failed**: The subtask failed.
        // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
        // *   **Finished**: The subtask is complete.
        shared_ptr<string> state_ {};
        // The sub-item progress of the subtask.
        // 
        // > If \\*\\*[]\\*\\* is returned, the subtask has no sub-item.
        shared_ptr<string> sub_ {};
        // The names of the objects that are migrated or synchronized.
        shared_ptr<string> targetNames_ {};
        // The total number of subtasks.
        shared_ptr<int32_t> total_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->errorItem_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobProgress_ == nullptr && this->state_ == nullptr
        && this->total_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SubDistributedJobStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // errorItem Field Functions 
      bool hasErrorItem() const { return this->errorItem_ != nullptr;};
      void deleteErrorItem() { this->errorItem_ = nullptr;};
      inline int32_t getErrorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
      inline SubDistributedJobStatus& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SubDistributedJobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline SubDistributedJobStatus& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobProgress Field Functions 
      bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
      void deleteJobProgress() { this->jobProgress_ = nullptr;};
      inline const vector<SubDistributedJobStatus::JobProgress> & getJobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<SubDistributedJobStatus::JobProgress>) };
      inline vector<SubDistributedJobStatus::JobProgress> getJobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<SubDistributedJobStatus::JobProgress>) };
      inline SubDistributedJobStatus& setJobProgress(const vector<SubDistributedJobStatus::JobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
      inline SubDistributedJobStatus& setJobProgress(vector<SubDistributedJobStatus::JobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SubDistributedJobStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline SubDistributedJobStatus& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The task code that indicates the type of the subtask. Valid values:
      // 
      // *   **01**: precheck.
      // *   **02**: schema migration or initial schema synchronization.
      // *   **03**: full data migration or initial full data synchronization.
      // *   **04**: incremental data migration or synchronization.
      shared_ptr<string> code_ {};
      // The number of subtasks that failed.
      shared_ptr<int32_t> errorItem_ {};
      // The subtask ID.
      shared_ptr<string> jobId_ {};
      // The name of distributed subtasks associated with the subtask.
      shared_ptr<string> jobName_ {};
      // The subtasks and the progress of each subtask.
      shared_ptr<vector<SubDistributedJobStatus::JobProgress>> jobProgress_ {};
      // The status of the subtask. Valid values:
      // 
      // *   **NotStarted**: The subtask is not started.
      // *   **Suspending**: The subtask is paused.
      // *   **Checking**: The subtask is being checked.
      // *   **Migrating**: The subtask is in progress. Data is being migrated.
      // *   **Failed**: The subtask failed.
      // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
      // *   **Finished**: The subtask is complete.
      shared_ptr<string> state_ {};
      // The total number of entries that are returned.
      shared_ptr<int32_t> total_ {};
    };

    class NetworkDiagnosisResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkDiagnosisResult& obj) { 
        DARABONBA_PTR_TO_JSON(Diagnosis, diagnosis_);
        DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkDiagnosisResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Diagnosis, diagnosis_);
        DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      };
      NetworkDiagnosisResult() = default ;
      NetworkDiagnosisResult(const NetworkDiagnosisResult &) = default ;
      NetworkDiagnosisResult(NetworkDiagnosisResult &&) = default ;
      NetworkDiagnosisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkDiagnosisResult() = default ;
      NetworkDiagnosisResult& operator=(const NetworkDiagnosisResult &) = default ;
      NetworkDiagnosisResult& operator=(NetworkDiagnosisResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Diagnosis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Diagnosis& obj) { 
          DARABONBA_PTR_TO_JSON(CnDocUrl, cnDocUrl_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_TO_JSON(InternationalDocUrl, internationalDocUrl_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, Diagnosis& obj) { 
          DARABONBA_PTR_FROM_JSON(CnDocUrl, cnDocUrl_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
          DARABONBA_PTR_FROM_JSON(InternationalDocUrl, internationalDocUrl_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        Diagnosis() = default ;
        Diagnosis(const Diagnosis &) = default ;
        Diagnosis(Diagnosis &&) = default ;
        Diagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Diagnosis() = default ;
        Diagnosis& operator=(const Diagnosis &) = default ;
        Diagnosis& operator=(Diagnosis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnDocUrl_ == nullptr
        && this->code_ == nullptr && this->endpointType_ == nullptr && this->internationalDocUrl_ == nullptr && this->result_ == nullptr; };
        // cnDocUrl Field Functions 
        bool hasCnDocUrl() const { return this->cnDocUrl_ != nullptr;};
        void deleteCnDocUrl() { this->cnDocUrl_ = nullptr;};
        inline string getCnDocUrl() const { DARABONBA_PTR_GET_DEFAULT(cnDocUrl_, "") };
        inline Diagnosis& setCnDocUrl(string cnDocUrl) { DARABONBA_PTR_SET_VALUE(cnDocUrl_, cnDocUrl) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Diagnosis& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // endpointType Field Functions 
        bool hasEndpointType() const { return this->endpointType_ != nullptr;};
        void deleteEndpointType() { this->endpointType_ = nullptr;};
        inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
        inline Diagnosis& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


        // internationalDocUrl Field Functions 
        bool hasInternationalDocUrl() const { return this->internationalDocUrl_ != nullptr;};
        void deleteInternationalDocUrl() { this->internationalDocUrl_ = nullptr;};
        inline string getInternationalDocUrl() const { DARABONBA_PTR_GET_DEFAULT(internationalDocUrl_, "") };
        inline Diagnosis& setInternationalDocUrl(string internationalDocUrl) { DARABONBA_PTR_SET_VALUE(internationalDocUrl_, internationalDocUrl) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline Diagnosis& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        // Document address for China region.
        shared_ptr<string> cnDocUrl_ {};
        // Diagnostic code.
        shared_ptr<string> code_ {};
        // Access point, the return values are: - **source**: source end. - **destination**: destination end. - **unknown**: unknown.
        shared_ptr<string> endpointType_ {};
        // Overseas region document address.
        shared_ptr<string> internationalDocUrl_ {};
        // Reserved field for diagnostic results, default is empty.
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->diagnosis_ == nullptr
        && this->modelVersion_ == nullptr; };
      // diagnosis Field Functions 
      bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
      void deleteDiagnosis() { this->diagnosis_ = nullptr;};
      inline const vector<NetworkDiagnosisResult::Diagnosis> & getDiagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, vector<NetworkDiagnosisResult::Diagnosis>) };
      inline vector<NetworkDiagnosisResult::Diagnosis> getDiagnosis() { DARABONBA_PTR_GET(diagnosis_, vector<NetworkDiagnosisResult::Diagnosis>) };
      inline NetworkDiagnosisResult& setDiagnosis(const vector<NetworkDiagnosisResult::Diagnosis> & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
      inline NetworkDiagnosisResult& setDiagnosis(vector<NetworkDiagnosisResult::Diagnosis> && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


      // modelVersion Field Functions 
      bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
      void deleteModelVersion() { this->modelVersion_ = nullptr;};
      inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
      inline NetworkDiagnosisResult& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    protected:
      // Network diagnostic report
      shared_ptr<vector<NetworkDiagnosisResult::Diagnosis>> diagnosis_ {};
      // Diagnose model version.
      shared_ptr<string> modelVersion_ {};
    };

    class JobProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobProgress& obj) { 
        DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
        DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
        DARABONBA_PTR_TO_JSON(Current, current_);
        DARABONBA_PTR_TO_JSON(DdlSql, ddlSql_);
        DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_TO_JSON(DiffRow, diffRow_);
        DARABONBA_PTR_TO_JSON(ErrDetail, errDetail_);
        DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IgnoreFlag, ignoreFlag_);
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(Names, names_);
        DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
        DARABONBA_PTR_TO_JSON(ParentObj, parentObj_);
        DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(SourceSchema, sourceSchema_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Sub, sub_);
        DARABONBA_PTR_TO_JSON(TargetNames, targetNames_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, JobProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
        DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
        DARABONBA_PTR_FROM_JSON(Current, current_);
        DARABONBA_PTR_FROM_JSON(DdlSql, ddlSql_);
        DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_FROM_JSON(DiffRow, diffRow_);
        DARABONBA_PTR_FROM_JSON(ErrDetail, errDetail_);
        DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IgnoreFlag, ignoreFlag_);
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(Names, names_);
        DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
        DARABONBA_PTR_FROM_JSON(ParentObj, parentObj_);
        DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(SourceSchema, sourceSchema_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Sub, sub_);
        DARABONBA_PTR_FROM_JSON(TargetNames, targetNames_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      JobProgress() = default ;
      JobProgress(const JobProgress &) = default ;
      JobProgress(JobProgress &&) = default ;
      JobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobProgress() = default ;
      JobProgress& operator=(const JobProgress &) = default ;
      JobProgress& operator=(JobProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(ErrData, errData_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(ErrType, errType_);
          DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrData, errData_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(ErrType, errType_);
          DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errData_ == nullptr
        && this->errMsg_ == nullptr && this->errType_ == nullptr && this->logLevel_ == nullptr; };
        // errData Field Functions 
        bool hasErrData() const { return this->errData_ != nullptr;};
        void deleteErrData() { this->errData_ = nullptr;};
        inline string getErrData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
        inline Logs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline Logs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // errType Field Functions 
        bool hasErrType() const { return this->errType_ != nullptr;};
        void deleteErrType() { this->errType_ = nullptr;};
        inline string getErrType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
        inline Logs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


        // logLevel Field Functions 
        bool hasLogLevel() const { return this->logLevel_ != nullptr;};
        void deleteLogLevel() { this->logLevel_ = nullptr;};
        inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
        inline Logs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


      protected:
        // The error message.
        shared_ptr<string> errData_ {};
        // The error message that is returned when an error occurs on the subtask.
        shared_ptr<string> errMsg_ {};
        // The error type.
        shared_ptr<string> errType_ {};
        // The level of logs.
        shared_ptr<string> logLevel_ {};
      };

      virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->canSkip_ == nullptr && this->current_ == nullptr && this->ddlSql_ == nullptr && this->delaySeconds_ == nullptr && this->destSchema_ == nullptr
        && this->diffRow_ == nullptr && this->errDetail_ == nullptr && this->errMsg_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->ignoreFlag_ == nullptr && this->item_ == nullptr && this->jobId_ == nullptr && this->logs_ == nullptr && this->names_ == nullptr
        && this->orderNum_ == nullptr && this->parentObj_ == nullptr && this->repairMethod_ == nullptr && this->skip_ == nullptr && this->sourceSchema_ == nullptr
        && this->state_ == nullptr && this->sub_ == nullptr && this->targetNames_ == nullptr && this->total_ == nullptr; };
      // bootTime Field Functions 
      bool hasBootTime() const { return this->bootTime_ != nullptr;};
      void deleteBootTime() { this->bootTime_ = nullptr;};
      inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
      inline JobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


      // canSkip Field Functions 
      bool hasCanSkip() const { return this->canSkip_ != nullptr;};
      void deleteCanSkip() { this->canSkip_ = nullptr;};
      inline bool getCanSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
      inline JobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


      // current Field Functions 
      bool hasCurrent() const { return this->current_ != nullptr;};
      void deleteCurrent() { this->current_ = nullptr;};
      inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
      inline JobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


      // ddlSql Field Functions 
      bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
      void deleteDdlSql() { this->ddlSql_ = nullptr;};
      inline string getDdlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
      inline JobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


      // delaySeconds Field Functions 
      bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
      void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
      inline int32_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
      inline JobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


      // destSchema Field Functions 
      bool hasDestSchema() const { return this->destSchema_ != nullptr;};
      void deleteDestSchema() { this->destSchema_ = nullptr;};
      inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
      inline JobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


      // diffRow Field Functions 
      bool hasDiffRow() const { return this->diffRow_ != nullptr;};
      void deleteDiffRow() { this->diffRow_ = nullptr;};
      inline int64_t getDiffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
      inline JobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


      // errDetail Field Functions 
      bool hasErrDetail() const { return this->errDetail_ != nullptr;};
      void deleteErrDetail() { this->errDetail_ = nullptr;};
      inline string getErrDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
      inline JobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline JobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline JobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ignoreFlag Field Functions 
      bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
      void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
      inline string getIgnoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
      inline JobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline JobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<JobProgress::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<JobProgress::Logs>) };
      inline vector<JobProgress::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<JobProgress::Logs>) };
      inline JobProgress& setLogs(const vector<JobProgress::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline JobProgress& setLogs(vector<JobProgress::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // names Field Functions 
      bool hasNames() const { return this->names_ != nullptr;};
      void deleteNames() { this->names_ = nullptr;};
      inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
      inline JobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
      inline JobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // parentObj Field Functions 
      bool hasParentObj() const { return this->parentObj_ != nullptr;};
      void deleteParentObj() { this->parentObj_ = nullptr;};
      inline string getParentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
      inline JobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


      // repairMethod Field Functions 
      bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
      void deleteRepairMethod() { this->repairMethod_ = nullptr;};
      inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
      inline JobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline JobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // sourceSchema Field Functions 
      bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
      void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
      inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
      inline JobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline JobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // sub Field Functions 
      bool hasSub() const { return this->sub_ != nullptr;};
      void deleteSub() { this->sub_ = nullptr;};
      inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
      inline JobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


      // targetNames Field Functions 
      bool hasTargetNames() const { return this->targetNames_ != nullptr;};
      void deleteTargetNames() { this->targetNames_ = nullptr;};
      inline string getTargetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
      inline JobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline JobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The time when the subtask was started. The time is displayed in the yyyy-MM-ddTHH:mm:ssZ format in UTC.
      shared_ptr<string> bootTime_ {};
      // Indicates whether the subtask can be ignored if it fails.
      shared_ptr<bool> canSkip_ {};
      // The number of the subtasks that are running.
      shared_ptr<string> current_ {};
      // The DDL statements.
      shared_ptr<string> ddlSql_ {};
      // The latency of incremental data migration or synchronization.
      // 
      // > If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
      shared_ptr<int32_t> delaySeconds_ {};
      // The name of the database to which the object in the destination instance belongs.
      shared_ptr<string> destSchema_ {};
      // This parameter will be removed in the future.
      shared_ptr<int64_t> diffRow_ {};
      // The error details of the subtask failure.
      shared_ptr<string> errDetail_ {};
      // The error message of the subtask failure.
      shared_ptr<string> errMsg_ {};
      // The time when the subtask was complete. The time is displayed in the yyyy-MM-ddTHH:mm:ssZ format in UTC.
      shared_ptr<string> finishTime_ {};
      // The ID of the entry in the metadatabase.
      shared_ptr<string> id_ {};
      // Indicates whether DTS ignores the subtask and proceeds with the next subtask. Valid values:
      // 
      // *   **N**: no.
      // *   **Y**: yes.
      shared_ptr<string> ignoreFlag_ {};
      // The shortened name of the subtask.
      shared_ptr<string> item_ {};
      // The subtask ID.
      shared_ptr<string> jobId_ {};
      // The logs of subtask failures.
      shared_ptr<vector<JobProgress::Logs>> logs_ {};
      // The name of the subtask.
      shared_ptr<string> names_ {};
      // The serial number of the subtask.
      shared_ptr<int32_t> orderNum_ {};
      // This parameter will be removed in the future.
      shared_ptr<string> parentObj_ {};
      // The method to fix the subtask failure.
      shared_ptr<string> repairMethod_ {};
      // Indicates whether the subtask is ignored if it fails. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> skip_ {};
      // The name of the database to which the object in the source instance belongs.
      shared_ptr<string> sourceSchema_ {};
      // The status of the subtask. Valid values:
      // 
      // *   **NotStarted**: The subtask is not started.
      // *   **Checking**: The subtask is being checked.
      // *   **Migrating**: The subtask is in progress. Data is being migrated.
      // *   **Failed**: The subtask failed.
      // *   **Warning**: The subtask encounters an exception.
      // *   **Success**: The subtask is complete.
      shared_ptr<string> state_ {};
      // The sub-item progress of the subtask.
      // 
      // > If \\*\\*[]\\*\\* is returned, the subtask has no sub-items.
      shared_ptr<string> sub_ {};
      // The names of the objects that are migrated or synchronized.
      shared_ptr<string> targetNames_ {};
      // The total number of sub-items of the subtask.
      shared_ptr<int32_t> total_ {};
    };

    class FullNetCheckJobStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FullNetCheckJobStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_TO_JSON(DestRegionCidr, destRegionCidr_);
        DARABONBA_PTR_TO_JSON(DestinationEndpointType, destinationEndpointType_);
        DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
        DARABONBA_PTR_TO_JSON(HostRegion, hostRegion_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
        DARABONBA_PTR_TO_JSON(SourceEndpointType, sourceEndpointType_);
        DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_TO_JSON(SrcRegionCidr, srcRegionCidr_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, FullNetCheckJobStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
        DARABONBA_PTR_FROM_JSON(DestRegionCidr, destRegionCidr_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpointType, destinationEndpointType_);
        DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
        DARABONBA_PTR_FROM_JSON(HostRegion, hostRegion_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
        DARABONBA_PTR_FROM_JSON(SourceEndpointType, sourceEndpointType_);
        DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
        DARABONBA_PTR_FROM_JSON(SrcRegionCidr, srcRegionCidr_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      FullNetCheckJobStatus() = default ;
      FullNetCheckJobStatus(const FullNetCheckJobStatus &) = default ;
      FullNetCheckJobStatus(FullNetCheckJobStatus &&) = default ;
      FullNetCheckJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FullNetCheckJobStatus() = default ;
      FullNetCheckJobStatus& operator=(const FullNetCheckJobStatus &) = default ;
      FullNetCheckJobStatus& operator=(FullNetCheckJobStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobProgress& obj) { 
          DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
          DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_TO_JSON(Current, current_);
          DARABONBA_PTR_TO_JSON(DdlSql, ddlSql_);
          DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
          DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
          DARABONBA_PTR_TO_JSON(DiffRow, diffRow_);
          DARABONBA_PTR_TO_JSON(ErrDetail, errDetail_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IgnoreFlag, ignoreFlag_);
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Logs, logs_);
          DARABONBA_PTR_TO_JSON(Names, names_);
          DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_TO_JSON(ParentObj, parentObj_);
          DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          DARABONBA_PTR_TO_JSON(Skip, skip_);
          DARABONBA_PTR_TO_JSON(SourceSchema, sourceSchema_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Sub, sub_);
          DARABONBA_PTR_TO_JSON(TargetNames, targetNames_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, JobProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
          DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
          DARABONBA_PTR_FROM_JSON(Current, current_);
          DARABONBA_PTR_FROM_JSON(DdlSql, ddlSql_);
          DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
          DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
          DARABONBA_PTR_FROM_JSON(DiffRow, diffRow_);
          DARABONBA_PTR_FROM_JSON(ErrDetail, errDetail_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IgnoreFlag, ignoreFlag_);
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Logs, logs_);
          DARABONBA_PTR_FROM_JSON(Names, names_);
          DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_FROM_JSON(ParentObj, parentObj_);
          DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          DARABONBA_PTR_FROM_JSON(Skip, skip_);
          DARABONBA_PTR_FROM_JSON(SourceSchema, sourceSchema_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Sub, sub_);
          DARABONBA_PTR_FROM_JSON(TargetNames, targetNames_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        JobProgress() = default ;
        JobProgress(const JobProgress &) = default ;
        JobProgress(JobProgress &&) = default ;
        JobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobProgress() = default ;
        JobProgress& operator=(const JobProgress &) = default ;
        JobProgress& operator=(JobProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Logs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logs& obj) { 
            DARABONBA_PTR_TO_JSON(ErrData, errData_);
            DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_TO_JSON(ErrType, errType_);
            DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
          };
          friend void from_json(const Darabonba::Json& j, Logs& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrData, errData_);
            DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_FROM_JSON(ErrType, errType_);
            DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
          };
          Logs() = default ;
          Logs(const Logs &) = default ;
          Logs(Logs &&) = default ;
          Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logs() = default ;
          Logs& operator=(const Logs &) = default ;
          Logs& operator=(Logs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errData_ == nullptr
        && this->errMsg_ == nullptr && this->errType_ == nullptr && this->logLevel_ == nullptr; };
          // errData Field Functions 
          bool hasErrData() const { return this->errData_ != nullptr;};
          void deleteErrData() { this->errData_ = nullptr;};
          inline string getErrData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
          inline Logs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline Logs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // errType Field Functions 
          bool hasErrType() const { return this->errType_ != nullptr;};
          void deleteErrType() { this->errType_ = nullptr;};
          inline string getErrType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
          inline Logs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


          // logLevel Field Functions 
          bool hasLogLevel() const { return this->logLevel_ != nullptr;};
          void deleteLogLevel() { this->logLevel_ = nullptr;};
          inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
          inline Logs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


        protected:
          // Error record.
          shared_ptr<string> errData_ {};
          // Specific error message.
          shared_ptr<string> errMsg_ {};
          // Type of error.
          shared_ptr<string> errType_ {};
          // The level of the log.
          shared_ptr<string> logLevel_ {};
        };

        virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->canSkip_ == nullptr && this->current_ == nullptr && this->ddlSql_ == nullptr && this->delaySeconds_ == nullptr && this->destSchema_ == nullptr
        && this->diffRow_ == nullptr && this->errDetail_ == nullptr && this->errMsg_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->ignoreFlag_ == nullptr && this->item_ == nullptr && this->jobId_ == nullptr && this->logs_ == nullptr && this->names_ == nullptr
        && this->orderNum_ == nullptr && this->parentObj_ == nullptr && this->repairMethod_ == nullptr && this->skip_ == nullptr && this->sourceSchema_ == nullptr
        && this->state_ == nullptr && this->sub_ == nullptr && this->targetNames_ == nullptr && this->total_ == nullptr; };
        // bootTime Field Functions 
        bool hasBootTime() const { return this->bootTime_ != nullptr;};
        void deleteBootTime() { this->bootTime_ = nullptr;};
        inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
        inline JobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


        // canSkip Field Functions 
        bool hasCanSkip() const { return this->canSkip_ != nullptr;};
        void deleteCanSkip() { this->canSkip_ = nullptr;};
        inline bool getCanSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
        inline JobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


        // current Field Functions 
        bool hasCurrent() const { return this->current_ != nullptr;};
        void deleteCurrent() { this->current_ = nullptr;};
        inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
        inline JobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


        // ddlSql Field Functions 
        bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
        void deleteDdlSql() { this->ddlSql_ = nullptr;};
        inline string getDdlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
        inline JobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


        // delaySeconds Field Functions 
        bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
        void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
        inline int32_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
        inline JobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


        // destSchema Field Functions 
        bool hasDestSchema() const { return this->destSchema_ != nullptr;};
        void deleteDestSchema() { this->destSchema_ = nullptr;};
        inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
        inline JobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


        // diffRow Field Functions 
        bool hasDiffRow() const { return this->diffRow_ != nullptr;};
        void deleteDiffRow() { this->diffRow_ = nullptr;};
        inline int64_t getDiffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
        inline JobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


        // errDetail Field Functions 
        bool hasErrDetail() const { return this->errDetail_ != nullptr;};
        void deleteErrDetail() { this->errDetail_ = nullptr;};
        inline string getErrDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
        inline JobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline JobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline JobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline JobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ignoreFlag Field Functions 
        bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
        void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
        inline string getIgnoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
        inline JobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline JobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline JobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // logs Field Functions 
        bool hasLogs() const { return this->logs_ != nullptr;};
        void deleteLogs() { this->logs_ = nullptr;};
        inline const vector<JobProgress::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<JobProgress::Logs>) };
        inline vector<JobProgress::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<JobProgress::Logs>) };
        inline JobProgress& setLogs(const vector<JobProgress::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
        inline JobProgress& setLogs(vector<JobProgress::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


        // names Field Functions 
        bool hasNames() const { return this->names_ != nullptr;};
        void deleteNames() { this->names_ = nullptr;};
        inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
        inline JobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
        inline JobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // parentObj Field Functions 
        bool hasParentObj() const { return this->parentObj_ != nullptr;};
        void deleteParentObj() { this->parentObj_ = nullptr;};
        inline string getParentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
        inline JobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


        // repairMethod Field Functions 
        bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
        void deleteRepairMethod() { this->repairMethod_ = nullptr;};
        inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
        inline JobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        // skip Field Functions 
        bool hasSkip() const { return this->skip_ != nullptr;};
        void deleteSkip() { this->skip_ = nullptr;};
        inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
        inline JobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


        // sourceSchema Field Functions 
        bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
        void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
        inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
        inline JobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline JobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // sub Field Functions 
        bool hasSub() const { return this->sub_ != nullptr;};
        void deleteSub() { this->sub_ = nullptr;};
        inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
        inline JobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


        // targetNames Field Functions 
        bool hasTargetNames() const { return this->targetNames_ != nullptr;};
        void deleteTargetNames() { this->targetNames_ = nullptr;};
        inline string getTargetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
        inline JobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline JobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // The specific project start time, formatted as <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
        shared_ptr<string> bootTime_ {};
        // Whether DTS supports skipping a project after it fails. Return values: * **true**: Yes * **false**: No
        shared_ptr<bool> canSkip_ {};
        // The number of currently running tasks.
        shared_ptr<string> current_ {};
        // The DDL operation to be executed.
        shared_ptr<string> ddlSql_ {};
        // Task delay time
        shared_ptr<int32_t> delaySeconds_ {};
        // Name of the database to which the migration objects in the target instance belong.
        shared_ptr<string> destSchema_ {};
        // This parameter will be deprecated.
        shared_ptr<int64_t> diffRow_ {};
        // Details of the error when a specific project fails.
        shared_ptr<string> errDetail_ {};
        // Error message prompt when a specific project encounters an error.
        shared_ptr<string> errMsg_ {};
        // Task completion time, formatted as yyyy-MM-ddTHH:mm:ssZ (UTC time).
        shared_ptr<string> finishTime_ {};
        // The ID of the record in the metadata database.
        shared_ptr<string> id_ {};
        // Whether to directly ignore this specific item and move to the next one. Return values:
        // - **N**: No. - **Y**: Yes.
        shared_ptr<string> ignoreFlag_ {};
        // Specific project name.
        shared_ptr<string> item_ {};
        // Task ID.
        shared_ptr<string> jobId_ {};
        // Error execution log information.
        shared_ptr<vector<JobProgress::Logs>> logs_ {};
        // Specific project name.
        shared_ptr<string> names_ {};
        // Project number.
        shared_ptr<int32_t> orderNum_ {};
        // This parameter will be deprecated.
        shared_ptr<string> parentObj_ {};
        // The corresponding remediation method when the pre-check fails.
        shared_ptr<string> repairMethod_ {};
        // After this specific item fails, do you set to skip this item. Return values: * **true**: Yes * **false**: No
        shared_ptr<bool> skip_ {};
        // Name of the database to which the migration objects in the source instance belong.
        shared_ptr<string> sourceSchema_ {};
        // Check result, the return value is: - **Failed**: Failure. - **Success**: Completed.
        shared_ptr<string> state_ {};
        // Progress of sub-projects under a specific project. > If it returns <b>[]</b>, it indicates there are no sub-projects.
        shared_ptr<string> sub_ {};
        // Name of the target object
        shared_ptr<string> targetNames_ {};
        // The total number of projects.
        shared_ptr<int32_t> total_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->destRegion_ == nullptr && this->destRegionCidr_ == nullptr && this->destinationEndpointType_ == nullptr && this->errorItem_ == nullptr && this->hostRegion_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobProgress_ == nullptr && this->sourceEndpointType_ == nullptr && this->srcRegion_ == nullptr
        && this->srcRegionCidr_ == nullptr && this->state_ == nullptr && this->total_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline FullNetCheckJobStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // destRegion Field Functions 
      bool hasDestRegion() const { return this->destRegion_ != nullptr;};
      void deleteDestRegion() { this->destRegion_ = nullptr;};
      inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
      inline FullNetCheckJobStatus& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


      // destRegionCidr Field Functions 
      bool hasDestRegionCidr() const { return this->destRegionCidr_ != nullptr;};
      void deleteDestRegionCidr() { this->destRegionCidr_ = nullptr;};
      inline string getDestRegionCidr() const { DARABONBA_PTR_GET_DEFAULT(destRegionCidr_, "") };
      inline FullNetCheckJobStatus& setDestRegionCidr(string destRegionCidr) { DARABONBA_PTR_SET_VALUE(destRegionCidr_, destRegionCidr) };


      // destinationEndpointType Field Functions 
      bool hasDestinationEndpointType() const { return this->destinationEndpointType_ != nullptr;};
      void deleteDestinationEndpointType() { this->destinationEndpointType_ = nullptr;};
      inline string getDestinationEndpointType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointType_, "") };
      inline FullNetCheckJobStatus& setDestinationEndpointType(string destinationEndpointType) { DARABONBA_PTR_SET_VALUE(destinationEndpointType_, destinationEndpointType) };


      // errorItem Field Functions 
      bool hasErrorItem() const { return this->errorItem_ != nullptr;};
      void deleteErrorItem() { this->errorItem_ = nullptr;};
      inline int32_t getErrorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
      inline FullNetCheckJobStatus& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


      // hostRegion Field Functions 
      bool hasHostRegion() const { return this->hostRegion_ != nullptr;};
      void deleteHostRegion() { this->hostRegion_ = nullptr;};
      inline string getHostRegion() const { DARABONBA_PTR_GET_DEFAULT(hostRegion_, "") };
      inline FullNetCheckJobStatus& setHostRegion(string hostRegion) { DARABONBA_PTR_SET_VALUE(hostRegion_, hostRegion) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline FullNetCheckJobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline FullNetCheckJobStatus& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobProgress Field Functions 
      bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
      void deleteJobProgress() { this->jobProgress_ = nullptr;};
      inline const vector<FullNetCheckJobStatus::JobProgress> & getJobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<FullNetCheckJobStatus::JobProgress>) };
      inline vector<FullNetCheckJobStatus::JobProgress> getJobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<FullNetCheckJobStatus::JobProgress>) };
      inline FullNetCheckJobStatus& setJobProgress(const vector<FullNetCheckJobStatus::JobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
      inline FullNetCheckJobStatus& setJobProgress(vector<FullNetCheckJobStatus::JobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


      // sourceEndpointType Field Functions 
      bool hasSourceEndpointType() const { return this->sourceEndpointType_ != nullptr;};
      void deleteSourceEndpointType() { this->sourceEndpointType_ = nullptr;};
      inline string getSourceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointType_, "") };
      inline FullNetCheckJobStatus& setSourceEndpointType(string sourceEndpointType) { DARABONBA_PTR_SET_VALUE(sourceEndpointType_, sourceEndpointType) };


      // srcRegion Field Functions 
      bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
      void deleteSrcRegion() { this->srcRegion_ = nullptr;};
      inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
      inline FullNetCheckJobStatus& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


      // srcRegionCidr Field Functions 
      bool hasSrcRegionCidr() const { return this->srcRegionCidr_ != nullptr;};
      void deleteSrcRegionCidr() { this->srcRegionCidr_ = nullptr;};
      inline string getSrcRegionCidr() const { DARABONBA_PTR_GET_DEFAULT(srcRegionCidr_, "") };
      inline FullNetCheckJobStatus& setSrcRegionCidr(string srcRegionCidr) { DARABONBA_PTR_SET_VALUE(srcRegionCidr_, srcRegionCidr) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline FullNetCheckJobStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline FullNetCheckJobStatus& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Task code, **01** represents pre-check.
      shared_ptr<string> code_ {};
      // ID of the region to which the target network segment belongs.
      shared_ptr<string> destRegion_ {};
      // Destination network segment.
      shared_ptr<string> destRegionCidr_ {};
      // The access method of the target instance, with return values as follows: - **ALIYUN**: Access method is **cloud instance**. - **OTHER**: Access method is **public IP**. - **ECS**: Access method is **ECS self-built database**. - **EXPRESS**: Access method is **Express Connect / VPN Gateway / Smart Gateway**. - **CEN**: Access method is **Cloud Enterprise Network (CEN)**. - **DG**: Access method is **Database Gateway (DG)**.
      shared_ptr<string> destinationEndpointType_ {};
      // Number of pre-check failed items
      shared_ptr<int32_t> errorItem_ {};
      // The region ID of the instance\\"s running node.
      shared_ptr<string> hostRegion_ {};
      // Task ID.
      shared_ptr<string> jobId_ {};
      // Task name.
      shared_ptr<string> jobName_ {};
      // A list of specific items for the task and their execution progress.
      shared_ptr<vector<FullNetCheckJobStatus::JobProgress>> jobProgress_ {};
      // The access method of the source instance, with return values as follows: - **ALIYUN**: Access method is **cloud instance**. - **OTHER**: Access method is **public IP**. - **ECS**: Access method is **ECS self-built database**. - **EXPRESS**: Access method is **dedicated line/VPN gateway/smart gateway**. - **CEN**: Access method is **Cloud Enterprise Network CEN**. - **DG**: Access method is **Database Gateway DG**.
      shared_ptr<string> sourceEndpointType_ {};
      // ID of the region to which the source network segment belongs.
      shared_ptr<string> srcRegion_ {};
      // Source network segment.
      shared_ptr<string> srcRegionCidr_ {};
      // Check result, the return value is: - **Failed**: Failure. - **Success**: Completed.
      shared_ptr<string> state_ {};
      // Total number of items in the project.
      shared_ptr<int32_t> total_ {};
    };

    class AnalysisJobProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnalysisJobProgress& obj) { 
        DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
        DARABONBA_PTR_TO_JSON(CanSkip, canSkip_);
        DARABONBA_PTR_TO_JSON(Current, current_);
        DARABONBA_PTR_TO_JSON(DdlSql, ddlSql_);
        DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_TO_JSON(DiffRow, diffRow_);
        DARABONBA_PTR_TO_JSON(ErrDetail, errDetail_);
        DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IgnoreFlag, ignoreFlag_);
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(Names, names_);
        DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
        DARABONBA_PTR_TO_JSON(ParentObj, parentObj_);
        DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(SourceSchema, sourceSchema_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Sub, sub_);
        DARABONBA_PTR_TO_JSON(TargetNames, targetNames_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, AnalysisJobProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
        DARABONBA_PTR_FROM_JSON(CanSkip, canSkip_);
        DARABONBA_PTR_FROM_JSON(Current, current_);
        DARABONBA_PTR_FROM_JSON(DdlSql, ddlSql_);
        DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_FROM_JSON(DiffRow, diffRow_);
        DARABONBA_PTR_FROM_JSON(ErrDetail, errDetail_);
        DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IgnoreFlag, ignoreFlag_);
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(Names, names_);
        DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
        DARABONBA_PTR_FROM_JSON(ParentObj, parentObj_);
        DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(SourceSchema, sourceSchema_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Sub, sub_);
        DARABONBA_PTR_FROM_JSON(TargetNames, targetNames_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      AnalysisJobProgress() = default ;
      AnalysisJobProgress(const AnalysisJobProgress &) = default ;
      AnalysisJobProgress(AnalysisJobProgress &&) = default ;
      AnalysisJobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnalysisJobProgress() = default ;
      AnalysisJobProgress& operator=(const AnalysisJobProgress &) = default ;
      AnalysisJobProgress& operator=(AnalysisJobProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(ErrData, errData_);
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(ErrType, errType_);
          DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrData, errData_);
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(ErrType, errType_);
          DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errData_ == nullptr
        && this->errMsg_ == nullptr && this->errType_ == nullptr && this->logLevel_ == nullptr; };
        // errData Field Functions 
        bool hasErrData() const { return this->errData_ != nullptr;};
        void deleteErrData() { this->errData_ = nullptr;};
        inline string getErrData() const { DARABONBA_PTR_GET_DEFAULT(errData_, "") };
        inline Logs& setErrData(string errData) { DARABONBA_PTR_SET_VALUE(errData_, errData) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline Logs& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // errType Field Functions 
        bool hasErrType() const { return this->errType_ != nullptr;};
        void deleteErrType() { this->errType_ = nullptr;};
        inline string getErrType() const { DARABONBA_PTR_GET_DEFAULT(errType_, "") };
        inline Logs& setErrType(string errType) { DARABONBA_PTR_SET_VALUE(errType_, errType) };


        // logLevel Field Functions 
        bool hasLogLevel() const { return this->logLevel_ != nullptr;};
        void deleteLogLevel() { this->logLevel_ = nullptr;};
        inline string getLogLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
        inline Logs& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


      protected:
        // Error message
        shared_ptr<string> errData_ {};
        // Error message from DTS when a specific project encounters an error.
        shared_ptr<string> errMsg_ {};
        // Error type.
        shared_ptr<string> errType_ {};
        // The level of the log.
        shared_ptr<string> logLevel_ {};
      };

      virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->canSkip_ == nullptr && this->current_ == nullptr && this->ddlSql_ == nullptr && this->delaySeconds_ == nullptr && this->destSchema_ == nullptr
        && this->diffRow_ == nullptr && this->errDetail_ == nullptr && this->errMsg_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->ignoreFlag_ == nullptr && this->item_ == nullptr && this->jobId_ == nullptr && this->logs_ == nullptr && this->names_ == nullptr
        && this->orderNum_ == nullptr && this->parentObj_ == nullptr && this->repairMethod_ == nullptr && this->skip_ == nullptr && this->sourceSchema_ == nullptr
        && this->state_ == nullptr && this->sub_ == nullptr && this->targetNames_ == nullptr && this->total_ == nullptr; };
      // bootTime Field Functions 
      bool hasBootTime() const { return this->bootTime_ != nullptr;};
      void deleteBootTime() { this->bootTime_ = nullptr;};
      inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
      inline AnalysisJobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


      // canSkip Field Functions 
      bool hasCanSkip() const { return this->canSkip_ != nullptr;};
      void deleteCanSkip() { this->canSkip_ = nullptr;};
      inline bool getCanSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
      inline AnalysisJobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


      // current Field Functions 
      bool hasCurrent() const { return this->current_ != nullptr;};
      void deleteCurrent() { this->current_ = nullptr;};
      inline string getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
      inline AnalysisJobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


      // ddlSql Field Functions 
      bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
      void deleteDdlSql() { this->ddlSql_ = nullptr;};
      inline string getDdlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
      inline AnalysisJobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


      // delaySeconds Field Functions 
      bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
      void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
      inline int32_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
      inline AnalysisJobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


      // destSchema Field Functions 
      bool hasDestSchema() const { return this->destSchema_ != nullptr;};
      void deleteDestSchema() { this->destSchema_ = nullptr;};
      inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
      inline AnalysisJobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


      // diffRow Field Functions 
      bool hasDiffRow() const { return this->diffRow_ != nullptr;};
      void deleteDiffRow() { this->diffRow_ = nullptr;};
      inline int64_t getDiffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
      inline AnalysisJobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


      // errDetail Field Functions 
      bool hasErrDetail() const { return this->errDetail_ != nullptr;};
      void deleteErrDetail() { this->errDetail_ = nullptr;};
      inline string getErrDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
      inline AnalysisJobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline AnalysisJobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline AnalysisJobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline AnalysisJobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ignoreFlag Field Functions 
      bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
      void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
      inline string getIgnoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
      inline AnalysisJobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline AnalysisJobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AnalysisJobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<AnalysisJobProgress::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<AnalysisJobProgress::Logs>) };
      inline vector<AnalysisJobProgress::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<AnalysisJobProgress::Logs>) };
      inline AnalysisJobProgress& setLogs(const vector<AnalysisJobProgress::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline AnalysisJobProgress& setLogs(vector<AnalysisJobProgress::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // names Field Functions 
      bool hasNames() const { return this->names_ != nullptr;};
      void deleteNames() { this->names_ = nullptr;};
      inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
      inline AnalysisJobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


      // orderNum Field Functions 
      bool hasOrderNum() const { return this->orderNum_ != nullptr;};
      void deleteOrderNum() { this->orderNum_ = nullptr;};
      inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
      inline AnalysisJobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


      // parentObj Field Functions 
      bool hasParentObj() const { return this->parentObj_ != nullptr;};
      void deleteParentObj() { this->parentObj_ = nullptr;};
      inline string getParentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
      inline AnalysisJobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


      // repairMethod Field Functions 
      bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
      void deleteRepairMethod() { this->repairMethod_ = nullptr;};
      inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
      inline AnalysisJobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline AnalysisJobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // sourceSchema Field Functions 
      bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
      void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
      inline string getSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
      inline AnalysisJobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AnalysisJobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // sub Field Functions 
      bool hasSub() const { return this->sub_ != nullptr;};
      void deleteSub() { this->sub_ = nullptr;};
      inline string getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
      inline AnalysisJobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


      // targetNames Field Functions 
      bool hasTargetNames() const { return this->targetNames_ != nullptr;};
      void deleteTargetNames() { this->targetNames_ = nullptr;};
      inline string getTargetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
      inline AnalysisJobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline AnalysisJobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The specific project start time, formatted as <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
      shared_ptr<string> bootTime_ {};
      // Whether to support skipping this sub-item.
      shared_ptr<bool> canSkip_ {};
      // The number of currently running subtasks.
      shared_ptr<string> current_ {};
      // The DDL operation to be executed.
      shared_ptr<string> ddlSql_ {};
      // Task delay time
      shared_ptr<int32_t> delaySeconds_ {};
      // Name of the database to which the migration objects in the target instance belong.
      shared_ptr<string> destSchema_ {};
      // This parameter will be deprecated.
      shared_ptr<int64_t> diffRow_ {};
      // Error details when the project encounters an error.
      shared_ptr<string> errDetail_ {};
      // Specific error message.
      shared_ptr<string> errMsg_ {};
      // The end time of the evaluation task, formatted as <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
      shared_ptr<string> finishTime_ {};
      // The ID of this evaluation item in the database.
      shared_ptr<string> id_ {};
      // Whether to directly ignore this specific item and move to the next one. Return values:
      // - **N**: No. - **Y**: Yes.
      shared_ptr<string> ignoreFlag_ {};
      // Name of the evaluation item
      shared_ptr<string> item_ {};
      // The ID of the evaluation task.
      shared_ptr<string> jobId_ {};
      // Sub-assessment item.
      shared_ptr<vector<AnalysisJobProgress::Logs>> logs_ {};
      // Name of the evaluation item
      shared_ptr<string> names_ {};
      // The number of the evaluation item.
      shared_ptr<int32_t> orderNum_ {};
      // This parameter will be deprecated.
      shared_ptr<string> parentObj_ {};
      // Remediation method for the evaluation item.
      shared_ptr<string> repairMethod_ {};
      // If this evaluation item fails, whether you set to skip this item. Return values: * **true**: Yes * **false**: No
      shared_ptr<bool> skip_ {};
      // Name of the database to which the migration objects in the source instance belong.
      shared_ptr<string> sourceSchema_ {};
      // The result of the evaluation, with return values being: - **Failed**: Failure. - **Success**: Success.
      shared_ptr<string> state_ {};
      // Progress of sub-projects under a specific project. > If it returns <b>[]</b>, it indicates there are no sub-projects.
      shared_ptr<string> sub_ {};
      // Name of the target object
      shared_ptr<string> targetNames_ {};
      // The total number of specific items in the sub-task.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->analysisJobProgress_ == nullptr
        && this->code_ == nullptr && this->errorAnalysisItem_ == nullptr && this->errorItem_ == nullptr && this->fullNetCheckJobStatus_ == nullptr && this->httpStatusCode_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobProgress_ == nullptr && this->networkDiagnosisResult_ == nullptr && this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr && this->subDistributedJobStatus_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr && this->totalRecordCount_ == nullptr; };
    // analysisJobProgress Field Functions 
    bool hasAnalysisJobProgress() const { return this->analysisJobProgress_ != nullptr;};
    void deleteAnalysisJobProgress() { this->analysisJobProgress_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress> & getAnalysisJobProgress() const { DARABONBA_PTR_GET_CONST(analysisJobProgress_, vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress>) };
    inline vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress> getAnalysisJobProgress() { DARABONBA_PTR_GET(analysisJobProgress_, vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress>) };
    inline DescribePreCheckStatusResponseBody& setAnalysisJobProgress(const vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress> & analysisJobProgress) { DARABONBA_PTR_SET_VALUE(analysisJobProgress_, analysisJobProgress) };
    inline DescribePreCheckStatusResponseBody& setAnalysisJobProgress(vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress> && analysisJobProgress) { DARABONBA_PTR_SET_RVALUE(analysisJobProgress_, analysisJobProgress) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorAnalysisItem Field Functions 
    bool hasErrorAnalysisItem() const { return this->errorAnalysisItem_ != nullptr;};
    void deleteErrorAnalysisItem() { this->errorAnalysisItem_ = nullptr;};
    inline int32_t getErrorAnalysisItem() const { DARABONBA_PTR_GET_DEFAULT(errorAnalysisItem_, 0) };
    inline DescribePreCheckStatusResponseBody& setErrorAnalysisItem(int32_t errorAnalysisItem) { DARABONBA_PTR_SET_VALUE(errorAnalysisItem_, errorAnalysisItem) };


    // errorItem Field Functions 
    bool hasErrorItem() const { return this->errorItem_ != nullptr;};
    void deleteErrorItem() { this->errorItem_ = nullptr;};
    inline int32_t getErrorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
    inline DescribePreCheckStatusResponseBody& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


    // fullNetCheckJobStatus Field Functions 
    bool hasFullNetCheckJobStatus() const { return this->fullNetCheckJobStatus_ != nullptr;};
    void deleteFullNetCheckJobStatus() { this->fullNetCheckJobStatus_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus> & getFullNetCheckJobStatus() const { DARABONBA_PTR_GET_CONST(fullNetCheckJobStatus_, vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus>) };
    inline vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus> getFullNetCheckJobStatus() { DARABONBA_PTR_GET(fullNetCheckJobStatus_, vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus>) };
    inline DescribePreCheckStatusResponseBody& setFullNetCheckJobStatus(const vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus> & fullNetCheckJobStatus) { DARABONBA_PTR_SET_VALUE(fullNetCheckJobStatus_, fullNetCheckJobStatus) };
    inline DescribePreCheckStatusResponseBody& setFullNetCheckJobStatus(vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus> && fullNetCheckJobStatus) { DARABONBA_PTR_SET_RVALUE(fullNetCheckJobStatus_, fullNetCheckJobStatus) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribePreCheckStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribePreCheckStatusResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobProgress Field Functions 
    bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
    void deleteJobProgress() { this->jobProgress_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBody::JobProgress> & getJobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<DescribePreCheckStatusResponseBody::JobProgress>) };
    inline vector<DescribePreCheckStatusResponseBody::JobProgress> getJobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<DescribePreCheckStatusResponseBody::JobProgress>) };
    inline DescribePreCheckStatusResponseBody& setJobProgress(const vector<DescribePreCheckStatusResponseBody::JobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
    inline DescribePreCheckStatusResponseBody& setJobProgress(vector<DescribePreCheckStatusResponseBody::JobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


    // networkDiagnosisResult Field Functions 
    bool hasNetworkDiagnosisResult() const { return this->networkDiagnosisResult_ != nullptr;};
    void deleteNetworkDiagnosisResult() { this->networkDiagnosisResult_ = nullptr;};
    inline const DescribePreCheckStatusResponseBody::NetworkDiagnosisResult & getNetworkDiagnosisResult() const { DARABONBA_PTR_GET_CONST(networkDiagnosisResult_, DescribePreCheckStatusResponseBody::NetworkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBody::NetworkDiagnosisResult getNetworkDiagnosisResult() { DARABONBA_PTR_GET(networkDiagnosisResult_, DescribePreCheckStatusResponseBody::NetworkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBody& setNetworkDiagnosisResult(const DescribePreCheckStatusResponseBody::NetworkDiagnosisResult & networkDiagnosisResult) { DARABONBA_PTR_SET_VALUE(networkDiagnosisResult_, networkDiagnosisResult) };
    inline DescribePreCheckStatusResponseBody& setNetworkDiagnosisResult(DescribePreCheckStatusResponseBody::NetworkDiagnosisResult && networkDiagnosisResult) { DARABONBA_PTR_SET_RVALUE(networkDiagnosisResult_, networkDiagnosisResult) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePreCheckStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline DescribePreCheckStatusResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subDistributedJobStatus Field Functions 
    bool hasSubDistributedJobStatus() const { return this->subDistributedJobStatus_ != nullptr;};
    void deleteSubDistributedJobStatus() { this->subDistributedJobStatus_ = nullptr;};
    inline const vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus> & getSubDistributedJobStatus() const { DARABONBA_PTR_GET_CONST(subDistributedJobStatus_, vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus>) };
    inline vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus> getSubDistributedJobStatus() { DARABONBA_PTR_GET(subDistributedJobStatus_, vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus>) };
    inline DescribePreCheckStatusResponseBody& setSubDistributedJobStatus(const vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus> & subDistributedJobStatus) { DARABONBA_PTR_SET_VALUE(subDistributedJobStatus_, subDistributedJobStatus) };
    inline DescribePreCheckStatusResponseBody& setSubDistributedJobStatus(vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus> && subDistributedJobStatus) { DARABONBA_PTR_SET_RVALUE(subDistributedJobStatus_, subDistributedJobStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePreCheckStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribePreCheckStatusResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Display list of evaluation tasks
    shared_ptr<vector<DescribePreCheckStatusResponseBody::AnalysisJobProgress>> analysisJobProgress_ {};
    // The task code that indicates the type of the subtask. Valid values:
    // 
    // *   **01**: precheck.
    // *   **02**: schema migration or initial schema synchronization.
    // *   **03**: full data migration or initial full data synchronization.
    // *   **04**: incremental data migration or synchronization.
    shared_ptr<string> code_ {};
    // Number of failed evaluation items
    shared_ptr<int32_t> errorAnalysisItem_ {};
    // The total number of subtask failures.
    shared_ptr<int32_t> errorItem_ {};
    // Network-wide inspection results.
    shared_ptr<vector<DescribePreCheckStatusResponseBody::FullNetCheckJobStatus>> fullNetCheckJobStatus_ {};
    // The status code that is returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the data migration or synchronization task.
    shared_ptr<string> jobId_ {};
    // The name of the subtask.
    shared_ptr<string> jobName_ {};
    // The subtasks and the progress of each subtask.
    shared_ptr<vector<DescribePreCheckStatusResponseBody::JobProgress>> jobProgress_ {};
    // Network diagnosis result
    shared_ptr<DescribePreCheckStatusResponseBody::NetworkDiagnosisResult> networkDiagnosisResult_ {};
    // The page number. Pages start from page 1. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the subtask. Valid values:
    // 
    // *   **NotStarted**: The subtask is not started.
    // *   **Suspending**: The subtask is paused.
    // *   **Checking**: The subtask is being checked.
    // *   **Migrating**: The subtask is in progress. Data is being migrated.
    // *   **Failed**: The subtask failed.
    // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
    // *   **Finished**: The subtask is complete.
    shared_ptr<string> state_ {};
    // The information about the distributed subtasks.
    shared_ptr<vector<DescribePreCheckStatusResponseBody::SubDistributedJobStatus>> subDistributedJobStatus_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of subtasks.
    shared_ptr<int32_t> total_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
