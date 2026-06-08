// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUECREATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUECREATESTACKREQUEST_HPP_
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
  class ContinueCreateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueCreateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RecreatingOptions, recreatingOptions_);
      DARABONBA_PTR_TO_JSON(RecreatingResources, recreatingResources_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueCreateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RecreatingOptions, recreatingOptions_);
      DARABONBA_PTR_FROM_JSON(RecreatingResources, recreatingResources_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    ContinueCreateStackRequest() = default ;
    ContinueCreateStackRequest(const ContinueCreateStackRequest &) = default ;
    ContinueCreateStackRequest(ContinueCreateStackRequest &&) = default ;
    ContinueCreateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueCreateStackRequest() = default ;
    ContinueCreateStackRequest& operator=(const ContinueCreateStackRequest &) = default ;
    ContinueCreateStackRequest& operator=(ContinueCreateStackRequest &&) = default ;
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
      // The name of template parameter N that you want to use to override a specific parameter. If you do not specify the name and value of a template parameter, ROS uses the name and value specified in the previous operation that was performed to create the stack. Maximum value of N: 200.
      // 
      // > This parameter takes effect only when Mode is set to Recreate.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The value of template parameter N that you want to use to override a specific parameter. Maximum value of N: 200.
      // 
      // For ROS stacks, the template parameters that you use to override specific parameters are subject to the following limits:
      // 
      // *   You cannot change the condition values in the Conditions section of a template from true to false or from false to true.
      // *   The template parameters can be referenced only by resources that ROS continues to create.
      // 
      // > This parameter takes effect only when Mode is set to Recreate.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->mode_ == nullptr && this->parallelism_ == nullptr && this->parameters_ == nullptr && this->ramRoleName_ == nullptr && this->recreatingOptions_ == nullptr
        && this->recreatingResources_ == nullptr && this->regionId_ == nullptr && this->stackId_ == nullptr && this->templateBody_ == nullptr && this->templateId_ == nullptr
        && this->templateURL_ == nullptr && this->templateVersion_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ContinueCreateStackRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ContinueCreateStackRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int64_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0L) };
    inline ContinueCreateStackRequest& setParallelism(int64_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<ContinueCreateStackRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ContinueCreateStackRequest::Parameters>) };
    inline vector<ContinueCreateStackRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<ContinueCreateStackRequest::Parameters>) };
    inline ContinueCreateStackRequest& setParameters(const vector<ContinueCreateStackRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ContinueCreateStackRequest& setParameters(vector<ContinueCreateStackRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline ContinueCreateStackRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // recreatingOptions Field Functions 
    bool hasRecreatingOptions() const { return this->recreatingOptions_ != nullptr;};
    void deleteRecreatingOptions() { this->recreatingOptions_ = nullptr;};
    inline const vector<string> & getRecreatingOptions() const { DARABONBA_PTR_GET_CONST(recreatingOptions_, vector<string>) };
    inline vector<string> getRecreatingOptions() { DARABONBA_PTR_GET(recreatingOptions_, vector<string>) };
    inline ContinueCreateStackRequest& setRecreatingOptions(const vector<string> & recreatingOptions) { DARABONBA_PTR_SET_VALUE(recreatingOptions_, recreatingOptions) };
    inline ContinueCreateStackRequest& setRecreatingOptions(vector<string> && recreatingOptions) { DARABONBA_PTR_SET_RVALUE(recreatingOptions_, recreatingOptions) };


    // recreatingResources Field Functions 
    bool hasRecreatingResources() const { return this->recreatingResources_ != nullptr;};
    void deleteRecreatingResources() { this->recreatingResources_ = nullptr;};
    inline const vector<string> & getRecreatingResources() const { DARABONBA_PTR_GET_CONST(recreatingResources_, vector<string>) };
    inline vector<string> getRecreatingResources() { DARABONBA_PTR_GET(recreatingResources_, vector<string>) };
    inline ContinueCreateStackRequest& setRecreatingResources(const vector<string> & recreatingResources) { DARABONBA_PTR_SET_VALUE(recreatingResources_, recreatingResources) };
    inline ContinueCreateStackRequest& setRecreatingResources(vector<string> && recreatingResources) { DARABONBA_PTR_SET_RVALUE(recreatingResources_, recreatingResources) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ContinueCreateStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ContinueCreateStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline ContinueCreateStackRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ContinueCreateStackRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline ContinueCreateStackRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ContinueCreateStackRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // Specifies whether only to validate the stack in the request. Valid values:
    // 
    // *   true: only validates the stack.
    // *   false (default): validates and continues to create the stack.
    shared_ptr<bool> dryRun_ {};
    // The mode in which ROS continues to create the stack. Valid values:
    // 
    // *   Recreate (default)
    // 
    //     If you set this parameter to Recreate, ROS continues to create only the following types of resources:
    // 
    //     *   Resources that fail to be created
    //     *   Resources that you specify for RecreatingResources.N
    //     *   Dependencies of the resources that you specify for RecreatingResources.N
    //     *   Resources that you have not created
    // 
    // > RecreatingResources.N, TemplateBody, TemplateURL, and Parameters take effect only when Mode is set to Recreate.
    // 
    // *   Ignore
    // 
    //     *   ROS ignores and discards resources that fail to be created and you have not created, and considers that the stack is successfully created.
    //     *   The body of the template that you use to create the stack is changed.
    // 
    // > This mode is available only for ROS stacks.
    shared_ptr<string> mode_ {};
    // The maximum number of concurrent operations that can be performed on resources.
    // 
    // By default, this parameter is empty. You can set this parameter to an integer that is greater than or equal to 0.
    // 
    // > - If you set this parameter to an integer that is greater than 0, the integer is used.
    // > - If you set this parameter to 0, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > - If you leave this parameter empty, the value that you specified for this parameter in the previous request is used. If you left this parameter empty in the previous request, no limit is imposed on ROS stacks. However, the default value in Terraform is used for Terraform stacks. In most cases, the default value in Terraform is 10.
    // > - If you set this parameter to a specific value, ROS associates the value with the stack. The value affects subsequent operations on the stack.
    shared_ptr<int64_t> parallelism_ {};
    // The template parameters that you want to use to override specific parameters.
    shared_ptr<vector<ContinueCreateStackRequest::Parameters>> parameters_ {};
    // The name of the RAM role. Resource Orchestration Service (ROS) assumes the RAM role to create the stack and uses the credentials of the role to call the APIs of Alibaba Cloud services.\\
    // ROS assumes the RAM role to perform operations on the stack. If you have permissions to perform operations on the stack but do not have permissions to use the RAM role, ROS still assumes the RAM role. You must make sure that the least privileges are granted to the RAM role.\\
    // If you do not specify this parameter, ROS assumes the existing role that is associated with the stack. If no roles are available, ROS uses a temporary credential that is generated from the credentials of your account.\\
    // The name of the RAM role can be up to 64 bytes in length.
    shared_ptr<string> ramRoleName_ {};
    // The options that ROS adopts when ROS continues to create the stack.
    shared_ptr<vector<string>> recreatingOptions_ {};
    // The resources that ROS continues to create after the resources failed to be created. You can add new resources to the resources that ROS continues to create. ROS continues to create all dependencies of the new resources.
    // 
    // > This parameter is available only for ROS stacks.
    shared_ptr<vector<string>> recreatingResources_ {};
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The stack ID.
    // 
    // This parameter is required.
    shared_ptr<string> stackId_ {};
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length.\\
    // If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // A ROS template is subject to the following limits:
    // 
    // *   You can modify only the following sections in the template: Description, Metadata, Resources, and Outputs.
    // 
    // *   You cannot add sections to or remove sections from the template.
    // 
    // *   The Resources section is subject to the following limits:
    // 
    //     *   You cannot delete the resources or change the template body for the resources that you do not want to continue to create.
    //     *   You can delete the resources or change the template body for the resources that you want to continue to create.
    //     *   You can add resources to this section.
    // 
    //  
    // 
    // > - This parameter takes effect only when Mode is set to Recreate.
    // > - You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId. If you do not specify the parameters, the existing template is used.
    shared_ptr<string> templateBody_ {};
    // The template ID. This parameter applies to shared and private templates.
    // 
    // > - This parameter takes effect when `Mode` is set to `Recreate`. When you specify TemplateId of a template, the template is subject to the limits that are described for `TemplateBody` in this topic.
    // > - You can specify only one of the following parameters: `TemplateBody`, `TemplateURL`, and `TemplateId`. If you do not specify the parameters, the existing template is used.
    shared_ptr<string> templateId_ {};
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length.
    // 
    // If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // > - This parameter takes effect only when Mode is set to Recreate. When you specify TemplateURL of a template, the template is subject to the limits that are described for TemplateBody in this topic.
    // > - You can specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId. If you do not specify the parameters, the existing template is used.
    shared_ptr<string> templateURL_ {};
    // The version of the template. This parameter takes effect only when TemplateId is specified.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
