// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateEstimateCostRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateEstimateCostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateEstimateCostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateEstimateCostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchRegionId, templateScratchRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateEstimateCostRequest() = default ;
    GetTemplateEstimateCostRequest(const GetTemplateEstimateCostRequest &) = default ;
    GetTemplateEstimateCostRequest(GetTemplateEstimateCostRequest &&) = default ;
    GetTemplateEstimateCostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateEstimateCostRequest() = default ;
    GetTemplateEstimateCostRequest& operator=(const GetTemplateEstimateCostRequest &) = default ;
    GetTemplateEstimateCostRequest& operator=(GetTemplateEstimateCostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->parameters_ != nullptr && this->regionId_ != nullptr && this->stackId_ != nullptr && this->templateBody_ != nullptr && this->templateId_ != nullptr
        && this->templateScratchId_ != nullptr && this->templateScratchRegionId_ != nullptr && this->templateURL_ != nullptr && this->templateVersion_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetTemplateEstimateCostRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetTemplateEstimateCostRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetTemplateEstimateCostRequestParameters>) };
    inline vector<GetTemplateEstimateCostRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetTemplateEstimateCostRequestParameters>) };
    inline GetTemplateEstimateCostRequest& setParameters(const vector<GetTemplateEstimateCostRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateEstimateCostRequest& setParameters(vector<GetTemplateEstimateCostRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateEstimateCostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateEstimateCostRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchRegionId Field Functions 
    bool hasTemplateScratchRegionId() const { return this->templateScratchRegionId_ != nullptr;};
    void deleteTemplateScratchRegionId() { this->templateScratchRegionId_ = nullptr;};
    inline string templateScratchRegionId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchRegionId_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateScratchRegionId(string templateScratchRegionId) { DARABONBA_PTR_SET_VALUE(templateScratchRegionId_, templateScratchRegionId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateEstimateCostRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The name of parameter N. If you do not specify the name and value of a parameter, ROS uses the default name and value that are specified in the template.
    // 
    // Maximum value of N: 200.
    // 
    // Examples:
    // 
    // *   Parameters.1.ParameterKey: `Name`
    // *   Parameters.2.ParameterKey: `Netmode`
    // 
    // >  The Parameters parameter is optional. If you want to specify Parameters, you must specify both Parameters.N.ParameterKey and Parameters.N.ParameterValue.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID of the scenario. The default value is the same as the value of the RegionId parameter.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<vector<GetTemplateEstimateCostRequestParameters>> parameters_ = nullptr;
    // The ID of the template. This parameter applies to shared and private templates.
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The stack ID.
    // 
    // This parameter is used to query the estimated price in a configuration change scenario.
    // 
    // Assume that the specified stack contains only one Elastic Compute Service (ECS) instance and the instance type is ecs.s6-c1m2.large. You downgrade the instance type to ecs.s6-c1m1.small and specify a new ApsaraDB RDS instance in the template that is used for the price inquiry. The queried result is the sum of the downgrade refund of the ECS instance and the price of the new ApsaraDB RDS instance.
    std::shared_ptr<string> stackId_ = nullptr;
    std::shared_ptr<string> templateBody_ = nullptr;
    // The value of parameter N.
    // 
    // Maximum value of N: 200.
    // 
    // Examples:
    // 
    // *   Parameters.1.ParameterValue: `DemoEip`
    // *   Parameters.2.ParameterValue: `public`
    // 
    // >  The Parameters parameter is optional. If you want to specify Parameters, you must specify both Parameters.N.ParameterKey and Parameters.N.ParameterValue.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The region ID of the scenario. The default value is the same as the value of the RegionId parameter.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> templateScratchRegionId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests.
    // 
    // The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> templateURL_ = nullptr;
    // The ID of the scenario.
    // 
    // For more information about how to query the IDs of scenarios, see [ListTemplateScratches](https://help.aliyun.com/document_detail/363050.html).
    // 
    // >  You must specify only one of the following parameters: TemplateBody, TemplateURL, TemplateId, and TemplateScratchId.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
