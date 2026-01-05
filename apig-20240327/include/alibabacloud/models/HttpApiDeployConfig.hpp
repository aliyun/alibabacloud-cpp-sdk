// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
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
      shared_ptr<string> domainId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> networkType_ {};
      shared_ptr<string> protocol_ {};
    };

    class ServiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelNamePattern, modelNamePattern_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelNamePattern, modelNamePattern_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
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
      virtual bool empty() const override { return this->intentCode_ == nullptr
        && this->modelName_ == nullptr && this->modelNamePattern_ == nullptr && this->serviceId_ == nullptr && this->weight_ == nullptr; };
      // intentCode Field Functions 
      bool hasIntentCode() const { return this->intentCode_ != nullptr;};
      void deleteIntentCode() { this->intentCode_ = nullptr;};
      inline string getIntentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
      inline ServiceConfigs& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


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


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline ServiceConfigs& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> intentCode_ {};
      shared_ptr<string> modelName_ {};
      shared_ptr<string> modelNamePattern_ {};
      shared_ptr<string> serviceId_ {};
      shared_ptr<int64_t> weight_ {};
    };

    class PolicyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(aiFallbackConfig, aiFallbackConfig_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(aiFallbackConfig, aiFallbackConfig_);
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
          shared_ptr<string> serviceId_ {};
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
        shared_ptr<vector<AiFallbackConfig::ServiceConfigs>> serviceConfigs_ {};
      };

      virtual bool empty() const override { return this->aiFallbackConfig_ == nullptr
        && this->enable_ == nullptr && this->type_ == nullptr; };
      // aiFallbackConfig Field Functions 
      bool hasAiFallbackConfig() const { return this->aiFallbackConfig_ != nullptr;};
      void deleteAiFallbackConfig() { this->aiFallbackConfig_ = nullptr;};
      inline const PolicyConfigs::AiFallbackConfig & getAiFallbackConfig() const { DARABONBA_PTR_GET_CONST(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs::AiFallbackConfig getAiFallbackConfig() { DARABONBA_PTR_GET(aiFallbackConfig_, PolicyConfigs::AiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(const PolicyConfigs::AiFallbackConfig & aiFallbackConfig) { DARABONBA_PTR_SET_VALUE(aiFallbackConfig_, aiFallbackConfig) };
      inline PolicyConfigs& setAiFallbackConfig(PolicyConfigs::AiFallbackConfig && aiFallbackConfig) { DARABONBA_PTR_SET_RVALUE(aiFallbackConfig_, aiFallbackConfig) };


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
      shared_ptr<PolicyConfigs::AiFallbackConfig> aiFallbackConfig_ {};
      shared_ptr<bool> enable_ {};
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
      shared_ptr<string> domainId_ {};
      shared_ptr<string> name_ {};
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
    shared_ptr<bool> autoDeploy_ {};
    shared_ptr<string> backendScene_ {};
    shared_ptr<vector<string>> customDomainIds_ {};
    shared_ptr<vector<HttpApiDeployConfig::CustomDomainInfos>> customDomainInfos_ {};
    shared_ptr<string> environmentId_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<GatewayInfo> gatewayInfo_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<HttpApiMockContract> mock_ {};
    shared_ptr<vector<HttpApiDeployConfig::PolicyConfigs>> policyConfigs_ {};
    shared_ptr<Backend> routeBackend_ {};
    shared_ptr<vector<HttpApiDeployConfig::ServiceConfigs>> serviceConfigs_ {};
    shared_ptr<vector<HttpApiDeployConfig::SubDomains>> subDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
