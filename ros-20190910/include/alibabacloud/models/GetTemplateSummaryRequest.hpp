// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYREQUEST_HPP_
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
  class GetTemplateSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateSummaryRequest() = default ;
    GetTemplateSummaryRequest(const GetTemplateSummaryRequest &) = default ;
    GetTemplateSummaryRequest(GetTemplateSummaryRequest &&) = default ;
    GetTemplateSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateSummaryRequest() = default ;
    GetTemplateSummaryRequest& operator=(const GetTemplateSummaryRequest &) = default ;
    GetTemplateSummaryRequest& operator=(GetTemplateSummaryRequest &&) = default ;
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
      // The name of parameter N that is defined in the template. If you do not specify the name and value of a parameter, Resource Orchestration Service (ROS) uses the default name and value that are defined in the template.
      // 
      // Maximum value of N: 200.
      // 
      // > The Parameters parameter is optional. If you specify Parameters, you must specify both Parameters.N.ParameterKey and Parameters.N.ParameterValue.
      shared_ptr<string> parameterKey_ {};
      // The value of parameter N that is defined in the template.
      // 
      // Maximum value of N: 200.
      // 
      // > The Parameters parameter is optional. If you specify Parameters, you must specify both Parameters.N.ParameterKey and Parameters.N.ParameterValue.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->changeSetId_ == nullptr
        && this->clientToken_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->stackGroupName_ == nullptr && this->stackId_ == nullptr
        && this->templateBody_ == nullptr && this->templateId_ == nullptr && this->templateURL_ == nullptr && this->templateVersion_ == nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string getChangeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetTemplateSummaryRequest& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetTemplateSummaryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetTemplateSummaryRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetTemplateSummaryRequest::Parameters>) };
    inline vector<GetTemplateSummaryRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetTemplateSummaryRequest::Parameters>) };
    inline GetTemplateSummaryRequest& setParameters(const vector<GetTemplateSummaryRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateSummaryRequest& setParameters(vector<GetTemplateSummaryRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateSummaryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetTemplateSummaryRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateSummaryRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateSummaryRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateSummaryRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string getTemplateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetTemplateSummaryRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateSummaryRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The ID of the change set.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> changeSetId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).\\
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    // The parameters that are defined in the template.
    shared_ptr<vector<GetTemplateSummaryRequest::Parameters>> parameters_ {};
    // The region ID of the stack or stack group that uses the template. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter takes effect only when one of the following parameters are specified: StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> regionId_ {};
    // The name of the stack group.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> stackGroupName_ {};
    // The stack ID.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> stackId_ {};
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length.\\
    // If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.\\
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> templateBody_ {};
    // The template ID. This parameter applies to shared and private templates.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    shared_ptr<string> templateId_ {};
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length.
    // 
    // > If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // 
    // You can specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, StackId, ChangeSetId, and StackGroupName.
    // 
    // The URL can be up to 1,024 bytes in length.
    shared_ptr<string> templateURL_ {};
    // The version of the template. This parameter takes effect when TemplateId is specified.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
