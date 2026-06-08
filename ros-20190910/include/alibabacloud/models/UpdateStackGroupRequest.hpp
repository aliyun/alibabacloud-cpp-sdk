// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_TO_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_TO_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeploymentOptions, deploymentOptions_);
      DARABONBA_PTR_FROM_JSON(DeploymentTargets, deploymentTargets_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_ANY_FROM_JSON(OperationPreferences, operationPreferences_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    UpdateStackGroupRequest() = default ;
    UpdateStackGroupRequest(const UpdateStackGroupRequest &) = default ;
    UpdateStackGroupRequest(UpdateStackGroupRequest &&) = default ;
    UpdateStackGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackGroupRequest() = default ;
    UpdateStackGroupRequest& operator=(const UpdateStackGroupRequest &) = default ;
    UpdateStackGroupRequest& operator=(UpdateStackGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // Specifies whether to retain stacks in a member when you remove the member from the folder.
      // 
      // Valid values:
      // 
      // *   true: retains the stacks.
      // *   false: deletes the stacks.
      // 
      // >  This parameter is required if the Enabled parameter is set to true.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The folders in which you want to use service-managed permissions to update stacks.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    class DeploymentTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentTargets& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
      };
      DeploymentTargets() = default ;
      DeploymentTargets(const DeploymentTargets &) = default ;
      DeploymentTargets(DeploymentTargets &&) = default ;
      DeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentTargets() = default ;
      DeploymentTargets& operator=(const DeploymentTargets &) = default ;
      DeploymentTargets& operator=(DeploymentTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->rdFolderIds_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
      inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
      inline DeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline DeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // rdFolderIds Field Functions 
      bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
      void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
      inline const vector<string> & getRdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
      inline vector<string> getRdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
      inline DeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
      inline DeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


    protected:
      // The list of one or more Alibaba Cloud accounts with which you want to share or unshare the template.
      shared_ptr<vector<string>> accountIds_ {};
      // The ID of the operation.
      shared_ptr<vector<string>> rdFolderIds_ {};
    };

    class AutoDeployment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoDeployment& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
      };
      friend void from_json(const Darabonba::Json& j, AutoDeployment& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
      };
      AutoDeployment() = default ;
      AutoDeployment(const AutoDeployment &) = default ;
      AutoDeployment(AutoDeployment &&) = default ;
      AutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoDeployment() = default ;
      AutoDeployment& operator=(const AutoDeployment &) = default ;
      AutoDeployment& operator=(AutoDeployment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->retainStacksOnAccountRemoval_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // retainStacksOnAccountRemoval Field Functions 
      bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
      void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
      inline bool getRetainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
      inline AutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


    protected:
      // The IDs of the members in the resource directory. You can specify a maximum of 20 member IDs.
      // 
      // >  To view the member IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the detailed information of a member](https://help.aliyun.com/document_detail/111624.html).
      shared_ptr<bool> enabled_ {};
      // The IDs of the members in the resource directory. You can specify a maximum of 20 member IDs.
      // 
      // >  To view the member IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the detailed information of a member](https://help.aliyun.com/document_detail/111624.html).
      shared_ptr<bool> retainStacksOnAccountRemoval_ {};
    };

    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->administrationRoleName_ == nullptr && this->autoDeployment_ == nullptr && this->capabilities_ == nullptr && this->clientToken_ == nullptr && this->deploymentOptions_ == nullptr
        && this->deploymentTargets_ == nullptr && this->description_ == nullptr && this->executionRoleName_ == nullptr && this->operationDescription_ == nullptr && this->operationPreferences_ == nullptr
        && this->parameters_ == nullptr && this->permissionModel_ == nullptr && this->regionId_ == nullptr && this->regionIds_ == nullptr && this->stackGroupName_ == nullptr
        && this->templateBody_ == nullptr && this->templateId_ == nullptr && this->templateURL_ == nullptr && this->templateVersion_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline UpdateStackGroupRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateStackGroupRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // administrationRoleName Field Functions 
    bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
    void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
    inline string getAdministrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
    inline UpdateStackGroupRequest& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


    // autoDeployment Field Functions 
    bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
    void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
    inline const UpdateStackGroupRequest::AutoDeployment & getAutoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, UpdateStackGroupRequest::AutoDeployment) };
    inline UpdateStackGroupRequest::AutoDeployment getAutoDeployment() { DARABONBA_PTR_GET(autoDeployment_, UpdateStackGroupRequest::AutoDeployment) };
    inline UpdateStackGroupRequest& setAutoDeployment(const UpdateStackGroupRequest::AutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
    inline UpdateStackGroupRequest& setAutoDeployment(UpdateStackGroupRequest::AutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline UpdateStackGroupRequest& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline UpdateStackGroupRequest& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deploymentOptions Field Functions 
    bool hasDeploymentOptions() const { return this->deploymentOptions_ != nullptr;};
    void deleteDeploymentOptions() { this->deploymentOptions_ = nullptr;};
    inline const vector<string> & getDeploymentOptions() const { DARABONBA_PTR_GET_CONST(deploymentOptions_, vector<string>) };
    inline vector<string> getDeploymentOptions() { DARABONBA_PTR_GET(deploymentOptions_, vector<string>) };
    inline UpdateStackGroupRequest& setDeploymentOptions(const vector<string> & deploymentOptions) { DARABONBA_PTR_SET_VALUE(deploymentOptions_, deploymentOptions) };
    inline UpdateStackGroupRequest& setDeploymentOptions(vector<string> && deploymentOptions) { DARABONBA_PTR_SET_RVALUE(deploymentOptions_, deploymentOptions) };


    // deploymentTargets Field Functions 
    bool hasDeploymentTargets() const { return this->deploymentTargets_ != nullptr;};
    void deleteDeploymentTargets() { this->deploymentTargets_ = nullptr;};
    inline const UpdateStackGroupRequest::DeploymentTargets & getDeploymentTargets() const { DARABONBA_PTR_GET_CONST(deploymentTargets_, UpdateStackGroupRequest::DeploymentTargets) };
    inline UpdateStackGroupRequest::DeploymentTargets getDeploymentTargets() { DARABONBA_PTR_GET(deploymentTargets_, UpdateStackGroupRequest::DeploymentTargets) };
    inline UpdateStackGroupRequest& setDeploymentTargets(const UpdateStackGroupRequest::DeploymentTargets & deploymentTargets) { DARABONBA_PTR_SET_VALUE(deploymentTargets_, deploymentTargets) };
    inline UpdateStackGroupRequest& setDeploymentTargets(UpdateStackGroupRequest::DeploymentTargets && deploymentTargets) { DARABONBA_PTR_SET_RVALUE(deploymentTargets_, deploymentTargets) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateStackGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleName Field Functions 
    bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
    void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
    inline string getExecutionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
    inline UpdateStackGroupRequest& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline UpdateStackGroupRequest& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationPreferences Field Functions 
    bool hasOperationPreferences() const { return this->operationPreferences_ != nullptr;};
    void deleteOperationPreferences() { this->operationPreferences_ = nullptr;};
    inline     const Darabonba::Json & getOperationPreferences() const { DARABONBA_GET(operationPreferences_) };
    Darabonba::Json & getOperationPreferences() { DARABONBA_GET(operationPreferences_) };
    inline UpdateStackGroupRequest& setOperationPreferences(const Darabonba::Json & operationPreferences) { DARABONBA_SET_VALUE(operationPreferences_, operationPreferences) };
    inline UpdateStackGroupRequest& setOperationPreferences(Darabonba::Json && operationPreferences) { DARABONBA_SET_RVALUE(operationPreferences_, operationPreferences) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateStackGroupRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateStackGroupRequest::Parameters>) };
    inline vector<UpdateStackGroupRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateStackGroupRequest::Parameters>) };
    inline UpdateStackGroupRequest& setParameters(const vector<UpdateStackGroupRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateStackGroupRequest& setParameters(vector<UpdateStackGroupRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string getPermissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline UpdateStackGroupRequest& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline UpdateStackGroupRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline UpdateStackGroupRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline UpdateStackGroupRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline UpdateStackGroupRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStackGroupRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline UpdateStackGroupRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateStackGroupRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Alibaba Cloud Object Storage Service (OSS) bucket. The template body must be 1 to 524,288 bytes in length. Examples: oss://ros/template/demo and oss://ros/template/demo?RegionId=cn-hangzhou. If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    shared_ptr<vector<string>> accountIds_ {};
    // The key of parameter N. If you do not specify the key and value of the parameter, ROS uses the default key and value in the template.
    // 
    // Maximum value of N: 200.
    // 
    // >  The Parameters parameter is optional. If you set the Parameters parameter, you must set the Parameters.N.ParameterKey parameter.
    shared_ptr<string> administrationRoleName_ {};
    // The IDs of the folders in the resource directory. You can specify up to five folder IDs.
    // 
    // You can create stacks within all members in the specified folders. If you create stacks in the Root folder, the stacks are created within all members in the resource directory.
    // 
    // >  To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information of a folder](https://help.aliyun.com/document_detail/111223.html).
    shared_ptr<UpdateStackGroupRequest::AutoDeployment> autoDeployment_ {};
    // The option for the stack group. You can specify up to one option.
    shared_ptr<vector<string>> capabilities_ {};
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> deploymentOptions_ {};
    // The ID of the request.
    shared_ptr<UpdateStackGroupRequest::DeploymentTargets> deploymentTargets_ {};
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // >  You must specify only one of the TemplateBody, TemplateURL, and TemplateId parameters.
    shared_ptr<string> description_ {};
    // The value of parameter N.
    // 
    // Maximum value of N: 200.
    // 
    // >  The Parameters parameter is optional. If you set the Parameters parameter, you must set the Parameters.N.ParameterValue parameter.
    shared_ptr<string> executionRoleName_ {};
    // The version of the template. If you do not specify a version, the latest version is used.
    // 
    // >  This parameter takes effect only if the TemplateId parameter is set.
    shared_ptr<string> operationDescription_ {};
    // The list of parameters.
    Darabonba::Json operationPreferences_ {};
    // Specifies whether to enable automatic deployment.
    // 
    // Valid values:
    // 
    // *   true: enables automatic deployment. If you add a member to the folder to which the stack group belongs after you enable automatic deployment, the stack group deploys its stack instances within the member. If you remove a member from the folder, the stack group deletes stack instances that are deployed within the member.
    // *   false: disables automatic deployment. After you disable automatic deployment, the stack instances remain unchanged even if members in the folder change.
    shared_ptr<vector<UpdateStackGroupRequest::Parameters>> parameters_ {};
    // The folder IDs in the resource directory. You can specify a maximum of five folder IDs.
    // 
    // You must set at least one of the RdFolderIds and AccountIds parameters. The parameters are subject to the following items:
    // 
    // *   If you set only the RdFolderIds parameter, stacks are deployed within all the members in the specified folders. If you specify the Root folder, ROS deploys the stacks within all the members in the resource directory.
    // *   If you set only the AccountIds parameter, stacks are deployed within the specified members.
    // *   If you set both parameters, the accounts specified by AccountIds must be contained in the folders specified by RdFolderIds.
    // 
    // >  To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information of a folder](https://help.aliyun.com/document_detail/111223.html).
    shared_ptr<string> permissionModel_ {};
    // The region IDs of stack instances. You can specify a maximum of 20 region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the operation to update the stack group.
    shared_ptr<vector<string>> regionIds_ {};
    // The region IDs of stack instances. You can specify a maximum of 20 region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> stackGroupName_ {};
    // The name of the RAM role to be assumed by the administrator account in ROS. This parameter is required if you want to grant self-managed permissions to the stack group. If you do not specify a value for this parameter, the default value AliyunROSStackGroupAdministrationRole is used. You can use the administrator role in ROS to assume the execution role AliyunROSStackGroupExecutionRole to perform operations on the stacks that correspond to stack instances in the stack group.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, and hyphens (-).
    shared_ptr<string> templateBody_ {};
    // The permission model.
    // 
    // Valid values:
    // 
    // *   SELF_MANAGED: the self-managed permission model. This is the default value. If you use the self-managed model for the stack group, you must create RAM roles for the administrator and execution accounts, and establish a trust relationship between the accounts to deploy stacks within the execution account.
    // *   SERVICE_MANAGED: the service-managed permission model. If you use the service-managed model for the stack group, ROS creates service-linked roles for the administrator and execution accounts, and the administrator account uses its role to deploy stacks within the execution account.
    // 
    // >- If stack instances have been created in the stack group, you cannot switch the permission mode of the stack group.
    // >- If you want to use the service-managed permission model to deploy stacks, your account must be the management account or a delegated administrator account of your resource directory and the trusted access feature is enabled for the account. For more information, see [Step 1: (Optional) Create a delegated administrator account](https://help.aliyun.com/document_detail/308253.html) and [Step 2: Enable trusted access](https://help.aliyun.com/document_detail/298229.html).
    shared_ptr<string> templateId_ {};
    // The name of the RAM role to be assumed by the administrator role AliyunROSStackGroupAdministrationRole. This parameter is required if you want to grant self-managed permissions to the stack group. If you do not specify a value for this parameter, the default value AliyunROSStackGroupExecutionRole is used. You can use this role in ROS to perform operations on the stacks that correspond to stack instances in the stack group.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, and hyphens (-).
    shared_ptr<string> templateURL_ {};
    // The information about automatic deployment settings.
    // 
    // >  This parameter is required only if the PermissionModel parameter is set to SERVICE_MANAGED.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
