// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
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
  class UpdateMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(createFromType, createFromType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assembledSources, assembledSources_);
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(createFromType, createFromType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest(UpdateMcpServerRequest &&) = default ;
    UpdateMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest& operator=(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest& operator=(UpdateMcpServerRequest &&) = default ;
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
      shared_ptr<string> mcpServerSpec_ {};
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
          shared_ptr<int32_t> port_ {};
          shared_ptr<string> protocol_ {};
          shared_ptr<string> serviceId_ {};
          shared_ptr<string> version_ {};
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
        shared_ptr<string> scene_ {};
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
      shared_ptr<GrayMcpServerConfigs::BackendConfig> backendConfig_ {};
      shared_ptr<HttpRouteMatch> match_ {};
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
        // The service port (omit for dynamic ports).
        shared_ptr<int32_t> port_ {};
        // The service protocol. Valid values:
        // 
        // *   TCP
        // *   HTTP
        // *   DUBBO
        shared_ptr<string> protocol_ {};
        // The service ID.
        shared_ptr<string> serviceId_ {};
        // The service version.
        shared_ptr<string> version_ {};
        // The traffic weight percentage.
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
      // The backend service scenario.
      shared_ptr<string> scene_ {};
      // The backend services.
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
      // The MCP server ID.
      shared_ptr<string> mcpServerId_ {};
      // The name of the MCP server.
      shared_ptr<string> mcpServerName_ {};
      // The MCP tools.
      shared_ptr<vector<string>> tools_ {};
    };

    virtual bool empty() const override { return this->assembledSources_ == nullptr
        && this->backendConfig_ == nullptr && this->createFromType_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr && this->exposedUriPath_ == nullptr
        && this->grayMcpServerConfigs_ == nullptr && this->match_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpStatisticsEnable_ == nullptr && this->protocol_ == nullptr
        && this->type_ == nullptr; };
    // assembledSources Field Functions 
    bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
    void deleteAssembledSources() { this->assembledSources_ = nullptr;};
    inline const vector<UpdateMcpServerRequest::AssembledSources> & getAssembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<UpdateMcpServerRequest::AssembledSources>) };
    inline vector<UpdateMcpServerRequest::AssembledSources> getAssembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<UpdateMcpServerRequest::AssembledSources>) };
    inline UpdateMcpServerRequest& setAssembledSources(const vector<UpdateMcpServerRequest::AssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
    inline UpdateMcpServerRequest& setAssembledSources(vector<UpdateMcpServerRequest::AssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const UpdateMcpServerRequest::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, UpdateMcpServerRequest::BackendConfig) };
    inline UpdateMcpServerRequest::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, UpdateMcpServerRequest::BackendConfig) };
    inline UpdateMcpServerRequest& setBackendConfig(const UpdateMcpServerRequest::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline UpdateMcpServerRequest& setBackendConfig(UpdateMcpServerRequest::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // createFromType Field Functions 
    bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
    void deleteCreateFromType() { this->createFromType_ = nullptr;};
    inline string getCreateFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
    inline UpdateMcpServerRequest& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateMcpServerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline UpdateMcpServerRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline UpdateMcpServerRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline UpdateMcpServerRequest& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // grayMcpServerConfigs Field Functions 
    bool hasGrayMcpServerConfigs() const { return this->grayMcpServerConfigs_ != nullptr;};
    void deleteGrayMcpServerConfigs() { this->grayMcpServerConfigs_ = nullptr;};
    inline const vector<UpdateMcpServerRequest::GrayMcpServerConfigs> & getGrayMcpServerConfigs() const { DARABONBA_PTR_GET_CONST(grayMcpServerConfigs_, vector<UpdateMcpServerRequest::GrayMcpServerConfigs>) };
    inline vector<UpdateMcpServerRequest::GrayMcpServerConfigs> getGrayMcpServerConfigs() { DARABONBA_PTR_GET(grayMcpServerConfigs_, vector<UpdateMcpServerRequest::GrayMcpServerConfigs>) };
    inline UpdateMcpServerRequest& setGrayMcpServerConfigs(const vector<UpdateMcpServerRequest::GrayMcpServerConfigs> & grayMcpServerConfigs) { DARABONBA_PTR_SET_VALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };
    inline UpdateMcpServerRequest& setGrayMcpServerConfigs(vector<UpdateMcpServerRequest::GrayMcpServerConfigs> && grayMcpServerConfigs) { DARABONBA_PTR_SET_RVALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline UpdateMcpServerRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline UpdateMcpServerRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline const UpdateMcpServerRequest::McpServerConfig & getMcpServerConfig() const { DARABONBA_PTR_GET_CONST(mcpServerConfig_, UpdateMcpServerRequest::McpServerConfig) };
    inline UpdateMcpServerRequest::McpServerConfig getMcpServerConfig() { DARABONBA_PTR_GET(mcpServerConfig_, UpdateMcpServerRequest::McpServerConfig) };
    inline UpdateMcpServerRequest& setMcpServerConfig(const UpdateMcpServerRequest::McpServerConfig & mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };
    inline UpdateMcpServerRequest& setMcpServerConfig(UpdateMcpServerRequest::McpServerConfig && mcpServerConfig) { DARABONBA_PTR_SET_RVALUE(mcpServerConfig_, mcpServerConfig) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline UpdateMcpServerRequest& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateMcpServerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateMcpServerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of assembly sources. This parameter is required when the type parameter is set to AssemblyMCP.
    shared_ptr<vector<UpdateMcpServerRequest::AssembledSources>> assembledSources_ {};
    // The backend service configurations for the route.
    shared_ptr<UpdateMcpServerRequest::BackendConfig> backendConfig_ {};
    // Specifies the type of source for MCP server creation.
    shared_ptr<string> createFromType_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The domain IDs.
    shared_ptr<vector<string>> domainIds_ {};
    // The exposed URI path. This parameter is required when the protocol parameter is set to SSE or StreamableHTTP and the type parameter is set to RealMCP.
    shared_ptr<string> exposedUriPath_ {};
    shared_ptr<vector<UpdateMcpServerRequest::GrayMcpServerConfigs>> grayMcpServerConfigs_ {};
    // The route match rule.
    shared_ptr<HttpRouteMatch> match_ {};
    shared_ptr<UpdateMcpServerRequest::McpServerConfig> mcpServerConfig_ {};
    // Specifies if MCP observability is enabled. Default value: false.
    shared_ptr<bool> mcpStatisticsEnable_ {};
    // The service protocol. Valid values: HTTP, HTTPS, SSE, and StreamableHTTP.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The MCP server type. Valid values: RealMCP and AssemblyMCP.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
