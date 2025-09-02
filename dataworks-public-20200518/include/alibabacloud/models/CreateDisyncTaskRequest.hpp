// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDISyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDISyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskContent, taskContent_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDISyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskContent, taskContent_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateDISyncTaskRequest() = default ;
    CreateDISyncTaskRequest(const CreateDISyncTaskRequest &) = default ;
    CreateDISyncTaskRequest(CreateDISyncTaskRequest &&) = default ;
    CreateDISyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDISyncTaskRequest() = default ;
    CreateDISyncTaskRequest& operator=(const CreateDISyncTaskRequest &) = default ;
    CreateDISyncTaskRequest& operator=(CreateDISyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->projectId_ != nullptr && this->taskContent_ != nullptr && this->taskName_ != nullptr && this->taskParam_ != nullptr && this->taskType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDISyncTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDISyncTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskContent Field Functions 
    bool hasTaskContent() const { return this->taskContent_ != nullptr;};
    void deleteTaskContent() { this->taskContent_ = nullptr;};
    inline string taskContent() const { DARABONBA_PTR_GET_DEFAULT(taskContent_, "") };
    inline CreateDISyncTaskRequest& setTaskContent(string taskContent) { DARABONBA_PTR_SET_VALUE(taskContent_, taskContent) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateDISyncTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline CreateDISyncTaskRequest& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateDISyncTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. This parameter can be left empty.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskContent_ = nullptr;
    // The name of the data synchronization task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The configuration parameters of the data synchronization task. The following parameters are supported:
    // 
    // *   FileFolderPath: the storage path of the data synchronization task.
    // *   ResourceGroup: the identifier of the resource group for Data Integration that is used by the data synchronization task. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the identifier of the resource group.
    // *   Cu: the specifications occupied by the data synchronization task in the serverless resource group. The value of this parameter must be a multiple of 0.5.
    std::shared_ptr<string> taskParam_ = nullptr;
    // The type of the data synchronization task. Valid values: DI_OFFLINE, DI_REALTIME, and DI_SOLUTION.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
