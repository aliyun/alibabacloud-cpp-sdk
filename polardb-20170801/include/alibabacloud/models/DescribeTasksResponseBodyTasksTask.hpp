// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKSTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYTASKSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeTasksResponseBodyTasksTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExpectedFinishTime, expectedFinishTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressInfo, progressInfo_);
      DARABONBA_PTR_TO_JSON(Remain, remain_);
      DARABONBA_PTR_TO_JSON(StepProgressInfo, stepProgressInfo_);
      DARABONBA_PTR_TO_JSON(StepsInfo, stepsInfo_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExpectedFinishTime, expectedFinishTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressInfo, progressInfo_);
      DARABONBA_PTR_FROM_JSON(Remain, remain_);
      DARABONBA_PTR_FROM_JSON(StepProgressInfo, stepProgressInfo_);
      DARABONBA_PTR_FROM_JSON(StepsInfo, stepsInfo_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeTasksResponseBodyTasksTask() = default ;
    DescribeTasksResponseBodyTasksTask(const DescribeTasksResponseBodyTasksTask &) = default ;
    DescribeTasksResponseBodyTasksTask(DescribeTasksResponseBodyTasksTask &&) = default ;
    DescribeTasksResponseBodyTasksTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyTasksTask() = default ;
    DescribeTasksResponseBodyTasksTask& operator=(const DescribeTasksResponseBodyTasksTask &) = default ;
    DescribeTasksResponseBodyTasksTask& operator=(DescribeTasksResponseBodyTasksTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->currentStepName_ == nullptr && return this->DBName_ == nullptr && return this->expectedFinishTime_ == nullptr && return this->finishTime_ == nullptr && return this->progress_ == nullptr
        && return this->progressInfo_ == nullptr && return this->remain_ == nullptr && return this->stepProgressInfo_ == nullptr && return this->stepsInfo_ == nullptr && return this->taskAction_ == nullptr
        && return this->taskErrorCode_ == nullptr && return this->taskErrorMessage_ == nullptr && return this->taskId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeTasksResponseBodyTasksTask& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // currentStepName Field Functions 
    bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
    void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
    inline string currentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
    inline DescribeTasksResponseBodyTasksTask& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeTasksResponseBodyTasksTask& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // expectedFinishTime Field Functions 
    bool hasExpectedFinishTime() const { return this->expectedFinishTime_ != nullptr;};
    void deleteExpectedFinishTime() { this->expectedFinishTime_ = nullptr;};
    inline string expectedFinishTime() const { DARABONBA_PTR_GET_DEFAULT(expectedFinishTime_, "") };
    inline DescribeTasksResponseBodyTasksTask& setExpectedFinishTime(string expectedFinishTime) { DARABONBA_PTR_SET_VALUE(expectedFinishTime_, expectedFinishTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeTasksResponseBodyTasksTask& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeTasksResponseBodyTasksTask& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressInfo Field Functions 
    bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
    void deleteProgressInfo() { this->progressInfo_ = nullptr;};
    inline string progressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
    inline DescribeTasksResponseBodyTasksTask& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


    // remain Field Functions 
    bool hasRemain() const { return this->remain_ != nullptr;};
    void deleteRemain() { this->remain_ = nullptr;};
    inline int32_t remain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0) };
    inline DescribeTasksResponseBodyTasksTask& setRemain(int32_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


    // stepProgressInfo Field Functions 
    bool hasStepProgressInfo() const { return this->stepProgressInfo_ != nullptr;};
    void deleteStepProgressInfo() { this->stepProgressInfo_ = nullptr;};
    inline string stepProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(stepProgressInfo_, "") };
    inline DescribeTasksResponseBodyTasksTask& setStepProgressInfo(string stepProgressInfo) { DARABONBA_PTR_SET_VALUE(stepProgressInfo_, stepProgressInfo) };


    // stepsInfo Field Functions 
    bool hasStepsInfo() const { return this->stepsInfo_ != nullptr;};
    void deleteStepsInfo() { this->stepsInfo_ = nullptr;};
    inline string stepsInfo() const { DARABONBA_PTR_GET_DEFAULT(stepsInfo_, "") };
    inline DescribeTasksResponseBodyTasksTask& setStepsInfo(string stepsInfo) { DARABONBA_PTR_SET_VALUE(stepsInfo_, stepsInfo) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeTasksResponseBodyTasksTask& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskErrorCode Field Functions 
    bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
    void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
    inline string taskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
    inline DescribeTasksResponseBodyTasksTask& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline DescribeTasksResponseBodyTasksTask& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTasksResponseBodyTasksTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The time when the task was started. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The name of the current step.
    std::shared_ptr<string> currentStepName_ = nullptr;
    // The database name.
    // 
    // >  This parameter is returned for only the tasks that involve database operations.
    std::shared_ptr<string> DBName_ = nullptr;
    // The estimated end time of the task. In most cases, this parameter is empty.
    std::shared_ptr<string> expectedFinishTime_ = nullptr;
    // The time when the task was completed. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The progress of the task in percentage.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The description of the task progress. If no progress description is provided for the task, this parameter is empty.
    std::shared_ptr<string> progressInfo_ = nullptr;
    // The estimated remaining duration of the task. Unit: seconds.
    std::shared_ptr<int32_t> remain_ = nullptr;
    // The progress of the subtasks. For example, the value `1/4` indicates that the task consists of four subtasks and the first subtask is in progress.
    std::shared_ptr<string> stepProgressInfo_ = nullptr;
    // The details of the subtasks.
    std::shared_ptr<string> stepsInfo_ = nullptr;
    // The API operation that is used by the task. Example: `CreateDBInstance`.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The error code that is returned when an error occurs.
    // 
    // >  This parameter is returned only when the task is in the **Stop** state.
    std::shared_ptr<string> taskErrorCode_ = nullptr;
    // The error message that is returned when an error occurs.
    // 
    // >  This parameter is returned only when the task is in the **Stop** state.
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
