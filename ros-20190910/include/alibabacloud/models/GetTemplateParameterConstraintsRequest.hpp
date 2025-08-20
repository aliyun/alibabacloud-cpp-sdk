// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateParameterConstraintsRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateParameterConstraintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ParametersKeyFilter, parametersKeyFilter_);
      DARABONBA_PTR_TO_JSON(ParametersOrder, parametersOrder_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ParametersKeyFilter, parametersKeyFilter_);
      DARABONBA_PTR_FROM_JSON(ParametersOrder, parametersOrder_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateParameterConstraintsRequest() = default ;
    GetTemplateParameterConstraintsRequest(const GetTemplateParameterConstraintsRequest &) = default ;
    GetTemplateParameterConstraintsRequest(GetTemplateParameterConstraintsRequest &&) = default ;
    GetTemplateParameterConstraintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateParameterConstraintsRequest() = default ;
    GetTemplateParameterConstraintsRequest& operator=(const GetTemplateParameterConstraintsRequest &) = default ;
    GetTemplateParameterConstraintsRequest& operator=(GetTemplateParameterConstraintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->parameters_ != nullptr && this->parametersKeyFilter_ != nullptr && this->parametersOrder_ != nullptr && this->regionId_ != nullptr && this->stackId_ != nullptr
        && this->templateBody_ != nullptr && this->templateId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetTemplateParameterConstraintsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetTemplateParameterConstraintsRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetTemplateParameterConstraintsRequestParameters>) };
    inline vector<GetTemplateParameterConstraintsRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetTemplateParameterConstraintsRequestParameters>) };
    inline GetTemplateParameterConstraintsRequest& setParameters(const vector<GetTemplateParameterConstraintsRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateParameterConstraintsRequest& setParameters(vector<GetTemplateParameterConstraintsRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // parametersKeyFilter Field Functions 
    bool hasParametersKeyFilter() const { return this->parametersKeyFilter_ != nullptr;};
    void deleteParametersKeyFilter() { this->parametersKeyFilter_ = nullptr;};
    inline const vector<string> & parametersKeyFilter() const { DARABONBA_PTR_GET_CONST(parametersKeyFilter_, vector<string>) };
    inline vector<string> parametersKeyFilter() { DARABONBA_PTR_GET(parametersKeyFilter_, vector<string>) };
    inline GetTemplateParameterConstraintsRequest& setParametersKeyFilter(const vector<string> & parametersKeyFilter) { DARABONBA_PTR_SET_VALUE(parametersKeyFilter_, parametersKeyFilter) };
    inline GetTemplateParameterConstraintsRequest& setParametersKeyFilter(vector<string> && parametersKeyFilter) { DARABONBA_PTR_SET_RVALUE(parametersKeyFilter_, parametersKeyFilter) };


    // parametersOrder Field Functions 
    bool hasParametersOrder() const { return this->parametersOrder_ != nullptr;};
    void deleteParametersOrder() { this->parametersOrder_ = nullptr;};
    inline const vector<string> & parametersOrder() const { DARABONBA_PTR_GET_CONST(parametersOrder_, vector<string>) };
    inline vector<string> parametersOrder() { DARABONBA_PTR_GET(parametersOrder_, vector<string>) };
    inline GetTemplateParameterConstraintsRequest& setParametersOrder(const vector<string> & parametersOrder) { DARABONBA_PTR_SET_VALUE(parametersOrder_, parametersOrder) };
    inline GetTemplateParameterConstraintsRequest& setParametersOrder(vector<string> && parametersOrder) { DARABONBA_PTR_SET_RVALUE(parametersOrder_, parametersOrder) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateParameterConstraintsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateParameterConstraintsRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateParameterConstraintsRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The name of parameter N in the template.
    std::shared_ptr<vector<GetTemplateParameterConstraintsRequestParameters>> parameters_ = nullptr;
    // The parameters whose values you want to query.
    std::shared_ptr<vector<string>> parametersKeyFilter_ = nullptr;
    // The order in which associated parameters are arranged.
    // 
    // >  By default, the order of the associated parameters specified in the `Metadata` section of the template is used.
    std::shared_ptr<vector<string>> parametersOrder_ = nullptr;
    // The region ID of the template.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> stackId_ = nullptr;
    // The structure that contains the template body.
    // 
    // The template body must be 1 to 524,288 bytes in length. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/stack-policy/demo or oss://ros/stack-policy/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length. If you do not specify the region ID of the OSS bucket, the value of the RegionId parameter is used.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, and TemplateId.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version of the template. If you do not specify this parameter, the latest version is used.
    // 
    // >  This parameter takes effect only if the TemplateId parameter is specified.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
