// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(EntityVersionId, entityVersionId_);
      DARABONBA_PTR_TO_JSON(TaskCategory, taskCategory_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(EntityVersionId, entityVersionId_);
      DARABONBA_PTR_FROM_JSON(TaskCategory, taskCategory_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetTaskRequest() = default ;
    GetTaskRequest(const GetTaskRequest &) = default ;
    GetTaskRequest(GetTaskRequest &&) = default ;
    GetTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskRequest() = default ;
    GetTaskRequest& operator=(const GetTaskRequest &) = default ;
    GetTaskRequest& operator=(GetTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr && this->entityVersionId_ == nullptr && this->taskCategory_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline GetTaskRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetTaskRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // entityVersionId Field Functions 
    bool hasEntityVersionId() const { return this->entityVersionId_ != nullptr;};
    void deleteEntityVersionId() { this->entityVersionId_ = nullptr;};
    inline string getEntityVersionId() const { DARABONBA_PTR_GET_DEFAULT(entityVersionId_, "") };
    inline GetTaskRequest& setEntityVersionId(string entityVersionId) { DARABONBA_PTR_SET_VALUE(entityVersionId_, entityVersionId) };


    // taskCategory Field Functions 
    bool hasTaskCategory() const { return this->taskCategory_ != nullptr;};
    void deleteTaskCategory() { this->taskCategory_ = nullptr;};
    inline string getTaskCategory() const { DARABONBA_PTR_GET_DEFAULT(taskCategory_, "") };
    inline GetTaskRequest& setTaskCategory(string taskCategory) { DARABONBA_PTR_SET_VALUE(taskCategory_, taskCategory) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The associated resource ID. **If you do not specify the TaskId parameter, you must specify the EntityId, EntityType, and TaskCategory parameters at the same time.** The resource ID must match the selected resource type.
    shared_ptr<string> entityId_ {};
    // The associated resource type. This parameter is required if you do not specify the TaskId parameter.
    // 
    // Valid values:
    // 
    // - **IMAGE**: image resource.
    // - **APP**: application resource.
    // - **SNAPSHOT**: snapshot resource.
    // 
    // You must also select an applicable TaskCategory. The resource type itself does not mean that all task categories can be queried by resource.
    shared_ptr<string> entityType_ {};
    // The associated resource version ID. This parameter is used to specify the version when you query by resource. For image resources, specify the image version ID.
    shared_ptr<string> entityVersionId_ {};
    // The task category when you query by resource. This parameter is required if you do not specify the TaskId parameter.
    // 
    // Valid values:
    // 
    // - **IMAGE_BUILDER**: image creation. Queries tasks for manual creation, automatic creation, or creation based on an instance.
    // - **IMAGE_DISTRIBUTE**: image distribution across regions.
    shared_ptr<string> taskCategory_ {};
    // The task ID. If you specify this parameter, the system queries the task by this ID first, and the resource information query conditions are no longer used for locating the task.
    shared_ptr<string> taskId_ {};
    // **Not enabled. Do not specify this parameter.** When you query a task, locate the task by using the TaskId parameter or the resource information and TaskCategory parameter. This parameter is not used for task filtering.
    // 
    // The example "Not applicable (not enabled)" is only a description of the field status, not a valid parameter value.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
