// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrafficPolicy.hpp>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataLabelDetails.hpp>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList.hpp>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataVersionDetails.hpp>
#include <alibabacloud/models/GetGatewayServiceDetailResponseBodyDataVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(LabelDetails, labelDetails_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PortTrafficPolicyList, portTrafficPolicyList_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ServiceFQDN, serviceFQDN_);
      DARABONBA_PTR_TO_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VersionDetails, versionDetails_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServerList, dnsServerList_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(LabelDetails, labelDetails_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PortTrafficPolicyList, portTrafficPolicyList_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ServiceFQDN, serviceFQDN_);
      DARABONBA_PTR_FROM_JSON(ServiceNameInRegistry, serviceNameInRegistry_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VersionDetails, versionDetails_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    GetGatewayServiceDetailResponseBodyData() = default ;
    GetGatewayServiceDetailResponseBodyData(const GetGatewayServiceDetailResponseBodyData &) = default ;
    GetGatewayServiceDetailResponseBodyData(GetGatewayServiceDetailResponseBodyData &&) = default ;
    GetGatewayServiceDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyData() = default ;
    GetGatewayServiceDetailResponseBodyData& operator=(const GetGatewayServiceDetailResponseBodyData &) = default ;
    GetGatewayServiceDetailResponseBodyData& operator=(GetGatewayServiceDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsServerList_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayTrafficPolicy_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->groupName_ == nullptr && return this->healthCheck_ == nullptr && return this->healthStatus_ == nullptr && return this->id_ == nullptr && return this->ips_ == nullptr
        && return this->labelDetails_ == nullptr && return this->metaInfo_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->portTrafficPolicyList_ == nullptr
        && return this->ports_ == nullptr && return this->serviceFQDN_ == nullptr && return this->serviceNameInRegistry_ == nullptr && return this->servicePort_ == nullptr && return this->serviceProtocol_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr && return this->versionDetails_ == nullptr && return this->versions_ == nullptr; };
    // dnsServerList Field Functions 
    bool hasDnsServerList() const { return this->dnsServerList_ != nullptr;};
    void deleteDnsServerList() { this->dnsServerList_ = nullptr;};
    inline const vector<string> & dnsServerList() const { DARABONBA_PTR_GET_CONST(dnsServerList_, vector<string>) };
    inline vector<string> dnsServerList() { DARABONBA_PTR_GET(dnsServerList_, vector<string>) };
    inline GetGatewayServiceDetailResponseBodyData& setDnsServerList(const vector<string> & dnsServerList) { DARABONBA_PTR_SET_VALUE(dnsServerList_, dnsServerList) };
    inline GetGatewayServiceDetailResponseBodyData& setDnsServerList(vector<string> && dnsServerList) { DARABONBA_PTR_SET_RVALUE(dnsServerList_, dnsServerList) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayServiceDetailResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayTrafficPolicy Field Functions 
    bool hasGatewayTrafficPolicy() const { return this->gatewayTrafficPolicy_ != nullptr;};
    void deleteGatewayTrafficPolicy() { this->gatewayTrafficPolicy_ = nullptr;};
    inline const Models::TrafficPolicy & gatewayTrafficPolicy() const { DARABONBA_PTR_GET_CONST(gatewayTrafficPolicy_, Models::TrafficPolicy) };
    inline Models::TrafficPolicy gatewayTrafficPolicy() { DARABONBA_PTR_GET(gatewayTrafficPolicy_, Models::TrafficPolicy) };
    inline GetGatewayServiceDetailResponseBodyData& setGatewayTrafficPolicy(const Models::TrafficPolicy & gatewayTrafficPolicy) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };
    inline GetGatewayServiceDetailResponseBodyData& setGatewayTrafficPolicy(Models::TrafficPolicy && gatewayTrafficPolicy) { DARABONBA_PTR_SET_RVALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayServiceDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline GetGatewayServiceDetailResponseBodyData& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline GetGatewayServiceDetailResponseBodyData& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // labelDetails Field Functions 
    bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
    void deleteLabelDetails() { this->labelDetails_ = nullptr;};
    inline const vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails> & labelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails>) };
    inline vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails> labelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails>) };
    inline GetGatewayServiceDetailResponseBodyData& setLabelDetails(const vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
    inline GetGatewayServiceDetailResponseBodyData& setLabelDetails(vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // portTrafficPolicyList Field Functions 
    bool hasPortTrafficPolicyList() const { return this->portTrafficPolicyList_ != nullptr;};
    void deletePortTrafficPolicyList() { this->portTrafficPolicyList_ = nullptr;};
    inline const vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList> & portTrafficPolicyList() const { DARABONBA_PTR_GET_CONST(portTrafficPolicyList_, vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList>) };
    inline vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList> portTrafficPolicyList() { DARABONBA_PTR_GET(portTrafficPolicyList_, vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList>) };
    inline GetGatewayServiceDetailResponseBodyData& setPortTrafficPolicyList(const vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList> & portTrafficPolicyList) { DARABONBA_PTR_SET_VALUE(portTrafficPolicyList_, portTrafficPolicyList) };
    inline GetGatewayServiceDetailResponseBodyData& setPortTrafficPolicyList(vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList> && portTrafficPolicyList) { DARABONBA_PTR_SET_RVALUE(portTrafficPolicyList_, portTrafficPolicyList) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<int32_t> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
    inline vector<int32_t> ports() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
    inline GetGatewayServiceDetailResponseBodyData& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline GetGatewayServiceDetailResponseBodyData& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // serviceFQDN Field Functions 
    bool hasServiceFQDN() const { return this->serviceFQDN_ != nullptr;};
    void deleteServiceFQDN() { this->serviceFQDN_ = nullptr;};
    inline string serviceFQDN() const { DARABONBA_PTR_GET_DEFAULT(serviceFQDN_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setServiceFQDN(string serviceFQDN) { DARABONBA_PTR_SET_VALUE(serviceFQDN_, serviceFQDN) };


    // serviceNameInRegistry Field Functions 
    bool hasServiceNameInRegistry() const { return this->serviceNameInRegistry_ != nullptr;};
    void deleteServiceNameInRegistry() { this->serviceNameInRegistry_ = nullptr;};
    inline string serviceNameInRegistry() const { DARABONBA_PTR_GET_DEFAULT(serviceNameInRegistry_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setServiceNameInRegistry(string serviceNameInRegistry) { DARABONBA_PTR_SET_VALUE(serviceNameInRegistry_, serviceNameInRegistry) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline GetGatewayServiceDetailResponseBodyData& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // serviceProtocol Field Functions 
    bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
    void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
    inline string serviceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetGatewayServiceDetailResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetGatewayServiceDetailResponseBodyData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // versionDetails Field Functions 
    bool hasVersionDetails() const { return this->versionDetails_ != nullptr;};
    void deleteVersionDetails() { this->versionDetails_ = nullptr;};
    inline const vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails> & versionDetails() const { DARABONBA_PTR_GET_CONST(versionDetails_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails>) };
    inline vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails> versionDetails() { DARABONBA_PTR_GET(versionDetails_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails>) };
    inline GetGatewayServiceDetailResponseBodyData& setVersionDetails(const vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails> & versionDetails) { DARABONBA_PTR_SET_VALUE(versionDetails_, versionDetails) };
    inline GetGatewayServiceDetailResponseBodyData& setVersionDetails(vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails> && versionDetails) { DARABONBA_PTR_SET_RVALUE(versionDetails_, versionDetails) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::GetGatewayServiceDetailResponseBodyDataVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersions>) };
    inline vector<Models::GetGatewayServiceDetailResponseBodyDataVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::GetGatewayServiceDetailResponseBodyDataVersions>) };
    inline GetGatewayServiceDetailResponseBodyData& setVersions(const vector<Models::GetGatewayServiceDetailResponseBodyDataVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetGatewayServiceDetailResponseBodyData& setVersions(vector<Models::GetGatewayServiceDetailResponseBodyDataVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    std::shared_ptr<vector<string>> dnsServerList_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The traffic policy of the service.
    std::shared_ptr<Models::TrafficPolicy> gatewayTrafficPolicy_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Indicates whether the health check is enabled.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The status of the health check. Valid values:
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The ID of the service.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IP address of the service.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The details of the tag.
    std::shared_ptr<vector<Models::GetGatewayServiceDetailResponseBodyDataLabelDetails>> labelDetails_ = nullptr;
    // The basic information about the service.
    std::shared_ptr<string> metaInfo_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The traffic policy of service ports.
    std::shared_ptr<vector<Models::GetGatewayServiceDetailResponseBodyDataPortTrafficPolicyList>> portTrafficPolicyList_ = nullptr;
    // The array of service ports.
    std::shared_ptr<vector<int32_t>> ports_ = nullptr;
    std::shared_ptr<string> serviceFQDN_ = nullptr;
    // The name of the service registered with the service registry.
    std::shared_ptr<string> serviceNameInRegistry_ = nullptr;
    std::shared_ptr<int32_t> servicePort_ = nullptr;
    // The protocol of the service.
    std::shared_ptr<string> serviceProtocol_ = nullptr;
    // The ID of the service source.
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    // The source type of the service.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The details of versions.
    std::shared_ptr<vector<Models::GetGatewayServiceDetailResponseBodyDataVersionDetails>> versionDetails_ = nullptr;
    // The service version. This parameter is deprecated.
    std::shared_ptr<vector<Models::GetGatewayServiceDetailResponseBodyDataVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
