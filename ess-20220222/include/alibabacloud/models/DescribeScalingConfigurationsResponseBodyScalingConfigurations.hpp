// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits.hpp>
#include <alibabacloud/models/DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBodyScalingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(CustomPriorities, customPriorities_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOptionsLoginAsNonRoot, imageOptionsLoginAsNonRoot_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceGeneration, instanceGeneration_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(PasswordSetted, passwordSetted_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions.Id, privatePoolOptions_id_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions.MatchCriteria, privatePoolOptions_matchCriteria_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimits, spotPriceLimits_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(SystemDiskAutoSnapshotPolicyId, systemDiskAutoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SystemDiskBurstingEnabled, systemDiskBurstingEnabled_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskDescription, systemDiskDescription_);
      DARABONBA_PTR_TO_JSON(SystemDiskEncryptAlgorithm, systemDiskEncryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
      DARABONBA_PTR_TO_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
      DARABONBA_PTR_TO_JSON(SystemDiskName, systemDiskName_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskProvisionedIops, systemDiskProvisionedIops_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(WeightedCapacities, weightedCapacities_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(CustomPriorities, customPriorities_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOptionsLoginAsNonRoot, imageOptionsLoginAsNonRoot_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceGeneration, instanceGeneration_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(PasswordSetted, passwordSetted_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions.Id, privatePoolOptions_id_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions.MatchCriteria, privatePoolOptions_matchCriteria_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimits, spotPriceLimits_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(SystemDiskAutoSnapshotPolicyId, systemDiskAutoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskBurstingEnabled, systemDiskBurstingEnabled_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskDescription, systemDiskDescription_);
      DARABONBA_PTR_FROM_JSON(SystemDiskEncryptAlgorithm, systemDiskEncryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
      DARABONBA_PTR_FROM_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskName, systemDiskName_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskProvisionedIops, systemDiskProvisionedIops_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacities, weightedCapacities_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurations() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurations(const DescribeScalingConfigurationsResponseBodyScalingConfigurations &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurations(DescribeScalingConfigurationsResponseBodyScalingConfigurations &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurations() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurations& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurations &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurations& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affinity_ == nullptr
        && return this->cpu_ == nullptr && return this->creationTime_ == nullptr && return this->creditSpecification_ == nullptr && return this->customPriorities_ == nullptr && return this->dataDisks_ == nullptr
        && return this->dedicatedHostClusterId_ == nullptr && return this->dedicatedHostId_ == nullptr && return this->deletionProtection_ == nullptr && return this->deploymentSetId_ == nullptr && return this->hostName_ == nullptr
        && return this->hpcClusterId_ == nullptr && return this->httpEndpoint_ == nullptr && return this->httpTokens_ == nullptr && return this->imageFamily_ == nullptr && return this->imageId_ == nullptr
        && return this->imageName_ == nullptr && return this->imageOptionsLoginAsNonRoot_ == nullptr && return this->imageOwnerAlias_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceGeneration_ == nullptr
        && return this->instanceName_ == nullptr && return this->instancePatternInfos_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypes_ == nullptr && return this->internetChargeType_ == nullptr
        && return this->internetMaxBandwidthIn_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->ipv6AddressCount_ == nullptr && return this->keyPairName_ == nullptr
        && return this->lifecycleState_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->memory_ == nullptr && return this->networkInterfaces_ == nullptr && return this->passwordInherit_ == nullptr
        && return this->passwordSetted_ == nullptr && return this->privatePoolOptions_id_ == nullptr && return this->privatePoolOptions_matchCriteria_ == nullptr && return this->ramRoleName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourcePoolOptions_ == nullptr && return this->scalingConfigurationId_ == nullptr && return this->scalingConfigurationName_ == nullptr && return this->scalingGroupId_ == nullptr && return this->schedulerOptions_ == nullptr
        && return this->securityEnhancementStrategy_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupIds_ == nullptr && return this->securityOptions_ == nullptr && return this->spotDuration_ == nullptr
        && return this->spotInterruptionBehavior_ == nullptr && return this->spotPriceLimits_ == nullptr && return this->spotStrategy_ == nullptr && return this->storageSetId_ == nullptr && return this->storageSetPartitionNumber_ == nullptr
        && return this->systemDiskAutoSnapshotPolicyId_ == nullptr && return this->systemDiskBurstingEnabled_ == nullptr && return this->systemDiskCategories_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->systemDiskDescription_ == nullptr
        && return this->systemDiskEncryptAlgorithm_ == nullptr && return this->systemDiskEncrypted_ == nullptr && return this->systemDiskKMSKeyId_ == nullptr && return this->systemDiskName_ == nullptr && return this->systemDiskPerformanceLevel_ == nullptr
        && return this->systemDiskProvisionedIops_ == nullptr && return this->systemDiskSize_ == nullptr && return this->tags_ == nullptr && return this->tenancy_ == nullptr && return this->userData_ == nullptr
        && return this->weightedCapacities_ == nullptr && return this->zoneId_ == nullptr; };
    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string affinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities> & customPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities> customPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setCustomPriorities(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setCustomPriorities(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDataDisks(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDataDisks(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string hpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string httpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string httpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOptionsLoginAsNonRoot Field Functions 
    bool hasImageOptionsLoginAsNonRoot() const { return this->imageOptionsLoginAsNonRoot_ != nullptr;};
    void deleteImageOptionsLoginAsNonRoot() { this->imageOptionsLoginAsNonRoot_ = nullptr;};
    inline bool imageOptionsLoginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(imageOptionsLoginAsNonRoot_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setImageOptionsLoginAsNonRoot(bool imageOptionsLoginAsNonRoot) { DARABONBA_PTR_SET_VALUE(imageOptionsLoginAsNonRoot_, imageOptionsLoginAsNonRoot) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceGeneration Field Functions 
    bool hasInstanceGeneration() const { return this->instanceGeneration_ != nullptr;};
    void deleteInstanceGeneration() { this->instanceGeneration_ = nullptr;};
    inline string instanceGeneration() const { DARABONBA_PTR_GET_DEFAULT(instanceGeneration_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceGeneration(string instanceGeneration) { DARABONBA_PTR_SET_VALUE(instanceGeneration_, instanceGeneration) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos> & instancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos> instancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstancePatternInfos(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstancePatternInfos(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string lifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces> & networkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces> networkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setNetworkInterfaces(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setNetworkInterfaces(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // passwordSetted Field Functions 
    bool hasPasswordSetted() const { return this->passwordSetted_ != nullptr;};
    void deletePasswordSetted() { this->passwordSetted_ = nullptr;};
    inline bool passwordSetted() const { DARABONBA_PTR_GET_DEFAULT(passwordSetted_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setPasswordSetted(bool passwordSetted) { DARABONBA_PTR_SET_VALUE(passwordSetted_, passwordSetted) };


    // privatePoolOptions_id Field Functions 
    bool hasPrivatePoolOptions_id() const { return this->privatePoolOptions_id_ != nullptr;};
    void deletePrivatePoolOptions_id() { this->privatePoolOptions_id_ = nullptr;};
    inline string privatePoolOptions_id() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptions_id_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setPrivatePoolOptions_id(string privatePoolOptions_id) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_id_, privatePoolOptions_id) };


    // privatePoolOptions_matchCriteria Field Functions 
    bool hasPrivatePoolOptions_matchCriteria() const { return this->privatePoolOptions_matchCriteria_ != nullptr;};
    void deletePrivatePoolOptions_matchCriteria() { this->privatePoolOptions_matchCriteria_ = nullptr;};
    inline string privatePoolOptions_matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptions_matchCriteria_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setPrivatePoolOptions_matchCriteria(string privatePoolOptions_matchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_matchCriteria_, privatePoolOptions_matchCriteria) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions) };
    inline Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setResourcePoolOptions(const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setResourcePoolOptions(Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions & schedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions) };
    inline Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions schedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSchedulerOptions(const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSchedulerOptions(Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions & securityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions) };
    inline Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions securityOptions() { DARABONBA_PTR_GET(securityOptions_, Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityOptions(const Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSecurityOptions(Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string spotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits> & spotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits> spotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSpotPriceLimits(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSpotPriceLimits(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskAutoSnapshotPolicyId Field Functions 
    bool hasSystemDiskAutoSnapshotPolicyId() const { return this->systemDiskAutoSnapshotPolicyId_ != nullptr;};
    void deleteSystemDiskAutoSnapshotPolicyId() { this->systemDiskAutoSnapshotPolicyId_ = nullptr;};
    inline string systemDiskAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskAutoSnapshotPolicyId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskAutoSnapshotPolicyId(string systemDiskAutoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskAutoSnapshotPolicyId_, systemDiskAutoSnapshotPolicyId) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskDescription Field Functions 
    bool hasSystemDiskDescription() const { return this->systemDiskDescription_ != nullptr;};
    void deleteSystemDiskDescription() { this->systemDiskDescription_ = nullptr;};
    inline string systemDiskDescription() const { DARABONBA_PTR_GET_DEFAULT(systemDiskDescription_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskDescription(string systemDiskDescription) { DARABONBA_PTR_SET_VALUE(systemDiskDescription_, systemDiskDescription) };


    // systemDiskEncryptAlgorithm Field Functions 
    bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
    void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
    inline string systemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKMSKeyId Field Functions 
    bool hasSystemDiskKMSKeyId() const { return this->systemDiskKMSKeyId_ != nullptr;};
    void deleteSystemDiskKMSKeyId() { this->systemDiskKMSKeyId_ = nullptr;};
    inline string systemDiskKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKMSKeyId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskKMSKeyId(string systemDiskKMSKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKMSKeyId_, systemDiskKMSKeyId) };


    // systemDiskName Field Functions 
    bool hasSystemDiskName() const { return this->systemDiskName_ != nullptr;};
    void deleteSystemDiskName() { this->systemDiskName_ = nullptr;};
    inline string systemDiskName() const { DARABONBA_PTR_GET_DEFAULT(systemDiskName_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskName(string systemDiskName) { DARABONBA_PTR_SET_VALUE(systemDiskName_, systemDiskName) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags>) };
    inline vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setTags(const vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setTags(vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string tenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // weightedCapacities Field Functions 
    bool hasWeightedCapacities() const { return this->weightedCapacities_ != nullptr;};
    void deleteWeightedCapacities() { this->weightedCapacities_ = nullptr;};
    inline const vector<int32_t> & weightedCapacities() const { DARABONBA_PTR_GET_CONST(weightedCapacities_, vector<int32_t>) };
    inline vector<int32_t> weightedCapacities() { DARABONBA_PTR_GET(weightedCapacities_, vector<int32_t>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setWeightedCapacities(const vector<int32_t> & weightedCapacities) { DARABONBA_PTR_SET_VALUE(weightedCapacities_, weightedCapacities) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setWeightedCapacities(vector<int32_t> && weightedCapacities) { DARABONBA_PTR_SET_RVALUE(weightedCapacities_, weightedCapacities) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurations& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether the ECS instance on a dedicated host is associated with the dedicated host. Valid values:
    // 
    // *   default: The instance is not associated with the dedicated host. If you restart an instance that was stopped in Economical Mode and the original dedicated host of the instance has insufficient resources, the instance is automatically deployed to another dedicated host in the automatic deployment resource pool.
    // *   host: The instance is associated with the dedicated host. If you restart an instance that was stopped in Economical Mode, the instance remains on the original dedicated host. If the available resources of the original dedicated host are insufficient, the instance cannot be restarted.
    std::shared_ptr<string> affinity_ = nullptr;
    // The number of vCPUs.
    // 
    // You can specify CPU and Memory to define the range of instance types. For example, if you set CPU to 2 and Memory to 16, the instance types that have 2 vCPUs and 16 GiB are returned. If you specify CPU and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones and preferentially creates instances by using the lowest-priced instance type.
    // 
    // >  You can specify CPU and Memory to define instance types only when you set Scaling Policy to Cost Optimization and no instance type is specified in the scaling configuration.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time at which the scaling configuration was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The performance mode of the burstable instances. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the "Standard mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
    // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The priority of the custom ECS instance type + vSwitch combination.
    // 
    // >  This parameter takes effect only when Scaling Policy of the scaling group is set to Priority Policy.
    // 
    // If Auto Scaling cannot create ECS instances by using the custom ECS instance type + vSwitch combination of the highest priority, Auto Scaling creates ECS instances by using the custom ECS instance type + vSwitch combination of the next highest priority.
    // 
    // >  If you specify the priorities of only a portion of custom ECS instance type + vSwitch combinations, Auto Scaling preferentially creates ECS instances by using the custom combinations that have specified priorities. If the custom combinations that have specified priorities do not provide sufficient resources, Auto Scaling creates ECS instances by using the custom combinations that do not have specified priorities based on the specified orders of vSwitches and instance types.
    // 
    // *   Example: the specified order of vSwitches for your scaling group is vsw1 and vsw2 and the specified order of instance types in your scaling configuration is type1 and type 2. In addition, you use CustomPriorities to specify ["vsw2+type2", "vsw1+type2"]. In this example, the vsw2+type2 combination has the highest priority and the vsw2+type1 combination has the lowest priority. The vsw1+type2 combination has a higher priority than the vsw1+type1 combination.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities>> customPriorities_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsDataDisks>> dataDisks_ = nullptr;
    // The ID of the dedicated host cluster.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The ID of the dedicated host on which the ECS instance is created. Preemptible instances are not supported by dedicated hosts. Therefore, if you specify DedicatedHostId, SpotStrategy and SpotPriceLimit are ignored.
    // 
    // You can call the DescribeDedicatedHosts operation to query the IDs of dedicated hosts.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // Indicates whether Release Protection is enabled for the ECS instances. You can specify this parameter to determine whether the ECS instances can be deleted by using the ECS console or calling the DeleteInstance operation. Valid values:
    // 
    // *   true: Release Protection is enabled for the ECS instances. You cannot delete the ECS instances by using the ECS console or calling the DeleteInstance operation.
    // *   false: Release Protection is disabled for the ECS instances. You can delete the ECS instances by using the ECS console or calling the DeleteInstance operation.
    // 
    // >  You can enable Release Protection for only pay-as-you-go instances to prevent unexpected instance deletion during scale-in events. The Release Protection feature does not affect normal scaling activities. In other words, an instance that meets the criteria of scale-in policies may be removed from a scaling group during a scale-in event even if you enabled Release Protection for the instance.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The ID of the deployment set to which the Elastic Compute Service (ECS) instances belong.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The hostname series of the ECS instances.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the High Performance Computing (HPC) cluster to which the ECS instances belong.
    std::shared_ptr<string> hpcClusterId_ = nullptr;
    // Indicates whether the access channel is enabled for instance metadata. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> httpEndpoint_ = nullptr;
    // Indicates whether the security hardening mode (IMDSv2) is forcefully used to access instance metadata. Valid values:
    // 
    // *   optional: The security hardening mode IMDSv2 is not forcibly used.
    // *   required: The security hardening mode (IMDSv2) is forcibly used. After you set this parameter to required, you cannot access instance metadata in normal mode.
    std::shared_ptr<string> httpTokens_ = nullptr;
    // The name of the image family. You can specify this parameter to obtain the latest available images in the current image family for instance creation. If you specify ImageId, you cannot specify `ImageFamily`.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image file that provides the image resource for Auto Scaling to create ECS instances.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image file.
    std::shared_ptr<string> imageName_ = nullptr;
    // Indicates whether the ecs-user username can be used to log on to an ECS instance created from the scaling configuration. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> imageOptionsLoginAsNonRoot_ = nullptr;
    // The image source. Valid values:
    // 
    // *   system: a public image provided by Alibaba Cloud
    // *   self: a custom image that you created
    // *   others: a shared image from another Alibaba Cloud account or a community image published by another Alibaba Cloud account
    // *   marketplace: an Alibaba Cloud Marketplace image
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The description of the ECS instances.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The generation of the ECS instances.
    std::shared_ptr<string> instanceGeneration_ = nullptr;
    // The naming series of the ECS instances.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The intelligent configuration settings, which determine the available instance types.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos>> instancePatternInfos_ = nullptr;
    // The instance types of the ECS instances.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ECS instance types.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth. You are charged for the bandwidth that you specified by using InternetMaxBandwidthOut.
    // *   PayByTraffic: pay-by-traffic. You are charged for the actual traffic that you used. InternetMaxBandwidthOut specifies only the maximum available bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Indicates whether the ECS instances are I/O optimized. Valid values:
    // 
    // *   none: The ECS instances are not I/O optimized.
    // *   optimized: The ECS instances are I/O optimized.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The number of randomly generated IPv6 addresses that are allocated to the elastic network interface (ENI).
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The name of the key pair that is used to log on to an ECS instance created from the scaling configuration.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The status of the scaling configuration in the scaling group. Valid values:
    // 
    // *   Active: The scaling configuration is active in the scaling group. Auto Scaling uses the scaling configuration that is in the Active state to create ECS instances during scale-out events.
    // *   Inactive: The scaling configuration is inactive in the scaling group. Scaling configurations that are in the Inactive state are still contained in the scaling group, but Auto Scaling does not use the inactive scaling configurations to create ECS instances during scale-out events.
    std::shared_ptr<string> lifecycleState_ = nullptr;
    // The weight of an ECS instance as a backend server. Valid values: 1 to 100.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size. Unit: GiB.
    // 
    // You can specify CPU and Memory to define the range of instance types. For example, if you set CPU to 2 and Memory to 16, the instance types that have 2 vCPUs and 16 GiB are returned. If you specify CPU and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones and preferentially creates instances by using the lowest-priced instance type.
    // 
    // >  You can specify CPU and Memory to define instance types only when you set Scaling Policy to Cost Optimization and no instance type is specified in the scaling configuration.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The ENIs.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsNetworkInterfaces>> networkInterfaces_ = nullptr;
    // Indicates whether the password preconfigured in the image is used.
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // Indicates whether a password is configured for the instance.
    std::shared_ptr<bool> passwordSetted_ = nullptr;
    std::shared_ptr<string> privatePoolOptions_id_ = nullptr;
    std::shared_ptr<string> privatePoolOptions_matchCriteria_ = nullptr;
    // The name of the Resource Access Management (RAM) role assumed by the ECS instances. This name is provided and maintained by RAM. You can call the ListRoles operation to query the available RAM roles.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group to which the ECS instances belong.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resource pools used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation.
    // 
    // *   This parameter takes effect only when you create pay-as-you-go instances.
    std::shared_ptr<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The name of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The ID of the scaling group to which the scaling configuration belongs.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // >  This parameter is in invitational preview and is not available for use.
    std::shared_ptr<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions> schedulerOptions_ = nullptr;
    // Indicates whether Security Hardening is enabled. Valid values:
    // 
    // *   Active: Security Hardening is enabled. This value is applicable to only public images.
    // *   Deactive: Security Hardening is disabled. This value is applicable to all images.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The ID of the security group to which the ECS instances belong. ECS instances that belong to the same security group can communicate with each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the security groups to which the ECS instances belong. ECS instances that belong to the same security group can communicate with each other.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSecurityOptions> securityOptions_ = nullptr;
    // The protection period of the preemptible instances. Unit: hours.
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The interruption event of the preemptible instances.
    std::shared_ptr<string> spotInterruptionBehavior_ = nullptr;
    // The preemptible instances.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsSpotPriceLimits>> spotPriceLimits_ = nullptr;
    // The preemption policy that is applied to pay-as-you-go instances. Valid values:
    // 
    // *   NoSpot: The instances are created as regular pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances that have a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are preemptible instances for which the market price at the time of purchase is automatically used as the bid price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The ID of the storage set.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The maximum number of partitions in the storage set. The value is an integer that is greater than or equal to 2.
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The ID of the automatic snapshot policy that is applied to the system disk.
    std::shared_ptr<string> systemDiskAutoSnapshotPolicyId_ = nullptr;
    // Indicates whether the Performance Burst feature is enabled for the system disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is available only when you set SystemDisk.Category to cloud_auto.
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The categories of the system disks. The values are sorted based on their priorities. The first value has the highest priority. If Auto Scaling cannot create instances by using the disk category of the highest priority, Auto Scaling creates instances by using the disk category of the next highest priority. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The category of the system disk. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   ephemeral_ssd: local SSD
    // *   cloud_essd: enterprise SSD (ESSD)
    // *   cloud_auto: ESSD AutoPL
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The description of the system disk.
    std::shared_ptr<string> systemDiskDescription_ = nullptr;
    // The encryption algorithm that is applied to the system disk. Valid values:
    // 
    // *   AES-256
    // *   SM4-128
    std::shared_ptr<string> systemDiskEncryptAlgorithm_ = nullptr;
    // Indicates whether the system disk is encrypted. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    // The ID of the KMS key that is applied to the system disk.
    std::shared_ptr<string> systemDiskKMSKeyId_ = nullptr;
    // The name of the system disk.
    std::shared_ptr<string> systemDiskName_ = nullptr;
    // The performance level (PL) of the system disk that is an ESSD.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The provisioned IOPS of the system disk.
    // 
    // >  IOPS measures the number of read and write operations that an EBS device can process per second.
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeScalingConfigurationsResponseBodyScalingConfigurationsTags>> tags_ = nullptr;
    // Indicates whether the ECS instance is created on a dedicated host. Valid values:
    // 
    // *   default: The ECS instance is created on a non-dedicated host.
    // *   host: The ECS instance is created on a dedicated host. If you do not specify DedicatedHostId, the system selects a dedicated host for the ECS instance.
    // 
    // Default value: default.
    std::shared_ptr<string> tenancy_ = nullptr;
    // The user data of the ECS instances.
    std::shared_ptr<string> userData_ = nullptr;
    // The weights of the instance types. The value of this parameter indicates the capacity of an instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the instance type are required to meet the expected capacity requirement.
    std::shared_ptr<vector<int32_t>> weightedCapacities_ = nullptr;
    // The ID of the zone in which the ECS instances are created. You can call the DescribeZones operation to query the zone IDs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
