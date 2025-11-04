// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestAcrRegistryInfos.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainers.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestDnsConfigOptions.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestHostAliases.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestImageRegistryCredentials.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestInitContainers.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestSecurityContextSysctls.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestTags.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityContextSysctls, securityContextSysctls_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityContextSysctls, securityContextSysctls_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    CreateEciScalingConfigurationRequest() = default ;
    CreateEciScalingConfigurationRequest(const CreateEciScalingConfigurationRequest &) = default ;
    CreateEciScalingConfigurationRequest(CreateEciScalingConfigurationRequest &&) = default ;
    CreateEciScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequest() = default ;
    CreateEciScalingConfigurationRequest& operator=(const CreateEciScalingConfigurationRequest &) = default ;
    CreateEciScalingConfigurationRequest& operator=(CreateEciScalingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && return this->activeDeadlineSeconds_ == nullptr && return this->autoCreateEip_ == nullptr && return this->autoMatchImageCache_ == nullptr && return this->containerGroupName_ == nullptr && return this->containers_ == nullptr
        && return this->costOptimization_ == nullptr && return this->cpu_ == nullptr && return this->cpuOptionsCore_ == nullptr && return this->cpuOptionsThreadsPerCore_ == nullptr && return this->dataCacheBucket_ == nullptr
        && return this->dataCacheBurstingEnabled_ == nullptr && return this->dataCachePL_ == nullptr && return this->dataCacheProvisionedIops_ == nullptr && return this->description_ == nullptr && return this->dnsConfigNameServers_ == nullptr
        && return this->dnsConfigOptions_ == nullptr && return this->dnsConfigSearchs_ == nullptr && return this->dnsPolicy_ == nullptr && return this->egressBandwidth_ == nullptr && return this->eipBandwidth_ == nullptr
        && return this->enableSls_ == nullptr && return this->ephemeralStorage_ == nullptr && return this->gpuDriverVersion_ == nullptr && return this->hostAliases_ == nullptr && return this->hostName_ == nullptr
        && return this->imageRegistryCredentials_ == nullptr && return this->imageSnapshotId_ == nullptr && return this->ingressBandwidth_ == nullptr && return this->initContainers_ == nullptr && return this->instanceFamilyLevel_ == nullptr
        && return this->instanceTypes_ == nullptr && return this->ipv6AddressCount_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->memory_ == nullptr && return this->ntpServers_ == nullptr
        && return this->ownerId_ == nullptr && return this->ramRoleName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->restartPolicy_ == nullptr
        && return this->scalingConfigurationName_ == nullptr && return this->scalingGroupId_ == nullptr && return this->securityContextSysctls_ == nullptr && return this->securityGroupId_ == nullptr && return this->spotPriceLimit_ == nullptr
        && return this->spotStrategy_ == nullptr && return this->tags_ == nullptr && return this->terminationGracePeriodSeconds_ == nullptr && return this->volumes_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestAcrRegistryInfos> & acrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateEciScalingConfigurationRequestAcrRegistryInfos>) };
    inline vector<CreateEciScalingConfigurationRequestAcrRegistryInfos> acrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateEciScalingConfigurationRequestAcrRegistryInfos>) };
    inline CreateEciScalingConfigurationRequest& setAcrRegistryInfos(const vector<CreateEciScalingConfigurationRequestAcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateEciScalingConfigurationRequest& setAcrRegistryInfos(vector<CreateEciScalingConfigurationRequestAcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int64_t activeDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0L) };
    inline CreateEciScalingConfigurationRequest& setActiveDeadlineSeconds(int64_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // autoCreateEip Field Functions 
    bool hasAutoCreateEip() const { return this->autoCreateEip_ != nullptr;};
    void deleteAutoCreateEip() { this->autoCreateEip_ = nullptr;};
    inline bool autoCreateEip() const { DARABONBA_PTR_GET_DEFAULT(autoCreateEip_, false) };
    inline CreateEciScalingConfigurationRequest& setAutoCreateEip(bool autoCreateEip) { DARABONBA_PTR_SET_VALUE(autoCreateEip_, autoCreateEip) };


    // autoMatchImageCache Field Functions 
    bool hasAutoMatchImageCache() const { return this->autoMatchImageCache_ != nullptr;};
    void deleteAutoMatchImageCache() { this->autoMatchImageCache_ = nullptr;};
    inline bool autoMatchImageCache() const { DARABONBA_PTR_GET_DEFAULT(autoMatchImageCache_, false) };
    inline CreateEciScalingConfigurationRequest& setAutoMatchImageCache(bool autoMatchImageCache) { DARABONBA_PTR_SET_VALUE(autoMatchImageCache_, autoMatchImageCache) };


    // containerGroupName Field Functions 
    bool hasContainerGroupName() const { return this->containerGroupName_ != nullptr;};
    void deleteContainerGroupName() { this->containerGroupName_ = nullptr;};
    inline string containerGroupName() const { DARABONBA_PTR_GET_DEFAULT(containerGroupName_, "") };
    inline CreateEciScalingConfigurationRequest& setContainerGroupName(string containerGroupName) { DARABONBA_PTR_SET_VALUE(containerGroupName_, containerGroupName) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestContainers> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<CreateEciScalingConfigurationRequestContainers>) };
    inline vector<CreateEciScalingConfigurationRequestContainers> containers() { DARABONBA_PTR_GET(containers_, vector<CreateEciScalingConfigurationRequestContainers>) };
    inline CreateEciScalingConfigurationRequest& setContainers(const vector<CreateEciScalingConfigurationRequestContainers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline CreateEciScalingConfigurationRequest& setContainers(vector<CreateEciScalingConfigurationRequestContainers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // costOptimization Field Functions 
    bool hasCostOptimization() const { return this->costOptimization_ != nullptr;};
    void deleteCostOptimization() { this->costOptimization_ = nullptr;};
    inline bool costOptimization() const { DARABONBA_PTR_GET_DEFAULT(costOptimization_, false) };
    inline CreateEciScalingConfigurationRequest& setCostOptimization(bool costOptimization) { DARABONBA_PTR_SET_VALUE(costOptimization_, costOptimization) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuOptionsCore Field Functions 
    bool hasCpuOptionsCore() const { return this->cpuOptionsCore_ != nullptr;};
    void deleteCpuOptionsCore() { this->cpuOptionsCore_ = nullptr;};
    inline int32_t cpuOptionsCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsCore_, 0) };
    inline CreateEciScalingConfigurationRequest& setCpuOptionsCore(int32_t cpuOptionsCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsCore_, cpuOptionsCore) };


    // cpuOptionsThreadsPerCore Field Functions 
    bool hasCpuOptionsThreadsPerCore() const { return this->cpuOptionsThreadsPerCore_ != nullptr;};
    void deleteCpuOptionsThreadsPerCore() { this->cpuOptionsThreadsPerCore_ = nullptr;};
    inline int32_t cpuOptionsThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsThreadsPerCore_, 0) };
    inline CreateEciScalingConfigurationRequest& setCpuOptionsThreadsPerCore(int32_t cpuOptionsThreadsPerCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsThreadsPerCore_, cpuOptionsThreadsPerCore) };


    // dataCacheBucket Field Functions 
    bool hasDataCacheBucket() const { return this->dataCacheBucket_ != nullptr;};
    void deleteDataCacheBucket() { this->dataCacheBucket_ = nullptr;};
    inline string dataCacheBucket() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBucket_, "") };
    inline CreateEciScalingConfigurationRequest& setDataCacheBucket(string dataCacheBucket) { DARABONBA_PTR_SET_VALUE(dataCacheBucket_, dataCacheBucket) };


    // dataCacheBurstingEnabled Field Functions 
    bool hasDataCacheBurstingEnabled() const { return this->dataCacheBurstingEnabled_ != nullptr;};
    void deleteDataCacheBurstingEnabled() { this->dataCacheBurstingEnabled_ = nullptr;};
    inline bool dataCacheBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBurstingEnabled_, false) };
    inline CreateEciScalingConfigurationRequest& setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) { DARABONBA_PTR_SET_VALUE(dataCacheBurstingEnabled_, dataCacheBurstingEnabled) };


    // dataCachePL Field Functions 
    bool hasDataCachePL() const { return this->dataCachePL_ != nullptr;};
    void deleteDataCachePL() { this->dataCachePL_ = nullptr;};
    inline string dataCachePL() const { DARABONBA_PTR_GET_DEFAULT(dataCachePL_, "") };
    inline CreateEciScalingConfigurationRequest& setDataCachePL(string dataCachePL) { DARABONBA_PTR_SET_VALUE(dataCachePL_, dataCachePL) };


    // dataCacheProvisionedIops Field Functions 
    bool hasDataCacheProvisionedIops() const { return this->dataCacheProvisionedIops_ != nullptr;};
    void deleteDataCacheProvisionedIops() { this->dataCacheProvisionedIops_ = nullptr;};
    inline int32_t dataCacheProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(dataCacheProvisionedIops_, 0) };
    inline CreateEciScalingConfigurationRequest& setDataCacheProvisionedIops(int32_t dataCacheProvisionedIops) { DARABONBA_PTR_SET_VALUE(dataCacheProvisionedIops_, dataCacheProvisionedIops) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEciScalingConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsConfigNameServers Field Functions 
    bool hasDnsConfigNameServers() const { return this->dnsConfigNameServers_ != nullptr;};
    void deleteDnsConfigNameServers() { this->dnsConfigNameServers_ = nullptr;};
    inline const vector<string> & dnsConfigNameServers() const { DARABONBA_PTR_GET_CONST(dnsConfigNameServers_, vector<string>) };
    inline vector<string> dnsConfigNameServers() { DARABONBA_PTR_GET(dnsConfigNameServers_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigNameServers(const vector<string> & dnsConfigNameServers) { DARABONBA_PTR_SET_VALUE(dnsConfigNameServers_, dnsConfigNameServers) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigNameServers(vector<string> && dnsConfigNameServers) { DARABONBA_PTR_SET_RVALUE(dnsConfigNameServers_, dnsConfigNameServers) };


    // dnsConfigOptions Field Functions 
    bool hasDnsConfigOptions() const { return this->dnsConfigOptions_ != nullptr;};
    void deleteDnsConfigOptions() { this->dnsConfigOptions_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestDnsConfigOptions> & dnsConfigOptions() const { DARABONBA_PTR_GET_CONST(dnsConfigOptions_, vector<CreateEciScalingConfigurationRequestDnsConfigOptions>) };
    inline vector<CreateEciScalingConfigurationRequestDnsConfigOptions> dnsConfigOptions() { DARABONBA_PTR_GET(dnsConfigOptions_, vector<CreateEciScalingConfigurationRequestDnsConfigOptions>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigOptions(const vector<CreateEciScalingConfigurationRequestDnsConfigOptions> & dnsConfigOptions) { DARABONBA_PTR_SET_VALUE(dnsConfigOptions_, dnsConfigOptions) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigOptions(vector<CreateEciScalingConfigurationRequestDnsConfigOptions> && dnsConfigOptions) { DARABONBA_PTR_SET_RVALUE(dnsConfigOptions_, dnsConfigOptions) };


    // dnsConfigSearchs Field Functions 
    bool hasDnsConfigSearchs() const { return this->dnsConfigSearchs_ != nullptr;};
    void deleteDnsConfigSearchs() { this->dnsConfigSearchs_ = nullptr;};
    inline const vector<string> & dnsConfigSearchs() const { DARABONBA_PTR_GET_CONST(dnsConfigSearchs_, vector<string>) };
    inline vector<string> dnsConfigSearchs() { DARABONBA_PTR_GET(dnsConfigSearchs_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigSearchs(const vector<string> & dnsConfigSearchs) { DARABONBA_PTR_SET_VALUE(dnsConfigSearchs_, dnsConfigSearchs) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigSearchs(vector<string> && dnsConfigSearchs) { DARABONBA_PTR_SET_RVALUE(dnsConfigSearchs_, dnsConfigSearchs) };


    // dnsPolicy Field Functions 
    bool hasDnsPolicy() const { return this->dnsPolicy_ != nullptr;};
    void deleteDnsPolicy() { this->dnsPolicy_ = nullptr;};
    inline string dnsPolicy() const { DARABONBA_PTR_GET_DEFAULT(dnsPolicy_, "") };
    inline CreateEciScalingConfigurationRequest& setDnsPolicy(string dnsPolicy) { DARABONBA_PTR_SET_VALUE(dnsPolicy_, dnsPolicy) };


    // egressBandwidth Field Functions 
    bool hasEgressBandwidth() const { return this->egressBandwidth_ != nullptr;};
    void deleteEgressBandwidth() { this->egressBandwidth_ = nullptr;};
    inline int64_t egressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(egressBandwidth_, 0L) };
    inline CreateEciScalingConfigurationRequest& setEgressBandwidth(int64_t egressBandwidth) { DARABONBA_PTR_SET_VALUE(egressBandwidth_, egressBandwidth) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline CreateEciScalingConfigurationRequest& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // enableSls Field Functions 
    bool hasEnableSls() const { return this->enableSls_ != nullptr;};
    void deleteEnableSls() { this->enableSls_ = nullptr;};
    inline bool enableSls() const { DARABONBA_PTR_GET_DEFAULT(enableSls_, false) };
    inline CreateEciScalingConfigurationRequest& setEnableSls(bool enableSls) { DARABONBA_PTR_SET_VALUE(enableSls_, enableSls) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline int32_t ephemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0) };
    inline CreateEciScalingConfigurationRequest& setEphemeralStorage(int32_t ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline CreateEciScalingConfigurationRequest& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestHostAliases> & hostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<CreateEciScalingConfigurationRequestHostAliases>) };
    inline vector<CreateEciScalingConfigurationRequestHostAliases> hostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<CreateEciScalingConfigurationRequestHostAliases>) };
    inline CreateEciScalingConfigurationRequest& setHostAliases(const vector<CreateEciScalingConfigurationRequestHostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline CreateEciScalingConfigurationRequest& setHostAliases(vector<CreateEciScalingConfigurationRequestHostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateEciScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestImageRegistryCredentials> & imageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateEciScalingConfigurationRequestImageRegistryCredentials>) };
    inline vector<CreateEciScalingConfigurationRequestImageRegistryCredentials> imageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateEciScalingConfigurationRequestImageRegistryCredentials>) };
    inline CreateEciScalingConfigurationRequest& setImageRegistryCredentials(const vector<CreateEciScalingConfigurationRequestImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateEciScalingConfigurationRequest& setImageRegistryCredentials(vector<CreateEciScalingConfigurationRequestImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // imageSnapshotId Field Functions 
    bool hasImageSnapshotId() const { return this->imageSnapshotId_ != nullptr;};
    void deleteImageSnapshotId() { this->imageSnapshotId_ = nullptr;};
    inline string imageSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(imageSnapshotId_, "") };
    inline CreateEciScalingConfigurationRequest& setImageSnapshotId(string imageSnapshotId) { DARABONBA_PTR_SET_VALUE(imageSnapshotId_, imageSnapshotId) };


    // ingressBandwidth Field Functions 
    bool hasIngressBandwidth() const { return this->ingressBandwidth_ != nullptr;};
    void deleteIngressBandwidth() { this->ingressBandwidth_ = nullptr;};
    inline int64_t ingressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ingressBandwidth_, 0L) };
    inline CreateEciScalingConfigurationRequest& setIngressBandwidth(int64_t ingressBandwidth) { DARABONBA_PTR_SET_VALUE(ingressBandwidth_, ingressBandwidth) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestInitContainers> & initContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<CreateEciScalingConfigurationRequestInitContainers>) };
    inline vector<CreateEciScalingConfigurationRequestInitContainers> initContainers() { DARABONBA_PTR_GET(initContainers_, vector<CreateEciScalingConfigurationRequestInitContainers>) };
    inline CreateEciScalingConfigurationRequest& setInitContainers(const vector<CreateEciScalingConfigurationRequestInitContainers> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
    inline CreateEciScalingConfigurationRequest& setInitContainers(vector<CreateEciScalingConfigurationRequestInitContainers> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline CreateEciScalingConfigurationRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateEciScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateEciScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline CreateEciScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // ntpServers Field Functions 
    bool hasNtpServers() const { return this->ntpServers_ != nullptr;};
    void deleteNtpServers() { this->ntpServers_ = nullptr;};
    inline const vector<string> & ntpServers() const { DARABONBA_PTR_GET_CONST(ntpServers_, vector<string>) };
    inline vector<string> ntpServers() { DARABONBA_PTR_GET(ntpServers_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setNtpServers(const vector<string> & ntpServers) { DARABONBA_PTR_SET_VALUE(ntpServers_, ntpServers) };
    inline CreateEciScalingConfigurationRequest& setNtpServers(vector<string> && ntpServers) { DARABONBA_PTR_SET_RVALUE(ntpServers_, ntpServers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateEciScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateEciScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateEciScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // restartPolicy Field Functions 
    bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
    void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
    inline string restartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
    inline CreateEciScalingConfigurationRequest& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline CreateEciScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // securityContextSysctls Field Functions 
    bool hasSecurityContextSysctls() const { return this->securityContextSysctls_ != nullptr;};
    void deleteSecurityContextSysctls() { this->securityContextSysctls_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestSecurityContextSysctls> & securityContextSysctls() const { DARABONBA_PTR_GET_CONST(securityContextSysctls_, vector<CreateEciScalingConfigurationRequestSecurityContextSysctls>) };
    inline vector<CreateEciScalingConfigurationRequestSecurityContextSysctls> securityContextSysctls() { DARABONBA_PTR_GET(securityContextSysctls_, vector<CreateEciScalingConfigurationRequestSecurityContextSysctls>) };
    inline CreateEciScalingConfigurationRequest& setSecurityContextSysctls(const vector<CreateEciScalingConfigurationRequestSecurityContextSysctls> & securityContextSysctls) { DARABONBA_PTR_SET_VALUE(securityContextSysctls_, securityContextSysctls) };
    inline CreateEciScalingConfigurationRequest& setSecurityContextSysctls(vector<CreateEciScalingConfigurationRequestSecurityContextSysctls> && securityContextSysctls) { DARABONBA_PTR_SET_RVALUE(securityContextSysctls_, securityContextSysctls) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateEciScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEciScalingConfigurationRequestTags>) };
    inline vector<CreateEciScalingConfigurationRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateEciScalingConfigurationRequestTags>) };
    inline CreateEciScalingConfigurationRequest& setTags(const vector<CreateEciScalingConfigurationRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEciScalingConfigurationRequest& setTags(vector<CreateEciScalingConfigurationRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int64_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0L) };
    inline CreateEciScalingConfigurationRequest& setTerminationGracePeriodSeconds(int64_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequestVolumes> & volumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<CreateEciScalingConfigurationRequestVolumes>) };
    inline vector<CreateEciScalingConfigurationRequestVolumes> volumes() { DARABONBA_PTR_GET(volumes_, vector<CreateEciScalingConfigurationRequestVolumes>) };
    inline CreateEciScalingConfigurationRequest& setVolumes(const vector<CreateEciScalingConfigurationRequestVolumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline CreateEciScalingConfigurationRequest& setVolumes(vector<CreateEciScalingConfigurationRequestVolumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // The Container Registry Enterprise Edition instances.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestAcrRegistryInfos>> acrRegistryInfos_ = nullptr;
    // The validity period of the scaling configuration. Unit: seconds.
    std::shared_ptr<int64_t> activeDeadlineSeconds_ = nullptr;
    // Specifies whether to automatically create elastic IP addresses (EIPs) and bind the EIPs to elastic container instances.
    std::shared_ptr<bool> autoCreateEip_ = nullptr;
    // Specifies whether to automatically match the image cache. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> autoMatchImageCache_ = nullptr;
    // The name series of elastic container instances.
    // 
    // If you want to use an ordered instance name, specify the value for this parameter in the following format: name_prefix[begin_number,bits]name_suffix.
    std::shared_ptr<string> containerGroupName_ = nullptr;
    // The containers per elastic container instance.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestContainers>> containers_ = nullptr;
    // Specifies whether to enable the Cost Optimization feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> costOptimization_ = nullptr;
    // The number of vCPUs per elastic container instance.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of physical CPU cores. You can specify this parameter for specific instance types. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsCore_ = nullptr;
    // The number of threads per core. You can specify this parameter for specific instance types. A value of 1 specifies that Hyper-Threading is disabled. For more information, see [Specify CPU options](https://help.aliyun.com/document_detail/197781.html).
    std::shared_ptr<int32_t> cpuOptionsThreadsPerCore_ = nullptr;
    // The bucket that you want to use to store data caches.
    std::shared_ptr<string> dataCacheBucket_ = nullptr;
    // Specifies whether to enable the performance burst feature when ESSD AutoPL disks are used to store data caches. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> dataCacheBurstingEnabled_ = nullptr;
    // The PL of the cloud disk that you want to use to store data caches. We recommend that you use ESSDs. Valid values:
    // 
    // *   PL0: An ESSD can provide up to 10,000 random read/write IOPS.
    // *   PL1: An ESSD can provide up to 50,000 random read/write IOPS.
    // *   PL2: An ESSD can provide up to 100,000 random read/write IOPS.
    // *   PL3: An ESSD can provide up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // 
    // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> dataCachePL_ = nullptr;
    // The provisioned IOPS of the ESSD AutoPL disk that you want to use to store data caches. Valid values: 0 to min{50,000, 1,000 × *Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × *Capacity, 50,000}.
    // 
    // >  For more information about ESSD AutoPL disks, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int32_t> dataCacheProvisionedIops_ = nullptr;
    // >  This parameter is unavailable for use.
    std::shared_ptr<string> description_ = nullptr;
    // The IP addresses of the DNS servers.
    std::shared_ptr<vector<string>> dnsConfigNameServers_ = nullptr;
    // The options. Each option is a name-value pair. The value in the name-value pair is optional.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestDnsConfigOptions>> dnsConfigOptions_ = nullptr;
    // The search domains of the DNS servers.
    std::shared_ptr<vector<string>> dnsConfigSearchs_ = nullptr;
    // The Domain Name System (DNS) policy. Valid values:
    // 
    // *   None: uses the DNS that is specified by DnsConfig.
    // *   Default: uses the DNS that is specified for the runtime environment.
    std::shared_ptr<string> dnsPolicy_ = nullptr;
    // The maximum outbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> egressBandwidth_ = nullptr;
    // The EIP bandwidth. Default value: 5. Unit: Mbit/s.
    std::shared_ptr<int32_t> eipBandwidth_ = nullptr;
    // >  This parameter is unavailable for use.
    std::shared_ptr<bool> enableSls_ = nullptr;
    // The size of the temporary storage space. By default, an Enterprise SSD (ESSD) of performance level 1 (PL1) is used. Unit: GiB.
    std::shared_ptr<int32_t> ephemeralStorage_ = nullptr;
    // The version of the GPU driver. Valid values:
    // 
    // *   tesla=470.82.01 (default)
    // *   tesla=525.85.12
    // 
    // >  You can switch the GPU driver version only for a few Elastic Compute Service (ECS) instance types. For more information, see [Specify GPU-accelerated ECS instance types to create an elastic container instance](https://help.aliyun.com/document_detail/2579486.html).
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The custom hostnames of the containers.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestHostAliases>> hostAliases_ = nullptr;
    // The hostname series of elastic container instances.
    std::shared_ptr<string> hostName_ = nullptr;
    // The image repositories.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestImageRegistryCredentials>> imageRegistryCredentials_ = nullptr;
    // The ID of the image cache.
    std::shared_ptr<string> imageSnapshotId_ = nullptr;
    // The maximum inbound bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> ingressBandwidth_ = nullptr;
    // The init containers.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestInitContainers>> initContainers_ = nullptr;
    // The level of the instance family. You can specify this parameter to match the available instance types. This parameter takes effect only if you set `CostOptimization` to true. Valid values:
    // 
    // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective, but may not ensure stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources, and are suitable for business scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit-based entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview](https://help.aliyun.com/document_detail/59977.html) of burstable instances.
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The ECS instance types that you want to use to create elastic container instances. You can specify up to five ECS instance types.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The number of IPv6 addresses.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The load balancing weight of each elastic container instance. Valid values: 1 to 100.
    // 
    // Default value: 50.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size per elastic container instance. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The endpoints of the Network Time Protocol (NTP) servers.
    std::shared_ptr<vector<string>> ntpServers_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the instance Resource Access Management (RAM) role. Elastic container instances and Elastic Compute Service (ECS) instances can share the same RAM role. For more information, see [RAM roles](https://help.aliyun.com/document_detail/61175.html).
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The restart policy of elastic container instances. Valid values:
    // 
    // *   Always: always restarts elastic container instances.
    // *   Never: never restarts elastic container instances.
    // *   OnFailure: restarts elastic container instances upon failures.
    // 
    // Default value: Always.
    std::shared_ptr<string> restartPolicy_ = nullptr;
    // The name of the scaling configuration. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or a digit.
    // 
    // The name of the scaling configuration must be unique in a scaling group within a region. If you do not specify this parameter, the value of ScalingConfigurationId is used.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The ID of the scaling group to which the scaling configuration belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The system information of the security context in which the elastic container instance runs.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestSecurityContextSysctls>> securityContextSysctls_ = nullptr;
    // The ID of the security group to which elastic container instances belong. Elastic container instances that belong to the same security group can communicate with each other.
    // 
    // If you do not specify a security group, the system uses the default security group in the region that you selected. Make sure that the inbound rules of the security group contain the protocols and port numbers of the containers that you want to expose. If you do not have a default security group in the region, the system creates a default security group, and then adds the container protocols and port numbers that you specified to the inbound rules of the security group.
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
    // The tags of elastic container instances. Tags must be specified as key-value pairs. You can specify up to 20 tags for each elastic container instance. When you specify Key and Value, take note of the following items:
    // 
    // *   A tag key can be up to 64 characters in length. The key cannot start with acs: or aliyun or contain `http://` or `https://`. You cannot specify an empty string as a tag key.
    // *   A tag value can be up to 128 characters in length. The value cannot start with acs: or aliyun or contain `http://` or `https://`. You can specify an empty string as a tag value.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestTags>> tags_ = nullptr;
    // The buffer time during which a program handles operations before the program stops. Unit: seconds.
    std::shared_ptr<int64_t> terminationGracePeriodSeconds_ = nullptr;
    // The volumes.
    std::shared_ptr<vector<CreateEciScalingConfigurationRequestVolumes>> volumes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
