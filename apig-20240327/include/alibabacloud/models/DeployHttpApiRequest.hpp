// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(httpApiConfig, httpApiConfig_);
      DARABONBA_PTR_TO_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(httpApiConfig, httpApiConfig_);
      DARABONBA_PTR_FROM_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    DeployHttpApiRequest() = default ;
    DeployHttpApiRequest(const DeployHttpApiRequest &) = default ;
    DeployHttpApiRequest(DeployHttpApiRequest &&) = default ;
    DeployHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequest() = default ;
    DeployHttpApiRequest& operator=(const DeployHttpApiRequest &) = default ;
    DeployHttpApiRequest& operator=(DeployHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestApiConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestApiConfig& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environment, environment_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(operationIds, operationIds_);
        DARABONBA_PTR_TO_JSON(revisionId, revisionId_);
      };
      friend void from_json(const Darabonba::Json& j, RestApiConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environment, environment_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(operationIds, operationIds_);
        DARABONBA_PTR_FROM_JSON(revisionId, revisionId_);
      };
      RestApiConfig() = default ;
      RestApiConfig(const RestApiConfig &) = default ;
      RestApiConfig(RestApiConfig &&) = default ;
      RestApiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestApiConfig() = default ;
      RestApiConfig& operator=(const RestApiConfig &) = default ;
      RestApiConfig& operator=(RestApiConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Environment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environment& obj) { 
          DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
          DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, Environment& obj) { 
          DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
          DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
        };
        Environment() = default ;
        Environment(const Environment &) = default ;
        Environment(Environment &&) = default ;
        Environment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Environment() = default ;
        Environment& operator=(const Environment &) = default ;
        Environment& operator=(Environment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(match, match_);
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(protocol, protocol_);
            DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
            DARABONBA_PTR_TO_JSON(version, version_);
            DARABONBA_PTR_TO_JSON(weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(match, match_);
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
          virtual bool empty() const override { return this->match_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->serviceId_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
          // match Field Functions 
          bool hasMatch() const { return this->match_ != nullptr;};
          void deleteMatch() { this->match_ = nullptr;};
          inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
          inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
          inline ServiceConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
          inline ServiceConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


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
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline ServiceConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // Configuration of matching conditions related to API deployment.
          shared_ptr<HttpApiBackendMatchConditions> match_ {};
          // Service port, do not provide for dynamic ports.
          shared_ptr<int32_t> port_ {};
          // Service protocol:
          // - HTTP.
          // - HTTPS.
          shared_ptr<string> protocol_ {};
          // Service ID.
          shared_ptr<string> serviceId_ {};
          // Service version.
          shared_ptr<string> version_ {};
          // Weight, range [1,100], valid only in the by-ratio scenario.
          shared_ptr<int32_t> weight_ {};
        };

        virtual bool empty() const override { return this->backendScene_ == nullptr
        && this->customDomainIds_ == nullptr && this->environmentId_ == nullptr && this->serviceConfigs_ == nullptr; };
        // backendScene Field Functions 
        bool hasBackendScene() const { return this->backendScene_ != nullptr;};
        void deleteBackendScene() { this->backendScene_ = nullptr;};
        inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
        inline Environment& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


        // customDomainIds Field Functions 
        bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
        void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
        inline const vector<string> & getCustomDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
        inline vector<string> getCustomDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
        inline Environment& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
        inline Environment& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Environment& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // serviceConfigs Field Functions 
        bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
        void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
        inline const vector<Environment::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Environment::ServiceConfigs>) };
        inline vector<Environment::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Environment::ServiceConfigs>) };
        inline Environment& setServiceConfigs(const vector<Environment::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
        inline Environment& setServiceConfigs(vector<Environment::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


      protected:
        // API publication scenario.
        shared_ptr<string> backendScene_ {};
        // List of user domains.
        shared_ptr<vector<string>> customDomainIds_ {};
        // Environment ID.
        shared_ptr<string> environmentId_ {};
        // Existing service configurations. Only one entry is allowed in a single-service scenario, while multiple entries are allowed in scenarios such as by ratio or by content.
        shared_ptr<vector<Environment::ServiceConfigs>> serviceConfigs_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->environment_ == nullptr && this->gatewayId_ == nullptr && this->operationIds_ == nullptr && this->revisionId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RestApiConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environment Field Functions 
      bool hasEnvironment() const { return this->environment_ != nullptr;};
      void deleteEnvironment() { this->environment_ = nullptr;};
      inline const RestApiConfig::Environment & getEnvironment() const { DARABONBA_PTR_GET_CONST(environment_, RestApiConfig::Environment) };
      inline RestApiConfig::Environment getEnvironment() { DARABONBA_PTR_GET(environment_, RestApiConfig::Environment) };
      inline RestApiConfig& setEnvironment(const RestApiConfig::Environment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
      inline RestApiConfig& setEnvironment(RestApiConfig::Environment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline RestApiConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // operationIds Field Functions 
      bool hasOperationIds() const { return this->operationIds_ != nullptr;};
      void deleteOperationIds() { this->operationIds_ = nullptr;};
      inline const vector<string> & getOperationIds() const { DARABONBA_PTR_GET_CONST(operationIds_, vector<string>) };
      inline vector<string> getOperationIds() { DARABONBA_PTR_GET(operationIds_, vector<string>) };
      inline RestApiConfig& setOperationIds(const vector<string> & operationIds) { DARABONBA_PTR_SET_VALUE(operationIds_, operationIds) };
      inline RestApiConfig& setOperationIds(vector<string> && operationIds) { DARABONBA_PTR_SET_RVALUE(operationIds_, operationIds) };


      // revisionId Field Functions 
      bool hasRevisionId() const { return this->revisionId_ != nullptr;};
      void deleteRevisionId() { this->revisionId_ = nullptr;};
      inline string getRevisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
      inline RestApiConfig& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    protected:
      // Publication description.
      shared_ptr<string> description_ {};
      // Publication environment configuration.
      shared_ptr<RestApiConfig::Environment> environment_ {};
      shared_ptr<string> gatewayId_ {};
      shared_ptr<vector<string>> operationIds_ {};
      // Historical version number. If this field is specified, the publication information will be based on the historical version information.
      shared_ptr<string> revisionId_ {};
    };

    class HttpApiConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpApiConfig& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(routeIds, routeIds_);
      };
      friend void from_json(const Darabonba::Json& j, HttpApiConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(routeIds, routeIds_);
      };
      HttpApiConfig() = default ;
      HttpApiConfig(const HttpApiConfig &) = default ;
      HttpApiConfig(HttpApiConfig &&) = default ;
      HttpApiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpApiConfig() = default ;
      HttpApiConfig& operator=(const HttpApiConfig &) = default ;
      HttpApiConfig& operator=(HttpApiConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->routeIds_ == nullptr; };
      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline HttpApiConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // routeIds Field Functions 
      bool hasRouteIds() const { return this->routeIds_ != nullptr;};
      void deleteRouteIds() { this->routeIds_ = nullptr;};
      inline const vector<string> & getRouteIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<string>) };
      inline vector<string> getRouteIds() { DARABONBA_PTR_GET(routeIds_, vector<string>) };
      inline HttpApiConfig& setRouteIds(const vector<string> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
      inline HttpApiConfig& setRouteIds(vector<string> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


    protected:
      shared_ptr<string> gatewayId_ {};
      shared_ptr<vector<string>> routeIds_ {};
    };

    virtual bool empty() const override { return this->httpApiConfig_ == nullptr
        && this->restApiConfig_ == nullptr && this->routeId_ == nullptr; };
    // httpApiConfig Field Functions 
    bool hasHttpApiConfig() const { return this->httpApiConfig_ != nullptr;};
    void deleteHttpApiConfig() { this->httpApiConfig_ = nullptr;};
    inline const DeployHttpApiRequest::HttpApiConfig & getHttpApiConfig() const { DARABONBA_PTR_GET_CONST(httpApiConfig_, DeployHttpApiRequest::HttpApiConfig) };
    inline DeployHttpApiRequest::HttpApiConfig getHttpApiConfig() { DARABONBA_PTR_GET(httpApiConfig_, DeployHttpApiRequest::HttpApiConfig) };
    inline DeployHttpApiRequest& setHttpApiConfig(const DeployHttpApiRequest::HttpApiConfig & httpApiConfig) { DARABONBA_PTR_SET_VALUE(httpApiConfig_, httpApiConfig) };
    inline DeployHttpApiRequest& setHttpApiConfig(DeployHttpApiRequest::HttpApiConfig && httpApiConfig) { DARABONBA_PTR_SET_RVALUE(httpApiConfig_, httpApiConfig) };


    // restApiConfig Field Functions 
    bool hasRestApiConfig() const { return this->restApiConfig_ != nullptr;};
    void deleteRestApiConfig() { this->restApiConfig_ = nullptr;};
    inline const DeployHttpApiRequest::RestApiConfig & getRestApiConfig() const { DARABONBA_PTR_GET_CONST(restApiConfig_, DeployHttpApiRequest::RestApiConfig) };
    inline DeployHttpApiRequest::RestApiConfig getRestApiConfig() { DARABONBA_PTR_GET(restApiConfig_, DeployHttpApiRequest::RestApiConfig) };
    inline DeployHttpApiRequest& setRestApiConfig(const DeployHttpApiRequest::RestApiConfig & restApiConfig) { DARABONBA_PTR_SET_VALUE(restApiConfig_, restApiConfig) };
    inline DeployHttpApiRequest& setRestApiConfig(DeployHttpApiRequest::RestApiConfig && restApiConfig) { DARABONBA_PTR_SET_RVALUE(restApiConfig_, restApiConfig) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline DeployHttpApiRequest& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    shared_ptr<DeployHttpApiRequest::HttpApiConfig> httpApiConfig_ {};
    // Rest API deployment configuration. Required when deploying an HTTP API as a Rest API.
    shared_ptr<DeployHttpApiRequest::RestApiConfig> restApiConfig_ {};
    // Route ID. This must be provided when publishing the route of an HTTP API.
    shared_ptr<string> routeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
