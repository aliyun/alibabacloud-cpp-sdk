// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMSTASKPROGRESSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMSTASKPROGRESSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeTasksResponseBodyItemsTaskProgressInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyItemsTaskProgressInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExpectedFinishTime, expectedFinishTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressInfo, progressInfo_);
      DARABONBA_PTR_TO_JSON(Remain, remain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StepProgressInfo, stepProgressInfo_);
      DARABONBA_PTR_TO_JSON(StepsInfo, stepsInfo_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyItemsTaskProgressInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CurrentStepName, currentStepName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExpectedFinishTime, expectedFinishTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressInfo, progressInfo_);
      DARABONBA_PTR_FROM_JSON(Remain, remain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StepProgressInfo, stepProgressInfo_);
      DARABONBA_PTR_FROM_JSON(StepsInfo, stepsInfo_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeTasksResponseBodyItemsTaskProgressInfo() = default ;
    DescribeTasksResponseBodyItemsTaskProgressInfo(const DescribeTasksResponseBodyItemsTaskProgressInfo &) = default ;
    DescribeTasksResponseBodyItemsTaskProgressInfo(DescribeTasksResponseBodyItemsTaskProgressInfo &&) = default ;
    DescribeTasksResponseBodyItemsTaskProgressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyItemsTaskProgressInfo() = default ;
    DescribeTasksResponseBodyItemsTaskProgressInfo& operator=(const DescribeTasksResponseBodyItemsTaskProgressInfo &) = default ;
    DescribeTasksResponseBodyItemsTaskProgressInfo& operator=(DescribeTasksResponseBodyItemsTaskProgressInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->currentStepName_ == nullptr && return this->DBName_ == nullptr && return this->expectedFinishTime_ == nullptr && return this->finishTime_ == nullptr && return this->progress_ == nullptr
        && return this->progressInfo_ == nullptr && return this->remain_ == nullptr && return this->status_ == nullptr && return this->stepProgressInfo_ == nullptr && return this->stepsInfo_ == nullptr
        && return this->taskAction_ == nullptr && return this->taskErrorCode_ == nullptr && return this->taskErrorMessage_ == nullptr && return this->taskId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // currentStepName Field Functions 
    bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
    void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
    inline string currentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // expectedFinishTime Field Functions 
    bool hasExpectedFinishTime() const { return this->expectedFinishTime_ != nullptr;};
    void deleteExpectedFinishTime() { this->expectedFinishTime_ = nullptr;};
    inline string expectedFinishTime() const { DARABONBA_PTR_GET_DEFAULT(expectedFinishTime_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setExpectedFinishTime(string expectedFinishTime) { DARABONBA_PTR_SET_VALUE(expectedFinishTime_, expectedFinishTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressInfo Field Functions 
    bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
    void deleteProgressInfo() { this->progressInfo_ = nullptr;};
    inline string progressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


    // remain Field Functions 
    bool hasRemain() const { return this->remain_ != nullptr;};
    void deleteRemain() { this->remain_ = nullptr;};
    inline int32_t remain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0) };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setRemain(int32_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepProgressInfo Field Functions 
    bool hasStepProgressInfo() const { return this->stepProgressInfo_ != nullptr;};
    void deleteStepProgressInfo() { this->stepProgressInfo_ = nullptr;};
    inline string stepProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(stepProgressInfo_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setStepProgressInfo(string stepProgressInfo) { DARABONBA_PTR_SET_VALUE(stepProgressInfo_, stepProgressInfo) };


    // stepsInfo Field Functions 
    bool hasStepsInfo() const { return this->stepsInfo_ != nullptr;};
    void deleteStepsInfo() { this->stepsInfo_ = nullptr;};
    inline string stepsInfo() const { DARABONBA_PTR_GET_DEFAULT(stepsInfo_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setStepsInfo(string stepsInfo) { DARABONBA_PTR_SET_VALUE(stepsInfo_, stepsInfo) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskErrorCode Field Functions 
    bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
    void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
    inline string taskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTasksResponseBodyItemsTaskProgressInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The start time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The name of the subtask.
    std::shared_ptr<string> currentStepName_ = nullptr;
    // The name of the database. If the task involves a database, the database name is returned.
    std::shared_ptr<string> DBName_ = nullptr;
    // The estimated end time of the task.
    // 
    // >  In most cases, this parameter is empty.
    std::shared_ptr<string> expectedFinishTime_ = nullptr;
    // The end time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The task progress in percentage.
    std::shared_ptr<string> progress_ = nullptr;
    // The description of the task progress.
    // 
    // >  If no progress description is provided for the task, this parameter is empty.
    std::shared_ptr<string> progressInfo_ = nullptr;
    // The estimated remaining time of the task. Unit: seconds.
    // 
    // >  If the task is not running, this parameter is not returned or the returned value is **0**.
    std::shared_ptr<int32_t> remain_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The progress of the subtask. For example, a value of `1/4` indicates that the task consists of four subtasks and the first subtask is in progress.
    std::shared_ptr<string> stepProgressInfo_ = nullptr;
    // The details of the subtasks.
    std::shared_ptr<string> stepsInfo_ = nullptr;
    // The operation that is used by the task, such as **CreateDBInstance**.
    std::shared_ptr<string> taskAction_ = nullptr;
    // The error code that is returned when an error occurs.
    // 
    // >  This parameter is returned only when an error occurs.
    std::shared_ptr<string> taskErrorCode_ = nullptr;
    // The error message that is returned when an error occurs.
    // 
    // >  This parameter is returned only when an error occurs.
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    // The task ID. You can use one of the following methods to obtain the task ID:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
