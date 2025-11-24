// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHES_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest.hpp>
#include <alibabacloud/models/DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(EnableCoreDump, enableCoreDump_);
      DARABONBA_PTR_TO_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundIPRanges, excludeOutboundIPRanges_);
      DARABONBA_PTR_TO_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_TO_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_TO_JSON(IncludeOutboundIPRanges, includeOutboundIPRanges_);
      DARABONBA_PTR_TO_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_TO_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_TO_JSON(IstioDNSProxyEnabled, istioDNSProxyEnabled_);
      DARABONBA_PTR_TO_JSON(LifecycleStr, lifecycleStr_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(Privileged, privileged_);
      DARABONBA_PTR_TO_JSON(ProxyMetadata, proxyMetadata_);
      DARABONBA_PTR_TO_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_TO_JSON(ReadinessFailureThreshold, readinessFailureThreshold_);
      DARABONBA_PTR_TO_JSON(ReadinessInitialDelaySeconds, readinessInitialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(ReadinessPeriodSeconds, readinessPeriodSeconds_);
      DARABONBA_PTR_TO_JSON(RuntimeValues, runtimeValues_);
      DARABONBA_PTR_TO_JSON(SMCConfiguration, SMCConfiguration_);
      DARABONBA_PTR_TO_JSON(ScaledSidecarResource, scaledSidecarResource_);
      DARABONBA_PTR_TO_JSON(SidecarProxyAckSloResource, sidecarProxyAckSloResource_);
      DARABONBA_PTR_TO_JSON(SidecarProxyInitAckSloResource, sidecarProxyInitAckSloResource_);
      DARABONBA_PTR_TO_JSON(SidecarProxyInitResourceLimit, sidecarProxyInitResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyInitResourceRequest, sidecarProxyInitResourceRequest_);
      DARABONBA_PTR_TO_JSON(SidecarProxyResourceLimit, sidecarProxyResourceLimit_);
      DARABONBA_PTR_TO_JSON(SidecarProxyResourceRequest, sidecarProxyResourceRequest_);
      DARABONBA_PTR_TO_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(EnableCoreDump, enableCoreDump_);
      DARABONBA_PTR_FROM_JSON(ExcludeInboundPorts, excludeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundIPRanges, excludeOutboundIPRanges_);
      DARABONBA_PTR_FROM_JSON(ExcludeOutboundPorts, excludeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(HoldApplicationUntilProxyStarts, holdApplicationUntilProxyStarts_);
      DARABONBA_PTR_FROM_JSON(IncludeInboundPorts, includeInboundPorts_);
      DARABONBA_PTR_FROM_JSON(IncludeOutboundIPRanges, includeOutboundIPRanges_);
      DARABONBA_PTR_FROM_JSON(IncludeOutboundPorts, includeOutboundPorts_);
      DARABONBA_PTR_FROM_JSON(InterceptionMode, interceptionMode_);
      DARABONBA_PTR_FROM_JSON(IstioDNSProxyEnabled, istioDNSProxyEnabled_);
      DARABONBA_PTR_FROM_JSON(LifecycleStr, lifecycleStr_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(Privileged, privileged_);
      DARABONBA_PTR_FROM_JSON(ProxyMetadata, proxyMetadata_);
      DARABONBA_PTR_FROM_JSON(ProxyStatsMatcher, proxyStatsMatcher_);
      DARABONBA_PTR_FROM_JSON(ReadinessFailureThreshold, readinessFailureThreshold_);
      DARABONBA_PTR_FROM_JSON(ReadinessInitialDelaySeconds, readinessInitialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(ReadinessPeriodSeconds, readinessPeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(RuntimeValues, runtimeValues_);
      DARABONBA_PTR_FROM_JSON(SMCConfiguration, SMCConfiguration_);
      DARABONBA_PTR_FROM_JSON(ScaledSidecarResource, scaledSidecarResource_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyAckSloResource, sidecarProxyAckSloResource_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyInitAckSloResource, sidecarProxyInitAckSloResource_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyInitResourceLimit, sidecarProxyInitResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyInitResourceRequest, sidecarProxyInitResourceRequest_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyResourceLimit, sidecarProxyResourceLimit_);
      DARABONBA_PTR_FROM_JSON(SidecarProxyResourceRequest, sidecarProxyResourceRequest_);
      DARABONBA_PTR_FROM_JSON(TerminationDrainDuration, terminationDrainDuration_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && return this->enableCoreDump_ == nullptr && return this->excludeInboundPorts_ == nullptr && return this->excludeOutboundIPRanges_ == nullptr && return this->excludeOutboundPorts_ == nullptr && return this->holdApplicationUntilProxyStarts_ == nullptr
        && return this->includeInboundPorts_ == nullptr && return this->includeOutboundIPRanges_ == nullptr && return this->includeOutboundPorts_ == nullptr && return this->interceptionMode_ == nullptr && return this->istioDNSProxyEnabled_ == nullptr
        && return this->lifecycleStr_ == nullptr && return this->logLevel_ == nullptr && return this->privileged_ == nullptr && return this->proxyMetadata_ == nullptr && return this->proxyStatsMatcher_ == nullptr
        && return this->readinessFailureThreshold_ == nullptr && return this->readinessInitialDelaySeconds_ == nullptr && return this->readinessPeriodSeconds_ == nullptr && return this->runtimeValues_ == nullptr && return this->SMCConfiguration_ == nullptr
        && return this->scaledSidecarResource_ == nullptr && return this->sidecarProxyAckSloResource_ == nullptr && return this->sidecarProxyInitAckSloResource_ == nullptr && return this->sidecarProxyInitResourceLimit_ == nullptr && return this->sidecarProxyInitResourceRequest_ == nullptr
        && return this->sidecarProxyResourceLimit_ == nullptr && return this->sidecarProxyResourceRequest_ == nullptr && return this->terminationDrainDuration_ == nullptr && return this->tracing_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // enableCoreDump Field Functions 
    bool hasEnableCoreDump() const { return this->enableCoreDump_ != nullptr;};
    void deleteEnableCoreDump() { this->enableCoreDump_ = nullptr;};
    inline bool enableCoreDump() const { DARABONBA_PTR_GET_DEFAULT(enableCoreDump_, false) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setEnableCoreDump(bool enableCoreDump) { DARABONBA_PTR_SET_VALUE(enableCoreDump_, enableCoreDump) };


    // excludeInboundPorts Field Functions 
    bool hasExcludeInboundPorts() const { return this->excludeInboundPorts_ != nullptr;};
    void deleteExcludeInboundPorts() { this->excludeInboundPorts_ = nullptr;};
    inline string excludeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeInboundPorts_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setExcludeInboundPorts(string excludeInboundPorts) { DARABONBA_PTR_SET_VALUE(excludeInboundPorts_, excludeInboundPorts) };


    // excludeOutboundIPRanges Field Functions 
    bool hasExcludeOutboundIPRanges() const { return this->excludeOutboundIPRanges_ != nullptr;};
    void deleteExcludeOutboundIPRanges() { this->excludeOutboundIPRanges_ = nullptr;};
    inline string excludeOutboundIPRanges() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundIPRanges_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setExcludeOutboundIPRanges(string excludeOutboundIPRanges) { DARABONBA_PTR_SET_VALUE(excludeOutboundIPRanges_, excludeOutboundIPRanges) };


    // excludeOutboundPorts Field Functions 
    bool hasExcludeOutboundPorts() const { return this->excludeOutboundPorts_ != nullptr;};
    void deleteExcludeOutboundPorts() { this->excludeOutboundPorts_ = nullptr;};
    inline string excludeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(excludeOutboundPorts_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setExcludeOutboundPorts(string excludeOutboundPorts) { DARABONBA_PTR_SET_VALUE(excludeOutboundPorts_, excludeOutboundPorts) };


    // holdApplicationUntilProxyStarts Field Functions 
    bool hasHoldApplicationUntilProxyStarts() const { return this->holdApplicationUntilProxyStarts_ != nullptr;};
    void deleteHoldApplicationUntilProxyStarts() { this->holdApplicationUntilProxyStarts_ = nullptr;};
    inline bool holdApplicationUntilProxyStarts() const { DARABONBA_PTR_GET_DEFAULT(holdApplicationUntilProxyStarts_, false) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setHoldApplicationUntilProxyStarts(bool holdApplicationUntilProxyStarts) { DARABONBA_PTR_SET_VALUE(holdApplicationUntilProxyStarts_, holdApplicationUntilProxyStarts) };


    // includeInboundPorts Field Functions 
    bool hasIncludeInboundPorts() const { return this->includeInboundPorts_ != nullptr;};
    void deleteIncludeInboundPorts() { this->includeInboundPorts_ = nullptr;};
    inline string includeInboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeInboundPorts_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setIncludeInboundPorts(string includeInboundPorts) { DARABONBA_PTR_SET_VALUE(includeInboundPorts_, includeInboundPorts) };


    // includeOutboundIPRanges Field Functions 
    bool hasIncludeOutboundIPRanges() const { return this->includeOutboundIPRanges_ != nullptr;};
    void deleteIncludeOutboundIPRanges() { this->includeOutboundIPRanges_ = nullptr;};
    inline string includeOutboundIPRanges() const { DARABONBA_PTR_GET_DEFAULT(includeOutboundIPRanges_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setIncludeOutboundIPRanges(string includeOutboundIPRanges) { DARABONBA_PTR_SET_VALUE(includeOutboundIPRanges_, includeOutboundIPRanges) };


    // includeOutboundPorts Field Functions 
    bool hasIncludeOutboundPorts() const { return this->includeOutboundPorts_ != nullptr;};
    void deleteIncludeOutboundPorts() { this->includeOutboundPorts_ = nullptr;};
    inline string includeOutboundPorts() const { DARABONBA_PTR_GET_DEFAULT(includeOutboundPorts_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setIncludeOutboundPorts(string includeOutboundPorts) { DARABONBA_PTR_SET_VALUE(includeOutboundPorts_, includeOutboundPorts) };


    // interceptionMode Field Functions 
    bool hasInterceptionMode() const { return this->interceptionMode_ != nullptr;};
    void deleteInterceptionMode() { this->interceptionMode_ = nullptr;};
    inline string interceptionMode() const { DARABONBA_PTR_GET_DEFAULT(interceptionMode_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setInterceptionMode(string interceptionMode) { DARABONBA_PTR_SET_VALUE(interceptionMode_, interceptionMode) };


    // istioDNSProxyEnabled Field Functions 
    bool hasIstioDNSProxyEnabled() const { return this->istioDNSProxyEnabled_ != nullptr;};
    void deleteIstioDNSProxyEnabled() { this->istioDNSProxyEnabled_ = nullptr;};
    inline bool istioDNSProxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(istioDNSProxyEnabled_, false) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setIstioDNSProxyEnabled(bool istioDNSProxyEnabled) { DARABONBA_PTR_SET_VALUE(istioDNSProxyEnabled_, istioDNSProxyEnabled) };


    // lifecycleStr Field Functions 
    bool hasLifecycleStr() const { return this->lifecycleStr_ != nullptr;};
    void deleteLifecycleStr() { this->lifecycleStr_ = nullptr;};
    inline string lifecycleStr() const { DARABONBA_PTR_GET_DEFAULT(lifecycleStr_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setLifecycleStr(string lifecycleStr) { DARABONBA_PTR_SET_VALUE(lifecycleStr_, lifecycleStr) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // privileged Field Functions 
    bool hasPrivileged() const { return this->privileged_ != nullptr;};
    void deletePrivileged() { this->privileged_ = nullptr;};
    inline bool privileged() const { DARABONBA_PTR_GET_DEFAULT(privileged_, false) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setPrivileged(bool privileged) { DARABONBA_PTR_SET_VALUE(privileged_, privileged) };


    // proxyMetadata Field Functions 
    bool hasProxyMetadata() const { return this->proxyMetadata_ != nullptr;};
    void deleteProxyMetadata() { this->proxyMetadata_ = nullptr;};
    inline const map<string, string> & proxyMetadata() const { DARABONBA_PTR_GET_CONST(proxyMetadata_, map<string, string>) };
    inline map<string, string> proxyMetadata() { DARABONBA_PTR_GET(proxyMetadata_, map<string, string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setProxyMetadata(const map<string, string> & proxyMetadata) { DARABONBA_PTR_SET_VALUE(proxyMetadata_, proxyMetadata) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setProxyMetadata(map<string, string> && proxyMetadata) { DARABONBA_PTR_SET_RVALUE(proxyMetadata_, proxyMetadata) };


    // proxyStatsMatcher Field Functions 
    bool hasProxyStatsMatcher() const { return this->proxyStatsMatcher_ != nullptr;};
    void deleteProxyStatsMatcher() { this->proxyStatsMatcher_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher & proxyStatsMatcher() const { DARABONBA_PTR_GET_CONST(proxyStatsMatcher_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher proxyStatsMatcher() { DARABONBA_PTR_GET(proxyStatsMatcher_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setProxyStatsMatcher(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher & proxyStatsMatcher) { DARABONBA_PTR_SET_VALUE(proxyStatsMatcher_, proxyStatsMatcher) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setProxyStatsMatcher(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher && proxyStatsMatcher) { DARABONBA_PTR_SET_RVALUE(proxyStatsMatcher_, proxyStatsMatcher) };


    // readinessFailureThreshold Field Functions 
    bool hasReadinessFailureThreshold() const { return this->readinessFailureThreshold_ != nullptr;};
    void deleteReadinessFailureThreshold() { this->readinessFailureThreshold_ = nullptr;};
    inline int32_t readinessFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessFailureThreshold_, 0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setReadinessFailureThreshold(int32_t readinessFailureThreshold) { DARABONBA_PTR_SET_VALUE(readinessFailureThreshold_, readinessFailureThreshold) };


    // readinessInitialDelaySeconds Field Functions 
    bool hasReadinessInitialDelaySeconds() const { return this->readinessInitialDelaySeconds_ != nullptr;};
    void deleteReadinessInitialDelaySeconds() { this->readinessInitialDelaySeconds_ = nullptr;};
    inline int32_t readinessInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessInitialDelaySeconds_, 0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setReadinessInitialDelaySeconds(int32_t readinessInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(readinessInitialDelaySeconds_, readinessInitialDelaySeconds) };


    // readinessPeriodSeconds Field Functions 
    bool hasReadinessPeriodSeconds() const { return this->readinessPeriodSeconds_ != nullptr;};
    void deleteReadinessPeriodSeconds() { this->readinessPeriodSeconds_ = nullptr;};
    inline int32_t readinessPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessPeriodSeconds_, 0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setReadinessPeriodSeconds(int32_t readinessPeriodSeconds) { DARABONBA_PTR_SET_VALUE(readinessPeriodSeconds_, readinessPeriodSeconds) };


    // runtimeValues Field Functions 
    bool hasRuntimeValues() const { return this->runtimeValues_ != nullptr;};
    void deleteRuntimeValues() { this->runtimeValues_ = nullptr;};
    inline const map<string, string> & runtimeValues() const { DARABONBA_PTR_GET_CONST(runtimeValues_, map<string, string>) };
    inline map<string, string> runtimeValues() { DARABONBA_PTR_GET(runtimeValues_, map<string, string>) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setRuntimeValues(const map<string, string> & runtimeValues) { DARABONBA_PTR_SET_VALUE(runtimeValues_, runtimeValues) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setRuntimeValues(map<string, string> && runtimeValues) { DARABONBA_PTR_SET_RVALUE(runtimeValues_, runtimeValues) };


    // SMCConfiguration Field Functions 
    bool hasSMCConfiguration() const { return this->SMCConfiguration_ != nullptr;};
    void deleteSMCConfiguration() { this->SMCConfiguration_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration & SMCConfiguration() const { DARABONBA_PTR_GET_CONST(SMCConfiguration_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration SMCConfiguration() { DARABONBA_PTR_GET(SMCConfiguration_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSMCConfiguration(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration & SMCConfiguration) { DARABONBA_PTR_SET_VALUE(SMCConfiguration_, SMCConfiguration) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSMCConfiguration(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration && SMCConfiguration) { DARABONBA_PTR_SET_RVALUE(SMCConfiguration_, SMCConfiguration) };


    // scaledSidecarResource Field Functions 
    bool hasScaledSidecarResource() const { return this->scaledSidecarResource_ != nullptr;};
    void deleteScaledSidecarResource() { this->scaledSidecarResource_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource & scaledSidecarResource() const { DARABONBA_PTR_GET_CONST(scaledSidecarResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource scaledSidecarResource() { DARABONBA_PTR_GET(scaledSidecarResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setScaledSidecarResource(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource & scaledSidecarResource) { DARABONBA_PTR_SET_VALUE(scaledSidecarResource_, scaledSidecarResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setScaledSidecarResource(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource && scaledSidecarResource) { DARABONBA_PTR_SET_RVALUE(scaledSidecarResource_, scaledSidecarResource) };


    // sidecarProxyAckSloResource Field Functions 
    bool hasSidecarProxyAckSloResource() const { return this->sidecarProxyAckSloResource_ != nullptr;};
    void deleteSidecarProxyAckSloResource() { this->sidecarProxyAckSloResource_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource & sidecarProxyAckSloResource() const { DARABONBA_PTR_GET_CONST(sidecarProxyAckSloResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource sidecarProxyAckSloResource() { DARABONBA_PTR_GET(sidecarProxyAckSloResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyAckSloResource(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource & sidecarProxyAckSloResource) { DARABONBA_PTR_SET_VALUE(sidecarProxyAckSloResource_, sidecarProxyAckSloResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyAckSloResource(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource && sidecarProxyAckSloResource) { DARABONBA_PTR_SET_RVALUE(sidecarProxyAckSloResource_, sidecarProxyAckSloResource) };


    // sidecarProxyInitAckSloResource Field Functions 
    bool hasSidecarProxyInitAckSloResource() const { return this->sidecarProxyInitAckSloResource_ != nullptr;};
    void deleteSidecarProxyInitAckSloResource() { this->sidecarProxyInitAckSloResource_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource & sidecarProxyInitAckSloResource() const { DARABONBA_PTR_GET_CONST(sidecarProxyInitAckSloResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource sidecarProxyInitAckSloResource() { DARABONBA_PTR_GET(sidecarProxyInitAckSloResource_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitAckSloResource(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource & sidecarProxyInitAckSloResource) { DARABONBA_PTR_SET_VALUE(sidecarProxyInitAckSloResource_, sidecarProxyInitAckSloResource) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitAckSloResource(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource && sidecarProxyInitAckSloResource) { DARABONBA_PTR_SET_RVALUE(sidecarProxyInitAckSloResource_, sidecarProxyInitAckSloResource) };


    // sidecarProxyInitResourceLimit Field Functions 
    bool hasSidecarProxyInitResourceLimit() const { return this->sidecarProxyInitResourceLimit_ != nullptr;};
    void deleteSidecarProxyInitResourceLimit() { this->sidecarProxyInitResourceLimit_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit & sidecarProxyInitResourceLimit() const { DARABONBA_PTR_GET_CONST(sidecarProxyInitResourceLimit_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit sidecarProxyInitResourceLimit() { DARABONBA_PTR_GET(sidecarProxyInitResourceLimit_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitResourceLimit(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit & sidecarProxyInitResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyInitResourceLimit_, sidecarProxyInitResourceLimit) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitResourceLimit(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit && sidecarProxyInitResourceLimit) { DARABONBA_PTR_SET_RVALUE(sidecarProxyInitResourceLimit_, sidecarProxyInitResourceLimit) };


    // sidecarProxyInitResourceRequest Field Functions 
    bool hasSidecarProxyInitResourceRequest() const { return this->sidecarProxyInitResourceRequest_ != nullptr;};
    void deleteSidecarProxyInitResourceRequest() { this->sidecarProxyInitResourceRequest_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest & sidecarProxyInitResourceRequest() const { DARABONBA_PTR_GET_CONST(sidecarProxyInitResourceRequest_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest sidecarProxyInitResourceRequest() { DARABONBA_PTR_GET(sidecarProxyInitResourceRequest_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitResourceRequest(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest & sidecarProxyInitResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyInitResourceRequest_, sidecarProxyInitResourceRequest) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyInitResourceRequest(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest && sidecarProxyInitResourceRequest) { DARABONBA_PTR_SET_RVALUE(sidecarProxyInitResourceRequest_, sidecarProxyInitResourceRequest) };


    // sidecarProxyResourceLimit Field Functions 
    bool hasSidecarProxyResourceLimit() const { return this->sidecarProxyResourceLimit_ != nullptr;};
    void deleteSidecarProxyResourceLimit() { this->sidecarProxyResourceLimit_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit & sidecarProxyResourceLimit() const { DARABONBA_PTR_GET_CONST(sidecarProxyResourceLimit_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit sidecarProxyResourceLimit() { DARABONBA_PTR_GET(sidecarProxyResourceLimit_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyResourceLimit(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit & sidecarProxyResourceLimit) { DARABONBA_PTR_SET_VALUE(sidecarProxyResourceLimit_, sidecarProxyResourceLimit) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyResourceLimit(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit && sidecarProxyResourceLimit) { DARABONBA_PTR_SET_RVALUE(sidecarProxyResourceLimit_, sidecarProxyResourceLimit) };


    // sidecarProxyResourceRequest Field Functions 
    bool hasSidecarProxyResourceRequest() const { return this->sidecarProxyResourceRequest_ != nullptr;};
    void deleteSidecarProxyResourceRequest() { this->sidecarProxyResourceRequest_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest & sidecarProxyResourceRequest() const { DARABONBA_PTR_GET_CONST(sidecarProxyResourceRequest_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest sidecarProxyResourceRequest() { DARABONBA_PTR_GET(sidecarProxyResourceRequest_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyResourceRequest(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest & sidecarProxyResourceRequest) { DARABONBA_PTR_SET_VALUE(sidecarProxyResourceRequest_, sidecarProxyResourceRequest) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setSidecarProxyResourceRequest(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest && sidecarProxyResourceRequest) { DARABONBA_PTR_SET_RVALUE(sidecarProxyResourceRequest_, sidecarProxyResourceRequest) };


    // terminationDrainDuration Field Functions 
    bool hasTerminationDrainDuration() const { return this->terminationDrainDuration_ != nullptr;};
    void deleteTerminationDrainDuration() { this->terminationDrainDuration_ = nullptr;};
    inline string terminationDrainDuration() const { DARABONBA_PTR_GET_DEFAULT(terminationDrainDuration_, "") };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setTerminationDrainDuration(string terminationDrainDuration) { DARABONBA_PTR_SET_VALUE(terminationDrainDuration_, terminationDrainDuration) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing & tracing() const { DARABONBA_PTR_GET_CONST(tracing_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing) };
    inline Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing tracing() { DARABONBA_PTR_GET(tracing_, Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setTracing(const Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing & tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches& setTracing(Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing && tracing) { DARABONBA_PTR_SET_RVALUE(tracing_, tracing) };


  protected:
    // The number of worker threads to run in the istio-proxy container.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // Indicates whether the core dump feature is enabled for the sidecar proxy containers. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableCoreDump_ = nullptr;
    // The inbound ports to be excluded from redirection to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> excludeInboundPorts_ = nullptr;
    // The outbound IP ranges in CIDR form to be excluded from redirection to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> excludeOutboundIPRanges_ = nullptr;
    // The outbound ports to be excluded from redirection to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> excludeOutboundPorts_ = nullptr;
    // Indicates whether applications can be started only after the istio-proxy container starts. Valid values:
    // 
    // *   `true`: Applications can be started only after the istio-proxy container starts.
    // *   `false`: Applications can be started before the istio-proxy container starts.
    std::shared_ptr<bool> holdApplicationUntilProxyStarts_ = nullptr;
    // The inbound ports for which traffic is to be redirected to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> includeInboundPorts_ = nullptr;
    // The outbound IP ranges in CIDR form for which traffic is to be redirected to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> includeOutboundIPRanges_ = nullptr;
    // The outbound ports for which traffic is to be redirected to the sidecar proxy in the ASM instance.
    std::shared_ptr<string> includeOutboundPorts_ = nullptr;
    // The mode in which the sidecar proxy intercepts inbound traffic. Valid values:
    // 
    // *   `REDIRECT` (default): In this mode, source IP addresses are lost during traffic redirection to the sidecar proxy.
    // *   `TPROXY`: In this mode, both the source and destination IP addresses and ports are preserved.
    std::shared_ptr<string> interceptionMode_ = nullptr;
    // Indicates whether the Domain Name System (DNS) proxy feature is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> istioDNSProxyEnabled_ = nullptr;
    // The JSON string that describes the lifecycle of the sidecar proxy.
    std::shared_ptr<string> lifecycleStr_ = nullptr;
    // The log level. Valid values: `info`, `debug`, `trace`, and `error`.
    std::shared_ptr<string> logLevel_ = nullptr;
    // Indicates whether the privileged mode is enabled in the security context of the sidecar proxy containers. Valid values:
    // 
    // *   `true`: The privileged mode is enabled, that is, the sidecar proxy containers run in privileged mode.
    // *   `false`: The privileged mode is not enabled.
    std::shared_ptr<bool> privileged_ = nullptr;
    std::shared_ptr<map<string, string>> proxyMetadata_ = nullptr;
    // The custom Envoy statistics that are reported by the sidecar proxy.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesProxyStatsMatcher> proxyStatsMatcher_ = nullptr;
    // The number of readiness check failures required before marking a sidecar proxy container as not ready.
    std::shared_ptr<int32_t> readinessFailureThreshold_ = nullptr;
    // The amount of time to wait before the first readiness check of a sidecar proxy container is performed. Unit: seconds.
    std::shared_ptr<int32_t> readinessInitialDelaySeconds_ = nullptr;
    // The interval between two readiness checks of a sidecar proxy container. Unit: seconds.
    std::shared_ptr<int32_t> readinessPeriodSeconds_ = nullptr;
    // Indicates the runtime parameters of Envoy proxy processes in the sidecar proxy container.
    std::shared_ptr<map<string, string>> runtimeValues_ = nullptr;
    // The configurations of the Shared Memory Communications over Remote Direct Memory Access (SMC-R) optimization feature.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSMCConfiguration> SMCConfiguration_ = nullptr;
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesScaledSidecarResource> scaledSidecarResource_ = nullptr;
    // The maximum size of reclaimed ACK resources that are available to the sidecar proxy container. This configuration item indicates the maximum size of resources that are available to the sidecar proxy container in a pod labeled with `koordinator.sh/qosClass`.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyAckSloResource> sidecarProxyAckSloResource_ = nullptr;
    // The reclaimed Container Service for Kubernetes (ACK) resources for the istio-init container. This configuration item indicates the resources of the istio-init container in a pod labeled with `koordinator.sh/qosClass`. Reclaimed ACK resources are resources that can be dynamically overcommitted.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitAckSloResource> sidecarProxyInitAckSloResource_ = nullptr;
    // The maximum size of resources that are available to the istio-init container in the pod into which the sidecar proxy is injected. The istio-init container is used in this topic.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit> sidecarProxyInitResourceLimit_ = nullptr;
    // The minimum size of resources that are required by the istio-init container.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest> sidecarProxyInitResourceRequest_ = nullptr;
    // The maximum size of resources that are available to the sidecar proxy container.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit> sidecarProxyResourceLimit_ = nullptr;
    // The minimum size of resources that are required by the sidecar proxy container.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest> sidecarProxyResourceRequest_ = nullptr;
    // The maximum period of time allowed for connections to complete on sidecar proxy shutdown.
    std::shared_ptr<string> terminationDrainDuration_ = nullptr;
    // The custom configurations of Tracing Analysis.
    std::shared_ptr<Models::DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing> tracing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
