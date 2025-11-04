// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestImageOptions.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestPrivatePoolOptions.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestSystemDisk.hpp>
#include <vector>
#include <alibabacloud/models/CreateScalingConfigurationRequestCustomPriorities.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestDataDisks.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestInstancePatternInfos.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestInstanceTypeOverrides.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestNetworkInterfaces.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestResourcePoolOptions.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestSecurityOptions.hpp>
#include <alibabacloud/models/CreateScalingConfigurationRequestSpotPriceLimits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
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
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
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
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_ANY_TO_JSON(SchedulerOptions, schedulerOptions_);
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
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
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
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_ANY_FROM_JSON(SchedulerOptions, schedulerOptions_);
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
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateScalingConfigurationRequest() = default ;
    CreateScalingConfigurationRequest(const CreateScalingConfigurationRequest &) = default ;
    CreateScalingConfigurationRequest(CreateScalingConfigurationRequest &&) = default ;
    CreateScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequest() = default ;
    CreateScalingConfigurationRequest& operator=(const CreateScalingConfigurationRequest &) = default ;
    CreateScalingConfigurationRequest& operator=(CreateScalingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageOptions_ == nullptr
        && return this->privatePoolOptions_ == nullptr && return this->systemDisk_ == nullptr && return this->affinity_ == nullptr && return this->clientToken_ == nullptr && return this->cpu_ == nullptr
        && return this->creditSpecification_ == nullptr && return this->customPriorities_ == nullptr && return this->dataDisks_ == nullptr && return this->dedicatedHostClusterId_ == nullptr && return this->dedicatedHostId_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->deploymentSetId_ == nullptr && return this->hostName_ == nullptr && return this->hpcClusterId_ == nullptr && return this->httpEndpoint_ == nullptr
        && return this->httpTokens_ == nullptr && return this->imageFamily_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->instanceDescription_ == nullptr
        && return this->instanceName_ == nullptr && return this->instancePatternInfos_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeOverrides_ == nullptr && return this->instanceTypes_ == nullptr
        && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthIn_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->ipv6AddressCount_ == nullptr
        && return this->keyPairName_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->memory_ == nullptr && return this->networkInterfaces_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->password_ == nullptr && return this->passwordInherit_ == nullptr && return this->ramRoleName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourcePoolOptions_ == nullptr && return this->scalingConfigurationName_ == nullptr && return this->scalingGroupId_ == nullptr && return this->schedulerOptions_ == nullptr
        && return this->securityEnhancementStrategy_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupIds_ == nullptr && return this->securityOptions_ == nullptr && return this->spotDuration_ == nullptr
        && return this->spotInterruptionBehavior_ == nullptr && return this->spotPriceLimits_ == nullptr && return this->spotStrategy_ == nullptr && return this->storageSetId_ == nullptr && return this->storageSetPartitionNumber_ == nullptr
        && return this->systemDiskCategories_ == nullptr && return this->tags_ == nullptr && return this->tenancy_ == nullptr && return this->userData_ == nullptr && return this->zoneId_ == nullptr; };
    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequestImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateScalingConfigurationRequestImageOptions) };
    inline CreateScalingConfigurationRequestImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateScalingConfigurationRequestImageOptions) };
    inline CreateScalingConfigurationRequest& setImageOptions(const CreateScalingConfigurationRequestImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateScalingConfigurationRequest& setImageOptions(CreateScalingConfigurationRequestImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequestPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, CreateScalingConfigurationRequestPrivatePoolOptions) };
    inline CreateScalingConfigurationRequestPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, CreateScalingConfigurationRequestPrivatePoolOptions) };
    inline CreateScalingConfigurationRequest& setPrivatePoolOptions(const CreateScalingConfigurationRequestPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateScalingConfigurationRequest& setPrivatePoolOptions(CreateScalingConfigurationRequestPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateScalingConfigurationRequestSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateScalingConfigurationRequestSystemDisk) };
    inline CreateScalingConfigurationRequestSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateScalingConfigurationRequestSystemDisk) };
    inline CreateScalingConfigurationRequest& setSystemDisk(const CreateScalingConfigurationRequestSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateScalingConfigurationRequest& setSystemDisk(CreateScalingConfigurationRequestSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string affinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline CreateScalingConfigurationRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateScalingConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateScalingConfigurationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline CreateScalingConfigurationRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestCustomPriorities> & customPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<CreateScalingConfigurationRequestCustomPriorities>) };
    inline vector<CreateScalingConfigurationRequestCustomPriorities> customPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<CreateScalingConfigurationRequestCustomPriorities>) };
    inline CreateScalingConfigurationRequest& setCustomPriorities(const vector<CreateScalingConfigurationRequestCustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline CreateScalingConfigurationRequest& setCustomPriorities(vector<CreateScalingConfigurationRequestCustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestDataDisks> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<CreateScalingConfigurationRequestDataDisks>) };
    inline vector<CreateScalingConfigurationRequestDataDisks> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<CreateScalingConfigurationRequestDataDisks>) };
    inline CreateScalingConfigurationRequest& setDataDisks(const vector<CreateScalingConfigurationRequestDataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateScalingConfigurationRequest& setDataDisks(vector<CreateScalingConfigurationRequestDataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline CreateScalingConfigurationRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline CreateScalingConfigurationRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateScalingConfigurationRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateScalingConfigurationRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string hpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline CreateScalingConfigurationRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string httpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline CreateScalingConfigurationRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string httpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline CreateScalingConfigurationRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateScalingConfigurationRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateScalingConfigurationRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateScalingConfigurationRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateScalingConfigurationRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateScalingConfigurationRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestInstancePatternInfos> & instancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<CreateScalingConfigurationRequestInstancePatternInfos>) };
    inline vector<CreateScalingConfigurationRequestInstancePatternInfos> instancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<CreateScalingConfigurationRequestInstancePatternInfos>) };
    inline CreateScalingConfigurationRequest& setInstancePatternInfos(const vector<CreateScalingConfigurationRequestInstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline CreateScalingConfigurationRequest& setInstancePatternInfos(vector<CreateScalingConfigurationRequestInstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateScalingConfigurationRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeOverrides Field Functions 
    bool hasInstanceTypeOverrides() const { return this->instanceTypeOverrides_ != nullptr;};
    void deleteInstanceTypeOverrides() { this->instanceTypeOverrides_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestInstanceTypeOverrides> & instanceTypeOverrides() const { DARABONBA_PTR_GET_CONST(instanceTypeOverrides_, vector<CreateScalingConfigurationRequestInstanceTypeOverrides>) };
    inline vector<CreateScalingConfigurationRequestInstanceTypeOverrides> instanceTypeOverrides() { DARABONBA_PTR_GET(instanceTypeOverrides_, vector<CreateScalingConfigurationRequestInstanceTypeOverrides>) };
    inline CreateScalingConfigurationRequest& setInstanceTypeOverrides(const vector<CreateScalingConfigurationRequestInstanceTypeOverrides> & instanceTypeOverrides) { DARABONBA_PTR_SET_VALUE(instanceTypeOverrides_, instanceTypeOverrides) };
    inline CreateScalingConfigurationRequest& setInstanceTypeOverrides(vector<CreateScalingConfigurationRequestInstanceTypeOverrides> && instanceTypeOverrides) { DARABONBA_PTR_SET_RVALUE(instanceTypeOverrides_, instanceTypeOverrides) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateScalingConfigurationRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline CreateScalingConfigurationRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateScalingConfigurationRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateScalingConfigurationRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateScalingConfigurationRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline CreateScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateScalingConfigurationRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestNetworkInterfaces> & networkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<CreateScalingConfigurationRequestNetworkInterfaces>) };
    inline vector<CreateScalingConfigurationRequestNetworkInterfaces> networkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<CreateScalingConfigurationRequestNetworkInterfaces>) };
    inline CreateScalingConfigurationRequest& setNetworkInterfaces(const vector<CreateScalingConfigurationRequestNetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline CreateScalingConfigurationRequest& setNetworkInterfaces(vector<CreateScalingConfigurationRequestNetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingConfigurationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateScalingConfigurationRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateScalingConfigurationRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequestResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, CreateScalingConfigurationRequestResourcePoolOptions) };
    inline CreateScalingConfigurationRequestResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, CreateScalingConfigurationRequestResourcePoolOptions) };
    inline CreateScalingConfigurationRequest& setResourcePoolOptions(const CreateScalingConfigurationRequestResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline CreateScalingConfigurationRequest& setResourcePoolOptions(CreateScalingConfigurationRequestResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string scalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline CreateScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScalingConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline     const Darabonba::Json & schedulerOptions() const { DARABONBA_GET(schedulerOptions_) };
    Darabonba::Json & schedulerOptions() { DARABONBA_GET(schedulerOptions_) };
    inline CreateScalingConfigurationRequest& setSchedulerOptions(const Darabonba::Json & schedulerOptions) { DARABONBA_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline CreateScalingConfigurationRequest& setSchedulerOptions(Darabonba::Json & schedulerOptions) { DARABONBA_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateScalingConfigurationRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateScalingConfigurationRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateScalingConfigurationRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequestSecurityOptions & securityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, CreateScalingConfigurationRequestSecurityOptions) };
    inline CreateScalingConfigurationRequestSecurityOptions securityOptions() { DARABONBA_PTR_GET(securityOptions_, CreateScalingConfigurationRequestSecurityOptions) };
    inline CreateScalingConfigurationRequest& setSecurityOptions(const CreateScalingConfigurationRequestSecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline CreateScalingConfigurationRequest& setSecurityOptions(CreateScalingConfigurationRequestSecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline CreateScalingConfigurationRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string spotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline CreateScalingConfigurationRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequestSpotPriceLimits> & spotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<CreateScalingConfigurationRequestSpotPriceLimits>) };
    inline vector<CreateScalingConfigurationRequestSpotPriceLimits> spotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<CreateScalingConfigurationRequestSpotPriceLimits>) };
    inline CreateScalingConfigurationRequest& setSpotPriceLimits(const vector<CreateScalingConfigurationRequestSpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline CreateScalingConfigurationRequest& setSpotPriceLimits(vector<CreateScalingConfigurationRequestSpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateScalingConfigurationRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline CreateScalingConfigurationRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline CreateScalingConfigurationRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline CreateScalingConfigurationRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateScalingConfigurationRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string tenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline CreateScalingConfigurationRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateScalingConfigurationRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateScalingConfigurationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<CreateScalingConfigurationRequestImageOptions> imageOptions_ = nullptr;
    std::shared_ptr<CreateScalingConfigurationRequestPrivatePoolOptions> privatePoolOptions_ = nullptr;
    std::shared_ptr<CreateScalingConfigurationRequestSystemDisk> systemDisk_ = nullptr;
    // Specifies whether to associate an ECS instance on a dedicated host with the dedicated host. Valid values:
    // 
    // *   default: does not associate the ECS instance with the dedicated host. If you start an ECS instance that was stopped in economical mode and the original dedicated host has insufficient resources, the ECS instance is automatically deployed to another dedicated host in the automatic deployment resource pool.
    // *   host: associates the ECS instance with the dedicated host. If you start an ECS instance that was stopped in economical mode, the instance remains on the original dedicated host. If the original dedicated host has insufficient resources, the ECS instance fails to start.
    // 
    // Default value: default
    std::shared_ptr<string> affinity_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see the "[How to ensure the idempotence of a request](https://help.aliyun.com/document_detail/25693.html)" topic.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The number of vCPUs.
    // 
    // You can specify the number of vCPUs and the memory size to determine the range of instance types. For example, you can set CPU to 2 and Memory to 16 to specify instance types that have 2 vCPUs and 16 GiB of memory. If you specify Cpu and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling preferentially creates instances by using the lowest-priced instance type.
    // 
    // > You can specify Cpu and Memory to determine the range of instance types only if you set Scaling Policy to Cost Optimization Policy and you do not specify instance types in the scaling configuration.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: standard mode
    // *   Unlimited: unlimited mode
    // 
    // For more information, see the "Performance modes" section in the "[Overview](https://help.aliyun.com/document_detail/59977.html)" topic.
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The priority of the custom ECS instance type + vSwitch combination.
    // 
    // >  This parameter takes effect only when Scaling Policy of the scaling group is set to Priority Policy.
    // 
    // If Auto Scaling cannot create ECS instances by using the custom ECS instance type + vSwitch combination of the highest priority, Auto Scaling creates ECS instances by using the custom ECS instance type + vSwitch combination of the next highest priority.
    // 
    // >  If you specify the priorities of only partial custom ECS instance type + vSwitch combinations, Auto Scaling preferentially creates ECS instances by using the custom combinations that have specified priorities. If the custom combinations that have specified priorities do not provide sufficient resources, Auto Scaling creates ECS instances by using the custom combinations that do not have specified priorities based on the specified orders of vSwitches and instance types.
    // 
    // *   Example: the specified order of vSwitches for your scaling group is vsw1 and vsw2 and the specified order of instance types in your scaling configuration is type1 and type 2. In addition, you use CustomPriorities to specify ["vsw2+type2", "vsw1+type2"]. In this example, the vsw2+type2 combination has the highest priority and the vsw2+type1 combination has the lowest priority. The vsw1+type2 combination has a higher priority than the vsw1+type1 combination.
    std::shared_ptr<vector<CreateScalingConfigurationRequestCustomPriorities>> customPriorities_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<CreateScalingConfigurationRequestDataDisks>> dataDisks_ = nullptr;
    // The ID of the dedicated host cluster.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The ID of the dedicated host on which you want to create an ECS instance. You cannot create preemptible instances on dedicated hosts. If you specify DedicatedHostId, SpotStrategy and SpotPriceLimit are ignored.
    // 
    // You can call the DescribeDedicatedHosts operation to query dedicated host IDs.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The ID of the deployment set of the ECS instances that are created by using the scaling configuration.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The hostname of the ECS instance. The hostname cannot start or end with a period (.) or a hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-). Naming conventions for different types of instances:
    // 
    // *   Windows instances: The hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). The hostname cannot contain periods (.) or contain only digits.
    // *   Other instances, such as Linux instances: The hostname must be 2 to 64 characters in length. You can use periods (.) to separate a hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the Elastic High Performance Computing (E-HPC) cluster to which the ECS instances that are created by using the scaling configuration belong.
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
    // The name of the image family. If you specify this parameter, the most recent custom images that are available in the specified image family are returned. You can use the images to create instances. If you specify ImageId, you cannot specify ImageFamily.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image that Auto Scaling uses to automatically create ECS instances.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image. Each image name must be unique in a region. If you specify ImageId, ImageName is ignored.
    // 
    // You cannot use ImageName to specify images that are purchased from Alibaba Cloud Marketplace.
    std::shared_ptr<string> imageName_ = nullptr;
    // The description of the ECS instance. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The name of the ECS instance that Auto Scaling creates based on the scaling configuration.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The intelligent configuration settings, which determine the available instance types.
    std::shared_ptr<vector<CreateScalingConfigurationRequestInstancePatternInfos>> instancePatternInfos_ = nullptr;
    // The instance type of the ECS instance. For more information, see the [Instance families](https://help.aliyun.com/document_detail/25378.html) topic.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The instance types.
    std::shared_ptr<vector<CreateScalingConfigurationRequestInstanceTypeOverrides>> instanceTypeOverrides_ = nullptr;
    // The instance types. If you specify InstanceTypes, InstanceType is ignored.
    // 
    // Auto Scaling creates instances based on a priority list of instance types. If it fails to create instances using the highest-priority type, it automatically moves to the next type in the priority order.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The metering method for network usage. Valid values:
    // 
    // *   PayByBandwidth: You are charged for the maximum available bandwidth that is specified by InternetMaxBandwidthOut.
    // *   PayByTraffic: You are charged based on the amount of transferred data. InternetMaxBandwidthOut specifies only the maximum available bandwidth.
    // 
    // For the classic network, the default value is PayByBandwidth. For VPCs, the default value is PayByTraffic.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // *   If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s, the valid values of this parameter are 1 to 10, and the default value is 10.
    // *   If the purchased outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the value of `InternetMaxBandwidthOut`, and the default value is the value of `InternetMaxBandwidthOut`.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Specifies whether to create an I/O optimized instance. Valid values:
    // 
    // none: does not create an I/O optimized instance. optimized: creates an I/O optimized instance.
    // 
    // For instances of retired instance types, the default value is none. For instances of other instance types, the default value is optimized.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The number of randomly generated IPv6 addresses that you want to allocate to the elastic network interface (ENI).
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // The name of the key pair that you want to use to log on to an ECS instance.
    // 
    // *   Windows instances do not support this parameter.
    // *   By default, the username and password authentication method is disabled for Linux instances.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The weight of an ECS instance as a backend server. Valid values: 1 to 100.
    // 
    // Default value: 50
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The memory size. Unit: GiB.
    // 
    // You can specify the number of vCPUs and the memory size to determine the range of instance types. For example, you can set Cpu to 2 and Memory to 16 to specify instance types that have 2 vCPUs and 16 GiB of memory. If you specify Cpu and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones. Then, Auto Scaling preferentially creates instances by using the lowest-priced instance type.
    // 
    // > You can specify Cpu and Memory to determine the range of instance types only if you set Scaling Policy to Cost Optimization Policy and you do not specify instance types in the scaling configuration.
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<vector<CreateScalingConfigurationRequestNetworkInterfaces>> networkInterfaces_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password that you want to use to log on to an ECS instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
    // 
    // `` `() ~!@#$%^&*-_+=\\|{}[]:;\\"<>,.?/ ``
    // 
    // The password of a Windows instance cannot start with a forward slash (/).
    // 
    // > For security reasons, we recommend that you use HTTPS to send requests if you specify Password.
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to use the password that is preconfigured in the image. Before you use this parameter, make sure that a password is configured in the image. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The name of the RAM role that you attach to the ECS instance. The name is provided and maintained by Resource Access Management (RAM). You can call the ListRoles operation to query the available RAM roles.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group to which the ECS instances that are created by using the scaling configuration belong.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The resource pools used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation. When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when you create pay-as-you-go instances.
    // *   If you specify this parameter, you cannot specify PrivatePoolOptions.MatchCriteria or PrivatePoolOptions.Id.
    std::shared_ptr<CreateScalingConfigurationRequestResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The name of the scaling configuration. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // The name of the scaling configuration must be unique in a region. If you do not specify this parameter, the scaling configuration ID is used.
    std::shared_ptr<string> scalingConfigurationName_ = nullptr;
    // The ID of the scaling group in which you want to create a scaling configuration.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scheduler options.
    Darabonba::Json schedulerOptions_ = nullptr;
    // Specifies whether to enable security hardening. Valid values:
    // 
    // *   Active: enables security hardening. This value is applicable only to public images.
    // *   Deactive: disables security hardening. This value is applicable to all image types.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The ID of the security group with which ECS instances are associated. ECS instances that are associated with the same security group can access each other.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the security groups with which you want to associate the ECS instances that are created by using the scaling configuration. For more information, see the "Security group limits" section of the "[Limits](https://help.aliyun.com/document_detail/25412.html)" topic.
    // 
    // > If you specify SecurityGroupId, you cannot specify SecurityGroupIds.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<CreateScalingConfigurationRequestSecurityOptions> securityOptions_ = nullptr;
    // The retention period of the preemptible instance. Unit: hours. Valid values: 0, 1, 2, 3, 4, 5, and 6.
    // 
    // *   The following retention periods are available in invitational preview: 2, 3, 4, 5, and 6 hours. If you want to set this parameter to one of these values, submit a ticket.
    // *   If you set this parameter to 0, no protection period is specified for the preemptible instance.
    // 
    // Default value: 1
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The interruption mode of the preemptible instance. Set the value to Terminate. The value specifies that the preemptible instance is to be released.
    std::shared_ptr<string> spotInterruptionBehavior_ = nullptr;
    // The billing information of the preemptible instances.
    std::shared_ptr<vector<CreateScalingConfigurationRequestSpotPriceLimits>> spotPriceLimits_ = nullptr;
    // The preemption policy that you want to apply to pay-as-you-go and preemptible instances. Valid values:
    // 
    // *   NoSpot: The instance is created as a pay-as-you-go instance.
    // *   SpotWithPriceLimit: The instance is a preemptible instance that has a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instance is created as a preemptible instance for which the market price at the time of purchase is automatically used as the bid price.
    // 
    // Default value: NoSpot
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<string> storageSetId_ = nullptr;
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The categories of the system disks. If Auto Scaling cannot create instances by using the disk category that has the highest priority, Auto Scaling creates instances by using the disk category that has the next highest priority. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    // 
    // > If you specify SystemDiskCategories, you cannot specify `SystemDisk.Category`.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The tags of the ECS instance. Tags must be specified as key-value pairs. You can specify up to 20 tags. When you specify tag keys and tag values, take note of the following items:
    // 
    // *   A tag key can be up to 64 characters in length. The key cannot start with acs: or aliyun and cannot contain `http://` or `https://`. You cannot specify an empty string as a tag key.
    // *   A tag value can be up to 128 characters in length. The value cannot start with acs: or aliyun and cannot contain `http://` or `https://`. You can specify an empty string as a tag value.
    std::shared_ptr<string> tags_ = nullptr;
    // Specifies whether to create an ECS instance on a dedicated host. Valid values:
    // 
    // *   default: does not create an ECS instance on a dedicated host.
    // *   host: creates an ECS instance on a dedicated host. If you do not specify DedicatedHostId, Alibaba Cloud selects a dedicated host for the ECS instance.
    // 
    // Default value: default
    std::shared_ptr<string> tenancy_ = nullptr;
    // The user data of the Elastic Compute Service (ECS) instance. The user data must be encoded in Base64 format. The size of raw data before Base64 encoding cannot exceed 32 KB.
    std::shared_ptr<string> userData_ = nullptr;
    // The zone ID of the ECS instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
