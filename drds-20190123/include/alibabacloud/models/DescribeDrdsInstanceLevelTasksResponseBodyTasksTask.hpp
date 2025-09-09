// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODYTASKSTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODYTASKSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceLevelTasksResponseBodyTasksTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCancel, allowCancel_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressDescription, progressDescription_);
      DARABONBA_PTR_TO_JSON(ShowProgress, showProgress_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskPhase, taskPhase_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCancel, allowCancel_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressDescription, progressDescription_);
      DARABONBA_PTR_FROM_JSON(ShowProgress, showProgress_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskPhase, taskPhase_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask() = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask(const DescribeDrdsInstanceLevelTasksResponseBodyTasksTask &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask(DescribeDrdsInstanceLevelTasksResponseBodyTasksTask &&) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceLevelTasksResponseBodyTasksTask() = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& operator=(const DescribeDrdsInstanceLevelTasksResponseBodyTasksTask &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& operator=(DescribeDrdsInstanceLevelTasksResponseBodyTasksTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCancel_ != nullptr
        && this->errMsg_ != nullptr && this->gmtCreate_ != nullptr && this->progress_ != nullptr && this->progressDescription_ != nullptr && this->showProgress_ != nullptr
        && this->targetId_ != nullptr && this->taskName_ != nullptr && this->taskPhase_ != nullptr && this->taskStatus_ != nullptr && this->taskType_ != nullptr; };
    // allowCancel Field Functions 
    bool hasAllowCancel() const { return this->allowCancel_ != nullptr;};
    void deleteAllowCancel() { this->allowCancel_ = nullptr;};
    inline bool allowCancel() const { DARABONBA_PTR_GET_DEFAULT(allowCancel_, false) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setAllowCancel(bool allowCancel) { DARABONBA_PTR_SET_VALUE(allowCancel_, allowCancel) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressDescription Field Functions 
    bool hasProgressDescription() const { return this->progressDescription_ != nullptr;};
    void deleteProgressDescription() { this->progressDescription_ = nullptr;};
    inline string progressDescription() const { DARABONBA_PTR_GET_DEFAULT(progressDescription_, "") };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setProgressDescription(string progressDescription) { DARABONBA_PTR_SET_VALUE(progressDescription_, progressDescription) };


    // showProgress Field Functions 
    bool hasShowProgress() const { return this->showProgress_ != nullptr;};
    void deleteShowProgress() { this->showProgress_ = nullptr;};
    inline bool showProgress() const { DARABONBA_PTR_GET_DEFAULT(showProgress_, false) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setShowProgress(bool showProgress) { DARABONBA_PTR_SET_VALUE(showProgress_, showProgress) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskPhase Field Functions 
    bool hasTaskPhase() const { return this->taskPhase_ != nullptr;};
    void deleteTaskPhase() { this->taskPhase_ = nullptr;};
    inline string taskPhase() const { DARABONBA_PTR_GET_DEFAULT(taskPhase_, "") };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setTaskPhase(string taskPhase) { DARABONBA_PTR_SET_VALUE(taskPhase_, taskPhase) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasksTask& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Indicates whether the task can be canceled.
    std::shared_ptr<bool> allowCancel_ = nullptr;
    // The error message returned for the task.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The timestamp when the task is created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The progress of the task. Valid values: 0 to 100.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The description of the task progress.
    std::shared_ptr<string> progressDescription_ = nullptr;
    // Indicates whether the progress of the task is displayed.
    std::shared_ptr<bool> showProgress_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int64_t> targetId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The phase of the task.
    std::shared_ptr<string> taskPhase_ = nullptr;
    // The state of the task. Valid values:
    // 
    // *   0: The task is being executed.
    // *   1: The task is executed.
    // *   2: The task failed to be executed.
    // *   3: The task is canceled.
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    // The type of the task.
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
