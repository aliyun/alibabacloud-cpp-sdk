// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSERVERSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMcpServersResponseBodyDataItemsAssembledSources.hpp>
#include <alibabacloud/models/Backend.hpp>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListMcpServersResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpServersResponseBodyDataItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListMcpServersResponseBodyDataItems& obj) { 
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
    ListMcpServersResponseBodyDataItems() = default ;
    ListMcpServersResponseBodyDataItems(const ListMcpServersResponseBodyDataItems &) = default ;
    ListMcpServersResponseBodyDataItems(ListMcpServersResponseBodyDataItems &&) = default ;
    ListMcpServersResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpServersResponseBodyDataItems() = default ;
    ListMcpServersResponseBodyDataItems& operator=(const ListMcpServersResponseBodyDataItems &) = default ;
    ListMcpServersResponseBodyDataItems& operator=(ListMcpServersResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assembledSources_ != nullptr
        && this->backend_ != nullptr && this->createFromType_ != nullptr && this->deployStatus_ != nullptr && this->description_ != nullptr && this->domainIds_ != nullptr
        && this->domainInfos_ != nullptr && this->environmentId_ != nullptr && this->exposedUriPath_ != nullptr && this->gatewayId_ != nullptr && this->match_ != nullptr
        && this->mcpServerConfig_ != nullptr && this->mcpServerId_ != nullptr && this->mcpServerPath_ != nullptr && this->mcpStatisticsEnable_ != nullptr && this->nacosMcpSyncInfo_ != nullptr
        && this->name_ != nullptr && this->protocol_ != nullptr && this->routeId_ != nullptr && this->type_ != nullptr; };
    // assembledSources Field Functions 
    bool hasAssembledSources() const { return this->assembledSources_ != nullptr;};
    void deleteAssembledSources() { this->assembledSources_ = nullptr;};
    inline const vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources> & assembledSources() const { DARABONBA_PTR_GET_CONST(assembledSources_, vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources>) };
    inline vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources> assembledSources() { DARABONBA_PTR_GET(assembledSources_, vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources>) };
    inline ListMcpServersResponseBodyDataItems& setAssembledSources(const vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources> & assembledSources) { DARABONBA_PTR_SET_VALUE(assembledSources_, assembledSources) };
    inline ListMcpServersResponseBodyDataItems& setAssembledSources(vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources> && assembledSources) { DARABONBA_PTR_SET_RVALUE(assembledSources_, assembledSources) };


    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline const Models::Backend & backend() const { DARABONBA_PTR_GET_CONST(backend_, Models::Backend) };
    inline Models::Backend backend() { DARABONBA_PTR_GET(backend_, Models::Backend) };
    inline ListMcpServersResponseBodyDataItems& setBackend(const Models::Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
    inline ListMcpServersResponseBodyDataItems& setBackend(Models::Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


    // createFromType Field Functions 
    bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
    void deleteCreateFromType() { this->createFromType_ = nullptr;};
    inline string createFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
    inline ListMcpServersResponseBodyDataItems& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline ListMcpServersResponseBodyDataItems& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMcpServersResponseBodyDataItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline ListMcpServersResponseBodyDataItems& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline ListMcpServersResponseBodyDataItems& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<Models::HttpApiDomainInfo> & domainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<Models::HttpApiDomainInfo>) };
    inline vector<Models::HttpApiDomainInfo> domainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<Models::HttpApiDomainInfo>) };
    inline ListMcpServersResponseBodyDataItems& setDomainInfos(const vector<Models::HttpApiDomainInfo> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline ListMcpServersResponseBodyDataItems& setDomainInfos(vector<Models::HttpApiDomainInfo> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListMcpServersResponseBodyDataItems& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline ListMcpServersResponseBodyDataItems& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListMcpServersResponseBodyDataItems& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpRouteMatch) };
    inline Models::HttpRouteMatch match() { DARABONBA_PTR_GET(match_, Models::HttpRouteMatch) };
    inline ListMcpServersResponseBodyDataItems& setMatch(const Models::HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline ListMcpServersResponseBodyDataItems& setMatch(Models::HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline string mcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
    inline ListMcpServersResponseBodyDataItems& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string mcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline ListMcpServersResponseBodyDataItems& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // mcpServerPath Field Functions 
    bool hasMcpServerPath() const { return this->mcpServerPath_ != nullptr;};
    void deleteMcpServerPath() { this->mcpServerPath_ = nullptr;};
    inline string mcpServerPath() const { DARABONBA_PTR_GET_DEFAULT(mcpServerPath_, "") };
    inline ListMcpServersResponseBodyDataItems& setMcpServerPath(string mcpServerPath) { DARABONBA_PTR_SET_VALUE(mcpServerPath_, mcpServerPath) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline ListMcpServersResponseBodyDataItems& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // nacosMcpSyncInfo Field Functions 
    bool hasNacosMcpSyncInfo() const { return this->nacosMcpSyncInfo_ != nullptr;};
    void deleteNacosMcpSyncInfo() { this->nacosMcpSyncInfo_ = nullptr;};
    inline const Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo & nacosMcpSyncInfo() const { DARABONBA_PTR_GET_CONST(nacosMcpSyncInfo_, Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo) };
    inline Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo nacosMcpSyncInfo() { DARABONBA_PTR_GET(nacosMcpSyncInfo_, Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo) };
    inline ListMcpServersResponseBodyDataItems& setNacosMcpSyncInfo(const Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo & nacosMcpSyncInfo) { DARABONBA_PTR_SET_VALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };
    inline ListMcpServersResponseBodyDataItems& setNacosMcpSyncInfo(Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo && nacosMcpSyncInfo) { DARABONBA_PTR_SET_RVALUE(nacosMcpSyncInfo_, nacosMcpSyncInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMcpServersResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListMcpServersResponseBodyDataItems& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline ListMcpServersResponseBodyDataItems& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMcpServersResponseBodyDataItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::ListMcpServersResponseBodyDataItemsAssembledSources>> assembledSources_ = nullptr;
    std::shared_ptr<Models::Backend> backend_ = nullptr;
    std::shared_ptr<string> createFromType_ = nullptr;
    std::shared_ptr<string> deployStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiDomainInfo>> domainInfos_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<Models::HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<string> mcpServerConfig_ = nullptr;
    // MCP Server ID
    std::shared_ptr<string> mcpServerId_ = nullptr;
    std::shared_ptr<string> mcpServerPath_ = nullptr;
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    std::shared_ptr<Models::ListMcpServersResponseBodyDataItemsNacosMcpSyncInfo> nacosMcpSyncInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
