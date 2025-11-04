// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationsResponseBodyScalingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_TO_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_TO_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_TO_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_TO_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_TO_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_TO_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_TO_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_TO_JSON(DnsConfigSearches, dnsConfigSearches_);
      DARABONBA_PTR_TO_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_TO_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_TO_JSON(ImageSnapshotId, imageSnapshotId_);
      DARABONBA_PTR_TO_JSON(IngressBandwidth, ingressBandwidth_);
      DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityContextSysCtls, securityContextSysCtls_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SlsEnable, slsEnable_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_FROM_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_FROM_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_FROM_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_FROM_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_FROM_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_FROM_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_FROM_JSON(DnsConfigSearches, dnsConfigSearches_);
      DARABONBA_PTR_FROM_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_FROM_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_FROM_JSON(ImageSnapshotId, imageSnapshotId_);
      DARABONBA_PTR_FROM_JSON(IngressBandwidth, ingressBandwidth_);
      DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityContextSysCtls, securityContextSysCtls_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SlsEnable, slsEnable_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurations &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations(DescribeEciScalingConfigurationsResponseBodyScalingConfigurations &&) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationsResponseBodyScalingConfigurations() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& operator=(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurations &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& operator=(DescribeEciScalingConfigurationsResponseBodyScalingConfigurations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && return this->activeDeadlineSeconds_ == nullptr && return this->autoCreateEip_ == nullptr && return this->autoMatchImageCache_ == nullptr && return this->containerGroupName_ == nullptr && return this->containers_ == nullptr
        && return this->costOptimization_ == nullptr && return this->cpu_ == nullptr && return this->cpuOptionsCore_ == nullptr && return this->cpuOptionsThreadsPerCore_ == nullptr && return this->creationTime_ == nullptr
        && return this->dataCacheBucket_ == nullptr && return this->dataCacheBurstingEnabled_ == nullptr && return this->dataCachePL_ == nullptr && return this->dataCacheProvisionedIops_ == nullptr && return this->description_ == nullptr
        && return this->dnsConfigNameServers_ == nullptr && return this->dnsConfigOptions_ == nullptr && return this->dnsConfigSearches_ == nullptr && return this->dnsPolicy_ == nullptr && return this->egressBandwidth_ == nullptr
        && return this->eipBandwidth_ == nullptr && return this->ephemeralStorage_ == nullptr && return this->gpuDriverVersion_ == nullptr && return this->hostAliases_ == nullptr && return this->hostName_ == nullptr
        && return this->imageRegistryCredentials_ == nullptr && return this->imageSnapshotId_ == nullptr && return this->ingressBandwidth_ == nullptr && return this->initContainers_ == nullptr && return this->instanceFamilyLevel_ == nullptr
        && return this->instanceTypes_ == nullptr && return this->ipv6AddressCount_ == nullptr && return this->lifecycleState_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->memory_ == nullptr
        && return this->ntpServers_ == nullptr && return this->ramRoleName_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->restartPolicy_ == nullptr
        && return this->scalingConfigurationId_ == nullptr && return this->scalingConfigurationName_ == nullptr && return this->scalingGroupId_ == nullptr && return this->securityContextSysCtls_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->slsEnable_ == nullptr && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr && return this->tags_ == nullptr && return this->terminationGracePeriodSeconds_ == nullptr
        && return this->volumes_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos> & acrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos> acrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setAcrRegistryInfos(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setAcrRegistryInfos(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int32_t activeDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setActiveDeadlineSeconds(int32_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // autoCreateEip Field Functions 
    bool hasAutoCreateEip() const { return this->autoCreateEip_ != nullptr;};
    void deleteAutoCreateEip() { this->autoCreateEip_ = nullptr;};
    inline bool autoCreateEip() const { DARABONBA_PTR_GET_DEFAULT(autoCreateEip_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setAutoCreateEip(bool autoCreateEip) { DARABONBA_PTR_SET_VALUE(autoCreateEip_, autoCreateEip) };


    // autoMatchImageCache Field Functions 
    bool hasAutoMatchImageCache() const { return this->autoMatchImageCache_ != nullptr;};
    void deleteAutoMatchImageCache() { this->autoMatchImageCache_ = nullptr;};
    inline bool autoMatchImageCache() const { DARABONBA_PTR_GET_DEFAULT(autoMatchImageCache_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setAutoMatchImageCache(bool autoMatchImageCache) { DARABONBA_PTR_SET_VALUE(autoMatchImageCache_, autoMatchImageCache) };


    // containerGroupName Field Functions 
    bool hasContainerGroupName() const { return this->containerGroupName_ != nullptr;};
    void deleteContainerGroupName() { this->containerGroupName_ = nullptr;};
    inline string containerGroupName() const { DARABONBA_PTR_GET_DEFAULT(containerGroupName_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setContainerGroupName(string containerGroupName) { DARABONBA_PTR_SET_VALUE(containerGroupName_, containerGroupName) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers> containers() { DARABONBA_PTR_GET(containers_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setContainers(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setContainers(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // costOptimization Field Functions 
    bool hasCostOptimization() const { return this->costOptimization_ != nullptr;};
    void deleteCostOptimization() { this->costOptimization_ = nullptr;};
    inline bool costOptimization() const { DARABONBA_PTR_GET_DEFAULT(costOptimization_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setCostOptimization(bool costOptimization) { DARABONBA_PTR_SET_VALUE(costOptimization_, costOptimization) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuOptionsCore Field Functions 
    bool hasCpuOptionsCore() const { return this->cpuOptionsCore_ != nullptr;};
    void deleteCpuOptionsCore() { this->cpuOptionsCore_ = nullptr;};
    inline int32_t cpuOptionsCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsCore_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setCpuOptionsCore(int32_t cpuOptionsCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsCore_, cpuOptionsCore) };


    // cpuOptionsThreadsPerCore Field Functions 
    bool hasCpuOptionsThreadsPerCore() const { return this->cpuOptionsThreadsPerCore_ != nullptr;};
    void deleteCpuOptionsThreadsPerCore() { this->cpuOptionsThreadsPerCore_ = nullptr;};
    inline int32_t cpuOptionsThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsThreadsPerCore_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setCpuOptionsThreadsPerCore(int32_t cpuOptionsThreadsPerCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsThreadsPerCore_, cpuOptionsThreadsPerCore) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataCacheBucket Field Functions 
    bool hasDataCacheBucket() const { return this->dataCacheBucket_ != nullptr;};
    void deleteDataCacheBucket() { this->dataCacheBucket_ = nullptr;};
    inline string dataCacheBucket() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBucket_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDataCacheBucket(string dataCacheBucket) { DARABONBA_PTR_SET_VALUE(dataCacheBucket_, dataCacheBucket) };


    // dataCacheBurstingEnabled Field Functions 
    bool hasDataCacheBurstingEnabled() const { return this->dataCacheBurstingEnabled_ != nullptr;};
    void deleteDataCacheBurstingEnabled() { this->dataCacheBurstingEnabled_ = nullptr;};
    inline bool dataCacheBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBurstingEnabled_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) { DARABONBA_PTR_SET_VALUE(dataCacheBurstingEnabled_, dataCacheBurstingEnabled) };


    // dataCachePL Field Functions 
    bool hasDataCachePL() const { return this->dataCachePL_ != nullptr;};
    void deleteDataCachePL() { this->dataCachePL_ = nullptr;};
    inline string dataCachePL() const { DARABONBA_PTR_GET_DEFAULT(dataCachePL_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDataCachePL(string dataCachePL) { DARABONBA_PTR_SET_VALUE(dataCachePL_, dataCachePL) };


    // dataCacheProvisionedIops Field Functions 
    bool hasDataCacheProvisionedIops() const { return this->dataCacheProvisionedIops_ != nullptr;};
    void deleteDataCacheProvisionedIops() { this->dataCacheProvisionedIops_ = nullptr;};
    inline int32_t dataCacheProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(dataCacheProvisionedIops_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDataCacheProvisionedIops(int32_t dataCacheProvisionedIops) { DARABONBA_PTR_SET_VALUE(dataCacheProvisionedIops_, dataCacheProvisionedIops) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsConfigNameServers Field Functions 
    bool hasDnsConfigNameServers() const { return this->dnsConfigNameServers_ != nullptr;};
    void deleteDnsConfigNameServers() { this->dnsConfigNameServers_ = nullptr;};
    inline const vector<string> & dnsConfigNameServers() const { DARABONBA_PTR_GET_CONST(dnsConfigNameServers_, vector<string>) };
    inline vector<string> dnsConfigNameServers() { DARABONBA_PTR_GET(dnsConfigNameServers_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigNameServers(const vector<string> & dnsConfigNameServers) { DARABONBA_PTR_SET_VALUE(dnsConfigNameServers_, dnsConfigNameServers) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigNameServers(vector<string> && dnsConfigNameServers) { DARABONBA_PTR_SET_RVALUE(dnsConfigNameServers_, dnsConfigNameServers) };


    // dnsConfigOptions Field Functions 
    bool hasDnsConfigOptions() const { return this->dnsConfigOptions_ != nullptr;};
    void deleteDnsConfigOptions() { this->dnsConfigOptions_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions> & dnsConfigOptions() const { DARABONBA_PTR_GET_CONST(dnsConfigOptions_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions> dnsConfigOptions() { DARABONBA_PTR_GET(dnsConfigOptions_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigOptions(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions> & dnsConfigOptions) { DARABONBA_PTR_SET_VALUE(dnsConfigOptions_, dnsConfigOptions) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigOptions(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions> && dnsConfigOptions) { DARABONBA_PTR_SET_RVALUE(dnsConfigOptions_, dnsConfigOptions) };


    // dnsConfigSearches Field Functions 
    bool hasDnsConfigSearches() const { return this->dnsConfigSearches_ != nullptr;};
    void deleteDnsConfigSearches() { this->dnsConfigSearches_ = nullptr;};
    inline const vector<string> & dnsConfigSearches() const { DARABONBA_PTR_GET_CONST(dnsConfigSearches_, vector<string>) };
    inline vector<string> dnsConfigSearches() { DARABONBA_PTR_GET(dnsConfigSearches_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigSearches(const vector<string> & dnsConfigSearches) { DARABONBA_PTR_SET_VALUE(dnsConfigSearches_, dnsConfigSearches) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsConfigSearches(vector<string> && dnsConfigSearches) { DARABONBA_PTR_SET_RVALUE(dnsConfigSearches_, dnsConfigSearches) };


    // dnsPolicy Field Functions 
    bool hasDnsPolicy() const { return this->dnsPolicy_ != nullptr;};
    void deleteDnsPolicy() { this->dnsPolicy_ = nullptr;};
    inline string dnsPolicy() const { DARABONBA_PTR_GET_DEFAULT(dnsPolicy_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setDnsPolicy(string dnsPolicy) { DARABONBA_PTR_SET_VALUE(dnsPolicy_, dnsPolicy) };


    // egressBandwidth Field Functions 
    bool hasEgressBandwidth() const { return this->egressBandwidth_ != nullptr;};
    void deleteEgressBandwidth() { this->egressBandwidth_ = nullptr;};
    inline int64_t egressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(egressBandwidth_, 0L) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setEgressBandwidth(int64_t egressBandwidth) { DARABONBA_PTR_SET_VALUE(egressBandwidth_, egressBandwidth) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline int32_t ephemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setEphemeralStorage(int32_t ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases> & hostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases> hostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setHostAliases(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setHostAliases(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials> & imageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials> imageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setImageRegistryCredentials(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setImageRegistryCredentials(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // imageSnapshotId Field Functions 
    bool hasImageSnapshotId() const { return this->imageSnapshotId_ != nullptr;};
    void deleteImageSnapshotId() { this->imageSnapshotId_ = nullptr;};
    inline string imageSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(imageSnapshotId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setImageSnapshotId(string imageSnapshotId) { DARABONBA_PTR_SET_VALUE(imageSnapshotId_, imageSnapshotId) };


    // ingressBandwidth Field Functions 
    bool hasIngressBandwidth() const { return this->ingressBandwidth_ != nullptr;};
    void deleteIngressBandwidth() { this->ingressBandwidth_ = nullptr;};
    inline int64_t ingressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ingressBandwidth_, 0L) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setIngressBandwidth(int64_t ingressBandwidth) { DARABONBA_PTR_SET_VALUE(ingressBandwidth_, ingressBandwidth) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers> & initContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers> initContainers() { DARABONBA_PTR_GET(initContainers_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setInitContainers(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setInitContainers(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string lifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // ntpServers Field Functions 
    bool hasNtpServers() const { return this->ntpServers_ != nullptr;};
    void deleteNtpServers() { this->ntpServers_ = nullptr;};
    inline const vector<string> & ntpServers() const { DARABONBA_PTR_GET_CONST(ntpServers_, vector<string>) };
    inline vector<string> ntpServers() { DARABONBA_PTR_GET(ntpServers_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setNtpServers(const vector<string> & ntpServers) { DARABONBA_PTR_SET_VALUE(ntpServers_, ntpServers) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setNtpServers(vector<string> && ntpServers) { DARABONBA_PTR_SET_RVALUE(ntpServers_, ntpServers) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // restartPolicy Field Functions 
    bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
    void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
    inline string restartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // securityContextSysCtls Field Functions 
    bool hasSecurityContextSysCtls() const { return this->securityContextSysCtls_ != nullptr;};
    void deleteSecurityContextSysCtls() { this->securityContextSysCtls_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls> & securityContextSysCtls() const { DARABONBA_PTR_GET_CONST(securityContextSysCtls_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls> securityContextSysCtls() { DARABONBA_PTR_GET(securityContextSysCtls_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSecurityContextSysCtls(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls> & securityContextSysCtls) { DARABONBA_PTR_SET_VALUE(securityContextSysCtls_, securityContextSysCtls) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSecurityContextSysCtls(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls> && securityContextSysCtls) { DARABONBA_PTR_SET_RVALUE(securityContextSysCtls_, securityContextSysCtls) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // slsEnable Field Functions 
    bool hasSlsEnable() const { return this->slsEnable_ != nullptr;};
    void deleteSlsEnable() { this->slsEnable_ = nullptr;};
    inline bool slsEnable() const { DARABONBA_PTR_GET_DEFAULT(slsEnable_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSlsEnable(bool slsEnable) { DARABONBA_PTR_SET_VALUE(slsEnable_, slsEnable) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setTags(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setTags(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes> & volumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes> volumes() { DARABONBA_PTR_GET(volumes_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setVolumes(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurations& setVolumes(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // The Container Registry Enterprise Edition instances.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsAcrRegistryInfos>> acrRegistryInfos_ = nullptr;
    // The validity period of the scaling configuration. Unit: seconds.
    std::shared_ptr<int32_t> activeDeadlineSeconds_ = nullptr;
    // Indicates whether elastic IP addresses (EIPs) are automatically created and bound to elastic container instances.
    std::shared_ptr<bool> autoCreateEip_ = nullptr;
    // Indicates whether the image cache is automatically matched. Default value: false.
    std::shared_ptr<bool> autoMatchImageCache_ = nullptr;
    // The name series of elastic container instances.
    std::shared_ptr<string> containerGroupName_ = nullptr;
    // The containers in an elastic container instance.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers>> containers_ = nullptr;
    // Indicates whether the Cost Optimization feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> costOptimization_ = nullptr;
    // The number of vCPUs per elastic container instance.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of physical CPU cores. This parameter can be specified for only specific instance types. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsCore_ = nullptr;
    // The number of threads per core. This parameter can be specified for only specific instance types. A value of 1 indicates that Hyper-Threading is disabled. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsThreadsPerCore_ = nullptr;
    // The time at which the scaling configuration was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The bucket that stores the data cache.
    std::shared_ptr<string> dataCacheBucket_ = nullptr;
    // Indicates whether the Performance Burst feature is enabled for the ESSD AutoPL disk that stores the data cache. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> dataCacheBurstingEnabled_ = nullptr;
    // The performance level (PL) of the cloud disk that stores the data cache. We recommend that you use enterprise SSDs (ESSDs). Valid values:
    // 
    // *   PL0: An ESSD can provide up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can provide up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can provide up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can provide up to 1,000,000 random read/write IOPS.
    // 
    // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> dataCachePL_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk that stores the data cache. Valid values: 0 to min{50,000, 1000 x *Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50* x Capacity, 50,000}.
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int32_t> dataCacheProvisionedIops_ = nullptr;
    // >  This parameter is not available for use.
    std::shared_ptr<string> description_ = nullptr;
    // The IP addresses of the Domain Name Service (DNS) server.
    std::shared_ptr<vector<string>> dnsConfigNameServers_ = nullptr;
    // The options. Each option is a name-value pair. The value in the name-value pair is optional.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsDnsConfigOptions>> dnsConfigOptions_ = nullptr;
    // The search domains of the DNS servers.
    std::shared_ptr<vector<string>> dnsConfigSearches_ = nullptr;
    // The Domain Name System (DNS) policy.
    std::shared_ptr<string> dnsPolicy_ = nullptr;
    // The maximum outbound public bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> egressBandwidth_ = nullptr;
    // The EIP bandwidth. Default value: 5. Unit: Mbit/s.
    std::shared_ptr<int32_t> eipBandwidth_ = nullptr;
    // The capacity of the ephemeral storage. Unit: GiB.
    std::shared_ptr<int32_t> ephemeralStorage_ = nullptr;
    // The version of the GPU driver.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The hostnames and IP addresses for a container that are added to the hosts file of the elastic container instance.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsHostAliases>> hostAliases_ = nullptr;
    // The hostname series.
    std::shared_ptr<string> hostName_ = nullptr;
    // The information about the image repository.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsImageRegistryCredentials>> imageRegistryCredentials_ = nullptr;
    // The ID of the image cache.
    std::shared_ptr<string> imageSnapshotId_ = nullptr;
    // The maximum inbound public bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> ingressBandwidth_ = nullptr;
    // The init containers.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainers>> initContainers_ = nullptr;
    // The level of the instance family, which is used to filter the available instance types that meet the specified requirements. This parameter takes effect only if `CostOptimization` is set to true. Valid values:
    // 
    // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources, and are suitable for business scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit-based entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The specified ECS instance types. You can specify up to five instance types.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The number of IPv6 addresses.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The status of the scaling configuration in the scaling group. Valid values:
    // 
    // *   Active: The scaling configuration is active in the scaling group. Auto Scaling uses the scaling configuration that is in the Active state to create instances during scale-out events.
    // *   Inactive: The scaling configuration is inactive in the scaling group. Scaling configurations that are in the Inactive state are still contained in the scaling group, but Auto Scaling does not use the inactive scaling configurations to create instances during scale-out events.
    std::shared_ptr<string> lifecycleState_ = nullptr;
    // The load balancing weight of each elastic container instance as a backend server. Valid values: 1 to 100.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size.
    // 
    // You can specify CPU and Memory to define the range of instance types. For example, if you set CPU to 2 and Memory to 16, the instance types that have 2 vCPUs and 16 GiB are returned. After you specify CPU and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones and preferentially creates instances by using the lowest-priced instance type.
    // 
    // >  You can specify CPU and Memory to define instance types only if you set Scaling Policy to Cost Optimization and no instance type is specified in the scaling configuration.
    std::shared_ptr<float> memory_ = nullptr;
    // The endpoints of the Network Time Protocol (NTP) server.
    std::shared_ptr<vector<string>> ntpServers_ = nullptr;
    // The Resource Access Management (RAM) role of elastic container instances. Elastic container instances and Elastic Compute Service (ECS) instances can share the same RAM role. For more information, see [Use an instance RAM role by calling API operations](https://help.aliyun.com/document_detail/61178.html).
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The region ID of elastic container instances.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The restart policy of elastic container instances. Valid values:
    // 
    // *   Never: Elastic container instances are never restarted.
    // *   Always: Elastic container instances are always restarted.
    // *   OnFailure: Elastic container instances are restarted upon failures.
    std::shared_ptr<string> restartPolicy_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The name of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The ID of the scaling group to which the scaling configuration belongs.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The system information of the security context in which the elastic container instance runs.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsSecurityContextSysCtls>> securityContextSysCtls_ = nullptr;
    // The ID of the security group with which elastic container instances are associated. Elastic container instances that are associated with the same security group can communicate with each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // >  This parameter is not available for use.
    std::shared_ptr<bool> slsEnable_ = nullptr;
    // The maximum hourly price for preemptible elastic container instances.
    // 
    // This parameter is returned only if you set SpotStrategy to SpotWithPriceLimit.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The bidding policy for elastic container instances. Valid values:
    // 
    // *   NoSpot: The instances are created as regular pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is automatically used as the bid price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The tags of elastic container instances. Tags are specified in the key-value format.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsTags>> tags_ = nullptr;
    // The buffer time during which a program handles operations before the program stops.
    std::shared_ptr<int32_t> terminationGracePeriodSeconds_ = nullptr;
    // The volumes.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsVolumes>> volumes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
