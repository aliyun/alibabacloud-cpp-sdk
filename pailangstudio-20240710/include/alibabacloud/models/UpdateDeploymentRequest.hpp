// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class UpdateDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_TO_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(StageAction, stageAction_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_FROM_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(StageAction, stageAction_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDeploymentRequest() = default ;
    UpdateDeploymentRequest(const UpdateDeploymentRequest &) = default ;
    UpdateDeploymentRequest(UpdateDeploymentRequest &&) = default ;
    UpdateDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentRequest() = default ;
    UpdateDeploymentRequest& operator=(const UpdateDeploymentRequest &) = default ;
    UpdateDeploymentRequest& operator=(UpdateDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApproval_ == nullptr
        && this->deploymentConfig_ == nullptr && this->description_ == nullptr && this->stageAction_ == nullptr && this->workspaceId_ == nullptr; };
    // autoApproval Field Functions 
    bool hasAutoApproval() const { return this->autoApproval_ != nullptr;};
    void deleteAutoApproval() { this->autoApproval_ = nullptr;};
    inline bool getAutoApproval() const { DARABONBA_PTR_GET_DEFAULT(autoApproval_, false) };
    inline UpdateDeploymentRequest& setAutoApproval(bool autoApproval) { DARABONBA_PTR_SET_VALUE(autoApproval_, autoApproval) };


    // deploymentConfig Field Functions 
    bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
    void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
    inline string getDeploymentConfig() const { DARABONBA_PTR_GET_DEFAULT(deploymentConfig_, "") };
    inline UpdateDeploymentRequest& setDeploymentConfig(string deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDeploymentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // stageAction Field Functions 
    bool hasStageAction() const { return this->stageAction_ != nullptr;};
    void deleteStageAction() { this->stageAction_ = nullptr;};
    inline string getStageAction() const { DARABONBA_PTR_GET_DEFAULT(stageAction_, "") };
    inline UpdateDeploymentRequest& setStageAction(string stageAction) { DARABONBA_PTR_SET_VALUE(stageAction_, stageAction) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDeploymentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Indicates whether to automatically skip the deployment confirmation step.
    shared_ptr<bool> autoApproval_ {};
    // Service Configuration for deployment. For more information, see the [deployment configuration](https://help.aliyun.com/zh/pai/user-guide/parameters-of-model-services) of PAI-EAS.
    shared_ptr<string> deploymentConfig_ {};
    // Deployment description.
    shared_ptr<string> description_ {};
    // Deployment stage operation information. The JSON format is as follows:  
    // {"Stage":3,"Action":"Confirm"}. Valid values for Action are:  
    // * Confirm: confirm.  
    // * Cancel: cancel.
    shared_ptr<string> stageAction_ {};
    // Workspace ID. For information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
