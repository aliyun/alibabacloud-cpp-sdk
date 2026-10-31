// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMJOBMANAGERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMJOBMANAGERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListStreamJobManagerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamJobManagerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamJobManagerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentInstanceId, deploymentInstanceId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListStreamJobManagerLogsRequest() = default ;
    ListStreamJobManagerLogsRequest(const ListStreamJobManagerLogsRequest &) = default ;
    ListStreamJobManagerLogsRequest(ListStreamJobManagerLogsRequest &&) = default ;
    ListStreamJobManagerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamJobManagerLogsRequest() = default ;
    ListStreamJobManagerLogsRequest& operator=(const ListStreamJobManagerLogsRequest &) = default ;
    ListStreamJobManagerLogsRequest& operator=(ListStreamJobManagerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentInstanceId_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->projectId_ == nullptr; };
    // deploymentInstanceId Field Functions 
    bool hasDeploymentInstanceId() const { return this->deploymentInstanceId_ != nullptr;};
    void deleteDeploymentInstanceId() { this->deploymentInstanceId_ = nullptr;};
    inline string getDeploymentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deploymentInstanceId_, "") };
    inline ListStreamJobManagerLogsRequest& setDeploymentInstanceId(string deploymentInstanceId) { DARABONBA_PTR_SET_VALUE(deploymentInstanceId_, deploymentInstanceId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListStreamJobManagerLogsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListStreamJobManagerLogsRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListStreamJobManagerLogsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The deployment instance ID. Use the deploymentInstanceId returned in operation records or historical run instances, rather than the taskId or deploymentId.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentInstanceId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator ID.
    shared_ptr<string> opUserId_ {};
    // The ID of the Dataphin project to which the task belongs, used for permission verification in the production environment.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
