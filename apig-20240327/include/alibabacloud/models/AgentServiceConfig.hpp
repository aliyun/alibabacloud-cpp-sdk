// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AgentServiceConfigDashScopeConfig.hpp>
#include <alibabacloud/models/AgentServiceConfigDifyConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(dashScopeConfig, dashScopeConfig_);
      DARABONBA_PTR_TO_JSON(difyConfig, difyConfig_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(dashScopeConfig, dashScopeConfig_);
      DARABONBA_PTR_FROM_JSON(difyConfig, difyConfig_);
      DARABONBA_PTR_FROM_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    AgentServiceConfig() = default ;
    AgentServiceConfig(const AgentServiceConfig &) = default ;
    AgentServiceConfig(AgentServiceConfig &&) = default ;
    AgentServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceConfig() = default ;
    AgentServiceConfig& operator=(const AgentServiceConfig &) = default ;
    AgentServiceConfig& operator=(AgentServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->dashScopeConfig_ != nullptr && this->difyConfig_ != nullptr && this->enableHealthCheck_ != nullptr && this->protocols_ != nullptr && this->provider_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AgentServiceConfig& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // dashScopeConfig Field Functions 
    bool hasDashScopeConfig() const { return this->dashScopeConfig_ != nullptr;};
    void deleteDashScopeConfig() { this->dashScopeConfig_ = nullptr;};
    inline const AgentServiceConfigDashScopeConfig & dashScopeConfig() const { DARABONBA_PTR_GET_CONST(dashScopeConfig_, AgentServiceConfigDashScopeConfig) };
    inline AgentServiceConfigDashScopeConfig dashScopeConfig() { DARABONBA_PTR_GET(dashScopeConfig_, AgentServiceConfigDashScopeConfig) };
    inline AgentServiceConfig& setDashScopeConfig(const AgentServiceConfigDashScopeConfig & dashScopeConfig) { DARABONBA_PTR_SET_VALUE(dashScopeConfig_, dashScopeConfig) };
    inline AgentServiceConfig& setDashScopeConfig(AgentServiceConfigDashScopeConfig && dashScopeConfig) { DARABONBA_PTR_SET_RVALUE(dashScopeConfig_, dashScopeConfig) };


    // difyConfig Field Functions 
    bool hasDifyConfig() const { return this->difyConfig_ != nullptr;};
    void deleteDifyConfig() { this->difyConfig_ = nullptr;};
    inline const AgentServiceConfigDifyConfig & difyConfig() const { DARABONBA_PTR_GET_CONST(difyConfig_, AgentServiceConfigDifyConfig) };
    inline AgentServiceConfigDifyConfig difyConfig() { DARABONBA_PTR_GET(difyConfig_, AgentServiceConfigDifyConfig) };
    inline AgentServiceConfig& setDifyConfig(const AgentServiceConfigDifyConfig & difyConfig) { DARABONBA_PTR_SET_VALUE(difyConfig_, difyConfig) };
    inline AgentServiceConfig& setDifyConfig(AgentServiceConfigDifyConfig && difyConfig) { DARABONBA_PTR_SET_RVALUE(difyConfig_, difyConfig) };


    // enableHealthCheck Field Functions 
    bool hasEnableHealthCheck() const { return this->enableHealthCheck_ != nullptr;};
    void deleteEnableHealthCheck() { this->enableHealthCheck_ = nullptr;};
    inline bool enableHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(enableHealthCheck_, false) };
    inline AgentServiceConfig& setEnableHealthCheck(bool enableHealthCheck) { DARABONBA_PTR_SET_VALUE(enableHealthCheck_, enableHealthCheck) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline AgentServiceConfig& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline AgentServiceConfig& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline AgentServiceConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<AgentServiceConfigDashScopeConfig> dashScopeConfig_ = nullptr;
    std::shared_ptr<AgentServiceConfigDifyConfig> difyConfig_ = nullptr;
    std::shared_ptr<bool> enableHealthCheck_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> provider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
