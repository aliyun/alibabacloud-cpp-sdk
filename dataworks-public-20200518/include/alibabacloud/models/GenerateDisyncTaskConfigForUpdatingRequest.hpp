// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORUPDATINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORUPDATINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GenerateDISyncTaskConfigForUpdatingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDISyncTaskConfigForUpdatingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDISyncTaskConfigForUpdatingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GenerateDISyncTaskConfigForUpdatingRequest() = default ;
    GenerateDISyncTaskConfigForUpdatingRequest(const GenerateDISyncTaskConfigForUpdatingRequest &) = default ;
    GenerateDISyncTaskConfigForUpdatingRequest(GenerateDISyncTaskConfigForUpdatingRequest &&) = default ;
    GenerateDISyncTaskConfigForUpdatingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDISyncTaskConfigForUpdatingRequest() = default ;
    GenerateDISyncTaskConfigForUpdatingRequest& operator=(const GenerateDISyncTaskConfigForUpdatingRequest &) = default ;
    GenerateDISyncTaskConfigForUpdatingRequest& operator=(GenerateDISyncTaskConfigForUpdatingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->projectId_ != nullptr && this->taskId_ != nullptr && this->taskParam_ != nullptr && this->taskType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateDISyncTaskConfigForUpdatingRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GenerateDISyncTaskConfigForUpdatingRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GenerateDISyncTaskConfigForUpdatingRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline GenerateDISyncTaskConfigForUpdatingRequest& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GenerateDISyncTaskConfigForUpdatingRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. This parameter is used to prevent repeated operations that are caused by multiple calls.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the workspace ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The task ID.
    // 
    // *   If you set the TaskType parameter to DI_REALTIME, set the TaskId parameter to the value of the FileId parameter for the real-time synchronization task.
    // *   If you set the TaskType parameter to DI_SOLUTION, set the TaskId parameter to the value of the FileId parameter for the synchronization solution.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The script for updating the real-time synchronization task in Data Integration. DataWorks allows you to add or remove tables for a real-time synchronization task in Data Integration only in asynchronous mode. The following types of real-time synchronization tasks are supported:
    // 
    // *   Synchronization task that is used to synchronize data from MySQL to MaxCompute
    // *   Synchronization task that is used to synchronize data from MySQL data to Kafka
    // *   Synchronization task that is used to synchronize data from MySQL to Hologres
    // 
    // The SelectedTables parameter is used to specify tables that you want to synchronize from multiple databases. The Tables parameter is used to specify tables that you want to synchronize from a single database.
    // 
    // *   If the script contains the SelectedTables parameter, the system synchronizes data from the tables that you specify in the SelectedTables parameter.
    // *   If the script contains the Tables parameter, the system synchronizes data from the tables that you specify in the Tables parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskParam_ = nullptr;
    // The type of the object that you want to update in Data Integration in asynchronous mode. Valid values:
    // 
    // *   DI_REALTIME: real-time synchronization task
    // *   DI_SOLUTION: synchronization solution DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
    // 
    // Valid values:
    // 
    // *   DI_OFFLINE
    // *   DI_REALTIME
    // *   DI_SOLUTION
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
