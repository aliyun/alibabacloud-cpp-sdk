// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
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
      DARABONBA_PTR_TO_JSON(compatibleProtocols, compatibleProtocols_);
      DARABONBA_PTR_TO_JSON(defaultModelName, defaultModelName_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(enableOutlierDetection, enableOutlierDetection_);
      DARABONBA_PTR_TO_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(vertexServiceConfig, vertexServiceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyGenerateMode, apiKeyGenerateMode_);
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_FROM_JSON(compatibleProtocols, compatibleProtocols_);
      DARABONBA_PTR_FROM_JSON(defaultModelName, defaultModelName_);
      DARABONBA_PTR_FROM_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_FROM_JSON(enableOutlierDetection, enableOutlierDetection_);
      DARABONBA_PTR_FROM_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(vertexServiceConfig, vertexServiceConfig_);
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
    class VertexServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VertexServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(geminiSafetySetting, geminiSafetySetting_);
        DARABONBA_PTR_TO_JSON(vertexAuthKey, vertexAuthKey_);
        DARABONBA_PTR_TO_JSON(vertexAuthServiceName, vertexAuthServiceName_);
        DARABONBA_PTR_TO_JSON(vertexProjectId, vertexProjectId_);
        DARABONBA_PTR_TO_JSON(vertexRegion, vertexRegion_);
        DARABONBA_PTR_TO_JSON(vertexTokenRefreshAhead, vertexTokenRefreshAhead_);
      };
      friend void from_json(const Darabonba::Json& j, VertexServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(geminiSafetySetting, geminiSafetySetting_);
        DARABONBA_PTR_FROM_JSON(vertexAuthKey, vertexAuthKey_);
        DARABONBA_PTR_FROM_JSON(vertexAuthServiceName, vertexAuthServiceName_);
        DARABONBA_PTR_FROM_JSON(vertexProjectId, vertexProjectId_);
        DARABONBA_PTR_FROM_JSON(vertexRegion, vertexRegion_);
        DARABONBA_PTR_FROM_JSON(vertexTokenRefreshAhead, vertexTokenRefreshAhead_);
      };
      VertexServiceConfig() = default ;
      VertexServiceConfig(const VertexServiceConfig &) = default ;
      VertexServiceConfig(VertexServiceConfig &&) = default ;
      VertexServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VertexServiceConfig() = default ;
      VertexServiceConfig& operator=(const VertexServiceConfig &) = default ;
      VertexServiceConfig& operator=(VertexServiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->geminiSafetySetting_ == nullptr
        && this->vertexAuthKey_ == nullptr && this->vertexAuthServiceName_ == nullptr && this->vertexProjectId_ == nullptr && this->vertexRegion_ == nullptr && this->vertexTokenRefreshAhead_ == nullptr; };
      // geminiSafetySetting Field Functions 
      bool hasGeminiSafetySetting() const { return this->geminiSafetySetting_ != nullptr;};
      void deleteGeminiSafetySetting() { this->geminiSafetySetting_ = nullptr;};
      inline const map<string, string> & getGeminiSafetySetting() const { DARABONBA_PTR_GET_CONST(geminiSafetySetting_, map<string, string>) };
      inline map<string, string> getGeminiSafetySetting() { DARABONBA_PTR_GET(geminiSafetySetting_, map<string, string>) };
      inline VertexServiceConfig& setGeminiSafetySetting(const map<string, string> & geminiSafetySetting) { DARABONBA_PTR_SET_VALUE(geminiSafetySetting_, geminiSafetySetting) };
      inline VertexServiceConfig& setGeminiSafetySetting(map<string, string> && geminiSafetySetting) { DARABONBA_PTR_SET_RVALUE(geminiSafetySetting_, geminiSafetySetting) };


      // vertexAuthKey Field Functions 
      bool hasVertexAuthKey() const { return this->vertexAuthKey_ != nullptr;};
      void deleteVertexAuthKey() { this->vertexAuthKey_ = nullptr;};
      inline string getVertexAuthKey() const { DARABONBA_PTR_GET_DEFAULT(vertexAuthKey_, "") };
      inline VertexServiceConfig& setVertexAuthKey(string vertexAuthKey) { DARABONBA_PTR_SET_VALUE(vertexAuthKey_, vertexAuthKey) };


      // vertexAuthServiceName Field Functions 
      bool hasVertexAuthServiceName() const { return this->vertexAuthServiceName_ != nullptr;};
      void deleteVertexAuthServiceName() { this->vertexAuthServiceName_ = nullptr;};
      inline string getVertexAuthServiceName() const { DARABONBA_PTR_GET_DEFAULT(vertexAuthServiceName_, "") };
      inline VertexServiceConfig& setVertexAuthServiceName(string vertexAuthServiceName) { DARABONBA_PTR_SET_VALUE(vertexAuthServiceName_, vertexAuthServiceName) };


      // vertexProjectId Field Functions 
      bool hasVertexProjectId() const { return this->vertexProjectId_ != nullptr;};
      void deleteVertexProjectId() { this->vertexProjectId_ = nullptr;};
      inline string getVertexProjectId() const { DARABONBA_PTR_GET_DEFAULT(vertexProjectId_, "") };
      inline VertexServiceConfig& setVertexProjectId(string vertexProjectId) { DARABONBA_PTR_SET_VALUE(vertexProjectId_, vertexProjectId) };


      // vertexRegion Field Functions 
      bool hasVertexRegion() const { return this->vertexRegion_ != nullptr;};
      void deleteVertexRegion() { this->vertexRegion_ = nullptr;};
      inline string getVertexRegion() const { DARABONBA_PTR_GET_DEFAULT(vertexRegion_, "") };
      inline VertexServiceConfig& setVertexRegion(string vertexRegion) { DARABONBA_PTR_SET_VALUE(vertexRegion_, vertexRegion) };


      // vertexTokenRefreshAhead Field Functions 
      bool hasVertexTokenRefreshAhead() const { return this->vertexTokenRefreshAhead_ != nullptr;};
      void deleteVertexTokenRefreshAhead() { this->vertexTokenRefreshAhead_ = nullptr;};
      inline int32_t getVertexTokenRefreshAhead() const { DARABONBA_PTR_GET_DEFAULT(vertexTokenRefreshAhead_, 0) };
      inline VertexServiceConfig& setVertexTokenRefreshAhead(int32_t vertexTokenRefreshAhead) { DARABONBA_PTR_SET_VALUE(vertexTokenRefreshAhead_, vertexTokenRefreshAhead) };


    protected:
      shared_ptr<map<string, string>> geminiSafetySetting_ {};
      shared_ptr<string> vertexAuthKey_ {};
      shared_ptr<string> vertexAuthServiceName_ {};
      shared_ptr<string> vertexProjectId_ {};
      shared_ptr<string> vertexRegion_ {};
      shared_ptr<int32_t> vertexTokenRefreshAhead_ {};
    };

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
        && this->address_ == nullptr && this->apiKeys_ == nullptr && this->bedrockServiceConfig_ == nullptr && this->compatibleProtocols_ == nullptr && this->defaultModelName_ == nullptr
        && this->enableHealthCheck_ == nullptr && this->enableOutlierDetection_ == nullptr && this->paiEASServiceConfig_ == nullptr && this->protocols_ == nullptr && this->provider_ == nullptr
        && this->vertexServiceConfig_ == nullptr; };
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


    // compatibleProtocols Field Functions 
    bool hasCompatibleProtocols() const { return this->compatibleProtocols_ != nullptr;};
    void deleteCompatibleProtocols() { this->compatibleProtocols_ = nullptr;};
    inline const vector<string> & getCompatibleProtocols() const { DARABONBA_PTR_GET_CONST(compatibleProtocols_, vector<string>) };
    inline vector<string> getCompatibleProtocols() { DARABONBA_PTR_GET(compatibleProtocols_, vector<string>) };
    inline AiServiceConfig& setCompatibleProtocols(const vector<string> & compatibleProtocols) { DARABONBA_PTR_SET_VALUE(compatibleProtocols_, compatibleProtocols) };
    inline AiServiceConfig& setCompatibleProtocols(vector<string> && compatibleProtocols) { DARABONBA_PTR_SET_RVALUE(compatibleProtocols_, compatibleProtocols) };


    // defaultModelName Field Functions 
    bool hasDefaultModelName() const { return this->defaultModelName_ != nullptr;};
    void deleteDefaultModelName() { this->defaultModelName_ = nullptr;};
    inline string getDefaultModelName() const { DARABONBA_PTR_GET_DEFAULT(defaultModelName_, "") };
    inline AiServiceConfig& setDefaultModelName(string defaultModelName) { DARABONBA_PTR_SET_VALUE(defaultModelName_, defaultModelName) };


    // enableHealthCheck Field Functions 
    bool hasEnableHealthCheck() const { return this->enableHealthCheck_ != nullptr;};
    void deleteEnableHealthCheck() { this->enableHealthCheck_ = nullptr;};
    inline bool getEnableHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(enableHealthCheck_, false) };
    inline AiServiceConfig& setEnableHealthCheck(bool enableHealthCheck) { DARABONBA_PTR_SET_VALUE(enableHealthCheck_, enableHealthCheck) };


    // enableOutlierDetection Field Functions 
    bool hasEnableOutlierDetection() const { return this->enableOutlierDetection_ != nullptr;};
    void deleteEnableOutlierDetection() { this->enableOutlierDetection_ = nullptr;};
    inline bool getEnableOutlierDetection() const { DARABONBA_PTR_GET_DEFAULT(enableOutlierDetection_, false) };
    inline AiServiceConfig& setEnableOutlierDetection(bool enableOutlierDetection) { DARABONBA_PTR_SET_VALUE(enableOutlierDetection_, enableOutlierDetection) };


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


    // vertexServiceConfig Field Functions 
    bool hasVertexServiceConfig() const { return this->vertexServiceConfig_ != nullptr;};
    void deleteVertexServiceConfig() { this->vertexServiceConfig_ = nullptr;};
    inline const AiServiceConfig::VertexServiceConfig & getVertexServiceConfig() const { DARABONBA_PTR_GET_CONST(vertexServiceConfig_, AiServiceConfig::VertexServiceConfig) };
    inline AiServiceConfig::VertexServiceConfig getVertexServiceConfig() { DARABONBA_PTR_GET(vertexServiceConfig_, AiServiceConfig::VertexServiceConfig) };
    inline AiServiceConfig& setVertexServiceConfig(const AiServiceConfig::VertexServiceConfig & vertexServiceConfig) { DARABONBA_PTR_SET_VALUE(vertexServiceConfig_, vertexServiceConfig) };
    inline AiServiceConfig& setVertexServiceConfig(AiServiceConfig::VertexServiceConfig && vertexServiceConfig) { DARABONBA_PTR_SET_RVALUE(vertexServiceConfig_, vertexServiceConfig) };


  protected:
    shared_ptr<string> apiKeyGenerateMode_ {};
    shared_ptr<string> address_ {};
    shared_ptr<vector<string>> apiKeys_ {};
    shared_ptr<AiServiceConfig::BedrockServiceConfig> bedrockServiceConfig_ {};
    shared_ptr<vector<string>> compatibleProtocols_ {};
    shared_ptr<string> defaultModelName_ {};
    shared_ptr<bool> enableHealthCheck_ {};
    shared_ptr<bool> enableOutlierDetection_ {};
    shared_ptr<AiServiceConfig::PaiEASServiceConfig> paiEASServiceConfig_ {};
    shared_ptr<vector<string>> protocols_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<AiServiceConfig::VertexServiceConfig> vertexServiceConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
