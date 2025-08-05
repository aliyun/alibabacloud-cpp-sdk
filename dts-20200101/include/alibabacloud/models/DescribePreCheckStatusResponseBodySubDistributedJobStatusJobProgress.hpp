// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUSJOBPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUSJOBPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& obj) { 
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
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress(const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress(DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress &&) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& operator=(const DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& operator=(DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bootTime_ != nullptr
        && this->canSkip_ != nullptr && this->current_ != nullptr && this->ddlSql_ != nullptr && this->delaySeconds_ != nullptr && this->destSchema_ != nullptr
        && this->diffRow_ != nullptr && this->errDetail_ != nullptr && this->errMsg_ != nullptr && this->finishTime_ != nullptr && this->id_ != nullptr
        && this->ignoreFlag_ != nullptr && this->item_ != nullptr && this->jobId_ != nullptr && this->logs_ != nullptr && this->names_ != nullptr
        && this->orderNum_ != nullptr && this->parentObj_ != nullptr && this->repairMethod_ != nullptr && this->skip_ != nullptr && this->sourceSchema_ != nullptr
        && this->state_ != nullptr && this->sub_ != nullptr && this->targetNames_ != nullptr && this->total_ != nullptr; };
    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline string bootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // canSkip Field Functions 
    bool hasCanSkip() const { return this->canSkip_ != nullptr;};
    void deleteCanSkip() { this->canSkip_ = nullptr;};
    inline bool canSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string current() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // ddlSql Field Functions 
    bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
    void deleteDdlSql() { this->ddlSql_ = nullptr;};
    inline string ddlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int32_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string destSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // diffRow Field Functions 
    bool hasDiffRow() const { return this->diffRow_ != nullptr;};
    void deleteDiffRow() { this->diffRow_ = nullptr;};
    inline int64_t diffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


    // errDetail Field Functions 
    bool hasErrDetail() const { return this->errDetail_ != nullptr;};
    void deleteErrDetail() { this->errDetail_ = nullptr;};
    inline string errDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ignoreFlag Field Functions 
    bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
    void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
    inline string ignoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs>) };
    inline vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs>) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setLogs(const vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setLogs(vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int32_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // parentObj Field Functions 
    bool hasParentObj() const { return this->parentObj_ != nullptr;};
    void deleteParentObj() { this->parentObj_ = nullptr;};
    inline string parentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


    // repairMethod Field Functions 
    bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
    void deleteRepairMethod() { this->repairMethod_ = nullptr;};
    inline string repairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sourceSchema Field Functions 
    bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
    void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
    inline string sourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // targetNames Field Functions 
    bool hasTargetNames() const { return this->targetNames_ != nullptr;};
    void deleteTargetNames() { this->targetNames_ = nullptr;};
    inline string targetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The time when the subtask was started. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> bootTime_ = nullptr;
    // Indicates whether the subtask can be ignored if it fails. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canSkip_ = nullptr;
    // The number of the subtasks that are running.
    std::shared_ptr<string> current_ = nullptr;
    // The DDL statements.
    std::shared_ptr<string> ddlSql_ = nullptr;
    // The latency of incremental data migration or synchronization.
    std::shared_ptr<int32_t> delaySeconds_ = nullptr;
    // The name of the database to which the object in the destination instance belongs.
    std::shared_ptr<string> destSchema_ = nullptr;
    // This parameter will be removed in the future.
    std::shared_ptr<int64_t> diffRow_ = nullptr;
    // The error details of the subtask failure.
    std::shared_ptr<string> errDetail_ = nullptr;
    // The error message of the subtask failure.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The time when the subtask was complete. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the entry in the metadatabase.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether DTS ignores the subtask and proceeds with the next subtask. Valid values:
    // 
    // *   **N**: no.
    // *   **Y**: yes.
    std::shared_ptr<string> ignoreFlag_ = nullptr;
    // The name of the subtask.
    std::shared_ptr<string> item_ = nullptr;
    // The subtask ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The operations logs of errors.
    std::shared_ptr<vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgressLogs>> logs_ = nullptr;
    // The name of the subtask.
    std::shared_ptr<string> names_ = nullptr;
    // The serial number of the subtask.
    std::shared_ptr<int32_t> orderNum_ = nullptr;
    // This parameter will be removed in the future.
    std::shared_ptr<string> parentObj_ = nullptr;
    // The method to fix a precheck failure.
    std::shared_ptr<string> repairMethod_ = nullptr;
    // Indicates whether the subtask was ignored. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> skip_ = nullptr;
    // The name of the database to which the object in the source instance belongs.
    std::shared_ptr<string> sourceSchema_ = nullptr;
    // The status of the subtask. Valid values:
    // 
    // *   **NotStarted**: The subtask is not started.
    // *   **Suspending**: The subtask is paused.
    // *   **Checking**: The subtask is being checked.
    // *   **Migrating**: The subtask is in progress. Data is being migrated.
    // *   **Failed**: The subtask failed.
    // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
    // *   **Finished**: The subtask is complete.
    std::shared_ptr<string> state_ = nullptr;
    // The sub-item progress of the subtask.
    // 
    // > If \\*\\*[]\\*\\* is returned, the subtask has no sub-item.
    std::shared_ptr<string> sub_ = nullptr;
    // The names of the objects that are migrated or synchronized.
    std::shared_ptr<string> targetNames_ = nullptr;
    // The total number of subtasks.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
