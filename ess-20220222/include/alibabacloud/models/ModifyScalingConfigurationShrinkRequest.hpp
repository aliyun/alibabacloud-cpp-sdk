// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestImageOptions.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestPrivatePoolOptions.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestSystemDisk.hpp>
#include <vector>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestCustomPriorities.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestDataDisks.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestInstancePatternInfos.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestNetworkInterfaces.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestResourcePoolOptions.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestSecurityOptions.hpp>
#include <alibabacloud/models/ModifyScalingConfigurationShrinkRequestSpotPriceLimits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
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
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_TO_JSON(InstanceTypeOverrides, instanceTypeOverrides_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptionsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimits, spotPriceLimits_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
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
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeOverrides, instanceTypeOverrides_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimits, spotPriceLimits_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ModifyScalingConfigurationShrinkRequest() = default ;
    ModifyScalingConfigurationShrinkRequest(const ModifyScalingConfigurationShrinkRequest &) = default ;
    ModifyScalingConfigurationShrinkRequest(ModifyScalingConfigurationShrinkRequest &&) = default ;
    ModifyScalingConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationShrinkRequest() = default ;
    ModifyScalingConfigurationShrinkRequest& operator=(const ModifyScalingConfigurationShrinkRequest &) = default ;
    ModifyScalingConfigurationShrinkRequest& operator=(ModifyScalingConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageOptions_ == nullptr
        && return this->privatePoolOptions_ == nullptr && return this->systemDisk_ == nullptr && return this->affinity_ == nullptr && return this->cpu_ == nullptr && return this->creditSpecification_ == nullptr
        && return this->customPriorities_ == nullptr && return this->dataDisks_ == nullptr && return this->dedicatedHostClusterId_ == nullptr && return this->dedicatedHostId_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->deploymentSetId_ == nullptr && return this->hostName_ == nullptr && return this->hpcClusterId_ == nullptr && return this->httpEndpoint_ == nullptr && return this->httpTokens_ == nullptr
        && return this->imageFamily_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceName_ == nullptr
        && return this->instancePatternInfos_ == nullptr && return this->instanceTypeOverrides_ == nullptr && return this->instanceTypes_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthIn_ == nullptr
        && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->ipv6AddressCount_ == nullptr && return this->keyPairName_ == nullptr && return this->loadBalancerWeight_ == nullptr
        && return this->memory_ == nullptr && return this->networkInterfaces_ == nullptr && return this->override_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->password_ == nullptr && return this->passwordInherit_ == nullptr && return this->ramRoleName_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourcePoolOptions_ == nullptr && return this->scalingConfigurationId_ == nullptr && return this->scalingConfigurationName_ == nullptr && return this->schedulerOptionsShrink_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->securityGroupIds_ == nullptr && return this->securityOptions_ == nullptr && return this->spotDuration_ == nullptr && return this->spotInterruptionBehavior_ == nullptr && return this->spotPriceLimits_ == nullptr
        && return this->spotStrategy_ == nullptr && return this->storageSetId_ == nullptr && return this->storageSetPartitionNumber_ == nullptr && return this->systemDiskCategories_ == nullptr && return this->tags_ == nullptr
        && return this->tenancy_ == nullptr && return this->userData_ == nullptr && return this->zoneId_ == nullptr; };
    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const ModifyScalingConfigurationShrinkRequestImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, ModifyScalingConfigurationShrinkRequestImageOptions) };
    inline ModifyScalingConfigurationShrinkRequestImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, ModifyScalingConfigurationShrinkRequestImageOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setImageOptions(const ModifyScalingConfigurationShrinkRequestImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setImageOptions(ModifyScalingConfigurationShrinkRequestImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const ModifyScalingConfigurationShrinkRequestPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ModifyScalingConfigurationShrinkRequestPrivatePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequestPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ModifyScalingConfigurationShrinkRequestPrivatePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setPrivatePoolOptions(const ModifyScalingConfigurationShrinkRequestPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setPrivatePoolOptions(ModifyScalingConfigurationShrinkRequestPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const ModifyScalingConfigurationShrinkRequestSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ModifyScalingConfigurationShrinkRequestSystemDisk) };
    inline ModifyScalingConfigurationShrinkRequestSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, ModifyScalingConfigurationShrinkRequestSystemDisk) };
    inline ModifyScalingConfigurationShrinkRequest& setSystemDisk(const ModifyScalingConfigurationShrinkRequestSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline ModifyScalingConfigurationShrinkRequest& setSystemDisk(ModifyScalingConfigurationShrinkRequestSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string affinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestCustomPriorities> & customPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<ModifyScalingConfigurationShrinkRequestCustomPriorities>) };
    inline vector<ModifyScalingConfigurationShrinkRequestCustomPriorities> customPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<ModifyScalingConfigurationShrinkRequestCustomPriorities>) };
    inline ModifyScalingConfigurationShrinkRequest& setCustomPriorities(const vector<ModifyScalingConfigurationShrinkRequestCustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline ModifyScalingConfigurationShrinkRequest& setCustomPriorities(vector<ModifyScalingConfigurationShrinkRequestCustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestDataDisks> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<ModifyScalingConfigurationShrinkRequestDataDisks>) };
    inline vector<ModifyScalingConfigurationShrinkRequestDataDisks> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<ModifyScalingConfigurationShrinkRequestDataDisks>) };
    inline ModifyScalingConfigurationShrinkRequest& setDataDisks(const vector<ModifyScalingConfigurationShrinkRequestDataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline ModifyScalingConfigurationShrinkRequest& setDataDisks(vector<ModifyScalingConfigurationShrinkRequestDataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyScalingConfigurationShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string hpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string httpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string httpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos> & instancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos>) };
    inline vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos> instancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos>) };
    inline ModifyScalingConfigurationShrinkRequest& setInstancePatternInfos(const vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline ModifyScalingConfigurationShrinkRequest& setInstancePatternInfos(vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceTypeOverrides Field Functions 
    bool hasInstanceTypeOverrides() const { return this->instanceTypeOverrides_ != nullptr;};
    void deleteInstanceTypeOverrides() { this->instanceTypeOverrides_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides> & instanceTypeOverrides() const { DARABONBA_PTR_GET_CONST(instanceTypeOverrides_, vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides>) };
    inline vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides> instanceTypeOverrides() { DARABONBA_PTR_GET(instanceTypeOverrides_, vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides>) };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceTypeOverrides(const vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides> & instanceTypeOverrides) { DARABONBA_PTR_SET_VALUE(instanceTypeOverrides_, instanceTypeOverrides) };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceTypeOverrides(vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides> && instanceTypeOverrides) { DARABONBA_PTR_SET_RVALUE(instanceTypeOverrides_, instanceTypeOverrides) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ModifyScalingConfigurationShrinkRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces> & networkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces>) };
    inline vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces> networkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces>) };
    inline ModifyScalingConfigurationShrinkRequest& setNetworkInterfaces(const vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline ModifyScalingConfigurationShrinkRequest& setNetworkInterfaces(vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool override() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline ModifyScalingConfigurationShrinkRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingConfigurationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline ModifyScalingConfigurationShrinkRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const ModifyScalingConfigurationShrinkRequestResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, ModifyScalingConfigurationShrinkRequestResourcePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequestResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, ModifyScalingConfigurationShrinkRequestResourcePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setResourcePoolOptions(const ModifyScalingConfigurationShrinkRequestResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setResourcePoolOptions(ModifyScalingConfigurationShrinkRequestResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // schedulerOptionsShrink Field Functions 
    bool hasSchedulerOptionsShrink() const { return this->schedulerOptionsShrink_ != nullptr;};
    void deleteSchedulerOptionsShrink() { this->schedulerOptionsShrink_ = nullptr;};
    inline string schedulerOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(schedulerOptionsShrink_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setSchedulerOptionsShrink(string schedulerOptionsShrink) { DARABONBA_PTR_SET_VALUE(schedulerOptionsShrink_, schedulerOptionsShrink) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ModifyScalingConfigurationShrinkRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ModifyScalingConfigurationShrinkRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const ModifyScalingConfigurationShrinkRequestSecurityOptions & securityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, ModifyScalingConfigurationShrinkRequestSecurityOptions) };
    inline ModifyScalingConfigurationShrinkRequestSecurityOptions securityOptions() { DARABONBA_PTR_GET(securityOptions_, ModifyScalingConfigurationShrinkRequestSecurityOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setSecurityOptions(const ModifyScalingConfigurationShrinkRequestSecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline ModifyScalingConfigurationShrinkRequest& setSecurityOptions(ModifyScalingConfigurationShrinkRequestSecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string spotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits> & spotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits>) };
    inline vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits> spotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits>) };
    inline ModifyScalingConfigurationShrinkRequest& setSpotPriceLimits(const vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline ModifyScalingConfigurationShrinkRequest& setSpotPriceLimits(vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline ModifyScalingConfigurationShrinkRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline ModifyScalingConfigurationShrinkRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline ModifyScalingConfigurationShrinkRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string tenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyScalingConfigurationShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<ModifyScalingConfigurationShrinkRequestImageOptions> imageOptions_ = nullptr;
    std::shared_ptr<ModifyScalingConfigurationShrinkRequestPrivatePoolOptions> privatePoolOptions_ = nullptr;
    std::shared_ptr<ModifyScalingConfigurationShrinkRequestSystemDisk> systemDisk_ = nullptr;
    // Specifies whether to associate the instance on a dedicated host with the dedicated host. Valid values:
    // 
    // *   default: does not associate the instance on the dedicated host with the dedicated host. If you restart an instance that was stopped in Economical Mode and the original dedicated host of the instance has insufficient resources, the instance is automatically deployed to another dedicated host in the automatic deployment resource pool.
    // *   host: associates the instance on a dedicated host with the dedicated host. If you restart an instance that was stopped in Economical Mode, the instance remains on the original dedicated host. If the original dedicated host has insufficient resources, the instance cannot be started.
    std::shared_ptr<string> affinity_ = nullptr;
    // The number of vCPUs.
    // 
    // You can specify the number of vCPUs and the memory size to determine the range of instance types. For example, you can set Cpu to 2 and Memory to 16 to specify instance types that have 2 vCPUs and 16 GiB of memory. If you specify Cpu and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling preferentially creates instances by using the lowest-priced instance type.
    // 
    // > You can specify CPU and Memory to determine the range of instance types only if you set Scaling Policy to Cost Optimization Policy and you do not specify an instance type in the scaling configuration.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The performance mode of burstable instances. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the "Standard mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
    // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The priority of the custom "ECS instance type + vSwitch" combination.
    // 
    // >  This setting is valid only if the scaling policy of the scaling group is a priority policy.
    // 
    // If Auto Scaling cannot create ECS instances by using the custom "ECS instance type + vSwitch" combination of the highest priority, Auto Scaling creates ECS instances by using the custom "ECS instance type + vSwitch" combination of the next highest priority.
    // 
    // >  If you specify the priorities of only a part of custom "ECS instance type + vSwitch" combinations, Auto Scaling preferentially creates ECS instances by using the custom combinations that have the specified priorities. If the custom combinations that have the specified priorities do not provide sufficient resources, Auto Scaling creates ECS instances by using the custom combinations that do not have the specified priorities based on the specified orders of vSwitches and instance types.
    // 
    // *   Example: The specified order of vSwitches for your scaling group is vsw1 and vsw2, and the specified order of instance types in your scaling configuration is type1 and type 2. In addition, you use CustomPriorities to specify ["vsw2+type2", "vsw1+type2"]. In this example, the vsw2+type2 combination has the highest priority and the vsw2+type1 combination has the lowest priority. The vsw1+type2 combination has a higher priority than the vsw1+type1 combination.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestCustomPriorities>> customPriorities_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestDataDisks>> dataDisks_ = nullptr;
    // The ID of the dedicated host cluster.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The ID of the dedicated host on which you want to create ECS instances. You cannot create preemptible instances on dedicated hosts. If you specify DedicatedHostId, SpotStrategy and SpotPriceLimit are ignored.
    // 
    // You can call the DescribeDedicatedHosts operation to query the most recent list of dedicated host IDs.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // Specifies whether to enable the Release Protection feature for ECS instances. If you enable this feature, you cannot directly release the ECS instances in the ECS console or by calling the DeleteInstance operation. Valid values:
    // 
    // *   true: enables the Release Protection feature. In this case, you cannot directly release the ECS instances in the ECS console or by calling the DeleteInstance operation.
    // *   false: disables the Release Protection feature. In this case, you can directly release the ECS instances in the ECS console or by calling the DeleteInstance operation.
    // 
    // >  You can enable the Release Protection feature only for pay-as-you-go instances to prevent accidental instance deletion. The Release Protection feature does not affect normal scaling activities. An instance that meets the criteria of scale-in policies can be removed from a scaling group during a scale-in event, regardless of whether you enabled the Release Protection feature for the instance.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The ID of the deployment set of the ECS instances that are created by using the scaling configuration.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The hostname of the ECS instance. The hostname cannot start or end with a period (.) or a hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-). Naming conventions for different types of instances:
    // 
    // *   Windows instances: The hostname must be 2 to 15 characters in length, and can contain letters, digits, and hyphens (-). The hostname cannot contain periods (.) or contain only digits.
    // *   Other instances, such as Linux instances: The hostname must be 2 to 64 characters in length. Separate a hostname into multiple segments with periods (.). Each segment can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the Elastic High Performance Computing (E-HPC) cluster to which the ECS instances belong.
    std::shared_ptr<string> hpcClusterId_ = nullptr;
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // Default value: enabled.
    // 
    // >  For information about instance metadata, see [Obtain instance metadata](https://help.aliyun.com/document_detail/108460.html).
    std::shared_ptr<string> httpEndpoint_ = nullptr;
    // Specifies whether to forcibly use the security hardening mode (IMDSv2) to access instance metadata. Valid values:
    // 
    // *   optional: does not forcibly use the security hardening mode (IMDSv2).
    // *   required: forcibly uses the security hardening mode (IMDSv2). If you set this parameter to required, you cannot access instance metadata in normal mode.
    // 
    // Default value: optional.
    // 
    // >  For more information about instance metadata access modes, see [Access modes of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    std::shared_ptr<string> httpTokens_ = nullptr;
    // The name of the image family. If you specify this parameter, the latest custom images that are available in the specified image family are returned. Then, you can use the images to create instances. If you specify ImageId, you cannot specify ImageFamily.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image that is used by Auto Scaling to automatically create ECS instances.
    // 
    // > If the image that is specified in the scaling configuration contains system disks and data disks, the data that is stored in the data disks is cleared after you modify the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image. Each image name must be unique in a region. If you specify ImageId, ImageName is ignored.
    // 
    // You cannot use ImageName to specify images from Alibaba Cloud Marketplace.
    std::shared_ptr<string> imageName_ = nullptr;
    // The description of the ECS instance. The description must be 2 to 256 characters in length. The description can contain letters but cannot start with `http://` or `https://`.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The name of the Elastic Compute Service (ECS) instance that is automatically created by using the scaling configuration.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The intelligent configuration settings, which determine the available instance types.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestInstancePatternInfos>> instancePatternInfos_ = nullptr;
    // The instance types.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverrides>> instanceTypeOverrides_ = nullptr;
    // The instance types. If you specify InstanceTypes, InstanceType is ignored.
    // 
    // Auto Scaling creates instances based on a priority list of instance types. If it fails to create instances using the highest-priority type, it automatically moves to the next type in the priority order.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth. You are charged for the bandwidth specified by InternetMaxBandwidthOut.
    // *   PayByTraffic: pay-by-traffic. You are charged for the actual traffic generated. InternetMaxBandwidthOut specifies only the maximum available bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // *   If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s, the valid values of this parameter are 1 to 10. The default value is 10.
    // *   If the purchased outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the value of `InternetMaxBandwidthOut`. The default value is the value of `InternetMaxBandwidthOut`.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Specifies whether to create I/O optimized instances from the scaling configuration. Valid values:
    // 
    // *   none: creates non-I/O optimized instances from the scaling configuration.
    // *   optimized: creates I/O optimized instances from the scaling configuration.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The number of randomly generated IPv6 addresses that you want to allocate to the elastic network interface (ENI).
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The name of the key pair that you can use to log on to an ECS instance.
    // 
    // *   Windows instances do not support this parameter.
    // *   By default, the username and password authentication method is disabled for Linux instances.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The weight of an ECS instance as a backend server. Valid values: 1 to 100.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size. Unit: GiB.
    // 
    // You can specify the number of vCPUs and the memory size to determine the range of instance types. For example, you can set Cpu to 2 and Memory to 16 to specify instance types that have 2 vCPUs and 16 GiB of memory. If you specify Cpu and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling preferentially creates instances by using the lowest-priced instance type.
    // 
    // > You can specify CPU and Memory to determine the range of instance types only if you set Scaling Policy to Cost Optimization Policy and you do not specify an instance type in the scaling configuration.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The ENIs.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestNetworkInterfaces>> networkInterfaces_ = nullptr;
    // Specifies whether to overwrite existing data. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> override_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password of the ECS instance. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
    // 
    // \\`()~!@#$%^&\\*-_+=|{}[]:;\\"<>,.?/
    // 
    // The password of a Windows instance cannot start with a forward slash (/).
    // 
    // >  We recommend that you use HTTPS to send requests if you specify Password to avoid password leakage.
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to use the password that is preconfigured in the image. Before you use this parameter, make sure that a password is configured in the image.
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The name of the RAM role that you want to attach to the ECS instance. The name is provided and maintained by Resource Access Management (RAM). You can call the ListRoles operation to query the available RAM roles. You can call the CreateRole operation to create RAM roles.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group to which the ECS instances belong.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The resource pools used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation. When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when you create pay-as-you-go instances.
    // *   If you specify this parameter, you cannot specify PrivatePoolOptions.MatchCriteria or PrivatePoolOptions.Id.
    std::shared_ptr<ModifyScalingConfigurationShrinkRequestResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The ID of the scaling configuration that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The name of the scaling configuration. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // The name of the scaling configuration must be unique in a region. If you do not specify this parameter, the scaling configuration ID is used.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The scheduler options.
    std::shared_ptr<string> schedulerOptionsShrink_ = nullptr;
    // The ID of the security group with which ECS instances are associated. The ECS instances that are associated with the same security group can access each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the security groups.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<ModifyScalingConfigurationShrinkRequestSecurityOptions> securityOptions_ = nullptr;
    // The protection period of preemptible instances. Unit: hours. Valid values:
    // 
    // *   1: After a preemptible instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, Alibaba Cloud compares the bidding price with the market price and checks the resource inventory to determine whether to release the instance.
    // *   0: After a preemptible instance is created, Alibaba Cloud does not ensure that the instance is not automatically released within 1 hour. Alibaba Cloud compares the biding price with the market price and checks the resource inventory to determine whether to release the instance.
    // 
    // >  Alibaba Cloud notifies you of ECS system events 5 minutes before an instance is released. Preemptible instances are billed by second. We recommend that you specify a protection period based on your business requirements.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The interruption mode of the preemptible instance. Default value: Terminate. Set the value to Terminate. This value specifies that the preemptible instance is to be released.
    std::shared_ptr<string> spotInterruptionBehavior_ = nullptr;
    // The preemptible instance types.
    std::shared_ptr<vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimits>> spotPriceLimits_ = nullptr;
    // The preemption policy of pay-as-you-go instances. Valid values:
    // 
    // *   NoSpot: The instances are created as regular pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are preemptible instances that have a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are preemptible instances for which the market price at the time of purchase is automatically used as the bid price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<string> storageSetId_ = nullptr;
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The categories of the system disks. If Auto Scaling cannot create disks by using the disk category of the highest priority, Auto Scaling creates disks by using the disk category of the next highest priority. Valid values:
    // 
    // *   cloud: basic disk.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   cloud_essd: ESSD.
    // 
    // >  If you specify this parameter, you cannot specify `SystemDisk.Category`.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The tags of the ECS instance. Specify the tags as key-value pairs. You can specify up to 20 tags. When you specify tag keys and tag values, take note of the following items:
    // 
    // *   A tag key can be up to 64 characters in length. The key cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. The tag key cannot be an empty string.
    // *   A tag value can be up to 128 characters in length. The value cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. The tag value can be an empty string.
    std::shared_ptr<string> tags_ = nullptr;
    // Specifies whether to create ECS instances on dedicated hosts. Valid values:
    // 
    // *   default: creates ECS instances on non-dedicated hosts.
    // *   host: creates ECS instances on dedicated hosts. If you do not specify DedicatedHostId, the system randomly selects a dedicated host for an ECS instance.
    std::shared_ptr<string> tenancy_ = nullptr;
    // The user data of the Elastic Compute Service (ECS) instance. The user data must be encoded in Base64 format. The size of raw data before Base64 encoding cannot exceed 32 KB.
    std::shared_ptr<string> userData_ = nullptr;
    // The zone ID of the ECS instances that are created by using the scaling configuration.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
