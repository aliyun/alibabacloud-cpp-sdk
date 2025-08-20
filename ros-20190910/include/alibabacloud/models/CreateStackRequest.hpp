// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateStackRequestParameters.hpp>
#include <alibabacloud/models/CreateStackRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateOption, createOption_);
      DARABONBA_PTR_TO_JSON(CreateOptions, createOptions_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateOption, createOption_);
      DARABONBA_PTR_FROM_JSON(CreateOptions, createOptions_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(NotificationURLs, notificationURLs_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    CreateStackRequest() = default ;
    CreateStackRequest(const CreateStackRequest &) = default ;
    CreateStackRequest(CreateStackRequest &&) = default ;
    CreateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackRequest() = default ;
    CreateStackRequest& operator=(const CreateStackRequest &) = default ;
    CreateStackRequest& operator=(CreateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->createOption_ != nullptr && this->createOptions_ != nullptr && this->deletionProtection_ != nullptr && this->disableRollback_ != nullptr && this->notificationURLs_ != nullptr
        && this->parallelism_ != nullptr && this->parameters_ != nullptr && this->ramRoleName_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->stackName_ != nullptr && this->stackPolicyBody_ != nullptr && this->stackPolicyURL_ != nullptr && this->tags_ != nullptr && this->templateBody_ != nullptr
        && this->templateId_ != nullptr && this->templateScratchId_ != nullptr && this->templateScratchRegionId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr
        && this->timeoutInMinutes_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createOption Field Functions 
    bool hasCreateOption() const { return this->createOption_ != nullptr;};
    void deleteCreateOption() { this->createOption_ = nullptr;};
    inline string createOption() const { DARABONBA_PTR_GET_DEFAULT(createOption_, "") };
    inline CreateStackRequest& setCreateOption(string createOption) { DARABONBA_PTR_SET_VALUE(createOption_, createOption) };


    // createOptions Field Functions 
    bool hasCreateOptions() const { return this->createOptions_ != nullptr;};
    void deleteCreateOptions() { this->createOptions_ = nullptr;};
    inline const vector<string> & createOptions() const { DARABONBA_PTR_GET_CONST(createOptions_, vector<string>) };
    inline vector<string> createOptions() { DARABONBA_PTR_GET(createOptions_, vector<string>) };
    inline CreateStackRequest& setCreateOptions(const vector<string> & createOptions) { DARABONBA_PTR_SET_VALUE(createOptions_, createOptions) };
    inline CreateStackRequest& setCreateOptions(vector<string> && createOptions) { DARABONBA_PTR_SET_RVALUE(createOptions_, createOptions) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline CreateStackRequest& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateStackRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // notificationURLs Field Functions 
    bool hasNotificationURLs() const { return this->notificationURLs_ != nullptr;};
    void deleteNotificationURLs() { this->notificationURLs_ = nullptr;};
    inline const vector<string> & notificationURLs() const { DARABONBA_PTR_GET_CONST(notificationURLs_, vector<string>) };
    inline vector<string> notificationURLs() { DARABONBA_PTR_GET(notificationURLs_, vector<string>) };
    inline CreateStackRequest& setNotificationURLs(const vector<string> & notificationURLs) { DARABONBA_PTR_SET_VALUE(notificationURLs_, notificationURLs) };
    inline CreateStackRequest& setNotificationURLs(vector<string> && notificationURLs) { DARABONBA_PTR_SET_RVALUE(notificationURLs_, notificationURLs) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline CreateStackRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateStackRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateStackRequestParameters>) };
    inline vector<CreateStackRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<CreateStackRequestParameters>) };
    inline CreateStackRequest& setParameters(const vector<CreateStackRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateStackRequest& setParameters(vector<CreateStackRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateStackRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateStackRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline CreateStackRequest& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline string stackPolicyBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyBody_, "") };
    inline CreateStackRequest& setStackPolicyBody(string stackPolicyBody) { DARABONBA_PTR_SET_VALUE(stackPolicyBody_, stackPolicyBody) };


    // stackPolicyURL Field Functions 
    bool hasStackPolicyURL() const { return this->stackPolicyURL_ != nullptr;};
    void deleteStackPolicyURL() { this->stackPolicyURL_ = nullptr;};
    inline string stackPolicyURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyURL_, "") };
    inline CreateStackRequest& setStackPolicyURL(string stackPolicyURL) { DARABONBA_PTR_SET_VALUE(stackPolicyURL_, stackPolicyURL) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateStackRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateStackRequestTags>) };
    inline vector<CreateStackRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateStackRequestTags>) };
    inline CreateStackRequest& setTags(const vector<CreateStackRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateStackRequest& setTags(vector<CreateStackRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline CreateStackRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateStackRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline CreateStackRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchRegionId Field Functions 
    bool hasTemplateScratchRegionId() const { return this->templateScratchRegionId_ != nullptr;};
    void deleteTemplateScratchRegionId() { this->templateScratchRegionId_ = nullptr;};
    inline string templateScratchRegionId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchRegionId_, "") };
    inline CreateStackRequest& setTemplateScratchRegionId(string templateScratchRegionId) { DARABONBA_PTR_SET_VALUE(templateScratchRegionId_, templateScratchRegionId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline CreateStackRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline CreateStackRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline CreateStackRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The creation option for the stack. Valid values:
    // 
    // *   KeepStackOnCreationComplete (default): After the stack is created, the stack and its resources are retained. The quota for the maximum number of stacks that can be created in ROS is consumed.
    // *   AbandonStackOnCreationComplete: After the stack is created, the stack is deleted, but its resources are retained. The quota for the maximum number of stacks that can be created in ROS is not consumed. If the stack fails to be created, the stack is retained.
    // *   AbandonStackOnCreationRollbackComplete: When the resources of the stack are rolled back after the stack fails to be created, the stack is deleted. The quota for the maximum number of stacks that can be created in ROS is not consumed. In other rollback scenarios, the stack is retained.
    // *   ManuallyPay: When you create the stack, you must manually pay for the subscription resources that are used. The following resource types support manual payment: `ALIYUN::ECS::InstanceGroup`, `ALIYUN::RDS::DBInstance`, `ALIYUN::SLB::LoadBalancer`, `ALIYUN::VPC::EIP`, and `ALIYUN::VPC::VpnGateway`.
    // 
    // >  You can specify only one of CreateOption and CreateOptions.
    std::shared_ptr<string> createOption_ = nullptr;
    // The creation options for the stack.
    std::shared_ptr<vector<string>> createOptions_ = nullptr;
    // Specifies whether to enable deletion protection for the stack. Valid values:
    // 
    // *   Enabled.
    // *   Disabled (default). If deletion protection is disabled, you can delete the stack by using the ROS console or by calling the DeleteStack operation.
    // 
    // > The value of DeletionProtection that you specify for the root stack applies to its nested stacks.
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // Specifies whether to disable rollback for the resources when the stack fails to be created.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // The callback URLs that are used to receive stack events. Valid values:
    // 
    // *   HTTP POST URL
    // 
    // Each URL can be up to 1,024 bytes in length.
    // 
    // *   eventbridge
    // 
    // When the status of a stack changes, ROS sends notifications to the EventBridge service. You can view the event information in the [EventBridge](https://eventbridge.console.aliyun.com) console.
    // 
    // > This feature is supported in the China (Hangzhou), China (Shanghai), China (Beijing), China (Hong Kong), and China (Zhangjiakou) regions.
    // 
    // Maximum value of N: 5. When the status of a stack changes, ROS sends a notification to the specified URL. When rollback is enabled for the stack, notifications are sent if the stack is in the CREATE_ROLLBACK or ROLLBACK state, but are not sent if the stack is in the CREATE_FAILED, UPDATE_FAILED, or IN_PROGRESS state.\\
    // ROS sends notifications regardless of whether you specify the Outputs section. The following sample code provides an example on the content of a notification:
    // 
    //     {
    //        "Outputs": [
    //            {
    //                "Description": "No description given",
    //                "OutputKey": "InstanceId",
    //                "OutputValue": "i-xxx"
    //            }
    //        ],
    //        "StackId": "80bd6b6c-e888-4573-ae3b-93d29113****",
    //        "StackName": "test-notification-url",
    //        "Status": "CREATE_COMPLETE"
    //     }
    std::shared_ptr<vector<string>> notificationURLs_ = nullptr;
    // The maximum number of concurrent operations that can be performed on resources.
    // 
    // By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0.
    // 
    // 
    // 
    // > -  If you set this parameter to an integer that is greater than 0, the integer is used. If you set this parameter to 0 or leave this parameter empty, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > -  If you set this parameter to a specific value, ROS associates the value with the stack. The value affects subsequent operations on the stack, such as an update operation.
    std::shared_ptr<int64_t> parallelism_ = nullptr;
    // The parameters that are defined in the template.
    std::shared_ptr<vector<CreateStackRequestParameters>> parameters_ = nullptr;
    // The name of the RAM role. ROS assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack but do not have permissions to use the RAM role, ROS still assumes the RAM role. You must make sure that the least privileges are granted to the RAM role.
    // 
    // If you do not specify this parameter, ROS assumes the existing role that is associated with the stack. If no roles are available, ROS uses a temporary credential that is generated from the credentials of your account.
    // 
    // The RAM role name can be up to 64 characters in length.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. If you leave this parameter empty, the stack is added to the default resource group.
    // 
    // For more information about resource groups, see the "Resource group" section of the [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html) topic.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the stack.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackName_ = nullptr;
    // The structure that contains the stack policy body. The policy body must be 1 to 16,384 bytes in length.
    // 
    // > You can specify only one of StackPolicyBody and StackPolicyURL.
    std::shared_ptr<string> stackPolicyBody_ = nullptr;
    // The URL of the file that contains the stack policy. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // > You can specify only one of StackPolicyBody and StackPolicyURL.
    // 
    // The URL can be up to 1,350 bytes in length.
    std::shared_ptr<string> stackPolicyURL_ = nullptr;
    // The tags that you want to add to the stack.
    std::shared_ptr<vector<CreateStackRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The template ID. This parameter applies to shared templates and private templates.
    // 
    // > You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The scenario ID.
    // 
    // For more information about how to query the scenario ID, see [ListTemplateScratches](https://help.aliyun.com/document_detail/363050.html).
    // 
    // > You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The region ID of the scenario. The default value is the same as the value of RegionId.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> templateScratchRegionId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an OSS bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // > You must and can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. This parameter takes effect only when TemplateId is specified.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The timeout period for creating the stack.
    // 
    // *   Default value: 60.
    // *   Unit: minutes.
    // *   Valid values: 10 to 1440.
    std::shared_ptr<int64_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
