// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceMeshRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogEnabled, accessLogEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_TO_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_TO_JSON(AccessLogProject, accessLogProject_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_TO_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_TO_JSON(ApiServerLoadBalancerSpec, apiServerLoadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_TO_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_TO_JSON(CertChain, certChain_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(ConfigSourceEnabled, configSourceEnabled_);
      DARABONBA_PTR_TO_JSON(ConfigSourceNacosID, configSourceNacosID_);
      DARABONBA_PTR_TO_JSON(ControlPlaneLogEnabled, controlPlaneLogEnabled_);
      DARABONBA_PTR_TO_JSON(ControlPlaneLogProject, controlPlaneLogProject_);
      DARABONBA_PTR_TO_JSON(CustomizedPrometheus, customizedPrometheus_);
      DARABONBA_PTR_TO_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_TO_JSON(DNSProxyingEnabled, DNSProxyingEnabled_);
      DARABONBA_PTR_TO_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EnableACMG, enableACMG_);
      DARABONBA_PTR_TO_JSON(EnableAmbient, enableAmbient_);
      DARABONBA_PTR_TO_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_TO_JSON(EnableCRHistory, enableCRHistory_);
      DARABONBA_PTR_TO_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_TO_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_TO_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(ExistingCaCert, existingCaCert_);
      DARABONBA_PTR_TO_JSON(ExistingCaKey, existingCaKey_);
      DARABONBA_PTR_TO_JSON(ExistingCaType, existingCaType_);
      DARABONBA_PTR_TO_JSON(ExistingRootCaCert, existingRootCaCert_);
      DARABONBA_PTR_TO_JSON(ExistingRootCaKey, existingRootCaKey_);
      DARABONBA_PTR_TO_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
      DARABONBA_PTR_TO_JSON(GatewayAPIEnabled, gatewayAPIEnabled_);
      DARABONBA_PTR_TO_JSON(GuestCluster, guestCluster_);
      DARABONBA_PTR_TO_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_TO_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_TO_JSON(KialiEnabled, kialiEnabled_);
      DARABONBA_PTR_TO_JSON(LocalityLBConf, localityLBConf_);
      DARABONBA_PTR_TO_JSON(LocalityLoadBalancing, localityLoadBalancing_);
      DARABONBA_PTR_TO_JSON(MSEEnabled, MSEEnabled_);
      DARABONBA_PTR_TO_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_TO_JSON(MultiBufferPollDelay, multiBufferPollDelay_);
      DARABONBA_PTR_TO_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OPALimitCPU, OPALimitCPU_);
      DARABONBA_PTR_TO_JSON(OPALimitMemory, OPALimitMemory_);
      DARABONBA_PTR_TO_JSON(OPALogLevel, OPALogLevel_);
      DARABONBA_PTR_TO_JSON(OPARequestCPU, OPARequestCPU_);
      DARABONBA_PTR_TO_JSON(OPARequestMemory, OPARequestMemory_);
      DARABONBA_PTR_TO_JSON(OpaEnabled, opaEnabled_);
      DARABONBA_PTR_TO_JSON(OpenAgentPolicy, openAgentPolicy_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PilotLoadBalancerSpec, pilotLoadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(PlaygroundScene, playgroundScene_);
      DARABONBA_PTR_TO_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_TO_JSON(ProxyLimitCPU, proxyLimitCPU_);
      DARABONBA_PTR_TO_JSON(ProxyLimitMemory, proxyLimitMemory_);
      DARABONBA_PTR_TO_JSON(ProxyRequestCPU, proxyRequestCPU_);
      DARABONBA_PTR_TO_JSON(ProxyRequestMemory, proxyRequestMemory_);
      DARABONBA_PTR_TO_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_TO_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
      DARABONBA_PTR_TO_JSON(TraceSampling, traceSampling_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
      DARABONBA_PTR_TO_JSON(UseExistingCA, useExistingCA_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WebAssemblyFilterEnabled, webAssemblyFilterEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogEnabled, accessLogEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_FROM_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_FROM_JSON(AccessLogProject, accessLogProject_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_FROM_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_FROM_JSON(ApiServerLoadBalancerSpec, apiServerLoadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_FROM_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_FROM_JSON(CertChain, certChain_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(ConfigSourceEnabled, configSourceEnabled_);
      DARABONBA_PTR_FROM_JSON(ConfigSourceNacosID, configSourceNacosID_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneLogEnabled, controlPlaneLogEnabled_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneLogProject, controlPlaneLogProject_);
      DARABONBA_PTR_FROM_JSON(CustomizedPrometheus, customizedPrometheus_);
      DARABONBA_PTR_FROM_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_FROM_JSON(DNSProxyingEnabled, DNSProxyingEnabled_);
      DARABONBA_PTR_FROM_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EnableACMG, enableACMG_);
      DARABONBA_PTR_FROM_JSON(EnableAmbient, enableAmbient_);
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(EnableCRHistory, enableCRHistory_);
      DARABONBA_PTR_FROM_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_FROM_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_FROM_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExistingCaCert, existingCaCert_);
      DARABONBA_PTR_FROM_JSON(ExistingCaKey, existingCaKey_);
      DARABONBA_PTR_FROM_JSON(ExistingCaType, existingCaType_);
      DARABONBA_PTR_FROM_JSON(ExistingRootCaCert, existingRootCaCert_);
      DARABONBA_PTR_FROM_JSON(ExistingRootCaKey, existingRootCaKey_);
      DARABONBA_PTR_FROM_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
      DARABONBA_PTR_FROM_JSON(GatewayAPIEnabled, gatewayAPIEnabled_);
      DARABONBA_PTR_FROM_JSON(GuestCluster, guestCluster_);
      DARABONBA_PTR_FROM_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_FROM_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_FROM_JSON(KialiEnabled, kialiEnabled_);
      DARABONBA_PTR_FROM_JSON(LocalityLBConf, localityLBConf_);
      DARABONBA_PTR_FROM_JSON(LocalityLoadBalancing, localityLoadBalancing_);
      DARABONBA_PTR_FROM_JSON(MSEEnabled, MSEEnabled_);
      DARABONBA_PTR_FROM_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_FROM_JSON(MultiBufferPollDelay, multiBufferPollDelay_);
      DARABONBA_PTR_FROM_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OPALimitCPU, OPALimitCPU_);
      DARABONBA_PTR_FROM_JSON(OPALimitMemory, OPALimitMemory_);
      DARABONBA_PTR_FROM_JSON(OPALogLevel, OPALogLevel_);
      DARABONBA_PTR_FROM_JSON(OPARequestCPU, OPARequestCPU_);
      DARABONBA_PTR_FROM_JSON(OPARequestMemory, OPARequestMemory_);
      DARABONBA_PTR_FROM_JSON(OpaEnabled, opaEnabled_);
      DARABONBA_PTR_FROM_JSON(OpenAgentPolicy, openAgentPolicy_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PilotLoadBalancerSpec, pilotLoadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(PlaygroundScene, playgroundScene_);
      DARABONBA_PTR_FROM_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_FROM_JSON(ProxyLimitCPU, proxyLimitCPU_);
      DARABONBA_PTR_FROM_JSON(ProxyLimitMemory, proxyLimitMemory_);
      DARABONBA_PTR_FROM_JSON(ProxyRequestCPU, proxyRequestCPU_);
      DARABONBA_PTR_FROM_JSON(ProxyRequestMemory, proxyRequestMemory_);
      DARABONBA_PTR_FROM_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_FROM_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(TraceSampling, traceSampling_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
      DARABONBA_PTR_FROM_JSON(UseExistingCA, useExistingCA_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WebAssemblyFilterEnabled, webAssemblyFilterEnabled_);
    };
    CreateServiceMeshRequest() = default ;
    CreateServiceMeshRequest(const CreateServiceMeshRequest &) = default ;
    CreateServiceMeshRequest(CreateServiceMeshRequest &&) = default ;
    CreateServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceMeshRequest() = default ;
    CreateServiceMeshRequest& operator=(const CreateServiceMeshRequest &) = default ;
    CreateServiceMeshRequest& operator=(CreateServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogEnabled_ == nullptr
        && return this->accessLogFile_ == nullptr && return this->accessLogFormat_ == nullptr && return this->accessLogProject_ == nullptr && return this->accessLogServiceEnabled_ == nullptr && return this->accessLogServiceHost_ == nullptr
        && return this->accessLogServicePort_ == nullptr && return this->apiServerLoadBalancerSpec_ == nullptr && return this->apiServerPublicEip_ == nullptr && return this->auditProject_ == nullptr && return this->autoRenew_ == nullptr
        && return this->autoRenewPeriod_ == nullptr && return this->CRAggregationEnabled_ == nullptr && return this->certChain_ == nullptr && return this->chargeType_ == nullptr && return this->clusterDomain_ == nullptr
        && return this->clusterSpec_ == nullptr && return this->configSourceEnabled_ == nullptr && return this->configSourceNacosID_ == nullptr && return this->controlPlaneLogEnabled_ == nullptr && return this->controlPlaneLogProject_ == nullptr
        && return this->customizedPrometheus_ == nullptr && return this->customizedZipkin_ == nullptr && return this->DNSProxyingEnabled_ == nullptr && return this->dubboFilterEnabled_ == nullptr && return this->edition_ == nullptr
        && return this->enableACMG_ == nullptr && return this->enableAmbient_ == nullptr && return this->enableAudit_ == nullptr && return this->enableCRHistory_ == nullptr && return this->enableSDSServer_ == nullptr
        && return this->excludeIPRanges_ == nullptr && return this->excludeInboundPorts_ == nullptr && return this->excludeOutboundPorts_ == nullptr && return this->existingCaCert_ == nullptr && return this->existingCaKey_ == nullptr
        && return this->existingCaType_ == nullptr && return this->existingRootCaCert_ == nullptr && return this->existingRootCaKey_ == nullptr && return this->filterGatewayClusterConfig_ == nullptr && return this->gatewayAPIEnabled_ == nullptr
        && return this->guestCluster_ == nullptr && return this->includeIPRanges_ == nullptr && return this->istioVersion_ == nullptr && return this->kialiEnabled_ == nullptr && return this->localityLBConf_ == nullptr
        && return this->localityLoadBalancing_ == nullptr && return this->MSEEnabled_ == nullptr && return this->multiBufferEnabled_ == nullptr && return this->multiBufferPollDelay_ == nullptr && return this->mysqlFilterEnabled_ == nullptr
        && return this->name_ == nullptr && return this->OPALimitCPU_ == nullptr && return this->OPALimitMemory_ == nullptr && return this->OPALogLevel_ == nullptr && return this->OPARequestCPU_ == nullptr
        && return this->OPARequestMemory_ == nullptr && return this->opaEnabled_ == nullptr && return this->openAgentPolicy_ == nullptr && return this->period_ == nullptr && return this->pilotLoadBalancerSpec_ == nullptr
        && return this->playgroundScene_ == nullptr && return this->prometheusUrl_ == nullptr && return this->proxyLimitCPU_ == nullptr && return this->proxyLimitMemory_ == nullptr && return this->proxyRequestCPU_ == nullptr
        && return this->proxyRequestMemory_ == nullptr && return this->redisFilterEnabled_ == nullptr && return this->regionId_ == nullptr && return this->tag_ == nullptr && return this->telemetry_ == nullptr
        && return this->thriftFilterEnabled_ == nullptr && return this->traceSampling_ == nullptr && return this->tracing_ == nullptr && return this->useExistingCA_ == nullptr && return this->vSwitches_ == nullptr
        && return this->vpcId_ == nullptr && return this->webAssemblyFilterEnabled_ == nullptr; };
    // accessLogEnabled Field Functions 
    bool hasAccessLogEnabled() const { return this->accessLogEnabled_ != nullptr;};
    void deleteAccessLogEnabled() { this->accessLogEnabled_ = nullptr;};
    inline bool accessLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogEnabled_, false) };
    inline CreateServiceMeshRequest& setAccessLogEnabled(bool accessLogEnabled) { DARABONBA_PTR_SET_VALUE(accessLogEnabled_, accessLogEnabled) };


    // accessLogFile Field Functions 
    bool hasAccessLogFile() const { return this->accessLogFile_ != nullptr;};
    void deleteAccessLogFile() { this->accessLogFile_ = nullptr;};
    inline string accessLogFile() const { DARABONBA_PTR_GET_DEFAULT(accessLogFile_, "") };
    inline CreateServiceMeshRequest& setAccessLogFile(string accessLogFile) { DARABONBA_PTR_SET_VALUE(accessLogFile_, accessLogFile) };


    // accessLogFormat Field Functions 
    bool hasAccessLogFormat() const { return this->accessLogFormat_ != nullptr;};
    void deleteAccessLogFormat() { this->accessLogFormat_ = nullptr;};
    inline string accessLogFormat() const { DARABONBA_PTR_GET_DEFAULT(accessLogFormat_, "") };
    inline CreateServiceMeshRequest& setAccessLogFormat(string accessLogFormat) { DARABONBA_PTR_SET_VALUE(accessLogFormat_, accessLogFormat) };


    // accessLogProject Field Functions 
    bool hasAccessLogProject() const { return this->accessLogProject_ != nullptr;};
    void deleteAccessLogProject() { this->accessLogProject_ = nullptr;};
    inline string accessLogProject() const { DARABONBA_PTR_GET_DEFAULT(accessLogProject_, "") };
    inline CreateServiceMeshRequest& setAccessLogProject(string accessLogProject) { DARABONBA_PTR_SET_VALUE(accessLogProject_, accessLogProject) };


    // accessLogServiceEnabled Field Functions 
    bool hasAccessLogServiceEnabled() const { return this->accessLogServiceEnabled_ != nullptr;};
    void deleteAccessLogServiceEnabled() { this->accessLogServiceEnabled_ = nullptr;};
    inline bool accessLogServiceEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceEnabled_, false) };
    inline CreateServiceMeshRequest& setAccessLogServiceEnabled(bool accessLogServiceEnabled) { DARABONBA_PTR_SET_VALUE(accessLogServiceEnabled_, accessLogServiceEnabled) };


    // accessLogServiceHost Field Functions 
    bool hasAccessLogServiceHost() const { return this->accessLogServiceHost_ != nullptr;};
    void deleteAccessLogServiceHost() { this->accessLogServiceHost_ = nullptr;};
    inline string accessLogServiceHost() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceHost_, "") };
    inline CreateServiceMeshRequest& setAccessLogServiceHost(string accessLogServiceHost) { DARABONBA_PTR_SET_VALUE(accessLogServiceHost_, accessLogServiceHost) };


    // accessLogServicePort Field Functions 
    bool hasAccessLogServicePort() const { return this->accessLogServicePort_ != nullptr;};
    void deleteAccessLogServicePort() { this->accessLogServicePort_ = nullptr;};
    inline int32_t accessLogServicePort() const { DARABONBA_PTR_GET_DEFAULT(accessLogServicePort_, 0) };
    inline CreateServiceMeshRequest& setAccessLogServicePort(int32_t accessLogServicePort) { DARABONBA_PTR_SET_VALUE(accessLogServicePort_, accessLogServicePort) };


    // apiServerLoadBalancerSpec Field Functions 
    bool hasApiServerLoadBalancerSpec() const { return this->apiServerLoadBalancerSpec_ != nullptr;};
    void deleteApiServerLoadBalancerSpec() { this->apiServerLoadBalancerSpec_ = nullptr;};
    inline string apiServerLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(apiServerLoadBalancerSpec_, "") };
    inline CreateServiceMeshRequest& setApiServerLoadBalancerSpec(string apiServerLoadBalancerSpec) { DARABONBA_PTR_SET_VALUE(apiServerLoadBalancerSpec_, apiServerLoadBalancerSpec) };


    // apiServerPublicEip Field Functions 
    bool hasApiServerPublicEip() const { return this->apiServerPublicEip_ != nullptr;};
    void deleteApiServerPublicEip() { this->apiServerPublicEip_ = nullptr;};
    inline bool apiServerPublicEip() const { DARABONBA_PTR_GET_DEFAULT(apiServerPublicEip_, false) };
    inline CreateServiceMeshRequest& setApiServerPublicEip(bool apiServerPublicEip) { DARABONBA_PTR_SET_VALUE(apiServerPublicEip_, apiServerPublicEip) };


    // auditProject Field Functions 
    bool hasAuditProject() const { return this->auditProject_ != nullptr;};
    void deleteAuditProject() { this->auditProject_ = nullptr;};
    inline string auditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
    inline CreateServiceMeshRequest& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateServiceMeshRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateServiceMeshRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // CRAggregationEnabled Field Functions 
    bool hasCRAggregationEnabled() const { return this->CRAggregationEnabled_ != nullptr;};
    void deleteCRAggregationEnabled() { this->CRAggregationEnabled_ = nullptr;};
    inline bool CRAggregationEnabled() const { DARABONBA_PTR_GET_DEFAULT(CRAggregationEnabled_, false) };
    inline CreateServiceMeshRequest& setCRAggregationEnabled(bool CRAggregationEnabled) { DARABONBA_PTR_SET_VALUE(CRAggregationEnabled_, CRAggregationEnabled) };


    // certChain Field Functions 
    bool hasCertChain() const { return this->certChain_ != nullptr;};
    void deleteCertChain() { this->certChain_ = nullptr;};
    inline string certChain() const { DARABONBA_PTR_GET_DEFAULT(certChain_, "") };
    inline CreateServiceMeshRequest& setCertChain(string certChain) { DARABONBA_PTR_SET_VALUE(certChain_, certChain) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateServiceMeshRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline CreateServiceMeshRequest& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline CreateServiceMeshRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // configSourceEnabled Field Functions 
    bool hasConfigSourceEnabled() const { return this->configSourceEnabled_ != nullptr;};
    void deleteConfigSourceEnabled() { this->configSourceEnabled_ = nullptr;};
    inline bool configSourceEnabled() const { DARABONBA_PTR_GET_DEFAULT(configSourceEnabled_, false) };
    inline CreateServiceMeshRequest& setConfigSourceEnabled(bool configSourceEnabled) { DARABONBA_PTR_SET_VALUE(configSourceEnabled_, configSourceEnabled) };


    // configSourceNacosID Field Functions 
    bool hasConfigSourceNacosID() const { return this->configSourceNacosID_ != nullptr;};
    void deleteConfigSourceNacosID() { this->configSourceNacosID_ = nullptr;};
    inline string configSourceNacosID() const { DARABONBA_PTR_GET_DEFAULT(configSourceNacosID_, "") };
    inline CreateServiceMeshRequest& setConfigSourceNacosID(string configSourceNacosID) { DARABONBA_PTR_SET_VALUE(configSourceNacosID_, configSourceNacosID) };


    // controlPlaneLogEnabled Field Functions 
    bool hasControlPlaneLogEnabled() const { return this->controlPlaneLogEnabled_ != nullptr;};
    void deleteControlPlaneLogEnabled() { this->controlPlaneLogEnabled_ = nullptr;};
    inline bool controlPlaneLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(controlPlaneLogEnabled_, false) };
    inline CreateServiceMeshRequest& setControlPlaneLogEnabled(bool controlPlaneLogEnabled) { DARABONBA_PTR_SET_VALUE(controlPlaneLogEnabled_, controlPlaneLogEnabled) };


    // controlPlaneLogProject Field Functions 
    bool hasControlPlaneLogProject() const { return this->controlPlaneLogProject_ != nullptr;};
    void deleteControlPlaneLogProject() { this->controlPlaneLogProject_ = nullptr;};
    inline string controlPlaneLogProject() const { DARABONBA_PTR_GET_DEFAULT(controlPlaneLogProject_, "") };
    inline CreateServiceMeshRequest& setControlPlaneLogProject(string controlPlaneLogProject) { DARABONBA_PTR_SET_VALUE(controlPlaneLogProject_, controlPlaneLogProject) };


    // customizedPrometheus Field Functions 
    bool hasCustomizedPrometheus() const { return this->customizedPrometheus_ != nullptr;};
    void deleteCustomizedPrometheus() { this->customizedPrometheus_ = nullptr;};
    inline bool customizedPrometheus() const { DARABONBA_PTR_GET_DEFAULT(customizedPrometheus_, false) };
    inline CreateServiceMeshRequest& setCustomizedPrometheus(bool customizedPrometheus) { DARABONBA_PTR_SET_VALUE(customizedPrometheus_, customizedPrometheus) };


    // customizedZipkin Field Functions 
    bool hasCustomizedZipkin() const { return this->customizedZipkin_ != nullptr;};
    void deleteCustomizedZipkin() { this->customizedZipkin_ = nullptr;};
    inline bool customizedZipkin() const { DARABONBA_PTR_GET_DEFAULT(customizedZipkin_, false) };
    inline CreateServiceMeshRequest& setCustomizedZipkin(bool customizedZipkin) { DARABONBA_PTR_SET_VALUE(customizedZipkin_, customizedZipkin) };


    // DNSProxyingEnabled Field Functions 
    bool hasDNSProxyingEnabled() const { return this->DNSProxyingEnabled_ != nullptr;};
    void deleteDNSProxyingEnabled() { this->DNSProxyingEnabled_ = nullptr;};
    inline bool DNSProxyingEnabled() const { DARABONBA_PTR_GET_DEFAULT(DNSProxyingEnabled_, false) };
    inline CreateServiceMeshRequest& setDNSProxyingEnabled(bool DNSProxyingEnabled) { DARABONBA_PTR_SET_VALUE(DNSProxyingEnabled_, DNSProxyingEnabled) };


    // dubboFilterEnabled Field Functions 
    bool hasDubboFilterEnabled() const { return this->dubboFilterEnabled_ != nullptr;};
    void deleteDubboFilterEnabled() { this->dubboFilterEnabled_ = nullptr;};
    inline bool dubboFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(dubboFilterEnabled_, false) };
    inline CreateServiceMeshRequest& setDubboFilterEnabled(bool dubboFilterEnabled) { DARABONBA_PTR_SET_VALUE(dubboFilterEnabled_, dubboFilterEnabled) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateServiceMeshRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enableACMG Field Functions 
    bool hasEnableACMG() const { return this->enableACMG_ != nullptr;};
    void deleteEnableACMG() { this->enableACMG_ = nullptr;};
    inline bool enableACMG() const { DARABONBA_PTR_GET_DEFAULT(enableACMG_, false) };
    inline CreateServiceMeshRequest& setEnableACMG(bool enableACMG) { DARABONBA_PTR_SET_VALUE(enableACMG_, enableACMG) };


    // enableAmbient Field Functions 
    bool hasEnableAmbient() const { return this->enableAmbient_ != nullptr;};
    void deleteEnableAmbient() { this->enableAmbient_ = nullptr;};
    inline bool enableAmbient() const { DARABONBA_PTR_GET_DEFAULT(enableAmbient_, false) };
    inline CreateServiceMeshRequest& setEnableAmbient(bool enableAmbient) { DARABONBA_PTR_SET_VALUE(enableAmbient_, enableAmbient) };


    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool enableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline CreateServiceMeshRequest& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


    // enableCRHistory Field Functions 
    bool hasEnableCRHistory() const { return this->enableCRHistory_ != nullptr;};
    void deleteEnableCRHistory() { this->enableCRHistory_ = nullptr;};
    inline bool enableCRHistory() const { DARABONBA_PTR_GET_DEFAULT(enableCRHistory_, false) };
    inline CreateServiceMeshRequest& setEnableCRHistory(bool enableCRHistory) { DARABONBA_PTR_SET_VALUE(enableCRHistory_, enableCRHistory) };


    // enableSDSServer Field Functions 
    bool hasEnableSDSServer() const { return this->enableSDSServer_ != nullptr;};
    void deleteEnableSDSServer() { this->enableSDSServer_ = nullptr;};
    inline bool enableSDSServer() const { DARABONBA_PTR_GET_DEFAULT(enableSDSServer_, false) };
    inline CreateServiceMeshRequest& setEnableSDSServer(bool enableSDSServer) { DARABONBA_PTR_SET_VALUE(enableSDSServer_, enableSDSServer) };


    // excludeIPRanges Field Functions 
    bool hasExcludeIPRanges() const { return this->excludeIPRanges_ != nullptr;};
    void deleteExcludeIPRanges() { this->excludeIPRanges_ = nullptr;};
    inline string excludeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(excludeIPRanges_, "") };
    inline CreateServiceMeshRequest& setExcludeIPRanges(string excludeIPRanges) { DARABONBA_PTR_SET_VALUE(excludeIPRanges_, excludeIPRanges) };


    // excludeInboundPorts Field Functions 
    bool hasExcludeInboundPorts() const { return this->excludeInboundPorts_ != nullptr;};
    void deleteExcludeInboundPorts() { this->excludeInboundPorts_ = nullptr;};
    inline string excludeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeInboundPorts_, "") };
    inline CreateServiceMeshRequest& setExcludeInboundPorts(string excludeInboundPorts) { DARABONBA_PTR_SET_VALUE(excludeInboundPorts_, excludeInboundPorts) };


    // excludeOutboundPorts Field Functions 
    bool hasExcludeOutboundPorts() const { return this->excludeOutboundPorts_ != nullptr;};
    void deleteExcludeOutboundPorts() { this->excludeOutboundPorts_ = nullptr;};
    inline string excludeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundPorts_, "") };
    inline CreateServiceMeshRequest& setExcludeOutboundPorts(string excludeOutboundPorts) { DARABONBA_PTR_SET_VALUE(excludeOutboundPorts_, excludeOutboundPorts) };


    // existingCaCert Field Functions 
    bool hasExistingCaCert() const { return this->existingCaCert_ != nullptr;};
    void deleteExistingCaCert() { this->existingCaCert_ = nullptr;};
    inline string existingCaCert() const { DARABONBA_PTR_GET_DEFAULT(existingCaCert_, "") };
    inline CreateServiceMeshRequest& setExistingCaCert(string existingCaCert) { DARABONBA_PTR_SET_VALUE(existingCaCert_, existingCaCert) };


    // existingCaKey Field Functions 
    bool hasExistingCaKey() const { return this->existingCaKey_ != nullptr;};
    void deleteExistingCaKey() { this->existingCaKey_ = nullptr;};
    inline string existingCaKey() const { DARABONBA_PTR_GET_DEFAULT(existingCaKey_, "") };
    inline CreateServiceMeshRequest& setExistingCaKey(string existingCaKey) { DARABONBA_PTR_SET_VALUE(existingCaKey_, existingCaKey) };


    // existingCaType Field Functions 
    bool hasExistingCaType() const { return this->existingCaType_ != nullptr;};
    void deleteExistingCaType() { this->existingCaType_ = nullptr;};
    inline string existingCaType() const { DARABONBA_PTR_GET_DEFAULT(existingCaType_, "") };
    inline CreateServiceMeshRequest& setExistingCaType(string existingCaType) { DARABONBA_PTR_SET_VALUE(existingCaType_, existingCaType) };


    // existingRootCaCert Field Functions 
    bool hasExistingRootCaCert() const { return this->existingRootCaCert_ != nullptr;};
    void deleteExistingRootCaCert() { this->existingRootCaCert_ = nullptr;};
    inline string existingRootCaCert() const { DARABONBA_PTR_GET_DEFAULT(existingRootCaCert_, "") };
    inline CreateServiceMeshRequest& setExistingRootCaCert(string existingRootCaCert) { DARABONBA_PTR_SET_VALUE(existingRootCaCert_, existingRootCaCert) };


    // existingRootCaKey Field Functions 
    bool hasExistingRootCaKey() const { return this->existingRootCaKey_ != nullptr;};
    void deleteExistingRootCaKey() { this->existingRootCaKey_ = nullptr;};
    inline string existingRootCaKey() const { DARABONBA_PTR_GET_DEFAULT(existingRootCaKey_, "") };
    inline CreateServiceMeshRequest& setExistingRootCaKey(string existingRootCaKey) { DARABONBA_PTR_SET_VALUE(existingRootCaKey_, existingRootCaKey) };


    // filterGatewayClusterConfig Field Functions 
    bool hasFilterGatewayClusterConfig() const { return this->filterGatewayClusterConfig_ != nullptr;};
    void deleteFilterGatewayClusterConfig() { this->filterGatewayClusterConfig_ = nullptr;};
    inline bool filterGatewayClusterConfig() const { DARABONBA_PTR_GET_DEFAULT(filterGatewayClusterConfig_, false) };
    inline CreateServiceMeshRequest& setFilterGatewayClusterConfig(bool filterGatewayClusterConfig) { DARABONBA_PTR_SET_VALUE(filterGatewayClusterConfig_, filterGatewayClusterConfig) };


    // gatewayAPIEnabled Field Functions 
    bool hasGatewayAPIEnabled() const { return this->gatewayAPIEnabled_ != nullptr;};
    void deleteGatewayAPIEnabled() { this->gatewayAPIEnabled_ = nullptr;};
    inline bool gatewayAPIEnabled() const { DARABONBA_PTR_GET_DEFAULT(gatewayAPIEnabled_, false) };
    inline CreateServiceMeshRequest& setGatewayAPIEnabled(bool gatewayAPIEnabled) { DARABONBA_PTR_SET_VALUE(gatewayAPIEnabled_, gatewayAPIEnabled) };


    // guestCluster Field Functions 
    bool hasGuestCluster() const { return this->guestCluster_ != nullptr;};
    void deleteGuestCluster() { this->guestCluster_ = nullptr;};
    inline string guestCluster() const { DARABONBA_PTR_GET_DEFAULT(guestCluster_, "") };
    inline CreateServiceMeshRequest& setGuestCluster(string guestCluster) { DARABONBA_PTR_SET_VALUE(guestCluster_, guestCluster) };


    // includeIPRanges Field Functions 
    bool hasIncludeIPRanges() const { return this->includeIPRanges_ != nullptr;};
    void deleteIncludeIPRanges() { this->includeIPRanges_ = nullptr;};
    inline string includeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(includeIPRanges_, "") };
    inline CreateServiceMeshRequest& setIncludeIPRanges(string includeIPRanges) { DARABONBA_PTR_SET_VALUE(includeIPRanges_, includeIPRanges) };


    // istioVersion Field Functions 
    bool hasIstioVersion() const { return this->istioVersion_ != nullptr;};
    void deleteIstioVersion() { this->istioVersion_ = nullptr;};
    inline string istioVersion() const { DARABONBA_PTR_GET_DEFAULT(istioVersion_, "") };
    inline CreateServiceMeshRequest& setIstioVersion(string istioVersion) { DARABONBA_PTR_SET_VALUE(istioVersion_, istioVersion) };


    // kialiEnabled Field Functions 
    bool hasKialiEnabled() const { return this->kialiEnabled_ != nullptr;};
    void deleteKialiEnabled() { this->kialiEnabled_ = nullptr;};
    inline bool kialiEnabled() const { DARABONBA_PTR_GET_DEFAULT(kialiEnabled_, false) };
    inline CreateServiceMeshRequest& setKialiEnabled(bool kialiEnabled) { DARABONBA_PTR_SET_VALUE(kialiEnabled_, kialiEnabled) };


    // localityLBConf Field Functions 
    bool hasLocalityLBConf() const { return this->localityLBConf_ != nullptr;};
    void deleteLocalityLBConf() { this->localityLBConf_ = nullptr;};
    inline string localityLBConf() const { DARABONBA_PTR_GET_DEFAULT(localityLBConf_, "") };
    inline CreateServiceMeshRequest& setLocalityLBConf(string localityLBConf) { DARABONBA_PTR_SET_VALUE(localityLBConf_, localityLBConf) };


    // localityLoadBalancing Field Functions 
    bool hasLocalityLoadBalancing() const { return this->localityLoadBalancing_ != nullptr;};
    void deleteLocalityLoadBalancing() { this->localityLoadBalancing_ = nullptr;};
    inline bool localityLoadBalancing() const { DARABONBA_PTR_GET_DEFAULT(localityLoadBalancing_, false) };
    inline CreateServiceMeshRequest& setLocalityLoadBalancing(bool localityLoadBalancing) { DARABONBA_PTR_SET_VALUE(localityLoadBalancing_, localityLoadBalancing) };


    // MSEEnabled Field Functions 
    bool hasMSEEnabled() const { return this->MSEEnabled_ != nullptr;};
    void deleteMSEEnabled() { this->MSEEnabled_ = nullptr;};
    inline bool MSEEnabled() const { DARABONBA_PTR_GET_DEFAULT(MSEEnabled_, false) };
    inline CreateServiceMeshRequest& setMSEEnabled(bool MSEEnabled) { DARABONBA_PTR_SET_VALUE(MSEEnabled_, MSEEnabled) };


    // multiBufferEnabled Field Functions 
    bool hasMultiBufferEnabled() const { return this->multiBufferEnabled_ != nullptr;};
    void deleteMultiBufferEnabled() { this->multiBufferEnabled_ = nullptr;};
    inline bool multiBufferEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiBufferEnabled_, false) };
    inline CreateServiceMeshRequest& setMultiBufferEnabled(bool multiBufferEnabled) { DARABONBA_PTR_SET_VALUE(multiBufferEnabled_, multiBufferEnabled) };


    // multiBufferPollDelay Field Functions 
    bool hasMultiBufferPollDelay() const { return this->multiBufferPollDelay_ != nullptr;};
    void deleteMultiBufferPollDelay() { this->multiBufferPollDelay_ = nullptr;};
    inline string multiBufferPollDelay() const { DARABONBA_PTR_GET_DEFAULT(multiBufferPollDelay_, "") };
    inline CreateServiceMeshRequest& setMultiBufferPollDelay(string multiBufferPollDelay) { DARABONBA_PTR_SET_VALUE(multiBufferPollDelay_, multiBufferPollDelay) };


    // mysqlFilterEnabled Field Functions 
    bool hasMysqlFilterEnabled() const { return this->mysqlFilterEnabled_ != nullptr;};
    void deleteMysqlFilterEnabled() { this->mysqlFilterEnabled_ = nullptr;};
    inline bool mysqlFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(mysqlFilterEnabled_, false) };
    inline CreateServiceMeshRequest& setMysqlFilterEnabled(bool mysqlFilterEnabled) { DARABONBA_PTR_SET_VALUE(mysqlFilterEnabled_, mysqlFilterEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateServiceMeshRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // OPALimitCPU Field Functions 
    bool hasOPALimitCPU() const { return this->OPALimitCPU_ != nullptr;};
    void deleteOPALimitCPU() { this->OPALimitCPU_ = nullptr;};
    inline string OPALimitCPU() const { DARABONBA_PTR_GET_DEFAULT(OPALimitCPU_, "") };
    inline CreateServiceMeshRequest& setOPALimitCPU(string OPALimitCPU) { DARABONBA_PTR_SET_VALUE(OPALimitCPU_, OPALimitCPU) };


    // OPALimitMemory Field Functions 
    bool hasOPALimitMemory() const { return this->OPALimitMemory_ != nullptr;};
    void deleteOPALimitMemory() { this->OPALimitMemory_ = nullptr;};
    inline string OPALimitMemory() const { DARABONBA_PTR_GET_DEFAULT(OPALimitMemory_, "") };
    inline CreateServiceMeshRequest& setOPALimitMemory(string OPALimitMemory) { DARABONBA_PTR_SET_VALUE(OPALimitMemory_, OPALimitMemory) };


    // OPALogLevel Field Functions 
    bool hasOPALogLevel() const { return this->OPALogLevel_ != nullptr;};
    void deleteOPALogLevel() { this->OPALogLevel_ = nullptr;};
    inline string OPALogLevel() const { DARABONBA_PTR_GET_DEFAULT(OPALogLevel_, "") };
    inline CreateServiceMeshRequest& setOPALogLevel(string OPALogLevel) { DARABONBA_PTR_SET_VALUE(OPALogLevel_, OPALogLevel) };


    // OPARequestCPU Field Functions 
    bool hasOPARequestCPU() const { return this->OPARequestCPU_ != nullptr;};
    void deleteOPARequestCPU() { this->OPARequestCPU_ = nullptr;};
    inline string OPARequestCPU() const { DARABONBA_PTR_GET_DEFAULT(OPARequestCPU_, "") };
    inline CreateServiceMeshRequest& setOPARequestCPU(string OPARequestCPU) { DARABONBA_PTR_SET_VALUE(OPARequestCPU_, OPARequestCPU) };


    // OPARequestMemory Field Functions 
    bool hasOPARequestMemory() const { return this->OPARequestMemory_ != nullptr;};
    void deleteOPARequestMemory() { this->OPARequestMemory_ = nullptr;};
    inline string OPARequestMemory() const { DARABONBA_PTR_GET_DEFAULT(OPARequestMemory_, "") };
    inline CreateServiceMeshRequest& setOPARequestMemory(string OPARequestMemory) { DARABONBA_PTR_SET_VALUE(OPARequestMemory_, OPARequestMemory) };


    // opaEnabled Field Functions 
    bool hasOpaEnabled() const { return this->opaEnabled_ != nullptr;};
    void deleteOpaEnabled() { this->opaEnabled_ = nullptr;};
    inline bool opaEnabled() const { DARABONBA_PTR_GET_DEFAULT(opaEnabled_, false) };
    inline CreateServiceMeshRequest& setOpaEnabled(bool opaEnabled) { DARABONBA_PTR_SET_VALUE(opaEnabled_, opaEnabled) };


    // openAgentPolicy Field Functions 
    bool hasOpenAgentPolicy() const { return this->openAgentPolicy_ != nullptr;};
    void deleteOpenAgentPolicy() { this->openAgentPolicy_ = nullptr;};
    inline bool openAgentPolicy() const { DARABONBA_PTR_GET_DEFAULT(openAgentPolicy_, false) };
    inline CreateServiceMeshRequest& setOpenAgentPolicy(bool openAgentPolicy) { DARABONBA_PTR_SET_VALUE(openAgentPolicy_, openAgentPolicy) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateServiceMeshRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pilotLoadBalancerSpec Field Functions 
    bool hasPilotLoadBalancerSpec() const { return this->pilotLoadBalancerSpec_ != nullptr;};
    void deletePilotLoadBalancerSpec() { this->pilotLoadBalancerSpec_ = nullptr;};
    inline string pilotLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(pilotLoadBalancerSpec_, "") };
    inline CreateServiceMeshRequest& setPilotLoadBalancerSpec(string pilotLoadBalancerSpec) { DARABONBA_PTR_SET_VALUE(pilotLoadBalancerSpec_, pilotLoadBalancerSpec) };


    // playgroundScene Field Functions 
    bool hasPlaygroundScene() const { return this->playgroundScene_ != nullptr;};
    void deletePlaygroundScene() { this->playgroundScene_ = nullptr;};
    inline string playgroundScene() const { DARABONBA_PTR_GET_DEFAULT(playgroundScene_, "") };
    inline CreateServiceMeshRequest& setPlaygroundScene(string playgroundScene) { DARABONBA_PTR_SET_VALUE(playgroundScene_, playgroundScene) };


    // prometheusUrl Field Functions 
    bool hasPrometheusUrl() const { return this->prometheusUrl_ != nullptr;};
    void deletePrometheusUrl() { this->prometheusUrl_ = nullptr;};
    inline string prometheusUrl() const { DARABONBA_PTR_GET_DEFAULT(prometheusUrl_, "") };
    inline CreateServiceMeshRequest& setPrometheusUrl(string prometheusUrl) { DARABONBA_PTR_SET_VALUE(prometheusUrl_, prometheusUrl) };


    // proxyLimitCPU Field Functions 
    bool hasProxyLimitCPU() const { return this->proxyLimitCPU_ != nullptr;};
    void deleteProxyLimitCPU() { this->proxyLimitCPU_ = nullptr;};
    inline string proxyLimitCPU() const { DARABONBA_PTR_GET_DEFAULT(proxyLimitCPU_, "") };
    inline CreateServiceMeshRequest& setProxyLimitCPU(string proxyLimitCPU) { DARABONBA_PTR_SET_VALUE(proxyLimitCPU_, proxyLimitCPU) };


    // proxyLimitMemory Field Functions 
    bool hasProxyLimitMemory() const { return this->proxyLimitMemory_ != nullptr;};
    void deleteProxyLimitMemory() { this->proxyLimitMemory_ = nullptr;};
    inline string proxyLimitMemory() const { DARABONBA_PTR_GET_DEFAULT(proxyLimitMemory_, "") };
    inline CreateServiceMeshRequest& setProxyLimitMemory(string proxyLimitMemory) { DARABONBA_PTR_SET_VALUE(proxyLimitMemory_, proxyLimitMemory) };


    // proxyRequestCPU Field Functions 
    bool hasProxyRequestCPU() const { return this->proxyRequestCPU_ != nullptr;};
    void deleteProxyRequestCPU() { this->proxyRequestCPU_ = nullptr;};
    inline string proxyRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(proxyRequestCPU_, "") };
    inline CreateServiceMeshRequest& setProxyRequestCPU(string proxyRequestCPU) { DARABONBA_PTR_SET_VALUE(proxyRequestCPU_, proxyRequestCPU) };


    // proxyRequestMemory Field Functions 
    bool hasProxyRequestMemory() const { return this->proxyRequestMemory_ != nullptr;};
    void deleteProxyRequestMemory() { this->proxyRequestMemory_ = nullptr;};
    inline string proxyRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(proxyRequestMemory_, "") };
    inline CreateServiceMeshRequest& setProxyRequestMemory(string proxyRequestMemory) { DARABONBA_PTR_SET_VALUE(proxyRequestMemory_, proxyRequestMemory) };


    // redisFilterEnabled Field Functions 
    bool hasRedisFilterEnabled() const { return this->redisFilterEnabled_ != nullptr;};
    void deleteRedisFilterEnabled() { this->redisFilterEnabled_ = nullptr;};
    inline bool redisFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(redisFilterEnabled_, false) };
    inline CreateServiceMeshRequest& setRedisFilterEnabled(bool redisFilterEnabled) { DARABONBA_PTR_SET_VALUE(redisFilterEnabled_, redisFilterEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceMeshRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServiceMeshRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServiceMeshRequestTag>) };
    inline vector<CreateServiceMeshRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateServiceMeshRequestTag>) };
    inline CreateServiceMeshRequest& setTag(const vector<CreateServiceMeshRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServiceMeshRequest& setTag(vector<CreateServiceMeshRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // telemetry Field Functions 
    bool hasTelemetry() const { return this->telemetry_ != nullptr;};
    void deleteTelemetry() { this->telemetry_ = nullptr;};
    inline bool telemetry() const { DARABONBA_PTR_GET_DEFAULT(telemetry_, false) };
    inline CreateServiceMeshRequest& setTelemetry(bool telemetry) { DARABONBA_PTR_SET_VALUE(telemetry_, telemetry) };


    // thriftFilterEnabled Field Functions 
    bool hasThriftFilterEnabled() const { return this->thriftFilterEnabled_ != nullptr;};
    void deleteThriftFilterEnabled() { this->thriftFilterEnabled_ = nullptr;};
    inline bool thriftFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(thriftFilterEnabled_, false) };
    inline CreateServiceMeshRequest& setThriftFilterEnabled(bool thriftFilterEnabled) { DARABONBA_PTR_SET_VALUE(thriftFilterEnabled_, thriftFilterEnabled) };


    // traceSampling Field Functions 
    bool hasTraceSampling() const { return this->traceSampling_ != nullptr;};
    void deleteTraceSampling() { this->traceSampling_ = nullptr;};
    inline float traceSampling() const { DARABONBA_PTR_GET_DEFAULT(traceSampling_, 0.0) };
    inline CreateServiceMeshRequest& setTraceSampling(float traceSampling) { DARABONBA_PTR_SET_VALUE(traceSampling_, traceSampling) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline bool tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
    inline CreateServiceMeshRequest& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


    // useExistingCA Field Functions 
    bool hasUseExistingCA() const { return this->useExistingCA_ != nullptr;};
    void deleteUseExistingCA() { this->useExistingCA_ = nullptr;};
    inline bool useExistingCA() const { DARABONBA_PTR_GET_DEFAULT(useExistingCA_, false) };
    inline CreateServiceMeshRequest& setUseExistingCA(bool useExistingCA) { DARABONBA_PTR_SET_VALUE(useExistingCA_, useExistingCA) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline string vSwitches() const { DARABONBA_PTR_GET_DEFAULT(vSwitches_, "") };
    inline CreateServiceMeshRequest& setVSwitches(string vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServiceMeshRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // webAssemblyFilterEnabled Field Functions 
    bool hasWebAssemblyFilterEnabled() const { return this->webAssemblyFilterEnabled_ != nullptr;};
    void deleteWebAssemblyFilterEnabled() { this->webAssemblyFilterEnabled_ = nullptr;};
    inline bool webAssemblyFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(webAssemblyFilterEnabled_, false) };
    inline CreateServiceMeshRequest& setWebAssemblyFilterEnabled(bool webAssemblyFilterEnabled) { DARABONBA_PTR_SET_VALUE(webAssemblyFilterEnabled_, webAssemblyFilterEnabled) };


  protected:
    // Specifies whether to enable access log collection. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> accessLogEnabled_ = nullptr;
    // Specifies whether to enable access log collection. Valid values:
    // 
    // *   "": disables access log collection.
    // *   `/dev/stdout`: enables access log collection. Access logs are written to /dev/stdout.
    std::shared_ptr<string> accessLogFile_ = nullptr;
    // Custom fields of access logs. To set this parameter, you must enable access log collection. Otherwise, you cannot set this parameter. The value must be a JSON string. The following key values must be contained: authority_for, bytes_received, bytes_sent, downstream_local_address, downstream_remote_address, duration, istio_policy_status, method, path, protocol, requested_server_name, response_code, response_flags, route_name, start_time, trace_id, upstream_cluster, upstream_host, upstream_local_address, upstream_service_time, upstream_transport_failure_reason, user_agent, and x_forwarded_for.
    std::shared_ptr<string> accessLogFormat_ = nullptr;
    // The SLS project from which access logs are collected.
    std::shared_ptr<string> accessLogProject_ = nullptr;
    // Specifies whether to enable gRPC Access Log Service (ALS) of Envoy. gRPC is short for Google Remote Procedure Call. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> accessLogServiceEnabled_ = nullptr;
    // The endpoint of Envoy\\"s gRPC ALS.
    std::shared_ptr<string> accessLogServiceHost_ = nullptr;
    // The port of Envoy\\"s gRPC ALS.
    std::shared_ptr<int32_t> accessLogServicePort_ = nullptr;
    // The type of the Classic Load Balancer (CLB) instance that is bound to the API server. Valid values: `slb.s1.small`, `slb.s2.small`, `slb.s2.medium`, `slb.s3.small`, `slb.s3.medium`, and `slb.s3.large`.
    std::shared_ptr<string> apiServerLoadBalancerSpec_ = nullptr;
    // Specifies whether to expose the API server to the Internet. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    // 
    // > If you set this parameter to `false`, the API server cannot be accessed over the Internet.
    std::shared_ptr<bool> apiServerPublicEip_ = nullptr;
    // The name of the Log Service project that is used for mesh audit.
    // 
    // Default value: mesh-log-{ASM instance ID}.
    std::shared_ptr<string> auditProject_ = nullptr;
    // Specifies whether to enable auto-renewal for the CLB instance if the CLB instance uses the subscription billing method. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period of the subscription CLB instance. This parameter is valid only if `ChargeType` is set to `PrePay`. If the original subscription period of the CLB instance is less than one year, the value of this parameter indicates the number of months for auto-renewal. If the original subscription period of the CLB instance is more than one year, the value of this parameter indicates the number of years for auto-renewal.
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    // Specifies whether to allow the Kubernetes API of clusters on the data plane to access Istio resources. The version of the ASM instance must be V1.9.7.93 or later. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> CRAggregationEnabled_ = nullptr;
    // The certificate chain from the CA certificate to the root certificate. At least two certificates are included in the chain.
    std::shared_ptr<string> certChain_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // *   `PayOnDemand`: pay-as-you-go
    // *   `PrePay`: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // ASM cluster domain.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // The edition of the ASM instance. Valid values:
    // 
    // - `standard`: Standard Edition
    // 
    // - `enterprise`: Enterprise Edition
    // 
    // - `ultimate`: Ultimate Edition
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // Specifies whether to enable the external service registry. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> configSourceEnabled_ = nullptr;
    // The instance ID of the Nacos registry.
    std::shared_ptr<string> configSourceNacosID_ = nullptr;
    // Specifies whether to enable the collection of control plane logs. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> controlPlaneLogEnabled_ = nullptr;
    // The name of the Log Service project that is used to collect the logs of the control plane.
    std::shared_ptr<string> controlPlaneLogProject_ = nullptr;
    // Specifies whether to use a custom Prometheus instance. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> customizedPrometheus_ = nullptr;
    // Specifies whether to use a self-managed Zipkin system to collect tracing data. Valid values:
    // 
    // *   `true`: uses a self-managed Zipkin system to collect tracing data.
    // *   `false`: uses Alibaba Cloud Tracing Analysis to collect tracing data.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> customizedZipkin_ = nullptr;
    // Specifies whether to enable the DNS proxy feature. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> DNSProxyingEnabled_ = nullptr;
    // Specifies whether to enable Dubbo Filter. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> dubboFilterEnabled_ = nullptr;
    // The edition of the ASM instance.
    std::shared_ptr<string> edition_ = nullptr;
    // Specifies whether to enable the ACMG mode for the ASM instance.
    std::shared_ptr<bool> enableACMG_ = nullptr;
    // Specifies whether to enable the Ambient Mesh mode for the ASM instance.
    std::shared_ptr<bool> enableAmbient_ = nullptr;
    // Specifies whether to enable the mesh audit feature. To enable this feature, make sure that you have activated [Log Service](https://sls.console.aliyun.com/). Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableAudit_ = nullptr;
    // Specifies whether to enable the rollback feature for Istio resources. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableCRHistory_ = nullptr;
    // Specifies whether to enable Secret Discovery Service (SDS). Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableSDSServer_ = nullptr;
    // The IP ranges in CIDR form to be excluded from redirection to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> excludeIPRanges_ = nullptr;
    // The inbound ports to be excluded from redirection to the sidecar proxy in the ASM instance. Separate multiple port numbers with commas (,).
    std::shared_ptr<string> excludeInboundPorts_ = nullptr;
    // The outbound ports to be excluded from redirection to the sidecar proxy in the ASM instance. Separate multiple port numbers with commas (,).
    std::shared_ptr<string> excludeOutboundPorts_ = nullptr;
    // The existing CA certificate, which is encoded in Base64. This parameter is used in scenarios where you migrate open source Istio to ASM. It specifies the content of the ca-cert.pem file in the istio-ca-secret secret. The secret is in the istio-system namespace of the Kubernetes cluster where the open source Istio is installed.
    std::shared_ptr<string> existingCaCert_ = nullptr;
    // The existing CA key, which is encoded in Base64. This parameter is used in scenarios where you migrate open source Istio to ASM. It specifies the content of the ca-key.pem file in the istio-ca-secret secret. The secret is in the istio-system namespace of the Kubernetes cluster where the open source Istio is installed.
    std::shared_ptr<string> existingCaKey_ = nullptr;
    // The type of the existing CA certificate. Valid values:
    // 
    // *   1: Self-signed certificate generated by istiod. The certificate corresponds to the secret named istio-ca-secret in the istio-system namespace. If you use this type of certificate, you must set the `ExistingCaCert` and `ExistingCaKey` parameters.
    // *   2: Administrator-specified certificate. For more information, see [plugin ca cert](https://istio.io/latest/docs/tasks/security/cert-management/plugin-ca-cert/). In most cases, the certificate corresponds to the secret named cacerts in the istio-system namespace. If you use this type of certificate, you must set the `ExisingRootCaCert` and `ExisingRootCaKey` parameters.
    std::shared_ptr<string> existingCaType_ = nullptr;
    // The existing root certificate, which is encoded in Base64.
    std::shared_ptr<string> existingRootCaCert_ = nullptr;
    // The private key that corresponds to the root certificate, which is encoded in Base64.
    std::shared_ptr<string> existingRootCaKey_ = nullptr;
    // Specifies whether to enable gateway configuration filtering. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> filterGatewayClusterConfig_ = nullptr;
    // Specifies whether to enable Gateway API. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> gatewayAPIEnabled_ = nullptr;
    // When you create an ASM instance, you can add a cluster to the ASM instance. If you do not specify this parameter, no cluster is added to the ASM instance. The cluster and the ASM instance must be in the same vSwitch of the same VPC and have the same domain name.
    std::shared_ptr<string> guestCluster_ = nullptr;
    // The IP ranges in CIDR form for which traffic is to be redirected to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> includeIPRanges_ = nullptr;
    // The Istio version of the ASM instance.
    std::shared_ptr<string> istioVersion_ = nullptr;
    // Specifies whether to enable the mesh topology feature. To enable this feature, make sure that you have enabled Prometheus monitoring. If Prometheus monitoring is disabled, you must set this parameter to `false`.`` Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> kialiEnabled_ = nullptr;
    // The configurations for the access to the nearest instance.
    std::shared_ptr<string> localityLBConf_ = nullptr;
    // Specifies whether to route traffic to the nearest instance. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> localityLoadBalancing_ = nullptr;
    // Specifies whether to enable Microservices Engine (MSE). Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> MSEEnabled_ = nullptr;
    // Specifies whether to enable MultiBuffer-based Transport Layer Security (TLS) acceleration. Valid values:
    // 
    // - `true`
    // 
    // - `false`
    // 
    // 
    // Default value: `true`
    std::shared_ptr<bool> multiBufferEnabled_ = nullptr;
    // The pull-request latency. Default value: 30. Unit: seconds.
    std::shared_ptr<string> multiBufferPollDelay_ = nullptr;
    // Specifies whether to enable MySQL Filter. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> mysqlFilterEnabled_ = nullptr;
    // The name of the ASM instance.
    std::shared_ptr<string> name_ = nullptr;
    // The maximum number of CPU cores that are available to the OPA container.
    std::shared_ptr<string> OPALimitCPU_ = nullptr;
    // The maximum size of the memory that is available to the OPA container. You can specify the parameter value in the standard quantity representation form used by Kubernetes. 1 Mi equals 1,024 KB.
    std::shared_ptr<string> OPALimitMemory_ = nullptr;
    // The log level of the OPA container.
    std::shared_ptr<string> OPALogLevel_ = nullptr;
    // The minimum number of CPU cores that are required by the OPA container. You can specify the parameter value in the standard representation form of CPUs in Kubernetes. For example, if you set the value to 1, one CPU core is required.
    std::shared_ptr<string> OPARequestCPU_ = nullptr;
    // The minimum size of the memory that is required by the OPA container. You can specify the parameter value in the standard quantity representation form used by Kubernetes. 1 Mi equals 1,024 KB.
    std::shared_ptr<string> OPARequestMemory_ = nullptr;
    // Specifies whether to enable the OPA plug-in. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> opaEnabled_ = nullptr;
    // Specifies whether to install the Open Policy Agent (OPA) plug-in. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> openAgentPolicy_ = nullptr;
    // The subscription period of the CLB instance. This parameter is valid only if `ChargeType` is set to `PrePay`. The value of this parameter indicates the subscription period of the CLB instance. Unit: month. For example, if the subscription period is one year, set this parameter to 12.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The type of the CLB instance that is bound to Istio Pilot. Valid values: `slb.s1.small`, `slb.s2.small`, `slb.s2.medium`, `slb.s3.small`, `slb.s3.medium`, and `slb.s3.large`.
    std::shared_ptr<string> pilotLoadBalancerSpec_ = nullptr;
    // The playground scenario. If you specify this parameter, an ASM playground instance is created. Valid values:
    // 
    // *   ewmaLb: the exponentially weighted moving average (EWMA) load balancing algorithm.
    std::shared_ptr<string> playgroundScene_ = nullptr;
    // The endpoint of the custom Prometheus instance.
    std::shared_ptr<string> prometheusUrl_ = nullptr;
    // The maximum number of CPU cores that are available to the proxy container.
    std::shared_ptr<string> proxyLimitCPU_ = nullptr;
    // The maximum size of the memory that is available to the proxy container.
    std::shared_ptr<string> proxyLimitMemory_ = nullptr;
    // The minimum number of CPU cores that are required by the proxy container.
    std::shared_ptr<string> proxyRequestCPU_ = nullptr;
    // The minimum size of the memory that is required by the proxy container.
    std::shared_ptr<string> proxyRequestMemory_ = nullptr;
    // Specifies whether to enable Redis Filter. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> redisFilterEnabled_ = nullptr;
    // The ID of the region in which the ASM instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Tag of the ASM instance. A tag contains the following information:
    // 
    // *   key: the name of the tag
    // *   value: the value of the tag
    std::shared_ptr<vector<CreateServiceMeshRequestTag>> tag_ = nullptr;
    // Specifies whether to enable Prometheus monitoring. We recommend that you use Prometheus Service of [Application Real-Time Monitoring Service (ARMS)](https://arms.console.aliyun.com/). Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> telemetry_ = nullptr;
    // Specifies whether to enable Thrift Filter. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> thriftFilterEnabled_ = nullptr;
    // The sampling percentage of Tracing Analysis.
    std::shared_ptr<float> traceSampling_ = nullptr;
    // Specifies whether to enable the Tracing Analysis feature. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> tracing_ = nullptr;
    // Specifies whether to use an existing CA certificate and private key.
    std::shared_ptr<bool> useExistingCA_ = nullptr;
    // The ID of the vSwitch to which the ASM instance is connected.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitches_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the ASM instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Specifies whether to enable WebAssembly Filter. Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> webAssemblyFilterEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
