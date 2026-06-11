// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <vector>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/HttpApiMockContract.hpp>
#include <alibabacloud/models/HttpApiPolicyConfigs.hpp>
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
      DARABONBA_PTR_TO_JSON(builtinRouteNames, builtinRouteNames_);
      DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_TO_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_TO_JSON(envDomainIds, envDomainIds_);
      DARABONBA_PTR_TO_JSON(envDomainInfos, envDomainInfos_);
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
      DARABONBA_PTR_FROM_JSON(builtinRouteNames, builtinRouteNames_);
      DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_FROM_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_FROM_JSON(envDomainIds, envDomainIds_);
      DARABONBA_PTR_FROM_JSON(envDomainInfos, envDomainInfos_);
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
      // Domain ID.
      shared_ptr<string> domainId_ {};
      // Domain name.
      shared_ptr<string> name_ {};
      // Network type.
      shared_ptr<string> networkType_ {};
      // Protocol.
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
        // Routing mode.
        shared_ptr<string> mode_ {};
        // Queue size.
        shared_ptr<int32_t> queueSize_ {};
        // Maximum traffic ratio for a single service.
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
      // Gateway service ID.
      shared_ptr<string> gatewayServiceId_ {};
      // Intent code.
      shared_ptr<string> intentCode_ {};
      // Matching conditions.
      shared_ptr<HttpApiBackendMatchConditions> match_ {};
      // Model name.
      shared_ptr<string> modelName_ {};
      // Model name matching rule.
      shared_ptr<string> modelNamePattern_ {};
      // Multi-service routing strategy type.
      shared_ptr<string> multiServiceRouteStrategy_ {};
      // Service display name.
      shared_ptr<string> name_ {};
      // Observability-based routing configuration.
      shared_ptr<ServiceConfigs::ObservabilityRouteConfig> observabilityRouteConfig_ {};
      // Service port number.
      shared_ptr<int32_t> port_ {};
      // Service protocol (HTTP/HTTPS).
      shared_ptr<string> protocol_ {};
      // Service ID.
      shared_ptr<string> serviceId_ {};
      // Service version tag.
      shared_ptr<string> version_ {};
      // Service weight.
      shared_ptr<int64_t> weight_ {};
    };

    class EnvDomainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvDomainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(domainId, domainId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, EnvDomainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(domainId, domainId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      EnvDomainInfos() = default ;
      EnvDomainInfos(const EnvDomainInfos &) = default ;
      EnvDomainInfos(EnvDomainInfos &&) = default ;
      EnvDomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvDomainInfos() = default ;
      EnvDomainInfos& operator=(const EnvDomainInfos &) = default ;
      EnvDomainInfos& operator=(EnvDomainInfos &&) = default ;
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
      inline EnvDomainInfos& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EnvDomainInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline EnvDomainInfos& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> domainId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> protocol_ {};
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
      // Domain ID.
      shared_ptr<string> domainId_ {};
      // Domain name.
      shared_ptr<string> name_ {};
      // Protocol.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->autoDeploy_ == nullptr
        && this->backendScene_ == nullptr && this->builtinRouteNames_ == nullptr && this->customDomainIds_ == nullptr && this->customDomainInfos_ == nullptr && this->envDomainIds_ == nullptr
        && this->envDomainInfos_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->gatewayInfo_ == nullptr && this->gatewayType_ == nullptr
        && this->mock_ == nullptr && this->policyConfigs_ == nullptr && this->routeBackend_ == nullptr && this->serviceConfigs_ == nullptr && this->subDomains_ == nullptr; };
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


    // builtinRouteNames Field Functions 
    bool hasBuiltinRouteNames() const { return this->builtinRouteNames_ != nullptr;};
    void deleteBuiltinRouteNames() { this->builtinRouteNames_ = nullptr;};
    inline const vector<string> & getBuiltinRouteNames() const { DARABONBA_PTR_GET_CONST(builtinRouteNames_, vector<string>) };
    inline vector<string> getBuiltinRouteNames() { DARABONBA_PTR_GET(builtinRouteNames_, vector<string>) };
    inline HttpApiDeployConfig& setBuiltinRouteNames(const vector<string> & builtinRouteNames) { DARABONBA_PTR_SET_VALUE(builtinRouteNames_, builtinRouteNames) };
    inline HttpApiDeployConfig& setBuiltinRouteNames(vector<string> && builtinRouteNames) { DARABONBA_PTR_SET_RVALUE(builtinRouteNames_, builtinRouteNames) };


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


    // envDomainIds Field Functions 
    bool hasEnvDomainIds() const { return this->envDomainIds_ != nullptr;};
    void deleteEnvDomainIds() { this->envDomainIds_ = nullptr;};
    inline const vector<string> & getEnvDomainIds() const { DARABONBA_PTR_GET_CONST(envDomainIds_, vector<string>) };
    inline vector<string> getEnvDomainIds() { DARABONBA_PTR_GET(envDomainIds_, vector<string>) };
    inline HttpApiDeployConfig& setEnvDomainIds(const vector<string> & envDomainIds) { DARABONBA_PTR_SET_VALUE(envDomainIds_, envDomainIds) };
    inline HttpApiDeployConfig& setEnvDomainIds(vector<string> && envDomainIds) { DARABONBA_PTR_SET_RVALUE(envDomainIds_, envDomainIds) };


    // envDomainInfos Field Functions 
    bool hasEnvDomainInfos() const { return this->envDomainInfos_ != nullptr;};
    void deleteEnvDomainInfos() { this->envDomainInfos_ = nullptr;};
    inline const vector<HttpApiDeployConfig::EnvDomainInfos> & getEnvDomainInfos() const { DARABONBA_PTR_GET_CONST(envDomainInfos_, vector<HttpApiDeployConfig::EnvDomainInfos>) };
    inline vector<HttpApiDeployConfig::EnvDomainInfos> getEnvDomainInfos() { DARABONBA_PTR_GET(envDomainInfos_, vector<HttpApiDeployConfig::EnvDomainInfos>) };
    inline HttpApiDeployConfig& setEnvDomainInfos(const vector<HttpApiDeployConfig::EnvDomainInfos> & envDomainInfos) { DARABONBA_PTR_SET_VALUE(envDomainInfos_, envDomainInfos) };
    inline HttpApiDeployConfig& setEnvDomainInfos(vector<HttpApiDeployConfig::EnvDomainInfos> && envDomainInfos) { DARABONBA_PTR_SET_RVALUE(envDomainInfos_, envDomainInfos) };


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
    inline const vector<HttpApiPolicyConfigs> & getPolicyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<HttpApiPolicyConfigs>) };
    inline vector<HttpApiPolicyConfigs> getPolicyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<HttpApiPolicyConfigs>) };
    inline HttpApiDeployConfig& setPolicyConfigs(const vector<HttpApiPolicyConfigs> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline HttpApiDeployConfig& setPolicyConfigs(vector<HttpApiPolicyConfigs> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


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
    // Whether to enable automatic deployment.
    shared_ptr<bool> autoDeploy_ {};
    // Deployment scenario.
    shared_ptr<string> backendScene_ {};
    shared_ptr<vector<string>> builtinRouteNames_ {};
    // List of custom domain IDs.
    shared_ptr<vector<string>> customDomainIds_ {};
    // List of custom domain details.
    shared_ptr<vector<HttpApiDeployConfig::CustomDomainInfos>> customDomainInfos_ {};
    shared_ptr<vector<string>> envDomainIds_ {};
    shared_ptr<vector<HttpApiDeployConfig::EnvDomainInfos>> envDomainInfos_ {};
    // Environment ID.
    shared_ptr<string> environmentId_ {};
    // Gateway instance ID.
    shared_ptr<string> gatewayId_ {};
    // Gateway information.
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    // Gateway type.
    shared_ptr<string> gatewayType_ {};
    // Mock configuration.
    shared_ptr<HttpApiMockContract> mock_ {};
    // List of policy configurations.
    shared_ptr<vector<HttpApiPolicyConfigs>> policyConfigs_ {};
    // Backend service information.
    shared_ptr<Backend> routeBackend_ {};
    // List of service configurations.
    shared_ptr<vector<HttpApiDeployConfig::ServiceConfigs>> serviceConfigs_ {};
    // List of second-level domain details.
    shared_ptr<vector<HttpApiDeployConfig::SubDomains>> subDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
