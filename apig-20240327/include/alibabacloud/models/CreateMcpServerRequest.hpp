// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(createFromType, createFromType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(createFromType, createFromType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateMcpServerRequest() = default ;
    CreateMcpServerRequest(const CreateMcpServerRequest &) = default ;
    CreateMcpServerRequest(CreateMcpServerRequest &&) = default ;
    CreateMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerRequest() = default ;
    CreateMcpServerRequest& operator=(const CreateMcpServerRequest &) = default ;
    CreateMcpServerRequest& operator=(CreateMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(mcpServerSpec, mcpServerSpec_);
        DARABONBA_PTR_TO_JSON(swaggerConfig, swaggerConfig_);
      };
      friend void from_json(const Darabonba::Json& j, McpServerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(mcpServerSpec, mcpServerSpec_);
        DARABONBA_PTR_FROM_JSON(swaggerConfig, swaggerConfig_);
      };
      McpServerConfig() = default ;
      McpServerConfig(const McpServerConfig &) = default ;
      McpServerConfig(McpServerConfig &&) = default ;
      McpServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServerConfig() = default ;
      McpServerConfig& operator=(const McpServerConfig &) = default ;
      McpServerConfig& operator=(McpServerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mcpServerSpec_ == nullptr
        && this->swaggerConfig_ == nullptr; };
      // mcpServerSpec Field Functions 
      bool hasMcpServerSpec() const { return this->mcpServerSpec_ != nullptr;};
      void deleteMcpServerSpec() { this->mcpServerSpec_ = nullptr;};
      inline string getMcpServerSpec() const { DARABONBA_PTR_GET_DEFAULT(mcpServerSpec_, "") };
      inline McpServerConfig& setMcpServerSpec(string mcpServerSpec) { DARABONBA_PTR_SET_VALUE(mcpServerSpec_, mcpServerSpec) };


      // swaggerConfig Field Functions 
      bool hasSwaggerConfig() const { return this->swaggerConfig_ != nullptr;};
      void deleteSwaggerConfig() { this->swaggerConfig_ = nullptr;};
      inline string getSwaggerConfig() const { DARABONBA_PTR_GET_DEFAULT(swaggerConfig_, "") };
      inline McpServerConfig& setSwaggerConfig(string swaggerConfig) { DARABONBA_PTR_SET_VALUE(swaggerConfig_, swaggerConfig) };


    protected:
      // Converted MCP server spec YAML
      shared_ptr<string> mcpServerSpec_ {};
      // Raw Swagger/OpenAPI document
      shared_ptr<string> swaggerConfig_ {};
    };

    class GrayMcpServerConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrayMcpServerConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(routeId, routeId_);
      };
      friend void from_json(const Darabonba::Json& j, GrayMcpServerConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(routeId, routeId_);
      };
      GrayMcpServerConfigs() = default ;
      GrayMcpServerConfigs(const GrayMcpServerConfigs &) = default ;
      GrayMcpServerConfigs(GrayMcpServerConfigs &&) = default ;
      GrayMcpServerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrayMcpServerConfigs() = default ;
      GrayMcpServerConfigs& operator=(const GrayMcpServerConfigs &) = default ;
      GrayMcpServerConfigs& operator=(GrayMcpServerConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          // Service port number
          shared_ptr<int32_t> port_ {};
          // Service protocol type
          shared_ptr<string> protocol_ {};
          // Service ID
          shared_ptr<string> serviceId_ {};
          // Service version
          shared_ptr<string> version_ {};
          // Service weight for load balancing
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
        // Must be SingleService
        shared_ptr<string> scene_ {};
        // Exactly one service
        shared_ptr<vector<BackendConfig::Services>> services_ {};
      };

      virtual bool empty() const override { return this->backendConfig_ == nullptr
        && this->match_ == nullptr && this->routeId_ == nullptr; };
      // backendConfig Field Functions 
      bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
      void deleteBackendConfig() { this->backendConfig_ = nullptr;};
      inline const GrayMcpServerConfigs::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, GrayMcpServerConfigs::BackendConfig) };
      inline GrayMcpServerConfigs::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, GrayMcpServerConfigs::BackendConfig) };
      inline GrayMcpServerConfigs& setBackendConfig(const GrayMcpServerConfigs::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
      inline GrayMcpServerConfigs& setBackendConfig(GrayMcpServerConfigs::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
      inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
      inline GrayMcpServerConfigs& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline GrayMcpServerConfigs& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // routeId Field Functions 
      bool hasRouteId() const { return this->routeId_ != nullptr;};
      void deleteRouteId() { this->routeId_ = nullptr;};
      inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
      inline GrayMcpServerConfigs& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    protected:
      // Backend configuration for gray route
      shared_ptr<GrayMcpServerConfigs::BackendConfig> backendConfig_ {};
      // Route matching rules
      shared_ptr<HttpRouteMatch> match_ {};
      // Route ID for update operations
      shared_ptr<string> routeId_ {};
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
        // Service port
        shared_ptr<int32_t> port_ {};
        // Service protocol
        shared_ptr<string> protocol_ {};
        // Service ID
        shared_ptr<string> serviceId_ {};
        // Service version
        shared_ptr<string> version_ {};
        // Service weight
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
      // Backend scene type
      shared_ptr<string> scene_ {};
      // List of backend services
      shared_ptr<vector<BackendConfig::Services>> services_ {};
    };

    class AssembledSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssembledSources& obj) { 
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, AssembledSources& obj) { 
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
      };
      AssembledSources() = default ;
      AssembledSources(const AssembledSources &) = default ;
      AssembledSources(AssembledSources &&) = default ;
      AssembledSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssembledSources() = default ;
      AssembledSources& operator=(const AssembledSources &) = default ;
      AssembledSources& operator=(AssembledSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mcpServerId_ == nullptr
        && this->mcpServerName_ == nullptr && this->tools_ == nullptr; };
      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline AssembledSources& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // mcpServerName Field Functions 
      bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
      void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
      inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
      inline AssembledSources& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<string> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<string>) };
      inline vector<string> getTools() { DARABONBA_PTR_GET(tools_, vector<string>) };
      inline AssembledSources& setTools(const vector<string> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline AssembledSources& setTools(vector<string> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      // MCP Server ID
      shared_ptr<string> mcpServerId_ {};
      // Source MCP server name
      shared_ptr<string> mcpServerName_ {};
      // List of tool names to include
      shared_ptr<vector<string>> tools_ {};
    };

    virtual bool empty() const override { return this->assembledSources_ == nullptr
        && this->backendConfig_ == nullptr && this->createFromType_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr && this->exposedUriPath_ == nullptr
        && this->gatewayId_ == nullptr && this->grayMcpServerConfigs_ == nullptr && this->match_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpStatisticsEnable_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr && this->type_ == nullptr; };
    // assembledSources Field Functions 
    bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
    void deleteAssembledSources() { this->assembledSources_ = nullptr;};
    inline const vector<CreateMcpServerRequest::AssembledSources> & getAssembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<CreateMcpServerRequest::AssembledSources>) };
    inline vector<CreateMcpServerRequest::AssembledSources> getAssembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<CreateMcpServerRequest::AssembledSources>) };
    inline CreateMcpServerRequest& setAssembledSources(const vector<CreateMcpServerRequest::AssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
    inline CreateMcpServerRequest& setAssembledSources(vector<CreateMcpServerRequest::AssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const CreateMcpServerRequest::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, CreateMcpServerRequest::BackendConfig) };
    inline CreateMcpServerRequest::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, CreateMcpServerRequest::BackendConfig) };
    inline CreateMcpServerRequest& setBackendConfig(const CreateMcpServerRequest::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline CreateMcpServerRequest& setBackendConfig(CreateMcpServerRequest::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // createFromType Field Functions 
    bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
    void deleteCreateFromType() { this->createFromType_ = nullptr;};
    inline string getCreateFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
    inline CreateMcpServerRequest& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline CreateMcpServerRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline CreateMcpServerRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline CreateMcpServerRequest& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateMcpServerRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // grayMcpServerConfigs Field Functions 
    bool hasGrayMcpServerConfigs() const { return this->grayMcpServerConfigs_ != nullptr;};
    void deleteGrayMcpServerConfigs() { this->grayMcpServerConfigs_ = nullptr;};
    inline const vector<CreateMcpServerRequest::GrayMcpServerConfigs> & getGrayMcpServerConfigs() const { DARABONBA_PTR_GET_CONST(grayMcpServerConfigs_, vector<CreateMcpServerRequest::GrayMcpServerConfigs>) };
    inline vector<CreateMcpServerRequest::GrayMcpServerConfigs> getGrayMcpServerConfigs() { DARABONBA_PTR_GET(grayMcpServerConfigs_, vector<CreateMcpServerRequest::GrayMcpServerConfigs>) };
    inline CreateMcpServerRequest& setGrayMcpServerConfigs(const vector<CreateMcpServerRequest::GrayMcpServerConfigs> & grayMcpServerConfigs) { DARABONBA_PTR_SET_VALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };
    inline CreateMcpServerRequest& setGrayMcpServerConfigs(vector<CreateMcpServerRequest::GrayMcpServerConfigs> && grayMcpServerConfigs) { DARABONBA_PTR_SET_RVALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline CreateMcpServerRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline CreateMcpServerRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline const CreateMcpServerRequest::McpServerConfig & getMcpServerConfig() const { DARABONBA_PTR_GET_CONST(mcpServerConfig_, CreateMcpServerRequest::McpServerConfig) };
    inline CreateMcpServerRequest::McpServerConfig getMcpServerConfig() { DARABONBA_PTR_GET(mcpServerConfig_, CreateMcpServerRequest::McpServerConfig) };
    inline CreateMcpServerRequest& setMcpServerConfig(const CreateMcpServerRequest::McpServerConfig & mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };
    inline CreateMcpServerRequest& setMcpServerConfig(CreateMcpServerRequest::McpServerConfig && mcpServerConfig) { DARABONBA_PTR_SET_RVALUE(mcpServerConfig_, mcpServerConfig) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline CreateMcpServerRequest& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMcpServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateMcpServerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMcpServerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Assembled MCP server sources
    shared_ptr<vector<CreateMcpServerRequest::AssembledSources>> assembledSources_ {};
    // Backend configuration
    shared_ptr<CreateMcpServerRequest::BackendConfig> backendConfig_ {};
    // Creation source type
    shared_ptr<string> createFromType_ {};
    // MCP server description
    shared_ptr<string> description_ {};
    // List of domain IDs for the MCP server
    shared_ptr<vector<string>> domainIds_ {};
    // Exposed URI path for SSE/StreamableHTTP protocols
    shared_ptr<string> exposedUriPath_ {};
    // Gateway ID
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // Gray route configurations
    shared_ptr<vector<CreateMcpServerRequest::GrayMcpServerConfigs>> grayMcpServerConfigs_ {};
    // Route matching conditions
    shared_ptr<HttpRouteMatch> match_ {};
    // MCP server specification
    shared_ptr<CreateMcpServerRequest::McpServerConfig> mcpServerConfig_ {};
    // Enable MCP statistics
    shared_ptr<bool> mcpStatisticsEnable_ {};
    // MCP server name
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // MCP protocol
    shared_ptr<string> protocol_ {};
    // MCP server type
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
