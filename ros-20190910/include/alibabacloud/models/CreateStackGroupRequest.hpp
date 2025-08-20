// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateStackGroupRequestAutoDeployment.hpp>
#include <vector>
#include <alibabacloud/models/CreateStackGroupRequestParameters.hpp>
#include <alibabacloud/models/CreateStackGroupRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackArn, stackArn_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackArn, stackArn_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    CreateStackGroupRequest() = default ;
    CreateStackGroupRequest(const CreateStackGroupRequest &) = default ;
    CreateStackGroupRequest(CreateStackGroupRequest &&) = default ;
    CreateStackGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackGroupRequest() = default ;
    CreateStackGroupRequest& operator=(const CreateStackGroupRequest &) = default ;
    CreateStackGroupRequest& operator=(CreateStackGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administrationRoleName_ != nullptr
        && this->autoDeployment_ != nullptr && this->capabilities_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->executionRoleName_ != nullptr
        && this->parameters_ != nullptr && this->permissionModel_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->stackArn_ != nullptr
        && this->stackGroupName_ != nullptr && this->tags_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr
        && this->templateVersion_ != nullptr; };
    // administrationRoleName Field Functions 
    bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
    void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
    inline string administrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
    inline CreateStackGroupRequest& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


    // autoDeployment Field Functions 
    bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
    void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
    inline const CreateStackGroupRequestAutoDeployment & autoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, CreateStackGroupRequestAutoDeployment) };
    inline CreateStackGroupRequestAutoDeployment autoDeployment() { DARABONBA_PTR_GET(autoDeployment_, CreateStackGroupRequestAutoDeployment) };
    inline CreateStackGroupRequest& setAutoDeployment(const CreateStackGroupRequestAutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
    inline CreateStackGroupRequest& setAutoDeployment(CreateStackGroupRequestAutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & capabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> capabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline CreateStackGroupRequest& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline CreateStackGroupRequest& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStackGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleName Field Functions 
    bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
    void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
    inline string executionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
    inline CreateStackGroupRequest& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateStackGroupRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateStackGroupRequestParameters>) };
    inline vector<CreateStackGroupRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<CreateStackGroupRequestParameters>) };
    inline CreateStackGroupRequest& setParameters(const vector<CreateStackGroupRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateStackGroupRequest& setParameters(vector<CreateStackGroupRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string permissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline CreateStackGroupRequest& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateStackGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackArn Field Functions 
    bool hasStackArn() const { return this->stackArn_ != nullptr;};
    void deleteStackArn() { this->stackArn_ = nullptr;};
    inline string stackArn() const { DARABONBA_PTR_GET_DEFAULT(stackArn_, "") };
    inline CreateStackGroupRequest& setStackArn(string stackArn) { DARABONBA_PTR_SET_VALUE(stackArn_, stackArn) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline CreateStackGroupRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateStackGroupRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateStackGroupRequestTags>) };
    inline vector<CreateStackGroupRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateStackGroupRequestTags>) };
    inline CreateStackGroupRequest& setTags(const vector<CreateStackGroupRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateStackGroupRequest& setTags(vector<CreateStackGroupRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline CreateStackGroupRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateStackGroupRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline CreateStackGroupRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline CreateStackGroupRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The name of the RAM role that you specify for the administrator account when you create a self-managed stack group. ROS assumes the administrator role to perform operations. If you do not specify this parameter, AliyunROSStackGroupAdministrationRole is used as the default value. ROS uses the administrator role to assume the execution role AliyunROSStackGroupExecutionRole to perform operations on the stacks in the stack group.
    // 
    // The name must be 1 to 64 characters in length and can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> administrationRoleName_ = nullptr;
    // The information about automatic deployment settings.
    // 
    // > You must specify this parameter if PermissionModel is set to SERVICE_MANAGED.
    std::shared_ptr<CreateStackGroupRequestAutoDeployment> autoDeployment_ = nullptr;
    // The options for the stack group. You can specify up to one option.
    std::shared_ptr<vector<string>> capabilities_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can contain letters, digits, underscores (_), and hyphens (-) and cannot exceed 64 characters in length.\\
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the stack group.\\
    // The description must be 1 to 256 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the RAM role that you specify for the execution account when you create a self-managed stack group. The administrator role AliyunROSStackGroupAdministrationRole assumes the execution role to perform operations. If you do not specify this parameter, AliyunROSStackGroupExecutionRole is used as the default value. ROS assumes the execution role to perform operations on the stacks in the stack group.
    // 
    // The name must be 1 to 64 characters in length and can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> executionRoleName_ = nullptr;
    // The parameters of the stack group.
    std::shared_ptr<vector<CreateStackGroupRequestParameters>> parameters_ = nullptr;
    // The permission model of the stack group.
    // 
    // Valid values:
    // 
    // *   SELF_MANAGED (default): the self-managed permission model. If you create a self-managed stack group, you must create RAM roles within the administrator and execution accounts and establish a trust relationship between the accounts. Then, you can deploy stacks within the execution account.
    // *   SERVICE_MANAGED: the service-managed permission model. If you create a service-managed stack group, ROS creates service-linked roles for the administrator and execution accounts, and the administrator account uses its role to deploy stacks within the execution account.
    // 
    // > If you want to use the service-managed permission model to deploy stacks, your account must be the management account or a delegated administrator account of your resource directory and the trusted access feature is enabled for the account. For more information, see [Manage a delegated administrator account](https://help.aliyun.com/document_detail/308253.html) and [Enable trusted access](https://help.aliyun.com/document_detail/298229.html).
    std::shared_ptr<string> permissionModel_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. If you do not specify this parameter, the stack group is added to the default resource group.\\
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> stackArn_ = nullptr;
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The tags of the stack group.
    std::shared_ptr<vector<CreateStackGroupRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // > You must and can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Alibaba Cloud Object Storage Service (OSS) bucket. The template body must be 1 to 524,288 bytes in length. Examples: oss://ros/template/demo and oss://ros/template/demo?RegionId=cn-hangzhou. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // > You must and can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. If you do not specify this parameter, the latest version is used.
    // 
    // > TemplateVersion takes effect only if you specify TemplateId.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
