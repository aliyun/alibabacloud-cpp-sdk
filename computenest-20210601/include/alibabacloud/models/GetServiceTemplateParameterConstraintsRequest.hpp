// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTemplateParameterConstraintsRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceTemplateParameterConstraintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_TO_JSON(EnablePrivateVpcConnection, enablePrivateVpcConnection_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateParameterConstraintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
      DARABONBA_PTR_FROM_JSON(EnablePrivateVpcConnection, enablePrivateVpcConnection_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    GetServiceTemplateParameterConstraintsRequest() = default ;
    GetServiceTemplateParameterConstraintsRequest(const GetServiceTemplateParameterConstraintsRequest &) = default ;
    GetServiceTemplateParameterConstraintsRequest(GetServiceTemplateParameterConstraintsRequest &&) = default ;
    GetServiceTemplateParameterConstraintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateParameterConstraintsRequest() = default ;
    GetServiceTemplateParameterConstraintsRequest& operator=(const GetServiceTemplateParameterConstraintsRequest &) = default ;
    GetServiceTemplateParameterConstraintsRequest& operator=(GetServiceTemplateParameterConstraintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->deployRegionId_ != nullptr && this->enablePrivateVpcConnection_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr && this->serviceId_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->serviceVersion_ != nullptr && this->specificationName_ != nullptr && this->templateName_ != nullptr && this->trialType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // enablePrivateVpcConnection Field Functions 
    bool hasEnablePrivateVpcConnection() const { return this->enablePrivateVpcConnection_ != nullptr;};
    void deleteEnablePrivateVpcConnection() { this->enablePrivateVpcConnection_ = nullptr;};
    inline bool enablePrivateVpcConnection() const { DARABONBA_PTR_GET_DEFAULT(enablePrivateVpcConnection_, false) };
    inline GetServiceTemplateParameterConstraintsRequest& setEnablePrivateVpcConnection(bool enablePrivateVpcConnection) { DARABONBA_PTR_SET_VALUE(enablePrivateVpcConnection_, enablePrivateVpcConnection) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetServiceTemplateParameterConstraintsRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetServiceTemplateParameterConstraintsRequestParameters>) };
    inline vector<GetServiceTemplateParameterConstraintsRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetServiceTemplateParameterConstraintsRequestParameters>) };
    inline GetServiceTemplateParameterConstraintsRequest& setParameters(const vector<GetServiceTemplateParameterConstraintsRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetServiceTemplateParameterConstraintsRequest& setParameters(vector<GetServiceTemplateParameterConstraintsRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> deployRegionId_ = nullptr;
    // Specifies whether to enable the private connection. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enablePrivateVpcConnection_ = nullptr;
    // The configuration parameters of the service instance.
    std::shared_ptr<vector<GetServiceTemplateParameterConstraintsRequestParameters>> parameters_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service instance ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The name of the specification package.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // The trial policy. Valid values:
    // 
    // *   Trial: Trials are supported.
    // *   NotTrial: Trials are not supported.
    std::shared_ptr<string> trialType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
