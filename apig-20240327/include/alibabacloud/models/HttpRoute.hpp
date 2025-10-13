// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTE_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Backend.hpp>
#include <vector>
#include <alibabacloud/models/HttpRouteDomainInfos.hpp>
#include <alibabacloud/models/HttpRouteEnvironmentInfo.hpp>
#include <map>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/HttpRouteMcpServerInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRoute& obj) { 
      DARABONBA_PTR_TO_JSON(backend, backend_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(gatewayStatus, gatewayStatus_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpServerInfo, mcpServerInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(backend, backend_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayStatus, gatewayStatus_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpServerInfo, mcpServerInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    HttpRoute() = default ;
    HttpRoute(const HttpRoute &) = default ;
    HttpRoute(HttpRoute &&) = default ;
    HttpRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRoute() = default ;
    HttpRoute& operator=(const HttpRoute &) = default ;
    HttpRoute& operator=(HttpRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backend_ != nullptr
        && this->createTimestamp_ != nullptr && this->deployStatus_ != nullptr && this->description_ != nullptr && this->domainInfos_ != nullptr && this->environmentInfo_ != nullptr
        && this->gatewayStatus_ != nullptr && this->match_ != nullptr && this->mcpServerInfo_ != nullptr && this->name_ != nullptr && this->routeId_ != nullptr
        && this->updateTimestamp_ != nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline const Backend & backend() const { DARABONBA_PTR_GET_CONST(backend_, Backend) };
    inline Backend backend() { DARABONBA_PTR_GET(backend_, Backend) };
    inline HttpRoute& setBackend(const Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
    inline HttpRoute& setBackend(Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline HttpRoute& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline HttpRoute& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpRoute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<HttpRouteDomainInfos> & domainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<HttpRouteDomainInfos>) };
    inline vector<HttpRouteDomainInfos> domainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<HttpRouteDomainInfos>) };
    inline HttpRoute& setDomainInfos(const vector<HttpRouteDomainInfos> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline HttpRoute& setDomainInfos(vector<HttpRouteDomainInfos> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const HttpRouteEnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, HttpRouteEnvironmentInfo) };
    inline HttpRouteEnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, HttpRouteEnvironmentInfo) };
    inline HttpRoute& setEnvironmentInfo(const HttpRouteEnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline HttpRoute& setEnvironmentInfo(HttpRouteEnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // gatewayStatus Field Functions 
    bool hasGatewayStatus() const { return this->gatewayStatus_ != nullptr;};
    void deleteGatewayStatus() { this->gatewayStatus_ = nullptr;};
    inline const map<string, string> & gatewayStatus() const { DARABONBA_PTR_GET_CONST(gatewayStatus_, map<string, string>) };
    inline map<string, string> gatewayStatus() { DARABONBA_PTR_GET(gatewayStatus_, map<string, string>) };
    inline HttpRoute& setGatewayStatus(const map<string, string> & gatewayStatus) { DARABONBA_PTR_SET_VALUE(gatewayStatus_, gatewayStatus) };
    inline HttpRoute& setGatewayStatus(map<string, string> && gatewayStatus) { DARABONBA_PTR_SET_RVALUE(gatewayStatus_, gatewayStatus) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch match() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline HttpRoute& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpRoute& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerInfo Field Functions 
    bool hasMcpServerInfo() const { return this->mcpServerInfo_ != nullptr;};
    void deleteMcpServerInfo() { this->mcpServerInfo_ = nullptr;};
    inline const HttpRouteMcpServerInfo & mcpServerInfo() const { DARABONBA_PTR_GET_CONST(mcpServerInfo_, HttpRouteMcpServerInfo) };
    inline HttpRouteMcpServerInfo mcpServerInfo() { DARABONBA_PTR_GET(mcpServerInfo_, HttpRouteMcpServerInfo) };
    inline HttpRoute& setMcpServerInfo(const HttpRouteMcpServerInfo & mcpServerInfo) { DARABONBA_PTR_SET_VALUE(mcpServerInfo_, mcpServerInfo) };
    inline HttpRoute& setMcpServerInfo(HttpRouteMcpServerInfo && mcpServerInfo) { DARABONBA_PTR_SET_RVALUE(mcpServerInfo_, mcpServerInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpRoute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline HttpRoute& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline HttpRoute& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<Backend> backend_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> deployStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<HttpRouteDomainInfos>> domainInfos_ = nullptr;
    std::shared_ptr<HttpRouteEnvironmentInfo> environmentInfo_ = nullptr;
    std::shared_ptr<map<string, string>> gatewayStatus_ = nullptr;
    std::shared_ptr<HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<HttpRouteMcpServerInfo> mcpServerInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
