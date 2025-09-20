// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestDefinition, requestDefinition_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestDefinition, requestDefinition_);
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
    virtual bool empty() const override { this->projectName_ != nullptr
        && this->requestDefinition_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestDefinition Field Functions 
    bool hasRequestDefinition() const { return this->requestDefinition_ != nullptr;};
    void deleteRequestDefinition() { this->requestDefinition_ = nullptr;};
    inline bool requestDefinition() const { DARABONBA_PTR_GET_DEFAULT(requestDefinition_, false) };
    inline GetTaskRequest& setRequestDefinition(bool requestDefinition) { DARABONBA_PTR_SET_VALUE(requestDefinition_, requestDefinition) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Specifies whether to return the initial request parameters that are used to create the task. Default value: False.
    std::shared_ptr<bool> requestDefinition_ = nullptr;
    // The ID of the task. You can obtain the ID of a task after you create the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The type of the task. For information about valid values, see [Task types](https://help.aliyun.com/document_detail/2743993.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
