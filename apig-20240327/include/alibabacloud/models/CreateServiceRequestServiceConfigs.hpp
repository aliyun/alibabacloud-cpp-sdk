// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEREQUESTSERVICECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEREQUESTSERVICECONFIGS_HPP_
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
  class CreateServiceRequestServiceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRequestServiceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(addresses, addresses_);
      DARABONBA_PTR_TO_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_TO_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_TO_JSON(dnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRequestServiceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_FROM_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_FROM_JSON(dnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    CreateServiceRequestServiceConfigs() = default ;
    CreateServiceRequestServiceConfigs(const CreateServiceRequestServiceConfigs &) = default ;
    CreateServiceRequestServiceConfigs(CreateServiceRequestServiceConfigs &&) = default ;
    CreateServiceRequestServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRequestServiceConfigs() = default ;
    CreateServiceRequestServiceConfigs& operator=(const CreateServiceRequestServiceConfigs &) = default ;
    CreateServiceRequestServiceConfigs& operator=(CreateServiceRequestServiceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->agentServiceConfig_ == nullptr && return this->aiServiceConfig_ == nullptr && return this->dnsServers_ == nullptr && return this->groupName_ == nullptr && return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->qualifier_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline CreateServiceRequestServiceConfigs& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline CreateServiceRequestServiceConfigs& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // agentServiceConfig Field Functions 
    bool hasAgentServiceConfig() const { return this->agentServiceConfig_ != nullptr;};
    void deleteAgentServiceConfig() { this->agentServiceConfig_ = nullptr;};
    inline const Models::AgentServiceConfig & agentServiceConfig() const { DARABONBA_PTR_GET_CONST(agentServiceConfig_, Models::AgentServiceConfig) };
    inline Models::AgentServiceConfig agentServiceConfig() { DARABONBA_PTR_GET(agentServiceConfig_, Models::AgentServiceConfig) };
    inline CreateServiceRequestServiceConfigs& setAgentServiceConfig(const Models::AgentServiceConfig & agentServiceConfig) { DARABONBA_PTR_SET_VALUE(agentServiceConfig_, agentServiceConfig) };
    inline CreateServiceRequestServiceConfigs& setAgentServiceConfig(Models::AgentServiceConfig && agentServiceConfig) { DARABONBA_PTR_SET_RVALUE(agentServiceConfig_, agentServiceConfig) };


    // aiServiceConfig Field Functions 
    bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
    void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
    inline const Models::AiServiceConfig & aiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, Models::AiServiceConfig) };
    inline Models::AiServiceConfig aiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, Models::AiServiceConfig) };
    inline CreateServiceRequestServiceConfigs& setAiServiceConfig(const Models::AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
    inline CreateServiceRequestServiceConfigs& setAiServiceConfig(Models::AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> dnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline CreateServiceRequestServiceConfigs& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline CreateServiceRequestServiceConfigs& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateServiceRequestServiceConfigs& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceRequestServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateServiceRequestServiceConfigs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline CreateServiceRequestServiceConfigs& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The list of domain names or fixed addresses.
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    std::shared_ptr<Models::AgentServiceConfig> agentServiceConfig_ = nullptr;
    // The AI service configurations.
    std::shared_ptr<Models::AiServiceConfig> aiServiceConfig_ = nullptr;
    // The list of DNS service addresses.
    std::shared_ptr<vector<string>> dnsServers_ = nullptr;
    // The service group name. This parameter is required if sourceType is set to MSE_NACOS.
    std::shared_ptr<string> groupName_ = nullptr;
    // The service name.
    std::shared_ptr<string> name_ = nullptr;
    // The service namespace. This parameter is required when sourceType is set to K8S or MSE_NACOS.
    // 
    // *   If sourceType is set to K8S, this parameter specifies the namespace where the K8s service resides.
    // *   If sourceType is set to MSE_NACOS, this parameter specifies a namespace in Nacos.
    std::shared_ptr<string> namespace_ = nullptr;
    // The function version or alias.
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
