// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceEstimateCostRequestCommodity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceEstimateCostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEstimateCostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TrialType, trialType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEstimateCostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(SpecificationName, specificationName_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
    };
    GetServiceEstimateCostRequest() = default ;
    GetServiceEstimateCostRequest(const GetServiceEstimateCostRequest &) = default ;
    GetServiceEstimateCostRequest(GetServiceEstimateCostRequest &&) = default ;
    GetServiceEstimateCostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEstimateCostRequest() = default ;
    GetServiceEstimateCostRequest& operator=(const GetServiceEstimateCostRequest &) = default ;
    GetServiceEstimateCostRequest& operator=(GetServiceEstimateCostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->commodity_ != nullptr && this->operationName_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr && this->serviceId_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->serviceVersion_ != nullptr && this->specificationName_ != nullptr && this->templateName_ != nullptr && this->trialType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetServiceEstimateCostRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline const GetServiceEstimateCostRequestCommodity & commodity() const { DARABONBA_PTR_GET_CONST(commodity_, GetServiceEstimateCostRequestCommodity) };
    inline GetServiceEstimateCostRequestCommodity commodity() { DARABONBA_PTR_GET(commodity_, GetServiceEstimateCostRequestCommodity) };
    inline GetServiceEstimateCostRequest& setCommodity(const GetServiceEstimateCostRequestCommodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
    inline GetServiceEstimateCostRequest& setCommodity(GetServiceEstimateCostRequestCommodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline GetServiceEstimateCostRequest& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline GetServiceEstimateCostRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline GetServiceEstimateCostRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceEstimateCostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceEstimateCostRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceEstimateCostRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceEstimateCostRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // specificationName Field Functions 
    bool hasSpecificationName() const { return this->specificationName_ != nullptr;};
    void deleteSpecificationName() { this->specificationName_ = nullptr;};
    inline string specificationName() const { DARABONBA_PTR_GET_DEFAULT(specificationName_, "") };
    inline GetServiceEstimateCostRequest& setSpecificationName(string specificationName) { DARABONBA_PTR_SET_VALUE(specificationName_, specificationName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceEstimateCostRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trialType Field Functions 
    bool hasTrialType() const { return this->trialType_ != nullptr;};
    void deleteTrialType() { this->trialType_ = nullptr;};
    inline string trialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
    inline GetServiceEstimateCostRequest& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The information about the subscription duration.
    std::shared_ptr<GetServiceEstimateCostRequestCommodity> commodity_ = nullptr;
    // The name of the configuration change operation.
    std::shared_ptr<string> operationName_ = nullptr;
    // The parameters that are specified to deploy the service instance.
    Darabonba::Json parameters_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service instance ID.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The name of the package specification.
    std::shared_ptr<string> specificationName_ = nullptr;
    // The template name.
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
