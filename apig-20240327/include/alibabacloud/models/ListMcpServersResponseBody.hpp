// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Backend.hpp>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListMcpServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMcpServersResponseBody() = default ;
    ListMcpServersResponseBody(const ListMcpServersResponseBody &) = default ;
    ListMcpServersResponseBody(ListMcpServersResponseBody &&) = default ;
    ListMcpServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServersResponseBody() = default ;
    ListMcpServersResponseBody& operator=(const ListMcpServersResponseBody &) = default ;
    ListMcpServersResponseBody& operator=(ListMcpServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(apiId, apiId_);
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
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
          DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
          DARABONBA_PTR_TO_JSON(mcpServerPath, mcpServerPath_);
          DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
          DARABONBA_PTR_TO_JSON(nacosMcpSyncInfo, nacosMcpSyncInfo_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(routeId, routeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(apiId, apiId_);
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
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
          DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
          DARABONBA_PTR_FROM_JSON(mcpServerPath, mcpServerPath_);
          DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
          DARABONBA_PTR_FROM_JSON(nacosMcpSyncInfo, nacosMcpSyncInfo_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(routeId, routeId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
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
          // The list of MCP tools.
          shared_ptr<vector<string>> tools_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->assembledSources_ == nullptr && this->backend_ == nullptr && this->createFromType_ == nullptr && this->deployStatus_ == nullptr && this->description_ == nullptr
        && this->domainIds_ == nullptr && this->domainInfos_ == nullptr && this->environmentId_ == nullptr && this->exposedUriPath_ == nullptr && this->gatewayId_ == nullptr
        && this->match_ == nullptr && this->mcpServerConfig_ == nullptr && this->mcpServerId_ == nullptr && this->mcpServerPath_ == nullptr && this->mcpStatisticsEnable_ == nullptr
        && this->nacosMcpSyncInfo_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->routeId_ == nullptr && this->type_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline Items& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // assembledSources Field Functions 
        bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
        void deleteAssembledSources() { this->assembledSources_ = nullptr;};
        inline const vector<Items::AssembledSources> & getAssembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<Items::AssembledSources>) };
        inline vector<Items::AssembledSources> getAssembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<Items::AssembledSources>) };
        inline Items& setAssembledSources(const vector<Items::AssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
        inline Items& setAssembledSources(vector<Items::AssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


        // backend Field Functions 
        bool hasBackend() const { return this->backend_ != nullptr;};
        void deleteBackend() { this->backend_ = nullptr;};
        inline const Backend & getBackend() const { DARABONBA_PTR_GET_CONST(backend_, Backend) };
        inline Backend getBackend() { DARABONBA_PTR_GET(backend_, Backend) };
        inline Items& setBackend(const Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
        inline Items& setBackend(Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


        // createFromType Field Functions 
        bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
        void deleteCreateFromType() { this->createFromType_ = nullptr;};
        inline string getCreateFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
        inline Items& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


        // deployStatus Field Functions 
        bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
        void deleteDeployStatus() { this->deployStatus_ = nullptr;};
        inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
        inline Items& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainIds Field Functions 
        bool hasDomainIds() const { return this->domainIds_ != nullptr;};
        void deleteDomainIds() { this->domainIds_ = nullptr;};
        inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
        inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
        inline Items& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
        inline Items& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


        // domainInfos Field Functions 
        bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
        void deleteDomainInfos() { this->domainInfos_ = nullptr;};
        inline const vector<HttpApiDomainInfo> & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<HttpApiDomainInfo>) };
        inline vector<HttpApiDomainInfo> getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<HttpApiDomainInfo>) };
        inline Items& setDomainInfos(const vector<HttpApiDomainInfo> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
        inline Items& setDomainInfos(vector<HttpApiDomainInfo> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Items& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // exposedUriPath Field Functions 
        bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
        void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
        inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
        inline Items& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
        inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
        inline Items& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline Items& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // mcpServerConfig Field Functions 
        bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
        void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
        inline string getMcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
        inline Items& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


        // mcpServerId Field Functions 
        bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
        void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
        inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
        inline Items& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


        // mcpServerPath Field Functions 
        bool hasMcpServerPath() const { return this->mcpServerPath_ != nullptr;};
        void deleteMcpServerPath() { this->mcpServerPath_ = nullptr;};
        inline string getMcpServerPath() const { DARABONBA_PTR_GET_DEFAULT(mcpServerPath_, "") };
        inline Items& setMcpServerPath(string mcpServerPath) { DARABONBA_PTR_SET_VALUE(mcpServerPath_, mcpServerPath) };


        // mcpStatisticsEnable Field Functions 
        bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
        void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
        inline bool getMcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
        inline Items& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


        // nacosMcpSyncInfo Field Functions 
        bool hasNacosMcpSyncInfo() const { return this->nacosMcpSyncInfo_ != nullptr;};
        void deleteNacosMcpSyncInfo() { this->nacosMcpSyncInfo_ = nullptr;};
        inline const Items::NacosMcpSyncInfo & getNacosMcpSyncInfo() const { DARABONBA_PTR_GET_CONST(nacosMcpSyncInfo_, Items::NacosMcpSyncInfo) };
        inline Items::NacosMcpSyncInfo getNacosMcpSyncInfo() { DARABONBA_PTR_GET(nacosMcpSyncInfo_, Items::NacosMcpSyncInfo) };
        inline Items& setNacosMcpSyncInfo(const Items::NacosMcpSyncInfo & nacosMcpSyncInfo) { DARABONBA_PTR_SET_VALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };
        inline Items& setNacosMcpSyncInfo(Items::NacosMcpSyncInfo && nacosMcpSyncInfo) { DARABONBA_PTR_SET_RVALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Items& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
        inline Items& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The list of assembly sources. This parameter is required when the type parameter is set to AssemblyMCP.
        shared_ptr<vector<Items::AssembledSources>> assembledSources_ {};
        // The backend service of the route.
        shared_ptr<Backend> backend_ {};
        // The type of source for MCP server creation. Valid values: 
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
        shared_ptr<vector<HttpApiDomainInfo>> domainInfos_ {};
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // The exposed URI path. This parameter is required when the protocol parameter is set to SSE or StreamableHTTP, and the type parameter is set to RealMCP.
        shared_ptr<string> exposedUriPath_ {};
        // The gateway instance ID.
        shared_ptr<string> gatewayId_ {};
        // The route match rule.
        shared_ptr<HttpRouteMatch> match_ {};
        // The HTTP-to-MCP configurations.
        shared_ptr<string> mcpServerConfig_ {};
        // The MCP server ID.
        shared_ptr<string> mcpServerId_ {};
        // The MCP server access path provided by the gateway.
        shared_ptr<string> mcpServerPath_ {};
        // Indicates whether MCP observability is enabled. Default value: false.
        shared_ptr<bool> mcpStatisticsEnable_ {};
        // The MCP information synchronized and managed by Nacos.
        shared_ptr<Items::NacosMcpSyncInfo> nacosMcpSyncInfo_ {};
        // The name of the MCP server.
        shared_ptr<string> name_ {};
        // The service protocol.
        shared_ptr<string> protocol_ {};
        // The ID of the MCP server associated route.
        shared_ptr<string> routeId_ {};
        // The type of the MCP server. Valid values: RealMCP and AssemblyMCP.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The list of MCP servers.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMcpServersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMcpServersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMcpServersResponseBody::Data) };
    inline ListMcpServersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMcpServersResponseBody::Data) };
    inline ListMcpServersResponseBody& setData(const ListMcpServersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMcpServersResponseBody& setData(ListMcpServersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMcpServersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcpServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<ListMcpServersResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
