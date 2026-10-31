// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMTASKMANAGERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMTASKMANAGERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListStreamTaskManagerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamTaskManagerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskmanagerId, taskmanagerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamTaskManagerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskmanagerId, taskmanagerId_);
    };
    ListStreamTaskManagerLogsRequest() = default ;
    ListStreamTaskManagerLogsRequest(const ListStreamTaskManagerLogsRequest &) = default ;
    ListStreamTaskManagerLogsRequest(ListStreamTaskManagerLogsRequest &&) = default ;
    ListStreamTaskManagerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamTaskManagerLogsRequest() = default ;
    ListStreamTaskManagerLogsRequest& operator=(const ListStreamTaskManagerLogsRequest &) = default ;
    ListStreamTaskManagerLogsRequest& operator=(ListStreamTaskManagerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentInstanceId_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->projectId_ == nullptr && this->taskmanagerId_ == nullptr; };
    // deploymentInstanceId Field Functions 
    bool hasDeploymentInstanceId() const { return this->deploymentInstanceId_ != nullptr;};
    void deleteDeploymentInstanceId() { this->deploymentInstanceId_ = nullptr;};
    inline string getDeploymentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deploymentInstanceId_, "") };
    inline ListStreamTaskManagerLogsRequest& setDeploymentInstanceId(string deploymentInstanceId) { DARABONBA_PTR_SET_VALUE(deploymentInstanceId_, deploymentInstanceId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListStreamTaskManagerLogsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListStreamTaskManagerLogsRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListStreamTaskManagerLogsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskmanagerId Field Functions 
    bool hasTaskmanagerId() const { return this->taskmanagerId_ != nullptr;};
    void deleteTaskmanagerId() { this->taskmanagerId_ = nullptr;};
    inline string getTaskmanagerId() const { DARABONBA_PTR_GET_DEFAULT(taskmanagerId_, "") };
    inline ListStreamTaskManagerLogsRequest& setTaskmanagerId(string taskmanagerId) { DARABONBA_PTR_SET_VALUE(taskmanagerId_, taskmanagerId) };


  protected:
    // The ID of the Flink deployment instance.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentInstanceId_ {};
    // The ID of the operating tenant. The gateway verifies that the current identity has access to the tenant and then injects the TenantId into the backend.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The optional ID of the operator. This parameter follows the gateway identity verification rules and is not directly bound to the backend UserId.
    shared_ptr<string> opUserId_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The TaskManager ID. This parameter can be omitted when retrieving log content. If omitted, the JobManager logs are returned.
    // 
    // This parameter is required.
    shared_ptr<string> taskmanagerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
