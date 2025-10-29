// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AiServiceConfigBedrockServiceConfig.hpp>
#include <alibabacloud/models/AiServiceConfigPaiEASServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_FROM_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_FROM_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    AiServiceConfig() = default ;
    AiServiceConfig(const AiServiceConfig &) = default ;
    AiServiceConfig(AiServiceConfig &&) = default ;
    AiServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiServiceConfig() = default ;
    AiServiceConfig& operator=(const AiServiceConfig &) = default ;
    AiServiceConfig& operator=(AiServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->apiKeys_ == nullptr && return this->bedrockServiceConfig_ == nullptr && return this->enableHealthCheck_ == nullptr && return this->paiEASServiceConfig_ == nullptr && return this->protocols_ == nullptr
        && return this->provider_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AiServiceConfig& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<string> & apiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<string>) };
    inline vector<string> apiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<string>) };
    inline AiServiceConfig& setApiKeys(const vector<string> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline AiServiceConfig& setApiKeys(vector<string> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // bedrockServiceConfig Field Functions 
    bool hasBedrockServiceConfig() const { return this->bedrockServiceConfig_ != nullptr;};
    void deleteBedrockServiceConfig() { this->bedrockServiceConfig_ = nullptr;};
    inline const AiServiceConfigBedrockServiceConfig & bedrockServiceConfig() const { DARABONBA_PTR_GET_CONST(bedrockServiceConfig_, AiServiceConfigBedrockServiceConfig) };
    inline AiServiceConfigBedrockServiceConfig bedrockServiceConfig() { DARABONBA_PTR_GET(bedrockServiceConfig_, AiServiceConfigBedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(const AiServiceConfigBedrockServiceConfig & bedrockServiceConfig) { DARABONBA_PTR_SET_VALUE(bedrockServiceConfig_, bedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(AiServiceConfigBedrockServiceConfig && bedrockServiceConfig) { DARABONBA_PTR_SET_RVALUE(bedrockServiceConfig_, bedrockServiceConfig) };


    // enableHealthCheck Field Functions 
    bool hasEnableHealthCheck() const { return this->enableHealthCheck_ != nullptr;};
    void deleteEnableHealthCheck() { this->enableHealthCheck_ = nullptr;};
    inline bool enableHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(enableHealthCheck_, false) };
    inline AiServiceConfig& setEnableHealthCheck(bool enableHealthCheck) { DARABONBA_PTR_SET_VALUE(enableHealthCheck_, enableHealthCheck) };


    // paiEASServiceConfig Field Functions 
    bool hasPaiEASServiceConfig() const { return this->paiEASServiceConfig_ != nullptr;};
    void deletePaiEASServiceConfig() { this->paiEASServiceConfig_ = nullptr;};
    inline const AiServiceConfigPaiEASServiceConfig & paiEASServiceConfig() const { DARABONBA_PTR_GET_CONST(paiEASServiceConfig_, AiServiceConfigPaiEASServiceConfig) };
    inline AiServiceConfigPaiEASServiceConfig paiEASServiceConfig() { DARABONBA_PTR_GET(paiEASServiceConfig_, AiServiceConfigPaiEASServiceConfig) };
    inline AiServiceConfig& setPaiEASServiceConfig(const AiServiceConfigPaiEASServiceConfig & paiEASServiceConfig) { DARABONBA_PTR_SET_VALUE(paiEASServiceConfig_, paiEASServiceConfig) };
    inline AiServiceConfig& setPaiEASServiceConfig(AiServiceConfigPaiEASServiceConfig && paiEASServiceConfig) { DARABONBA_PTR_SET_RVALUE(paiEASServiceConfig_, paiEASServiceConfig) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline AiServiceConfig& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline AiServiceConfig& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline AiServiceConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<vector<string>> apiKeys_ = nullptr;
    std::shared_ptr<AiServiceConfigBedrockServiceConfig> bedrockServiceConfig_ = nullptr;
    std::shared_ptr<bool> enableHealthCheck_ = nullptr;
    std::shared_ptr<AiServiceConfigPaiEASServiceConfig> paiEASServiceConfig_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
