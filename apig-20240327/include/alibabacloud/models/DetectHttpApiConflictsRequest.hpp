// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTHTTPAPICONFLICTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTHTTPAPICONFLICTSREQUEST_HPP_
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
  class DetectHttpApiConflictsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectHttpApiConflictsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectHttpApiConflictsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    DetectHttpApiConflictsRequest() = default ;
    DetectHttpApiConflictsRequest(const DetectHttpApiConflictsRequest &) = default ;
    DetectHttpApiConflictsRequest(DetectHttpApiConflictsRequest &&) = default ;
    DetectHttpApiConflictsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectHttpApiConflictsRequest() = default ;
    DetectHttpApiConflictsRequest& operator=(const DetectHttpApiConflictsRequest &) = default ;
    DetectHttpApiConflictsRequest& operator=(DetectHttpApiConflictsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestApiConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestApiConfig& obj) { 
        DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
        DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, RestApiConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
        DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
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
        shared_ptr<HttpApiBackendMatchConditions> match_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> serviceId_ {};
        shared_ptr<string> version_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->backendScene_ == nullptr
        && this->customDomainIds_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->serviceConfigs_ == nullptr; };
      // backendScene Field Functions 
      bool hasBackendScene() const { return this->backendScene_ != nullptr;};
      void deleteBackendScene() { this->backendScene_ = nullptr;};
      inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
      inline RestApiConfig& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


      // customDomainIds Field Functions 
      bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
      void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
      inline const vector<string> & getCustomDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
      inline vector<string> getCustomDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
      inline RestApiConfig& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
      inline RestApiConfig& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline RestApiConfig& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline RestApiConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // serviceConfigs Field Functions 
      bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
      void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
      inline const vector<RestApiConfig::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<RestApiConfig::ServiceConfigs>) };
      inline vector<RestApiConfig::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<RestApiConfig::ServiceConfigs>) };
      inline RestApiConfig& setServiceConfigs(const vector<RestApiConfig::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
      inline RestApiConfig& setServiceConfigs(vector<RestApiConfig::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    protected:
      shared_ptr<string> backendScene_ {};
      shared_ptr<vector<string>> customDomainIds_ {};
      shared_ptr<string> environmentId_ {};
      shared_ptr<string> gatewayId_ {};
      shared_ptr<vector<RestApiConfig::ServiceConfigs>> serviceConfigs_ {};
    };

    virtual bool empty() const override { return this->restApiConfig_ == nullptr
        && this->routeId_ == nullptr; };
    // restApiConfig Field Functions 
    bool hasRestApiConfig() const { return this->restApiConfig_ != nullptr;};
    void deleteRestApiConfig() { this->restApiConfig_ = nullptr;};
    inline const DetectHttpApiConflictsRequest::RestApiConfig & getRestApiConfig() const { DARABONBA_PTR_GET_CONST(restApiConfig_, DetectHttpApiConflictsRequest::RestApiConfig) };
    inline DetectHttpApiConflictsRequest::RestApiConfig getRestApiConfig() { DARABONBA_PTR_GET(restApiConfig_, DetectHttpApiConflictsRequest::RestApiConfig) };
    inline DetectHttpApiConflictsRequest& setRestApiConfig(const DetectHttpApiConflictsRequest::RestApiConfig & restApiConfig) { DARABONBA_PTR_SET_VALUE(restApiConfig_, restApiConfig) };
    inline DetectHttpApiConflictsRequest& setRestApiConfig(DetectHttpApiConflictsRequest::RestApiConfig && restApiConfig) { DARABONBA_PTR_SET_RVALUE(restApiConfig_, restApiConfig) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline DetectHttpApiConflictsRequest& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    shared_ptr<DetectHttpApiConflictsRequest::RestApiConfig> restApiConfig_ {};
    shared_ptr<string> routeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
