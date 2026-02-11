// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <vector>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/HttpApiMockContract.hpp>
#include <alibabacloud/models/Backend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiDeployConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiDeployConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_TO_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(mock, mock_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_TO_JSON(routeBackend, routeBackend_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_FROM_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(mock, mock_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_FROM_JSON(routeBackend, routeBackend_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
    };
    HttpApiDeployConfig() = default ;
    HttpApiDeployConfig(const HttpApiDeployConfig &) = default ;
    HttpApiDeployConfig(HttpApiDeployConfig &&) = default ;
    HttpApiDeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiDeployConfig() = default ;
    HttpApiDeployConfig& operator=(const HttpApiDeployConfig &) = default ;
    HttpApiDeployConfig& operator=(HttpApiDeployConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubDomains& obj) { 
        DARABONBA_PTR_TO_JSON(domainId, domainId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkType, networkType_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, SubDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(domainId, domainId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      SubDomains() = default ;
      SubDomains(const SubDomains &) = default ;
      SubDomains(SubDomains &&) = default ;
      SubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubDomains() = default ;
      SubDomains& operator=(const SubDomains &) = default ;
      SubDomains& operator=(SubDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->networkType_ == nullptr && this->protocol_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline SubDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SubDomains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline SubDomains& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline SubDomains& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The domain name ID.
      shared_ptr<string> domainId_ {};
      // The domain name.
      shared_ptr<string> name_ {};
      // The network type.
      shared_ptr<string> networkType_ {};
      // The protocol.
      shared_ptr<string> protocol_ {};
    };

    class ServiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
        DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelNamePattern, modelNamePattern_);
        DARABONBA_PTR_TO_JSON(multiServiceRouteStrategy, multiServiceRouteStrategy_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(observabilityRouteConfig, observabilityRouteConfig_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
        DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelNamePattern, modelNamePattern_);
        DARABONBA_PTR_FROM_JSON(multiServiceRouteStrategy, multiServiceRouteStrategy_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(observabilityRouteConfig, observabilityRouteConfig_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
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
      class ObservabilityRouteConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObservabilityRouteConfig& obj) { 
          DARABONBA_PTR_TO_JSON(mode, mode_);
          DARABONBA_PTR_TO_JSON(queueSize, queueSize_);
          DARABONBA_PTR_TO_JSON(rateLimit, rateLimit_);
        };
        friend void from_json(const Darabonba::Json& j, ObservabilityRouteConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(mode, mode_);
          DARABONBA_PTR_FROM_JSON(queueSize, queueSize_);
          DARABONBA_PTR_FROM_JSON(rateLimit, rateLimit_);
        };
        ObservabilityRouteConfig() = default ;
        ObservabilityRouteConfig(const ObservabilityRouteConfig &) = default ;
        ObservabilityRouteConfig(ObservabilityRouteConfig &&) = default ;
        ObservabilityRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObservabilityRouteConfig() = default ;
        ObservabilityRouteConfig& operator=(const ObservabilityRouteConfig &) = default ;
        ObservabilityRouteConfig& operator=(ObservabilityRouteConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mode_ == nullptr
        && this->queueSize_ == nullptr && this->rateLimit_ == nullptr; };
        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline ObservabilityRouteConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // queueSize Field Functions 
        bool hasQueueSize() const { return this->queueSize_ != nullptr;};
        void deleteQueueSize() { this->queueSize_ = nullptr;};
        inline int32_t getQueueSize() const { DARABONBA_PTR_GET_DEFAULT(queueSize_, 0) };
        inline ObservabilityRouteConfig& setQueueSize(int32_t queueSize) { DARABONBA_PTR_SET_VALUE(queueSize_, queueSize) };


        // rateLimit Field Functions 
        bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
        void deleteRateLimit() { this->rateLimit_ = nullptr;};
        inline float getRateLimit() const { DARABONBA_PTR_GET_DEFAULT(rateLimit_, 0.0) };
        inline ObservabilityRouteConfig& setRateLimit(float rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };


      protected:
        // Routing mode
        shared_ptr<string> mode_ {};
        // Queue size
        shared_ptr<int32_t> queueSize_ {};
        // Max traffic ratio per single service
        shared_ptr<float> rateLimit_ {};
      };

      virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->intentCode_ == nullptr && this->match_ == nullptr && this->modelName_ == nullptr && this->modelNamePattern_ == nullptr && this->multiServiceRouteStrategy_ == nullptr
        && this->name_ == nullptr && this->observabilityRouteConfig_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->serviceId_ == nullptr
        && this->version_ == nullptr && this->weight_ == nullptr; };
      // gatewayServiceId Field Functions 
      bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
      void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
      inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
      inline ServiceConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


      // intentCode Field Functions 
      bool hasIntentCode() const { return this->intentCode_ != nullptr;};
      void deleteIntentCode() { this->intentCode_ = nullptr;};
      inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
      inline ServiceConfigs& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
      inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
      inline ServiceConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline ServiceConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline ServiceConfigs& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelNamePattern Field Functions 
      bool hasModelNamePattern() const { return this->modelNamePattern_ != nullptr;};
      void deleteModelNamePattern() { this->modelNamePattern_ = nullptr;};
      inline string getModelNamePattern() const { DARABONBA_PTR_GET_DEFAULT(modelNamePattern_, "") };
      inline ServiceConfigs& setModelNamePattern(string modelNamePattern) { DARABONBA_PTR_SET_VALUE(modelNamePattern_, modelNamePattern) };


      // multiServiceRouteStrategy Field Functions 
      bool hasMultiServiceRouteStrategy() const { return this->multiServiceRouteStrategy_ != nullptr;};
      void deleteMultiServiceRouteStrategy() { this->multiServiceRouteStrategy_ = nullptr;};
      inline string getMultiServiceRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(multiServiceRouteStrategy_, "") };
      inline ServiceConfigs& setMultiServiceRouteStrategy(string multiServiceRouteStrategy) { DARABONBA_PTR_SET_VALUE(multiServiceRouteStrategy_, multiServiceRouteStrategy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // observabilityRouteConfig Field Functions 
      bool hasObservabilityRouteConfig() const { return this->observabilityRouteConfig_ != nullptr;};
      void deleteObservabilityRouteConfig() { this->observabilityRouteConfig_ = nullptr;};
      inline const ServiceConfigs::ObservabilityRouteConfig & getObservabilityRouteConfig() const { DARABONBA_PTR_GET_CONST(observabilityRouteConfig_, ServiceConfigs::ObservabilityRouteConfig) };
      inline ServiceConfigs::ObservabilityRouteConfig getObservabilityRouteConfig() { DARABONBA_PTR_GET(observabilityRouteConfig_, ServiceConfigs::ObservabilityRouteConfig) };
      inline ServiceConfigs& setObservabilityRouteConfig(const ServiceConfigs::ObservabilityRouteConfig & observabilityRouteConfig) { DARABONBA_PTR_SET_VALUE(observabilityRouteConfig_, observabilityRouteConfig) };
      inline ServiceConfigs& setObservabilityRouteConfig(ServiceConfigs::ObservabilityRouteConfig && observabilityRouteConfig) { DARABONBA_PTR_SET_RVALUE(observabilityRouteConfig_, observabilityRouteConfig) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ServiceConfigs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ServiceConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline ServiceConfigs& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // Legacy gateway service ID for backward compatibility
      shared_ptr<string> gatewayServiceId_ {};
      // Intent classification code
      shared_ptr<string> intentCode_ {};
      // Match conditions
      shared_ptr<HttpApiBackendMatchConditions> match_ {};
      // The model name.
      shared_ptr<string> modelName_ {};
      // The model name matching rule.
      shared_ptr<string> modelNamePattern_ {};
      // Multi-service routing strategy type
      shared_ptr<string> multiServiceRouteStrategy_ {};
      // Service display name
      shared_ptr<string> name_ {};
      // Observability metrics-based routing config
      shared_ptr<ServiceConfigs::ObservabilityRouteConfig> observabilityRouteConfig_ {};
      // Service port number
      shared_ptr<int32_t> port_ {};
      // Service protocol
      shared_ptr<string> protocol_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // Service version tag for tag-based routing scenarios
      shared_ptr<string> version_ {};
      // The service weight.
      shared_ptr<int64_t> weight_ {};
    };

    class PolicyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(aiFallbackConfig, aiFallbackConfig_);
        DARABONBA_PTR_TO_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
        DARABONBA_PTR_TO_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(aiFallbackConfig, aiFallbackConfig_);
        DARABONBA_PTR_FROM_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
        DARABONBA_PTR_FROM_JSON(aiTokenRateLimitConfig, aiTokenRateLimitConfig_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      PolicyConfigs() = default ;
      PolicyConfigs(const PolicyConfigs &) = default ;
      PolicyConfigs(PolicyConfigs &&) = default ;
      PolicyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyConfigs() = default ;
      PolicyConfigs& operator=(const PolicyConfigs &) = default ;
      PolicyConfigs& operator=(PolicyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AiTokenRateLimitConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiTokenRateLimitConfig& obj) { 
          DARABONBA_PTR_TO_JSON(enableGlobalRules, enableGlobalRules_);
          DARABONBA_PTR_TO_JSON(globalRules, globalRules_);
          DARABONBA_PTR_TO_JSON(rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, AiTokenRateLimitConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(enableGlobalRules, enableGlobalRules_);
          DARABONBA_PTR_FROM_JSON(globalRules, globalRules_);
          DARABONBA_PTR_FROM_JSON(rules, rules_);
        };
        AiTokenRateLimitConfig() = default ;
        AiTokenRateLimitConfig(const AiTokenRateLimitConfig &) = default ;
        AiTokenRateLimitConfig(AiTokenRateLimitConfig &&) = default ;
        AiTokenRateLimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiTokenRateLimitConfig() = default ;
        AiTokenRateLimitConfig& operator=(const AiTokenRateLimitConfig &) = default ;
        AiTokenRateLimitConfig& operator=(AiTokenRateLimitConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(limitMode, limitMode_);
            DARABONBA_PTR_TO_JSON(limitType, limitType_);
            DARABONBA_PTR_TO_JSON(limitValue, limitValue_);
            DARABONBA_PTR_TO_JSON(matchKey, matchKey_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(limitMode, limitMode_);
            DARABONBA_PTR_FROM_JSON(limitType, limitType_);
            DARABONBA_PTR_FROM_JSON(limitValue, limitValue_);
            DARABONBA_PTR_FROM_JSON(matchKey, matchKey_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->limitMode_ == nullptr
        && this->limitType_ == nullptr && this->limitValue_ == nullptr && this->matchKey_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr; };
          // limitMode Field Functions 
          bool hasLimitMode() const { return this->limitMode_ != nullptr;};
          void deleteLimitMode() { this->limitMode_ = nullptr;};
          inline string getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, "") };
          inline Rules& setLimitMode(string limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline Rules& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


          // limitValue Field Functions 
          bool hasLimitValue() const { return this->limitValue_ != nullptr;};
          void deleteLimitValue() { this->limitValue_ = nullptr;};
          inline int32_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0) };
          inline Rules& setLimitValue(int32_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


          // matchKey Field Functions 
          bool hasMatchKey() const { return this->matchKey_ != nullptr;};
          void deleteMatchKey() { this->matchKey_ = nullptr;};
          inline string getMatchKey() const { DARABONBA_PTR_GET_DEFAULT(matchKey_, "") };
          inline Rules& setMatchKey(string matchKey) { DARABONBA_PTR_SET_VALUE(matchKey_, matchKey) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline Rules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // matchValue Field Functions 
          bool hasMatchValue() const { return this->matchValue_ != nullptr;};
          void deleteMatchValue() { this->matchValue_ = nullptr;};
          inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
          inline Rules& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


        protected:
          // Limit mode
          shared_ptr<string> limitMode_ {};
          // Limit type
          shared_ptr<string> limitType_ {};
          // Limit value
          shared_ptr<int32_t> limitValue_ {};
          // Match key
          shared_ptr<string> matchKey_ {};
          // Match type
          shared_ptr<string> matchType_ {};
          // Match value
          shared_ptr<string> matchValue_ {};
        };

        class GlobalRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GlobalRules& obj) { 
            DARABONBA_PTR_TO_JSON(limitMode, limitMode_);
            DARABONBA_PTR_TO_JSON(limitType, limitType_);
            DARABONBA_PTR_TO_JSON(limitValue, limitValue_);
            DARABONBA_PTR_TO_JSON(matchKey, matchKey_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
          };
          friend void from_json(const Darabonba::Json& j, GlobalRules& obj) { 
            DARABONBA_PTR_FROM_JSON(limitMode, limitMode_);
            DARABONBA_PTR_FROM_JSON(limitType, limitType_);
            DARABONBA_PTR_FROM_JSON(limitValue, limitValue_);
            DARABONBA_PTR_FROM_JSON(matchKey, matchKey_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
          };
          GlobalRules() = default ;
          GlobalRules(const GlobalRules &) = default ;
          GlobalRules(GlobalRules &&) = default ;
          GlobalRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GlobalRules() = default ;
          GlobalRules& operator=(const GlobalRules &) = default ;
          GlobalRules& operator=(GlobalRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->limitMode_ == nullptr
        && this->limitType_ == nullptr && this->limitValue_ == nullptr && this->matchKey_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr; };
          // limitMode Field Functions 
          bool hasLimitMode() const { return this->limitMode_ != nullptr;};
          void deleteLimitMode() { this->limitMode_ = nullptr;};
          inline string getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, "") };
          inline GlobalRules& setLimitMode(string limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


          // limitType Field Functions 
          bool hasLimitType() const { return this->limitType_ != nullptr;};
          void deleteLimitType() { this->limitType_ = nullptr;};
          inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
          inline GlobalRules& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


          // limitValue Field Functions 
          bool hasLimitValue() const { return this->limitValue_ != nullptr;};
          void deleteLimitValue() { this->limitValue_ = nullptr;};
          inline int32_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0) };
          inline GlobalRules& setLimitValue(int32_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


          // matchKey Field Functions 
          bool hasMatchKey() const { return this->matchKey_ != nullptr;};
          void deleteMatchKey() { this->matchKey_ = nullptr;};
          inline string getMatchKey() const { DARABONBA_PTR_GET_DEFAULT(matchKey_, "") };
          inline GlobalRules& setMatchKey(string matchKey) { DARABONBA_PTR_SET_VALUE(matchKey_, matchKey) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline GlobalRules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // matchValue Field Functions 
          bool hasMatchValue() const { return this->matchValue_ != nullptr;};
          void deleteMatchValue() { this->matchValue_ = nullptr;};
          inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
          inline GlobalRules& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


        protected:
          // Limit mode for global rules
          shared_ptr<string> limitMode_ {};
          // Limit type for global rules
          shared_ptr<string> limitType_ {};
          // Limit value for global rules
          shared_ptr<int32_t> limitValue_ {};
          // Match key
          shared_ptr<string> matchKey_ {};
          // Match type
          shared_ptr<string> matchType_ {};
          // Match value
          shared_ptr<string> matchValue_ {};
        };

        virtual bool empty() const override { return this->enableGlobalRules_ == nullptr
        && this->globalRules_ == nullptr && this->rules_ == nullptr; };
        // enableGlobalRules Field Functions 
        bool hasEnableGlobalRules() const { return this->enableGlobalRules_ != nullptr;};
        void deleteEnableGlobalRules() { this->enableGlobalRules_ = nullptr;};
        inline bool getEnableGlobalRules() const { DARABONBA_PTR_GET_DEFAULT(enableGlobalRules_, false) };
        inline AiTokenRateLimitConfig& setEnableGlobalRules(bool enableGlobalRules) { DARABONBA_PTR_SET_VALUE(enableGlobalRules_, enableGlobalRules) };


        // globalRules Field Functions 
        bool hasGlobalRules() const { return this->globalRules_ != nullptr;};
        void deleteGlobalRules() { this->globalRules_ = nullptr;};
        inline const vector<AiTokenRateLimitConfig::GlobalRules> & getGlobalRules() const { DARABONBA_PTR_GET_CONST(globalRules_, vector<AiTokenRateLimitConfig::GlobalRules>) };
        inline vector<AiTokenRateLimitConfig::GlobalRules> getGlobalRules() { DARABONBA_PTR_GET(globalRules_, vector<AiTokenRateLimitConfig::GlobalRules>) };
        inline AiTokenRateLimitConfig& setGlobalRules(const vector<AiTokenRateLimitConfig::GlobalRules> & globalRules) { DARABONBA_PTR_SET_VALUE(globalRules_, globalRules) };
        inline AiTokenRateLimitConfig& setGlobalRules(vector<AiTokenRateLimitConfig::GlobalRules> && globalRules) { DARABONBA_PTR_SET_RVALUE(globalRules_, globalRules) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<AiTokenRateLimitConfig::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<AiTokenRateLimitConfig::Rules>) };
        inline vector<AiTokenRateLimitConfig::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<AiTokenRateLimitConfig::Rules>) };
        inline AiTokenRateLimitConfig& setRules(const vector<AiTokenRateLimitConfig::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline AiTokenRateLimitConfig& setRules(vector<AiTokenRateLimitConfig::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // Whether to enable global rate limit rules
        shared_ptr<bool> enableGlobalRules_ {};
        // List of global rate limit rules
        shared_ptr<vector<AiTokenRateLimitConfig::GlobalRules>> globalRules_ {};
        // List of rate limit rules
        shared_ptr<vector<AiTokenRateLimitConfig::Rules>> rules_ {};
      };

      class AiSecurityGuardConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiSecurityGuardConfig& obj) { 
          DARABONBA_PTR_TO_JSON(bufferLimit, bufferLimit_);
          DARABONBA_PTR_TO_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_TO_JSON(checkRequestImage, checkRequestImage_);
          DARABONBA_PTR_TO_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_TO_JSON(checkResponseImage, checkResponseImage_);
          DARABONBA_PTR_TO_JSON(consumerRequestCheckService, consumerRequestCheckService_);
          DARABONBA_PTR_TO_JSON(consumerResponseCheckService, consumerResponseCheckService_);
          DARABONBA_PTR_TO_JSON(consumerRiskLevel, consumerRiskLevel_);
          DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
          DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
          DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
          DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
          DARABONBA_PTR_TO_JSON(riskAlertLevel, riskAlertLevel_);
          DARABONBA_PTR_TO_JSON(riskConfig, riskConfig_);
          DARABONBA_PTR_TO_JSON(serviceAddress, serviceAddress_);
        };
        friend void from_json(const Darabonba::Json& j, AiSecurityGuardConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(bufferLimit, bufferLimit_);
          DARABONBA_PTR_FROM_JSON(checkRequest, checkRequest_);
          DARABONBA_PTR_FROM_JSON(checkRequestImage, checkRequestImage_);
          DARABONBA_PTR_FROM_JSON(checkResponse, checkResponse_);
          DARABONBA_PTR_FROM_JSON(checkResponseImage, checkResponseImage_);
          DARABONBA_PTR_FROM_JSON(consumerRequestCheckService, consumerRequestCheckService_);
          DARABONBA_PTR_FROM_JSON(consumerResponseCheckService, consumerResponseCheckService_);
          DARABONBA_PTR_FROM_JSON(consumerRiskLevel, consumerRiskLevel_);
          DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
          DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
          DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
          DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
          DARABONBA_PTR_FROM_JSON(riskAlertLevel, riskAlertLevel_);
          DARABONBA_PTR_FROM_JSON(riskConfig, riskConfig_);
          DARABONBA_PTR_FROM_JSON(serviceAddress, serviceAddress_);
        };
        AiSecurityGuardConfig() = default ;
        AiSecurityGuardConfig(const AiSecurityGuardConfig &) = default ;
        AiSecurityGuardConfig(AiSecurityGuardConfig &&) = default ;
        AiSecurityGuardConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiSecurityGuardConfig() = default ;
        AiSecurityGuardConfig& operator=(const AiSecurityGuardConfig &) = default ;
        AiSecurityGuardConfig& operator=(AiSecurityGuardConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskConfig& obj) { 
            DARABONBA_PTR_TO_JSON(consumerRules, consumerRules_);
            DARABONBA_PTR_TO_JSON(level, level_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RiskConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(consumerRules, consumerRules_);
            DARABONBA_PTR_FROM_JSON(level, level_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          RiskConfig() = default ;
          RiskConfig(const RiskConfig &) = default ;
          RiskConfig(RiskConfig &&) = default ;
          RiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskConfig() = default ;
          RiskConfig& operator=(const RiskConfig &) = default ;
          RiskConfig& operator=(RiskConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConsumerRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConsumerRules& obj) { 
              DARABONBA_PTR_TO_JSON(matchType, matchType_);
              DARABONBA_PTR_TO_JSON(pattern, pattern_);
            };
            friend void from_json(const Darabonba::Json& j, ConsumerRules& obj) { 
              DARABONBA_PTR_FROM_JSON(matchType, matchType_);
              DARABONBA_PTR_FROM_JSON(pattern, pattern_);
            };
            ConsumerRules() = default ;
            ConsumerRules(const ConsumerRules &) = default ;
            ConsumerRules(ConsumerRules &&) = default ;
            ConsumerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConsumerRules() = default ;
            ConsumerRules& operator=(const ConsumerRules &) = default ;
            ConsumerRules& operator=(ConsumerRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->matchType_ == nullptr
        && this->pattern_ == nullptr; };
            // matchType Field Functions 
            bool hasMatchType() const { return this->matchType_ != nullptr;};
            void deleteMatchType() { this->matchType_ = nullptr;};
            inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
            inline ConsumerRules& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


            // pattern Field Functions 
            bool hasPattern() const { return this->pattern_ != nullptr;};
            void deletePattern() { this->pattern_ = nullptr;};
            inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
            inline ConsumerRules& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


          protected:
            // Match type
            shared_ptr<string> matchType_ {};
            // Pattern for matching
            shared_ptr<string> pattern_ {};
          };

          virtual bool empty() const override { return this->consumerRules_ == nullptr
        && this->level_ == nullptr && this->type_ == nullptr; };
          // consumerRules Field Functions 
          bool hasConsumerRules() const { return this->consumerRules_ != nullptr;};
          void deleteConsumerRules() { this->consumerRules_ = nullptr;};
          inline const RiskConfig::ConsumerRules & getConsumerRules() const { DARABONBA_PTR_GET_CONST(consumerRules_, RiskConfig::ConsumerRules) };
          inline RiskConfig::ConsumerRules getConsumerRules() { DARABONBA_PTR_GET(consumerRules_, RiskConfig::ConsumerRules) };
          inline RiskConfig& setConsumerRules(const RiskConfig::ConsumerRules & consumerRules) { DARABONBA_PTR_SET_VALUE(consumerRules_, consumerRules) };
          inline RiskConfig& setConsumerRules(RiskConfig::ConsumerRules && consumerRules) { DARABONBA_PTR_SET_RVALUE(consumerRules_, consumerRules) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline RiskConfig& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RiskConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // Consumer-specific rules
          shared_ptr<RiskConfig::ConsumerRules> consumerRules_ {};
          // Risk alert level
          shared_ptr<string> level_ {};
          // Risk type identifier
          shared_ptr<string> type_ {};
        };

        class ConsumerRiskLevel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerRiskLevel& obj) { 
            DARABONBA_PTR_TO_JSON(level, level_);
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerRiskLevel& obj) { 
            DARABONBA_PTR_FROM_JSON(level, level_);
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          ConsumerRiskLevel() = default ;
          ConsumerRiskLevel(const ConsumerRiskLevel &) = default ;
          ConsumerRiskLevel(ConsumerRiskLevel &&) = default ;
          ConsumerRiskLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerRiskLevel() = default ;
          ConsumerRiskLevel& operator=(const ConsumerRiskLevel &) = default ;
          ConsumerRiskLevel& operator=(ConsumerRiskLevel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->level_ == nullptr
        && this->matchType_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline ConsumerRiskLevel& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerRiskLevel& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerRiskLevel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ConsumerRiskLevel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // Risk alert level
          shared_ptr<string> level_ {};
          // Match type
          shared_ptr<string> matchType_ {};
          // Consumer name for matching
          shared_ptr<string> name_ {};
          // Risk type
          shared_ptr<string> type_ {};
        };

        class ConsumerResponseCheckService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerResponseCheckService& obj) { 
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(responseCheckService, responseCheckService_);
            DARABONBA_PTR_TO_JSON(responseImageCheckService, responseImageCheckService_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerResponseCheckService& obj) { 
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(responseCheckService, responseCheckService_);
            DARABONBA_PTR_FROM_JSON(responseImageCheckService, responseImageCheckService_);
          };
          ConsumerResponseCheckService() = default ;
          ConsumerResponseCheckService(const ConsumerResponseCheckService &) = default ;
          ConsumerResponseCheckService(ConsumerResponseCheckService &&) = default ;
          ConsumerResponseCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerResponseCheckService() = default ;
          ConsumerResponseCheckService& operator=(const ConsumerResponseCheckService &) = default ;
          ConsumerResponseCheckService& operator=(ConsumerResponseCheckService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->responseCheckService_ == nullptr && this->responseImageCheckService_ == nullptr; };
          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerResponseCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // modalityType Field Functions 
          bool hasModalityType() const { return this->modalityType_ != nullptr;};
          void deleteModalityType() { this->modalityType_ = nullptr;};
          inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
          inline ConsumerResponseCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerResponseCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // responseCheckService Field Functions 
          bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
          void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
          inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
          inline ConsumerResponseCheckService& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


          // responseImageCheckService Field Functions 
          bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
          void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
          inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
          inline ConsumerResponseCheckService& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


        protected:
          // Match type
          shared_ptr<string> matchType_ {};
          // Modality type
          shared_ptr<string> modalityType_ {};
          // Consumer name for matching
          shared_ptr<string> name_ {};
          // Response check service name
          shared_ptr<string> responseCheckService_ {};
          // responseImageCheckService
          shared_ptr<string> responseImageCheckService_ {};
        };

        class ConsumerRequestCheckService : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerRequestCheckService& obj) { 
            DARABONBA_PTR_TO_JSON(matchType, matchType_);
            DARABONBA_PTR_TO_JSON(modalityType, modalityType_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(requestCheckService, requestCheckService_);
            DARABONBA_PTR_TO_JSON(requestImageCheckService, requestImageCheckService_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerRequestCheckService& obj) { 
            DARABONBA_PTR_FROM_JSON(matchType, matchType_);
            DARABONBA_PTR_FROM_JSON(modalityType, modalityType_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(requestCheckService, requestCheckService_);
            DARABONBA_PTR_FROM_JSON(requestImageCheckService, requestImageCheckService_);
          };
          ConsumerRequestCheckService() = default ;
          ConsumerRequestCheckService(const ConsumerRequestCheckService &) = default ;
          ConsumerRequestCheckService(ConsumerRequestCheckService &&) = default ;
          ConsumerRequestCheckService(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerRequestCheckService() = default ;
          ConsumerRequestCheckService& operator=(const ConsumerRequestCheckService &) = default ;
          ConsumerRequestCheckService& operator=(ConsumerRequestCheckService &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchType_ == nullptr
        && this->modalityType_ == nullptr && this->name_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr; };
          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline ConsumerRequestCheckService& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // modalityType Field Functions 
          bool hasModalityType() const { return this->modalityType_ != nullptr;};
          void deleteModalityType() { this->modalityType_ = nullptr;};
          inline string getModalityType() const { DARABONBA_PTR_GET_DEFAULT(modalityType_, "") };
          inline ConsumerRequestCheckService& setModalityType(string modalityType) { DARABONBA_PTR_SET_VALUE(modalityType_, modalityType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConsumerRequestCheckService& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // requestCheckService Field Functions 
          bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
          void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
          inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
          inline ConsumerRequestCheckService& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


          // requestImageCheckService Field Functions 
          bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
          void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
          inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
          inline ConsumerRequestCheckService& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


        protected:
          // Match type
          shared_ptr<string> matchType_ {};
          // Modality type
          shared_ptr<string> modalityType_ {};
          // Consumer name for matching
          shared_ptr<string> name_ {};
          // Request check service name
          shared_ptr<string> requestCheckService_ {};
          // requestImageCheckService
          shared_ptr<string> requestImageCheckService_ {};
        };

        virtual bool empty() const override { return this->bufferLimit_ == nullptr
        && this->checkRequest_ == nullptr && this->checkRequestImage_ == nullptr && this->checkResponse_ == nullptr && this->checkResponseImage_ == nullptr && this->consumerRequestCheckService_ == nullptr
        && this->consumerResponseCheckService_ == nullptr && this->consumerRiskLevel_ == nullptr && this->requestCheckService_ == nullptr && this->requestImageCheckService_ == nullptr && this->responseCheckService_ == nullptr
        && this->responseImageCheckService_ == nullptr && this->riskAlertLevel_ == nullptr && this->riskConfig_ == nullptr && this->serviceAddress_ == nullptr; };
        // bufferLimit Field Functions 
        bool hasBufferLimit() const { return this->bufferLimit_ != nullptr;};
        void deleteBufferLimit() { this->bufferLimit_ = nullptr;};
        inline int32_t getBufferLimit() const { DARABONBA_PTR_GET_DEFAULT(bufferLimit_, 0) };
        inline AiSecurityGuardConfig& setBufferLimit(int32_t bufferLimit) { DARABONBA_PTR_SET_VALUE(bufferLimit_, bufferLimit) };


        // checkRequest Field Functions 
        bool hasCheckRequest() const { return this->checkRequest_ != nullptr;};
        void deleteCheckRequest() { this->checkRequest_ = nullptr;};
        inline bool getCheckRequest() const { DARABONBA_PTR_GET_DEFAULT(checkRequest_, false) };
        inline AiSecurityGuardConfig& setCheckRequest(bool checkRequest) { DARABONBA_PTR_SET_VALUE(checkRequest_, checkRequest) };


        // checkRequestImage Field Functions 
        bool hasCheckRequestImage() const { return this->checkRequestImage_ != nullptr;};
        void deleteCheckRequestImage() { this->checkRequestImage_ = nullptr;};
        inline bool getCheckRequestImage() const { DARABONBA_PTR_GET_DEFAULT(checkRequestImage_, false) };
        inline AiSecurityGuardConfig& setCheckRequestImage(bool checkRequestImage) { DARABONBA_PTR_SET_VALUE(checkRequestImage_, checkRequestImage) };


        // checkResponse Field Functions 
        bool hasCheckResponse() const { return this->checkResponse_ != nullptr;};
        void deleteCheckResponse() { this->checkResponse_ = nullptr;};
        inline bool getCheckResponse() const { DARABONBA_PTR_GET_DEFAULT(checkResponse_, false) };
        inline AiSecurityGuardConfig& setCheckResponse(bool checkResponse) { DARABONBA_PTR_SET_VALUE(checkResponse_, checkResponse) };


        // checkResponseImage Field Functions 
        bool hasCheckResponseImage() const { return this->checkResponseImage_ != nullptr;};
        void deleteCheckResponseImage() { this->checkResponseImage_ = nullptr;};
        inline bool getCheckResponseImage() const { DARABONBA_PTR_GET_DEFAULT(checkResponseImage_, false) };
        inline AiSecurityGuardConfig& setCheckResponseImage(bool checkResponseImage) { DARABONBA_PTR_SET_VALUE(checkResponseImage_, checkResponseImage) };


        // consumerRequestCheckService Field Functions 
        bool hasConsumerRequestCheckService() const { return this->consumerRequestCheckService_ != nullptr;};
        void deleteConsumerRequestCheckService() { this->consumerRequestCheckService_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & getConsumerRequestCheckService() const { DARABONBA_PTR_GET_CONST(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
        inline vector<AiSecurityGuardConfig::ConsumerRequestCheckService> getConsumerRequestCheckService() { DARABONBA_PTR_GET(consumerRequestCheckService_, vector<AiSecurityGuardConfig::ConsumerRequestCheckService>) };
        inline AiSecurityGuardConfig& setConsumerRequestCheckService(const vector<AiSecurityGuardConfig::ConsumerRequestCheckService> & consumerRequestCheckService) { DARABONBA_PTR_SET_VALUE(consumerRequestCheckService_, consumerRequestCheckService) };
        inline AiSecurityGuardConfig& setConsumerRequestCheckService(vector<AiSecurityGuardConfig::ConsumerRequestCheckService> && consumerRequestCheckService) { DARABONBA_PTR_SET_RVALUE(consumerRequestCheckService_, consumerRequestCheckService) };


        // consumerResponseCheckService Field Functions 
        bool hasConsumerResponseCheckService() const { return this->consumerResponseCheckService_ != nullptr;};
        void deleteConsumerResponseCheckService() { this->consumerResponseCheckService_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & getConsumerResponseCheckService() const { DARABONBA_PTR_GET_CONST(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
        inline vector<AiSecurityGuardConfig::ConsumerResponseCheckService> getConsumerResponseCheckService() { DARABONBA_PTR_GET(consumerResponseCheckService_, vector<AiSecurityGuardConfig::ConsumerResponseCheckService>) };
        inline AiSecurityGuardConfig& setConsumerResponseCheckService(const vector<AiSecurityGuardConfig::ConsumerResponseCheckService> & consumerResponseCheckService) { DARABONBA_PTR_SET_VALUE(consumerResponseCheckService_, consumerResponseCheckService) };
        inline AiSecurityGuardConfig& setConsumerResponseCheckService(vector<AiSecurityGuardConfig::ConsumerResponseCheckService> && consumerResponseCheckService) { DARABONBA_PTR_SET_RVALUE(consumerResponseCheckService_, consumerResponseCheckService) };


        // consumerRiskLevel Field Functions 
        bool hasConsumerRiskLevel() const { return this->consumerRiskLevel_ != nullptr;};
        void deleteConsumerRiskLevel() { this->consumerRiskLevel_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & getConsumerRiskLevel() const { DARABONBA_PTR_GET_CONST(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
        inline vector<AiSecurityGuardConfig::ConsumerRiskLevel> getConsumerRiskLevel() { DARABONBA_PTR_GET(consumerRiskLevel_, vector<AiSecurityGuardConfig::ConsumerRiskLevel>) };
        inline AiSecurityGuardConfig& setConsumerRiskLevel(const vector<AiSecurityGuardConfig::ConsumerRiskLevel> & consumerRiskLevel) { DARABONBA_PTR_SET_VALUE(consumerRiskLevel_, consumerRiskLevel) };
        inline AiSecurityGuardConfig& setConsumerRiskLevel(vector<AiSecurityGuardConfig::ConsumerRiskLevel> && consumerRiskLevel) { DARABONBA_PTR_SET_RVALUE(consumerRiskLevel_, consumerRiskLevel) };


        // requestCheckService Field Functions 
        bool hasRequestCheckService() const { return this->requestCheckService_ != nullptr;};
        void deleteRequestCheckService() { this->requestCheckService_ = nullptr;};
        inline string getRequestCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestCheckService_, "") };
        inline AiSecurityGuardConfig& setRequestCheckService(string requestCheckService) { DARABONBA_PTR_SET_VALUE(requestCheckService_, requestCheckService) };


        // requestImageCheckService Field Functions 
        bool hasRequestImageCheckService() const { return this->requestImageCheckService_ != nullptr;};
        void deleteRequestImageCheckService() { this->requestImageCheckService_ = nullptr;};
        inline string getRequestImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(requestImageCheckService_, "") };
        inline AiSecurityGuardConfig& setRequestImageCheckService(string requestImageCheckService) { DARABONBA_PTR_SET_VALUE(requestImageCheckService_, requestImageCheckService) };


        // responseCheckService Field Functions 
        bool hasResponseCheckService() const { return this->responseCheckService_ != nullptr;};
        void deleteResponseCheckService() { this->responseCheckService_ = nullptr;};
        inline string getResponseCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseCheckService_, "") };
        inline AiSecurityGuardConfig& setResponseCheckService(string responseCheckService) { DARABONBA_PTR_SET_VALUE(responseCheckService_, responseCheckService) };


        // responseImageCheckService Field Functions 
        bool hasResponseImageCheckService() const { return this->responseImageCheckService_ != nullptr;};
        void deleteResponseImageCheckService() { this->responseImageCheckService_ = nullptr;};
        inline string getResponseImageCheckService() const { DARABONBA_PTR_GET_DEFAULT(responseImageCheckService_, "") };
        inline AiSecurityGuardConfig& setResponseImageCheckService(string responseImageCheckService) { DARABONBA_PTR_SET_VALUE(responseImageCheckService_, responseImageCheckService) };


        // riskAlertLevel Field Functions 
        bool hasRiskAlertLevel() const { return this->riskAlertLevel_ != nullptr;};
        void deleteRiskAlertLevel() { this->riskAlertLevel_ = nullptr;};
        inline string getRiskAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(riskAlertLevel_, "") };
        inline AiSecurityGuardConfig& setRiskAlertLevel(string riskAlertLevel) { DARABONBA_PTR_SET_VALUE(riskAlertLevel_, riskAlertLevel) };


        // riskConfig Field Functions 
        bool hasRiskConfig() const { return this->riskConfig_ != nullptr;};
        void deleteRiskConfig() { this->riskConfig_ = nullptr;};
        inline const vector<AiSecurityGuardConfig::RiskConfig> & getRiskConfig() const { DARABONBA_PTR_GET_CONST(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
        inline vector<AiSecurityGuardConfig::RiskConfig> getRiskConfig() { DARABONBA_PTR_GET(riskConfig_, vector<AiSecurityGuardConfig::RiskConfig>) };
        inline AiSecurityGuardConfig& setRiskConfig(const vector<AiSecurityGuardConfig::RiskConfig> & riskConfig) { DARABONBA_PTR_SET_VALUE(riskConfig_, riskConfig) };
        inline AiSecurityGuardConfig& setRiskConfig(vector<AiSecurityGuardConfig::RiskConfig> && riskConfig) { DARABONBA_PTR_SET_RVALUE(riskConfig_, riskConfig) };


        // serviceAddress Field Functions 
        bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
        void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
        inline string getServiceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
        inline AiSecurityGuardConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


      protected:
        // bufferLimit
        shared_ptr<int32_t> bufferLimit_ {};
        // Whether to check request content
        shared_ptr<bool> checkRequest_ {};
        // Whether to check request content
        shared_ptr<bool> checkRequestImage_ {};
        // Whether to check response content
        shared_ptr<bool> checkResponse_ {};
        // Whether to check response content
        shared_ptr<bool> checkResponseImage_ {};
        // Consumer-specific request check configs
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerRequestCheckService>> consumerRequestCheckService_ {};
        // Consumer-specific Response check configs
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerResponseCheckService>> consumerResponseCheckService_ {};
        // Consumer-specific risk level configs
        shared_ptr<vector<AiSecurityGuardConfig::ConsumerRiskLevel>> consumerRiskLevel_ {};
        // Request check service name
        shared_ptr<string> requestCheckService_ {};
        // Request check service name
        shared_ptr<string> requestImageCheckService_ {};
        // Response check service name
        shared_ptr<string> responseCheckService_ {};
        // Response check service name
        shared_ptr<string> responseImageCheckService_ {};
        // Risk alert level for content moderation
        shared_ptr<string> riskAlertLevel_ {};
        // riskConfig
        shared_ptr<vector<AiSecurityGuardConfig::RiskConfig>> riskConfig_ {};
        // Security guard service address
        shared_ptr<string> serviceAddress_ {};
      };

      class AiFallbackConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiFallbackConfig& obj) { 
          DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, AiFallbackConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
        };
        AiFallbackConfig() = default ;
        AiFallbackConfig(const AiFallbackConfig &) = default ;
        AiFallbackConfig(AiFallbackConfig &&) = default ;
        AiFallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiFallbackConfig() = default ;
        AiFallbackConfig& operator=(const AiFallbackConfig &) = default ;
        AiFallbackConfig& operator=(AiFallbackConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
            DARABONBA_PTR_TO_JSON(targetModelName, targetModelName_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(targetModelName, targetModelName_);
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
          virtual bool empty() const override { return this->serviceId_ == nullptr
        && this->targetModelName_ == nullptr; };
          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // targetModelName Field Functions 
          bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
          void deleteTargetModelName() { this->targetModelName_ = nullptr;};
          inline string getTargetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
          inline ServiceConfigs& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


        protected:
          // Service ID for fallback
          shared_ptr<string> serviceId_ {};
          // targetModelName
          shared_ptr<string> targetModelName_ {};
        };

        virtual bool empty() const override { return this->serviceConfigs_ == nullptr; };
        // serviceConfigs Field Functions 
        bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
        void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
        inline const vector<AiFallbackConfig::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
        inline vector<AiFallbackConfig::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<AiFallbackConfig::ServiceConfigs>) };
        inline AiFallbackConfig& setServiceConfigs(const vector<AiFallbackConfig::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
        inline AiFallbackConfig& setServiceConfigs(vector<AiFallbackConfig::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


      protected:
        // List of fallback service configurations
        shared_ptr<vector<AiFallbackConfig::ServiceConfigs>> serviceConfigs_ {};
      };

      virtual bool empty() const override { return this->aiFallbackConfig_ == nullptr
        && this->aiSecurityGuardConfig_ == nullptr && this->aiTokenRateLimitConfig_ == nullptr && this->enable_ == nullptr && this->type_ == nullptr; };
      // aiFallbackConfig Field Functions 
      bool hasAiFallbackConfig() const { return this->aiFallbackConfig_ != nullptr;};
      void deleteAiFallbackConfig() { this->aiFallbackConfig_ = nullptr;};
      inline const PolicyConfigs::AiFallbackConfig & getAiFallbackConfig() const { DARABONBA_PTR_GET_CONST(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs::AiFallbackConfig getAiFallbackConfig() { DARABONBA_PTR_GET(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(const PolicyConfigs::AiFallbackConfig & aiFallbackConfig) { DARABONBA_PTR_SET_VALUE(aiFallbackConfig_, aiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(PolicyConfigs::AiFallbackConfig && aiFallbackConfig) { DARABONBA_PTR_SET_RVALUE(aiFallbackConfig_, aiFallbackConfig) };


      // aiSecurityGuardConfig Field Functions 
      bool hasAiSecurityGuardConfig() const { return this->aiSecurityGuardConfig_ != nullptr;};
      void deleteAiSecurityGuardConfig() { this->aiSecurityGuardConfig_ = nullptr;};
      inline const PolicyConfigs::AiSecurityGuardConfig & getAiSecurityGuardConfig() const { DARABONBA_PTR_GET_CONST(aiSecurityGuardConfig_, PolicyConfigs::AiSecurityGuardConfig) };
      inline PolicyConfigs::AiSecurityGuardConfig getAiSecurityGuardConfig() { DARABONBA_PTR_GET(aiSecurityGuardConfig_, PolicyConfigs::AiSecurityGuardConfig) };
      inline PolicyConfigs& setAiSecurityGuardConfig(const PolicyConfigs::AiSecurityGuardConfig & aiSecurityGuardConfig) { DARABONBA_PTR_SET_VALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };
      inline PolicyConfigs& setAiSecurityGuardConfig(PolicyConfigs::AiSecurityGuardConfig && aiSecurityGuardConfig) { DARABONBA_PTR_SET_RVALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };


      // aiTokenRateLimitConfig Field Functions 
      bool hasAiTokenRateLimitConfig() const { return this->aiTokenRateLimitConfig_ != nullptr;};
      void deleteAiTokenRateLimitConfig() { this->aiTokenRateLimitConfig_ = nullptr;};
      inline const PolicyConfigs::AiTokenRateLimitConfig & getAiTokenRateLimitConfig() const { DARABONBA_PTR_GET_CONST(aiTokenRateLimitConfig_, PolicyConfigs::AiTokenRateLimitConfig) };
      inline PolicyConfigs::AiTokenRateLimitConfig getAiTokenRateLimitConfig() { DARABONBA_PTR_GET(aiTokenRateLimitConfig_, PolicyConfigs::AiTokenRateLimitConfig) };
      inline PolicyConfigs& setAiTokenRateLimitConfig(const PolicyConfigs::AiTokenRateLimitConfig & aiTokenRateLimitConfig) { DARABONBA_PTR_SET_VALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };
      inline PolicyConfigs& setAiTokenRateLimitConfig(PolicyConfigs::AiTokenRateLimitConfig && aiTokenRateLimitConfig) { DARABONBA_PTR_SET_RVALUE(aiTokenRateLimitConfig_, aiTokenRateLimitConfig) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline PolicyConfigs& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PolicyConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The fallback configurations
      shared_ptr<PolicyConfigs::AiFallbackConfig> aiFallbackConfig_ {};
      // AI Security Guard configuration
      shared_ptr<PolicyConfigs::AiSecurityGuardConfig> aiSecurityGuardConfig_ {};
      // AI Token Rate Limit configuration
      shared_ptr<PolicyConfigs::AiTokenRateLimitConfig> aiTokenRateLimitConfig_ {};
      // Specifies whether to enable the policy.
      shared_ptr<bool> enable_ {};
      // The type of the policy. Valid values:
      shared_ptr<string> type_ {};
    };

    class CustomDomainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomDomainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(domainId, domainId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, CustomDomainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(domainId, domainId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      CustomDomainInfos() = default ;
      CustomDomainInfos(const CustomDomainInfos &) = default ;
      CustomDomainInfos(CustomDomainInfos &&) = default ;
      CustomDomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomDomainInfos() = default ;
      CustomDomainInfos& operator=(const CustomDomainInfos &) = default ;
      CustomDomainInfos& operator=(CustomDomainInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline CustomDomainInfos& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomDomainInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline CustomDomainInfos& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The domain name ID.
      shared_ptr<string> domainId_ {};
      // The domain name.
      shared_ptr<string> name_ {};
      // The protocol.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->autoDeploy_ == nullptr
        && this->backendScene_ == nullptr && this->customDomainIds_ == nullptr && this->customDomainInfos_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr
        && this->gatewayInfo_ == nullptr && this->gatewayType_ == nullptr && this->mock_ == nullptr && this->policyConfigs_ == nullptr && this->routeBackend_ == nullptr
        && this->serviceConfigs_ == nullptr && this->subDomains_ == nullptr; };
    // autoDeploy Field Functions 
    bool hasAutoDeploy() const { return this->autoDeploy_ != nullptr;};
    void deleteAutoDeploy() { this->autoDeploy_ = nullptr;};
    inline bool getAutoDeploy() const { DARABONBA_PTR_GET_DEFAULT(autoDeploy_, false) };
    inline HttpApiDeployConfig& setAutoDeploy(bool autoDeploy) { DARABONBA_PTR_SET_VALUE(autoDeploy_, autoDeploy) };


    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline HttpApiDeployConfig& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // customDomainIds Field Functions 
    bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
    void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
    inline const vector<string> & getCustomDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
    inline vector<string> getCustomDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
    inline HttpApiDeployConfig& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
    inline HttpApiDeployConfig& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


    // customDomainInfos Field Functions 
    bool hasCustomDomainInfos() const { return this->customDomainInfos_ != nullptr;};
    void deleteCustomDomainInfos() { this->customDomainInfos_ = nullptr;};
    inline const vector<HttpApiDeployConfig::CustomDomainInfos> & getCustomDomainInfos() const { DARABONBA_PTR_GET_CONST(customDomainInfos_, vector<HttpApiDeployConfig::CustomDomainInfos>) };
    inline vector<HttpApiDeployConfig::CustomDomainInfos> getCustomDomainInfos() { DARABONBA_PTR_GET(customDomainInfos_, vector<HttpApiDeployConfig::CustomDomainInfos>) };
    inline HttpApiDeployConfig& setCustomDomainInfos(const vector<HttpApiDeployConfig::CustomDomainInfos> & customDomainInfos) { DARABONBA_PTR_SET_VALUE(customDomainInfos_, customDomainInfos) };
    inline HttpApiDeployConfig& setCustomDomainInfos(vector<HttpApiDeployConfig::CustomDomainInfos> && customDomainInfos) { DARABONBA_PTR_SET_RVALUE(customDomainInfos_, customDomainInfos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiDeployConfig& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiDeployConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline HttpApiDeployConfig& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline HttpApiDeployConfig& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline HttpApiDeployConfig& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline const HttpApiMockContract & getMock() const { DARABONBA_PTR_GET_CONST(mock_, HttpApiMockContract) };
    inline HttpApiMockContract getMock() { DARABONBA_PTR_GET(mock_, HttpApiMockContract) };
    inline HttpApiDeployConfig& setMock(const HttpApiMockContract & mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };
    inline HttpApiDeployConfig& setMock(HttpApiMockContract && mock) { DARABONBA_PTR_SET_RVALUE(mock_, mock) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig::PolicyConfigs> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<HttpApiDeployConfig::PolicyConfigs>) };
    inline vector<HttpApiDeployConfig::PolicyConfigs> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<HttpApiDeployConfig::PolicyConfigs>) };
    inline HttpApiDeployConfig& setPolicyConfigs(const vector<HttpApiDeployConfig::PolicyConfigs> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline HttpApiDeployConfig& setPolicyConfigs(vector<HttpApiDeployConfig::PolicyConfigs> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // routeBackend Field Functions 
    bool hasRouteBackend() const { return this->routeBackend_ != nullptr;};
    void deleteRouteBackend() { this->routeBackend_ = nullptr;};
    inline const Backend & getRouteBackend() const { DARABONBA_PTR_GET_CONST(routeBackend_, Backend) };
    inline Backend getRouteBackend() { DARABONBA_PTR_GET(routeBackend_, Backend) };
    inline HttpApiDeployConfig& setRouteBackend(const Backend & routeBackend) { DARABONBA_PTR_SET_VALUE(routeBackend_, routeBackend) };
    inline HttpApiDeployConfig& setRouteBackend(Backend && routeBackend) { DARABONBA_PTR_SET_RVALUE(routeBackend_, routeBackend) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<HttpApiDeployConfig::ServiceConfigs>) };
    inline vector<HttpApiDeployConfig::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<HttpApiDeployConfig::ServiceConfigs>) };
    inline HttpApiDeployConfig& setServiceConfigs(const vector<HttpApiDeployConfig::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiDeployConfig& setServiceConfigs(vector<HttpApiDeployConfig::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<HttpApiDeployConfig::SubDomains> & getSubDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<HttpApiDeployConfig::SubDomains>) };
    inline vector<HttpApiDeployConfig::SubDomains> getSubDomains() { DARABONBA_PTR_GET(subDomains_, vector<HttpApiDeployConfig::SubDomains>) };
    inline HttpApiDeployConfig& setSubDomains(const vector<HttpApiDeployConfig::SubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpApiDeployConfig& setSubDomains(vector<HttpApiDeployConfig::SubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


  protected:
    // Specifies whether to enable automatic deployment.
    shared_ptr<bool> autoDeploy_ {};
    // The publishing scenario.
    shared_ptr<string> backendScene_ {};
    // The IDs of the custom domain names.
    shared_ptr<vector<string>> customDomainIds_ {};
    // The information about the custom domain names.
    shared_ptr<vector<HttpApiDeployConfig::CustomDomainInfos>> customDomainInfos_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // The instance ID.
    shared_ptr<string> gatewayId_ {};
    // The instance information.
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    // 网关类型
    shared_ptr<string> gatewayType_ {};
    // The Mock settings.
    shared_ptr<HttpApiMockContract> mock_ {};
    // The policy configurations.
    shared_ptr<vector<HttpApiDeployConfig::PolicyConfigs>> policyConfigs_ {};
    // routeBackend
    shared_ptr<Backend> routeBackend_ {};
    // The service configurations.
    shared_ptr<vector<HttpApiDeployConfig::ServiceConfigs>> serviceConfigs_ {};
    // The information about the sub-domain names.
    shared_ptr<vector<HttpApiDeployConfig::SubDomains>> subDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
