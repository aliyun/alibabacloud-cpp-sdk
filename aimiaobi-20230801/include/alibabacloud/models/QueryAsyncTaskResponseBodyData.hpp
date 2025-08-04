// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYASYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYASYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAsyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskProgressMessage, taskProgressMessage_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskRetryCount, taskRetryCount_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAsyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskIntermediateResult, taskIntermediateResult_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskProgressMessage, taskProgressMessage_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskRetryCount, taskRetryCount_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
    };
    QueryAsyncTaskResponseBodyData() = default ;
    QueryAsyncTaskResponseBodyData(const QueryAsyncTaskResponseBodyData &) = default ;
    QueryAsyncTaskResponseBodyData(QueryAsyncTaskResponseBodyData &&) = default ;
    QueryAsyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAsyncTaskResponseBodyData() = default ;
    QueryAsyncTaskResponseBodyData& operator=(const QueryAsyncTaskResponseBodyData &) = default ;
    QueryAsyncTaskResponseBodyData& operator=(QueryAsyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->taskCode_ != nullptr && this->taskErrorMessage_ != nullptr && this->taskId_ != nullptr && this->taskIntermediateResult_ != nullptr
        && this->taskName_ != nullptr && this->taskParam_ != nullptr && this->taskProgressMessage_ != nullptr && this->taskResult_ != nullptr && this->taskRetryCount_ != nullptr
        && this->taskStatus_ != nullptr && this->updateTime_ != nullptr && this->updateUser_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryAsyncTaskResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline QueryAsyncTaskResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string taskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskIntermediateResult Field Functions 
    bool hasTaskIntermediateResult() const { return this->taskIntermediateResult_ != nullptr;};
    void deleteTaskIntermediateResult() { this->taskIntermediateResult_ = nullptr;};
    inline string taskIntermediateResult() const { DARABONBA_PTR_GET_DEFAULT(taskIntermediateResult_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskIntermediateResult(string taskIntermediateResult) { DARABONBA_PTR_SET_VALUE(taskIntermediateResult_, taskIntermediateResult) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskProgressMessage Field Functions 
    bool hasTaskProgressMessage() const { return this->taskProgressMessage_ != nullptr;};
    void deleteTaskProgressMessage() { this->taskProgressMessage_ = nullptr;};
    inline string taskProgressMessage() const { DARABONBA_PTR_GET_DEFAULT(taskProgressMessage_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskProgressMessage(string taskProgressMessage) { DARABONBA_PTR_SET_VALUE(taskProgressMessage_, taskProgressMessage) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskRetryCount Field Functions 
    bool hasTaskRetryCount() const { return this->taskRetryCount_ != nullptr;};
    void deleteTaskRetryCount() { this->taskRetryCount_ = nullptr;};
    inline string taskRetryCount() const { DARABONBA_PTR_GET_DEFAULT(taskRetryCount_, "") };
    inline QueryAsyncTaskResponseBodyData& setTaskRetryCount(string taskRetryCount) { DARABONBA_PTR_SET_VALUE(taskRetryCount_, taskRetryCount) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline QueryAsyncTaskResponseBodyData& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryAsyncTaskResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline QueryAsyncTaskResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> taskCode_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskIntermediateResult_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<string> taskParam_ = nullptr;
    std::shared_ptr<string> taskProgressMessage_ = nullptr;
    std::shared_ptr<string> taskResult_ = nullptr;
    std::shared_ptr<string> taskRetryCount_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
