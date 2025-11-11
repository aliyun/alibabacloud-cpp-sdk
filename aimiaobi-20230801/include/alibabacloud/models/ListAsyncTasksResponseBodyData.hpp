// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAsyncTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskDefinition, taskDefinition_);
      DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskExecuteTime, taskExecuteTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInnerErrorMessage, taskInnerErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskProgressMessage, taskProgressMessage_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskRetryCount, taskRetryCount_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskDefinition, taskDefinition_);
      DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskExecuteTime, taskExecuteTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInnerErrorMessage, taskInnerErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskProgressMessage, taskProgressMessage_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskRetryCount, taskRetryCount_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
    };
    ListAsyncTasksResponseBodyData() = default ;
    ListAsyncTasksResponseBodyData(const ListAsyncTasksResponseBodyData &) = default ;
    ListAsyncTasksResponseBodyData(ListAsyncTasksResponseBodyData &&) = default ;
    ListAsyncTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksResponseBodyData() = default ;
    ListAsyncTasksResponseBodyData& operator=(const ListAsyncTasksResponseBodyData &) = default ;
    ListAsyncTasksResponseBodyData& operator=(ListAsyncTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createUser_ == nullptr && return this->id_ == nullptr && return this->taskCode_ == nullptr && return this->taskDefinition_ == nullptr && return this->taskEndTime_ == nullptr
        && return this->taskErrorMessage_ == nullptr && return this->taskExecuteTime_ == nullptr && return this->taskId_ == nullptr && return this->taskInnerErrorMessage_ == nullptr && return this->taskIntermediateResult_ == nullptr
        && return this->taskName_ == nullptr && return this->taskParam_ == nullptr && return this->taskProgressMessage_ == nullptr && return this->taskResult_ == nullptr && return this->taskRetryCount_ == nullptr
        && return this->taskStartTime_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr && return this->updateTime_ == nullptr && return this->updateUser_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAsyncTasksResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListAsyncTasksResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAsyncTasksResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string taskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskDefinition Field Functions 
    bool hasTaskDefinition() const { return this->taskDefinition_ != nullptr;};
    void deleteTaskDefinition() { this->taskDefinition_ = nullptr;};
    inline string taskDefinition() const { DARABONBA_PTR_GET_DEFAULT(taskDefinition_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskDefinition(string taskDefinition) { DARABONBA_PTR_SET_VALUE(taskDefinition_, taskDefinition) };


    // taskEndTime Field Functions 
    bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
    void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
    inline string taskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskEndTime(string taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskExecuteTime Field Functions 
    bool hasTaskExecuteTime() const { return this->taskExecuteTime_ != nullptr;};
    void deleteTaskExecuteTime() { this->taskExecuteTime_ = nullptr;};
    inline string taskExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(taskExecuteTime_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskExecuteTime(string taskExecuteTime) { DARABONBA_PTR_SET_VALUE(taskExecuteTime_, taskExecuteTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInnerErrorMessage Field Functions 
    bool hasTaskInnerErrorMessage() const { return this->taskInnerErrorMessage_ != nullptr;};
    void deleteTaskInnerErrorMessage() { this->taskInnerErrorMessage_ = nullptr;};
    inline string taskInnerErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskInnerErrorMessage_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskInnerErrorMessage(string taskInnerErrorMessage) { DARABONBA_PTR_SET_VALUE(taskInnerErrorMessage_, taskInnerErrorMessage) };


    // taskIntermediateResult Field Functions 
    bool hasTaskIntermediateResult() const { return this->taskIntermediateResult_ != nullptr;};
    void deleteTaskIntermediateResult() { this->taskIntermediateResult_ = nullptr;};
    inline string taskIntermediateResult() const { DARABONBA_PTR_GET_DEFAULT(taskIntermediateResult_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskIntermediateResult(string taskIntermediateResult) { DARABONBA_PTR_SET_VALUE(taskIntermediateResult_, taskIntermediateResult) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskProgressMessage Field Functions 
    bool hasTaskProgressMessage() const { return this->taskProgressMessage_ != nullptr;};
    void deleteTaskProgressMessage() { this->taskProgressMessage_ = nullptr;};
    inline string taskProgressMessage() const { DARABONBA_PTR_GET_DEFAULT(taskProgressMessage_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskProgressMessage(string taskProgressMessage) { DARABONBA_PTR_SET_VALUE(taskProgressMessage_, taskProgressMessage) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskRetryCount Field Functions 
    bool hasTaskRetryCount() const { return this->taskRetryCount_ != nullptr;};
    void deleteTaskRetryCount() { this->taskRetryCount_ = nullptr;};
    inline string taskRetryCount() const { DARABONBA_PTR_GET_DEFAULT(taskRetryCount_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskRetryCount(string taskRetryCount) { DARABONBA_PTR_SET_VALUE(taskRetryCount_, taskRetryCount) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline string taskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskStartTime(string taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListAsyncTasksResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListAsyncTasksResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAsyncTasksResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline ListAsyncTasksResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> taskCode_ = nullptr;
    std::shared_ptr<string> taskDefinition_ = nullptr;
    std::shared_ptr<string> taskEndTime_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskExecuteTime_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskInnerErrorMessage_ = nullptr;
    std::shared_ptr<string> taskIntermediateResult_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> taskParam_ = nullptr;
    std::shared_ptr<string> taskProgressMessage_ = nullptr;
    std::shared_ptr<string> taskResult_ = nullptr;
    std::shared_ptr<string> taskRetryCount_ = nullptr;
    std::shared_ptr<string> taskStartTime_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
