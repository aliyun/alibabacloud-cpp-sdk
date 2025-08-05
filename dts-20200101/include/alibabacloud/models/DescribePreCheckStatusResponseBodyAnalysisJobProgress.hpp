// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYANALYSISJOBPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYANALYSISJOBPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyAnalysisJobProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyAnalysisJobProgress& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyAnalysisJobProgress& obj) { 
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
    DescribePreCheckStatusResponseBodyAnalysisJobProgress() = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgress(const DescribePreCheckStatusResponseBodyAnalysisJobProgress &) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgress(DescribePreCheckStatusResponseBodyAnalysisJobProgress &&) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyAnalysisJobProgress() = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgress& operator=(const DescribePreCheckStatusResponseBodyAnalysisJobProgress &) = default ;
    DescribePreCheckStatusResponseBodyAnalysisJobProgress& operator=(DescribePreCheckStatusResponseBodyAnalysisJobProgress &&) = default ;
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
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // canSkip Field Functions 
    bool hasCanSkip() const { return this->canSkip_ != nullptr;};
    void deleteCanSkip() { this->canSkip_ = nullptr;};
    inline bool canSkip() const { DARABONBA_PTR_GET_DEFAULT(canSkip_, false) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setCanSkip(bool canSkip) { DARABONBA_PTR_SET_VALUE(canSkip_, canSkip) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string current() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // ddlSql Field Functions 
    bool hasDdlSql() const { return this->ddlSql_ != nullptr;};
    void deleteDdlSql() { this->ddlSql_ = nullptr;};
    inline string ddlSql() const { DARABONBA_PTR_GET_DEFAULT(ddlSql_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setDdlSql(string ddlSql) { DARABONBA_PTR_SET_VALUE(ddlSql_, ddlSql) };


    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int32_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setDelaySeconds(int32_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // destSchema Field Functions 
    bool hasDestSchema() const { return this->destSchema_ != nullptr;};
    void deleteDestSchema() { this->destSchema_ = nullptr;};
    inline string destSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


    // diffRow Field Functions 
    bool hasDiffRow() const { return this->diffRow_ != nullptr;};
    void deleteDiffRow() { this->diffRow_ = nullptr;};
    inline int64_t diffRow() const { DARABONBA_PTR_GET_DEFAULT(diffRow_, 0L) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setDiffRow(int64_t diffRow) { DARABONBA_PTR_SET_VALUE(diffRow_, diffRow) };


    // errDetail Field Functions 
    bool hasErrDetail() const { return this->errDetail_ != nullptr;};
    void deleteErrDetail() { this->errDetail_ = nullptr;};
    inline string errDetail() const { DARABONBA_PTR_GET_DEFAULT(errDetail_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setErrDetail(string errDetail) { DARABONBA_PTR_SET_VALUE(errDetail_, errDetail) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ignoreFlag Field Functions 
    bool hasIgnoreFlag() const { return this->ignoreFlag_ != nullptr;};
    void deleteIgnoreFlag() { this->ignoreFlag_ = nullptr;};
    inline string ignoreFlag() const { DARABONBA_PTR_GET_DEFAULT(ignoreFlag_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setIgnoreFlag(string ignoreFlag) { DARABONBA_PTR_SET_VALUE(ignoreFlag_, ignoreFlag) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs>) };
    inline vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs>) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setLogs(const vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setLogs(vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int32_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // parentObj Field Functions 
    bool hasParentObj() const { return this->parentObj_ != nullptr;};
    void deleteParentObj() { this->parentObj_ = nullptr;};
    inline string parentObj() const { DARABONBA_PTR_GET_DEFAULT(parentObj_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setParentObj(string parentObj) { DARABONBA_PTR_SET_VALUE(parentObj_, parentObj) };


    // repairMethod Field Functions 
    bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
    void deleteRepairMethod() { this->repairMethod_ = nullptr;};
    inline string repairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sourceSchema Field Functions 
    bool hasSourceSchema() const { return this->sourceSchema_ != nullptr;};
    void deleteSourceSchema() { this->sourceSchema_ = nullptr;};
    inline string sourceSchema() const { DARABONBA_PTR_GET_DEFAULT(sourceSchema_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setSourceSchema(string sourceSchema) { DARABONBA_PTR_SET_VALUE(sourceSchema_, sourceSchema) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline string sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setSub(string sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // targetNames Field Functions 
    bool hasTargetNames() const { return this->targetNames_ != nullptr;};
    void deleteTargetNames() { this->targetNames_ = nullptr;};
    inline string targetNames() const { DARABONBA_PTR_GET_DEFAULT(targetNames_, "") };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setTargetNames(string targetNames) { DARABONBA_PTR_SET_VALUE(targetNames_, targetNames) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBodyAnalysisJobProgress& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The specific project start time, formatted as <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    std::shared_ptr<string> bootTime_ = nullptr;
    // Whether to support skipping this sub-item.
    std::shared_ptr<bool> canSkip_ = nullptr;
    // The number of currently running subtasks.
    std::shared_ptr<string> current_ = nullptr;
    // The DDL operation to be executed.
    std::shared_ptr<string> ddlSql_ = nullptr;
    // Task delay time
    std::shared_ptr<int32_t> delaySeconds_ = nullptr;
    // Name of the database to which the migration objects in the target instance belong.
    std::shared_ptr<string> destSchema_ = nullptr;
    // This parameter will be deprecated.
    std::shared_ptr<int64_t> diffRow_ = nullptr;
    // Error details when the project encounters an error.
    std::shared_ptr<string> errDetail_ = nullptr;
    // Specific error message.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The end time of the evaluation task, formatted as <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of this evaluation item in the database.
    std::shared_ptr<string> id_ = nullptr;
    // Whether to directly ignore this specific item and move to the next one. Return values:
    // - **N**: No. - **Y**: Yes.
    std::shared_ptr<string> ignoreFlag_ = nullptr;
    // Name of the evaluation item
    std::shared_ptr<string> item_ = nullptr;
    // The ID of the evaluation task.
    std::shared_ptr<string> jobId_ = nullptr;
    // Sub-assessment item.
    std::shared_ptr<vector<Models::DescribePreCheckStatusResponseBodyAnalysisJobProgressLogs>> logs_ = nullptr;
    // Name of the evaluation item
    std::shared_ptr<string> names_ = nullptr;
    // The number of the evaluation item.
    std::shared_ptr<int32_t> orderNum_ = nullptr;
    // This parameter will be deprecated.
    std::shared_ptr<string> parentObj_ = nullptr;
    // Remediation method for the evaluation item.
    std::shared_ptr<string> repairMethod_ = nullptr;
    // If this evaluation item fails, whether you set to skip this item. Return values: * **true**: Yes * **false**: No
    std::shared_ptr<bool> skip_ = nullptr;
    // Name of the database to which the migration objects in the source instance belong.
    std::shared_ptr<string> sourceSchema_ = nullptr;
    // The result of the evaluation, with return values being: - **Failed**: Failure. - **Success**: Success.
    std::shared_ptr<string> state_ = nullptr;
    // Progress of sub-projects under a specific project. > If it returns <b>[]</b>, it indicates there are no sub-projects.
    std::shared_ptr<string> sub_ = nullptr;
    // Name of the target object
    std::shared_ptr<string> targetNames_ = nullptr;
    // The total number of specific items in the sub-task.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
