// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICECONFIG_HPP_
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
  class AgentServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(customConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(dashScopeConfig, dashScopeConfig_);
      DARABONBA_PTR_TO_JSON(difyConfig, difyConfig_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(enableOutlierDetection, enableOutlierDetection_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(customConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(dashScopeConfig, dashScopeConfig_);
      DARABONBA_PTR_FROM_JSON(difyConfig, difyConfig_);
      DARABONBA_PTR_FROM_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_FROM_JSON(enableOutlierDetection, enableOutlierDetection_);
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
    class DifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(botType, botType_);
      };
      friend void from_json(const Darabonba::Json& j, DifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(botType, botType_);
      };
      DifyConfig() = default ;
      DifyConfig(const DifyConfig &) = default ;
      DifyConfig(DifyConfig &&) = default ;
      DifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DifyConfig() = default ;
      DifyConfig& operator=(const DifyConfig &) = default ;
      DifyConfig& operator=(DifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->botType_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline DifyConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // botType Field Functions 
      bool hasBotType() const { return this->botType_ != nullptr;};
      void deleteBotType() { this->botType_ = nullptr;};
      inline string getBotType() const { DARABONBA_PTR_GET_DEFAULT(botType_, "") };
      inline DifyConfig& setBotType(string botType) { DARABONBA_PTR_SET_VALUE(botType_, botType) };


    protected:
      // API Key
      shared_ptr<string> apiKey_ {};
      // The interaction type.
      shared_ptr<string> botType_ {};
    };

    class DashScopeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DashScopeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(appCredentials, appCredentials_);
      };
      friend void from_json(const Darabonba::Json& j, DashScopeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(appCredentials, appCredentials_);
      };
      DashScopeConfig() = default ;
      DashScopeConfig(const DashScopeConfig &) = default ;
      DashScopeConfig(DashScopeConfig &&) = default ;
      DashScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DashScopeConfig() = default ;
      DashScopeConfig& operator=(const DashScopeConfig &) = default ;
      DashScopeConfig& operator=(DashScopeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppCredentials : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppCredentials& obj) { 
          DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(appId, appId_);
        };
        friend void from_json(const Darabonba::Json& j, AppCredentials& obj) { 
          DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(appId, appId_);
        };
        AppCredentials() = default ;
        AppCredentials(const AppCredentials &) = default ;
        AppCredentials(AppCredentials &&) = default ;
        AppCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppCredentials() = default ;
        AppCredentials& operator=(const AppCredentials &) = default ;
        AppCredentials& operator=(AppCredentials &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->appId_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline AppCredentials& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline AppCredentials& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      protected:
        // apiKey
        shared_ptr<string> apiKey_ {};
        // The application ID.
        shared_ptr<string> appId_ {};
      };

      virtual bool empty() const override { return this->appCredentials_ == nullptr; };
      // appCredentials Field Functions 
      bool hasAppCredentials() const { return this->appCredentials_ != nullptr;};
      void deleteAppCredentials() { this->appCredentials_ = nullptr;};
      inline const vector<DashScopeConfig::AppCredentials> & getAppCredentials() const { DARABONBA_PTR_GET_CONST(appCredentials_, vector<DashScopeConfig::AppCredentials>) };
      inline vector<DashScopeConfig::AppCredentials> getAppCredentials() { DARABONBA_PTR_GET(appCredentials_, vector<DashScopeConfig::AppCredentials>) };
      inline DashScopeConfig& setAppCredentials(const vector<DashScopeConfig::AppCredentials> & appCredentials) { DARABONBA_PTR_SET_VALUE(appCredentials_, appCredentials) };
      inline DashScopeConfig& setAppCredentials(vector<DashScopeConfig::AppCredentials> && appCredentials) { DARABONBA_PTR_SET_RVALUE(appCredentials_, appCredentials) };


    protected:
      // The application configuration.
      shared_ptr<vector<DashScopeConfig::AppCredentials>> appCredentials_ {};
    };

    class CustomConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomConfig& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(apiKeyGenerateMode, apiKeyGenerateMode_);
      };
      friend void from_json(const Darabonba::Json& j, CustomConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(apiKeyGenerateMode, apiKeyGenerateMode_);
      };
      CustomConfig() = default ;
      CustomConfig(const CustomConfig &) = default ;
      CustomConfig(CustomConfig &&) = default ;
      CustomConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomConfig() = default ;
      CustomConfig& operator=(const CustomConfig &) = default ;
      CustomConfig& operator=(CustomConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiKeyGenerateMode_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline CustomConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiKeyGenerateMode Field Functions 
      bool hasApiKeyGenerateMode() const { return this->apiKeyGenerateMode_ != nullptr;};
      void deleteApiKeyGenerateMode() { this->apiKeyGenerateMode_ = nullptr;};
      inline string getApiKeyGenerateMode() const { DARABONBA_PTR_GET_DEFAULT(apiKeyGenerateMode_, "") };
      inline CustomConfig& setApiKeyGenerateMode(string apiKeyGenerateMode) { DARABONBA_PTR_SET_VALUE(apiKeyGenerateMode_, apiKeyGenerateMode) };


    protected:
      // apiKey
      shared_ptr<string> apiKey_ {};
      // API key generation mode.
      shared_ptr<string> apiKeyGenerateMode_ {};
    };

    virtual bool empty() const override { return this->address_ == nullptr
        && this->customConfig_ == nullptr && this->dashScopeConfig_ == nullptr && this->difyConfig_ == nullptr && this->enableHealthCheck_ == nullptr && this->enableOutlierDetection_ == nullptr
        && this->protocols_ == nullptr && this->provider_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline AgentServiceConfig& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const AgentServiceConfig::CustomConfig & getCustomConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, AgentServiceConfig::CustomConfig) };
    inline AgentServiceConfig::CustomConfig getCustomConfig() { DARABONBA_PTR_GET(customConfig_, AgentServiceConfig::CustomConfig) };
    inline AgentServiceConfig& setCustomConfig(const AgentServiceConfig::CustomConfig & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline AgentServiceConfig& setCustomConfig(AgentServiceConfig::CustomConfig && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


    // dashScopeConfig Field Functions 
    bool hasDashScopeConfig() const { return this->dashScopeConfig_ != nullptr;};
    void deleteDashScopeConfig() { this->dashScopeConfig_ = nullptr;};
    inline const AgentServiceConfig::DashScopeConfig & getDashScopeConfig() const { DARABONBA_PTR_GET_CONST(dashScopeConfig_, AgentServiceConfig::DashScopeConfig) };
    inline AgentServiceConfig::DashScopeConfig getDashScopeConfig() { DARABONBA_PTR_GET(dashScopeConfig_, AgentServiceConfig::DashScopeConfig) };
    inline AgentServiceConfig& setDashScopeConfig(const AgentServiceConfig::DashScopeConfig & dashScopeConfig) { DARABONBA_PTR_SET_VALUE(dashScopeConfig_, dashScopeConfig) };
    inline AgentServiceConfig& setDashScopeConfig(AgentServiceConfig::DashScopeConfig && dashScopeConfig) { DARABONBA_PTR_SET_RVALUE(dashScopeConfig_, dashScopeConfig) };


    // difyConfig Field Functions 
    bool hasDifyConfig() const { return this->difyConfig_ != nullptr;};
    void deleteDifyConfig() { this->difyConfig_ = nullptr;};
    inline const AgentServiceConfig::DifyConfig & getDifyConfig() const { DARABONBA_PTR_GET_CONST(difyConfig_, AgentServiceConfig::DifyConfig) };
    inline AgentServiceConfig::DifyConfig getDifyConfig() { DARABONBA_PTR_GET(difyConfig_, AgentServiceConfig::DifyConfig) };
    inline AgentServiceConfig& setDifyConfig(const AgentServiceConfig::DifyConfig & difyConfig) { DARABONBA_PTR_SET_VALUE(difyConfig_, difyConfig) };
    inline AgentServiceConfig& setDifyConfig(AgentServiceConfig::DifyConfig && difyConfig) { DARABONBA_PTR_SET_RVALUE(difyConfig_, difyConfig) };


    // enableHealthCheck Field Functions 
    bool hasEnableHealthCheck() const { return this->enableHealthCheck_ != nullptr;};
    void deleteEnableHealthCheck() { this->enableHealthCheck_ = nullptr;};
    inline bool getEnableHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(enableHealthCheck_, false) };
    inline AgentServiceConfig& setEnableHealthCheck(bool enableHealthCheck) { DARABONBA_PTR_SET_VALUE(enableHealthCheck_, enableHealthCheck) };


    // enableOutlierDetection Field Functions 
    bool hasEnableOutlierDetection() const { return this->enableOutlierDetection_ != nullptr;};
    void deleteEnableOutlierDetection() { this->enableOutlierDetection_ = nullptr;};
    inline bool getEnableOutlierDetection() const { DARABONBA_PTR_GET_DEFAULT(enableOutlierDetection_, false) };
    inline AgentServiceConfig& setEnableOutlierDetection(bool enableOutlierDetection) { DARABONBA_PTR_SET_VALUE(enableOutlierDetection_, enableOutlierDetection) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline AgentServiceConfig& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline AgentServiceConfig& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline AgentServiceConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    // The address.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // User-defined configuration
    shared_ptr<AgentServiceConfig::CustomConfig> customConfig_ {};
    // The Model Studio service configuration.
    shared_ptr<AgentServiceConfig::DashScopeConfig> dashScopeConfig_ {};
    // The Dify service configuration.
    shared_ptr<AgentServiceConfig::DifyConfig> difyConfig_ {};
    // Specifies whether to enable health check.
    shared_ptr<bool> enableHealthCheck_ {};
    // Whether to enable outlier detection
    shared_ptr<bool> enableOutlierDetection_ {};
    // The protocol.
    shared_ptr<vector<string>> protocols_ {};
    // The service provider.
    // 
    // This parameter is required.
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
