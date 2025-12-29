// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskExecuteTime, taskExecuteTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskExecuteTime, taskExecuteTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
    };
    SubmitAsyncTaskRequest() = default ;
    SubmitAsyncTaskRequest(const SubmitAsyncTaskRequest &) = default ;
    SubmitAsyncTaskRequest(SubmitAsyncTaskRequest &&) = default ;
    SubmitAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAsyncTaskRequest() = default ;
    SubmitAsyncTaskRequest& operator=(const SubmitAsyncTaskRequest &) = default ;
    SubmitAsyncTaskRequest& operator=(SubmitAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->taskCode_ == nullptr && this->taskExecuteTime_ == nullptr && this->taskName_ == nullptr && this->taskParam_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitAsyncTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline SubmitAsyncTaskRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskExecuteTime Field Functions 
    bool hasTaskExecuteTime() const { return this->taskExecuteTime_ != nullptr;};
    void deleteTaskExecuteTime() { this->taskExecuteTime_ = nullptr;};
    inline string getTaskExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(taskExecuteTime_, "") };
    inline SubmitAsyncTaskRequest& setTaskExecuteTime(string taskExecuteTime) { DARABONBA_PTR_SET_VALUE(taskExecuteTime_, taskExecuteTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline SubmitAsyncTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline SubmitAsyncTaskRequest& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> taskCode_ {};
    shared_ptr<string> taskExecuteTime_ {};
    shared_ptr<string> taskName_ {};
    shared_ptr<string> taskParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
