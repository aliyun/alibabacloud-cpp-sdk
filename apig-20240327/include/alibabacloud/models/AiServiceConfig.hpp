// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(ApiKeyGenerateMode, apiKeyGenerateMode_);
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyGenerateMode, apiKeyGenerateMode_);
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
    class PaiEASServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PaiEASServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, PaiEASServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      PaiEASServiceConfig() = default ;
      PaiEASServiceConfig(const PaiEASServiceConfig &) = default ;
      PaiEASServiceConfig(PaiEASServiceConfig &&) = default ;
      PaiEASServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PaiEASServiceConfig() = default ;
      PaiEASServiceConfig& operator=(const PaiEASServiceConfig &) = default ;
      PaiEASServiceConfig& operator=(PaiEASServiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->workspaceId_ == nullptr; };
      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline PaiEASServiceConfig& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline PaiEASServiceConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline PaiEASServiceConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline PaiEASServiceConfig& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> endpointType_ {};
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> workspaceId_ {};
    };

    class BedrockServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BedrockServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(awsAccessKey, awsAccessKey_);
        DARABONBA_PTR_TO_JSON(awsRegion, awsRegion_);
        DARABONBA_PTR_TO_JSON(awsSecretKey, awsSecretKey_);
      };
      friend void from_json(const Darabonba::Json& j, BedrockServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(awsAccessKey, awsAccessKey_);
        DARABONBA_PTR_FROM_JSON(awsRegion, awsRegion_);
        DARABONBA_PTR_FROM_JSON(awsSecretKey, awsSecretKey_);
      };
      BedrockServiceConfig() = default ;
      BedrockServiceConfig(const BedrockServiceConfig &) = default ;
      BedrockServiceConfig(BedrockServiceConfig &&) = default ;
      BedrockServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BedrockServiceConfig() = default ;
      BedrockServiceConfig& operator=(const BedrockServiceConfig &) = default ;
      BedrockServiceConfig& operator=(BedrockServiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->awsAccessKey_ == nullptr
        && this->awsRegion_ == nullptr && this->awsSecretKey_ == nullptr; };
      // awsAccessKey Field Functions 
      bool hasAwsAccessKey() const { return this->awsAccessKey_ != nullptr;};
      void deleteAwsAccessKey() { this->awsAccessKey_ = nullptr;};
      inline string getAwsAccessKey() const { DARABONBA_PTR_GET_DEFAULT(awsAccessKey_, "") };
      inline BedrockServiceConfig& setAwsAccessKey(string awsAccessKey) { DARABONBA_PTR_SET_VALUE(awsAccessKey_, awsAccessKey) };


      // awsRegion Field Functions 
      bool hasAwsRegion() const { return this->awsRegion_ != nullptr;};
      void deleteAwsRegion() { this->awsRegion_ = nullptr;};
      inline string getAwsRegion() const { DARABONBA_PTR_GET_DEFAULT(awsRegion_, "") };
      inline BedrockServiceConfig& setAwsRegion(string awsRegion) { DARABONBA_PTR_SET_VALUE(awsRegion_, awsRegion) };


      // awsSecretKey Field Functions 
      bool hasAwsSecretKey() const { return this->awsSecretKey_ != nullptr;};
      void deleteAwsSecretKey() { this->awsSecretKey_ = nullptr;};
      inline string getAwsSecretKey() const { DARABONBA_PTR_GET_DEFAULT(awsSecretKey_, "") };
      inline BedrockServiceConfig& setAwsSecretKey(string awsSecretKey) { DARABONBA_PTR_SET_VALUE(awsSecretKey_, awsSecretKey) };


    protected:
      shared_ptr<string> awsAccessKey_ {};
      shared_ptr<string> awsRegion_ {};
      shared_ptr<string> awsSecretKey_ {};
    };

    virtual bool empty() const override { return this->apiKeyGenerateMode_ == nullptr
        && this->address_ == nullptr && this->apiKeys_ == nullptr && this->bedrockServiceConfig_ == nullptr && this->enableHealthCheck_ == nullptr && this->paiEASServiceConfig_ == nullptr
        && this->protocols_ == nullptr && this->provider_ == nullptr; };
    // apiKeyGenerateMode Field Functions 
    bool hasApiKeyGenerateMode() const { return this->apiKeyGenerateMode_ != nullptr;};
    void deleteApiKeyGenerateMode() { this->apiKeyGenerateMode_ = nullptr;};
    inline string getApiKeyGenerateMode() const { DARABONBA_PTR_GET_DEFAULT(apiKeyGenerateMode_, "") };
    inline AiServiceConfig& setApiKeyGenerateMode(string apiKeyGenerateMode) { DARABONBA_PTR_SET_VALUE(apiKeyGenerateMode_, apiKeyGenerateMode) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AiServiceConfig& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<string> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<string>) };
    inline vector<string> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<string>) };
    inline AiServiceConfig& setApiKeys(const vector<string> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline AiServiceConfig& setApiKeys(vector<string> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // bedrockServiceConfig Field Functions 
    bool hasBedrockServiceConfig() const { return this->bedrockServiceConfig_ != nullptr;};
    void deleteBedrockServiceConfig() { this->bedrockServiceConfig_ = nullptr;};
    inline const AiServiceConfig::BedrockServiceConfig & getBedrockServiceConfig() const { DARABONBA_PTR_GET_CONST(bedrockServiceConfig_, AiServiceConfig::BedrockServiceConfig) };
    inline AiServiceConfig::BedrockServiceConfig getBedrockServiceConfig() { DARABONBA_PTR_GET(bedrockServiceConfig_, AiServiceConfig::BedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(const AiServiceConfig::BedrockServiceConfig & bedrockServiceConfig) { DARABONBA_PTR_SET_VALUE(bedrockServiceConfig_, bedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(AiServiceConfig::BedrockServiceConfig && bedrockServiceConfig) { DARABONBA_PTR_SET_RVALUE(bedrockServiceConfig_, bedrockServiceConfig) };


    // enableHealthCheck Field Functions 
    bool hasEnableHealthCheck() const { return this->enableHealthCheck_ != nullptr;};
    void deleteEnableHealthCheck() { this->enableHealthCheck_ = nullptr;};
    inline bool getEnableHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(enableHealthCheck_, false) };
    inline AiServiceConfig& setEnableHealthCheck(bool enableHealthCheck) { DARABONBA_PTR_SET_VALUE(enableHealthCheck_, enableHealthCheck) };


    // paiEASServiceConfig Field Functions 
    bool hasPaiEASServiceConfig() const { return this->paiEASServiceConfig_ != nullptr;};
    void deletePaiEASServiceConfig() { this->paiEASServiceConfig_ = nullptr;};
    inline const AiServiceConfig::PaiEASServiceConfig & getPaiEASServiceConfig() const { DARABONBA_PTR_GET_CONST(paiEASServiceConfig_, AiServiceConfig::PaiEASServiceConfig) };
    inline AiServiceConfig::PaiEASServiceConfig getPaiEASServiceConfig() { DARABONBA_PTR_GET(paiEASServiceConfig_, AiServiceConfig::PaiEASServiceConfig) };
    inline AiServiceConfig& setPaiEASServiceConfig(const AiServiceConfig::PaiEASServiceConfig & paiEASServiceConfig) { DARABONBA_PTR_SET_VALUE(paiEASServiceConfig_, paiEASServiceConfig) };
    inline AiServiceConfig& setPaiEASServiceConfig(AiServiceConfig::PaiEASServiceConfig && paiEASServiceConfig) { DARABONBA_PTR_SET_RVALUE(paiEASServiceConfig_, paiEASServiceConfig) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline AiServiceConfig& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline AiServiceConfig& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline AiServiceConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    shared_ptr<string> apiKeyGenerateMode_ {};
    shared_ptr<string> address_ {};
    shared_ptr<vector<string>> apiKeys_ {};
    shared_ptr<AiServiceConfig::BedrockServiceConfig> bedrockServiceConfig_ {};
    shared_ptr<bool> enableHealthCheck_ {};
    shared_ptr<AiServiceConfig::PaiEASServiceConfig> paiEASServiceConfig_ {};
    shared_ptr<vector<string>> protocols_ {};
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
