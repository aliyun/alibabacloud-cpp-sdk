// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultHealthCheckInfo.hpp>
#include <alibabacloud/models/ListGatewayServiceResponseBodyDataResultVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HealehStatus, healehStatus_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckInfo, healthCheckInfo_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ServiceFQDN, serviceFQDN_);
      DARABONBA_PTR_TO_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HealehStatus, healehStatus_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInfo, healthCheckInfo_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ServiceFQDN, serviceFQDN_);
      DARABONBA_PTR_FROM_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListGatewayServiceResponseBodyDataResult() = default ;
    ListGatewayServiceResponseBodyDataResult(const ListGatewayServiceResponseBodyDataResult &) = default ;
    ListGatewayServiceResponseBodyDataResult(ListGatewayServiceResponseBodyDataResult &&) = default ;
    ListGatewayServiceResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResult() = default ;
    ListGatewayServiceResponseBodyDataResult& operator=(const ListGatewayServiceResponseBodyDataResult &) = default ;
    ListGatewayServiceResponseBodyDataResult& operator=(ListGatewayServiceResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsServerList_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayTrafficPolicy_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->groupName_ == nullptr && return this->healehStatus_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckInfo_ == nullptr && return this->healthStatus_ == nullptr
        && return this->id_ == nullptr && return this->ips_ == nullptr && return this->metaInfo_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->ports_ == nullptr && return this->serviceFQDN_ == nullptr && return this->serviceNameInRegistry_ == nullptr && return this->servicePort_ == nullptr && return this->serviceProtocol_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr && return this->unhealthyEndpoints_ == nullptr && return this->versions_ == nullptr; };
    // dnsServerList Field Functions 
    bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
    void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
    inline const vector<string> & dnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
    inline vector<string> dnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
    inline ListGatewayServiceResponseBodyDataResult& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
    inline ListGatewayServiceResponseBodyDataResult& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListGatewayServiceResponseBodyDataResult& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayTrafficPolicy Field Functions 
    bool hasGatewayTrafficPolicy() const { return this->gatewayTrafficPolicy_ != nullptr;};
    void deleteGatewayTrafficPolicy() { this->gatewayTrafficPolicy_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy & gatewayTrafficPolicy() const { DARABONBA_PTR_GET_CONST(gatewayTrafficPolicy_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy) };
    inline Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy gatewayTrafficPolicy() { DARABONBA_PTR_GET(gatewayTrafficPolicy_, Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy) };
    inline ListGatewayServiceResponseBodyDataResult& setGatewayTrafficPolicy(const Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy & gatewayTrafficPolicy) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };
    inline ListGatewayServiceResponseBodyDataResult& setGatewayTrafficPolicy(Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy && gatewayTrafficPolicy) { DARABONBA_PTR_SET_RVALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healehStatus Field Functions 
    bool hasHealehStatus() const { return this->healehStatus_ != nullptr;};
    void deleteHealehStatus() { this->healehStatus_ = nullptr;};
    inline string healehStatus() const { DARABONBA_PTR_GET_DEFAULT(healehStatus_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setHealehStatus(string healehStatus) { DARABONBA_PTR_SET_VALUE(healehStatus_, healehStatus) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline bool healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, false) };
    inline ListGatewayServiceResponseBodyDataResult& setHealthCheck(bool healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckInfo Field Functions 
    bool hasHealthCheckInfo() const { return this->healthCheckInfo_ != nullptr;};
    void deleteHealthCheckInfo() { this->healthCheckInfo_ = nullptr;};
    inline const Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo & healthCheckInfo() const { DARABONBA_PTR_GET_CONST(healthCheckInfo_, Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo) };
    inline Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo healthCheckInfo() { DARABONBA_PTR_GET(healthCheckInfo_, Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo) };
    inline ListGatewayServiceResponseBodyDataResult& setHealthCheckInfo(const Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo & healthCheckInfo) { DARABONBA_PTR_SET_VALUE(healthCheckInfo_, healthCheckInfo) };
    inline ListGatewayServiceResponseBodyDataResult& setHealthCheckInfo(Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo && healthCheckInfo) { DARABONBA_PTR_SET_RVALUE(healthCheckInfo_, healthCheckInfo) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayServiceResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline ListGatewayServiceResponseBodyDataResult& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline ListGatewayServiceResponseBodyDataResult& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<int32_t> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
    inline vector<int32_t> ports() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
    inline ListGatewayServiceResponseBodyDataResult& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline ListGatewayServiceResponseBodyDataResult& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // serviceFQDN Field Functions 
    bool hasServiceFQDN() const { return this->serviceFQDN_ != nullptr;};
    void deleteServiceFQDN() { this->serviceFQDN_ = nullptr;};
    inline string serviceFQDN() const { DARABONBA_PTR_GET_DEFAULT(serviceFQDN_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setServiceFQDN(string serviceFQDN) { DARABONBA_PTR_SET_VALUE(serviceFQDN_, serviceFQDN) };


    // serviceNameInRegistry Field Functions 
    bool hasServiceNameInRegistry() const { return this->serviceNameInRegistry_ != nullptr;};
    void deleteServiceNameInRegistry() { this->serviceNameInRegistry_ = nullptr;};
    inline string serviceNameInRegistry() const { DARABONBA_PTR_GET_DEFAULT(serviceNameInRegistry_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setServiceNameInRegistry(string serviceNameInRegistry) { DARABONBA_PTR_SET_VALUE(serviceNameInRegistry_, serviceNameInRegistry) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int64_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
    inline ListGatewayServiceResponseBodyDataResult& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ListGatewayServiceResponseBodyDataResult& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListGatewayServiceResponseBodyDataResult& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // unhealthyEndpoints Field Functions 
    bool hasUnhealthyEndpoints() const { return this->unhealthyEndpoints_ != nullptr;};
    void deleteUnhealthyEndpoints() { this->unhealthyEndpoints_ = nullptr;};
    inline const vector<string> & unhealthyEndpoints() const { DARABONBA_PTR_GET_CONST(unhealthyEndpoints_, vector<string>) };
    inline vector<string> unhealthyEndpoints() { DARABONBA_PTR_GET(unhealthyEndpoints_, vector<string>) };
    inline ListGatewayServiceResponseBodyDataResult& setUnhealthyEndpoints(const vector<string> & unhealthyEndpoints) { DARABONBA_PTR_SET_VALUE(unhealthyEndpoints_, unhealthyEndpoints) };
    inline ListGatewayServiceResponseBodyDataResult& setUnhealthyEndpoints(vector<string> && unhealthyEndpoints) { DARABONBA_PTR_SET_RVALUE(unhealthyEndpoints_, unhealthyEndpoints) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::ListGatewayServiceResponseBodyDataResultVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::ListGatewayServiceResponseBodyDataResultVersions>) };
    inline vector<Models::ListGatewayServiceResponseBodyDataResultVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::ListGatewayServiceResponseBodyDataResultVersions>) };
    inline ListGatewayServiceResponseBodyDataResult& setVersions(const vector<Models::ListGatewayServiceResponseBodyDataResultVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListGatewayServiceResponseBodyDataResult& setVersions(vector<Models::ListGatewayServiceResponseBodyDataResultVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    std::shared_ptr<vector<string>> dnsServerList_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The traffic management policy.
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultGatewayTrafficPolicy> gatewayTrafficPolicy_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The health status.
    // 
    // *   Health
    // *   Unhealthy
    // *   Unknown
    std::shared_ptr<string> healehStatus_ = nullptr;
    // Indicates whether health checks are performed.
    std::shared_ptr<bool> healthCheck_ = nullptr;
    // The information about health checks.
    std::shared_ptr<Models::ListGatewayServiceResponseBodyDataResultHealthCheckInfo> healthCheckInfo_ = nullptr;
    // The health status.
    // 
    // *   Health
    // *   Unhealthy
    // *   Unknown
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The list of IP addresses.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The metadata or IP addresses of the service.
    std::shared_ptr<string> metaInfo_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The port array.
    std::shared_ptr<vector<int32_t>> ports_ = nullptr;
    std::shared_ptr<string> serviceFQDN_ = nullptr;
    // The name of the service that is registered with the service registry.
    std::shared_ptr<string> serviceNameInRegistry_ = nullptr;
    // The service port number.
    std::shared_ptr<int64_t> servicePort_ = nullptr;
    // The protocol of the service.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The ID of the service source.
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    // The source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The array of endpoints of unhealthy instances.
    std::shared_ptr<vector<string>> unhealthyEndpoints_ = nullptr;
    // The service version.
    std::shared_ptr<vector<Models::ListGatewayServiceResponseBodyDataResultVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
