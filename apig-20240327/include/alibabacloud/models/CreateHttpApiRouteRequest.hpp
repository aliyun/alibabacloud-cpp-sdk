// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateHttpApiRouteRequest() = default ;
    CreateHttpApiRouteRequest(const CreateHttpApiRouteRequest &) = default ;
    CreateHttpApiRouteRequest(CreateHttpApiRouteRequest &&) = default ;
    CreateHttpApiRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteRequest() = default ;
    CreateHttpApiRouteRequest& operator=(const CreateHttpApiRouteRequest &) = default ;
    CreateHttpApiRouteRequest& operator=(CreateHttpApiRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpRouteConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpRouteConfig& obj) { 
        DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, McpRouteConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      McpRouteConfig() = default ;
      McpRouteConfig(const McpRouteConfig &) = default ;
      McpRouteConfig(McpRouteConfig &&) = default ;
      McpRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpRouteConfig() = default ;
      McpRouteConfig& operator=(const McpRouteConfig &) = default ;
      McpRouteConfig& operator=(McpRouteConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && this->mcpStatisticsEnable_ == nullptr && this->protocol_ == nullptr; };
      // exposedUriPath Field Functions 
      bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
      void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
      inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
      inline McpRouteConfig& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


      // mcpStatisticsEnable Field Functions 
      bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
      void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
      inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
      inline McpRouteConfig& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline McpRouteConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> exposedUriPath_ {};
      shared_ptr<bool> mcpStatisticsEnable_ {};
      shared_ptr<string> protocol_ {};
    };

    class BackendConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendConfig& obj) { 
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(services, services_);
      };
      friend void from_json(const Darabonba::Json& j, BackendConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(services, services_);
      };
      BackendConfig() = default ;
      BackendConfig(const BackendConfig &) = default ;
      BackendConfig(BackendConfig &&) = default ;
      BackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendConfig() = default ;
      BackendConfig& operator=(const BackendConfig &) = default ;
      BackendConfig& operator=(BackendConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Services : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Services& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Services& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        Services() = default ;
        Services(const Services &) = default ;
        Services(Services &&) = default ;
        Services(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Services() = default ;
        Services& operator=(const Services &) = default ;
        Services& operator=(Services &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr && this->serviceId_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Services& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Services& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Services& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Services& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The service port. If you want to use a dynamic port, do not pass this parameter.
        shared_ptr<int32_t> port_ {};
        // The protocol. Valid values:
        // 
        // *   HTTP
        // *   HTTPS
        shared_ptr<string> protocol_ {};
        // The service ID.
        shared_ptr<string> serviceId_ {};
        // The service version. Pass this parameter for tag-based routing.
        shared_ptr<string> version_ {};
        // The percentage value of traffic.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->scene_ == nullptr
        && this->services_ == nullptr; };
      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline BackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline const vector<BackendConfig::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<BackendConfig::Services>) };
      inline vector<BackendConfig::Services> getServices() { DARABONBA_PTR_GET(services_, vector<BackendConfig::Services>) };
      inline BackendConfig& setServices(const vector<BackendConfig::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
      inline BackendConfig& setServices(vector<BackendConfig::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    protected:
      // The scenario of the backend service.
      // 
      // *   SingleService
      // *   MultiServiceByRatio
      // *   Mock
      // *   Redirect
      shared_ptr<string> scene_ {};
      // The backend services.
      shared_ptr<vector<BackendConfig::Services>> services_ {};
    };

    virtual bool empty() const override { return this->backendConfig_ == nullptr
        && this->deployConfigs_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr && this->environmentId_ == nullptr && this->match_ == nullptr
        && this->mcpRouteConfig_ == nullptr && this->name_ == nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const CreateHttpApiRouteRequest::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, CreateHttpApiRouteRequest::BackendConfig) };
    inline CreateHttpApiRouteRequest::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, CreateHttpApiRouteRequest::BackendConfig) };
    inline CreateHttpApiRouteRequest& setBackendConfig(const CreateHttpApiRouteRequest::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline CreateHttpApiRouteRequest& setBackendConfig(CreateHttpApiRouteRequest::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline CreateHttpApiRouteRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline CreateHttpApiRouteRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHttpApiRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline CreateHttpApiRouteRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline CreateHttpApiRouteRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateHttpApiRouteRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline CreateHttpApiRouteRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline CreateHttpApiRouteRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpRouteConfig Field Functions 
    bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
    void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
    inline const CreateHttpApiRouteRequest::McpRouteConfig & getMcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, CreateHttpApiRouteRequest::McpRouteConfig) };
    inline CreateHttpApiRouteRequest::McpRouteConfig getMcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, CreateHttpApiRouteRequest::McpRouteConfig) };
    inline CreateHttpApiRouteRequest& setMcpRouteConfig(const CreateHttpApiRouteRequest::McpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
    inline CreateHttpApiRouteRequest& setMcpRouteConfig(CreateHttpApiRouteRequest::McpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHttpApiRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The backend service configurations of the route.
    shared_ptr<CreateHttpApiRouteRequest::BackendConfig> backendConfig_ {};
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The route description.
    shared_ptr<string> description_ {};
    // The domain name IDs.
    shared_ptr<vector<string>> domainIds_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // The rule for matching the route.
    shared_ptr<HttpRouteMatch> match_ {};
    shared_ptr<CreateHttpApiRouteRequest::McpRouteConfig> mcpRouteConfig_ {};
    // The route name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
