// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentServiceConfig.hpp>
#include <alibabacloud/models/AiServiceConfig.hpp>
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
    class ServiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(addresses, addresses_);
        DARABONBA_PTR_TO_JSON(agentServiceConfig, agentServiceConfig_);
        DARABONBA_PTR_TO_JSON(aiServiceConfig, aiServiceConfig_);
        DARABONBA_PTR_TO_JSON(dnsServers, dnsServers_);
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(agentServiceConfig, agentServiceConfig_);
        DARABONBA_PTR_FROM_JSON(aiServiceConfig, aiServiceConfig_);
        DARABONBA_PTR_FROM_JSON(dnsServers, dnsServers_);
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      };
      ServiceConfigs() = default ;
      ServiceConfigs(const ServiceConfigs &) = default ;
      ServiceConfigs(ServiceConfigs &&) = default ;
      ServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceConfigs() = default ;
      ServiceConfigs& operator=(const ServiceConfigs &) = default ;
      ServiceConfigs& operator=(ServiceConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addresses_ == nullptr
        && this->agentServiceConfig_ == nullptr && this->aiServiceConfig_ == nullptr && this->dnsServers_ == nullptr && this->groupName_ == nullptr && this->name_ == nullptr
        && this->namespace_ == nullptr && this->qualifier_ == nullptr && this->sourceId_ == nullptr; };
      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
      inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
      inline ServiceConfigs& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline ServiceConfigs& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // agentServiceConfig Field Functions 
      bool hasAgentServiceConfig() const { return this->agentServiceConfig_ != nullptr;};
      void deleteAgentServiceConfig() { this->agentServiceConfig_ = nullptr;};
      inline const AgentServiceConfig & getAgentServiceConfig() const { DARABONBA_PTR_GET_CONST(agentServiceConfig_, AgentServiceConfig) };
      inline AgentServiceConfig getAgentServiceConfig() { DARABONBA_PTR_GET(agentServiceConfig_, AgentServiceConfig) };
      inline ServiceConfigs& setAgentServiceConfig(const AgentServiceConfig & agentServiceConfig) { DARABONBA_PTR_SET_VALUE(agentServiceConfig_, agentServiceConfig) };
      inline ServiceConfigs& setAgentServiceConfig(AgentServiceConfig && agentServiceConfig) { DARABONBA_PTR_SET_RVALUE(agentServiceConfig_, agentServiceConfig) };


      // aiServiceConfig Field Functions 
      bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
      void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
      inline const AiServiceConfig & getAiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, AiServiceConfig) };
      inline AiServiceConfig getAiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, AiServiceConfig) };
      inline ServiceConfigs& setAiServiceConfig(const AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
      inline ServiceConfigs& setAiServiceConfig(AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


      // dnsServers Field Functions 
      bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
      void deleteDnsServers() { this->dnsServers_ = nullptr;};
      inline const vector<string> & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
      inline vector<string> getDnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
      inline ServiceConfigs& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
      inline ServiceConfigs& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ServiceConfigs& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ServiceConfigs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // qualifier Field Functions 
      bool hasQualifier() const { return this->qualifier_ != nullptr;};
      void deleteQualifier() { this->qualifier_ = nullptr;};
      inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
      inline ServiceConfigs& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline ServiceConfigs& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    protected:
      // The list of domain names or fixed addresses.
      shared_ptr<vector<string>> addresses_ {};
      shared_ptr<AgentServiceConfig> agentServiceConfig_ {};
      // The AI service configurations.
      shared_ptr<AiServiceConfig> aiServiceConfig_ {};
      // The list of DNS service addresses.
      shared_ptr<vector<string>> dnsServers_ {};
      // The service group name. This parameter is required if sourceType is set to MSE_NACOS.
      shared_ptr<string> groupName_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The service namespace. This parameter is required when sourceType is set to K8S or MSE_NACOS.
      // 
      // *   If sourceType is set to K8S, this parameter specifies the namespace where the K8s service resides.
      // *   If sourceType is set to MSE_NACOS, this parameter specifies a namespace in Nacos.
      shared_ptr<string> namespace_ {};
      // The function version or alias.
      shared_ptr<string> qualifier_ {};
      shared_ptr<string> sourceId_ {};
    };

    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceConfigs_ == nullptr && this->sourceType_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateServiceRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServiceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<CreateServiceRequest::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<CreateServiceRequest::ServiceConfigs>) };
    inline vector<CreateServiceRequest::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<CreateServiceRequest::ServiceConfigs>) };
    inline CreateServiceRequest& setServiceConfigs(const vector<CreateServiceRequest::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline CreateServiceRequest& setServiceConfigs(vector<CreateServiceRequest::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateServiceRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The gateway instance ID.
    shared_ptr<string> gatewayId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The list of service configurations.
    shared_ptr<vector<CreateServiceRequest::ServiceConfigs>> serviceConfigs_ {};
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
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
