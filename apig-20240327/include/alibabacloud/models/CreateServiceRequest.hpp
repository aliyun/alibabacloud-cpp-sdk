// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceRequestServiceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    CreateServiceRequest() = default ;
    CreateServiceRequest(const CreateServiceRequest &) = default ;
    CreateServiceRequest(CreateServiceRequest &&) = default ;
    CreateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRequest() = default ;
    CreateServiceRequest& operator=(const CreateServiceRequest &) = default ;
    CreateServiceRequest& operator=(CreateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceConfigs_ == nullptr && return this->sourceType_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateServiceRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServiceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<CreateServiceRequestServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<CreateServiceRequestServiceConfigs>) };
    inline vector<CreateServiceRequestServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<CreateServiceRequestServiceConfigs>) };
    inline CreateServiceRequest& setServiceConfigs(const vector<CreateServiceRequestServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline CreateServiceRequest& setServiceConfigs(vector<CreateServiceRequestServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateServiceRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The gateway instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of service configurations.
    std::shared_ptr<vector<CreateServiceRequestServiceConfigs>> serviceConfigs_ = nullptr;
    // The service source. Valid values:
    // 
    // *   MSE_NACOS: a service in an MSE Nacos instance
    // *   K8S: a service in a Kubernetes (K8s) cluster in Container Service for Kubernetes (ACK)
    // *   VIP: a fixed IP address
    // *   DNS: a Domain Name System (DNS) domain name
    // *   FC3: a service in Function Compute
    // *   SAE_K8S_SERVICE: a service in a K8s cluster in Serverless App Engine (SAE)
    // 
    // Enumerated values:
    // 
    // *   SAE_K8S_SERVICE
    // *   K8S
    // *   FC3
    // *   DNS
    // *   VIP
    // *   MSE_NACOS
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
