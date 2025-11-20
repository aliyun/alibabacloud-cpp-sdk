// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMcpServerResponseBodyDataAssembledSources.hpp>
#include <alibabacloud/models/Backend.hpp>
#include <alibabacloud/models/GetMcpServerResponseBodyDataDomainInfos.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/GetMcpServerResponseBodyDataNacosMcpSyncInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetMcpServerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBodyData& obj) { 
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
    GetMcpServerResponseBodyData() = default ;
    GetMcpServerResponseBodyData(const GetMcpServerResponseBodyData &) = default ;
    GetMcpServerResponseBodyData(GetMcpServerResponseBodyData &&) = default ;
    GetMcpServerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBodyData() = default ;
    GetMcpServerResponseBodyData& operator=(const GetMcpServerResponseBodyData &) = default ;
    GetMcpServerResponseBodyData& operator=(GetMcpServerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assembledSources_ == nullptr
        && return this->backend_ == nullptr && return this->createFromType_ == nullptr && return this->deployStatus_ == nullptr && return this->description_ == nullptr && return this->domainIds_ == nullptr
        && return this->domainInfos_ == nullptr && return this->environmentId_ == nullptr && return this->exposedUriPath_ == nullptr && return this->gatewayId_ == nullptr && return this->match_ == nullptr
        && return this->mcpServerConfig_ == nullptr && return this->mcpServerConfigPluginAttachmentId_ == nullptr && return this->mcpServerId_ == nullptr && return this->mcpServerPath_ == nullptr && return this->mcpStatisticsEnable_ == nullptr
        && return this->nacosMcpSyncInfo_ == nullptr && return this->name_ == nullptr && return this->protocol_ == nullptr && return this->routeId_ == nullptr && return this->type_ == nullptr; };
    // assembledSources Field Functions 
    bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
    void deleteAssembledSources() { this->assembledSources_ = nullptr;};
    inline const vector<Models::GetMcpServerResponseBodyDataAssembledSources> & assembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<Models::GetMcpServerResponseBodyDataAssembledSources>) };
    inline vector<Models::GetMcpServerResponseBodyDataAssembledSources> assembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<Models::GetMcpServerResponseBodyDataAssembledSources>) };
    inline GetMcpServerResponseBodyData& setAssembledSources(const vector<Models::GetMcpServerResponseBodyDataAssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
    inline GetMcpServerResponseBodyData& setAssembledSources(vector<Models::GetMcpServerResponseBodyDataAssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline const Models::Backend & backend() const { DARABONBA_PTR_GET_CONST(backend_, Models::Backend) };
    inline Models::Backend backend() { DARABONBA_PTR_GET(backend_, Models::Backend) };
    inline GetMcpServerResponseBodyData& setBackend(const Models::Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
    inline GetMcpServerResponseBodyData& setBackend(Models::Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


    // createFromType Field Functions 
    bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
    void deleteCreateFromType() { this->createFromType_ = nullptr;};
    inline string createFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
    inline GetMcpServerResponseBodyData& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline GetMcpServerResponseBodyData& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMcpServerResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline GetMcpServerResponseBodyData& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline GetMcpServerResponseBodyData& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<Models::GetMcpServerResponseBodyDataDomainInfos> & domainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<Models::GetMcpServerResponseBodyDataDomainInfos>) };
    inline vector<Models::GetMcpServerResponseBodyDataDomainInfos> domainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<Models::GetMcpServerResponseBodyDataDomainInfos>) };
    inline GetMcpServerResponseBodyData& setDomainInfos(const vector<Models::GetMcpServerResponseBodyDataDomainInfos> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline GetMcpServerResponseBodyData& setDomainInfos(vector<Models::GetMcpServerResponseBodyDataDomainInfos> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetMcpServerResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline GetMcpServerResponseBodyData& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetMcpServerResponseBodyData& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpRouteMatch) };
    inline Models::HttpRouteMatch match() { DARABONBA_PTR_GET(match_, Models::HttpRouteMatch) };
    inline GetMcpServerResponseBodyData& setMatch(const Models::HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline GetMcpServerResponseBodyData& setMatch(Models::HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline string mcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
    inline GetMcpServerResponseBodyData& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


    // mcpServerConfigPluginAttachmentId Field Functions 
    bool hasMcpServerConfigPluginAttachmentId() const { return this->mcpServerConfigPluginAttachmentId_ != nullptr;};
    void deleteMcpServerConfigPluginAttachmentId() { this->mcpServerConfigPluginAttachmentId_ = nullptr;};
    inline string mcpServerConfigPluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfigPluginAttachmentId_, "") };
    inline GetMcpServerResponseBodyData& setMcpServerConfigPluginAttachmentId(string mcpServerConfigPluginAttachmentId) { DARABONBA_PTR_SET_VALUE(mcpServerConfigPluginAttachmentId_, mcpServerConfigPluginAttachmentId) };


    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string mcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline GetMcpServerResponseBodyData& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // mcpServerPath Field Functions 
    bool hasMcpServerPath() const { return this->mcpServerPath_ != nullptr;};
    void deleteMcpServerPath() { this->mcpServerPath_ = nullptr;};
    inline string mcpServerPath() const { DARABONBA_PTR_GET_DEFAULT(mcpServerPath_, "") };
    inline GetMcpServerResponseBodyData& setMcpServerPath(string mcpServerPath) { DARABONBA_PTR_SET_VALUE(mcpServerPath_, mcpServerPath) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline GetMcpServerResponseBodyData& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // nacosMcpSyncInfo Field Functions 
    bool hasNacosMcpSyncInfo() const { return this->nacosMcpSyncInfo_ != nullptr;};
    void deleteNacosMcpSyncInfo() { this->nacosMcpSyncInfo_ = nullptr;};
    inline const Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo & nacosMcpSyncInfo() const { DARABONBA_PTR_GET_CONST(nacosMcpSyncInfo_, Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo) };
    inline Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo nacosMcpSyncInfo() { DARABONBA_PTR_GET(nacosMcpSyncInfo_, Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo) };
    inline GetMcpServerResponseBodyData& setNacosMcpSyncInfo(const Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo & nacosMcpSyncInfo) { DARABONBA_PTR_SET_VALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };
    inline GetMcpServerResponseBodyData& setNacosMcpSyncInfo(Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo && nacosMcpSyncInfo) { DARABONBA_PTR_SET_RVALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMcpServerResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetMcpServerResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline GetMcpServerResponseBodyData& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMcpServerResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of assembly sources. This parameter is required when the type parameter is set to AssemblyMCP.
    std::shared_ptr<vector<Models::GetMcpServerResponseBodyDataAssembledSources>> assembledSources_ = nullptr;
    // The backend service of the route.
    std::shared_ptr<Models::Backend> backend_ = nullptr;
    // Indicates the type of source for MCP server creation. Valid values: 
    // 
    // ApiGatewayHttpToMCP 
    // ApiGatewayMcpHosting 
    // ApiGatewayAssembly 
    // NacosHttpToMCP 
    // NacosMcpHosting
    std::shared_ptr<string> createFromType_ = nullptr;
    // The publishing status of the API in the current environment.
    std::shared_ptr<string> deployStatus_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name IDs.
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    // The list of domain information.
    std::shared_ptr<vector<Models::GetMcpServerResponseBodyDataDomainInfos>> domainInfos_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The exposed URI path. This parameter is required when the protocol parameter is set to SSE or StreamableHTTP, and the type parameter is set to RealMCP.
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    // The gateway instance ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The route match rule.
    std::shared_ptr<Models::HttpRouteMatch> match_ = nullptr;
    // The HTTP-to-MCP configurations.
    std::shared_ptr<string> mcpServerConfig_ = nullptr;
    // The attachment ID for the MCP server plug-in configuration.
    std::shared_ptr<string> mcpServerConfigPluginAttachmentId_ = nullptr;
    // The ID of the MCP server.
    std::shared_ptr<string> mcpServerId_ = nullptr;
    // The MCP server access path provided by the gateway.
    std::shared_ptr<string> mcpServerPath_ = nullptr;
    // Indicates whether MCP observability is enabled. Default value: false.
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    // The MCP information managed and synchronized by Nacos.
    std::shared_ptr<Models::GetMcpServerResponseBodyDataNacosMcpSyncInfo> nacosMcpSyncInfo_ = nullptr;
    // The name of the MCP server.
    std::shared_ptr<string> name_ = nullptr;
    // The service protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The route ID.
    std::shared_ptr<string> routeId_ = nullptr;
    // The type of the MCP server.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
