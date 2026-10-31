// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMLOGCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMLOGCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStreamLogContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStreamLogContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskmanagerId, taskmanagerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStreamLogContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskmanagerId, taskmanagerId_);
    };
    GetStreamLogContentRequest() = default ;
    GetStreamLogContentRequest(const GetStreamLogContentRequest &) = default ;
    GetStreamLogContentRequest(GetStreamLogContentRequest &&) = default ;
    GetStreamLogContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStreamLogContentRequest() = default ;
    GetStreamLogContentRequest& operator=(const GetStreamLogContentRequest &) = default ;
    GetStreamLogContentRequest& operator=(GetStreamLogContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentInstanceId_ == nullptr
        && this->logName_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->projectId_ == nullptr && this->taskmanagerId_ == nullptr; };
    // deploymentInstanceId Field Functions 
    bool hasDeploymentInstanceId() const { return this->deploymentInstanceId_ != nullptr;};
    void deleteDeploymentInstanceId() { this->deploymentInstanceId_ = nullptr;};
    inline string getDeploymentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deploymentInstanceId_, "") };
    inline GetStreamLogContentRequest& setDeploymentInstanceId(string deploymentInstanceId) { DARABONBA_PTR_SET_VALUE(deploymentInstanceId_, deploymentInstanceId) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline GetStreamLogContentRequest& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStreamLogContentRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetStreamLogContentRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetStreamLogContentRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskmanagerId Field Functions 
    bool hasTaskmanagerId() const { return this->taskmanagerId_ != nullptr;};
    void deleteTaskmanagerId() { this->taskmanagerId_ = nullptr;};
    inline string getTaskmanagerId() const { DARABONBA_PTR_GET_DEFAULT(taskmanagerId_, "") };
    inline GetStreamLogContentRequest& setTaskmanagerId(string taskmanagerId) { DARABONBA_PTR_SET_VALUE(taskmanagerId_, taskmanagerId) };


  protected:
    // The deployment instance ID. Obtain the value from the deploymentInstanceId parameter returned in the operation record or historical running instance.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentInstanceId_ {};
    // The original name of the log file. Obtain the value from the logName parameter in the corresponding JobManager or TaskManager log file list. Pass the value as is.
    // 
    // This parameter is required.
    shared_ptr<string> logName_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The ID of the Dataphin project to which the task belongs. This parameter is used for permission verification in the production environment.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The optional ID of the TaskManager. Obtain the value from the taskmanagerId parameter returned by the ListStreamTaskManagers operation. If this parameter is not specified or is empty, the JobManager logs are retrieved.
    shared_ptr<string> taskmanagerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
