// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreviewStackRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class PreviewStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(EnablePreConfig, enablePreConfig_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_TO_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_TO_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_TO_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(EnablePreConfig, enablePreConfig_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StackPolicyBody, stackPolicyBody_);
      DARABONBA_PTR_FROM_JSON(StackPolicyURL, stackPolicyURL_);
      DARABONBA_PTR_FROM_JSON(TaintResources, taintResources_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      DARABONBA_PTR_FROM_JSON(UsePreviousParameters, usePreviousParameters_);
    };
    PreviewStackRequest() = default ;
    PreviewStackRequest(const PreviewStackRequest &) = default ;
    PreviewStackRequest(PreviewStackRequest &&) = default ;
    PreviewStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackRequest() = default ;
    PreviewStackRequest& operator=(const PreviewStackRequest &) = default ;
    PreviewStackRequest& operator=(PreviewStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->disableRollback_ != nullptr && this->enablePreConfig_ != nullptr && this->parallelism_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr
        && this->stackId_ != nullptr && this->stackName_ != nullptr && this->stackPolicyBody_ != nullptr && this->stackPolicyURL_ != nullptr && this->taintResources_ != nullptr
        && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateScratchId_ != nullptr && this->templateScratchRegionId_ != nullptr && this->templateURL_ != nullptr
        && this->templateVersion_ != nullptr && this->timeoutInMinutes_ != nullptr && this->usePreviousParameters_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PreviewStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline PreviewStackRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // enablePreConfig Field Functions 
    bool hasEnablePreConfig() const { return this->enablePreConfig_ != nullptr;};
    void deleteEnablePreConfig() { this->enablePreConfig_ = nullptr;};
    inline bool enablePreConfig() const { DARABONBA_PTR_GET_DEFAULT(enablePreConfig_, false) };
    inline PreviewStackRequest& setEnablePreConfig(bool enablePreConfig) { DARABONBA_PTR_SET_VALUE(enablePreConfig_, enablePreConfig) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline PreviewStackRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<PreviewStackRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<PreviewStackRequestParameters>) };
    inline vector<PreviewStackRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<PreviewStackRequestParameters>) };
    inline PreviewStackRequest& setParameters(const vector<PreviewStackRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline PreviewStackRequest& setParameters(vector<PreviewStackRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PreviewStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline PreviewStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline PreviewStackRequest& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // stackPolicyBody Field Functions 
    bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
    void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
    inline string stackPolicyBody() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyBody_, "") };
    inline PreviewStackRequest& setStackPolicyBody(string stackPolicyBody) { DARABONBA_PTR_SET_VALUE(stackPolicyBody_, stackPolicyBody) };


    // stackPolicyURL Field Functions 
    bool hasStackPolicyURL() const { return this->stackPolicyURL_ != nullptr;};
    void deleteStackPolicyURL() { this->stackPolicyURL_ = nullptr;};
    inline string stackPolicyURL() const { DARABONBA_PTR_GET_DEFAULT(stackPolicyURL_, "") };
    inline PreviewStackRequest& setStackPolicyURL(string stackPolicyURL) { DARABONBA_PTR_SET_VALUE(stackPolicyURL_, stackPolicyURL) };


    // taintResources Field Functions 
    bool hasTaintResources() const { return this->taintResources_ != nullptr;};
    void deleteTaintResources() { this->taintResources_ = nullptr;};
    inline const vector<string> & taintResources() const { DARABONBA_PTR_GET_CONST(taintResources_, vector<string>) };
    inline vector<string> taintResources() { DARABONBA_PTR_GET(taintResources_, vector<string>) };
    inline PreviewStackRequest& setTaintResources(const vector<string> & taintResources) { DARABONBA_PTR_SET_VALUE(taintResources_, taintResources) };
    inline PreviewStackRequest& setTaintResources(vector<string> && taintResources) { DARABONBA_PTR_SET_RVALUE(taintResources_, taintResources) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline PreviewStackRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline PreviewStackRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline PreviewStackRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchRegionId Field Functions 
    bool hasTemplateScratchRegionId() const { return this->templateScratchRegionId_ != nullptr;};
    void deleteTemplateScratchRegionId() { this->templateScratchRegionId_ = nullptr;};
    inline string templateScratchRegionId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchRegionId_, "") };
    inline PreviewStackRequest& setTemplateScratchRegionId(string templateScratchRegionId) { DARABONBA_PTR_SET_VALUE(templateScratchRegionId_, templateScratchRegionId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline PreviewStackRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline PreviewStackRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int64_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0L) };
    inline PreviewStackRequest& setTimeoutInMinutes(int64_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    // usePreviousParameters Field Functions 
    bool hasUsePreviousParameters() const { return this->usePreviousParameters_ != nullptr;};
    void deleteUsePreviousParameters() { this->usePreviousParameters_ = nullptr;};
    inline bool usePreviousParameters() const { DARABONBA_PTR_GET_DEFAULT(usePreviousParameters_, false) };
    inline PreviewStackRequest& setUsePreviousParameters(bool usePreviousParameters) { DARABONBA_PTR_SET_VALUE(usePreviousParameters_, usePreviousParameters) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can be up to 64 characters in length, and can contain letters, digits, underscores (_), and hyphens (-).\\
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to disable rollback for the resources when the stack fails to be created. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // Specifies whether to query the parameters that you want to use in compliance precheck.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> enablePreConfig_ = nullptr;
    // The maximum number of concurrent operations that can be performed on resources. This parameter takes effect only for Terraform stacks.
    // 
    // By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0.
    // 
    // > If you set this parameter to an integer greater than 0, the integer is used. If you set this parameter to 0 or leave this parameter empty, the default value of Terraform is used. In most cases, the default value of Terraform is 10.
    std::shared_ptr<int64_t> parallelism_ = nullptr;
    // The parameters of the stack.
    std::shared_ptr<vector<PreviewStackRequestParameters>> parameters_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The stack ID. You can use this parameter to preview a stack that you want to update.
    // 
    // 
    // 
    // > -  You must and can specify only one of StackName and StackId.
    // > - In the scenario in which you preview a stack that you want to create or update, you cannot preview the resources in its nested stacks.
    std::shared_ptr<string> stackId_ = nullptr;
    // The stack name. You can use this parameter to preview the stack that you want to create. The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
    // 
    // > You must and can specify only one of StackName and StackId.
    std::shared_ptr<string> stackName_ = nullptr;
    // The structure that contains the stack policy body. The stack policy body must be 1 to 16,384 bytes in length.
    // 
    // > You can specify only one of StackPolicyBody and StackPolicyURL.
    std::shared_ptr<string> stackPolicyBody_ = nullptr;
    // The URL of the file that contains the stack policy. The URL must point to a policy that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The policy file can be up to 16,384 bytes in length. If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // > You can specify only one of StackPolicyBody and StackPolicyURL.
    // 
    // The URL can be up to 1,350 bytes in length.
    std::shared_ptr<string> stackPolicyURL_ = nullptr;
    std::shared_ptr<vector<string>> taintResources_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The template ID. This parameter applies to shared and private templates.
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
    // Unit: minutes.
    // 
    // Default value: 60.
    std::shared_ptr<int64_t> timeoutInMinutes_ = nullptr;
    std::shared_ptr<bool> usePreviousParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
