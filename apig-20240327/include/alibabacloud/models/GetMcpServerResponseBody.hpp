// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/Backend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMcpServerResponseBody() = default ;
    GetMcpServerResponseBody(const GetMcpServerResponseBody &) = default ;
    GetMcpServerResponseBody(GetMcpServerResponseBody &&) = default ;
    GetMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBody() = default ;
    GetMcpServerResponseBody& operator=(const GetMcpServerResponseBody &) = default ;
    GetMcpServerResponseBody& operator=(GetMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(assembledSources, assembledSources_);
        DARABONBA_PTR_TO_JSON(backend, backend_);
        DARABONBA_PTR_TO_JSON(createFromType, createFromType_);
        DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
        DARABONBA_PTR_TO_JSON(domainInfos, domainInfos_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_TO_JSON(mcpServerConfigPluginAttachmentId, mcpServerConfigPluginAttachmentId_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(mcpServerPath, mcpServerPath_);
        DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_TO_JSON(nacosMcpSyncInfo, nacosMcpSyncInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(routeId, routeId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(assembledSources, assembledSources_);
        DARABONBA_PTR_FROM_JSON(backend, backend_);
        DARABONBA_PTR_FROM_JSON(createFromType, createFromType_);
        DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
        DARABONBA_PTR_FROM_JSON(domainInfos, domainInfos_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(grayMcpServerConfigs, grayMcpServerConfigs_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
        DARABONBA_PTR_FROM_JSON(mcpServerConfigPluginAttachmentId, mcpServerConfigPluginAttachmentId_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(mcpServerPath, mcpServerPath_);
        DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
        DARABONBA_PTR_FROM_JSON(nacosMcpSyncInfo, nacosMcpSyncInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(routeId, routeId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NacosMcpSyncInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NacosMcpSyncInfo& obj) { 
          DARABONBA_PTR_TO_JSON(importInstanceId, importInstanceId_);
          DARABONBA_PTR_TO_JSON(importMcpServerId, importMcpServerId_);
          DARABONBA_PTR_TO_JSON(importNamespace, importNamespace_);
        };
        friend void from_json(const Darabonba::Json& j, NacosMcpSyncInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(importInstanceId, importInstanceId_);
          DARABONBA_PTR_FROM_JSON(importMcpServerId, importMcpServerId_);
          DARABONBA_PTR_FROM_JSON(importNamespace, importNamespace_);
        };
        NacosMcpSyncInfo() = default ;
        NacosMcpSyncInfo(const NacosMcpSyncInfo &) = default ;
        NacosMcpSyncInfo(NacosMcpSyncInfo &&) = default ;
        NacosMcpSyncInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NacosMcpSyncInfo() = default ;
        NacosMcpSyncInfo& operator=(const NacosMcpSyncInfo &) = default ;
        NacosMcpSyncInfo& operator=(NacosMcpSyncInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->importInstanceId_ == nullptr
        && this->importMcpServerId_ == nullptr && this->importNamespace_ == nullptr; };
        // importInstanceId Field Functions 
        bool hasImportInstanceId() const { return this->importInstanceId_ != nullptr;};
        void deleteImportInstanceId() { this->importInstanceId_ = nullptr;};
        inline string getImportInstanceId() const { DARABONBA_PTR_GET_DEFAULT(importInstanceId_, "") };
        inline NacosMcpSyncInfo& setImportInstanceId(string importInstanceId) { DARABONBA_PTR_SET_VALUE(importInstanceId_, importInstanceId) };


        // importMcpServerId Field Functions 
        bool hasImportMcpServerId() const { return this->importMcpServerId_ != nullptr;};
        void deleteImportMcpServerId() { this->importMcpServerId_ = nullptr;};
        inline string getImportMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(importMcpServerId_, "") };
        inline NacosMcpSyncInfo& setImportMcpServerId(string importMcpServerId) { DARABONBA_PTR_SET_VALUE(importMcpServerId_, importMcpServerId) };


        // importNamespace Field Functions 
        bool hasImportNamespace() const { return this->importNamespace_ != nullptr;};
        void deleteImportNamespace() { this->importNamespace_ = nullptr;};
        inline string getImportNamespace() const { DARABONBA_PTR_GET_DEFAULT(importNamespace_, "") };
        inline NacosMcpSyncInfo& setImportNamespace(string importNamespace) { DARABONBA_PTR_SET_VALUE(importNamespace_, importNamespace) };


      protected:
        // The Nacos instance.
        shared_ptr<string> importInstanceId_ {};
        // The synchronized MCP server ID.
        shared_ptr<string> importMcpServerId_ {};
        // The Nacos namespace.
        shared_ptr<string> importNamespace_ {};
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

      class DomainInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainInfos& obj) { 
          DARABONBA_PTR_TO_JSON(domainId, domainId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, DomainInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(domainId, domainId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        DomainInfos() = default ;
        DomainInfos(const DomainInfos &) = default ;
        DomainInfos(DomainInfos &&) = default ;
        DomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainInfos() = default ;
        DomainInfos& operator=(const DomainInfos &) = default ;
        DomainInfos& operator=(DomainInfos &&) = default ;
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
        inline DomainInfos& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DomainInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline DomainInfos& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The domain name ID.
        shared_ptr<string> domainId_ {};
        // The domain name.
        shared_ptr<string> name_ {};
        // The protocol. Valid values: HTTP and HTTPS.
        shared_ptr<string> protocol_ {};
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
        // The ID of the MCP server.
        shared_ptr<string> mcpServerId_ {};
        // The name of the MCP server.
        shared_ptr<string> mcpServerName_ {};
        // The list of the MCP tools.
        shared_ptr<vector<string>> tools_ {};
      };

      virtual bool empty() const override { return this->assembledSources_ == nullptr
        && this->backend_ == nullptr && this->createFromType_ == nullptr && this->deployStatus_ == nullptr && this->description_ == nullptr && this->domainIds_ == nullptr
        && this->domainInfos_ == nullptr && this->environmentId_ == nullptr && this->exposedUriPath_ == nullptr && this->gatewayId_ == nullptr && this->grayMcpServerConfigs_ == nullptr
        && this->match_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpServerConfigPluginAttachmentId_ == nullptr && this->mcpServerId_ == nullptr && this->mcpServerPath_ == nullptr
        && this->mcpStatisticsEnable_ == nullptr && this->nacosMcpSyncInfo_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->routeId_ == nullptr
        && this->type_ == nullptr; };
      // assembledSources Field Functions 
      bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
      void deleteAssembledSources() { this->assembledSources_ = nullptr;};
      inline const vector<Data::AssembledSources> & getAssembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<Data::AssembledSources>) };
      inline vector<Data::AssembledSources> getAssembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<Data::AssembledSources>) };
      inline Data& setAssembledSources(const vector<Data::AssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
      inline Data& setAssembledSources(vector<Data::AssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


      // backend Field Functions 
      bool hasBackend() const { return this->backend_ != nullptr;};
      void deleteBackend() { this->backend_ = nullptr;};
      inline const Backend & getBackend() const { DARABONBA_PTR_GET_CONST(backend_, Backend) };
      inline Backend getBackend() { DARABONBA_PTR_GET(backend_, Backend) };
      inline Data& setBackend(const Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
      inline Data& setBackend(Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


      // createFromType Field Functions 
      bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
      void deleteCreateFromType() { this->createFromType_ = nullptr;};
      inline string getCreateFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
      inline Data& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Data& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainIds Field Functions 
      bool hasDomainIds() const { return this->domainIds_ != nullptr;};
      void deleteDomainIds() { this->domainIds_ = nullptr;};
      inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
      inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
      inline Data& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
      inline Data& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


      // domainInfos Field Functions 
      bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
      void deleteDomainInfos() { this->domainInfos_ = nullptr;};
      inline const vector<Data::DomainInfos> & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<Data::DomainInfos>) };
      inline vector<Data::DomainInfos> getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<Data::DomainInfos>) };
      inline Data& setDomainInfos(const vector<Data::DomainInfos> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
      inline Data& setDomainInfos(vector<Data::DomainInfos> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // exposedUriPath Field Functions 
      bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
      void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
      inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
      inline Data& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // grayMcpServerConfigs Field Functions 
      bool hasGrayMcpServerConfigs() const { return this->grayMcpServerConfigs_ != nullptr;};
      void deleteGrayMcpServerConfigs() { this->grayMcpServerConfigs_ = nullptr;};
      inline const vector<Data::GrayMcpServerConfigs> & getGrayMcpServerConfigs() const { DARABONBA_PTR_GET_CONST(grayMcpServerConfigs_, vector<Data::GrayMcpServerConfigs>) };
      inline vector<Data::GrayMcpServerConfigs> getGrayMcpServerConfigs() { DARABONBA_PTR_GET(grayMcpServerConfigs_, vector<Data::GrayMcpServerConfigs>) };
      inline Data& setGrayMcpServerConfigs(const vector<Data::GrayMcpServerConfigs> & grayMcpServerConfigs) { DARABONBA_PTR_SET_VALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };
      inline Data& setGrayMcpServerConfigs(vector<Data::GrayMcpServerConfigs> && grayMcpServerConfigs) { DARABONBA_PTR_SET_RVALUE(grayMcpServerConfigs_, grayMcpServerConfigs) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
      inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
      inline Data& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline Data& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // mcpServerConfig Field Functions 
      bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
      void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
      inline string getMcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
      inline Data& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


      // mcpServerConfigPluginAttachmentId Field Functions 
      bool hasMcpServerConfigPluginAttachmentId() const { return this->mcpServerConfigPluginAttachmentId_ != nullptr;};
      void deleteMcpServerConfigPluginAttachmentId() { this->mcpServerConfigPluginAttachmentId_ = nullptr;};
      inline string getMcpServerConfigPluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfigPluginAttachmentId_, "") };
      inline Data& setMcpServerConfigPluginAttachmentId(string mcpServerConfigPluginAttachmentId) { DARABONBA_PTR_SET_VALUE(mcpServerConfigPluginAttachmentId_, mcpServerConfigPluginAttachmentId) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline Data& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // mcpServerPath Field Functions 
      bool hasMcpServerPath() const { return this->mcpServerPath_ != nullptr;};
      void deleteMcpServerPath() { this->mcpServerPath_ = nullptr;};
      inline string getMcpServerPath() const { DARABONBA_PTR_GET_DEFAULT(mcpServerPath_, "") };
      inline Data& setMcpServerPath(string mcpServerPath) { DARABONBA_PTR_SET_VALUE(mcpServerPath_, mcpServerPath) };


      // mcpStatisticsEnable Field Functions 
      bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
      void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
      inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
      inline Data& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


      // nacosMcpSyncInfo Field Functions 
      bool hasNacosMcpSyncInfo() const { return this->nacosMcpSyncInfo_ != nullptr;};
      void deleteNacosMcpSyncInfo() { this->nacosMcpSyncInfo_ = nullptr;};
      inline const Data::NacosMcpSyncInfo & getNacosMcpSyncInfo() const { DARABONBA_PTR_GET_CONST(nacosMcpSyncInfo_, Data::NacosMcpSyncInfo) };
      inline Data::NacosMcpSyncInfo getNacosMcpSyncInfo() { DARABONBA_PTR_GET(nacosMcpSyncInfo_, Data::NacosMcpSyncInfo) };
      inline Data& setNacosMcpSyncInfo(const Data::NacosMcpSyncInfo & nacosMcpSyncInfo) { DARABONBA_PTR_SET_VALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };
      inline Data& setNacosMcpSyncInfo(Data::NacosMcpSyncInfo && nacosMcpSyncInfo) { DARABONBA_PTR_SET_RVALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // routeId Field Functions 
      bool hasRouteId() const { return this->routeId_ != nullptr;};
      void deleteRouteId() { this->routeId_ = nullptr;};
      inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
      inline Data& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The list of assembly sources. This parameter is required when the type parameter is set to AssemblyMCP.
      shared_ptr<vector<Data::AssembledSources>> assembledSources_ {};
      // The backend service of the route.
      shared_ptr<Backend> backend_ {};
      // Indicates the type of source for MCP server creation. Valid values: 
      // 
      // ApiGatewayHttpToMCP 
      // ApiGatewayMcpHosting 
      // ApiGatewayAssembly 
      // NacosHttpToMCP 
      // NacosMcpHosting
      shared_ptr<string> createFromType_ {};
      // The publishing status of the API in the current environment.
      shared_ptr<string> deployStatus_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The domain name IDs.
      shared_ptr<vector<string>> domainIds_ {};
      // The list of domain information.
      shared_ptr<vector<Data::DomainInfos>> domainInfos_ {};
      // The environment ID.
      shared_ptr<string> environmentId_ {};
      // The exposed URI path. This parameter is required when the protocol parameter is set to SSE or StreamableHTTP, and the type parameter is set to RealMCP.
      shared_ptr<string> exposedUriPath_ {};
      // The gateway instance ID.
      shared_ptr<string> gatewayId_ {};
      shared_ptr<vector<Data::GrayMcpServerConfigs>> grayMcpServerConfigs_ {};
      // The route match rule.
      shared_ptr<HttpRouteMatch> match_ {};
      // The HTTP-to-MCP configurations.
      shared_ptr<string> mcpServerConfig_ {};
      // The attachment ID for the MCP server plug-in configuration.
      shared_ptr<string> mcpServerConfigPluginAttachmentId_ {};
      // The ID of the MCP server.
      shared_ptr<string> mcpServerId_ {};
      // The MCP server access path provided by the gateway.
      shared_ptr<string> mcpServerPath_ {};
      // Indicates whether MCP observability is enabled. Default value: false.
      shared_ptr<bool> mcpStatisticsEnable_ {};
      // The MCP information managed and synchronized by Nacos.
      shared_ptr<Data::NacosMcpSyncInfo> nacosMcpSyncInfo_ {};
      // The name of the MCP server.
      shared_ptr<string> name_ {};
      // The service protocol.
      shared_ptr<string> protocol_ {};
      // The route ID.
      shared_ptr<string> routeId_ {};
      // The type of the MCP server.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMcpServerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMcpServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMcpServerResponseBody::Data) };
    inline GetMcpServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMcpServerResponseBody::Data) };
    inline GetMcpServerResponseBody& setData(const GetMcpServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMcpServerResponseBody& setData(GetMcpServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMcpServerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<GetMcpServerResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
