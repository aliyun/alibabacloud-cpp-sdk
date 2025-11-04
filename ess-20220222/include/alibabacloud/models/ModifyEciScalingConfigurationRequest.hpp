// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestAcrRegistryInfos.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestContainers.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestDnsConfigOptions.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestHostAliases.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestImageRegistryCredentials.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainers.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestSecurityContextSysCtls.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestTags.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_TO_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_TO_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(ContainersUpdateType, containersUpdateType_);
      DARABONBA_PTR_TO_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_TO_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_TO_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_TO_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_TO_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_TO_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_TO_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_TO_JSON(DnsConfigSearchs, dnsConfigSearchs_);
      DARABONBA_PTR_TO_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_TO_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(EnableSls, enableSls_);
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
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(SecurityContextSysCtls, securityContextSysCtls_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_FROM_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_FROM_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(ContainersUpdateType, containersUpdateType_);
      DARABONBA_PTR_FROM_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_FROM_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_FROM_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_FROM_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_FROM_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_FROM_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_FROM_JSON(DnsConfigSearchs, dnsConfigSearchs_);
      DARABONBA_PTR_FROM_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_FROM_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(EnableSls, enableSls_);
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
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(SecurityContextSysCtls, securityContextSysCtls_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    ModifyEciScalingConfigurationRequest() = default ;
    ModifyEciScalingConfigurationRequest(const ModifyEciScalingConfigurationRequest &) = default ;
    ModifyEciScalingConfigurationRequest(ModifyEciScalingConfigurationRequest &&) = default ;
    ModifyEciScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequest() = default ;
    ModifyEciScalingConfigurationRequest& operator=(const ModifyEciScalingConfigurationRequest &) = default ;
    ModifyEciScalingConfigurationRequest& operator=(ModifyEciScalingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && return this->activeDeadlineSeconds_ == nullptr && return this->autoCreateEip_ == nullptr && return this->autoMatchImageCache_ == nullptr && return this->containerGroupName_ == nullptr && return this->containers_ == nullptr
        && return this->containersUpdateType_ == nullptr && return this->costOptimization_ == nullptr && return this->cpu_ == nullptr && return this->cpuOptionsCore_ == nullptr && return this->cpuOptionsThreadsPerCore_ == nullptr
        && return this->dataCacheBucket_ == nullptr && return this->dataCacheBurstingEnabled_ == nullptr && return this->dataCachePL_ == nullptr && return this->dataCacheProvisionedIops_ == nullptr && return this->description_ == nullptr
        && return this->dnsConfigNameServers_ == nullptr && return this->dnsConfigOptions_ == nullptr && return this->dnsConfigSearchs_ == nullptr && return this->dnsPolicy_ == nullptr && return this->egressBandwidth_ == nullptr
        && return this->eipBandwidth_ == nullptr && return this->enableSls_ == nullptr && return this->ephemeralStorage_ == nullptr && return this->gpuDriverVersion_ == nullptr && return this->hostAliases_ == nullptr
        && return this->hostName_ == nullptr && return this->imageRegistryCredentials_ == nullptr && return this->imageSnapshotId_ == nullptr && return this->ingressBandwidth_ == nullptr && return this->initContainers_ == nullptr
        && return this->instanceFamilyLevel_ == nullptr && return this->instanceTypes_ == nullptr && return this->ipv6AddressCount_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->memory_ == nullptr
        && return this->ntpServers_ == nullptr && return this->ownerId_ == nullptr && return this->ramRoleName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->restartPolicy_ == nullptr && return this->scalingConfigurationId_ == nullptr && return this->scalingConfigurationName_ == nullptr && return this->securityContextSysCtls_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr && return this->tags_ == nullptr && return this->terminationGracePeriodSeconds_ == nullptr && return this->volumes_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos> & acrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos>) };
    inline vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos> acrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos>) };
    inline ModifyEciScalingConfigurationRequest& setAcrRegistryInfos(const vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline ModifyEciScalingConfigurationRequest& setAcrRegistryInfos(vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int64_t activeDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0L) };
    inline ModifyEciScalingConfigurationRequest& setActiveDeadlineSeconds(int64_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // autoCreateEip Field Functions 
    bool hasAutoCreateEip() const { return this->autoCreateEip_ != nullptr;};
    void deleteAutoCreateEip() { this->autoCreateEip_ = nullptr;};
    inline bool autoCreateEip() const { DARABONBA_PTR_GET_DEFAULT(autoCreateEip_, false) };
    inline ModifyEciScalingConfigurationRequest& setAutoCreateEip(bool autoCreateEip) { DARABONBA_PTR_SET_VALUE(autoCreateEip_, autoCreateEip) };


    // autoMatchImageCache Field Functions 
    bool hasAutoMatchImageCache() const { return this->autoMatchImageCache_ != nullptr;};
    void deleteAutoMatchImageCache() { this->autoMatchImageCache_ = nullptr;};
    inline bool autoMatchImageCache() const { DARABONBA_PTR_GET_DEFAULT(autoMatchImageCache_, false) };
    inline ModifyEciScalingConfigurationRequest& setAutoMatchImageCache(bool autoMatchImageCache) { DARABONBA_PTR_SET_VALUE(autoMatchImageCache_, autoMatchImageCache) };


    // containerGroupName Field Functions 
    bool hasContainerGroupName() const { return this->containerGroupName_ != nullptr;};
    void deleteContainerGroupName() { this->containerGroupName_ = nullptr;};
    inline string containerGroupName() const { DARABONBA_PTR_GET_DEFAULT(containerGroupName_, "") };
    inline ModifyEciScalingConfigurationRequest& setContainerGroupName(string containerGroupName) { DARABONBA_PTR_SET_VALUE(containerGroupName_, containerGroupName) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<ModifyEciScalingConfigurationRequestContainers>) };
    inline vector<ModifyEciScalingConfigurationRequestContainers> containers() { DARABONBA_PTR_GET(containers_, vector<ModifyEciScalingConfigurationRequestContainers>) };
    inline ModifyEciScalingConfigurationRequest& setContainers(const vector<ModifyEciScalingConfigurationRequestContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline ModifyEciScalingConfigurationRequest& setContainers(vector<ModifyEciScalingConfigurationRequestContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // containersUpdateType Field Functions 
    bool hasContainersUpdateType() const { return this->containersUpdateType_ != nullptr;};
    void deleteContainersUpdateType() { this->containersUpdateType_ = nullptr;};
    inline string containersUpdateType() const { DARABONBA_PTR_GET_DEFAULT(containersUpdateType_, "") };
    inline ModifyEciScalingConfigurationRequest& setContainersUpdateType(string containersUpdateType) { DARABONBA_PTR_SET_VALUE(containersUpdateType_, containersUpdateType) };


    // costOptimization Field Functions 
    bool hasCostOptimization() const { return this->costOptimization_ != nullptr;};
    void deleteCostOptimization() { this->costOptimization_ = nullptr;};
    inline bool costOptimization() const { DARABONBA_PTR_GET_DEFAULT(costOptimization_, false) };
    inline ModifyEciScalingConfigurationRequest& setCostOptimization(bool costOptimization) { DARABONBA_PTR_SET_VALUE(costOptimization_, costOptimization) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ModifyEciScalingConfigurationRequest& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuOptionsCore Field Functions 
    bool hasCpuOptionsCore() const { return this->cpuOptionsCore_ != nullptr;};
    void deleteCpuOptionsCore() { this->cpuOptionsCore_ = nullptr;};
    inline int32_t cpuOptionsCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsCore_, 0) };
    inline ModifyEciScalingConfigurationRequest& setCpuOptionsCore(int32_t cpuOptionsCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsCore_, cpuOptionsCore) };


    // cpuOptionsThreadsPerCore Field Functions 
    bool hasCpuOptionsThreadsPerCore() const { return this->cpuOptionsThreadsPerCore_ != nullptr;};
    void deleteCpuOptionsThreadsPerCore() { this->cpuOptionsThreadsPerCore_ = nullptr;};
    inline int32_t cpuOptionsThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsThreadsPerCore_, 0) };
    inline ModifyEciScalingConfigurationRequest& setCpuOptionsThreadsPerCore(int32_t cpuOptionsThreadsPerCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsThreadsPerCore_, cpuOptionsThreadsPerCore) };


    // dataCacheBucket Field Functions 
    bool hasDataCacheBucket() const { return this->dataCacheBucket_ != nullptr;};
    void deleteDataCacheBucket() { this->dataCacheBucket_ = nullptr;};
    inline string dataCacheBucket() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBucket_, "") };
    inline ModifyEciScalingConfigurationRequest& setDataCacheBucket(string dataCacheBucket) { DARABONBA_PTR_SET_VALUE(dataCacheBucket_, dataCacheBucket) };


    // dataCacheBurstingEnabled Field Functions 
    bool hasDataCacheBurstingEnabled() const { return this->dataCacheBurstingEnabled_ != nullptr;};
    void deleteDataCacheBurstingEnabled() { this->dataCacheBurstingEnabled_ = nullptr;};
    inline bool dataCacheBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBurstingEnabled_, false) };
    inline ModifyEciScalingConfigurationRequest& setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) { DARABONBA_PTR_SET_VALUE(dataCacheBurstingEnabled_, dataCacheBurstingEnabled) };


    // dataCachePL Field Functions 
    bool hasDataCachePL() const { return this->dataCachePL_ != nullptr;};
    void deleteDataCachePL() { this->dataCachePL_ = nullptr;};
    inline string dataCachePL() const { DARABONBA_PTR_GET_DEFAULT(dataCachePL_, "") };
    inline ModifyEciScalingConfigurationRequest& setDataCachePL(string dataCachePL) { DARABONBA_PTR_SET_VALUE(dataCachePL_, dataCachePL) };


    // dataCacheProvisionedIops Field Functions 
    bool hasDataCacheProvisionedIops() const { return this->dataCacheProvisionedIops_ != nullptr;};
    void deleteDataCacheProvisionedIops() { this->dataCacheProvisionedIops_ = nullptr;};
    inline int32_t dataCacheProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(dataCacheProvisionedIops_, 0) };
    inline ModifyEciScalingConfigurationRequest& setDataCacheProvisionedIops(int32_t dataCacheProvisionedIops) { DARABONBA_PTR_SET_VALUE(dataCacheProvisionedIops_, dataCacheProvisionedIops) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyEciScalingConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsConfigNameServers Field Functions 
    bool hasDnsConfigNameServers() const { return this->dnsConfigNameServers_ != nullptr;};
    void deleteDnsConfigNameServers() { this->dnsConfigNameServers_ = nullptr;};
    inline const vector<string> & dnsConfigNameServers() const { DARABONBA_PTR_GET_CONST(dnsConfigNameServers_, vector<string>) };
    inline vector<string> dnsConfigNameServers() { DARABONBA_PTR_GET(dnsConfigNameServers_, vector<string>) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigNameServers(const vector<string> & dnsConfigNameServers) { DARABONBA_PTR_SET_VALUE(dnsConfigNameServers_, dnsConfigNameServers) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigNameServers(vector<string> && dnsConfigNameServers) { DARABONBA_PTR_SET_RVALUE(dnsConfigNameServers_, dnsConfigNameServers) };


    // dnsConfigOptions Field Functions 
    bool hasDnsConfigOptions() const { return this->dnsConfigOptions_ != nullptr;};
    void deleteDnsConfigOptions() { this->dnsConfigOptions_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestDnsConfigOptions> & dnsConfigOptions() const { DARABONBA_PTR_GET_CONST(dnsConfigOptions_, vector<ModifyEciScalingConfigurationRequestDnsConfigOptions>) };
    inline vector<ModifyEciScalingConfigurationRequestDnsConfigOptions> dnsConfigOptions() { DARABONBA_PTR_GET(dnsConfigOptions_, vector<ModifyEciScalingConfigurationRequestDnsConfigOptions>) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigOptions(const vector<ModifyEciScalingConfigurationRequestDnsConfigOptions> & dnsConfigOptions) { DARABONBA_PTR_SET_VALUE(dnsConfigOptions_, dnsConfigOptions) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigOptions(vector<ModifyEciScalingConfigurationRequestDnsConfigOptions> && dnsConfigOptions) { DARABONBA_PTR_SET_RVALUE(dnsConfigOptions_, dnsConfigOptions) };


    // dnsConfigSearchs Field Functions 
    bool hasDnsConfigSearchs() const { return this->dnsConfigSearchs_ != nullptr;};
    void deleteDnsConfigSearchs() { this->dnsConfigSearchs_ = nullptr;};
    inline const vector<string> & dnsConfigSearchs() const { DARABONBA_PTR_GET_CONST(dnsConfigSearchs_, vector<string>) };
    inline vector<string> dnsConfigSearchs() { DARABONBA_PTR_GET(dnsConfigSearchs_, vector<string>) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigSearchs(const vector<string> & dnsConfigSearchs) { DARABONBA_PTR_SET_VALUE(dnsConfigSearchs_, dnsConfigSearchs) };
    inline ModifyEciScalingConfigurationRequest& setDnsConfigSearchs(vector<string> && dnsConfigSearchs) { DARABONBA_PTR_SET_RVALUE(dnsConfigSearchs_, dnsConfigSearchs) };


    // dnsPolicy Field Functions 
    bool hasDnsPolicy() const { return this->dnsPolicy_ != nullptr;};
    void deleteDnsPolicy() { this->dnsPolicy_ = nullptr;};
    inline string dnsPolicy() const { DARABONBA_PTR_GET_DEFAULT(dnsPolicy_, "") };
    inline ModifyEciScalingConfigurationRequest& setDnsPolicy(string dnsPolicy) { DARABONBA_PTR_SET_VALUE(dnsPolicy_, dnsPolicy) };


    // egressBandwidth Field Functions 
    bool hasEgressBandwidth() const { return this->egressBandwidth_ != nullptr;};
    void deleteEgressBandwidth() { this->egressBandwidth_ = nullptr;};
    inline int64_t egressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(egressBandwidth_, 0L) };
    inline ModifyEciScalingConfigurationRequest& setEgressBandwidth(int64_t egressBandwidth) { DARABONBA_PTR_SET_VALUE(egressBandwidth_, egressBandwidth) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline ModifyEciScalingConfigurationRequest& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // enableSls Field Functions 
    bool hasEnableSls() const { return this->enableSls_ != nullptr;};
    void deleteEnableSls() { this->enableSls_ = nullptr;};
    inline bool enableSls() const { DARABONBA_PTR_GET_DEFAULT(enableSls_, false) };
    inline ModifyEciScalingConfigurationRequest& setEnableSls(bool enableSls) { DARABONBA_PTR_SET_VALUE(enableSls_, enableSls) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline int32_t ephemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0) };
    inline ModifyEciScalingConfigurationRequest& setEphemeralStorage(int32_t ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline ModifyEciScalingConfigurationRequest& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestHostAliases> & hostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<ModifyEciScalingConfigurationRequestHostAliases>) };
    inline vector<ModifyEciScalingConfigurationRequestHostAliases> hostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<ModifyEciScalingConfigurationRequestHostAliases>) };
    inline ModifyEciScalingConfigurationRequest& setHostAliases(const vector<ModifyEciScalingConfigurationRequestHostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline ModifyEciScalingConfigurationRequest& setHostAliases(vector<ModifyEciScalingConfigurationRequestHostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyEciScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials> & imageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials>) };
    inline vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials> imageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials>) };
    inline ModifyEciScalingConfigurationRequest& setImageRegistryCredentials(const vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline ModifyEciScalingConfigurationRequest& setImageRegistryCredentials(vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // imageSnapshotId Field Functions 
    bool hasImageSnapshotId() const { return this->imageSnapshotId_ != nullptr;};
    void deleteImageSnapshotId() { this->imageSnapshotId_ = nullptr;};
    inline string imageSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(imageSnapshotId_, "") };
    inline ModifyEciScalingConfigurationRequest& setImageSnapshotId(string imageSnapshotId) { DARABONBA_PTR_SET_VALUE(imageSnapshotId_, imageSnapshotId) };


    // ingressBandwidth Field Functions 
    bool hasIngressBandwidth() const { return this->ingressBandwidth_ != nullptr;};
    void deleteIngressBandwidth() { this->ingressBandwidth_ = nullptr;};
    inline int64_t ingressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ingressBandwidth_, 0L) };
    inline ModifyEciScalingConfigurationRequest& setIngressBandwidth(int64_t ingressBandwidth) { DARABONBA_PTR_SET_VALUE(ingressBandwidth_, ingressBandwidth) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestInitContainers> & initContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<ModifyEciScalingConfigurationRequestInitContainers>) };
    inline vector<ModifyEciScalingConfigurationRequestInitContainers> initContainers() { DARABONBA_PTR_GET(initContainers_, vector<ModifyEciScalingConfigurationRequestInitContainers>) };
    inline ModifyEciScalingConfigurationRequest& setInitContainers(const vector<ModifyEciScalingConfigurationRequestInitContainers> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
    inline ModifyEciScalingConfigurationRequest& setInitContainers(vector<ModifyEciScalingConfigurationRequestInitContainers> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline ModifyEciScalingConfigurationRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ModifyEciScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ModifyEciScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline ModifyEciScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline ModifyEciScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ModifyEciScalingConfigurationRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // ntpServers Field Functions 
    bool hasNtpServers() const { return this->ntpServers_ != nullptr;};
    void deleteNtpServers() { this->ntpServers_ = nullptr;};
    inline const vector<string> & ntpServers() const { DARABONBA_PTR_GET_CONST(ntpServers_, vector<string>) };
    inline vector<string> ntpServers() { DARABONBA_PTR_GET(ntpServers_, vector<string>) };
    inline ModifyEciScalingConfigurationRequest& setNtpServers(const vector<string> & ntpServers) { DARABONBA_PTR_SET_VALUE(ntpServers_, ntpServers) };
    inline ModifyEciScalingConfigurationRequest& setNtpServers(vector<string> && ntpServers) { DARABONBA_PTR_SET_RVALUE(ntpServers_, ntpServers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyEciScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline ModifyEciScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyEciScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyEciScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // restartPolicy Field Functions 
    bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
    void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
    inline string restartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
    inline ModifyEciScalingConfigurationRequest& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline ModifyEciScalingConfigurationRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline ModifyEciScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // securityContextSysCtls Field Functions 
    bool hasSecurityContextSysCtls() const { return this->securityContextSysCtls_ != nullptr;};
    void deleteSecurityContextSysCtls() { this->securityContextSysCtls_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls> & securityContextSysCtls() const { DARABONBA_PTR_GET_CONST(securityContextSysCtls_, vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls>) };
    inline vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls> securityContextSysCtls() { DARABONBA_PTR_GET(securityContextSysCtls_, vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls>) };
    inline ModifyEciScalingConfigurationRequest& setSecurityContextSysCtls(const vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls> & securityContextSysCtls) { DARABONBA_PTR_SET_VALUE(securityContextSysCtls_, securityContextSysCtls) };
    inline ModifyEciScalingConfigurationRequest& setSecurityContextSysCtls(vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls> && securityContextSysCtls) { DARABONBA_PTR_SET_RVALUE(securityContextSysCtls_, securityContextSysCtls) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyEciScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline ModifyEciScalingConfigurationRequest& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ModifyEciScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ModifyEciScalingConfigurationRequestTags>) };
    inline vector<ModifyEciScalingConfigurationRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ModifyEciScalingConfigurationRequestTags>) };
    inline ModifyEciScalingConfigurationRequest& setTags(const vector<ModifyEciScalingConfigurationRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ModifyEciScalingConfigurationRequest& setTags(vector<ModifyEciScalingConfigurationRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int64_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0L) };
    inline ModifyEciScalingConfigurationRequest& setTerminationGracePeriodSeconds(int64_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<ModifyEciScalingConfigurationRequestVolumes> & volumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<ModifyEciScalingConfigurationRequestVolumes>) };
    inline vector<ModifyEciScalingConfigurationRequestVolumes> volumes() { DARABONBA_PTR_GET(volumes_, vector<ModifyEciScalingConfigurationRequestVolumes>) };
    inline ModifyEciScalingConfigurationRequest& setVolumes(const vector<ModifyEciScalingConfigurationRequestVolumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline ModifyEciScalingConfigurationRequest& setVolumes(vector<ModifyEciScalingConfigurationRequestVolumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // The Container Registry Enterprise Edition instances.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestAcrRegistryInfos>> acrRegistryInfos_ = nullptr;
    // The validity period of the scaling configuration. Unit: seconds.
    std::shared_ptr<int64_t> activeDeadlineSeconds_ = nullptr;
    // Specifies whether to automatically create elastic IP addresses (EIPs) and bind the EIPs to elastic container instances.
    std::shared_ptr<bool> autoCreateEip_ = nullptr;
    // Specifies whether to automatically match image caches.
    // 
    // Default value: false.
    std::shared_ptr<bool> autoMatchImageCache_ = nullptr;
    // The name series of elastic container instances. Naming conventions:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name can contain only lowercase letters, digits, and hyphens (-). It cannot start or end with a hyphen (-).
    std::shared_ptr<string> containerGroupName_ = nullptr;
    // The containers.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestContainers>> containers_ = nullptr;
    // The update mode of containers. Valid values:
    // 
    // *   RenewUpdate: full update mode. This value takes effect based on the value of Containers in an update request. This value indicates that the previous setting of Containers is overwritten.
    // *   IncrementalUpdate: incremental update mode. Container matching is performed based on the Container.name value. Only the parameters that are included in the request parameters are updated.
    // 
    // Default value: RenewUpdate.
    std::shared_ptr<string> containersUpdateType_ = nullptr;
    // Specifies whether to enable the Cost Optimization feature. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> costOptimization_ = nullptr;
    // The number of vCPUs per elastic container instance.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of physical CPU cores. You can specify this parameter for only specific ECS instance types. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsCore_ = nullptr;
    // The number of threads per core. You can specify this parameter for only specific instance types. A value of 1 specifies that Hyper-Threading is disabled. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsThreadsPerCore_ = nullptr;
    // The bucket in which data caches are stored.
    std::shared_ptr<string> dataCacheBucket_ = nullptr;
    // Specifies whether to enable the Performance Burst feature for the ESSD AutoPL disk in which data caches are stored. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> dataCacheBurstingEnabled_ = nullptr;
    // The performance level (PL) of the cloud disk in which data caches are stored. We recommend that you use Enterprise SSDs (ESSDs). Valid values:
    // 
    // *   PL0: An ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can deliver up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // 
    // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> dataCachePL_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk in which data caches are stored. Valid values: 0 to min{50,000, 1,000 × *Capacity - Baseline IOPS}. Baseline IOPS = min{1,800+50 x *Capacity, 50,000}.
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int32_t> dataCacheProvisionedIops_ = nullptr;
    // >  This parameter is unavailable for use.
    std::shared_ptr<string> description_ = nullptr;
    // The IP addresses of DNS servers.
    std::shared_ptr<vector<string>> dnsConfigNameServers_ = nullptr;
    // The options. Each option is a name-value pair. The value in the name-value pair is optional.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestDnsConfigOptions>> dnsConfigOptions_ = nullptr;
    // The search domains of DNS servers.
    std::shared_ptr<vector<string>> dnsConfigSearchs_ = nullptr;
    // The Domain Name System (DNS) policy. Valid values:
    // 
    // *   None: uses the DNS that is specified by DnsConfig.
    // *   Default: uses the DNS that is specified for the runtime environment.
    std::shared_ptr<string> dnsPolicy_ = nullptr;
    // The maximum outbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> egressBandwidth_ = nullptr;
    // The EIP bandwidth.
    // 
    // Default value: 5. Unit: Mbit/s.
    std::shared_ptr<int32_t> eipBandwidth_ = nullptr;
    // >  This parameter is not available for use.
    std::shared_ptr<bool> enableSls_ = nullptr;
    // The size of the temporary storage space. By default, an Enterprise SSD (ESSD) of the PL1 type is used. Unit: GiB.
    std::shared_ptr<int32_t> ephemeralStorage_ = nullptr;
    // The version of the GPU driver. Valid values:
    // 
    // *   tesla=470.82.01 (default)
    // *   tesla=525.85.12
    // 
    // >  You can switch the GPU driver version only for a few Elastic Compute Service (ECS) instance types. For more information, see [Specify GPU-accelerated ECS instance types to create an elastic container instance](https://help.aliyun.com/document_detail/2579486.html).
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The hosts.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestHostAliases>> hostAliases_ = nullptr;
    // The hostname series of elastic container instances.
    std::shared_ptr<string> hostName_ = nullptr;
    // The image repositories.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestImageRegistryCredentials>> imageRegistryCredentials_ = nullptr;
    // The ID of the image cache.
    std::shared_ptr<string> imageSnapshotId_ = nullptr;
    // The maximum inbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> ingressBandwidth_ = nullptr;
    // The init containers.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestInitContainers>> initContainers_ = nullptr;
    // The level of the instance family, which is used to filter instance types that meet the specified criteria. This parameter takes effect only if you set `CostOptimization` to true. Valid values:
    // 
    // *   EntryLevel: entry level (shared instance type). Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources, and are suitable for business scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit-based entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview](https://help.aliyun.com/document_detail/59977.html) of burstable instances.
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The ECS instance types. You can specify up to five instance types.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The number of IPv6 addresses.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The load balancing weight of each backend server. Valid values: 1 to 100.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size per elastic container instance. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The endpoints of Network Time Protocol (NTP) servers.
    std::shared_ptr<vector<string>> ntpServers_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the instance Resource Access Management (RAM) role. You can use the same RAM role to access elastic container instances and Elastic Compute Service (ECS) instances. For more information, see [Use an instance RAM role by calling API operations](https://help.aliyun.com/document_detail/61178.html).
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The instance restart policy. Valid values:
    // 
    // *   Always: always restarts elastic container instances.
    // *   Never: never restarts elastic container instances.
    // *   OnFailure: restarts elastic container instances upon failures.
    // 
    // Default value: Always.
    std::shared_ptr<string> restartPolicy_ = nullptr;
    // The ID of the scaling configuration that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The name of the scaling configuration. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // The name of a scaling configuration must be unique in the specified region. If you do not specify this parameter, the value of ScalingConfigurationId is used.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The security contexts in which the elastic container instance runs.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestSecurityContextSysCtls>> securityContextSysCtls_ = nullptr;
    // The ID of the security group to which elastic container instances belong. Elastic container instances that belong to the same security group can communicate with each other.
    // 
    // If you do not specify a security group, the system uses the default security group in the region that you selected. Make sure that the inbound rules of the security group contain the protocols and port numbers of the containers that you want to expose. If you do not have a default security group in the region, the system creates a default security group and then adds the container protocols and port numbers that you specified to the inbound rules of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The maximum hourly price of preemptible elastic container instances. The value can be accurate to three decimal places.
    // 
    // If you set SpotStrategy to SpotWithPriceLimit, you must specify SpotPriceLimit.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The instance bidding policy. Valid values:
    // 
    // *   NoSpot: The instances are created as pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are preemptible instances for which you can specify the maximum hourly price.
    // *   SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is used as the bid price.
    // 
    // Default value: NoSpot.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestTags>> tags_ = nullptr;
    // The buffer period during which the program handles operations before the program is stopped. Unit: seconds.
    std::shared_ptr<int64_t> terminationGracePeriodSeconds_ = nullptr;
    // The volumes.
    std::shared_ptr<vector<ModifyEciScalingConfigurationRequestVolumes>> volumes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
