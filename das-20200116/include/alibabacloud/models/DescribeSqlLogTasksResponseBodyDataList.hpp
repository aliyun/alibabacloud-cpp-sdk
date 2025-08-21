// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSqlLogTasksResponseBodyDataListFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogTasksResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogTasksResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisTaskFinishTime, analysisTaskFinishTime_);
      DARABONBA_PTR_TO_JSON(AnalysisTaskStatus, analysisTaskStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InnerResult, innerResult_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ScanFileSize, scanFileSize_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogTasksResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisTaskFinishTime, analysisTaskFinishTime_);
      DARABONBA_PTR_FROM_JSON(AnalysisTaskStatus, analysisTaskStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InnerResult, innerResult_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ScanFileSize, scanFileSize_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeSqlLogTasksResponseBodyDataList() = default ;
    DescribeSqlLogTasksResponseBodyDataList(const DescribeSqlLogTasksResponseBodyDataList &) = default ;
    DescribeSqlLogTasksResponseBodyDataList(DescribeSqlLogTasksResponseBodyDataList &&) = default ;
    DescribeSqlLogTasksResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogTasksResponseBodyDataList() = default ;
    DescribeSqlLogTasksResponseBodyDataList& operator=(const DescribeSqlLogTasksResponseBodyDataList &) = default ;
    DescribeSqlLogTasksResponseBodyDataList& operator=(DescribeSqlLogTasksResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisTaskFinishTime_ != nullptr
        && this->analysisTaskStatus_ != nullptr && this->createTime_ != nullptr && this->end_ != nullptr && this->expire_ != nullptr && this->filters_ != nullptr
        && this->innerResult_ != nullptr && this->instanceId_ != nullptr && this->logCount_ != nullptr && this->name_ != nullptr && this->progress_ != nullptr
        && this->result_ != nullptr && this->scanFileSize_ != nullptr && this->start_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr
        && this->taskType_ != nullptr; };
    // analysisTaskFinishTime Field Functions 
    bool hasAnalysisTaskFinishTime() const { return this->analysisTaskFinishTime_ != nullptr;};
    void deleteAnalysisTaskFinishTime() { this->analysisTaskFinishTime_ = nullptr;};
    inline int64_t analysisTaskFinishTime() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskFinishTime_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setAnalysisTaskFinishTime(int64_t analysisTaskFinishTime) { DARABONBA_PTR_SET_VALUE(analysisTaskFinishTime_, analysisTaskFinishTime) };


    // analysisTaskStatus Field Functions 
    bool hasAnalysisTaskStatus() const { return this->analysisTaskStatus_ != nullptr;};
    void deleteAnalysisTaskStatus() { this->analysisTaskStatus_ = nullptr;};
    inline string analysisTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskStatus_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setAnalysisTaskStatus(string analysisTaskStatus) { DARABONBA_PTR_SET_VALUE(analysisTaskStatus_, analysisTaskStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline bool expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, false) };
    inline DescribeSqlLogTasksResponseBodyDataList& setExpire(bool expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters>) };
    inline vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters>) };
    inline DescribeSqlLogTasksResponseBodyDataList& setFilters(const vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeSqlLogTasksResponseBodyDataList& setFilters(vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // innerResult Field Functions 
    bool hasInnerResult() const { return this->innerResult_ != nullptr;};
    void deleteInnerResult() { this->innerResult_ = nullptr;};
    inline string innerResult() const { DARABONBA_PTR_GET_DEFAULT(innerResult_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setInnerResult(string innerResult) { DARABONBA_PTR_SET_VALUE(innerResult_, innerResult) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int64_t logCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeSqlLogTasksResponseBodyDataList& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scanFileSize Field Functions 
    bool hasScanFileSize() const { return this->scanFileSize_ != nullptr;};
    void deleteScanFileSize() { this->scanFileSize_ = nullptr;};
    inline int64_t scanFileSize() const { DARABONBA_PTR_GET_DEFAULT(scanFileSize_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setScanFileSize(int64_t scanFileSize) { DARABONBA_PTR_SET_VALUE(scanFileSize_, scanFileSize) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline DescribeSqlLogTasksResponseBodyDataList& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeSqlLogTasksResponseBodyDataList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The time when the analysis task was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> analysisTaskFinishTime_ = nullptr;
    // The state of the analysis task.
    // 
    // >  This parameter is a system parameter. You do not need to pay attention to the parameter.
    std::shared_ptr<string> analysisTaskStatus_ = nullptr;
    // The time when the task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the task ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> end_ = nullptr;
    // Indicates whether the task expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> expire_ = nullptr;
    // The filter parameters.
    std::shared_ptr<vector<Models::DescribeSqlLogTasksResponseBodyDataListFilters>> filters_ = nullptr;
    std::shared_ptr<string> innerResult_ = nullptr;
    // The ID of the database instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of log records.
    std::shared_ptr<int64_t> logCount_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The task progress.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The URL that is returned if the value of TaskType is **Export**.
    std::shared_ptr<string> result_ = nullptr;
    // The number of files that are scanned.
    std::shared_ptr<int64_t> scanFileSize_ = nullptr;
    // The time when the task started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> start_ = nullptr;
    // The task state. Valid values:
    // 
    // *   **INIT**: The task is to be scheduled.
    // *   **RUNNING**: The task is running.
    // *   **FAILED**: The task failed.
    // *   **CANCELED**: The task is canceled.
    // *   **COMPLETED**: The task is complete.
    // 
    // >  If a task is in the **COMPLETED** state, you can view the results of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **Export**
    // *   **Query**
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
