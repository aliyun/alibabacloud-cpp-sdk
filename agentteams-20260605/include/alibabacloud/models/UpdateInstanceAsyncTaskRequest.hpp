// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class UpdateInstanceAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsResume, isResume_);
      DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsResume, isResume_);
      DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateInstanceAsyncTaskRequest() = default ;
    UpdateInstanceAsyncTaskRequest(const UpdateInstanceAsyncTaskRequest &) = default ;
    UpdateInstanceAsyncTaskRequest(UpdateInstanceAsyncTaskRequest &&) = default ;
    UpdateInstanceAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceAsyncTaskRequest() = default ;
    UpdateInstanceAsyncTaskRequest& operator=(const UpdateInstanceAsyncTaskRequest &) = default ;
    UpdateInstanceAsyncTaskRequest& operator=(UpdateInstanceAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->isResume_ == nullptr && this->taskCode_ == nullptr && this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceAsyncTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isResume Field Functions 
    bool hasIsResume() const { return this->isResume_ != nullptr;};
    void deleteIsResume() { this->isResume_ = nullptr;};
    inline bool getIsResume() const { DARABONBA_PTR_GET_DEFAULT(isResume_, false) };
    inline UpdateInstanceAsyncTaskRequest& setIsResume(bool isResume) { DARABONBA_PTR_SET_VALUE(isResume_, isResume) };


    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline UpdateInstanceAsyncTaskRequest& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateInstanceAsyncTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isResume_ {};
    // This parameter is required.
    shared_ptr<string> taskCode_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
