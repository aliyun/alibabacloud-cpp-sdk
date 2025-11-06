// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODYDATATASKINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKLISTRESPONSEBODYDATATASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskListResponseBodyDataTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskListResponseBodyDataTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Clientip, clientip_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_TO_JSON(TaskCancelStatus, taskCancelStatus_);
      DARABONBA_PTR_TO_JSON(TaskCancelStatusCode, taskCancelStatusCode_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskTypeCode, taskTypeCode_);
      DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskListResponseBodyDataTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Clientip, clientip_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(TaskBizType, taskBizType_);
      DARABONBA_PTR_FROM_JSON(TaskCancelStatus, taskCancelStatus_);
      DARABONBA_PTR_FROM_JSON(TaskCancelStatusCode, taskCancelStatusCode_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskTypeCode, taskTypeCode_);
      DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
    };
    QueryTaskListResponseBodyDataTaskInfo() = default ;
    QueryTaskListResponseBodyDataTaskInfo(const QueryTaskListResponseBodyDataTaskInfo &) = default ;
    QueryTaskListResponseBodyDataTaskInfo(QueryTaskListResponseBodyDataTaskInfo &&) = default ;
    QueryTaskListResponseBodyDataTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskListResponseBodyDataTaskInfo() = default ;
    QueryTaskListResponseBodyDataTaskInfo& operator=(const QueryTaskListResponseBodyDataTaskInfo &) = default ;
    QueryTaskListResponseBodyDataTaskInfo& operator=(QueryTaskListResponseBodyDataTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientip_ == nullptr
        && return this->createTime_ == nullptr && return this->taskBizType_ == nullptr && return this->taskCancelStatus_ == nullptr && return this->taskCancelStatusCode_ == nullptr && return this->taskNo_ == nullptr
        && return this->taskNum_ == nullptr && return this->taskResult_ == nullptr && return this->taskStatus_ == nullptr && return this->taskStatusCode_ == nullptr && return this->taskType_ == nullptr
        && return this->taskTypeCode_ == nullptr && return this->taskTypeDescription_ == nullptr; };
    // clientip Field Functions 
    bool hasClientip() const { return this->clientip_ != nullptr;};
    void deleteClientip() { this->clientip_ = nullptr;};
    inline string clientip() const { DARABONBA_PTR_GET_DEFAULT(clientip_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setClientip(string clientip) { DARABONBA_PTR_SET_VALUE(clientip_, clientip) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // taskBizType Field Functions 
    bool hasTaskBizType() const { return this->taskBizType_ != nullptr;};
    void deleteTaskBizType() { this->taskBizType_ = nullptr;};
    inline string taskBizType() const { DARABONBA_PTR_GET_DEFAULT(taskBizType_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskBizType(string taskBizType) { DARABONBA_PTR_SET_VALUE(taskBizType_, taskBizType) };


    // taskCancelStatus Field Functions 
    bool hasTaskCancelStatus() const { return this->taskCancelStatus_ != nullptr;};
    void deleteTaskCancelStatus() { this->taskCancelStatus_ = nullptr;};
    inline string taskCancelStatus() const { DARABONBA_PTR_GET_DEFAULT(taskCancelStatus_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskCancelStatus(string taskCancelStatus) { DARABONBA_PTR_SET_VALUE(taskCancelStatus_, taskCancelStatus) };


    // taskCancelStatusCode Field Functions 
    bool hasTaskCancelStatusCode() const { return this->taskCancelStatusCode_ != nullptr;};
    void deleteTaskCancelStatusCode() { this->taskCancelStatusCode_ = nullptr;};
    inline int32_t taskCancelStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskCancelStatusCode_, 0) };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskCancelStatusCode(int32_t taskCancelStatusCode) { DARABONBA_PTR_SET_VALUE(taskCancelStatusCode_, taskCancelStatusCode) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskNum Field Functions 
    bool hasTaskNum() const { return this->taskNum_ != nullptr;};
    void deleteTaskNum() { this->taskNum_ = nullptr;};
    inline int32_t taskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusCode Field Functions 
    bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
    void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
    inline int32_t taskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeCode Field Functions 
    bool hasTaskTypeCode() const { return this->taskTypeCode_ != nullptr;};
    void deleteTaskTypeCode() { this->taskTypeCode_ = nullptr;};
    inline int32_t taskTypeCode() const { DARABONBA_PTR_GET_DEFAULT(taskTypeCode_, 0) };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskTypeCode(int32_t taskTypeCode) { DARABONBA_PTR_SET_VALUE(taskTypeCode_, taskTypeCode) };


    // taskTypeDescription Field Functions 
    bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
    void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
    inline string taskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
    inline QueryTaskListResponseBodyDataTaskInfo& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


  protected:
    std::shared_ptr<string> clientip_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> taskBizType_ = nullptr;
    std::shared_ptr<string> taskCancelStatus_ = nullptr;
    std::shared_ptr<int32_t> taskCancelStatusCode_ = nullptr;
    std::shared_ptr<string> taskNo_ = nullptr;
    std::shared_ptr<int32_t> taskNum_ = nullptr;
    std::shared_ptr<string> taskResult_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskStatusCode_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<int32_t> taskTypeCode_ = nullptr;
    std::shared_ptr<string> taskTypeDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
