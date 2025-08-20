// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONTASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsOptimizationTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsOptimizationTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeUnit, computeUnit_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(TaskDesc, taskDesc_);
      DARABONBA_PTR_TO_JSON(TaskDuration, taskDuration_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsOptimizationTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeUnit, computeUnit_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(TaskDesc, taskDesc_);
      DARABONBA_PTR_FROM_JSON(TaskDuration, taskDuration_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskMessage, taskMessage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    ListApsOptimizationTasksResponseBodyItems() = default ;
    ListApsOptimizationTasksResponseBodyItems(const ListApsOptimizationTasksResponseBodyItems &) = default ;
    ListApsOptimizationTasksResponseBodyItems(ListApsOptimizationTasksResponseBodyItems &&) = default ;
    ListApsOptimizationTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsOptimizationTasksResponseBodyItems() = default ;
    ListApsOptimizationTasksResponseBodyItems& operator=(const ListApsOptimizationTasksResponseBodyItems &) = default ;
    ListApsOptimizationTasksResponseBodyItems& operator=(ListApsOptimizationTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeUnit_ != nullptr
        && this->createdTime_ != nullptr && this->DBClusterId_ != nullptr && this->modifiedTime_ != nullptr && this->strategyType_ != nullptr && this->taskDesc_ != nullptr
        && this->taskDuration_ != nullptr && this->taskId_ != nullptr && this->taskMessage_ != nullptr && this->taskStatus_ != nullptr; };
    // computeUnit Field Functions 
    bool hasComputeUnit() const { return this->computeUnit_ != nullptr;};
    void deleteComputeUnit() { this->computeUnit_ = nullptr;};
    inline string computeUnit() const { DARABONBA_PTR_GET_DEFAULT(computeUnit_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setComputeUnit(string computeUnit) { DARABONBA_PTR_SET_VALUE(computeUnit_, computeUnit) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // taskDesc Field Functions 
    bool hasTaskDesc() const { return this->taskDesc_ != nullptr;};
    void deleteTaskDesc() { this->taskDesc_ = nullptr;};
    inline string taskDesc() const { DARABONBA_PTR_GET_DEFAULT(taskDesc_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setTaskDesc(string taskDesc) { DARABONBA_PTR_SET_VALUE(taskDesc_, taskDesc) };


    // taskDuration Field Functions 
    bool hasTaskDuration() const { return this->taskDuration_ != nullptr;};
    void deleteTaskDuration() { this->taskDuration_ = nullptr;};
    inline int64_t taskDuration() const { DARABONBA_PTR_GET_DEFAULT(taskDuration_, 0L) };
    inline ListApsOptimizationTasksResponseBodyItems& setTaskDuration(int64_t taskDuration) { DARABONBA_PTR_SET_VALUE(taskDuration_, taskDuration) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskMessage Field Functions 
    bool hasTaskMessage() const { return this->taskMessage_ != nullptr;};
    void deleteTaskMessage() { this->taskMessage_ = nullptr;};
    inline string taskMessage() const { DARABONBA_PTR_GET_DEFAULT(taskMessage_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setTaskMessage(string taskMessage) { DARABONBA_PTR_SET_VALUE(taskMessage_, taskMessage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline ListApsOptimizationTasksResponseBodyItems& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The computing resources used by the optimization job.
    std::shared_ptr<string> computeUnit_ = nullptr;
    // The time when the optimization job was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The time when the optimization job was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The type of the lifecycle management policy.
    std::shared_ptr<string> strategyType_ = nullptr;
    // The description of the optimization job.
    std::shared_ptr<string> taskDesc_ = nullptr;
    // The execution duration of the optimization job.
    std::shared_ptr<int64_t> taskDuration_ = nullptr;
    // The job ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The error message.
    std::shared_ptr<string> taskMessage_ = nullptr;
    // The execution status. Valid values:
    // 
    // 1.  NEW
    // 2.  RUNNING
    // 3.  SUCCESS
    // 4.  STOPPED
    // 5.  FAILED
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
