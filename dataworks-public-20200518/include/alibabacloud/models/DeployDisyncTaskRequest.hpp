// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDISYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeployDISyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDISyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDISyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DeployDISyncTaskRequest() = default ;
    DeployDISyncTaskRequest(const DeployDISyncTaskRequest &) = default ;
    DeployDISyncTaskRequest(DeployDISyncTaskRequest &&) = default ;
    DeployDISyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDISyncTaskRequest() = default ;
    DeployDISyncTaskRequest& operator=(const DeployDISyncTaskRequest &) = default ;
    DeployDISyncTaskRequest& operator=(DeployDISyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->projectId_ != nullptr && this->taskType_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline int64_t fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
    inline DeployDISyncTaskRequest& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeployDISyncTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DeployDISyncTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // *   If you set the TaskType parameter to DI_REALTIME, set the FileId parameter to the ID of the real-time synchronization task that you want to deploy.
    // *   If you set the TaskType parameter to DI_SOLUTION, set the FileId parameter to the ID of the synchronization task that you want to deploy.
    // 
    // You can call the [ListFiles](https://help.aliyun.com/document_detail/173942.html) operation to query the ID of the real-time synchronization task or the synchronization task created in Data Integration.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fileId_ = nullptr;
    // The type of the object that you want to deploy. Valid values:
    // 
    // *   DI_REALTIME: real-time synchronization node
    // *   DI_SOLUTION: data synchronization solution
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the object that you want to deploy. Valid values:
    // 
    // *   DI_REALTIME: real-time synchronization task
    // *   DI_SOLUTION: synchronization task created in Data Integration
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
