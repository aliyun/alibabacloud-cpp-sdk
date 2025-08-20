// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStackGroupShrinkRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeploymentShrink_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargetsShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_TO_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeploymentShrink_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargetsShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_FROM_JSON(OperationPreferences, operationPreferencesShrink_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    UpdateStackGroupShrinkRequest() = default ;
    UpdateStackGroupShrinkRequest(const UpdateStackGroupShrinkRequest &) = default ;
    UpdateStackGroupShrinkRequest(UpdateStackGroupShrinkRequest &&) = default ;
    UpdateStackGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackGroupShrinkRequest() = default ;
    UpdateStackGroupShrinkRequest& operator=(const UpdateStackGroupShrinkRequest &) = default ;
    UpdateStackGroupShrinkRequest& operator=(UpdateStackGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIdsShrink_ != nullptr
        && this->administrationRoleName_ != nullptr && this->autoDeploymentShrink_ != nullptr && this->capabilities_ != nullptr && this->clientToken_ != nullptr && this->deploymentOptions_ != nullptr
        && this->deploymentTargetsShrink_ != nullptr && this->description_ != nullptr && this->executionRoleName_ != nullptr && this->operationDescription_ != nullptr && this->operationPreferencesShrink_ != nullptr
        && this->parameters_ != nullptr && this->permissionModel_ != nullptr && this->regionId_ != nullptr && this->regionIdsShrink_ != nullptr && this->stackGroupName_ != nullptr
        && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string accountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline UpdateStackGroupShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // administrationRoleName Field Functions 
    bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
    void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
    inline string administrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
    inline UpdateStackGroupShrinkRequest& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


    // autoDeploymentShrink Field Functions 
    bool hasAutoDeploymentShrink() const { return this->autoDeploymentShrink_ != nullptr;};
    void deleteAutoDeploymentShrink() { this->autoDeploymentShrink_ = nullptr;};
    inline string autoDeploymentShrink() const { DARABONBA_PTR_GET_DEFAULT(autoDeploymentShrink_, "") };
    inline UpdateStackGroupShrinkRequest& setAutoDeploymentShrink(string autoDeploymentShrink) { DARABONBA_PTR_SET_VALUE(autoDeploymentShrink_, autoDeploymentShrink) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & capabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> capabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline UpdateStackGroupShrinkRequest& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline UpdateStackGroupShrinkRequest& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackGroupShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & deploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> deploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline UpdateStackGroupShrinkRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline UpdateStackGroupShrinkRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargetsShrink Field Functions 
    bool hasDeploymentTargetsShrink() const { return this->deploymentTargetsShrink_ != nullptr;};
    void deleteDeploymentTargetsShrink() { this->deploymentTargetsShrink_ = nullptr;};
    inline string deploymentTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetsShrink_, "") };
    inline UpdateStackGroupShrinkRequest& setDeploymentTargetsShrink(string deploymentTargetsShrink) { DARABONBA_PTR_SET_VALUE(deploymentTargetsShrink_, deploymentTargetsShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateStackGroupShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleName Field Functions 
    bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
    void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
    inline string executionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
    inline UpdateStackGroupShrinkRequest& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline UpdateStackGroupShrinkRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferencesShrink Field Functions 
    bool hasOperationPreferencesShrink() const { return this->operationPreferencesShrink_ != nullptr;};
    void deleteOperationPreferencesShrink() { this->operationPreferencesShrink_ = nullptr;};
    inline string operationPreferencesShrink() const { DARABONBA_PTR_GET_DEFAULT(operationPreferencesShrink_, "") };
    inline UpdateStackGroupShrinkRequest& setOperationPreferencesShrink(string operationPreferencesShrink) { DARABONBA_PTR_SET_VALUE(operationPreferencesShrink_, operationPreferencesShrink) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateStackGroupShrinkRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateStackGroupShrinkRequestParameters>) };
    inline vector<UpdateStackGroupShrinkRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateStackGroupShrinkRequestParameters>) };
    inline UpdateStackGroupShrinkRequest& setParameters(const vector<UpdateStackGroupShrinkRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateStackGroupShrinkRequest& setParameters(vector<UpdateStackGroupShrinkRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string permissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline UpdateStackGroupShrinkRequest& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string regionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline UpdateStackGroupShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline UpdateStackGroupShrinkRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline UpdateStackGroupShrinkRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStackGroupShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline UpdateStackGroupShrinkRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateStackGroupShrinkRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Alibaba Cloud Object Storage Service (OSS) bucket. The template body must be 1 to 524,288 bytes in length. Examples: oss://ros/template/demo and oss://ros/template/demo?RegionId=cn-hangzhou. If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    std::shared_ptr<string> accountIdsShrink_ = nullptr;
    // The key of parameter N. If you do not specify the key and value of the parameter, ROS uses the default key and value in the template.
    // 
    // Maximum value of N: 200.
    // 
    // >  The Parameters parameter is optional. If you set the Parameters parameter, you must set the Parameters.N.ParameterKey parameter.
    std::shared_ptr<string> administrationRoleName_ = nullptr;
    // The IDs of the folders in the resource directory. You can specify up to five folder IDs.
    // 
    // You can create stacks within all members in the specified folders. If you create stacks in the Root folder, the stacks are created within all members in the resource directory.
    // 
    // >  To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information of a folder](https://help.aliyun.com/document_detail/111223.html).
    std::shared_ptr<string> autoDeploymentShrink_ = nullptr;
    // The option for the stack group. You can specify up to one option.
    std::shared_ptr<vector<string>> capabilities_ = nullptr;
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<string>> deploymentOptions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> deploymentTargetsShrink_ = nullptr;
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    std::shared_ptr<string> description_ = nullptr;
    // The value of parameter N.
    // 
    // Maximum value of N: 200.
    // 
    // >  The Parameters parameter is optional. If you set the Parameters parameter, you must set the Parameters.N.ParameterValue parameter.
    std::shared_ptr<string> executionRoleName_ = nullptr;
    // The version of the template. If you do not specify a version, the latest version is used.
    // 
    // >  This parameter takes effect only if the TemplateId parameter is set.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // The list of parameters.
    std::shared_ptr<string> operationPreferencesShrink_ = nullptr;
    // Specifies whether to enable automatic deployment.
    // 
    // Valid values:
    // 
    // *   true: enables automatic deployment. If you add a member to the folder to which the stack group belongs after you enable automatic deployment, the stack group deploys its stack instances within the member. If you remove a member from the folder, the stack group deletes stack instances that are deployed within the member.
    // *   false: disables automatic deployment. After you disable automatic deployment, the stack instances remain unchanged even if members in the folder change.
    std::shared_ptr<vector<UpdateStackGroupShrinkRequestParameters>> parameters_ = nullptr;
    // The folder IDs in the resource directory. You can specify a maximum of five folder IDs.
    // 
    // You must set at least one of the RdFolderIds and AccountIds parameters. The parameters are subject to the following items:
    // 
    // *   If you set only the RdFolderIds parameter, stacks are deployed within all the members in the specified folders. If you specify the Root folder, ROS deploys the stacks within all the members in the resource directory.
    // *   If you set only the AccountIds parameter, stacks are deployed within the specified members.
    // *   If you set both parameters, the accounts specified by AccountIds must be contained in the folders specified by RdFolderIds.
    // 
    // >  To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information of a folder](https://help.aliyun.com/document_detail/111223.html).
    std::shared_ptr<string> permissionModel_ = nullptr;
    // The region IDs of stack instances. You can specify a maximum of 20 region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the operation to update the stack group.
    std::shared_ptr<string> regionIdsShrink_ = nullptr;
    // The region IDs of stack instances. You can specify a maximum of 20 region IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The permission model.
    // 
    // Valid values:
    // 
    // *   SELF_MANAGED: the self-managed permission model. This is the default value. If you use the self-managed model for the stack group, you must create RAM roles for the administrator and execution accounts, and establish a trust relationship between the accounts to deploy stacks within the execution account.
    // *   SERVICE_MANAGED: the service-managed permission model. If you use the service-managed model for the stack group, ROS creates service-linked roles for the administrator and execution accounts, and the administrator account uses its role to deploy stacks within the execution account.
    // 
    // >- If stack instances have been created in the stack group, you cannot switch the permission mode of the stack group.
    // >- If you want to use the service-managed permission model to deploy stacks, your account must be the management account or a delegated administrator account of your resource directory and the trusted access feature is enabled for the account. For more information, see [Step 1: (Optional) Create a delegated administrator account](https://help.aliyun.com/document_detail/308253.html) and [Step 2: Enable trusted access](https://help.aliyun.com/document_detail/298229.html).
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the RAM role to be assumed by the administrator role AliyunROSStackGroupAdministrationRole. This parameter is required if you want to grant self-managed permissions to the stack group. If you do not specify a value for this parameter, the default value AliyunROSStackGroupExecutionRole is used. You can use this role in ROS to perform operations on the stacks that correspond to stack instances in the stack group.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> templateURL_ = nullptr;
    // The information about automatic deployment settings.
    // 
    // >  This parameter is required only if the PermissionModel parameter is set to SERVICE_MANAGED.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
