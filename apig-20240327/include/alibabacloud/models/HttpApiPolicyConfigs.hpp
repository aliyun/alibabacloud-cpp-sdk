// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPOLICYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPOLICYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiCacheConfig.hpp>
#include <alibabacloud/models/AiFallbackConfig.hpp>
#include <alibabacloud/models/AiNetworkSearchConfig.hpp>
#include <alibabacloud/models/AiSecurityGuardConfig.hpp>
#include <alibabacloud/models/AiStatisticsConfig.hpp>
#include <alibabacloud/models/AiTokenRateLimitConfig.hpp>
#include <alibabacloud/models/AiToolSelectionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPolicyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPolicyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(aiCacheConfig, aiCacheConfig_);
      DARABONBA_PTR_TO_JSON(aiFallbackConfig, aiFallbackConfig_);
      DARABONBA_PTR_TO_JSON(aiNetworkSearchConfig, aiNetworkSearchConfig_);
      DARABONBA_PTR_TO_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
      DARABONBA_PTR_TO_JSON(aiStatisticsConfig, aiStatisticsConfig_);
      DARABONBA_PTR_TO_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
      DARABONBA_PTR_TO_JSON(aiToolSelectionConfig, aiToolSelectionConfig_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(semanticRouterConfig, semanticRouterConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPolicyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(aiCacheConfig, aiCacheConfig_);
      DARABONBA_PTR_FROM_JSON(aiFallbackConfig, aiFallbackConfig_);
      DARABONBA_PTR_FROM_JSON(aiNetworkSearchConfig, aiNetworkSearchConfig_);
      DARABONBA_PTR_FROM_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
      DARABONBA_PTR_FROM_JSON(aiStatisticsConfig, aiStatisticsConfig_);
      DARABONBA_PTR_FROM_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
      DARABONBA_PTR_FROM_JSON(aiToolSelectionConfig, aiToolSelectionConfig_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(semanticRouterConfig, semanticRouterConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    HttpApiPolicyConfigs() = default ;
    HttpApiPolicyConfigs(const HttpApiPolicyConfigs &) = default ;
    HttpApiPolicyConfigs(HttpApiPolicyConfigs &&) = default ;
    HttpApiPolicyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPolicyConfigs() = default ;
    HttpApiPolicyConfigs& operator=(const HttpApiPolicyConfigs &) = default ;
    HttpApiPolicyConfigs& operator=(HttpApiPolicyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SemanticRouterConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SemanticRouterConfig& obj) { 
        DARABONBA_PTR_TO_JSON(timeoutMillisecond, timeoutMillisecond_);
      };
      friend void from_json(const Darabonba::Json& j, SemanticRouterConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(timeoutMillisecond, timeoutMillisecond_);
      };
      SemanticRouterConfig() = default ;
      SemanticRouterConfig(const SemanticRouterConfig &) = default ;
      SemanticRouterConfig(SemanticRouterConfig &&) = default ;
      SemanticRouterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SemanticRouterConfig() = default ;
      SemanticRouterConfig& operator=(const SemanticRouterConfig &) = default ;
      SemanticRouterConfig& operator=(SemanticRouterConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeoutMillisecond_ == nullptr; };
      // timeoutMillisecond Field Functions 
      bool hasTimeoutMillisecond() const { return this->timeoutMillisecond_ != nullptr;};
      void deleteTimeoutMillisecond() { this->timeoutMillisecond_ = nullptr;};
      inline int32_t getTimeoutMillisecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutMillisecond_, 0) };
      inline SemanticRouterConfig& setTimeoutMillisecond(int32_t timeoutMillisecond) { DARABONBA_PTR_SET_VALUE(timeoutMillisecond_, timeoutMillisecond) };


    protected:
      // Timeout in milliseconds
      shared_ptr<int32_t> timeoutMillisecond_ {};
    };

    virtual bool empty() const override { return this->aiCacheConfig_ == nullptr
        && this->aiFallbackConfig_ == nullptr && this->aiNetworkSearchConfig_ == nullptr && this->aiSecurityGuardConfig_ == nullptr && this->aiStatisticsConfig_ == nullptr && this->aiTokenRateLimitConfig_ == nullptr
        && this->aiToolSelectionConfig_ == nullptr && this->enable_ == nullptr && this->semanticRouterConfig_ == nullptr && this->type_ == nullptr; };
    // aiCacheConfig Field Functions 
    bool hasAiCacheConfig() const { return this->aiCacheConfig_ != nullptr;};
    void deleteAiCacheConfig() { this->aiCacheConfig_ = nullptr;};
    inline const AiCacheConfig & getAiCacheConfig() const { DARABONBA_PTR_GET_CONST(aiCacheConfig_, AiCacheConfig) };
    inline AiCacheConfig getAiCacheConfig() { DARABONBA_PTR_GET(aiCacheConfig_, AiCacheConfig) };
    inline HttpApiPolicyConfigs& setAiCacheConfig(const AiCacheConfig & aiCacheConfig) { DARABONBA_PTR_SET_VALUE(aiCacheConfig_, aiCacheConfig) };
    inline HttpApiPolicyConfigs& setAiCacheConfig(AiCacheConfig && aiCacheConfig) { DARABONBA_PTR_SET_RVALUE(aiCacheConfig_, aiCacheConfig) };


    // aiFallbackConfig Field Functions 
    bool hasAiFallbackConfig() const { return this->aiFallbackConfig_ != nullptr;};
    void deleteAiFallbackConfig() { this->aiFallbackConfig_ = nullptr;};
    inline const AiFallbackConfig & getAiFallbackConfig() const { DARABONBA_PTR_GET_CONST(aiFallbackConfig_, AiFallbackConfig) };
    inline AiFallbackConfig getAiFallbackConfig() { DARABONBA_PTR_GET(aiFallbackConfig_, AiFallbackConfig) };
    inline HttpApiPolicyConfigs& setAiFallbackConfig(const AiFallbackConfig & aiFallbackConfig) { DARABONBA_PTR_SET_VALUE(aiFallbackConfig_, aiFallbackConfig) };
    inline HttpApiPolicyConfigs& setAiFallbackConfig(AiFallbackConfig && aiFallbackConfig) { DARABONBA_PTR_SET_RVALUE(aiFallbackConfig_, aiFallbackConfig) };


    // aiNetworkSearchConfig Field Functions 
    bool hasAiNetworkSearchConfig() const { return this->aiNetworkSearchConfig_ != nullptr;};
    void deleteAiNetworkSearchConfig() { this->aiNetworkSearchConfig_ = nullptr;};
    inline const AiNetworkSearchConfig & getAiNetworkSearchConfig() const { DARABONBA_PTR_GET_CONST(aiNetworkSearchConfig_, AiNetworkSearchConfig) };
    inline AiNetworkSearchConfig getAiNetworkSearchConfig() { DARABONBA_PTR_GET(aiNetworkSearchConfig_, AiNetworkSearchConfig) };
    inline HttpApiPolicyConfigs& setAiNetworkSearchConfig(const AiNetworkSearchConfig & aiNetworkSearchConfig) { DARABONBA_PTR_SET_VALUE(aiNetworkSearchConfig_, aiNetworkSearchConfig) };
    inline HttpApiPolicyConfigs& setAiNetworkSearchConfig(AiNetworkSearchConfig && aiNetworkSearchConfig) { DARABONBA_PTR_SET_RVALUE(aiNetworkSearchConfig_, aiNetworkSearchConfig) };


    // aiSecurityGuardConfig Field Functions 
    bool hasAiSecurityGuardConfig() const { return this->aiSecurityGuardConfig_ != nullptr;};
    void deleteAiSecurityGuardConfig() { this->aiSecurityGuardConfig_ = nullptr;};
    inline const AiSecurityGuardConfig & getAiSecurityGuardConfig() const { DARABONBA_PTR_GET_CONST(aiSecurityGuardConfig_, AiSecurityGuardConfig) };
    inline AiSecurityGuardConfig getAiSecurityGuardConfig() { DARABONBA_PTR_GET(aiSecurityGuardConfig_, AiSecurityGuardConfig) };
    inline HttpApiPolicyConfigs& setAiSecurityGuardConfig(const AiSecurityGuardConfig & aiSecurityGuardConfig) { DARABONBA_PTR_SET_VALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };
    inline HttpApiPolicyConfigs& setAiSecurityGuardConfig(AiSecurityGuardConfig && aiSecurityGuardConfig) { DARABONBA_PTR_SET_RVALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };


    // aiStatisticsConfig Field Functions 
    bool hasAiStatisticsConfig() const { return this->aiStatisticsConfig_ != nullptr;};
    void deleteAiStatisticsConfig() { this->aiStatisticsConfig_ = nullptr;};
    inline const AiStatisticsConfig & getAiStatisticsConfig() const { DARABONBA_PTR_GET_CONST(aiStatisticsConfig_, AiStatisticsConfig) };
    inline AiStatisticsConfig getAiStatisticsConfig() { DARABONBA_PTR_GET(aiStatisticsConfig_, AiStatisticsConfig) };
    inline HttpApiPolicyConfigs& setAiStatisticsConfig(const AiStatisticsConfig & aiStatisticsConfig) { DARABONBA_PTR_SET_VALUE(aiStatisticsConfig_, aiStatisticsConfig) };
    inline HttpApiPolicyConfigs& setAiStatisticsConfig(AiStatisticsConfig && aiStatisticsConfig) { DARABONBA_PTR_SET_RVALUE(aiStatisticsConfig_, aiStatisticsConfig) };


    // aiTokenRateLimitConfig Field Functions 
    bool hasAiTokenRateLimitConfig() const { return this->aiTokenRateLimitConfig_ != nullptr;};
    void deleteAiTokenRateLimitConfig() { this->aiTokenRateLimitConfig_ = nullptr;};
    inline const AiTokenRateLimitConfig & getAiTokenRateLimitConfig() const { DARABONBA_PTR_GET_CONST(aiTokenRateLimitConfig_, AiTokenRateLimitConfig) };
    inline AiTokenRateLimitConfig getAiTokenRateLimitConfig() { DARABONBA_PTR_GET(aiTokenRateLimitConfig_, AiTokenRateLimitConfig) };
    inline HttpApiPolicyConfigs& setAiTokenRateLimitConfig(const AiTokenRateLimitConfig & aiTokenRateLimitConfig) { DARABONBA_PTR_SET_VALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };
    inline HttpApiPolicyConfigs& setAiTokenRateLimitConfig(AiTokenRateLimitConfig && aiTokenRateLimitConfig) { DARABONBA_PTR_SET_RVALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };


    // aiToolSelectionConfig Field Functions 
    bool hasAiToolSelectionConfig() const { return this->aiToolSelectionConfig_ != nullptr;};
    void deleteAiToolSelectionConfig() { this->aiToolSelectionConfig_ = nullptr;};
    inline const AiToolSelectionConfig & getAiToolSelectionConfig() const { DARABONBA_PTR_GET_CONST(aiToolSelectionConfig_, AiToolSelectionConfig) };
    inline AiToolSelectionConfig getAiToolSelectionConfig() { DARABONBA_PTR_GET(aiToolSelectionConfig_, AiToolSelectionConfig) };
    inline HttpApiPolicyConfigs& setAiToolSelectionConfig(const AiToolSelectionConfig & aiToolSelectionConfig) { DARABONBA_PTR_SET_VALUE(aiToolSelectionConfig_, aiToolSelectionConfig) };
    inline HttpApiPolicyConfigs& setAiToolSelectionConfig(AiToolSelectionConfig && aiToolSelectionConfig) { DARABONBA_PTR_SET_RVALUE(aiToolSelectionConfig_, aiToolSelectionConfig) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiPolicyConfigs& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // semanticRouterConfig Field Functions 
    bool hasSemanticRouterConfig() const { return this->semanticRouterConfig_ != nullptr;};
    void deleteSemanticRouterConfig() { this->semanticRouterConfig_ = nullptr;};
    inline const HttpApiPolicyConfigs::SemanticRouterConfig & getSemanticRouterConfig() const { DARABONBA_PTR_GET_CONST(semanticRouterConfig_, HttpApiPolicyConfigs::SemanticRouterConfig) };
    inline HttpApiPolicyConfigs::SemanticRouterConfig getSemanticRouterConfig() { DARABONBA_PTR_GET(semanticRouterConfig_, HttpApiPolicyConfigs::SemanticRouterConfig) };
    inline HttpApiPolicyConfigs& setSemanticRouterConfig(const HttpApiPolicyConfigs::SemanticRouterConfig & semanticRouterConfig) { DARABONBA_PTR_SET_VALUE(semanticRouterConfig_, semanticRouterConfig) };
    inline HttpApiPolicyConfigs& setSemanticRouterConfig(HttpApiPolicyConfigs::SemanticRouterConfig && semanticRouterConfig) { DARABONBA_PTR_SET_RVALUE(semanticRouterConfig_, semanticRouterConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiPolicyConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // AiCacheConfig
    shared_ptr<AiCacheConfig> aiCacheConfig_ {};
    // AiFallbackConfig
    shared_ptr<AiFallbackConfig> aiFallbackConfig_ {};
    // AiNetworkSearchConfig
    shared_ptr<AiNetworkSearchConfig> aiNetworkSearchConfig_ {};
    // AiSecurityGuardConfig
    shared_ptr<AiSecurityGuardConfig> aiSecurityGuardConfig_ {};
    // AiStatisticsConfig
    shared_ptr<AiStatisticsConfig> aiStatisticsConfig_ {};
    // AiTokenRateLimitConfig
    shared_ptr<AiTokenRateLimitConfig> aiTokenRateLimitConfig_ {};
    // AiToolSelectionConfig
    shared_ptr<AiToolSelectionConfig> aiToolSelectionConfig_ {};
    // Policy Enable
    shared_ptr<bool> enable_ {};
    // SemanticRouterConfig
    shared_ptr<HttpApiPolicyConfigs::SemanticRouterConfig> semanticRouterConfig_ {};
    // Policy Type
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
