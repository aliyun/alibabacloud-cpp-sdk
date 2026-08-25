// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONACCESSCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONACCESSCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ProvisionAccessConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionAccessConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ProvisionAccessConfigurationResponseBody() = default ;
    ProvisionAccessConfigurationResponseBody(const ProvisionAccessConfigurationResponseBody &) = default ;
    ProvisionAccessConfigurationResponseBody(ProvisionAccessConfigurationResponseBody &&) = default ;
    ProvisionAccessConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionAccessConfigurationResponseBody() = default ;
    ProvisionAccessConfigurationResponseBody& operator=(const ProvisionAccessConfigurationResponseBody &) = default ;
    ProvisionAccessConfigurationResponseBody& operator=(ProvisionAccessConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_TO_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AccessConfigurationName, accessConfigurationName_);
        DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetPathName, targetPathName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->accessConfigurationName_ == nullptr && this->originTargetId_ == nullptr && this->status_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr
        && this->targetPath_ == nullptr && this->targetPathName_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
      // accessConfigurationId Field Functions 
      bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
      void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
      inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
      inline Tasks& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


      // accessConfigurationName Field Functions 
      bool hasAccessConfigurationName() const { return this->accessConfigurationName_ != nullptr;};
      void deleteAccessConfigurationName() { this->accessConfigurationName_ = nullptr;};
      inline string getAccessConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationName_, "") };
      inline Tasks& setAccessConfigurationName(string accessConfigurationName) { DARABONBA_PTR_SET_VALUE(accessConfigurationName_, accessConfigurationName) };


      // originTargetId Field Functions 
      bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
      void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
      inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
      inline Tasks& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Tasks& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Tasks& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline Tasks& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetPathName Field Functions 
      bool hasTargetPathName() const { return this->targetPathName_ != nullptr;};
      void deleteTargetPathName() { this->targetPathName_ = nullptr;};
      inline string getTargetPathName() const { DARABONBA_PTR_GET_DEFAULT(targetPathName_, "") };
      inline Tasks& setTargetPathName(string targetPathName) { DARABONBA_PTR_SET_VALUE(targetPathName_, targetPathName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Tasks& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Tasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The ID of the access configuration.
      shared_ptr<string> accessConfigurationId_ {};
      // The name of the access configuration.
      shared_ptr<string> accessConfigurationName_ {};
      shared_ptr<string> originTargetId_ {};
      // The task status. Valid values:
      // 
      // - InProgress: The task is running.
      // 
      // - Success: The task is successful.
      // 
      // - Failed: The task failed.
      shared_ptr<string> status_ {};
      // The ID of the task object.
      shared_ptr<string> targetId_ {};
      // The name of the task object.
      shared_ptr<string> targetName_ {};
      // The path ID of the task object in the resource directory.
      shared_ptr<string> targetPath_ {};
      // The path name of the task object in the resource directory.
      shared_ptr<string> targetPathName_ {};
      // The type of the task object. The value is fixed as RD-Account, which indicates the accounts in the resource directory.
      shared_ptr<string> targetType_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task type. The value is fixed as ProvisionAccessConfiguration, which indicates that an access configuration is provisioned.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProvisionAccessConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ProvisionAccessConfigurationResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ProvisionAccessConfigurationResponseBody::Tasks>) };
    inline vector<ProvisionAccessConfigurationResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ProvisionAccessConfigurationResponseBody::Tasks>) };
    inline ProvisionAccessConfigurationResponseBody& setTasks(const vector<ProvisionAccessConfigurationResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ProvisionAccessConfigurationResponseBody& setTasks(vector<ProvisionAccessConfigurationResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task information.
    shared_ptr<vector<ProvisionAccessConfigurationResponseBody::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
