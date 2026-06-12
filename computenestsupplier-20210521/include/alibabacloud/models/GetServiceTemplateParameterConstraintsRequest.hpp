// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATEPARAMETERCONSTRAINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
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
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
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
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
      // The parameter name.
      shared_ptr<string> parameterKey_ {};
      // The parameter value.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->deployRegionId_ == nullptr && this->enablePrivateVpcConnection_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr
        && this->serviceInstanceId_ == nullptr && this->serviceVersion_ == nullptr && this->templateName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string getDeployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


    // enablePrivateVpcConnection Field Functions 
    bool hasEnablePrivateVpcConnection() const { return this->enablePrivateVpcConnection_ != nullptr;};
    void deleteEnablePrivateVpcConnection() { this->enablePrivateVpcConnection_ = nullptr;};
    inline bool getEnablePrivateVpcConnection() const { DARABONBA_PTR_GET_DEFAULT(enablePrivateVpcConnection_, false) };
    inline GetServiceTemplateParameterConstraintsRequest& setEnablePrivateVpcConnection(bool enablePrivateVpcConnection) { DARABONBA_PTR_SET_VALUE(enablePrivateVpcConnection_, enablePrivateVpcConnection) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetServiceTemplateParameterConstraintsRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetServiceTemplateParameterConstraintsRequest::Parameters>) };
    inline vector<GetServiceTemplateParameterConstraintsRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<GetServiceTemplateParameterConstraintsRequest::Parameters>) };
    inline GetServiceTemplateParameterConstraintsRequest& setParameters(const vector<GetServiceTemplateParameterConstraintsRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetServiceTemplateParameterConstraintsRequest& setParameters(vector<GetServiceTemplateParameterConstraintsRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceTemplateParameterConstraintsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Generate a unique value for this parameter from your client. The value of ClientToken can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The ID of the deployment region.
    // 
    // This parameter is required.
    shared_ptr<string> deployRegionId_ {};
    // Indicates whether PrivateLink is enabled. Valid values:
    // 
    // - true: Enabled
    // 
    // - false: Not enabled
    shared_ptr<bool> enablePrivateVpcConnection_ {};
    // The parameter information.
    shared_ptr<vector<GetServiceTemplateParameterConstraintsRequest::Parameters>> parameters_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The service instance ID.
    shared_ptr<string> serviceInstanceId_ {};
    // The service version.
    shared_ptr<string> serviceVersion_ {};
    // The template name.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
