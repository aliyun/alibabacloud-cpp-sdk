// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStackRequestParameters.hpp>
#include <alibabacloud/models/UpdateStackRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(DryRunOptions, dryRunOptions_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplacementOption, replacementOption_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyDuringUpdateBody, stackPolicyDuringUpdateBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyDuringUpdateURL, stackPolicyDuringUpdateURL_);
      DARABONBA_PTR_TO_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_TO_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(DryRunOptions, dryRunOptions_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplacementOption, replacementOption_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyDuringUpdateBody, stackPolicyDuringUpdateBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyDuringUpdateURL, stackPolicyDuringUpdateURL_);
      DARABONBA_PTR_FROM_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_FROM_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    UpdateStackRequest() = default ;
    UpdateStackRequest(const UpdateStackRequest &) = default ;
    UpdateStackRequest(UpdateStackRequest &&) = default ;
    UpdateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackRequest() = default ;
    UpdateStackRequest& operator=(const UpdateStackRequest &) = default ;
    UpdateStackRequest& operator=(UpdateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->disableRollback_ != nullptr && this->dryRun_ != nullptr && this->dryRunOptions_ != nullptr && this->parallelism_ != nullptr && this->parameters_ != nullptr
        && this->ramRoleName_ != nullptr && this->regionId_ != nullptr && this->replacementOption_ != nullptr && this->resourceGroupId_ != nullptr && this->stackId_ != nullptr
        && this->stackPolicyBody_ != nullptr && this->stackPolicyDuringUpdateBody_ != nullptr && this->stackPolicyDuringUpdateURL_ != nullptr && this->stackPolicyURL_ != nullptr && this->tags_ != nullptr
        && this->taintResources_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr
        && this->timeoutInMinutes_ != nullptr && this->usePreviousParameters_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline UpdateStackRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateStackRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dryRunOptions Field Functions 
    bool hasDryRunOptions() const { return this->dryRunOptions_ != nullptr;};
    void deleteDryRunOptions() { this->dryRunOptions_ = nullptr;};
    inline const vector<string> & dryRunOptions() const { DARABONBA_PTR_GET_CONST(dryRunOptions_, vector<string>) };
    inline vector<string> dryRunOptions() { DARABONBA_PTR_GET(dryRunOptions_, vector<string>) };
    inline UpdateStackRequest& setDryRunOptions(const vector<string> & dryRunOptions) { DARABONBA_PTR_SET_VALUE(dryRunOptions_, dryRunOptions) };
    inline UpdateStackRequest& setDryRunOptions(vector<string> && dryRunOptions) { DARABONBA_PTR_SET_RVALUE(dryRunOptions_, dryRunOptions) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline UpdateStackRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateStackRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateStackRequestParameters>) };
    inline vector<UpdateStackRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateStackRequestParameters>) };
    inline UpdateStackRequest& setParameters(const vector<UpdateStackRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateStackRequest& setParameters(vector<UpdateStackRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline UpdateStackRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replacementOption Field Functions 
    bool hasReplacementOption() const { return this->replacementOption_ != nullptr;};
    void deleteReplacementOption() { this->replacementOption_ = nullptr;};
    inline string replacementOption() const { DARABONBA_PTR_GET_DEFAULT(replacementOption_, "") };
    inline UpdateStackRequest& setReplacementOption(string replacementOption) { DARABONBA_PTR_SET_VALUE(replacementOption_, replacementOption) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateStackRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline UpdateStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline string stackPolicyBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyBody_, "") };
    inline UpdateStackRequest& setStackPolicyBody(string stackPolicyBody) { DARABONBA_PTR_SET_VALUE(stackPolicyBody_, stackPolicyBody) };


    // stackPolicyDuringUpdateBody Field Functions 
    bool hasStackPolicyDuringUpdateBody() const { return this->stackPolicyDuringUpdateBody_ != nullptr;};
    void deleteStackPolicyDuringUpdateBody() { this->stackPolicyDuringUpdateBody_ = nullptr;};
    inline string stackPolicyDuringUpdateBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyDuringUpdateBody_, "") };
    inline UpdateStackRequest& setStackPolicyDuringUpdateBody(string stackPolicyDuringUpdateBody) { DARABONBA_PTR_SET_VALUE(stackPolicyDuringUpdateBody_, stackPolicyDuringUpdateBody) };


    // stackPolicyDuringUpdateURL Field Functions 
    bool hasStackPolicyDuringUpdateURL() const { return this->stackPolicyDuringUpdateURL_ != nullptr;};
    void deleteStackPolicyDuringUpdateURL() { this->stackPolicyDuringUpdateURL_ = nullptr;};
    inline string stackPolicyDuringUpdateURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyDuringUpdateURL_, "") };
    inline UpdateStackRequest& setStackPolicyDuringUpdateURL(string stackPolicyDuringUpdateURL) { DARABONBA_PTR_SET_VALUE(stackPolicyDuringUpdateURL_, stackPolicyDuringUpdateURL) };


    // stackPolicyURL Field Functions 
    bool hasStackPolicyURL() const { return this->stackPolicyURL_ != nullptr;};
    void deleteStackPolicyURL() { this->stackPolicyURL_ = nullptr;};
    inline string stackPolicyURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyURL_, "") };
    inline UpdateStackRequest& setStackPolicyURL(string stackPolicyURL) { DARABONBA_PTR_SET_VALUE(stackPolicyURL_, stackPolicyURL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateStackRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateStackRequestTags>) };
    inline vector<UpdateStackRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateStackRequestTags>) };
    inline UpdateStackRequest& setTags(const vector<UpdateStackRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateStackRequest& setTags(vector<UpdateStackRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taintResources Field Functions 
    bool hasTaintResources() const { return this->taintResources_ != nullptr;};
    void deleteTaintResources() { this->taintResources_ = nullptr;};
    inline const vector<string> & taintResources() const { DARABONBA_PTR_GET_CONST(taintResources_, vector<string>) };
    inline vector<string> taintResources() { DARABONBA_PTR_GET(taintResources_, vector<string>) };
    inline UpdateStackRequest& setTaintResources(const vector<string> & taintResources) { DARABONBA_PTR_SET_VALUE(taintResources_, taintResources) };
    inline UpdateStackRequest& setTaintResources(vector<string> && taintResources) { DARABONBA_PTR_SET_RVALUE(taintResources_, taintResources) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline UpdateStackRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStackRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline UpdateStackRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateStackRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline UpdateStackRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // usePreviousParameters Field Functions 
    bool hasUsePreviousParameters() const { return this->usePreviousParameters_ != nullptr;};
    void deleteUsePreviousParameters() { this->usePreviousParameters_ = nullptr;};
    inline bool usePreviousParameters() const { DARABONBA_PTR_GET_DEFAULT(usePreviousParameters_, false) };
    inline UpdateStackRequest& setUsePreviousParameters(bool usePreviousParameters) { DARABONBA_PTR_SET_VALUE(usePreviousParameters_, usePreviousParameters) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests.
    // 
    // The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to roll back the resources in the stack when the stack fails to be updated.
    // 
    // Default value: false. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // Specifies whether only to validate the stack in the request. Default value: false. Valid values:
    // 
    // *   true: only validates the stack.
    // *   false: validates and updates the stack.
    // 
    // >  When no changes are made during the update, the following rules apply: If you set the DryRun parameter to false, the NotSupported error code is returned. If you set the DryRun parameter to true, no error is reported.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The dry run option in the list format. You can specify only one dry run option.
    // 
    // > This parameter takes effect only when DryRun is set to true.
    std::shared_ptr<vector<string>> dryRunOptions_ = nullptr;
    // The maximum number of concurrent operations that can be performed on resources.
    // 
    // By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0.
    // 
    // > - If you set this parameter to an integer that is greater than 0, the integer is used.
    // > -  If you set this parameter to 0, no limit is imposed on Resource Orchestration Service (ROS) stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > -  If you leave this parameter empty, the value that you specified for this parameter in the previous request is used. If you left this parameter empty in the previous request, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > - If you set this parameter to a specific value, ROS associates the value with the stack. The value affects subsequent operations on the stack.
    std::shared_ptr<int64_t> parallelism_ = nullptr;
    // The parameters.
    std::shared_ptr<vector<UpdateStackRequestParameters>> parameters_ = nullptr;
    // The name of the RAM role. Resource Orchestration Service (ROS) assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.
    // 
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack but do not have permissions to use the RAM role, ROS still assumes the RAM role. You must make sure that the least privileges are granted to the RAM role.
    // 
    // If you do not specify this parameter, ROS assumes the existing RAM role that is associated with the stack. If no RAM roles are available, ROS uses a temporary credential that is generated from the credentials of your account.
    // 
    // The name of the RAM role can be up to 64 bytes in length.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the region in which the stack is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to enable the replacement update feature. If you cannot change resource properties, you can enable the replacement update feature to replace the resource properties. If the replacement update feature is used, the existing resource is deleted and a new resource is created. The physical ID of the new resource is different from the physical ID of the deleted resource.
    // 
    // Default value: Disabled. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    // 
    // >  Changes have higher priorities than replacement updates.
    std::shared_ptr<string> replacementOption_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
    // The structure that contains the stack policy body. The policy body must be 1 to 16,384 bytes in length.
    // 
    // >  You can specify only one of the StackPolicyBody and StackPolicyURL parameters.
    std::shared_ptr<string> stackPolicyBody_ = nullptr;
    // The structure that contains the body of the temporary overriding stack policy. The policy body must be 1 to 16,384 bytes in length.
    // 
    // If you want to update protected resources, you must specify a temporary overriding stack policy during the update. If you do not specify a temporary overriding stack policy, the existing policy that is associated with the stack is used.
    // 
    // This parameter takes effect only when the ChangeSetType parameter is set to UPDATE. You can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    std::shared_ptr<string> stackPolicyDuringUpdateBody_ = nullptr;
    // The URL of the file that contains the temporary overriding stack policy. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an OSS bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length.
    // 
    // >  If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // The URL can be up to 1,350 bytes in length.
    // 
    // If you want to update protected resources, you must specify a temporary overriding stack policy during the update. If you do not specify a temporary overriding stack policy, the existing policy that is associated with the stack is used. This parameter takes effect only when the ChangeSetType parameter is set to UPDATE. You can specify only one of the following parameters:
    // 
    // *   StackPolicyBody
    // *   StackPolicyURL
    // *   StackPolicyDuringUpdateBody
    // *   StackPolicyDuringUpdateURL
    std::shared_ptr<string> stackPolicyDuringUpdateURL_ = nullptr;
    // The URL of the file that contains the stack policy. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length. If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // >  You can specify only one of the StackPolicyBody and StackPolicyURL parameters.
    // 
    // The URL can be up to 1,350 bytes in length.
    std::shared_ptr<string> stackPolicyURL_ = nullptr;
    // The value of tag N that you want to add to the template.
    std::shared_ptr<vector<UpdateStackRequestTags>> tags_ = nullptr;
    std::shared_ptr<vector<string>> taintResources_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter applies to shared templates and private templates.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an OSS bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body must be 1 to 524,288 bytes in length. If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. This parameter takes effect only when the TemplateId parameter is specified.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The timeout period for the update operation on the stack.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    std::shared_ptr<int64_t> timeoutInMinutes_ = nullptr;
    // Specifies whether to use the values specified in the previous request for the parameters that you do not specify in the current request.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> usePreviousParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
