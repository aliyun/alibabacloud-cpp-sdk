// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESHFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESHFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateMeshFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeshFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogEnabled, accessLogEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_TO_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_TO_JSON(AccessLogGatewayEnabled, accessLogGatewayEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogGatewayLifecycle, accessLogGatewayLifecycle_);
      DARABONBA_PTR_TO_JSON(AccessLogProject, accessLogProject_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_TO_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_TO_JSON(AccessLogSidecarEnabled, accessLogSidecarEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogSidecarLifecycle, accessLogSidecarLifecycle_);
      DARABONBA_PTR_TO_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_TO_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_TO_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_TO_JSON(CertChain, certChain_);
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(CniEnabled, cniEnabled_);
      DARABONBA_PTR_TO_JSON(CniExcludeNamespaces, cniExcludeNamespaces_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ConfigSourceEnabled, configSourceEnabled_);
      DARABONBA_PTR_TO_JSON(ConfigSourceNacosID, configSourceNacosID_);
      DARABONBA_PTR_TO_JSON(CustomizedPrometheus, customizedPrometheus_);
      DARABONBA_PTR_TO_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_TO_JSON(DNSProxyingEnabled, DNSProxyingEnabled_);
      DARABONBA_PTR_TO_JSON(DefaultComponentsScheduleConfig, defaultComponentsScheduleConfig_);
      DARABONBA_PTR_TO_JSON(DiscoverySelectors, discoverySelectors_);
      DARABONBA_PTR_TO_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_TO_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_TO_JSON(EnableAutoDiagnosis, enableAutoDiagnosis_);
      DARABONBA_PTR_TO_JSON(EnableBootstrapXdsAgent, enableBootstrapXdsAgent_);
      DARABONBA_PTR_TO_JSON(EnableCRHistory, enableCRHistory_);
      DARABONBA_PTR_TO_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_TO_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_TO_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_TO_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(ExistingCaCert, existingCaCert_);
      DARABONBA_PTR_TO_JSON(ExistingCaKey, existingCaKey_);
      DARABONBA_PTR_TO_JSON(ExistingRootCaCert, existingRootCaCert_);
      DARABONBA_PTR_TO_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
      DARABONBA_PTR_TO_JSON(GatewayAPIEnabled, gatewayAPIEnabled_);
      DARABONBA_PTR_TO_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_TO_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_TO_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_TO_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_TO_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(IntegrateKiali, integrateKiali_);
      DARABONBA_PTR_TO_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_TO_JSON(KialiArmsAuthTokens, kialiArmsAuthTokens_);
      DARABONBA_PTR_TO_JSON(KialiEnabled, kialiEnabled_);
      DARABONBA_PTR_TO_JSON(KialiServiceAnnotations, kialiServiceAnnotations_);
      DARABONBA_PTR_TO_JSON(LabelsForOffloadedWorkloads, labelsForOffloadedWorkloads_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(LocalityLBConf, localityLBConf_);
      DARABONBA_PTR_TO_JSON(LocalityLoadBalancing, localityLoadBalancing_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(MSEEnabled, MSEEnabled_);
      DARABONBA_PTR_TO_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_TO_JSON(MultiBufferPollDelay, multiBufferPollDelay_);
      DARABONBA_PTR_TO_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_TO_JSON(NFDEnabled, NFDEnabled_);
      DARABONBA_PTR_TO_JSON(NFDLabelPruned, NFDLabelPruned_);
      DARABONBA_PTR_TO_JSON(OPAInjectorCPULimit, OPAInjectorCPULimit_);
      DARABONBA_PTR_TO_JSON(OPAInjectorCPURequirement, OPAInjectorCPURequirement_);
      DARABONBA_PTR_TO_JSON(OPAInjectorMemoryLimit, OPAInjectorMemoryLimit_);
      DARABONBA_PTR_TO_JSON(OPAInjectorMemoryRequirement, OPAInjectorMemoryRequirement_);
      DARABONBA_PTR_TO_JSON(OPALimitCPU, OPALimitCPU_);
      DARABONBA_PTR_TO_JSON(OPALimitMemory, OPALimitMemory_);
      DARABONBA_PTR_TO_JSON(OPALogLevel, OPALogLevel_);
      DARABONBA_PTR_TO_JSON(OPARequestCPU, OPARequestCPU_);
      DARABONBA_PTR_TO_JSON(OPARequestMemory, OPARequestMemory_);
      DARABONBA_PTR_TO_JSON(OPAScopeInjected, OPAScopeInjected_);
      DARABONBA_PTR_TO_JSON(OpaEnabled, opaEnabled_);
      DARABONBA_PTR_TO_JSON(OpenAgentPolicy, openAgentPolicy_);
      DARABONBA_PTR_TO_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(PilotEnableQuicListeners, pilotEnableQuicListeners_);
      DARABONBA_PTR_TO_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_TO_JSON(ProxyInitCPUResourceLimit, proxyInitCPUResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitCPUResourceRequest, proxyInitCPUResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyInitMemoryResourceLimit, proxyInitMemoryResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitMemoryResourceRequest, proxyInitMemoryResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyLimitCPU, proxyLimitCPU_);
      DARABONBA_PTR_TO_JSON(ProxyLimitMemory, proxyLimitMemory_);
      DARABONBA_PTR_TO_JSON(ProxyRequestCPU, proxyRequestCPU_);
      DARABONBA_PTR_TO_JSON(ProxyRequestMemory, proxyRequestMemory_);
      DARABONBA_PTR_TO_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_TO_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_TO_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorLimitCPU, sidecarInjectorLimitCPU_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorLimitMemory, sidecarInjectorLimitMemory_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorRequestCPU, sidecarInjectorRequestCPU_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorRequestMemory, sidecarInjectorRequestMemory_);
      DARABONBA_PTR_TO_JSON(SidecarInjectorWebhookAsYaml, sidecarInjectorWebhookAsYaml_);
      DARABONBA_PTR_TO_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_TO_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_TO_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
      DARABONBA_PTR_TO_JSON(TraceCustomTags, traceCustomTags_);
      DARABONBA_PTR_TO_JSON(TraceMaxPathTagLength, traceMaxPathTagLength_);
      DARABONBA_PTR_TO_JSON(TraceSampling, traceSampling_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
      DARABONBA_PTR_TO_JSON(TracingOnExtZipkinLimitCPU, tracingOnExtZipkinLimitCPU_);
      DARABONBA_PTR_TO_JSON(TracingOnExtZipkinLimitMemory, tracingOnExtZipkinLimitMemory_);
      DARABONBA_PTR_TO_JSON(TracingOnExtZipkinReplicaCount, tracingOnExtZipkinReplicaCount_);
      DARABONBA_PTR_TO_JSON(TracingOnExtZipkinRequestCPU, tracingOnExtZipkinRequestCPU_);
      DARABONBA_PTR_TO_JSON(TracingOnExtZipkinRequestMemory, tracingOnExtZipkinRequestMemory_);
      DARABONBA_PTR_TO_JSON(WebAssemblyFilterEnabled, webAssemblyFilterEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeshFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogEnabled, accessLogEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_FROM_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_FROM_JSON(AccessLogGatewayEnabled, accessLogGatewayEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogGatewayLifecycle, accessLogGatewayLifecycle_);
      DARABONBA_PTR_FROM_JSON(AccessLogProject, accessLogProject_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_FROM_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_FROM_JSON(AccessLogSidecarEnabled, accessLogSidecarEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogSidecarLifecycle, accessLogSidecarLifecycle_);
      DARABONBA_PTR_FROM_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_FROM_JSON(AutoInjectionPolicyEnabled, autoInjectionPolicyEnabled_);
      DARABONBA_PTR_FROM_JSON(CRAggregationEnabled, CRAggregationEnabled_);
      DARABONBA_PTR_FROM_JSON(CertChain, certChain_);
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(CniEnabled, cniEnabled_);
      DARABONBA_PTR_FROM_JSON(CniExcludeNamespaces, cniExcludeNamespaces_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ConfigSourceEnabled, configSourceEnabled_);
      DARABONBA_PTR_FROM_JSON(ConfigSourceNacosID, configSourceNacosID_);
      DARABONBA_PTR_FROM_JSON(CustomizedPrometheus, customizedPrometheus_);
      DARABONBA_PTR_FROM_JSON(CustomizedZipkin, customizedZipkin_);
      DARABONBA_PTR_FROM_JSON(DNSProxyingEnabled, DNSProxyingEnabled_);
      DARABONBA_PTR_FROM_JSON(DefaultComponentsScheduleConfig, defaultComponentsScheduleConfig_);
      DARABONBA_PTR_FROM_JSON(DiscoverySelectors, discoverySelectors_);
      DARABONBA_PTR_FROM_JSON(DubboFilterEnabled, dubboFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(EnableAutoDiagnosis, enableAutoDiagnosis_);
      DARABONBA_PTR_FROM_JSON(EnableBootstrapXdsAgent, enableBootstrapXdsAgent_);
      DARABONBA_PTR_FROM_JSON(EnableCRHistory, enableCRHistory_);
      DARABONBA_PTR_FROM_JSON(EnableNamespacesByDefault, enableNamespacesByDefault_);
      DARABONBA_PTR_FROM_JSON(EnableSDSServer, enableSDSServer_);
      DARABONBA_PTR_FROM_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_FROM_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExistingCaCert, existingCaCert_);
      DARABONBA_PTR_FROM_JSON(ExistingCaKey, existingCaKey_);
      DARABONBA_PTR_FROM_JSON(ExistingRootCaCert, existingRootCaCert_);
      DARABONBA_PTR_FROM_JSON(FilterGatewayClusterConfig, filterGatewayClusterConfig_);
      DARABONBA_PTR_FROM_JSON(GatewayAPIEnabled, gatewayAPIEnabled_);
      DARABONBA_PTR_FROM_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_FROM_JSON(Http10Enabled, http10Enabled_);
      DARABONBA_PTR_FROM_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_FROM_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(IntegrateKiali, integrateKiali_);
      DARABONBA_PTR_FROM_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_FROM_JSON(KialiArmsAuthTokens, kialiArmsAuthTokens_);
      DARABONBA_PTR_FROM_JSON(KialiEnabled, kialiEnabled_);
      DARABONBA_PTR_FROM_JSON(KialiServiceAnnotations, kialiServiceAnnotations_);
      DARABONBA_PTR_FROM_JSON(LabelsForOffloadedWorkloads, labelsForOffloadedWorkloads_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(LocalityLBConf, localityLBConf_);
      DARABONBA_PTR_FROM_JSON(LocalityLoadBalancing, localityLoadBalancing_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(MSEEnabled, MSEEnabled_);
      DARABONBA_PTR_FROM_JSON(MultiBufferEnabled, multiBufferEnabled_);
      DARABONBA_PTR_FROM_JSON(MultiBufferPollDelay, multiBufferPollDelay_);
      DARABONBA_PTR_FROM_JSON(MysqlFilterEnabled, mysqlFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(NFDEnabled, NFDEnabled_);
      DARABONBA_PTR_FROM_JSON(NFDLabelPruned, NFDLabelPruned_);
      DARABONBA_PTR_FROM_JSON(OPAInjectorCPULimit, OPAInjectorCPULimit_);
      DARABONBA_PTR_FROM_JSON(OPAInjectorCPURequirement, OPAInjectorCPURequirement_);
      DARABONBA_PTR_FROM_JSON(OPAInjectorMemoryLimit, OPAInjectorMemoryLimit_);
      DARABONBA_PTR_FROM_JSON(OPAInjectorMemoryRequirement, OPAInjectorMemoryRequirement_);
      DARABONBA_PTR_FROM_JSON(OPALimitCPU, OPALimitCPU_);
      DARABONBA_PTR_FROM_JSON(OPALimitMemory, OPALimitMemory_);
      DARABONBA_PTR_FROM_JSON(OPALogLevel, OPALogLevel_);
      DARABONBA_PTR_FROM_JSON(OPARequestCPU, OPARequestCPU_);
      DARABONBA_PTR_FROM_JSON(OPARequestMemory, OPARequestMemory_);
      DARABONBA_PTR_FROM_JSON(OPAScopeInjected, OPAScopeInjected_);
      DARABONBA_PTR_FROM_JSON(OpaEnabled, opaEnabled_);
      DARABONBA_PTR_FROM_JSON(OpenAgentPolicy, openAgentPolicy_);
      DARABONBA_PTR_FROM_JSON(OutboundTrafficPolicy, outboundTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(PilotEnableQuicListeners, pilotEnableQuicListeners_);
      DARABONBA_PTR_FROM_JSON(PrometheusUrl, prometheusUrl_);
      DARABONBA_PTR_FROM_JSON(ProxyInitCPUResourceLimit, proxyInitCPUResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitCPUResourceRequest, proxyInitCPUResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyInitMemoryResourceLimit, proxyInitMemoryResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitMemoryResourceRequest, proxyInitMemoryResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyLimitCPU, proxyLimitCPU_);
      DARABONBA_PTR_FROM_JSON(ProxyLimitMemory, proxyLimitMemory_);
      DARABONBA_PTR_FROM_JSON(ProxyRequestCPU, proxyRequestCPU_);
      DARABONBA_PTR_FROM_JSON(ProxyRequestMemory, proxyRequestMemory_);
      DARABONBA_PTR_FROM_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_FROM_JSON(RedisFilterEnabled, redisFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorLimitCPU, sidecarInjectorLimitCPU_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorLimitMemory, sidecarInjectorLimitMemory_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorRequestCPU, sidecarInjectorRequestCPU_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorRequestMemory, sidecarInjectorRequestMemory_);
      DARABONBA_PTR_FROM_JSON(SidecarInjectorWebhookAsYaml, sidecarInjectorWebhookAsYaml_);
      DARABONBA_PTR_FROM_JSON(Telemetry, telemetry_);
      DARABONBA_PTR_FROM_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_FROM_JSON(ThriftFilterEnabled, thriftFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(TraceCustomTags, traceCustomTags_);
      DARABONBA_PTR_FROM_JSON(TraceMaxPathTagLength, traceMaxPathTagLength_);
      DARABONBA_PTR_FROM_JSON(TraceSampling, traceSampling_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
      DARABONBA_PTR_FROM_JSON(TracingOnExtZipkinLimitCPU, tracingOnExtZipkinLimitCPU_);
      DARABONBA_PTR_FROM_JSON(TracingOnExtZipkinLimitMemory, tracingOnExtZipkinLimitMemory_);
      DARABONBA_PTR_FROM_JSON(TracingOnExtZipkinReplicaCount, tracingOnExtZipkinReplicaCount_);
      DARABONBA_PTR_FROM_JSON(TracingOnExtZipkinRequestCPU, tracingOnExtZipkinRequestCPU_);
      DARABONBA_PTR_FROM_JSON(TracingOnExtZipkinRequestMemory, tracingOnExtZipkinRequestMemory_);
      DARABONBA_PTR_FROM_JSON(WebAssemblyFilterEnabled, webAssemblyFilterEnabled_);
    };
    UpdateMeshFeatureRequest() = default ;
    UpdateMeshFeatureRequest(const UpdateMeshFeatureRequest &) = default ;
    UpdateMeshFeatureRequest(UpdateMeshFeatureRequest &&) = default ;
    UpdateMeshFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeshFeatureRequest() = default ;
    UpdateMeshFeatureRequest& operator=(const UpdateMeshFeatureRequest &) = default ;
    UpdateMeshFeatureRequest& operator=(UpdateMeshFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogEnabled_ == nullptr
        && return this->accessLogFile_ == nullptr && return this->accessLogFormat_ == nullptr && return this->accessLogGatewayEnabled_ == nullptr && return this->accessLogGatewayLifecycle_ == nullptr && return this->accessLogProject_ == nullptr
        && return this->accessLogServiceEnabled_ == nullptr && return this->accessLogServiceHost_ == nullptr && return this->accessLogServicePort_ == nullptr && return this->accessLogSidecarEnabled_ == nullptr && return this->accessLogSidecarLifecycle_ == nullptr
        && return this->auditProject_ == nullptr && return this->autoInjectionPolicyEnabled_ == nullptr && return this->CRAggregationEnabled_ == nullptr && return this->certChain_ == nullptr && return this->clusterSpec_ == nullptr
        && return this->cniEnabled_ == nullptr && return this->cniExcludeNamespaces_ == nullptr && return this->concurrency_ == nullptr && return this->configSourceEnabled_ == nullptr && return this->configSourceNacosID_ == nullptr
        && return this->customizedPrometheus_ == nullptr && return this->customizedZipkin_ == nullptr && return this->DNSProxyingEnabled_ == nullptr && return this->defaultComponentsScheduleConfig_ == nullptr && return this->discoverySelectors_ == nullptr
        && return this->dubboFilterEnabled_ == nullptr && return this->enableAudit_ == nullptr && return this->enableAutoDiagnosis_ == nullptr && return this->enableBootstrapXdsAgent_ == nullptr && return this->enableCRHistory_ == nullptr
        && return this->enableNamespacesByDefault_ == nullptr && return this->enableSDSServer_ == nullptr && return this->excludeIPRanges_ == nullptr && return this->excludeInboundPorts_ == nullptr && return this->excludeOutboundPorts_ == nullptr
        && return this->existingCaCert_ == nullptr && return this->existingCaKey_ == nullptr && return this->existingRootCaCert_ == nullptr && return this->filterGatewayClusterConfig_ == nullptr && return this->gatewayAPIEnabled_ == nullptr
        && return this->holdApplicationUntilProxyStarts_ == nullptr && return this->http10Enabled_ == nullptr && return this->includeIPRanges_ == nullptr && return this->includeInboundPorts_ == nullptr && return this->includeOutboundPorts_ == nullptr
        && return this->integrateKiali_ == nullptr && return this->interceptionMode_ == nullptr && return this->kialiArmsAuthTokens_ == nullptr && return this->kialiEnabled_ == nullptr && return this->kialiServiceAnnotations_ == nullptr
        && return this->labelsForOffloadedWorkloads_ == nullptr && return this->lifecycle_ == nullptr && return this->localityLBConf_ == nullptr && return this->localityLoadBalancing_ == nullptr && return this->logLevel_ == nullptr
        && return this->MSEEnabled_ == nullptr && return this->multiBufferEnabled_ == nullptr && return this->multiBufferPollDelay_ == nullptr && return this->mysqlFilterEnabled_ == nullptr && return this->NFDEnabled_ == nullptr
        && return this->NFDLabelPruned_ == nullptr && return this->OPAInjectorCPULimit_ == nullptr && return this->OPAInjectorCPURequirement_ == nullptr && return this->OPAInjectorMemoryLimit_ == nullptr && return this->OPAInjectorMemoryRequirement_ == nullptr
        && return this->OPALimitCPU_ == nullptr && return this->OPALimitMemory_ == nullptr && return this->OPALogLevel_ == nullptr && return this->OPARequestCPU_ == nullptr && return this->OPARequestMemory_ == nullptr
        && return this->OPAScopeInjected_ == nullptr && return this->opaEnabled_ == nullptr && return this->openAgentPolicy_ == nullptr && return this->outboundTrafficPolicy_ == nullptr && return this->pilotEnableQuicListeners_ == nullptr
        && return this->prometheusUrl_ == nullptr && return this->proxyInitCPUResourceLimit_ == nullptr && return this->proxyInitCPUResourceRequest_ == nullptr && return this->proxyInitMemoryResourceLimit_ == nullptr && return this->proxyInitMemoryResourceRequest_ == nullptr
        && return this->proxyLimitCPU_ == nullptr && return this->proxyLimitMemory_ == nullptr && return this->proxyRequestCPU_ == nullptr && return this->proxyRequestMemory_ == nullptr && return this->proxyStatsMatcher_ == nullptr
        && return this->redisFilterEnabled_ == nullptr && return this->SMCEnabled_ == nullptr && return this->serviceMeshId_ == nullptr && return this->sidecarInjectorLimitCPU_ == nullptr && return this->sidecarInjectorLimitMemory_ == nullptr
        && return this->sidecarInjectorRequestCPU_ == nullptr && return this->sidecarInjectorRequestMemory_ == nullptr && return this->sidecarInjectorWebhookAsYaml_ == nullptr && return this->telemetry_ == nullptr && return this->terminationDrainDuration_ == nullptr
        && return this->thriftFilterEnabled_ == nullptr && return this->traceCustomTags_ == nullptr && return this->traceMaxPathTagLength_ == nullptr && return this->traceSampling_ == nullptr && return this->tracing_ == nullptr
        && return this->tracingOnExtZipkinLimitCPU_ == nullptr && return this->tracingOnExtZipkinLimitMemory_ == nullptr && return this->tracingOnExtZipkinReplicaCount_ == nullptr && return this->tracingOnExtZipkinRequestCPU_ == nullptr && return this->tracingOnExtZipkinRequestMemory_ == nullptr
        && return this->webAssemblyFilterEnabled_ == nullptr; };
    // accessLogEnabled Field Functions 
    bool hasAccessLogEnabled() const { return this->accessLogEnabled_ != nullptr;};
    void deleteAccessLogEnabled() { this->accessLogEnabled_ = nullptr;};
    inline bool accessLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogEnabled_, false) };
    inline UpdateMeshFeatureRequest& setAccessLogEnabled(bool accessLogEnabled) { DARABONBA_PTR_SET_VALUE(accessLogEnabled_, accessLogEnabled) };


    // accessLogFile Field Functions 
    bool hasAccessLogFile() const { return this->accessLogFile_ != nullptr;};
    void deleteAccessLogFile() { this->accessLogFile_ = nullptr;};
    inline string accessLogFile() const { DARABONBA_PTR_GET_DEFAULT(accessLogFile_, "") };
    inline UpdateMeshFeatureRequest& setAccessLogFile(string accessLogFile) { DARABONBA_PTR_SET_VALUE(accessLogFile_, accessLogFile) };


    // accessLogFormat Field Functions 
    bool hasAccessLogFormat() const { return this->accessLogFormat_ != nullptr;};
    void deleteAccessLogFormat() { this->accessLogFormat_ = nullptr;};
    inline string accessLogFormat() const { DARABONBA_PTR_GET_DEFAULT(accessLogFormat_, "") };
    inline UpdateMeshFeatureRequest& setAccessLogFormat(string accessLogFormat) { DARABONBA_PTR_SET_VALUE(accessLogFormat_, accessLogFormat) };


    // accessLogGatewayEnabled Field Functions 
    bool hasAccessLogGatewayEnabled() const { return this->accessLogGatewayEnabled_ != nullptr;};
    void deleteAccessLogGatewayEnabled() { this->accessLogGatewayEnabled_ = nullptr;};
    inline bool accessLogGatewayEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogGatewayEnabled_, false) };
    inline UpdateMeshFeatureRequest& setAccessLogGatewayEnabled(bool accessLogGatewayEnabled) { DARABONBA_PTR_SET_VALUE(accessLogGatewayEnabled_, accessLogGatewayEnabled) };


    // accessLogGatewayLifecycle Field Functions 
    bool hasAccessLogGatewayLifecycle() const { return this->accessLogGatewayLifecycle_ != nullptr;};
    void deleteAccessLogGatewayLifecycle() { this->accessLogGatewayLifecycle_ = nullptr;};
    inline int32_t accessLogGatewayLifecycle() const { DARABONBA_PTR_GET_DEFAULT(accessLogGatewayLifecycle_, 0) };
    inline UpdateMeshFeatureRequest& setAccessLogGatewayLifecycle(int32_t accessLogGatewayLifecycle) { DARABONBA_PTR_SET_VALUE(accessLogGatewayLifecycle_, accessLogGatewayLifecycle) };


    // accessLogProject Field Functions 
    bool hasAccessLogProject() const { return this->accessLogProject_ != nullptr;};
    void deleteAccessLogProject() { this->accessLogProject_ = nullptr;};
    inline string accessLogProject() const { DARABONBA_PTR_GET_DEFAULT(accessLogProject_, "") };
    inline UpdateMeshFeatureRequest& setAccessLogProject(string accessLogProject) { DARABONBA_PTR_SET_VALUE(accessLogProject_, accessLogProject) };


    // accessLogServiceEnabled Field Functions 
    bool hasAccessLogServiceEnabled() const { return this->accessLogServiceEnabled_ != nullptr;};
    void deleteAccessLogServiceEnabled() { this->accessLogServiceEnabled_ = nullptr;};
    inline bool accessLogServiceEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceEnabled_, false) };
    inline UpdateMeshFeatureRequest& setAccessLogServiceEnabled(bool accessLogServiceEnabled) { DARABONBA_PTR_SET_VALUE(accessLogServiceEnabled_, accessLogServiceEnabled) };


    // accessLogServiceHost Field Functions 
    bool hasAccessLogServiceHost() const { return this->accessLogServiceHost_ != nullptr;};
    void deleteAccessLogServiceHost() { this->accessLogServiceHost_ = nullptr;};
    inline string accessLogServiceHost() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceHost_, "") };
    inline UpdateMeshFeatureRequest& setAccessLogServiceHost(string accessLogServiceHost) { DARABONBA_PTR_SET_VALUE(accessLogServiceHost_, accessLogServiceHost) };


    // accessLogServicePort Field Functions 
    bool hasAccessLogServicePort() const { return this->accessLogServicePort_ != nullptr;};
    void deleteAccessLogServicePort() { this->accessLogServicePort_ = nullptr;};
    inline int32_t accessLogServicePort() const { DARABONBA_PTR_GET_DEFAULT(accessLogServicePort_, 0) };
    inline UpdateMeshFeatureRequest& setAccessLogServicePort(int32_t accessLogServicePort) { DARABONBA_PTR_SET_VALUE(accessLogServicePort_, accessLogServicePort) };


    // accessLogSidecarEnabled Field Functions 
    bool hasAccessLogSidecarEnabled() const { return this->accessLogSidecarEnabled_ != nullptr;};
    void deleteAccessLogSidecarEnabled() { this->accessLogSidecarEnabled_ = nullptr;};
    inline bool accessLogSidecarEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogSidecarEnabled_, false) };
    inline UpdateMeshFeatureRequest& setAccessLogSidecarEnabled(bool accessLogSidecarEnabled) { DARABONBA_PTR_SET_VALUE(accessLogSidecarEnabled_, accessLogSidecarEnabled) };


    // accessLogSidecarLifecycle Field Functions 
    bool hasAccessLogSidecarLifecycle() const { return this->accessLogSidecarLifecycle_ != nullptr;};
    void deleteAccessLogSidecarLifecycle() { this->accessLogSidecarLifecycle_ = nullptr;};
    inline int32_t accessLogSidecarLifecycle() const { DARABONBA_PTR_GET_DEFAULT(accessLogSidecarLifecycle_, 0) };
    inline UpdateMeshFeatureRequest& setAccessLogSidecarLifecycle(int32_t accessLogSidecarLifecycle) { DARABONBA_PTR_SET_VALUE(accessLogSidecarLifecycle_, accessLogSidecarLifecycle) };


    // auditProject Field Functions 
    bool hasAuditProject() const { return this->auditProject_ != nullptr;};
    void deleteAuditProject() { this->auditProject_ = nullptr;};
    inline string auditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
    inline UpdateMeshFeatureRequest& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


    // autoInjectionPolicyEnabled Field Functions 
    bool hasAutoInjectionPolicyEnabled() const { return this->autoInjectionPolicyEnabled_ != nullptr;};
    void deleteAutoInjectionPolicyEnabled() { this->autoInjectionPolicyEnabled_ = nullptr;};
    inline bool autoInjectionPolicyEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoInjectionPolicyEnabled_, false) };
    inline UpdateMeshFeatureRequest& setAutoInjectionPolicyEnabled(bool autoInjectionPolicyEnabled) { DARABONBA_PTR_SET_VALUE(autoInjectionPolicyEnabled_, autoInjectionPolicyEnabled) };


    // CRAggregationEnabled Field Functions 
    bool hasCRAggregationEnabled() const { return this->CRAggregationEnabled_ != nullptr;};
    void deleteCRAggregationEnabled() { this->CRAggregationEnabled_ = nullptr;};
    inline bool CRAggregationEnabled() const { DARABONBA_PTR_GET_DEFAULT(CRAggregationEnabled_, false) };
    inline UpdateMeshFeatureRequest& setCRAggregationEnabled(bool CRAggregationEnabled) { DARABONBA_PTR_SET_VALUE(CRAggregationEnabled_, CRAggregationEnabled) };


    // certChain Field Functions 
    bool hasCertChain() const { return this->certChain_ != nullptr;};
    void deleteCertChain() { this->certChain_ = nullptr;};
    inline string certChain() const { DARABONBA_PTR_GET_DEFAULT(certChain_, "") };
    inline UpdateMeshFeatureRequest& setCertChain(string certChain) { DARABONBA_PTR_SET_VALUE(certChain_, certChain) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline UpdateMeshFeatureRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // cniEnabled Field Functions 
    bool hasCniEnabled() const { return this->cniEnabled_ != nullptr;};
    void deleteCniEnabled() { this->cniEnabled_ = nullptr;};
    inline bool cniEnabled() const { DARABONBA_PTR_GET_DEFAULT(cniEnabled_, false) };
    inline UpdateMeshFeatureRequest& setCniEnabled(bool cniEnabled) { DARABONBA_PTR_SET_VALUE(cniEnabled_, cniEnabled) };


    // cniExcludeNamespaces Field Functions 
    bool hasCniExcludeNamespaces() const { return this->cniExcludeNamespaces_ != nullptr;};
    void deleteCniExcludeNamespaces() { this->cniExcludeNamespaces_ = nullptr;};
    inline string cniExcludeNamespaces() const { DARABONBA_PTR_GET_DEFAULT(cniExcludeNamespaces_, "") };
    inline UpdateMeshFeatureRequest& setCniExcludeNamespaces(string cniExcludeNamespaces) { DARABONBA_PTR_SET_VALUE(cniExcludeNamespaces_, cniExcludeNamespaces) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline UpdateMeshFeatureRequest& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // configSourceEnabled Field Functions 
    bool hasConfigSourceEnabled() const { return this->configSourceEnabled_ != nullptr;};
    void deleteConfigSourceEnabled() { this->configSourceEnabled_ = nullptr;};
    inline bool configSourceEnabled() const { DARABONBA_PTR_GET_DEFAULT(configSourceEnabled_, false) };
    inline UpdateMeshFeatureRequest& setConfigSourceEnabled(bool configSourceEnabled) { DARABONBA_PTR_SET_VALUE(configSourceEnabled_, configSourceEnabled) };


    // configSourceNacosID Field Functions 
    bool hasConfigSourceNacosID() const { return this->configSourceNacosID_ != nullptr;};
    void deleteConfigSourceNacosID() { this->configSourceNacosID_ = nullptr;};
    inline string configSourceNacosID() const { DARABONBA_PTR_GET_DEFAULT(configSourceNacosID_, "") };
    inline UpdateMeshFeatureRequest& setConfigSourceNacosID(string configSourceNacosID) { DARABONBA_PTR_SET_VALUE(configSourceNacosID_, configSourceNacosID) };


    // customizedPrometheus Field Functions 
    bool hasCustomizedPrometheus() const { return this->customizedPrometheus_ != nullptr;};
    void deleteCustomizedPrometheus() { this->customizedPrometheus_ = nullptr;};
    inline bool customizedPrometheus() const { DARABONBA_PTR_GET_DEFAULT(customizedPrometheus_, false) };
    inline UpdateMeshFeatureRequest& setCustomizedPrometheus(bool customizedPrometheus) { DARABONBA_PTR_SET_VALUE(customizedPrometheus_, customizedPrometheus) };


    // customizedZipkin Field Functions 
    bool hasCustomizedZipkin() const { return this->customizedZipkin_ != nullptr;};
    void deleteCustomizedZipkin() { this->customizedZipkin_ = nullptr;};
    inline bool customizedZipkin() const { DARABONBA_PTR_GET_DEFAULT(customizedZipkin_, false) };
    inline UpdateMeshFeatureRequest& setCustomizedZipkin(bool customizedZipkin) { DARABONBA_PTR_SET_VALUE(customizedZipkin_, customizedZipkin) };


    // DNSProxyingEnabled Field Functions 
    bool hasDNSProxyingEnabled() const { return this->DNSProxyingEnabled_ != nullptr;};
    void deleteDNSProxyingEnabled() { this->DNSProxyingEnabled_ = nullptr;};
    inline bool DNSProxyingEnabled() const { DARABONBA_PTR_GET_DEFAULT(DNSProxyingEnabled_, false) };
    inline UpdateMeshFeatureRequest& setDNSProxyingEnabled(bool DNSProxyingEnabled) { DARABONBA_PTR_SET_VALUE(DNSProxyingEnabled_, DNSProxyingEnabled) };


    // defaultComponentsScheduleConfig Field Functions 
    bool hasDefaultComponentsScheduleConfig() const { return this->defaultComponentsScheduleConfig_ != nullptr;};
    void deleteDefaultComponentsScheduleConfig() { this->defaultComponentsScheduleConfig_ = nullptr;};
    inline string defaultComponentsScheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(defaultComponentsScheduleConfig_, "") };
    inline UpdateMeshFeatureRequest& setDefaultComponentsScheduleConfig(string defaultComponentsScheduleConfig) { DARABONBA_PTR_SET_VALUE(defaultComponentsScheduleConfig_, defaultComponentsScheduleConfig) };


    // discoverySelectors Field Functions 
    bool hasDiscoverySelectors() const { return this->discoverySelectors_ != nullptr;};
    void deleteDiscoverySelectors() { this->discoverySelectors_ = nullptr;};
    inline string discoverySelectors() const { DARABONBA_PTR_GET_DEFAULT(discoverySelectors_, "") };
    inline UpdateMeshFeatureRequest& setDiscoverySelectors(string discoverySelectors) { DARABONBA_PTR_SET_VALUE(discoverySelectors_, discoverySelectors) };


    // dubboFilterEnabled Field Functions 
    bool hasDubboFilterEnabled() const { return this->dubboFilterEnabled_ != nullptr;};
    void deleteDubboFilterEnabled() { this->dubboFilterEnabled_ = nullptr;};
    inline bool dubboFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(dubboFilterEnabled_, false) };
    inline UpdateMeshFeatureRequest& setDubboFilterEnabled(bool dubboFilterEnabled) { DARABONBA_PTR_SET_VALUE(dubboFilterEnabled_, dubboFilterEnabled) };


    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool enableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline UpdateMeshFeatureRequest& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


    // enableAutoDiagnosis Field Functions 
    bool hasEnableAutoDiagnosis() const { return this->enableAutoDiagnosis_ != nullptr;};
    void deleteEnableAutoDiagnosis() { this->enableAutoDiagnosis_ = nullptr;};
    inline bool enableAutoDiagnosis() const { DARABONBA_PTR_GET_DEFAULT(enableAutoDiagnosis_, false) };
    inline UpdateMeshFeatureRequest& setEnableAutoDiagnosis(bool enableAutoDiagnosis) { DARABONBA_PTR_SET_VALUE(enableAutoDiagnosis_, enableAutoDiagnosis) };


    // enableBootstrapXdsAgent Field Functions 
    bool hasEnableBootstrapXdsAgent() const { return this->enableBootstrapXdsAgent_ != nullptr;};
    void deleteEnableBootstrapXdsAgent() { this->enableBootstrapXdsAgent_ = nullptr;};
    inline bool enableBootstrapXdsAgent() const { DARABONBA_PTR_GET_DEFAULT(enableBootstrapXdsAgent_, false) };
    inline UpdateMeshFeatureRequest& setEnableBootstrapXdsAgent(bool enableBootstrapXdsAgent) { DARABONBA_PTR_SET_VALUE(enableBootstrapXdsAgent_, enableBootstrapXdsAgent) };


    // enableCRHistory Field Functions 
    bool hasEnableCRHistory() const { return this->enableCRHistory_ != nullptr;};
    void deleteEnableCRHistory() { this->enableCRHistory_ = nullptr;};
    inline bool enableCRHistory() const { DARABONBA_PTR_GET_DEFAULT(enableCRHistory_, false) };
    inline UpdateMeshFeatureRequest& setEnableCRHistory(bool enableCRHistory) { DARABONBA_PTR_SET_VALUE(enableCRHistory_, enableCRHistory) };


    // enableNamespacesByDefault Field Functions 
    bool hasEnableNamespacesByDefault() const { return this->enableNamespacesByDefault_ != nullptr;};
    void deleteEnableNamespacesByDefault() { this->enableNamespacesByDefault_ = nullptr;};
    inline bool enableNamespacesByDefault() const { DARABONBA_PTR_GET_DEFAULT(enableNamespacesByDefault_, false) };
    inline UpdateMeshFeatureRequest& setEnableNamespacesByDefault(bool enableNamespacesByDefault) { DARABONBA_PTR_SET_VALUE(enableNamespacesByDefault_, enableNamespacesByDefault) };


    // enableSDSServer Field Functions 
    bool hasEnableSDSServer() const { return this->enableSDSServer_ != nullptr;};
    void deleteEnableSDSServer() { this->enableSDSServer_ = nullptr;};
    inline bool enableSDSServer() const { DARABONBA_PTR_GET_DEFAULT(enableSDSServer_, false) };
    inline UpdateMeshFeatureRequest& setEnableSDSServer(bool enableSDSServer) { DARABONBA_PTR_SET_VALUE(enableSDSServer_, enableSDSServer) };


    // excludeIPRanges Field Functions 
    bool hasExcludeIPRanges() const { return this->excludeIPRanges_ != nullptr;};
    void deleteExcludeIPRanges() { this->excludeIPRanges_ = nullptr;};
    inline string excludeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(excludeIPRanges_, "") };
    inline UpdateMeshFeatureRequest& setExcludeIPRanges(string excludeIPRanges) { DARABONBA_PTR_SET_VALUE(excludeIPRanges_, excludeIPRanges) };


    // excludeInboundPorts Field Functions 
    bool hasExcludeInboundPorts() const { return this->excludeInboundPorts_ != nullptr;};
    void deleteExcludeInboundPorts() { this->excludeInboundPorts_ = nullptr;};
    inline string excludeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeInboundPorts_, "") };
    inline UpdateMeshFeatureRequest& setExcludeInboundPorts(string excludeInboundPorts) { DARABONBA_PTR_SET_VALUE(excludeInboundPorts_, excludeInboundPorts) };


    // excludeOutboundPorts Field Functions 
    bool hasExcludeOutboundPorts() const { return this->excludeOutboundPorts_ != nullptr;};
    void deleteExcludeOutboundPorts() { this->excludeOutboundPorts_ = nullptr;};
    inline string excludeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundPorts_, "") };
    inline UpdateMeshFeatureRequest& setExcludeOutboundPorts(string excludeOutboundPorts) { DARABONBA_PTR_SET_VALUE(excludeOutboundPorts_, excludeOutboundPorts) };


    // existingCaCert Field Functions 
    bool hasExistingCaCert() const { return this->existingCaCert_ != nullptr;};
    void deleteExistingCaCert() { this->existingCaCert_ = nullptr;};
    inline string existingCaCert() const { DARABONBA_PTR_GET_DEFAULT(existingCaCert_, "") };
    inline UpdateMeshFeatureRequest& setExistingCaCert(string existingCaCert) { DARABONBA_PTR_SET_VALUE(existingCaCert_, existingCaCert) };


    // existingCaKey Field Functions 
    bool hasExistingCaKey() const { return this->existingCaKey_ != nullptr;};
    void deleteExistingCaKey() { this->existingCaKey_ = nullptr;};
    inline string existingCaKey() const { DARABONBA_PTR_GET_DEFAULT(existingCaKey_, "") };
    inline UpdateMeshFeatureRequest& setExistingCaKey(string existingCaKey) { DARABONBA_PTR_SET_VALUE(existingCaKey_, existingCaKey) };


    // existingRootCaCert Field Functions 
    bool hasExistingRootCaCert() const { return this->existingRootCaCert_ != nullptr;};
    void deleteExistingRootCaCert() { this->existingRootCaCert_ = nullptr;};
    inline string existingRootCaCert() const { DARABONBA_PTR_GET_DEFAULT(existingRootCaCert_, "") };
    inline UpdateMeshFeatureRequest& setExistingRootCaCert(string existingRootCaCert) { DARABONBA_PTR_SET_VALUE(existingRootCaCert_, existingRootCaCert) };


    // filterGatewayClusterConfig Field Functions 
    bool hasFilterGatewayClusterConfig() const { return this->filterGatewayClusterConfig_ != nullptr;};
    void deleteFilterGatewayClusterConfig() { this->filterGatewayClusterConfig_ = nullptr;};
    inline bool filterGatewayClusterConfig() const { DARABONBA_PTR_GET_DEFAULT(filterGatewayClusterConfig_, false) };
    inline UpdateMeshFeatureRequest& setFilterGatewayClusterConfig(bool filterGatewayClusterConfig) { DARABONBA_PTR_SET_VALUE(filterGatewayClusterConfig_, filterGatewayClusterConfig) };


    // gatewayAPIEnabled Field Functions 
    bool hasGatewayAPIEnabled() const { return this->gatewayAPIEnabled_ != nullptr;};
    void deleteGatewayAPIEnabled() { this->gatewayAPIEnabled_ = nullptr;};
    inline bool gatewayAPIEnabled() const { DARABONBA_PTR_GET_DEFAULT(gatewayAPIEnabled_, false) };
    inline UpdateMeshFeatureRequest& setGatewayAPIEnabled(bool gatewayAPIEnabled) { DARABONBA_PTR_SET_VALUE(gatewayAPIEnabled_, gatewayAPIEnabled) };


    // holdApplicationUntilProxyStarts Field Functions 
    bool hasHoldApplicationUntilProxyStarts() const { return this->holdApplicationUntilProxyStarts_ != nullptr;};
    void deleteHoldApplicationUntilProxyStarts() { this->holdApplicationUntilProxyStarts_ = nullptr;};
    inline bool holdApplicationUntilProxyStarts() const { DARABONBA_PTR_GET_DEFAULT(holdApplicationUntilProxyStarts_, false) };
    inline UpdateMeshFeatureRequest& setHoldApplicationUntilProxyStarts(bool holdApplicationUntilProxyStarts) { DARABONBA_PTR_SET_VALUE(holdApplicationUntilProxyStarts_, holdApplicationUntilProxyStarts) };


    // http10Enabled Field Functions 
    bool hasHttp10Enabled() const { return this->http10Enabled_ != nullptr;};
    void deleteHttp10Enabled() { this->http10Enabled_ = nullptr;};
    inline bool http10Enabled() const { DARABONBA_PTR_GET_DEFAULT(http10Enabled_, false) };
    inline UpdateMeshFeatureRequest& setHttp10Enabled(bool http10Enabled) { DARABONBA_PTR_SET_VALUE(http10Enabled_, http10Enabled) };


    // includeIPRanges Field Functions 
    bool hasIncludeIPRanges() const { return this->includeIPRanges_ != nullptr;};
    void deleteIncludeIPRanges() { this->includeIPRanges_ = nullptr;};
    inline string includeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(includeIPRanges_, "") };
    inline UpdateMeshFeatureRequest& setIncludeIPRanges(string includeIPRanges) { DARABONBA_PTR_SET_VALUE(includeIPRanges_, includeIPRanges) };


    // includeInboundPorts Field Functions 
    bool hasIncludeInboundPorts() const { return this->includeInboundPorts_ != nullptr;};
    void deleteIncludeInboundPorts() { this->includeInboundPorts_ = nullptr;};
    inline string includeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeInboundPorts_, "") };
    inline UpdateMeshFeatureRequest& setIncludeInboundPorts(string includeInboundPorts) { DARABONBA_PTR_SET_VALUE(includeInboundPorts_, includeInboundPorts) };


    // includeOutboundPorts Field Functions 
    bool hasIncludeOutboundPorts() const { return this->includeOutboundPorts_ != nullptr;};
    void deleteIncludeOutboundPorts() { this->includeOutboundPorts_ = nullptr;};
    inline string includeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeOutboundPorts_, "") };
    inline UpdateMeshFeatureRequest& setIncludeOutboundPorts(string includeOutboundPorts) { DARABONBA_PTR_SET_VALUE(includeOutboundPorts_, includeOutboundPorts) };


    // integrateKiali Field Functions 
    bool hasIntegrateKiali() const { return this->integrateKiali_ != nullptr;};
    void deleteIntegrateKiali() { this->integrateKiali_ = nullptr;};
    inline bool integrateKiali() const { DARABONBA_PTR_GET_DEFAULT(integrateKiali_, false) };
    inline UpdateMeshFeatureRequest& setIntegrateKiali(bool integrateKiali) { DARABONBA_PTR_SET_VALUE(integrateKiali_, integrateKiali) };


    // interceptionMode Field Functions 
    bool hasInterceptionMode() const { return this->interceptionMode_ != nullptr;};
    void deleteInterceptionMode() { this->interceptionMode_ = nullptr;};
    inline string interceptionMode() const { DARABONBA_PTR_GET_DEFAULT(interceptionMode_, "") };
    inline UpdateMeshFeatureRequest& setInterceptionMode(string interceptionMode) { DARABONBA_PTR_SET_VALUE(interceptionMode_, interceptionMode) };


    // kialiArmsAuthTokens Field Functions 
    bool hasKialiArmsAuthTokens() const { return this->kialiArmsAuthTokens_ != nullptr;};
    void deleteKialiArmsAuthTokens() { this->kialiArmsAuthTokens_ = nullptr;};
    inline string kialiArmsAuthTokens() const { DARABONBA_PTR_GET_DEFAULT(kialiArmsAuthTokens_, "") };
    inline UpdateMeshFeatureRequest& setKialiArmsAuthTokens(string kialiArmsAuthTokens) { DARABONBA_PTR_SET_VALUE(kialiArmsAuthTokens_, kialiArmsAuthTokens) };


    // kialiEnabled Field Functions 
    bool hasKialiEnabled() const { return this->kialiEnabled_ != nullptr;};
    void deleteKialiEnabled() { this->kialiEnabled_ = nullptr;};
    inline bool kialiEnabled() const { DARABONBA_PTR_GET_DEFAULT(kialiEnabled_, false) };
    inline UpdateMeshFeatureRequest& setKialiEnabled(bool kialiEnabled) { DARABONBA_PTR_SET_VALUE(kialiEnabled_, kialiEnabled) };


    // kialiServiceAnnotations Field Functions 
    bool hasKialiServiceAnnotations() const { return this->kialiServiceAnnotations_ != nullptr;};
    void deleteKialiServiceAnnotations() { this->kialiServiceAnnotations_ = nullptr;};
    inline string kialiServiceAnnotations() const { DARABONBA_PTR_GET_DEFAULT(kialiServiceAnnotations_, "") };
    inline UpdateMeshFeatureRequest& setKialiServiceAnnotations(string kialiServiceAnnotations) { DARABONBA_PTR_SET_VALUE(kialiServiceAnnotations_, kialiServiceAnnotations) };


    // labelsForOffloadedWorkloads Field Functions 
    bool hasLabelsForOffloadedWorkloads() const { return this->labelsForOffloadedWorkloads_ != nullptr;};
    void deleteLabelsForOffloadedWorkloads() { this->labelsForOffloadedWorkloads_ = nullptr;};
    inline string labelsForOffloadedWorkloads() const { DARABONBA_PTR_GET_DEFAULT(labelsForOffloadedWorkloads_, "") };
    inline UpdateMeshFeatureRequest& setLabelsForOffloadedWorkloads(string labelsForOffloadedWorkloads) { DARABONBA_PTR_SET_VALUE(labelsForOffloadedWorkloads_, labelsForOffloadedWorkloads) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline UpdateMeshFeatureRequest& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // localityLBConf Field Functions 
    bool hasLocalityLBConf() const { return this->localityLBConf_ != nullptr;};
    void deleteLocalityLBConf() { this->localityLBConf_ = nullptr;};
    inline string localityLBConf() const { DARABONBA_PTR_GET_DEFAULT(localityLBConf_, "") };
    inline UpdateMeshFeatureRequest& setLocalityLBConf(string localityLBConf) { DARABONBA_PTR_SET_VALUE(localityLBConf_, localityLBConf) };


    // localityLoadBalancing Field Functions 
    bool hasLocalityLoadBalancing() const { return this->localityLoadBalancing_ != nullptr;};
    void deleteLocalityLoadBalancing() { this->localityLoadBalancing_ = nullptr;};
    inline bool localityLoadBalancing() const { DARABONBA_PTR_GET_DEFAULT(localityLoadBalancing_, false) };
    inline UpdateMeshFeatureRequest& setLocalityLoadBalancing(bool localityLoadBalancing) { DARABONBA_PTR_SET_VALUE(localityLoadBalancing_, localityLoadBalancing) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline UpdateMeshFeatureRequest& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // MSEEnabled Field Functions 
    bool hasMSEEnabled() const { return this->MSEEnabled_ != nullptr;};
    void deleteMSEEnabled() { this->MSEEnabled_ = nullptr;};
    inline bool MSEEnabled() const { DARABONBA_PTR_GET_DEFAULT(MSEEnabled_, false) };
    inline UpdateMeshFeatureRequest& setMSEEnabled(bool MSEEnabled) { DARABONBA_PTR_SET_VALUE(MSEEnabled_, MSEEnabled) };


    // multiBufferEnabled Field Functions 
    bool hasMultiBufferEnabled() const { return this->multiBufferEnabled_ != nullptr;};
    void deleteMultiBufferEnabled() { this->multiBufferEnabled_ = nullptr;};
    inline bool multiBufferEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiBufferEnabled_, false) };
    inline UpdateMeshFeatureRequest& setMultiBufferEnabled(bool multiBufferEnabled) { DARABONBA_PTR_SET_VALUE(multiBufferEnabled_, multiBufferEnabled) };


    // multiBufferPollDelay Field Functions 
    bool hasMultiBufferPollDelay() const { return this->multiBufferPollDelay_ != nullptr;};
    void deleteMultiBufferPollDelay() { this->multiBufferPollDelay_ = nullptr;};
    inline string multiBufferPollDelay() const { DARABONBA_PTR_GET_DEFAULT(multiBufferPollDelay_, "") };
    inline UpdateMeshFeatureRequest& setMultiBufferPollDelay(string multiBufferPollDelay) { DARABONBA_PTR_SET_VALUE(multiBufferPollDelay_, multiBufferPollDelay) };


    // mysqlFilterEnabled Field Functions 
    bool hasMysqlFilterEnabled() const { return this->mysqlFilterEnabled_ != nullptr;};
    void deleteMysqlFilterEnabled() { this->mysqlFilterEnabled_ = nullptr;};
    inline bool mysqlFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(mysqlFilterEnabled_, false) };
    inline UpdateMeshFeatureRequest& setMysqlFilterEnabled(bool mysqlFilterEnabled) { DARABONBA_PTR_SET_VALUE(mysqlFilterEnabled_, mysqlFilterEnabled) };


    // NFDEnabled Field Functions 
    bool hasNFDEnabled() const { return this->NFDEnabled_ != nullptr;};
    void deleteNFDEnabled() { this->NFDEnabled_ = nullptr;};
    inline bool NFDEnabled() const { DARABONBA_PTR_GET_DEFAULT(NFDEnabled_, false) };
    inline UpdateMeshFeatureRequest& setNFDEnabled(bool NFDEnabled) { DARABONBA_PTR_SET_VALUE(NFDEnabled_, NFDEnabled) };


    // NFDLabelPruned Field Functions 
    bool hasNFDLabelPruned() const { return this->NFDLabelPruned_ != nullptr;};
    void deleteNFDLabelPruned() { this->NFDLabelPruned_ = nullptr;};
    inline bool NFDLabelPruned() const { DARABONBA_PTR_GET_DEFAULT(NFDLabelPruned_, false) };
    inline UpdateMeshFeatureRequest& setNFDLabelPruned(bool NFDLabelPruned) { DARABONBA_PTR_SET_VALUE(NFDLabelPruned_, NFDLabelPruned) };


    // OPAInjectorCPULimit Field Functions 
    bool hasOPAInjectorCPULimit() const { return this->OPAInjectorCPULimit_ != nullptr;};
    void deleteOPAInjectorCPULimit() { this->OPAInjectorCPULimit_ = nullptr;};
    inline string OPAInjectorCPULimit() const { DARABONBA_PTR_GET_DEFAULT(OPAInjectorCPULimit_, "") };
    inline UpdateMeshFeatureRequest& setOPAInjectorCPULimit(string OPAInjectorCPULimit) { DARABONBA_PTR_SET_VALUE(OPAInjectorCPULimit_, OPAInjectorCPULimit) };


    // OPAInjectorCPURequirement Field Functions 
    bool hasOPAInjectorCPURequirement() const { return this->OPAInjectorCPURequirement_ != nullptr;};
    void deleteOPAInjectorCPURequirement() { this->OPAInjectorCPURequirement_ = nullptr;};
    inline string OPAInjectorCPURequirement() const { DARABONBA_PTR_GET_DEFAULT(OPAInjectorCPURequirement_, "") };
    inline UpdateMeshFeatureRequest& setOPAInjectorCPURequirement(string OPAInjectorCPURequirement) { DARABONBA_PTR_SET_VALUE(OPAInjectorCPURequirement_, OPAInjectorCPURequirement) };


    // OPAInjectorMemoryLimit Field Functions 
    bool hasOPAInjectorMemoryLimit() const { return this->OPAInjectorMemoryLimit_ != nullptr;};
    void deleteOPAInjectorMemoryLimit() { this->OPAInjectorMemoryLimit_ = nullptr;};
    inline string OPAInjectorMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(OPAInjectorMemoryLimit_, "") };
    inline UpdateMeshFeatureRequest& setOPAInjectorMemoryLimit(string OPAInjectorMemoryLimit) { DARABONBA_PTR_SET_VALUE(OPAInjectorMemoryLimit_, OPAInjectorMemoryLimit) };


    // OPAInjectorMemoryRequirement Field Functions 
    bool hasOPAInjectorMemoryRequirement() const { return this->OPAInjectorMemoryRequirement_ != nullptr;};
    void deleteOPAInjectorMemoryRequirement() { this->OPAInjectorMemoryRequirement_ = nullptr;};
    inline string OPAInjectorMemoryRequirement() const { DARABONBA_PTR_GET_DEFAULT(OPAInjectorMemoryRequirement_, "") };
    inline UpdateMeshFeatureRequest& setOPAInjectorMemoryRequirement(string OPAInjectorMemoryRequirement) { DARABONBA_PTR_SET_VALUE(OPAInjectorMemoryRequirement_, OPAInjectorMemoryRequirement) };


    // OPALimitCPU Field Functions 
    bool hasOPALimitCPU() const { return this->OPALimitCPU_ != nullptr;};
    void deleteOPALimitCPU() { this->OPALimitCPU_ = nullptr;};
    inline string OPALimitCPU() const { DARABONBA_PTR_GET_DEFAULT(OPALimitCPU_, "") };
    inline UpdateMeshFeatureRequest& setOPALimitCPU(string OPALimitCPU) { DARABONBA_PTR_SET_VALUE(OPALimitCPU_, OPALimitCPU) };


    // OPALimitMemory Field Functions 
    bool hasOPALimitMemory() const { return this->OPALimitMemory_ != nullptr;};
    void deleteOPALimitMemory() { this->OPALimitMemory_ = nullptr;};
    inline string OPALimitMemory() const { DARABONBA_PTR_GET_DEFAULT(OPALimitMemory_, "") };
    inline UpdateMeshFeatureRequest& setOPALimitMemory(string OPALimitMemory) { DARABONBA_PTR_SET_VALUE(OPALimitMemory_, OPALimitMemory) };


    // OPALogLevel Field Functions 
    bool hasOPALogLevel() const { return this->OPALogLevel_ != nullptr;};
    void deleteOPALogLevel() { this->OPALogLevel_ = nullptr;};
    inline string OPALogLevel() const { DARABONBA_PTR_GET_DEFAULT(OPALogLevel_, "") };
    inline UpdateMeshFeatureRequest& setOPALogLevel(string OPALogLevel) { DARABONBA_PTR_SET_VALUE(OPALogLevel_, OPALogLevel) };


    // OPARequestCPU Field Functions 
    bool hasOPARequestCPU() const { return this->OPARequestCPU_ != nullptr;};
    void deleteOPARequestCPU() { this->OPARequestCPU_ = nullptr;};
    inline string OPARequestCPU() const { DARABONBA_PTR_GET_DEFAULT(OPARequestCPU_, "") };
    inline UpdateMeshFeatureRequest& setOPARequestCPU(string OPARequestCPU) { DARABONBA_PTR_SET_VALUE(OPARequestCPU_, OPARequestCPU) };


    // OPARequestMemory Field Functions 
    bool hasOPARequestMemory() const { return this->OPARequestMemory_ != nullptr;};
    void deleteOPARequestMemory() { this->OPARequestMemory_ = nullptr;};
    inline string OPARequestMemory() const { DARABONBA_PTR_GET_DEFAULT(OPARequestMemory_, "") };
    inline UpdateMeshFeatureRequest& setOPARequestMemory(string OPARequestMemory) { DARABONBA_PTR_SET_VALUE(OPARequestMemory_, OPARequestMemory) };


    // OPAScopeInjected Field Functions 
    bool hasOPAScopeInjected() const { return this->OPAScopeInjected_ != nullptr;};
    void deleteOPAScopeInjected() { this->OPAScopeInjected_ = nullptr;};
    inline bool OPAScopeInjected() const { DARABONBA_PTR_GET_DEFAULT(OPAScopeInjected_, false) };
    inline UpdateMeshFeatureRequest& setOPAScopeInjected(bool OPAScopeInjected) { DARABONBA_PTR_SET_VALUE(OPAScopeInjected_, OPAScopeInjected) };


    // opaEnabled Field Functions 
    bool hasOpaEnabled() const { return this->opaEnabled_ != nullptr;};
    void deleteOpaEnabled() { this->opaEnabled_ = nullptr;};
    inline bool opaEnabled() const { DARABONBA_PTR_GET_DEFAULT(opaEnabled_, false) };
    inline UpdateMeshFeatureRequest& setOpaEnabled(bool opaEnabled) { DARABONBA_PTR_SET_VALUE(opaEnabled_, opaEnabled) };


    // openAgentPolicy Field Functions 
    bool hasOpenAgentPolicy() const { return this->openAgentPolicy_ != nullptr;};
    void deleteOpenAgentPolicy() { this->openAgentPolicy_ = nullptr;};
    inline bool openAgentPolicy() const { DARABONBA_PTR_GET_DEFAULT(openAgentPolicy_, false) };
    inline UpdateMeshFeatureRequest& setOpenAgentPolicy(bool openAgentPolicy) { DARABONBA_PTR_SET_VALUE(openAgentPolicy_, openAgentPolicy) };


    // outboundTrafficPolicy Field Functions 
    bool hasOutboundTrafficPolicy() const { return this->outboundTrafficPolicy_ != nullptr;};
    void deleteOutboundTrafficPolicy() { this->outboundTrafficPolicy_ = nullptr;};
    inline string outboundTrafficPolicy() const { DARABONBA_PTR_GET_DEFAULT(outboundTrafficPolicy_, "") };
    inline UpdateMeshFeatureRequest& setOutboundTrafficPolicy(string outboundTrafficPolicy) { DARABONBA_PTR_SET_VALUE(outboundTrafficPolicy_, outboundTrafficPolicy) };


    // pilotEnableQuicListeners Field Functions 
    bool hasPilotEnableQuicListeners() const { return this->pilotEnableQuicListeners_ != nullptr;};
    void deletePilotEnableQuicListeners() { this->pilotEnableQuicListeners_ = nullptr;};
    inline bool pilotEnableQuicListeners() const { DARABONBA_PTR_GET_DEFAULT(pilotEnableQuicListeners_, false) };
    inline UpdateMeshFeatureRequest& setPilotEnableQuicListeners(bool pilotEnableQuicListeners) { DARABONBA_PTR_SET_VALUE(pilotEnableQuicListeners_, pilotEnableQuicListeners) };


    // prometheusUrl Field Functions 
    bool hasPrometheusUrl() const { return this->prometheusUrl_ != nullptr;};
    void deletePrometheusUrl() { this->prometheusUrl_ = nullptr;};
    inline string prometheusUrl() const { DARABONBA_PTR_GET_DEFAULT(prometheusUrl_, "") };
    inline UpdateMeshFeatureRequest& setPrometheusUrl(string prometheusUrl) { DARABONBA_PTR_SET_VALUE(prometheusUrl_, prometheusUrl) };


    // proxyInitCPUResourceLimit Field Functions 
    bool hasProxyInitCPUResourceLimit() const { return this->proxyInitCPUResourceLimit_ != nullptr;};
    void deleteProxyInitCPUResourceLimit() { this->proxyInitCPUResourceLimit_ = nullptr;};
    inline string proxyInitCPUResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitCPUResourceLimit_, "") };
    inline UpdateMeshFeatureRequest& setProxyInitCPUResourceLimit(string proxyInitCPUResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitCPUResourceLimit_, proxyInitCPUResourceLimit) };


    // proxyInitCPUResourceRequest Field Functions 
    bool hasProxyInitCPUResourceRequest() const { return this->proxyInitCPUResourceRequest_ != nullptr;};
    void deleteProxyInitCPUResourceRequest() { this->proxyInitCPUResourceRequest_ = nullptr;};
    inline string proxyInitCPUResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitCPUResourceRequest_, "") };
    inline UpdateMeshFeatureRequest& setProxyInitCPUResourceRequest(string proxyInitCPUResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitCPUResourceRequest_, proxyInitCPUResourceRequest) };


    // proxyInitMemoryResourceLimit Field Functions 
    bool hasProxyInitMemoryResourceLimit() const { return this->proxyInitMemoryResourceLimit_ != nullptr;};
    void deleteProxyInitMemoryResourceLimit() { this->proxyInitMemoryResourceLimit_ = nullptr;};
    inline string proxyInitMemoryResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitMemoryResourceLimit_, "") };
    inline UpdateMeshFeatureRequest& setProxyInitMemoryResourceLimit(string proxyInitMemoryResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitMemoryResourceLimit_, proxyInitMemoryResourceLimit) };


    // proxyInitMemoryResourceRequest Field Functions 
    bool hasProxyInitMemoryResourceRequest() const { return this->proxyInitMemoryResourceRequest_ != nullptr;};
    void deleteProxyInitMemoryResourceRequest() { this->proxyInitMemoryResourceRequest_ = nullptr;};
    inline string proxyInitMemoryResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitMemoryResourceRequest_, "") };
    inline UpdateMeshFeatureRequest& setProxyInitMemoryResourceRequest(string proxyInitMemoryResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitMemoryResourceRequest_, proxyInitMemoryResourceRequest) };


    // proxyLimitCPU Field Functions 
    bool hasProxyLimitCPU() const { return this->proxyLimitCPU_ != nullptr;};
    void deleteProxyLimitCPU() { this->proxyLimitCPU_ = nullptr;};
    inline string proxyLimitCPU() const { DARABONBA_PTR_GET_DEFAULT(proxyLimitCPU_, "") };
    inline UpdateMeshFeatureRequest& setProxyLimitCPU(string proxyLimitCPU) { DARABONBA_PTR_SET_VALUE(proxyLimitCPU_, proxyLimitCPU) };


    // proxyLimitMemory Field Functions 
    bool hasProxyLimitMemory() const { return this->proxyLimitMemory_ != nullptr;};
    void deleteProxyLimitMemory() { this->proxyLimitMemory_ = nullptr;};
    inline string proxyLimitMemory() const { DARABONBA_PTR_GET_DEFAULT(proxyLimitMemory_, "") };
    inline UpdateMeshFeatureRequest& setProxyLimitMemory(string proxyLimitMemory) { DARABONBA_PTR_SET_VALUE(proxyLimitMemory_, proxyLimitMemory) };


    // proxyRequestCPU Field Functions 
    bool hasProxyRequestCPU() const { return this->proxyRequestCPU_ != nullptr;};
    void deleteProxyRequestCPU() { this->proxyRequestCPU_ = nullptr;};
    inline string proxyRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(proxyRequestCPU_, "") };
    inline UpdateMeshFeatureRequest& setProxyRequestCPU(string proxyRequestCPU) { DARABONBA_PTR_SET_VALUE(proxyRequestCPU_, proxyRequestCPU) };


    // proxyRequestMemory Field Functions 
    bool hasProxyRequestMemory() const { return this->proxyRequestMemory_ != nullptr;};
    void deleteProxyRequestMemory() { this->proxyRequestMemory_ = nullptr;};
    inline string proxyRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(proxyRequestMemory_, "") };
    inline UpdateMeshFeatureRequest& setProxyRequestMemory(string proxyRequestMemory) { DARABONBA_PTR_SET_VALUE(proxyRequestMemory_, proxyRequestMemory) };


    // proxyStatsMatcher Field Functions 
    bool hasProxyStatsMatcher() const { return this->proxyStatsMatcher_ != nullptr;};
    void deleteProxyStatsMatcher() { this->proxyStatsMatcher_ = nullptr;};
    inline string proxyStatsMatcher() const { DARABONBA_PTR_GET_DEFAULT(proxyStatsMatcher_, "") };
    inline UpdateMeshFeatureRequest& setProxyStatsMatcher(string proxyStatsMatcher) { DARABONBA_PTR_SET_VALUE(proxyStatsMatcher_, proxyStatsMatcher) };


    // redisFilterEnabled Field Functions 
    bool hasRedisFilterEnabled() const { return this->redisFilterEnabled_ != nullptr;};
    void deleteRedisFilterEnabled() { this->redisFilterEnabled_ = nullptr;};
    inline bool redisFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(redisFilterEnabled_, false) };
    inline UpdateMeshFeatureRequest& setRedisFilterEnabled(bool redisFilterEnabled) { DARABONBA_PTR_SET_VALUE(redisFilterEnabled_, redisFilterEnabled) };


    // SMCEnabled Field Functions 
    bool hasSMCEnabled() const { return this->SMCEnabled_ != nullptr;};
    void deleteSMCEnabled() { this->SMCEnabled_ = nullptr;};
    inline bool SMCEnabled() const { DARABONBA_PTR_GET_DEFAULT(SMCEnabled_, false) };
    inline UpdateMeshFeatureRequest& setSMCEnabled(bool SMCEnabled) { DARABONBA_PTR_SET_VALUE(SMCEnabled_, SMCEnabled) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateMeshFeatureRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // sidecarInjectorLimitCPU Field Functions 
    bool hasSidecarInjectorLimitCPU() const { return this->sidecarInjectorLimitCPU_ != nullptr;};
    void deleteSidecarInjectorLimitCPU() { this->sidecarInjectorLimitCPU_ = nullptr;};
    inline string sidecarInjectorLimitCPU() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorLimitCPU_, "") };
    inline UpdateMeshFeatureRequest& setSidecarInjectorLimitCPU(string sidecarInjectorLimitCPU) { DARABONBA_PTR_SET_VALUE(sidecarInjectorLimitCPU_, sidecarInjectorLimitCPU) };


    // sidecarInjectorLimitMemory Field Functions 
    bool hasSidecarInjectorLimitMemory() const { return this->sidecarInjectorLimitMemory_ != nullptr;};
    void deleteSidecarInjectorLimitMemory() { this->sidecarInjectorLimitMemory_ = nullptr;};
    inline string sidecarInjectorLimitMemory() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorLimitMemory_, "") };
    inline UpdateMeshFeatureRequest& setSidecarInjectorLimitMemory(string sidecarInjectorLimitMemory) { DARABONBA_PTR_SET_VALUE(sidecarInjectorLimitMemory_, sidecarInjectorLimitMemory) };


    // sidecarInjectorRequestCPU Field Functions 
    bool hasSidecarInjectorRequestCPU() const { return this->sidecarInjectorRequestCPU_ != nullptr;};
    void deleteSidecarInjectorRequestCPU() { this->sidecarInjectorRequestCPU_ = nullptr;};
    inline string sidecarInjectorRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorRequestCPU_, "") };
    inline UpdateMeshFeatureRequest& setSidecarInjectorRequestCPU(string sidecarInjectorRequestCPU) { DARABONBA_PTR_SET_VALUE(sidecarInjectorRequestCPU_, sidecarInjectorRequestCPU) };


    // sidecarInjectorRequestMemory Field Functions 
    bool hasSidecarInjectorRequestMemory() const { return this->sidecarInjectorRequestMemory_ != nullptr;};
    void deleteSidecarInjectorRequestMemory() { this->sidecarInjectorRequestMemory_ = nullptr;};
    inline string sidecarInjectorRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorRequestMemory_, "") };
    inline UpdateMeshFeatureRequest& setSidecarInjectorRequestMemory(string sidecarInjectorRequestMemory) { DARABONBA_PTR_SET_VALUE(sidecarInjectorRequestMemory_, sidecarInjectorRequestMemory) };


    // sidecarInjectorWebhookAsYaml Field Functions 
    bool hasSidecarInjectorWebhookAsYaml() const { return this->sidecarInjectorWebhookAsYaml_ != nullptr;};
    void deleteSidecarInjectorWebhookAsYaml() { this->sidecarInjectorWebhookAsYaml_ = nullptr;};
    inline string sidecarInjectorWebhookAsYaml() const { DARABONBA_PTR_GET_DEFAULT(sidecarInjectorWebhookAsYaml_, "") };
    inline UpdateMeshFeatureRequest& setSidecarInjectorWebhookAsYaml(string sidecarInjectorWebhookAsYaml) { DARABONBA_PTR_SET_VALUE(sidecarInjectorWebhookAsYaml_, sidecarInjectorWebhookAsYaml) };


    // telemetry Field Functions 
    bool hasTelemetry() const { return this->telemetry_ != nullptr;};
    void deleteTelemetry() { this->telemetry_ = nullptr;};
    inline bool telemetry() const { DARABONBA_PTR_GET_DEFAULT(telemetry_, false) };
    inline UpdateMeshFeatureRequest& setTelemetry(bool telemetry) { DARABONBA_PTR_SET_VALUE(telemetry_, telemetry) };


    // terminationDrainDuration Field Functions 
    bool hasTerminationDrainDuration() const { return this->terminationDrainDuration_ != nullptr;};
    void deleteTerminationDrainDuration() { this->terminationDrainDuration_ = nullptr;};
    inline string terminationDrainDuration() const { DARABONBA_PTR_GET_DEFAULT(terminationDrainDuration_, "") };
    inline UpdateMeshFeatureRequest& setTerminationDrainDuration(string terminationDrainDuration) { DARABONBA_PTR_SET_VALUE(terminationDrainDuration_, terminationDrainDuration) };


    // thriftFilterEnabled Field Functions 
    bool hasThriftFilterEnabled() const { return this->thriftFilterEnabled_ != nullptr;};
    void deleteThriftFilterEnabled() { this->thriftFilterEnabled_ = nullptr;};
    inline bool thriftFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(thriftFilterEnabled_, false) };
    inline UpdateMeshFeatureRequest& setThriftFilterEnabled(bool thriftFilterEnabled) { DARABONBA_PTR_SET_VALUE(thriftFilterEnabled_, thriftFilterEnabled) };


    // traceCustomTags Field Functions 
    bool hasTraceCustomTags() const { return this->traceCustomTags_ != nullptr;};
    void deleteTraceCustomTags() { this->traceCustomTags_ = nullptr;};
    inline string traceCustomTags() const { DARABONBA_PTR_GET_DEFAULT(traceCustomTags_, "") };
    inline UpdateMeshFeatureRequest& setTraceCustomTags(string traceCustomTags) { DARABONBA_PTR_SET_VALUE(traceCustomTags_, traceCustomTags) };


    // traceMaxPathTagLength Field Functions 
    bool hasTraceMaxPathTagLength() const { return this->traceMaxPathTagLength_ != nullptr;};
    void deleteTraceMaxPathTagLength() { this->traceMaxPathTagLength_ = nullptr;};
    inline string traceMaxPathTagLength() const { DARABONBA_PTR_GET_DEFAULT(traceMaxPathTagLength_, "") };
    inline UpdateMeshFeatureRequest& setTraceMaxPathTagLength(string traceMaxPathTagLength) { DARABONBA_PTR_SET_VALUE(traceMaxPathTagLength_, traceMaxPathTagLength) };


    // traceSampling Field Functions 
    bool hasTraceSampling() const { return this->traceSampling_ != nullptr;};
    void deleteTraceSampling() { this->traceSampling_ = nullptr;};
    inline float traceSampling() const { DARABONBA_PTR_GET_DEFAULT(traceSampling_, 0.0) };
    inline UpdateMeshFeatureRequest& setTraceSampling(float traceSampling) { DARABONBA_PTR_SET_VALUE(traceSampling_, traceSampling) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline bool tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
    inline UpdateMeshFeatureRequest& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


    // tracingOnExtZipkinLimitCPU Field Functions 
    bool hasTracingOnExtZipkinLimitCPU() const { return this->tracingOnExtZipkinLimitCPU_ != nullptr;};
    void deleteTracingOnExtZipkinLimitCPU() { this->tracingOnExtZipkinLimitCPU_ = nullptr;};
    inline string tracingOnExtZipkinLimitCPU() const { DARABONBA_PTR_GET_DEFAULT(tracingOnExtZipkinLimitCPU_, "") };
    inline UpdateMeshFeatureRequest& setTracingOnExtZipkinLimitCPU(string tracingOnExtZipkinLimitCPU) { DARABONBA_PTR_SET_VALUE(tracingOnExtZipkinLimitCPU_, tracingOnExtZipkinLimitCPU) };


    // tracingOnExtZipkinLimitMemory Field Functions 
    bool hasTracingOnExtZipkinLimitMemory() const { return this->tracingOnExtZipkinLimitMemory_ != nullptr;};
    void deleteTracingOnExtZipkinLimitMemory() { this->tracingOnExtZipkinLimitMemory_ = nullptr;};
    inline string tracingOnExtZipkinLimitMemory() const { DARABONBA_PTR_GET_DEFAULT(tracingOnExtZipkinLimitMemory_, "") };
    inline UpdateMeshFeatureRequest& setTracingOnExtZipkinLimitMemory(string tracingOnExtZipkinLimitMemory) { DARABONBA_PTR_SET_VALUE(tracingOnExtZipkinLimitMemory_, tracingOnExtZipkinLimitMemory) };


    // tracingOnExtZipkinReplicaCount Field Functions 
    bool hasTracingOnExtZipkinReplicaCount() const { return this->tracingOnExtZipkinReplicaCount_ != nullptr;};
    void deleteTracingOnExtZipkinReplicaCount() { this->tracingOnExtZipkinReplicaCount_ = nullptr;};
    inline string tracingOnExtZipkinReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(tracingOnExtZipkinReplicaCount_, "") };
    inline UpdateMeshFeatureRequest& setTracingOnExtZipkinReplicaCount(string tracingOnExtZipkinReplicaCount) { DARABONBA_PTR_SET_VALUE(tracingOnExtZipkinReplicaCount_, tracingOnExtZipkinReplicaCount) };


    // tracingOnExtZipkinRequestCPU Field Functions 
    bool hasTracingOnExtZipkinRequestCPU() const { return this->tracingOnExtZipkinRequestCPU_ != nullptr;};
    void deleteTracingOnExtZipkinRequestCPU() { this->tracingOnExtZipkinRequestCPU_ = nullptr;};
    inline string tracingOnExtZipkinRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(tracingOnExtZipkinRequestCPU_, "") };
    inline UpdateMeshFeatureRequest& setTracingOnExtZipkinRequestCPU(string tracingOnExtZipkinRequestCPU) { DARABONBA_PTR_SET_VALUE(tracingOnExtZipkinRequestCPU_, tracingOnExtZipkinRequestCPU) };


    // tracingOnExtZipkinRequestMemory Field Functions 
    bool hasTracingOnExtZipkinRequestMemory() const { return this->tracingOnExtZipkinRequestMemory_ != nullptr;};
    void deleteTracingOnExtZipkinRequestMemory() { this->tracingOnExtZipkinRequestMemory_ = nullptr;};
    inline string tracingOnExtZipkinRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(tracingOnExtZipkinRequestMemory_, "") };
    inline UpdateMeshFeatureRequest& setTracingOnExtZipkinRequestMemory(string tracingOnExtZipkinRequestMemory) { DARABONBA_PTR_SET_VALUE(tracingOnExtZipkinRequestMemory_, tracingOnExtZipkinRequestMemory) };


    // webAssemblyFilterEnabled Field Functions 
    bool hasWebAssemblyFilterEnabled() const { return this->webAssemblyFilterEnabled_ != nullptr;};
    void deleteWebAssemblyFilterEnabled() { this->webAssemblyFilterEnabled_ = nullptr;};
    inline bool webAssemblyFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(webAssemblyFilterEnabled_, false) };
    inline UpdateMeshFeatureRequest& setWebAssemblyFilterEnabled(bool webAssemblyFilterEnabled) { DARABONBA_PTR_SET_VALUE(webAssemblyFilterEnabled_, webAssemblyFilterEnabled) };


  protected:
    // Specifies whether to enable access log collection. Valid values:
    // 
    // *   `true`: enables access log collection.
    // *   `false`: disables access log collection.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> accessLogEnabled_ = nullptr;
    // Specifies whether to enable access logging. Valid values:
    // 
    // *   `""`: disables access logging.
    // *   `/dev/stdout`: enables access logging. Access logs are written to /dev/stdout.
    std::shared_ptr<string> accessLogFile_ = nullptr;
    // The custom format of access logs. To set this parameter, make sure that you have enabled access log collection. The value must be a JSON string. The following key names must be contained: authority_for, bytes_received, bytes_sent, downstream_local_address, downstream_remote_address, duration, istio_policy_status, method, path, protocol, requested_server_name, response_code, response_flags, route_name, start_time, trace_id, upstream_cluster, upstream_host, upstream_local_address, upstream_service_time, upstream_transport_failure_reason, user_agent, and x_forwarded_for.
    std::shared_ptr<string> accessLogFormat_ = nullptr;
    // Specifies whether to enable the collection of access logs of ASM gateways to Simple Log Service.
    std::shared_ptr<bool> accessLogGatewayEnabled_ = nullptr;
    // The retention period for the access logs of the sidecar proxy. Unit: day. The logs are collected by using Log Service. For example, `30` indicates 30 days.
    std::shared_ptr<int32_t> accessLogGatewayLifecycle_ = nullptr;
    // The custom project on which the Log Service collects logs.
    std::shared_ptr<string> accessLogProject_ = nullptr;
    // Specifies whether to enable gRPC Access Log Service (ALS) for Envoy. Valid values:
    // 
    // *   `true`: enables gRPC ALS for Envoy.
    // *   `false`: disables gRPC ALS for Envoy.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> accessLogServiceEnabled_ = nullptr;
    // The endpoint of gRPC ALS for Envoy.
    std::shared_ptr<string> accessLogServiceHost_ = nullptr;
    // The port of gRPC ALS for Envoy.
    std::shared_ptr<int32_t> accessLogServicePort_ = nullptr;
    // Specifies whether to enable the collection of access logs of sidecar proxies to Simple Log Service.
    std::shared_ptr<bool> accessLogSidecarEnabled_ = nullptr;
    // Specifies whether to enable automatic diagnostics for the ASM instance. If you enable this feature, the ASM instance is automatically diagnosed when you modify Istio resources in the ASM instance.
    std::shared_ptr<int32_t> accessLogSidecarLifecycle_ = nullptr;
    // The name of the Log Service project that is used for mesh audit.
    // 
    // Default value: `mesh-log-{ASM instance ID}`.
    std::shared_ptr<string> auditProject_ = nullptr;
    // Specifies whether to enable automatic sidecar proxy injection by using pod annotations. Valid values:
    // 
    // *   `true`: enables automatic sidecar proxy injection by using pod annotations.
    // *   `false`: disables automatic sidecar proxy injection by using pod annotations.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoInjectionPolicyEnabled_ = nullptr;
    // Specifies whether to use the Kubernetes API of clusters on the data plane to access Istio resources. To use this feature, the version of the ASM instance must be V1.9.7.93 or later.
    std::shared_ptr<bool> CRAggregationEnabled_ = nullptr;
    // The certificate chain from the CA certificate to the root certificate. At least two certificates are included in the chain.
    std::shared_ptr<string> certChain_ = nullptr;
    // Specifies whether to enable the feature of controlling the OPA injection scope. Valid values:
    // 
    // *   `true`: enables the feature.
    // *   `false`: disables the feature.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // Specifies whether to enable the Container Network Interface (CNI) plug-in. Valid values:
    // 
    // *   `true`: enables the CNI plug-in.
    // *   `false`: disables the CNI plug-in.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> cniEnabled_ = nullptr;
    // The namespaces to be excluded for the CNI plug-in.
    std::shared_ptr<string> cniExcludeNamespaces_ = nullptr;
    // Specifies whether to delay application container startup until the sidecar proxy container is started in a pod.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // Specifies whether to enable the external service registry. Valid values:
    // 
    // *   `true`: enables the external service registry.
    // *   `false`: disables the external service registry.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> configSourceEnabled_ = nullptr;
    // The instance ID of the Nacos registry.
    std::shared_ptr<string> configSourceNacosID_ = nullptr;
    // Specifies whether to use a custom Prometheus instance. Valid values:
    // 
    // *   `true`: uses a custom Prometheus instance.
    // *   `false`: does not use a custom Prometheus instance.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> customizedPrometheus_ = nullptr;
    // Specifies whether to use a self-managed Zipkin system to collect tracing data. Valid values:
    // 
    // *   `true`: uses a self-managed Zipkin system.
    // *   `false`: does not use a self-managed Zipkin system.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> customizedZipkin_ = nullptr;
    // Specifies whether to enable DNS proxy. Valid values:
    // 
    // *   `true`: enables the DNS proxy feature.
    // *   `false`: disables the DNS proxy feature.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> DNSProxyingEnabled_ = nullptr;
    // Specifies the default scheduling configurations that ASM delivers to components on the data plane. You can configure `nodeSelector` and `tolerations` in the JSON format.
    // 
    // > 
    // 
    // *   Modifying the value of this parameter is a high-risk operation. The modification will cause all components on the data plane of ASM to restart. Exercise caution before modifying the value of this parameter.
    // 
    // *   The configurations specified by this parameter do not apply to ASM gateways. You can configure gateway-specific scheduling on ASM gateways.
    std::shared_ptr<string> defaultComponentsScheduleConfig_ = nullptr;
    // The label selectors used to specify the namespaces of the clusters on the data plane for selective service discovery.
    std::shared_ptr<string> discoverySelectors_ = nullptr;
    // Specifies whether to enable Dubbo Filter. Valid values:
    // 
    // *   `true`: enables Dubbo Filter.
    // *   `false`: disables Dubbo Filter.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> dubboFilterEnabled_ = nullptr;
    // Specifies whether to enable the mesh audit feature. To enable this feature, make sure that you have activated [Log Service](https://sls.console.aliyun.com/). Valid values:
    // 
    // *   `true`: enables the mesh audit feature.
    // *   `false`: disables the mesh audit feature.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableAudit_ = nullptr;
    // The ports for which outbound traffic is redirected to the sidecar proxy.
    std::shared_ptr<bool> enableAutoDiagnosis_ = nullptr;
    // Specifies the authentication token of an ARMS Prometheus instance when the Mesh Topology feature is enabled and ARMS Prometheus is used to collect monitoring metrics. The token is used to allow Mesh Topology to access the ARMS Prometheus instance. The token is in the JSON format. The key in the JSON object is the ID of the cluster on the data plane, and the value is the authentication token of the ARMS Prometheus instance deployed in the cluster.
    std::shared_ptr<bool> enableBootstrapXdsAgent_ = nullptr;
    // Specifies whether to enable the rollback feature for Istio resources.
    std::shared_ptr<bool> enableCRHistory_ = nullptr;
    // Specifies whether to enable automatic sidecar proxy injection for all namespaces. Valid values:
    // 
    // *   `true`: enables automatic sidecar proxy injection for all namespaces.
    // *   `false`: disables automatic sidecar proxy injection for all namespaces.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableNamespacesByDefault_ = nullptr;
    // Specifies whether to enable Secret Discovery Service (SDS). Valid values:
    // 
    // *   `true`: enables SDS.
    // *   `false`: disables SDS.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> enableSDSServer_ = nullptr;
    // The IP addresses of external services to which traffic is not intercepted.
    std::shared_ptr<string> excludeIPRanges_ = nullptr;
    // The ports for which inbound traffic is not redirected to the sidecar proxy. Separate multiple ports with commas (,).
    std::shared_ptr<string> excludeInboundPorts_ = nullptr;
    // The ports for which outbound traffic is not redirected to the sidecar proxy. Separate multiple ports with commas (,).
    std::shared_ptr<string> excludeOutboundPorts_ = nullptr;
    // The updated certificate authority (CA) certificate. You can modify this parameter only if you use a custom certificate when you create an ASM instance.
    std::shared_ptr<string> existingCaCert_ = nullptr;
    // The updated CA certificate key. You can modify this parameter only if you use a custom certificate when you create an ASM instance.
    std::shared_ptr<string> existingCaKey_ = nullptr;
    // The updated root certificate. You can modify this parameter only if you use a custom certificate when you create a Service Mesh (ASM) instance.
    std::shared_ptr<string> existingRootCaCert_ = nullptr;
    // Specifies whether to enable gateway configuration filtering. Valid values:
    // 
    // *   `true`: enables gateway configuration filtering.
    // *   `false`: disables gateway configuration filtering.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> filterGatewayClusterConfig_ = nullptr;
    // Specifies whether to enable Gateway API. Valid values:
    // 
    // *   `true`: enables Gateway API.
    // *   `false`: disables Gateway API.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> gatewayAPIEnabled_ = nullptr;
    // Other metrics of the sidecar proxy on the data plane.
    std::shared_ptr<bool> holdApplicationUntilProxyStarts_ = nullptr;
    // Specifies whether to support HTTP 1.0. Valid values:
    // 
    // *   `true`: supports HTTP 1.0.
    // *   `false`: does not support HTTP 1.0.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> http10Enabled_ = nullptr;
    // The IP addresses of external services to which traffic is intercepted.
    std::shared_ptr<string> includeIPRanges_ = nullptr;
    // The ports for which inbound traffic is redirected to the sidecar proxy.
    std::shared_ptr<string> includeInboundPorts_ = nullptr;
    // The log level of the sidecar proxy on the data plane. Log levels include `none`, `error`, `warn`, `info`, and `debug`. The levels correspond to different amounts of information reported by the logs. For example, none-level logs report the least information, while debug-level logs report the most information.
    std::shared_ptr<string> includeOutboundPorts_ = nullptr;
    // Specifies whether to create a Classic Load Balancer (CLB) instance for accessing Mesh Topology of Service Mesh (ASM).
    std::shared_ptr<bool> integrateKiali_ = nullptr;
    // Specifies whether to load the bootstrap configuration before the sidecar proxy is started.
    std::shared_ptr<string> interceptionMode_ = nullptr;
    // Specifies the default scheduling configurations that ASM delivers to components on the data plane. You can configure `nodeSelector` and tolerations in the JSON format.
    // 
    // > *   Modifying the value of this parameter is a high-risk operation. The modification will cause all components on the data plane of ASM to restart. Exercise caution before modifying the value of this parameter.
    // >*   The configurations specified by this parameter do not apply to the ASM gateway. You can configure gateway-specific scheduling on the ASM gateway.
    std::shared_ptr<string> kialiArmsAuthTokens_ = nullptr;
    // Specifies whether to enable the Mesh Topology feature. To enable this feature, make sure that you have enabled Prometheus monitoring. If Prometheus monitoring is disabled, the Mesh Topology feature must be disabled. Valid values:````
    // 
    // *   `true`: enables the Mesh Topology feature.
    // *   `false`: disables the Mesh Topology feature.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> kialiEnabled_ = nullptr;
    // Specifies Classic Load Balancer (CLB) instances by using annotations when the Mesh Topology feature is enabled. These CLB instances are used to access the Mesh Topology feature in different clusters.
    // 
    // This parameter is a JSON-encoded string. The key in the JSON object is the ID of a cluster on the data plane, and the value is the annotation content of the Mesh Topology service in the cluster.
    // 
    // For more information about how to configure CLB instances by using annotations, see [Add annotations to the YAML file of a Service to configure CLB instances](https://www.alibabacloud.com/help/container-service-for-kubernetes/latest/use-annotations-to-configure-load-balancing-1).
    std::shared_ptr<string> kialiServiceAnnotations_ = nullptr;
    // The labels for isolated workloads.
    std::shared_ptr<string> labelsForOffloadedWorkloads_ = nullptr;
    // The lifecycle of the sidecar proxy.
    std::shared_ptr<string> lifecycle_ = nullptr;
    // The configurations of cross-region load balancing. Valid values:
    // 
    // *   `failover`: the configurations of cross-region failover. Example:
    // 
    // <!---->
    // 
    //     failover: [// Cross-region failover configurations of the struct type. 
    //             {
    //                 // If a service fails in the China (Beijing) region, the traffic is redirected to the same service in the China (Hangzhou) region. 
    //                 from: "cn-beijing", 
    //                 to: "cn-hangzhou",
    //             }
    //         ]
    // 
    // *   `distribute`: the configurations of cross-region traffic distribution. Example:
    // 
    // <!---->
    // 
    //     distribute: [// Cross-region traffic distribution configurations of the struct type. 
    //             {
    //                 // For traffic that is routed to the China (Beijing) region, 70% of the traffic is allocated to the China (Beijing) region and the rest of the traffic is redirected to the China (Hangzhou) region. 
    //                 "from": "cn-beijing",
    //                 "to": {
    //                     "cn-beijing": 70,
    //                     "cn-hangzhou": 30,
    //                 }
    //             }
    //         ]
    std::shared_ptr<string> localityLBConf_ = nullptr;
    // Specifies whether to enable cross-region load balancing. Valid values:
    // 
    // *   `true`: enables cross-region load balancing.
    // *   `false`: disables cross-region load balancing.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> localityLoadBalancing_ = nullptr;
    // The number of worker threads used by the sidecar proxy on the data plane.
    std::shared_ptr<string> logLevel_ = nullptr;
    // Specifies whether to enable Microservices Engine (MSE). Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> MSEEnabled_ = nullptr;
    // Specifies whether to enable Transport Layer Security (TLS) acceleration based on MultiBuffer.
    std::shared_ptr<bool> multiBufferEnabled_ = nullptr;
    // The pull-request latency. By default, this parameter is left empty.
    std::shared_ptr<string> multiBufferPollDelay_ = nullptr;
    // Specifies whether to enable MySQL Filter. Valid values:
    // 
    // *   `true`: enables MySQL Filter.
    // *   `false`: disables MySQL Filter.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> mysqlFilterEnabled_ = nullptr;
    // Specifies whether to clear feature labels on nodes when NFD is disabled.
    // 
    // This parameter is valid only when the `NFDEnabled` parameter is set to `false`.
    std::shared_ptr<bool> NFDEnabled_ = nullptr;
    // The minimum number of CPU cores requested by the proxy service that exports Tracing Analysis data. For example, `1000m` indicates one CPU core.
    std::shared_ptr<bool> NFDLabelPruned_ = nullptr;
    // The maximum size of the memory that is available to the pod that injects OPA proxies into application pods. For example, `1024Mi` indicates 1024 MB.
    std::shared_ptr<string> OPAInjectorCPULimit_ = nullptr;
    // The minimum size of the memory requested by the pod that injects OPA proxies into application pods. For example, `50 Mi` indicates 50 MB.
    std::shared_ptr<string> OPAInjectorCPURequirement_ = nullptr;
    // Specifies whether to create a CLB instance for accessing the ASM mesh topology.
    std::shared_ptr<string> OPAInjectorMemoryLimit_ = nullptr;
    // The maximum number of CPU cores that are available to the pod that injects OPA proxies into application pods. For example, `1000m` indicates one CPU core.
    std::shared_ptr<string> OPAInjectorMemoryRequirement_ = nullptr;
    // The maximum number of CPU cores that are available to the OPA proxy container.
    std::shared_ptr<string> OPALimitCPU_ = nullptr;
    // The maximum size of the memory that is available to the OPA proxy container.
    std::shared_ptr<string> OPALimitMemory_ = nullptr;
    // The log level of the OPA proxy container.
    // 
    // *   `info`: outputs all information.
    // *   `debug`: outputs debugging and error information.
    // *   `error`: outputs only error information.
    std::shared_ptr<string> OPALogLevel_ = nullptr;
    // The number of CPU cores that are requested by the OPA proxy container.
    std::shared_ptr<string> OPARequestCPU_ = nullptr;
    // The size of the memory that is requested by the OPA proxy container.
    std::shared_ptr<string> OPARequestMemory_ = nullptr;
    // The minimum number of CPU cores requested by the pod that injects OPA proxies into application pods. For example, `1000m` indicates one CPU core.
    std::shared_ptr<bool> OPAScopeInjected_ = nullptr;
    // Specifies whether to enable the OPA plug-in. Valid values:
    // 
    // *   `true`: enables the OPA plug-in.
    // *   `false`: disables the OPA plug-in.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> opaEnabled_ = nullptr;
    // Specifies whether to install the Open Policy Agent (OPA) plug-in. Valid values:
    // 
    // *   `true`: installs the OPA plug-in.
    // *   `false`: does not install the OPA plug-in.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> openAgentPolicy_ = nullptr;
    // The policy for accessing external services. Valid values:
    // 
    // *   `ALLOW_ANY`: allows access to all external services.
    // *   `REGISTRY_ONLY`: allows access to only the external services that are defined in the ServiceEntry of the ASM instance.
    std::shared_ptr<string> outboundTrafficPolicy_ = nullptr;
    // Specifies whether to support HTTP/3.
    std::shared_ptr<bool> pilotEnableQuicListeners_ = nullptr;
    // The endpoint of Prometheus monitoring. If you use ARMS Prometheus, set this parameter to the endpoint of Prometheus provided by ARMS.
    std::shared_ptr<string> prometheusUrl_ = nullptr;
    // The maximum number of CPU cores that are available to the istio-init container.
    std::shared_ptr<string> proxyInitCPUResourceLimit_ = nullptr;
    // The number of CPU cores that are requested by the istio-init container.
    std::shared_ptr<string> proxyInitCPUResourceRequest_ = nullptr;
    // The maximum size of the memory that is available to the istio-init container.
    std::shared_ptr<string> proxyInitMemoryResourceLimit_ = nullptr;
    // The size of the memory that is requested by the istio-init container.
    std::shared_ptr<string> proxyInitMemoryResourceRequest_ = nullptr;
    // The maximum number of CPU cores that are available to the sidecar proxy container.
    std::shared_ptr<string> proxyLimitCPU_ = nullptr;
    // The maximum size of the memory that is available to the sidecar proxy container.
    std::shared_ptr<string> proxyLimitMemory_ = nullptr;
    // The number of CPU cores that are requested by the sidecar proxy container.
    std::shared_ptr<string> proxyRequestCPU_ = nullptr;
    // The size of the memory that is requested by the sidecar proxy container.
    std::shared_ptr<string> proxyRequestMemory_ = nullptr;
    // The mode in which the sidecar proxy intercepts inbound traffic. Valid values:
    // 
    // *   `REDIRECT`: The sidecar proxy intercepts inbound traffic in the REDIRECT mode.
    // *   `TPROXY`: The sidecar proxy intercepts inbound traffic in the TPROXY mode.
    std::shared_ptr<string> proxyStatsMatcher_ = nullptr;
    // Specifies whether to enable Redis Filter. Valid values:
    // 
    // *   `true`: enables Redis Filter.
    // *   `false`: disables Redis Filter.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> redisFilterEnabled_ = nullptr;
    // Specifies whether to enable SMC optimization.
    std::shared_ptr<bool> SMCEnabled_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The maximum number of CPU cores that are available to the pod where a sidecar proxy injector resides.
    std::shared_ptr<string> sidecarInjectorLimitCPU_ = nullptr;
    // The maximum size of the memory that is available to the pod where a sidecar proxy injector resides.
    std::shared_ptr<string> sidecarInjectorLimitMemory_ = nullptr;
    // The number of CPU cores that are requested by the pod where a sidecar proxy injector resides.
    std::shared_ptr<string> sidecarInjectorRequestCPU_ = nullptr;
    // The size of the memory that is requested by the pod where a sidecar proxy injector resides.
    std::shared_ptr<string> sidecarInjectorRequestMemory_ = nullptr;
    // Other configurations of automatic sidecar proxy injection, in the YAML format.
    std::shared_ptr<string> sidecarInjectorWebhookAsYaml_ = nullptr;
    // Specifies whether to enable Prometheus monitoring. We recommend that you enable [ARMS Prometheus](https://arms.console.aliyun.com/). Valid values:
    // 
    // *   `true`: enables Prometheus monitoring.
    // *   `false`: disables Prometheus monitoring.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> telemetry_ = nullptr;
    // The maximum period of time that the sidecar proxy waits for requests to be processed before the proxy is stopped. For example, if you want to specify a period of 5 seconds, set this parameter to 5s.
    std::shared_ptr<string> terminationDrainDuration_ = nullptr;
    // Specifies whether to enable Thrift Filter. Valid values:
    // 
    // *   `true`: enables Thrift Filter.
    // *   `false`: disables Thrift Filter.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> thriftFilterEnabled_ = nullptr;
    // The custom tag of Tracing Analysis. Specify this parameter in the JSON format.
    // 
    //     {
    //         "name1": CustomTag,
    //         "name2": CustomTag
    //     }
    // 
    // Tag key: literal, header, or environment.
    // 
    //     {
    //         "literal": {
    //             "value": "Fixed value"
    //         }
    //         "header": {
    //             "name": "Header name"
    //             "defaultValue": "Default value that is used if the specified header does not exist"
    //         }
    //         "environment": {
    //             "name": "Environment variable name"
    //             "defaultValue": "Default value that is used if the specified environment variable does not exist"
    //         }
    //     }
    std::shared_ptr<string> traceCustomTags_ = nullptr;
    // The maximum length of the request path contained in the HttpUrl span tag. Default value: `256`.
    std::shared_ptr<string> traceMaxPathTagLength_ = nullptr;
    // The sampling percentage of Tracing Analysis.
    std::shared_ptr<float> traceSampling_ = nullptr;
    // Specifies whether to enable Managed Service for OpenTelemetry. (Before you enable [Managed Service for OpenTelemetry](https://tracing-analysis.console.aliyun.com/), make sure that you have activated it.) Valid values:
    // 
    // *   `true`
    // *   `false`
    // 
    // Default value: `false`.
    std::shared_ptr<bool> tracing_ = nullptr;
    // The maximum size of the memory that is available to the proxy service that exports Tracing Analysis data. For example, `1Mi` indicates 1 MB.
    std::shared_ptr<string> tracingOnExtZipkinLimitCPU_ = nullptr;
    // The retention period for the access logs of the ingress gateway. Unit: day. The logs are collected by using Log Service. For example, `30` indicates 30 days.
    std::shared_ptr<string> tracingOnExtZipkinLimitMemory_ = nullptr;
    // The number of replicas that are available to the proxy service that exports Managed Service for OpenTelemetry data.
    std::shared_ptr<string> tracingOnExtZipkinReplicaCount_ = nullptr;
    // The minimum size of the memory requested by the proxy service that exports Tracing Analysis data. For example, `1Mi` indicates 1 MB.
    std::shared_ptr<string> tracingOnExtZipkinRequestCPU_ = nullptr;
    // The maximum number of CPU cores that are available to the proxy service that exports Tracing Analysis data. For example, `1000m` indicates one CPU core.
    std::shared_ptr<string> tracingOnExtZipkinRequestMemory_ = nullptr;
    // Specifies whether to enable WebAssembly Filter. Valid values:
    // 
    // *   `true`: enables WebAssembly Filter.
    // *   `false`: disables WebAssembly Filter.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> webAssemblyFilterEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
