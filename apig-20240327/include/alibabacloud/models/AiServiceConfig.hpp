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
      DARABONBA_PTR_TO_JSON(apiKeyFailover, apiKeyFailover_);
      DARABONBA_PTR_TO_JSON(apiKeyReferences, apiKeyReferences_);
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(authHeaderKey, authHeaderKey_);
      DARABONBA_PTR_TO_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_TO_JSON(claudeCodeMode, claudeCodeMode_);
      DARABONBA_PTR_TO_JSON(compatibleProtocols, compatibleProtocols_);
      DARABONBA_PTR_TO_JSON(configRevision, configRevision_);
      DARABONBA_PTR_TO_JSON(defaultModelName, defaultModelName_);
      DARABONBA_PTR_TO_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_TO_JSON(enableOutlierDetection, enableOutlierDetection_);
      DARABONBA_PTR_TO_JSON(klingServiceConfig, klingServiceConfig_);
      DARABONBA_PTR_TO_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(retryOnFailure, retryOnFailure_);
      DARABONBA_PTR_TO_JSON(upstreamAuthMode, upstreamAuthMode_);
      DARABONBA_PTR_TO_JSON(vertexServiceConfig, vertexServiceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyGenerateMode, apiKeyGenerateMode_);
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(apiKeyFailover, apiKeyFailover_);
      DARABONBA_PTR_FROM_JSON(apiKeyReferences, apiKeyReferences_);
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(authHeaderKey, authHeaderKey_);
      DARABONBA_PTR_FROM_JSON(bedrockServiceConfig, bedrockServiceConfig_);
      DARABONBA_PTR_FROM_JSON(claudeCodeMode, claudeCodeMode_);
      DARABONBA_PTR_FROM_JSON(compatibleProtocols, compatibleProtocols_);
      DARABONBA_PTR_FROM_JSON(configRevision, configRevision_);
      DARABONBA_PTR_FROM_JSON(defaultModelName, defaultModelName_);
      DARABONBA_PTR_FROM_JSON(enableHealthCheck, enableHealthCheck_);
      DARABONBA_PTR_FROM_JSON(enableOutlierDetection, enableOutlierDetection_);
      DARABONBA_PTR_FROM_JSON(klingServiceConfig, klingServiceConfig_);
      DARABONBA_PTR_FROM_JSON(paiEASServiceConfig, paiEASServiceConfig_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(retryOnFailure, retryOnFailure_);
      DARABONBA_PTR_FROM_JSON(upstreamAuthMode, upstreamAuthMode_);
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
        DARABONBA_PTR_TO_JSON(vertexOpenAICompatible, vertexOpenAICompatible_);
        DARABONBA_PTR_TO_JSON(vertexProjectId, vertexProjectId_);
        DARABONBA_PTR_TO_JSON(vertexRegion, vertexRegion_);
        DARABONBA_PTR_TO_JSON(vertexTokenRefreshAhead, vertexTokenRefreshAhead_);
      };
      friend void from_json(const Darabonba::Json& j, VertexServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(geminiSafetySetting, geminiSafetySetting_);
        DARABONBA_PTR_FROM_JSON(vertexAuthKey, vertexAuthKey_);
        DARABONBA_PTR_FROM_JSON(vertexAuthServiceName, vertexAuthServiceName_);
        DARABONBA_PTR_FROM_JSON(vertexOpenAICompatible, vertexOpenAICompatible_);
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
        && this->vertexAuthKey_ == nullptr && this->vertexAuthServiceName_ == nullptr && this->vertexOpenAICompatible_ == nullptr && this->vertexProjectId_ == nullptr && this->vertexRegion_ == nullptr
        && this->vertexTokenRefreshAhead_ == nullptr; };
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


      // vertexOpenAICompatible Field Functions 
      bool hasVertexOpenAICompatible() const { return this->vertexOpenAICompatible_ != nullptr;};
      void deleteVertexOpenAICompatible() { this->vertexOpenAICompatible_ = nullptr;};
      inline bool getVertexOpenAICompatible() const { DARABONBA_PTR_GET_DEFAULT(vertexOpenAICompatible_, false) };
      inline VertexServiceConfig& setVertexOpenAICompatible(bool vertexOpenAICompatible) { DARABONBA_PTR_SET_VALUE(vertexOpenAICompatible_, vertexOpenAICompatible) };


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
      // The safety filtering level settings for the Gemini model.
      shared_ptr<map<string, string>> geminiSafetySetting_ {};
      // The authentication key for Vertex AI.
      shared_ptr<string> vertexAuthKey_ {};
      // The authentication service name used by Vertex AI.
      shared_ptr<string> vertexAuthServiceName_ {};
      // Specifies whether to use the OpenAI-compatible interface of Vertex AI.
      shared_ptr<bool> vertexOpenAICompatible_ {};
      // The Google Cloud project ID.
      shared_ptr<string> vertexProjectId_ {};
      // The Google Cloud region where the Vertex AI service is located.
      shared_ptr<string> vertexRegion_ {};
      // The number of seconds before access token expiration to trigger an advance refresh.
      shared_ptr<int32_t> vertexTokenRefreshAhead_ {};
    };

    class RetryOnFailure : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetryOnFailure& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(maxRetries, maxRetries_);
        DARABONBA_PTR_TO_JSON(retryOnStatus, retryOnStatus_);
        DARABONBA_PTR_TO_JSON(retryTimeout, retryTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, RetryOnFailure& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(maxRetries, maxRetries_);
        DARABONBA_PTR_FROM_JSON(retryOnStatus, retryOnStatus_);
        DARABONBA_PTR_FROM_JSON(retryTimeout, retryTimeout_);
      };
      RetryOnFailure() = default ;
      RetryOnFailure(const RetryOnFailure &) = default ;
      RetryOnFailure(RetryOnFailure &&) = default ;
      RetryOnFailure(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetryOnFailure() = default ;
      RetryOnFailure& operator=(const RetryOnFailure &) = default ;
      RetryOnFailure& operator=(RetryOnFailure &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->maxRetries_ == nullptr && this->retryOnStatus_ == nullptr && this->retryTimeout_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline RetryOnFailure& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // maxRetries Field Functions 
      bool hasMaxRetries() const { return this->maxRetries_ != nullptr;};
      void deleteMaxRetries() { this->maxRetries_ = nullptr;};
      inline int64_t getMaxRetries() const { DARABONBA_PTR_GET_DEFAULT(maxRetries_, 0L) };
      inline RetryOnFailure& setMaxRetries(int64_t maxRetries) { DARABONBA_PTR_SET_VALUE(maxRetries_, maxRetries) };


      // retryOnStatus Field Functions 
      bool hasRetryOnStatus() const { return this->retryOnStatus_ != nullptr;};
      void deleteRetryOnStatus() { this->retryOnStatus_ = nullptr;};
      inline const vector<string> & getRetryOnStatus() const { DARABONBA_PTR_GET_CONST(retryOnStatus_, vector<string>) };
      inline vector<string> getRetryOnStatus() { DARABONBA_PTR_GET(retryOnStatus_, vector<string>) };
      inline RetryOnFailure& setRetryOnStatus(const vector<string> & retryOnStatus) { DARABONBA_PTR_SET_VALUE(retryOnStatus_, retryOnStatus) };
      inline RetryOnFailure& setRetryOnStatus(vector<string> && retryOnStatus) { DARABONBA_PTR_SET_RVALUE(retryOnStatus_, retryOnStatus) };


      // retryTimeout Field Functions 
      bool hasRetryTimeout() const { return this->retryTimeout_ != nullptr;};
      void deleteRetryTimeout() { this->retryTimeout_ = nullptr;};
      inline int64_t getRetryTimeout() const { DARABONBA_PTR_GET_DEFAULT(retryTimeout_, 0L) };
      inline RetryOnFailure& setRetryTimeout(int64_t retryTimeout) { DARABONBA_PTR_SET_VALUE(retryTimeout_, retryTimeout) };


    protected:
      // Specifies whether to enable retries upon current request failure.
      shared_ptr<bool> enabled_ {};
      // The maximum number of retries for the current request.
      shared_ptr<int64_t> maxRetries_ {};
      // The set of response status matching rules that trigger retries for the current request.
      shared_ptr<vector<string>> retryOnStatus_ {};
      // The retry timeout configuration for the current request.
      shared_ptr<int64_t> retryTimeout_ {};
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
      // The connection type, which can be a private network (VPC) or a public network.
      shared_ptr<string> endpointType_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service name.
      shared_ptr<string> serviceName_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    class KlingServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KlingServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(klingAccessKey, klingAccessKey_);
        DARABONBA_PTR_TO_JSON(klingSecretKey, klingSecretKey_);
        DARABONBA_PTR_TO_JSON(klingTokenRefreshAhead, klingTokenRefreshAhead_);
      };
      friend void from_json(const Darabonba::Json& j, KlingServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(klingAccessKey, klingAccessKey_);
        DARABONBA_PTR_FROM_JSON(klingSecretKey, klingSecretKey_);
        DARABONBA_PTR_FROM_JSON(klingTokenRefreshAhead, klingTokenRefreshAhead_);
      };
      KlingServiceConfig() = default ;
      KlingServiceConfig(const KlingServiceConfig &) = default ;
      KlingServiceConfig(KlingServiceConfig &&) = default ;
      KlingServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KlingServiceConfig() = default ;
      KlingServiceConfig& operator=(const KlingServiceConfig &) = default ;
      KlingServiceConfig& operator=(KlingServiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->klingAccessKey_ == nullptr
        && this->klingSecretKey_ == nullptr && this->klingTokenRefreshAhead_ == nullptr; };
      // klingAccessKey Field Functions 
      bool hasKlingAccessKey() const { return this->klingAccessKey_ != nullptr;};
      void deleteKlingAccessKey() { this->klingAccessKey_ = nullptr;};
      inline string getKlingAccessKey() const { DARABONBA_PTR_GET_DEFAULT(klingAccessKey_, "") };
      inline KlingServiceConfig& setKlingAccessKey(string klingAccessKey) { DARABONBA_PTR_SET_VALUE(klingAccessKey_, klingAccessKey) };


      // klingSecretKey Field Functions 
      bool hasKlingSecretKey() const { return this->klingSecretKey_ != nullptr;};
      void deleteKlingSecretKey() { this->klingSecretKey_ = nullptr;};
      inline string getKlingSecretKey() const { DARABONBA_PTR_GET_DEFAULT(klingSecretKey_, "") };
      inline KlingServiceConfig& setKlingSecretKey(string klingSecretKey) { DARABONBA_PTR_SET_VALUE(klingSecretKey_, klingSecretKey) };


      // klingTokenRefreshAhead Field Functions 
      bool hasKlingTokenRefreshAhead() const { return this->klingTokenRefreshAhead_ != nullptr;};
      void deleteKlingTokenRefreshAhead() { this->klingTokenRefreshAhead_ = nullptr;};
      inline int64_t getKlingTokenRefreshAhead() const { DARABONBA_PTR_GET_DEFAULT(klingTokenRefreshAhead_, 0L) };
      inline KlingServiceConfig& setKlingTokenRefreshAhead(int64_t klingTokenRefreshAhead) { DARABONBA_PTR_SET_VALUE(klingTokenRefreshAhead_, klingTokenRefreshAhead) };


    protected:
      // The KlingAI access key identifier. Examples use desensitized values.
      shared_ptr<string> klingAccessKey_ {};
      // The KlingAI secret key. Examples use desensitized values.
      shared_ptr<string> klingSecretKey_ {};
      // The advance refresh configuration for KlingAI tokens.
      shared_ptr<int64_t> klingTokenRefreshAhead_ {};
    };

    class BedrockServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BedrockServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(awsAccessKey, awsAccessKey_);
        DARABONBA_PTR_TO_JSON(awsRegion, awsRegion_);
        DARABONBA_PTR_TO_JSON(awsSecretKey, awsSecretKey_);
        DARABONBA_PTR_TO_JSON(bedrockPromptCachePointPositions, bedrockPromptCachePointPositions_);
        DARABONBA_PTR_TO_JSON(endpointMode, endpointMode_);
        DARABONBA_PTR_TO_JSON(promptCacheEnable, promptCacheEnable_);
        DARABONBA_PTR_TO_JSON(promptCacheRetention, promptCacheRetention_);
        DARABONBA_PTR_TO_JSON(promptCacheStrategy, promptCacheStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, BedrockServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(awsAccessKey, awsAccessKey_);
        DARABONBA_PTR_FROM_JSON(awsRegion, awsRegion_);
        DARABONBA_PTR_FROM_JSON(awsSecretKey, awsSecretKey_);
        DARABONBA_PTR_FROM_JSON(bedrockPromptCachePointPositions, bedrockPromptCachePointPositions_);
        DARABONBA_PTR_FROM_JSON(endpointMode, endpointMode_);
        DARABONBA_PTR_FROM_JSON(promptCacheEnable, promptCacheEnable_);
        DARABONBA_PTR_FROM_JSON(promptCacheRetention, promptCacheRetention_);
        DARABONBA_PTR_FROM_JSON(promptCacheStrategy, promptCacheStrategy_);
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
        && this->awsRegion_ == nullptr && this->awsSecretKey_ == nullptr && this->bedrockPromptCachePointPositions_ == nullptr && this->endpointMode_ == nullptr && this->promptCacheEnable_ == nullptr
        && this->promptCacheRetention_ == nullptr && this->promptCacheStrategy_ == nullptr; };
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


      // bedrockPromptCachePointPositions Field Functions 
      bool hasBedrockPromptCachePointPositions() const { return this->bedrockPromptCachePointPositions_ != nullptr;};
      void deleteBedrockPromptCachePointPositions() { this->bedrockPromptCachePointPositions_ = nullptr;};
      inline const map<string, bool> & getBedrockPromptCachePointPositions() const { DARABONBA_PTR_GET_CONST(bedrockPromptCachePointPositions_, map<string, bool>) };
      inline map<string, bool> getBedrockPromptCachePointPositions() { DARABONBA_PTR_GET(bedrockPromptCachePointPositions_, map<string, bool>) };
      inline BedrockServiceConfig& setBedrockPromptCachePointPositions(const map<string, bool> & bedrockPromptCachePointPositions) { DARABONBA_PTR_SET_VALUE(bedrockPromptCachePointPositions_, bedrockPromptCachePointPositions) };
      inline BedrockServiceConfig& setBedrockPromptCachePointPositions(map<string, bool> && bedrockPromptCachePointPositions) { DARABONBA_PTR_SET_RVALUE(bedrockPromptCachePointPositions_, bedrockPromptCachePointPositions) };


      // endpointMode Field Functions 
      bool hasEndpointMode() const { return this->endpointMode_ != nullptr;};
      void deleteEndpointMode() { this->endpointMode_ = nullptr;};
      inline string getEndpointMode() const { DARABONBA_PTR_GET_DEFAULT(endpointMode_, "") };
      inline BedrockServiceConfig& setEndpointMode(string endpointMode) { DARABONBA_PTR_SET_VALUE(endpointMode_, endpointMode) };


      // promptCacheEnable Field Functions 
      bool hasPromptCacheEnable() const { return this->promptCacheEnable_ != nullptr;};
      void deletePromptCacheEnable() { this->promptCacheEnable_ = nullptr;};
      inline bool getPromptCacheEnable() const { DARABONBA_PTR_GET_DEFAULT(promptCacheEnable_, false) };
      inline BedrockServiceConfig& setPromptCacheEnable(bool promptCacheEnable) { DARABONBA_PTR_SET_VALUE(promptCacheEnable_, promptCacheEnable) };


      // promptCacheRetention Field Functions 
      bool hasPromptCacheRetention() const { return this->promptCacheRetention_ != nullptr;};
      void deletePromptCacheRetention() { this->promptCacheRetention_ = nullptr;};
      inline string getPromptCacheRetention() const { DARABONBA_PTR_GET_DEFAULT(promptCacheRetention_, "") };
      inline BedrockServiceConfig& setPromptCacheRetention(string promptCacheRetention) { DARABONBA_PTR_SET_VALUE(promptCacheRetention_, promptCacheRetention) };


      // promptCacheStrategy Field Functions 
      bool hasPromptCacheStrategy() const { return this->promptCacheStrategy_ != nullptr;};
      void deletePromptCacheStrategy() { this->promptCacheStrategy_ = nullptr;};
      inline string getPromptCacheStrategy() const { DARABONBA_PTR_GET_DEFAULT(promptCacheStrategy_, "") };
      inline BedrockServiceConfig& setPromptCacheStrategy(string promptCacheStrategy) { DARABONBA_PTR_SET_VALUE(promptCacheStrategy_, promptCacheStrategy) };


    protected:
      // The AWS access key.
      shared_ptr<string> awsAccessKey_ {};
      // The AWS region.
      shared_ptr<string> awsRegion_ {};
      // The AWS secret key.
      shared_ptr<string> awsSecretKey_ {};
      // Configures whether to insert Bedrock cache markers based on prompt positions.
      shared_ptr<map<string, bool>> bedrockPromptCachePointPositions_ {};
      // The Bedrock service endpoint mode, which supports runtime and mantle. If omitted, runtime is used.
      shared_ptr<string> endpointMode_ {};
      // Specifies whether to enable prompt caching for the Bedrock upstream.
      shared_ptr<bool> promptCacheEnable_ {};
      // The data retention policy for the prompt cache.
      shared_ptr<string> promptCacheRetention_ {};
      // The applicable model strategy for Bedrock prompt caching.
      shared_ptr<string> promptCacheStrategy_ {};
    };

    class ApiKeyFailover : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeyFailover& obj) { 
        DARABONBA_PTR_TO_JSON(cooldownDuration, cooldownDuration_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(failoverOnStatus, failoverOnStatus_);
        DARABONBA_PTR_TO_JSON(failureThreshold, failureThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeyFailover& obj) { 
        DARABONBA_PTR_FROM_JSON(cooldownDuration, cooldownDuration_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(failoverOnStatus, failoverOnStatus_);
        DARABONBA_PTR_FROM_JSON(failureThreshold, failureThreshold_);
      };
      ApiKeyFailover() = default ;
      ApiKeyFailover(const ApiKeyFailover &) = default ;
      ApiKeyFailover(ApiKeyFailover &&) = default ;
      ApiKeyFailover(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKeyFailover() = default ;
      ApiKeyFailover& operator=(const ApiKeyFailover &) = default ;
      ApiKeyFailover& operator=(ApiKeyFailover &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cooldownDuration_ == nullptr
        && this->enabled_ == nullptr && this->failoverOnStatus_ == nullptr && this->failureThreshold_ == nullptr; };
      // cooldownDuration Field Functions 
      bool hasCooldownDuration() const { return this->cooldownDuration_ != nullptr;};
      void deleteCooldownDuration() { this->cooldownDuration_ = nullptr;};
      inline int64_t getCooldownDuration() const { DARABONBA_PTR_GET_DEFAULT(cooldownDuration_, 0L) };
      inline ApiKeyFailover& setCooldownDuration(int64_t cooldownDuration) { DARABONBA_PTR_SET_VALUE(cooldownDuration_, cooldownDuration) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ApiKeyFailover& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // failoverOnStatus Field Functions 
      bool hasFailoverOnStatus() const { return this->failoverOnStatus_ != nullptr;};
      void deleteFailoverOnStatus() { this->failoverOnStatus_ = nullptr;};
      inline const vector<string> & getFailoverOnStatus() const { DARABONBA_PTR_GET_CONST(failoverOnStatus_, vector<string>) };
      inline vector<string> getFailoverOnStatus() { DARABONBA_PTR_GET(failoverOnStatus_, vector<string>) };
      inline ApiKeyFailover& setFailoverOnStatus(const vector<string> & failoverOnStatus) { DARABONBA_PTR_SET_VALUE(failoverOnStatus_, failoverOnStatus) };
      inline ApiKeyFailover& setFailoverOnStatus(vector<string> && failoverOnStatus) { DARABONBA_PTR_SET_RVALUE(failoverOnStatus_, failoverOnStatus) };


      // failureThreshold Field Functions 
      bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
      void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
      inline int64_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0L) };
      inline ApiKeyFailover& setFailureThreshold(int64_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    protected:
      // The cooldown duration after an API key is ejected.
      shared_ptr<int64_t> cooldownDuration_ {};
      // Specifies whether to enable API key failure ejection.
      shared_ptr<bool> enabled_ {};
      // The set of response status matching rules that trigger API key failure ejection.
      shared_ptr<vector<string>> failoverOnStatus_ {};
      // The failure count threshold that triggers API key ejection.
      shared_ptr<int64_t> failureThreshold_ {};
    };

    virtual bool empty() const override { return this->apiKeyGenerateMode_ == nullptr
        && this->address_ == nullptr && this->apiKeyFailover_ == nullptr && this->apiKeyReferences_ == nullptr && this->apiKeys_ == nullptr && this->authHeaderKey_ == nullptr
        && this->bedrockServiceConfig_ == nullptr && this->claudeCodeMode_ == nullptr && this->compatibleProtocols_ == nullptr && this->configRevision_ == nullptr && this->defaultModelName_ == nullptr
        && this->enableHealthCheck_ == nullptr && this->enableOutlierDetection_ == nullptr && this->klingServiceConfig_ == nullptr && this->paiEASServiceConfig_ == nullptr && this->protocols_ == nullptr
        && this->provider_ == nullptr && this->retryOnFailure_ == nullptr && this->upstreamAuthMode_ == nullptr && this->vertexServiceConfig_ == nullptr; };
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


    // apiKeyFailover Field Functions 
    bool hasApiKeyFailover() const { return this->apiKeyFailover_ != nullptr;};
    void deleteApiKeyFailover() { this->apiKeyFailover_ = nullptr;};
    inline const AiServiceConfig::ApiKeyFailover & getApiKeyFailover() const { DARABONBA_PTR_GET_CONST(apiKeyFailover_, AiServiceConfig::ApiKeyFailover) };
    inline AiServiceConfig::ApiKeyFailover getApiKeyFailover() { DARABONBA_PTR_GET(apiKeyFailover_, AiServiceConfig::ApiKeyFailover) };
    inline AiServiceConfig& setApiKeyFailover(const AiServiceConfig::ApiKeyFailover & apiKeyFailover) { DARABONBA_PTR_SET_VALUE(apiKeyFailover_, apiKeyFailover) };
    inline AiServiceConfig& setApiKeyFailover(AiServiceConfig::ApiKeyFailover && apiKeyFailover) { DARABONBA_PTR_SET_RVALUE(apiKeyFailover_, apiKeyFailover) };


    // apiKeyReferences Field Functions 
    bool hasApiKeyReferences() const { return this->apiKeyReferences_ != nullptr;};
    void deleteApiKeyReferences() { this->apiKeyReferences_ = nullptr;};
    inline const vector<string> & getApiKeyReferences() const { DARABONBA_PTR_GET_CONST(apiKeyReferences_, vector<string>) };
    inline vector<string> getApiKeyReferences() { DARABONBA_PTR_GET(apiKeyReferences_, vector<string>) };
    inline AiServiceConfig& setApiKeyReferences(const vector<string> & apiKeyReferences) { DARABONBA_PTR_SET_VALUE(apiKeyReferences_, apiKeyReferences) };
    inline AiServiceConfig& setApiKeyReferences(vector<string> && apiKeyReferences) { DARABONBA_PTR_SET_RVALUE(apiKeyReferences_, apiKeyReferences) };


    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<string> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<string>) };
    inline vector<string> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<string>) };
    inline AiServiceConfig& setApiKeys(const vector<string> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline AiServiceConfig& setApiKeys(vector<string> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // authHeaderKey Field Functions 
    bool hasAuthHeaderKey() const { return this->authHeaderKey_ != nullptr;};
    void deleteAuthHeaderKey() { this->authHeaderKey_ = nullptr;};
    inline string getAuthHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(authHeaderKey_, "") };
    inline AiServiceConfig& setAuthHeaderKey(string authHeaderKey) { DARABONBA_PTR_SET_VALUE(authHeaderKey_, authHeaderKey) };


    // bedrockServiceConfig Field Functions 
    bool hasBedrockServiceConfig() const { return this->bedrockServiceConfig_ != nullptr;};
    void deleteBedrockServiceConfig() { this->bedrockServiceConfig_ = nullptr;};
    inline const AiServiceConfig::BedrockServiceConfig & getBedrockServiceConfig() const { DARABONBA_PTR_GET_CONST(bedrockServiceConfig_, AiServiceConfig::BedrockServiceConfig) };
    inline AiServiceConfig::BedrockServiceConfig getBedrockServiceConfig() { DARABONBA_PTR_GET(bedrockServiceConfig_, AiServiceConfig::BedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(const AiServiceConfig::BedrockServiceConfig & bedrockServiceConfig) { DARABONBA_PTR_SET_VALUE(bedrockServiceConfig_, bedrockServiceConfig) };
    inline AiServiceConfig& setBedrockServiceConfig(AiServiceConfig::BedrockServiceConfig && bedrockServiceConfig) { DARABONBA_PTR_SET_RVALUE(bedrockServiceConfig_, bedrockServiceConfig) };


    // claudeCodeMode Field Functions 
    bool hasClaudeCodeMode() const { return this->claudeCodeMode_ != nullptr;};
    void deleteClaudeCodeMode() { this->claudeCodeMode_ = nullptr;};
    inline bool getClaudeCodeMode() const { DARABONBA_PTR_GET_DEFAULT(claudeCodeMode_, false) };
    inline AiServiceConfig& setClaudeCodeMode(bool claudeCodeMode) { DARABONBA_PTR_SET_VALUE(claudeCodeMode_, claudeCodeMode) };


    // compatibleProtocols Field Functions 
    bool hasCompatibleProtocols() const { return this->compatibleProtocols_ != nullptr;};
    void deleteCompatibleProtocols() { this->compatibleProtocols_ = nullptr;};
    inline const vector<string> & getCompatibleProtocols() const { DARABONBA_PTR_GET_CONST(compatibleProtocols_, vector<string>) };
    inline vector<string> getCompatibleProtocols() { DARABONBA_PTR_GET(compatibleProtocols_, vector<string>) };
    inline AiServiceConfig& setCompatibleProtocols(const vector<string> & compatibleProtocols) { DARABONBA_PTR_SET_VALUE(compatibleProtocols_, compatibleProtocols) };
    inline AiServiceConfig& setCompatibleProtocols(vector<string> && compatibleProtocols) { DARABONBA_PTR_SET_RVALUE(compatibleProtocols_, compatibleProtocols) };


    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
    inline AiServiceConfig& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


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


    // klingServiceConfig Field Functions 
    bool hasKlingServiceConfig() const { return this->klingServiceConfig_ != nullptr;};
    void deleteKlingServiceConfig() { this->klingServiceConfig_ = nullptr;};
    inline const AiServiceConfig::KlingServiceConfig & getKlingServiceConfig() const { DARABONBA_PTR_GET_CONST(klingServiceConfig_, AiServiceConfig::KlingServiceConfig) };
    inline AiServiceConfig::KlingServiceConfig getKlingServiceConfig() { DARABONBA_PTR_GET(klingServiceConfig_, AiServiceConfig::KlingServiceConfig) };
    inline AiServiceConfig& setKlingServiceConfig(const AiServiceConfig::KlingServiceConfig & klingServiceConfig) { DARABONBA_PTR_SET_VALUE(klingServiceConfig_, klingServiceConfig) };
    inline AiServiceConfig& setKlingServiceConfig(AiServiceConfig::KlingServiceConfig && klingServiceConfig) { DARABONBA_PTR_SET_RVALUE(klingServiceConfig_, klingServiceConfig) };


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


    // retryOnFailure Field Functions 
    bool hasRetryOnFailure() const { return this->retryOnFailure_ != nullptr;};
    void deleteRetryOnFailure() { this->retryOnFailure_ = nullptr;};
    inline const AiServiceConfig::RetryOnFailure & getRetryOnFailure() const { DARABONBA_PTR_GET_CONST(retryOnFailure_, AiServiceConfig::RetryOnFailure) };
    inline AiServiceConfig::RetryOnFailure getRetryOnFailure() { DARABONBA_PTR_GET(retryOnFailure_, AiServiceConfig::RetryOnFailure) };
    inline AiServiceConfig& setRetryOnFailure(const AiServiceConfig::RetryOnFailure & retryOnFailure) { DARABONBA_PTR_SET_VALUE(retryOnFailure_, retryOnFailure) };
    inline AiServiceConfig& setRetryOnFailure(AiServiceConfig::RetryOnFailure && retryOnFailure) { DARABONBA_PTR_SET_RVALUE(retryOnFailure_, retryOnFailure) };


    // upstreamAuthMode Field Functions 
    bool hasUpstreamAuthMode() const { return this->upstreamAuthMode_ != nullptr;};
    void deleteUpstreamAuthMode() { this->upstreamAuthMode_ = nullptr;};
    inline string getUpstreamAuthMode() const { DARABONBA_PTR_GET_DEFAULT(upstreamAuthMode_, "") };
    inline AiServiceConfig& setUpstreamAuthMode(string upstreamAuthMode) { DARABONBA_PTR_SET_VALUE(upstreamAuthMode_, upstreamAuthMode) };


    // vertexServiceConfig Field Functions 
    bool hasVertexServiceConfig() const { return this->vertexServiceConfig_ != nullptr;};
    void deleteVertexServiceConfig() { this->vertexServiceConfig_ = nullptr;};
    inline const AiServiceConfig::VertexServiceConfig & getVertexServiceConfig() const { DARABONBA_PTR_GET_CONST(vertexServiceConfig_, AiServiceConfig::VertexServiceConfig) };
    inline AiServiceConfig::VertexServiceConfig getVertexServiceConfig() { DARABONBA_PTR_GET(vertexServiceConfig_, AiServiceConfig::VertexServiceConfig) };
    inline AiServiceConfig& setVertexServiceConfig(const AiServiceConfig::VertexServiceConfig & vertexServiceConfig) { DARABONBA_PTR_SET_VALUE(vertexServiceConfig_, vertexServiceConfig) };
    inline AiServiceConfig& setVertexServiceConfig(AiServiceConfig::VertexServiceConfig && vertexServiceConfig) { DARABONBA_PTR_SET_RVALUE(vertexServiceConfig_, vertexServiceConfig) };


  protected:
    // The generation mode of the API key.
    shared_ptr<string> apiKeyGenerateMode_ {};
    // The service address.
    shared_ptr<string> address_ {};
    // The configuration for API key failure ejection and recovery.
    shared_ptr<AiServiceConfig::ApiKeyFailover> apiKeyFailover_ {};
    // The read-only summary of KMS reference names, excluding credential values.
    shared_ptr<vector<string>> apiKeyReferences_ {};
    // The list of API keys.
    shared_ptr<vector<string>> apiKeys_ {};
    // The name of the request header used to pass authentication credentials to the upstream.
    shared_ptr<string> authHeaderKey_ {};
    // The Bedrock service-specific configuration.
    shared_ptr<AiServiceConfig::BedrockServiceConfig> bedrockServiceConfig_ {};
    // Specifies whether to enable Claude Code compatibility mode.
    shared_ptr<bool> claudeCodeMode_ {};
    // The list of compatible protocols supported by the service.
    shared_ptr<vector<string>> compatibleProtocols_ {};
    // The read-only service configuration version. Use expectedConfigRevision for conditional updates.
    shared_ptr<string> configRevision_ {};
    // The name of the default model.
    shared_ptr<string> defaultModelName_ {};
    // Specifies whether to enable health checks.
    shared_ptr<bool> enableHealthCheck_ {};
    // Specifies whether to enable the outlier detection feature.
    shared_ptr<bool> enableOutlierDetection_ {};
    // The authentication and token configuration specific to the KlingAI service.
    shared_ptr<AiServiceConfig::KlingServiceConfig> klingServiceConfig_ {};
    // The PAI-EAS service-specific configuration.
    shared_ptr<AiServiceConfig::PaiEASServiceConfig> paiEASServiceConfig_ {};
    // The list of model protocols.
    shared_ptr<vector<string>> protocols_ {};
    // The large language model provider.
    shared_ptr<string> provider_ {};
    // The configuration for retrying with a different key after the current request fails.
    shared_ptr<AiServiceConfig::RetryOnFailure> retryOnFailure_ {};
    // The upstream authentication mode, which distinguishes between API key authentication, no authentication, and pass-through downstream authentication.
    shared_ptr<string> upstreamAuthMode_ {};
    // The configuration information for the Vertex AI service.
    shared_ptr<AiServiceConfig::VertexServiceConfig> vertexServiceConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
