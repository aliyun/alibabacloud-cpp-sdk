// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACESCOPESIDECARCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACESCOPESIDECARCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateNamespaceScopeSidecarConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceScopeSidecarConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(EnableCoreDump, enableCoreDump_);
      DARABONBA_PTR_TO_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_TO_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_TO_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_TO_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_TO_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_TO_JSON(IstioDNSProxyEnabled, istioDNSProxyEnabled_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(Privileged, privileged_);
      DARABONBA_PTR_TO_JSON(ProxyInitAckSloCPUResourceLimit, proxyInitAckSloCPUResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitAckSloCPUResourceRequest, proxyInitAckSloCPUResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyInitAckSloMemoryResourceLimit, proxyInitAckSloMemoryResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitAckSloMemoryResourceRequest, proxyInitAckSloMemoryResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyInitCPUResourceLimit, proxyInitCPUResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitCPUResourceRequest, proxyInitCPUResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyInitMemoryResourceLimit, proxyInitMemoryResourceLimit_);
      DARABONBA_PTR_TO_JSON(ProxyInitMemoryResourceRequest, proxyInitMemoryResourceRequest_);
      DARABONBA_PTR_TO_JSON(ProxyMetadata, proxyMetadata_);
      DARABONBA_PTR_TO_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_TO_JSON(ReadinessFailureThreshold, readinessFailureThreshold_);
      DARABONBA_PTR_TO_JSON(ReadinessInitialDelaySeconds, readinessInitialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(ReadinessPeriodSeconds, readinessPeriodSeconds_);
      DARABONBA_PTR_TO_JSON(RuntimeValues, runtimeValues_);
      DARABONBA_PTR_TO_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_TO_JSON(ScaledSidecarResource, scaledSidecarResource_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(SidecarProxyAckSloCPUResourceLimit, sidecarProxyAckSloCPUResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyAckSloCPUResourceRequest, sidecarProxyAckSloCPUResourceRequest_);
      DARABONBA_PTR_TO_JSON(SidecarProxyAckSloMemoryResourceLimit, sidecarProxyAckSloMemoryResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyAckSloMemoryResourceRequest, sidecarProxyAckSloMemoryResourceRequest_);
      DARABONBA_PTR_TO_JSON(SidecarProxyCPUResourceLimit, sidecarProxyCPUResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyCPUResourceRequest, sidecarProxyCPUResourceRequest_);
      DARABONBA_PTR_TO_JSON(SidecarProxyMemoryResourceLimit, sidecarProxyMemoryResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyMemoryResourceRequest, sidecarProxyMemoryResourceRequest_);
      DARABONBA_PTR_TO_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceScopeSidecarConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(EnableCoreDump, enableCoreDump_);
      DARABONBA_PTR_FROM_JSON(ExcludeIPRanges, excludeIPRanges_);
      DARABONBA_PTR_FROM_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_FROM_JSON(IncludeIPRanges, includeIPRanges_);
      DARABONBA_PTR_FROM_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_FROM_JSON(IstioDNSProxyEnabled, istioDNSProxyEnabled_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(Privileged, privileged_);
      DARABONBA_PTR_FROM_JSON(ProxyInitAckSloCPUResourceLimit, proxyInitAckSloCPUResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitAckSloCPUResourceRequest, proxyInitAckSloCPUResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyInitAckSloMemoryResourceLimit, proxyInitAckSloMemoryResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitAckSloMemoryResourceRequest, proxyInitAckSloMemoryResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyInitCPUResourceLimit, proxyInitCPUResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitCPUResourceRequest, proxyInitCPUResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyInitMemoryResourceLimit, proxyInitMemoryResourceLimit_);
      DARABONBA_PTR_FROM_JSON(ProxyInitMemoryResourceRequest, proxyInitMemoryResourceRequest_);
      DARABONBA_PTR_FROM_JSON(ProxyMetadata, proxyMetadata_);
      DARABONBA_PTR_FROM_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_FROM_JSON(ReadinessFailureThreshold, readinessFailureThreshold_);
      DARABONBA_PTR_FROM_JSON(ReadinessInitialDelaySeconds, readinessInitialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(ReadinessPeriodSeconds, readinessPeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(RuntimeValues, runtimeValues_);
      DARABONBA_PTR_FROM_JSON(SMCEnabled, SMCEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaledSidecarResource, scaledSidecarResource_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyAckSloCPUResourceLimit, sidecarProxyAckSloCPUResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyAckSloCPUResourceRequest, sidecarProxyAckSloCPUResourceRequest_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyAckSloMemoryResourceLimit, sidecarProxyAckSloMemoryResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyAckSloMemoryResourceRequest, sidecarProxyAckSloMemoryResourceRequest_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyCPUResourceLimit, sidecarProxyCPUResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyCPUResourceRequest, sidecarProxyCPUResourceRequest_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyMemoryResourceLimit, sidecarProxyMemoryResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyMemoryResourceRequest, sidecarProxyMemoryResourceRequest_);
      DARABONBA_PTR_FROM_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
    };
    UpdateNamespaceScopeSidecarConfigRequest() = default ;
    UpdateNamespaceScopeSidecarConfigRequest(const UpdateNamespaceScopeSidecarConfigRequest &) = default ;
    UpdateNamespaceScopeSidecarConfigRequest(UpdateNamespaceScopeSidecarConfigRequest &&) = default ;
    UpdateNamespaceScopeSidecarConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceScopeSidecarConfigRequest() = default ;
    UpdateNamespaceScopeSidecarConfigRequest& operator=(const UpdateNamespaceScopeSidecarConfigRequest &) = default ;
    UpdateNamespaceScopeSidecarConfigRequest& operator=(UpdateNamespaceScopeSidecarConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && return this->enableCoreDump_ == nullptr && return this->excludeIPRanges_ == nullptr && return this->excludeInboundPorts_ == nullptr && return this->excludeOutboundPorts_ == nullptr && return this->holdApplicationUntilProxyStarts_ == nullptr
        && return this->includeIPRanges_ == nullptr && return this->includeInboundPorts_ == nullptr && return this->includeOutboundPorts_ == nullptr && return this->interceptionMode_ == nullptr && return this->istioDNSProxyEnabled_ == nullptr
        && return this->lifecycle_ == nullptr && return this->logLevel_ == nullptr && return this->namespace_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr
        && return this->privileged_ == nullptr && return this->proxyInitAckSloCPUResourceLimit_ == nullptr && return this->proxyInitAckSloCPUResourceRequest_ == nullptr && return this->proxyInitAckSloMemoryResourceLimit_ == nullptr && return this->proxyInitAckSloMemoryResourceRequest_ == nullptr
        && return this->proxyInitCPUResourceLimit_ == nullptr && return this->proxyInitCPUResourceRequest_ == nullptr && return this->proxyInitMemoryResourceLimit_ == nullptr && return this->proxyInitMemoryResourceRequest_ == nullptr && return this->proxyMetadata_ == nullptr
        && return this->proxyStatsMatcher_ == nullptr && return this->readinessFailureThreshold_ == nullptr && return this->readinessInitialDelaySeconds_ == nullptr && return this->readinessPeriodSeconds_ == nullptr && return this->runtimeValues_ == nullptr
        && return this->SMCEnabled_ == nullptr && return this->scaledSidecarResource_ == nullptr && return this->serviceMeshId_ == nullptr && return this->sidecarProxyAckSloCPUResourceLimit_ == nullptr && return this->sidecarProxyAckSloCPUResourceRequest_ == nullptr
        && return this->sidecarProxyAckSloMemoryResourceLimit_ == nullptr && return this->sidecarProxyAckSloMemoryResourceRequest_ == nullptr && return this->sidecarProxyCPUResourceLimit_ == nullptr && return this->sidecarProxyCPUResourceRequest_ == nullptr && return this->sidecarProxyMemoryResourceLimit_ == nullptr
        && return this->sidecarProxyMemoryResourceRequest_ == nullptr && return this->terminationDrainDuration_ == nullptr && return this->tracing_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // enableCoreDump Field Functions 
    bool hasEnableCoreDump() const { return this->enableCoreDump_ != nullptr;};
    void deleteEnableCoreDump() { this->enableCoreDump_ = nullptr;};
    inline bool enableCoreDump() const { DARABONBA_PTR_GET_DEFAULT(enableCoreDump_, false) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setEnableCoreDump(bool enableCoreDump) { DARABONBA_PTR_SET_VALUE(enableCoreDump_, enableCoreDump) };


    // excludeIPRanges Field Functions 
    bool hasExcludeIPRanges() const { return this->excludeIPRanges_ != nullptr;};
    void deleteExcludeIPRanges() { this->excludeIPRanges_ = nullptr;};
    inline string excludeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(excludeIPRanges_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setExcludeIPRanges(string excludeIPRanges) { DARABONBA_PTR_SET_VALUE(excludeIPRanges_, excludeIPRanges) };


    // excludeInboundPorts Field Functions 
    bool hasExcludeInboundPorts() const { return this->excludeInboundPorts_ != nullptr;};
    void deleteExcludeInboundPorts() { this->excludeInboundPorts_ = nullptr;};
    inline string excludeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeInboundPorts_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setExcludeInboundPorts(string excludeInboundPorts) { DARABONBA_PTR_SET_VALUE(excludeInboundPorts_, excludeInboundPorts) };


    // excludeOutboundPorts Field Functions 
    bool hasExcludeOutboundPorts() const { return this->excludeOutboundPorts_ != nullptr;};
    void deleteExcludeOutboundPorts() { this->excludeOutboundPorts_ = nullptr;};
    inline string excludeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundPorts_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setExcludeOutboundPorts(string excludeOutboundPorts) { DARABONBA_PTR_SET_VALUE(excludeOutboundPorts_, excludeOutboundPorts) };


    // holdApplicationUntilProxyStarts Field Functions 
    bool hasHoldApplicationUntilProxyStarts() const { return this->holdApplicationUntilProxyStarts_ != nullptr;};
    void deleteHoldApplicationUntilProxyStarts() { this->holdApplicationUntilProxyStarts_ = nullptr;};
    inline bool holdApplicationUntilProxyStarts() const { DARABONBA_PTR_GET_DEFAULT(holdApplicationUntilProxyStarts_, false) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setHoldApplicationUntilProxyStarts(bool holdApplicationUntilProxyStarts) { DARABONBA_PTR_SET_VALUE(holdApplicationUntilProxyStarts_, holdApplicationUntilProxyStarts) };


    // includeIPRanges Field Functions 
    bool hasIncludeIPRanges() const { return this->includeIPRanges_ != nullptr;};
    void deleteIncludeIPRanges() { this->includeIPRanges_ = nullptr;};
    inline string includeIPRanges() const { DARABONBA_PTR_GET_DEFAULT(includeIPRanges_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setIncludeIPRanges(string includeIPRanges) { DARABONBA_PTR_SET_VALUE(includeIPRanges_, includeIPRanges) };


    // includeInboundPorts Field Functions 
    bool hasIncludeInboundPorts() const { return this->includeInboundPorts_ != nullptr;};
    void deleteIncludeInboundPorts() { this->includeInboundPorts_ = nullptr;};
    inline string includeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeInboundPorts_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setIncludeInboundPorts(string includeInboundPorts) { DARABONBA_PTR_SET_VALUE(includeInboundPorts_, includeInboundPorts) };


    // includeOutboundPorts Field Functions 
    bool hasIncludeOutboundPorts() const { return this->includeOutboundPorts_ != nullptr;};
    void deleteIncludeOutboundPorts() { this->includeOutboundPorts_ = nullptr;};
    inline string includeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeOutboundPorts_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setIncludeOutboundPorts(string includeOutboundPorts) { DARABONBA_PTR_SET_VALUE(includeOutboundPorts_, includeOutboundPorts) };


    // interceptionMode Field Functions 
    bool hasInterceptionMode() const { return this->interceptionMode_ != nullptr;};
    void deleteInterceptionMode() { this->interceptionMode_ = nullptr;};
    inline string interceptionMode() const { DARABONBA_PTR_GET_DEFAULT(interceptionMode_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setInterceptionMode(string interceptionMode) { DARABONBA_PTR_SET_VALUE(interceptionMode_, interceptionMode) };


    // istioDNSProxyEnabled Field Functions 
    bool hasIstioDNSProxyEnabled() const { return this->istioDNSProxyEnabled_ != nullptr;};
    void deleteIstioDNSProxyEnabled() { this->istioDNSProxyEnabled_ = nullptr;};
    inline bool istioDNSProxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(istioDNSProxyEnabled_, false) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setIstioDNSProxyEnabled(bool istioDNSProxyEnabled) { DARABONBA_PTR_SET_VALUE(istioDNSProxyEnabled_, istioDNSProxyEnabled) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // privileged Field Functions 
    bool hasPrivileged() const { return this->privileged_ != nullptr;};
    void deletePrivileged() { this->privileged_ = nullptr;};
    inline bool privileged() const { DARABONBA_PTR_GET_DEFAULT(privileged_, false) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setPrivileged(bool privileged) { DARABONBA_PTR_SET_VALUE(privileged_, privileged) };


    // proxyInitAckSloCPUResourceLimit Field Functions 
    bool hasProxyInitAckSloCPUResourceLimit() const { return this->proxyInitAckSloCPUResourceLimit_ != nullptr;};
    void deleteProxyInitAckSloCPUResourceLimit() { this->proxyInitAckSloCPUResourceLimit_ = nullptr;};
    inline string proxyInitAckSloCPUResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitAckSloCPUResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitAckSloCPUResourceLimit(string proxyInitAckSloCPUResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitAckSloCPUResourceLimit_, proxyInitAckSloCPUResourceLimit) };


    // proxyInitAckSloCPUResourceRequest Field Functions 
    bool hasProxyInitAckSloCPUResourceRequest() const { return this->proxyInitAckSloCPUResourceRequest_ != nullptr;};
    void deleteProxyInitAckSloCPUResourceRequest() { this->proxyInitAckSloCPUResourceRequest_ = nullptr;};
    inline string proxyInitAckSloCPUResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitAckSloCPUResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitAckSloCPUResourceRequest(string proxyInitAckSloCPUResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitAckSloCPUResourceRequest_, proxyInitAckSloCPUResourceRequest) };


    // proxyInitAckSloMemoryResourceLimit Field Functions 
    bool hasProxyInitAckSloMemoryResourceLimit() const { return this->proxyInitAckSloMemoryResourceLimit_ != nullptr;};
    void deleteProxyInitAckSloMemoryResourceLimit() { this->proxyInitAckSloMemoryResourceLimit_ = nullptr;};
    inline string proxyInitAckSloMemoryResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitAckSloMemoryResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitAckSloMemoryResourceLimit(string proxyInitAckSloMemoryResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitAckSloMemoryResourceLimit_, proxyInitAckSloMemoryResourceLimit) };


    // proxyInitAckSloMemoryResourceRequest Field Functions 
    bool hasProxyInitAckSloMemoryResourceRequest() const { return this->proxyInitAckSloMemoryResourceRequest_ != nullptr;};
    void deleteProxyInitAckSloMemoryResourceRequest() { this->proxyInitAckSloMemoryResourceRequest_ = nullptr;};
    inline string proxyInitAckSloMemoryResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitAckSloMemoryResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitAckSloMemoryResourceRequest(string proxyInitAckSloMemoryResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitAckSloMemoryResourceRequest_, proxyInitAckSloMemoryResourceRequest) };


    // proxyInitCPUResourceLimit Field Functions 
    bool hasProxyInitCPUResourceLimit() const { return this->proxyInitCPUResourceLimit_ != nullptr;};
    void deleteProxyInitCPUResourceLimit() { this->proxyInitCPUResourceLimit_ = nullptr;};
    inline string proxyInitCPUResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitCPUResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitCPUResourceLimit(string proxyInitCPUResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitCPUResourceLimit_, proxyInitCPUResourceLimit) };


    // proxyInitCPUResourceRequest Field Functions 
    bool hasProxyInitCPUResourceRequest() const { return this->proxyInitCPUResourceRequest_ != nullptr;};
    void deleteProxyInitCPUResourceRequest() { this->proxyInitCPUResourceRequest_ = nullptr;};
    inline string proxyInitCPUResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitCPUResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitCPUResourceRequest(string proxyInitCPUResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitCPUResourceRequest_, proxyInitCPUResourceRequest) };


    // proxyInitMemoryResourceLimit Field Functions 
    bool hasProxyInitMemoryResourceLimit() const { return this->proxyInitMemoryResourceLimit_ != nullptr;};
    void deleteProxyInitMemoryResourceLimit() { this->proxyInitMemoryResourceLimit_ = nullptr;};
    inline string proxyInitMemoryResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(proxyInitMemoryResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitMemoryResourceLimit(string proxyInitMemoryResourceLimit) { DARABONBA_PTR_SET_VALUE(proxyInitMemoryResourceLimit_, proxyInitMemoryResourceLimit) };


    // proxyInitMemoryResourceRequest Field Functions 
    bool hasProxyInitMemoryResourceRequest() const { return this->proxyInitMemoryResourceRequest_ != nullptr;};
    void deleteProxyInitMemoryResourceRequest() { this->proxyInitMemoryResourceRequest_ = nullptr;};
    inline string proxyInitMemoryResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(proxyInitMemoryResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyInitMemoryResourceRequest(string proxyInitMemoryResourceRequest) { DARABONBA_PTR_SET_VALUE(proxyInitMemoryResourceRequest_, proxyInitMemoryResourceRequest) };


    // proxyMetadata Field Functions 
    bool hasProxyMetadata() const { return this->proxyMetadata_ != nullptr;};
    void deleteProxyMetadata() { this->proxyMetadata_ = nullptr;};
    inline string proxyMetadata() const { DARABONBA_PTR_GET_DEFAULT(proxyMetadata_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyMetadata(string proxyMetadata) { DARABONBA_PTR_SET_VALUE(proxyMetadata_, proxyMetadata) };


    // proxyStatsMatcher Field Functions 
    bool hasProxyStatsMatcher() const { return this->proxyStatsMatcher_ != nullptr;};
    void deleteProxyStatsMatcher() { this->proxyStatsMatcher_ = nullptr;};
    inline string proxyStatsMatcher() const { DARABONBA_PTR_GET_DEFAULT(proxyStatsMatcher_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setProxyStatsMatcher(string proxyStatsMatcher) { DARABONBA_PTR_SET_VALUE(proxyStatsMatcher_, proxyStatsMatcher) };


    // readinessFailureThreshold Field Functions 
    bool hasReadinessFailureThreshold() const { return this->readinessFailureThreshold_ != nullptr;};
    void deleteReadinessFailureThreshold() { this->readinessFailureThreshold_ = nullptr;};
    inline int32_t readinessFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessFailureThreshold_, 0) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setReadinessFailureThreshold(int32_t readinessFailureThreshold) { DARABONBA_PTR_SET_VALUE(readinessFailureThreshold_, readinessFailureThreshold) };


    // readinessInitialDelaySeconds Field Functions 
    bool hasReadinessInitialDelaySeconds() const { return this->readinessInitialDelaySeconds_ != nullptr;};
    void deleteReadinessInitialDelaySeconds() { this->readinessInitialDelaySeconds_ = nullptr;};
    inline int32_t readinessInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessInitialDelaySeconds_, 0) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setReadinessInitialDelaySeconds(int32_t readinessInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(readinessInitialDelaySeconds_, readinessInitialDelaySeconds) };


    // readinessPeriodSeconds Field Functions 
    bool hasReadinessPeriodSeconds() const { return this->readinessPeriodSeconds_ != nullptr;};
    void deleteReadinessPeriodSeconds() { this->readinessPeriodSeconds_ = nullptr;};
    inline int32_t readinessPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessPeriodSeconds_, 0) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setReadinessPeriodSeconds(int32_t readinessPeriodSeconds) { DARABONBA_PTR_SET_VALUE(readinessPeriodSeconds_, readinessPeriodSeconds) };


    // runtimeValues Field Functions 
    bool hasRuntimeValues() const { return this->runtimeValues_ != nullptr;};
    void deleteRuntimeValues() { this->runtimeValues_ = nullptr;};
    inline string runtimeValues() const { DARABONBA_PTR_GET_DEFAULT(runtimeValues_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setRuntimeValues(string runtimeValues) { DARABONBA_PTR_SET_VALUE(runtimeValues_, runtimeValues) };


    // SMCEnabled Field Functions 
    bool hasSMCEnabled() const { return this->SMCEnabled_ != nullptr;};
    void deleteSMCEnabled() { this->SMCEnabled_ = nullptr;};
    inline bool SMCEnabled() const { DARABONBA_PTR_GET_DEFAULT(SMCEnabled_, false) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSMCEnabled(bool SMCEnabled) { DARABONBA_PTR_SET_VALUE(SMCEnabled_, SMCEnabled) };


    // scaledSidecarResource Field Functions 
    bool hasScaledSidecarResource() const { return this->scaledSidecarResource_ != nullptr;};
    void deleteScaledSidecarResource() { this->scaledSidecarResource_ = nullptr;};
    inline const UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource & scaledSidecarResource() const { DARABONBA_PTR_GET_CONST(scaledSidecarResource_, UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource) };
    inline UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource scaledSidecarResource() { DARABONBA_PTR_GET(scaledSidecarResource_, UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setScaledSidecarResource(const UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource & scaledSidecarResource) { DARABONBA_PTR_SET_VALUE(scaledSidecarResource_, scaledSidecarResource) };
    inline UpdateNamespaceScopeSidecarConfigRequest& setScaledSidecarResource(UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource && scaledSidecarResource) { DARABONBA_PTR_SET_RVALUE(scaledSidecarResource_, scaledSidecarResource) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // sidecarProxyAckSloCPUResourceLimit Field Functions 
    bool hasSidecarProxyAckSloCPUResourceLimit() const { return this->sidecarProxyAckSloCPUResourceLimit_ != nullptr;};
    void deleteSidecarProxyAckSloCPUResourceLimit() { this->sidecarProxyAckSloCPUResourceLimit_ = nullptr;};
    inline string sidecarProxyAckSloCPUResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyAckSloCPUResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyAckSloCPUResourceLimit(string sidecarProxyAckSloCPUResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyAckSloCPUResourceLimit_, sidecarProxyAckSloCPUResourceLimit) };


    // sidecarProxyAckSloCPUResourceRequest Field Functions 
    bool hasSidecarProxyAckSloCPUResourceRequest() const { return this->sidecarProxyAckSloCPUResourceRequest_ != nullptr;};
    void deleteSidecarProxyAckSloCPUResourceRequest() { this->sidecarProxyAckSloCPUResourceRequest_ = nullptr;};
    inline string sidecarProxyAckSloCPUResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyAckSloCPUResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyAckSloCPUResourceRequest(string sidecarProxyAckSloCPUResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyAckSloCPUResourceRequest_, sidecarProxyAckSloCPUResourceRequest) };


    // sidecarProxyAckSloMemoryResourceLimit Field Functions 
    bool hasSidecarProxyAckSloMemoryResourceLimit() const { return this->sidecarProxyAckSloMemoryResourceLimit_ != nullptr;};
    void deleteSidecarProxyAckSloMemoryResourceLimit() { this->sidecarProxyAckSloMemoryResourceLimit_ = nullptr;};
    inline string sidecarProxyAckSloMemoryResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyAckSloMemoryResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyAckSloMemoryResourceLimit(string sidecarProxyAckSloMemoryResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyAckSloMemoryResourceLimit_, sidecarProxyAckSloMemoryResourceLimit) };


    // sidecarProxyAckSloMemoryResourceRequest Field Functions 
    bool hasSidecarProxyAckSloMemoryResourceRequest() const { return this->sidecarProxyAckSloMemoryResourceRequest_ != nullptr;};
    void deleteSidecarProxyAckSloMemoryResourceRequest() { this->sidecarProxyAckSloMemoryResourceRequest_ = nullptr;};
    inline string sidecarProxyAckSloMemoryResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyAckSloMemoryResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyAckSloMemoryResourceRequest(string sidecarProxyAckSloMemoryResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyAckSloMemoryResourceRequest_, sidecarProxyAckSloMemoryResourceRequest) };


    // sidecarProxyCPUResourceLimit Field Functions 
    bool hasSidecarProxyCPUResourceLimit() const { return this->sidecarProxyCPUResourceLimit_ != nullptr;};
    void deleteSidecarProxyCPUResourceLimit() { this->sidecarProxyCPUResourceLimit_ = nullptr;};
    inline string sidecarProxyCPUResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyCPUResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyCPUResourceLimit(string sidecarProxyCPUResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyCPUResourceLimit_, sidecarProxyCPUResourceLimit) };


    // sidecarProxyCPUResourceRequest Field Functions 
    bool hasSidecarProxyCPUResourceRequest() const { return this->sidecarProxyCPUResourceRequest_ != nullptr;};
    void deleteSidecarProxyCPUResourceRequest() { this->sidecarProxyCPUResourceRequest_ = nullptr;};
    inline string sidecarProxyCPUResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyCPUResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyCPUResourceRequest(string sidecarProxyCPUResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyCPUResourceRequest_, sidecarProxyCPUResourceRequest) };


    // sidecarProxyMemoryResourceLimit Field Functions 
    bool hasSidecarProxyMemoryResourceLimit() const { return this->sidecarProxyMemoryResourceLimit_ != nullptr;};
    void deleteSidecarProxyMemoryResourceLimit() { this->sidecarProxyMemoryResourceLimit_ = nullptr;};
    inline string sidecarProxyMemoryResourceLimit() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyMemoryResourceLimit_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyMemoryResourceLimit(string sidecarProxyMemoryResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyMemoryResourceLimit_, sidecarProxyMemoryResourceLimit) };


    // sidecarProxyMemoryResourceRequest Field Functions 
    bool hasSidecarProxyMemoryResourceRequest() const { return this->sidecarProxyMemoryResourceRequest_ != nullptr;};
    void deleteSidecarProxyMemoryResourceRequest() { this->sidecarProxyMemoryResourceRequest_ = nullptr;};
    inline string sidecarProxyMemoryResourceRequest() const { DARABONBA_PTR_GET_DEFAULT(sidecarProxyMemoryResourceRequest_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setSidecarProxyMemoryResourceRequest(string sidecarProxyMemoryResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyMemoryResourceRequest_, sidecarProxyMemoryResourceRequest) };


    // terminationDrainDuration Field Functions 
    bool hasTerminationDrainDuration() const { return this->terminationDrainDuration_ != nullptr;};
    void deleteTerminationDrainDuration() { this->terminationDrainDuration_ = nullptr;};
    inline string terminationDrainDuration() const { DARABONBA_PTR_GET_DEFAULT(terminationDrainDuration_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setTerminationDrainDuration(string terminationDrainDuration) { DARABONBA_PTR_SET_VALUE(terminationDrainDuration_, terminationDrainDuration) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline string tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, "") };
    inline UpdateNamespaceScopeSidecarConfigRequest& setTracing(string tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


  protected:
    // The number of worker threads to run in Istio Proxy.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // Specifies whether to enable the core dump feature for the sidecar proxy containers. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableCoreDump_ = nullptr;
    // The range of IP addresses that are allowed to access external services. (`global.proxy.excludelPRanges`)
    std::shared_ptr<string> excludeIPRanges_ = nullptr;
    // The port that the inbound traffic of the sidecar proxy does not pass through.
    std::shared_ptr<string> excludeInboundPorts_ = nullptr;
    // The port that the outbound traffic of the sidecar proxy does not pass through.
    std::shared_ptr<string> excludeOutboundPorts_ = nullptr;
    // Specifies whether applications can be started only after Istio Proxy starts. Valid values:
    // 
    // *   `true`: Applications can be started only after Istio Proxy starts.
    // *   `false`: Applications can be started before Istio Proxy starts.
    std::shared_ptr<bool> holdApplicationUntilProxyStarts_ = nullptr;
    // The range of IP addresses that are denied to access external services. (`global.proxy.includelPRanges`)
    std::shared_ptr<string> includeIPRanges_ = nullptr;
    // The port that the inbound traffic of the sidecar proxy passes through.
    std::shared_ptr<string> includeInboundPorts_ = nullptr;
    // The port that the outbound traffic of the sidecar proxy passes through.
    std::shared_ptr<string> includeOutboundPorts_ = nullptr;
    // The mode in which the sidecar proxy intercepts inbound traffic. Valid values:
    // 
    // *   `REDIRECT`: The sidecar proxy intercepts inbound traffic in the REDIRECT mode.
    // *   `TPROXY`: The sidecar proxy intercepts inbound traffic in the TPROXY mode.
    std::shared_ptr<string> interceptionMode_ = nullptr;
    // Specifies whether to enable the Domain Name System (DNS) proxy feature. Valid values:
    // 
    // *   `true`: The DNS proxy feature is enabled.
    // *   `false`: The DNS proxy feature is disabled.
    std::shared_ptr<bool> istioDNSProxyEnabled_ = nullptr;
    // The lifecycle of the sidecar proxy.
    std::shared_ptr<string> lifecycle_ = nullptr;
    // The log level. Valid values: `info`, `debug`, `tracing`, and `error`.
    std::shared_ptr<string> logLevel_ = nullptr;
    // The namespace for which you want to update the sidecar proxy configurations.
    std::shared_ptr<string> namespace_ = nullptr;
    // The post-start parameters of Istio Proxy.
    std::shared_ptr<string> postStart_ = nullptr;
    // The pre-close parameters of Istio Proxy.
    std::shared_ptr<string> preStop_ = nullptr;
    // Specifies whether to enable the privileged mode in the security context of the sidecar proxy containers. Valid values:
    // 
    // *   `true`: enables the privileged mode. This means that the sidecar proxy containers run in privileged mode.
    // *   `false`: does not enable the privileged mode.
    std::shared_ptr<bool> privileged_ = nullptr;
    // The maximum number of reclaimed CPU cores provided by Container Service for Kubernetes (ACK) that are available to the istio-init container. Reclaimed resources, including CPU cores and memory, are resources that can be dynamically overcommitted. This configuration item is used to set the maximum number of CPU cores that are available to the istio-init container in a pod labeled with `koordinator.sh/qosClass`. Unit: millicore.
    std::shared_ptr<string> proxyInitAckSloCPUResourceLimit_ = nullptr;
    // The minimum number of reclaimed CPU cores provided by ACK that the istio-init container requires at runtime. This configuration item is used to set the minimum number of reclaimed CPU cores for the istio-init container in a pod labeled with `koordinator.sh/qosClass`. Unit: millicore.
    std::shared_ptr<string> proxyInitAckSloCPUResourceRequest_ = nullptr;
    // The maximum size of reclaimed memory resources provided by ACK that are available to the istio-init container. This configuration item is used to set the maximum size of memory that is available to the istio-init container in a pod labeled with `koordinator.sh/qosClass`.
    std::shared_ptr<string> proxyInitAckSloMemoryResourceLimit_ = nullptr;
    // The minimum size of reclaimed memory provided by ACK that the istio-init container requires at runtime. This configuration item is used to set the minimum size of reclaimed memory for the istio-init container in a pod labeled with `koordinator.sh/qosClass`.
    std::shared_ptr<string> proxyInitAckSloMemoryResourceRequest_ = nullptr;
    // The maximum number of CPU cores that are available to the sidecar proxy init container.
    std::shared_ptr<string> proxyInitCPUResourceLimit_ = nullptr;
    // The minimum number of CPU cores that are requested by the sidecar proxy init container.
    std::shared_ptr<string> proxyInitCPUResourceRequest_ = nullptr;
    // The maximum size of memory that is available to the sidecar proxy init container.
    std::shared_ptr<string> proxyInitMemoryResourceLimit_ = nullptr;
    // The minimum size of memory that is requested by the sidecar proxy init container.
    std::shared_ptr<string> proxyInitMemoryResourceRequest_ = nullptr;
    // The environment variables that are added to a sidecar proxy. The environment variables are represented as JSON objects. The keys and values in the JSON objects represent the keys and values added to the environment variables of the sidecar proxy.
    std::shared_ptr<string> proxyMetadata_ = nullptr;
    // The monitoring metrics for data collected by Envoy proxies. The value is in the JSON format.
    std::shared_ptr<string> proxyStatsMatcher_ = nullptr;
    // The number of readiness check failures required before marking a sidecar proxy container as not ready.
    std::shared_ptr<int32_t> readinessFailureThreshold_ = nullptr;
    // The amount of time to wait before the first readiness check of a sidecar proxy container is performed. Unit: seconds.
    std::shared_ptr<int32_t> readinessInitialDelaySeconds_ = nullptr;
    // The interval between two readiness checks of a sidecar proxy container. Unit: seconds.
    std::shared_ptr<int32_t> readinessPeriodSeconds_ = nullptr;
    // Indicates the runtime parameters of Envoy proxy processes in the sidecar proxy container. This parameter is a serialized JSON string. The keys and values of a JSON object are the keys and the values of a Envoy Runtime Parameter respectively.
    // 
    // Valid values:
    // 
    // *   global_downstream_max_connections: indicates that the limits on the number of connections from downstream to Envoy.
    std::shared_ptr<string> runtimeValues_ = nullptr;
    // Specifies whether to enable Shared Memory Communications over Remote Direct Memory Access (SMC-R) optimization. The SMC-R optimization feature uses Alibaba Cloud Linux 3 and elastic remote direct memory access (eRDMA) network devices, which optimizes cross-node communication.
    std::shared_ptr<bool> SMCEnabled_ = nullptr;
    std::shared_ptr<UpdateNamespaceScopeSidecarConfigRequestScaledSidecarResource> scaledSidecarResource_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The maximum number of reclaimed CPU cores provided by ACK that are available to the sidecar proxy container. This configuration item is used to set the maximum number of CPU cores that are available to the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`. Unit: millicore.
    std::shared_ptr<string> sidecarProxyAckSloCPUResourceLimit_ = nullptr;
    // The minimum number of reclaimed CPU cores provided by ACK that the sidecar proxy container requires at runtime. This configuration item is used to set the minimum number of reclaimed CPU cores for the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`. Unit: millicore.
    std::shared_ptr<string> sidecarProxyAckSloCPUResourceRequest_ = nullptr;
    // The maximum size of reclaimed memory resources provided by ACK that are available to the sidecar proxy container. This configuration item is used to set the maximum size of memory that is available to the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`.
    std::shared_ptr<string> sidecarProxyAckSloMemoryResourceLimit_ = nullptr;
    // The minimum size of reclaimed memory provided by ACK that the sidecar proxy container requires at runtime. This configuration item is used to set the minimum size of reclaimed memory for the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`.
    std::shared_ptr<string> sidecarProxyAckSloMemoryResourceRequest_ = nullptr;
    // The maximum number of CPU cores that are available to the sidecar proxy container.
    std::shared_ptr<string> sidecarProxyCPUResourceLimit_ = nullptr;
    // The minimum number of CPU cores that are requested by the sidecar proxy container.
    std::shared_ptr<string> sidecarProxyCPUResourceRequest_ = nullptr;
    // The maximum size of memory that is available to the sidecar proxy container.
    std::shared_ptr<string> sidecarProxyMemoryResourceLimit_ = nullptr;
    // The minimum size of memory that is requested by the sidecar proxy container.
    std::shared_ptr<string> sidecarProxyMemoryResourceRequest_ = nullptr;
    // The maximum period of time that the sidecar proxy waits for a request to end.
    std::shared_ptr<string> terminationDrainDuration_ = nullptr;
    // The custom configurations of Tracing Analysis. The configurations must be serialized into JSON strings. The configurations contain the following parameters:
    // 
    // *   `sampling`: The sampling rate, which is of the DOUBLE type.
    // 
    // *   `custom_tags`: The custom tags added to reported spans, which are of the MAP type. The key of a tag is of the string type. The value of a tag is in the JSON format. A custom tag can belong to one of the following types:
    // 
    //     *   `literal`: The tag value is a fixed value in the JSON format. This tag must contain the `value` field that specifies a literal. Example: `{"value":"test"}`.
    //     *   `header`: The tag value is a request header in the JSON format. This tag must contain the `name` field and `defaultValue` field.The name field indicates the name of the request header. The defaultValue field indicates the default value that is used when no request header is available. Example: `{"name":"test","defaultValue":"test"}`.
    //     *   `environment`: The tag value is an environment variable in the JSON format. This tag must contain the `name` field and `defaultValue` field. The name field indicates the name of the environment variable. The defaultValue field indicates the environment variable that is used when no environment variable is available. Example: `{"name":"test","defaultValue":"test"}`.
    std::shared_ptr<string> tracing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
