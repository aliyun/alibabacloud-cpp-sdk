// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODYONCETASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODYONCETASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnfinishedOnceTaskResponseBodyOnceTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnfinishedOnceTaskResponseBodyOnceTasks& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Finish, finish_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RealRunTime, realRunTime_);
      DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusText, statusText_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskImageInfo, taskImageInfo_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnfinishedOnceTaskResponseBodyOnceTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Finish, finish_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RealRunTime, realRunTime_);
      DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskImageInfo, taskImageInfo_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUnfinishedOnceTaskResponseBodyOnceTasks() = default ;
    ListUnfinishedOnceTaskResponseBodyOnceTasks(const ListUnfinishedOnceTaskResponseBodyOnceTasks &) = default ;
    ListUnfinishedOnceTaskResponseBodyOnceTasks(ListUnfinishedOnceTaskResponseBodyOnceTasks &&) = default ;
    ListUnfinishedOnceTaskResponseBodyOnceTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnfinishedOnceTaskResponseBodyOnceTasks() = default ;
    ListUnfinishedOnceTaskResponseBodyOnceTasks& operator=(const ListUnfinishedOnceTaskResponseBodyOnceTasks &) = default ;
    ListUnfinishedOnceTaskResponseBodyOnceTasks& operator=(ListUnfinishedOnceTaskResponseBodyOnceTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->finish_ != nullptr && this->finishCount_ != nullptr && this->progress_ != nullptr && this->realRunTime_ != nullptr && this->resultInfo_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->statusText_ != nullptr && this->target_ != nullptr && this->targetType_ != nullptr
        && this->taskId_ != nullptr && this->taskImageInfo_ != nullptr && this->taskName_ != nullptr && this->taskType_ != nullptr && this->totalCount_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline int32_t finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, 0) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setFinish(int32_t finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // realRunTime Field Functions 
    bool hasRealRunTime() const { return this->realRunTime_ != nullptr;};
    void deleteRealRunTime() { this->realRunTime_ = nullptr;};
    inline int64_t realRunTime() const { DARABONBA_PTR_GET_DEFAULT(realRunTime_, 0L) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setRealRunTime(int64_t realRunTime) { DARABONBA_PTR_SET_VALUE(realRunTime_, realRunTime) };


    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline string resultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusText Field Functions 
    bool hasStatusText() const { return this->statusText_ != nullptr;};
    void deleteStatusText() { this->statusText_ = nullptr;};
    inline string statusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskImageInfo Field Functions 
    bool hasTaskImageInfo() const { return this->taskImageInfo_ != nullptr;};
    void deleteTaskImageInfo() { this->taskImageInfo_ = nullptr;};
    inline const Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo & taskImageInfo() const { DARABONBA_PTR_GET_CONST(taskImageInfo_, Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo) };
    inline Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo taskImageInfo() { DARABONBA_PTR_GET(taskImageInfo_, Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTaskImageInfo(const Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo & taskImageInfo) { DARABONBA_PTR_SET_VALUE(taskImageInfo_, taskImageInfo) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTaskImageInfo(Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo && taskImageInfo) { DARABONBA_PTR_SET_RVALUE(taskImageInfo_, taskImageInfo) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUnfinishedOnceTaskResponseBodyOnceTasks& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the task ends.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Indicates whether the task is complete. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> finish_ = nullptr;
    // The number of assets on which the task is complete.
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    // The progress percentage of the task.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The execution duration of the task.
    std::shared_ptr<int64_t> realRunTime_ = nullptr;
    // The execution result of the task.
    std::shared_ptr<string> resultInfo_ = nullptr;
    // The time when the task is started.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **INIT**: The task is not started.
    // *   **START**: The task is started.
    // *   **SUCCESS**: The task is complete.
    // *   **TIMEOUT**: The task timed out.
    std::shared_ptr<string> statusText_ = nullptr;
    // The objective of the task.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the assets that are scanned. Valid values:
    // 
    // *   **IMAGE_REPO**: image repository
    // *   **IMAGE**: image
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The information about the image scan task.
    std::shared_ptr<Models::ListUnfinishedOnceTaskResponseBodyOnceTasksTaskImageInfo> taskImageInfo_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> taskType_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
