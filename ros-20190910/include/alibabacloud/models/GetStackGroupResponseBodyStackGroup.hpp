// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODYSTACKGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODYSTACKGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackGroupResponseBodyStackGroupAutoDeployment.hpp>
#include <vector>
#include <alibabacloud/models/GetStackGroupResponseBodyStackGroupParameters.hpp>
#include <alibabacloud/models/GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupResponseBodyStackGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupResponseBodyStackGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
      DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupResponseBodyStackGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministrationRoleName, administrationRoleName_);
      DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionRoleName, executionRoleName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupDriftDetectionDetail, stackGroupDriftDetectionDetail_);
      DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetStackGroupResponseBodyStackGroup() = default ;
    GetStackGroupResponseBodyStackGroup(const GetStackGroupResponseBodyStackGroup &) = default ;
    GetStackGroupResponseBodyStackGroup(GetStackGroupResponseBodyStackGroup &&) = default ;
    GetStackGroupResponseBodyStackGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupResponseBodyStackGroup() = default ;
    GetStackGroupResponseBodyStackGroup& operator=(const GetStackGroupResponseBodyStackGroup &) = default ;
    GetStackGroupResponseBodyStackGroup& operator=(GetStackGroupResponseBodyStackGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administrationRoleName_ != nullptr
        && this->autoDeployment_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->executionRoleName_ != nullptr && this->parameters_ != nullptr
        && this->permissionModel_ != nullptr && this->rdFolderIds_ != nullptr && this->resourceGroupId_ != nullptr && this->stackGroupDriftDetectionDetail_ != nullptr && this->stackGroupId_ != nullptr
        && this->stackGroupName_ != nullptr && this->status_ != nullptr && this->templateBody_ != nullptr && this->templateContent_ != nullptr && this->updateTime_ != nullptr; };
    // administrationRoleName Field Functions 
    bool hasAdministrationRoleName() const { return this->administrationRoleName_ != nullptr;};
    void deleteAdministrationRoleName() { this->administrationRoleName_ = nullptr;};
    inline string administrationRoleName() const { DARABONBA_PTR_GET_DEFAULT(administrationRoleName_, "") };
    inline GetStackGroupResponseBodyStackGroup& setAdministrationRoleName(string administrationRoleName) { DARABONBA_PTR_SET_VALUE(administrationRoleName_, administrationRoleName) };


    // autoDeployment Field Functions 
    bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
    void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
    inline const Models::GetStackGroupResponseBodyStackGroupAutoDeployment & autoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, Models::GetStackGroupResponseBodyStackGroupAutoDeployment) };
    inline Models::GetStackGroupResponseBodyStackGroupAutoDeployment autoDeployment() { DARABONBA_PTR_GET(autoDeployment_, Models::GetStackGroupResponseBodyStackGroupAutoDeployment) };
    inline GetStackGroupResponseBodyStackGroup& setAutoDeployment(const Models::GetStackGroupResponseBodyStackGroupAutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
    inline GetStackGroupResponseBodyStackGroup& setAutoDeployment(Models::GetStackGroupResponseBodyStackGroupAutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetStackGroupResponseBodyStackGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStackGroupResponseBodyStackGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleName Field Functions 
    bool hasExecutionRoleName() const { return this->executionRoleName_ != nullptr;};
    void deleteExecutionRoleName() { this->executionRoleName_ = nullptr;};
    inline string executionRoleName() const { DARABONBA_PTR_GET_DEFAULT(executionRoleName_, "") };
    inline GetStackGroupResponseBodyStackGroup& setExecutionRoleName(string executionRoleName) { DARABONBA_PTR_SET_VALUE(executionRoleName_, executionRoleName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetStackGroupResponseBodyStackGroupParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetStackGroupResponseBodyStackGroupParameters>) };
    inline vector<Models::GetStackGroupResponseBodyStackGroupParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetStackGroupResponseBodyStackGroupParameters>) };
    inline GetStackGroupResponseBodyStackGroup& setParameters(const vector<Models::GetStackGroupResponseBodyStackGroupParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetStackGroupResponseBodyStackGroup& setParameters(vector<Models::GetStackGroupResponseBodyStackGroupParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string permissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline GetStackGroupResponseBodyStackGroup& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline GetStackGroupResponseBodyStackGroup& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline GetStackGroupResponseBodyStackGroup& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetStackGroupResponseBodyStackGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackGroupDriftDetectionDetail Field Functions 
    bool hasStackGroupDriftDetectionDetail() const { return this->stackGroupDriftDetectionDetail_ != nullptr;};
    void deleteStackGroupDriftDetectionDetail() { this->stackGroupDriftDetectionDetail_ = nullptr;};
    inline const Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail() const { DARABONBA_PTR_GET_CONST(stackGroupDriftDetectionDetail_, Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail) };
    inline Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail stackGroupDriftDetectionDetail() { DARABONBA_PTR_GET(stackGroupDriftDetectionDetail_, Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail) };
    inline GetStackGroupResponseBodyStackGroup& setStackGroupDriftDetectionDetail(const Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail & stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_VALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };
    inline GetStackGroupResponseBodyStackGroup& setStackGroupDriftDetectionDetail(Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail && stackGroupDriftDetectionDetail) { DARABONBA_PTR_SET_RVALUE(stackGroupDriftDetectionDetail_, stackGroupDriftDetectionDetail) };


    // stackGroupId Field Functions 
    bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
    void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
    inline string stackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
    inline GetStackGroupResponseBodyStackGroup& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetStackGroupResponseBodyStackGroup& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackGroupResponseBodyStackGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetStackGroupResponseBodyStackGroup& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetStackGroupResponseBodyStackGroup& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetStackGroupResponseBodyStackGroup& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The parameters of the stack group.
    std::shared_ptr<string> administrationRoleName_ = nullptr;
    // Indicates whether automatic deployment is enabled.
    // 
    // Valid values:
    // 
    // *   true: Automatic deployment is enabled. If a member account is added to the folder to which the stack group belongs after automatic deployment is enabled, the stack group deploys its stack instances in the specified region where the added account is deployed. If the account is deleted from the folder, the stack instances in the specified region are deleted from the stack group.
    // *   false: Automatic deployment is disabled. After automatic deployment is disabled, the stack instances remain unchanged when the member account in the folder is changed.
    std::shared_ptr<Models::GetStackGroupResponseBodyStackGroupAutoDeployment> autoDeployment_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the stack group.
    std::shared_ptr<string> description_ = nullptr;
    // The template body.
    std::shared_ptr<string> executionRoleName_ = nullptr;
    // The key of the parameter.
    std::shared_ptr<vector<Models::GetStackGroupResponseBodyStackGroupParameters>> parameters_ = nullptr;
    // The information about automatic deployment settings.
    // 
    // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
    std::shared_ptr<string> permissionModel_ = nullptr;
    // The folder IDs of the resource directory. This parameter is used to deploy stack instances within all the accounts in the folders.
    // 
    // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
    std::shared_ptr<vector<string>> rdFolderIds_ = nullptr;
    // The permission model.
    // 
    // Valid values:
    // 
    // *   SELF_MANAGED: the self-managed permission model
    // *   SERVICE_MANAGED: the service-managed permission model
    // 
    // >  For more information about the permission models of stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The time when drift detection was performed on the stack group.
    std::shared_ptr<Models::GetStackGroupResponseBodyStackGroupStackGroupDriftDetectionDetail> stackGroupDriftDetectionDetail_ = nullptr;
    // The status of the stack group.
    // 
    // Valid values:
    // 
    // *   ACTIVE
    // *   DELETED
    std::shared_ptr<string> stackGroupId_ = nullptr;
    // The name of the RAM role that is specified for the execution account when you create the self-managed stack group. The administrator role AliyunROSStackGroupAdministrationRole assumes the execution role. If this parameter is not specified, the default value AliyunROSStackGroupExecutionRole is returned.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The name of the RAM role that is specified for the administrator account in Resource Orchestration Service (ROS) when you create the self-managed stack group. If this parameter is not specified, the default value AliyunROSStackGroupAdministrationRole is returned.
    std::shared_ptr<string> status_ = nullptr;
    // The structure that contains the template body.
    // 
    // > We recommend that you use TemplateContent instead of TemplateBody.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The JSON-formatted structure that contains the template body. For more information, see [Template syntax](https://help.aliyun.com/document_detail/28857.html).
    std::shared_ptr<string> templateContent_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
