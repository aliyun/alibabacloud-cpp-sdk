// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfiguration.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestDataDiskConfig.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchTemplateConfig.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestPrePaidOptions.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestResourcePoolOptions.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestSystemDiskConfig.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchConfiguration, launchConfiguration_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataDiskConfig, dataDiskConfig_);
      DARABONBA_PTR_TO_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_TO_JSON(MinTargetCapacity, minTargetCapacity_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoAllocationStrategy, payAsYouGoAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_TO_JSON(PrePaidOptions, prePaidOptions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(SpotInstanceInterruptionBehavior, spotInstanceInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotInstancePoolsToUseCount, spotInstancePoolsToUseCount_);
      DARABONBA_PTR_TO_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_TO_JSON(SystemDiskConfig, systemDiskConfig_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_TO_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_TO_JSON(TotalTargetCapacity, totalTargetCapacity_);
      DARABONBA_PTR_TO_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchConfiguration, launchConfiguration_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataDiskConfig, dataDiskConfig_);
      DARABONBA_PTR_FROM_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_FROM_JSON(MinTargetCapacity, minTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoAllocationStrategy, payAsYouGoAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(PrePaidOptions, prePaidOptions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceInterruptionBehavior, spotInstanceInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePoolsToUseCount, spotInstancePoolsToUseCount_);
      DARABONBA_PTR_FROM_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(SystemDiskConfig, systemDiskConfig_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_FROM_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_FROM_JSON(TotalTargetCapacity, totalTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
    };
    CreateAutoProvisioningGroupRequest() = default ;
    CreateAutoProvisioningGroupRequest(const CreateAutoProvisioningGroupRequest &) = default ;
    CreateAutoProvisioningGroupRequest(CreateAutoProvisioningGroupRequest &&) = default ;
    CreateAutoProvisioningGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequest() = default ;
    CreateAutoProvisioningGroupRequest& operator=(const CreateAutoProvisioningGroupRequest &) = default ;
    CreateAutoProvisioningGroupRequest& operator=(CreateAutoProvisioningGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->launchConfiguration_ == nullptr
        && return this->autoProvisioningGroupName_ == nullptr && return this->autoProvisioningGroupType_ == nullptr && return this->clientToken_ == nullptr && return this->dataDiskConfig_ == nullptr && return this->defaultTargetCapacityType_ == nullptr
        && return this->description_ == nullptr && return this->excessCapacityTerminationPolicy_ == nullptr && return this->executionMode_ == nullptr && return this->hibernationOptionsConfigured_ == nullptr && return this->launchTemplateConfig_ == nullptr
        && return this->launchTemplateId_ == nullptr && return this->launchTemplateVersion_ == nullptr && return this->maxSpotPrice_ == nullptr && return this->minTargetCapacity_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->payAsYouGoAllocationStrategy_ == nullptr && return this->payAsYouGoTargetCapacity_ == nullptr && return this->prePaidOptions_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->resourcePoolOptions_ == nullptr && return this->spotAllocationStrategy_ == nullptr
        && return this->spotInstanceInterruptionBehavior_ == nullptr && return this->spotInstancePoolsToUseCount_ == nullptr && return this->spotTargetCapacity_ == nullptr && return this->systemDiskConfig_ == nullptr && return this->tag_ == nullptr
        && return this->terminateInstances_ == nullptr && return this->terminateInstancesWithExpiration_ == nullptr && return this->totalTargetCapacity_ == nullptr && return this->validFrom_ == nullptr && return this->validUntil_ == nullptr; };
    // launchConfiguration Field Functions 
    bool hasLaunchConfiguration() const { return this->launchConfiguration_ != nullptr;};
    void deleteLaunchConfiguration() { this->launchConfiguration_ = nullptr;};
    inline const CreateAutoProvisioningGroupRequestLaunchConfiguration & launchConfiguration() const { DARABONBA_PTR_GET_CONST(launchConfiguration_, CreateAutoProvisioningGroupRequestLaunchConfiguration) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration launchConfiguration() { DARABONBA_PTR_GET(launchConfiguration_, CreateAutoProvisioningGroupRequestLaunchConfiguration) };
    inline CreateAutoProvisioningGroupRequest& setLaunchConfiguration(const CreateAutoProvisioningGroupRequestLaunchConfiguration & launchConfiguration) { DARABONBA_PTR_SET_VALUE(launchConfiguration_, launchConfiguration) };
    inline CreateAutoProvisioningGroupRequest& setLaunchConfiguration(CreateAutoProvisioningGroupRequestLaunchConfiguration && launchConfiguration) { DARABONBA_PTR_SET_RVALUE(launchConfiguration_, launchConfiguration) };


    // autoProvisioningGroupName Field Functions 
    bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
    void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
    inline string autoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
    inline CreateAutoProvisioningGroupRequest& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


    // autoProvisioningGroupType Field Functions 
    bool hasAutoProvisioningGroupType() const { return this->autoProvisioningGroupType_ != nullptr;};
    void deleteAutoProvisioningGroupType() { this->autoProvisioningGroupType_ = nullptr;};
    inline string autoProvisioningGroupType() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupType_, "") };
    inline CreateAutoProvisioningGroupRequest& setAutoProvisioningGroupType(string autoProvisioningGroupType) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupType_, autoProvisioningGroupType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAutoProvisioningGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataDiskConfig Field Functions 
    bool hasDataDiskConfig() const { return this->dataDiskConfig_ != nullptr;};
    void deleteDataDiskConfig() { this->dataDiskConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupRequestDataDiskConfig> & dataDiskConfig() const { DARABONBA_PTR_GET_CONST(dataDiskConfig_, vector<CreateAutoProvisioningGroupRequestDataDiskConfig>) };
    inline vector<CreateAutoProvisioningGroupRequestDataDiskConfig> dataDiskConfig() { DARABONBA_PTR_GET(dataDiskConfig_, vector<CreateAutoProvisioningGroupRequestDataDiskConfig>) };
    inline CreateAutoProvisioningGroupRequest& setDataDiskConfig(const vector<CreateAutoProvisioningGroupRequestDataDiskConfig> & dataDiskConfig) { DARABONBA_PTR_SET_VALUE(dataDiskConfig_, dataDiskConfig) };
    inline CreateAutoProvisioningGroupRequest& setDataDiskConfig(vector<CreateAutoProvisioningGroupRequestDataDiskConfig> && dataDiskConfig) { DARABONBA_PTR_SET_RVALUE(dataDiskConfig_, dataDiskConfig) };


    // defaultTargetCapacityType Field Functions 
    bool hasDefaultTargetCapacityType() const { return this->defaultTargetCapacityType_ != nullptr;};
    void deleteDefaultTargetCapacityType() { this->defaultTargetCapacityType_ = nullptr;};
    inline string defaultTargetCapacityType() const { DARABONBA_PTR_GET_DEFAULT(defaultTargetCapacityType_, "") };
    inline CreateAutoProvisioningGroupRequest& setDefaultTargetCapacityType(string defaultTargetCapacityType) { DARABONBA_PTR_SET_VALUE(defaultTargetCapacityType_, defaultTargetCapacityType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAutoProvisioningGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excessCapacityTerminationPolicy Field Functions 
    bool hasExcessCapacityTerminationPolicy() const { return this->excessCapacityTerminationPolicy_ != nullptr;};
    void deleteExcessCapacityTerminationPolicy() { this->excessCapacityTerminationPolicy_ = nullptr;};
    inline string excessCapacityTerminationPolicy() const { DARABONBA_PTR_GET_DEFAULT(excessCapacityTerminationPolicy_, "") };
    inline CreateAutoProvisioningGroupRequest& setExcessCapacityTerminationPolicy(string excessCapacityTerminationPolicy) { DARABONBA_PTR_SET_VALUE(excessCapacityTerminationPolicy_, excessCapacityTerminationPolicy) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateAutoProvisioningGroupRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // hibernationOptionsConfigured Field Functions 
    bool hasHibernationOptionsConfigured() const { return this->hibernationOptionsConfigured_ != nullptr;};
    void deleteHibernationOptionsConfigured() { this->hibernationOptionsConfigured_ = nullptr;};
    inline bool hibernationOptionsConfigured() const { DARABONBA_PTR_GET_DEFAULT(hibernationOptionsConfigured_, false) };
    inline CreateAutoProvisioningGroupRequest& setHibernationOptionsConfigured(bool hibernationOptionsConfigured) { DARABONBA_PTR_SET_VALUE(hibernationOptionsConfigured_, hibernationOptionsConfigured) };


    // launchTemplateConfig Field Functions 
    bool hasLaunchTemplateConfig() const { return this->launchTemplateConfig_ != nullptr;};
    void deleteLaunchTemplateConfig() { this->launchTemplateConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig> & launchTemplateConfig() const { DARABONBA_PTR_GET_CONST(launchTemplateConfig_, vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig>) };
    inline vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig> launchTemplateConfig() { DARABONBA_PTR_GET(launchTemplateConfig_, vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig>) };
    inline CreateAutoProvisioningGroupRequest& setLaunchTemplateConfig(const vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig> & launchTemplateConfig) { DARABONBA_PTR_SET_VALUE(launchTemplateConfig_, launchTemplateConfig) };
    inline CreateAutoProvisioningGroupRequest& setLaunchTemplateConfig(vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig> && launchTemplateConfig) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfig_, launchTemplateConfig) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateAutoProvisioningGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline CreateAutoProvisioningGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxSpotPrice Field Functions 
    bool hasMaxSpotPrice() const { return this->maxSpotPrice_ != nullptr;};
    void deleteMaxSpotPrice() { this->maxSpotPrice_ = nullptr;};
    inline float maxSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(maxSpotPrice_, 0.0) };
    inline CreateAutoProvisioningGroupRequest& setMaxSpotPrice(float maxSpotPrice) { DARABONBA_PTR_SET_VALUE(maxSpotPrice_, maxSpotPrice) };


    // minTargetCapacity Field Functions 
    bool hasMinTargetCapacity() const { return this->minTargetCapacity_ != nullptr;};
    void deleteMinTargetCapacity() { this->minTargetCapacity_ = nullptr;};
    inline string minTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(minTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupRequest& setMinTargetCapacity(string minTargetCapacity) { DARABONBA_PTR_SET_VALUE(minTargetCapacity_, minTargetCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAutoProvisioningGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoProvisioningGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payAsYouGoAllocationStrategy Field Functions 
    bool hasPayAsYouGoAllocationStrategy() const { return this->payAsYouGoAllocationStrategy_ != nullptr;};
    void deletePayAsYouGoAllocationStrategy() { this->payAsYouGoAllocationStrategy_ = nullptr;};
    inline string payAsYouGoAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoAllocationStrategy_, "") };
    inline CreateAutoProvisioningGroupRequest& setPayAsYouGoAllocationStrategy(string payAsYouGoAllocationStrategy) { DARABONBA_PTR_SET_VALUE(payAsYouGoAllocationStrategy_, payAsYouGoAllocationStrategy) };


    // payAsYouGoTargetCapacity Field Functions 
    bool hasPayAsYouGoTargetCapacity() const { return this->payAsYouGoTargetCapacity_ != nullptr;};
    void deletePayAsYouGoTargetCapacity() { this->payAsYouGoTargetCapacity_ = nullptr;};
    inline string payAsYouGoTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupRequest& setPayAsYouGoTargetCapacity(string payAsYouGoTargetCapacity) { DARABONBA_PTR_SET_VALUE(payAsYouGoTargetCapacity_, payAsYouGoTargetCapacity) };


    // prePaidOptions Field Functions 
    bool hasPrePaidOptions() const { return this->prePaidOptions_ != nullptr;};
    void deletePrePaidOptions() { this->prePaidOptions_ = nullptr;};
    inline const CreateAutoProvisioningGroupRequestPrePaidOptions & prePaidOptions() const { DARABONBA_PTR_GET_CONST(prePaidOptions_, CreateAutoProvisioningGroupRequestPrePaidOptions) };
    inline CreateAutoProvisioningGroupRequestPrePaidOptions prePaidOptions() { DARABONBA_PTR_GET(prePaidOptions_, CreateAutoProvisioningGroupRequestPrePaidOptions) };
    inline CreateAutoProvisioningGroupRequest& setPrePaidOptions(const CreateAutoProvisioningGroupRequestPrePaidOptions & prePaidOptions) { DARABONBA_PTR_SET_VALUE(prePaidOptions_, prePaidOptions) };
    inline CreateAutoProvisioningGroupRequest& setPrePaidOptions(CreateAutoProvisioningGroupRequestPrePaidOptions && prePaidOptions) { DARABONBA_PTR_SET_RVALUE(prePaidOptions_, prePaidOptions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAutoProvisioningGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAutoProvisioningGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAutoProvisioningGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAutoProvisioningGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const CreateAutoProvisioningGroupRequestResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, CreateAutoProvisioningGroupRequestResourcePoolOptions) };
    inline CreateAutoProvisioningGroupRequestResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, CreateAutoProvisioningGroupRequestResourcePoolOptions) };
    inline CreateAutoProvisioningGroupRequest& setResourcePoolOptions(const CreateAutoProvisioningGroupRequestResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline CreateAutoProvisioningGroupRequest& setResourcePoolOptions(CreateAutoProvisioningGroupRequestResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string spotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline CreateAutoProvisioningGroupRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstanceInterruptionBehavior Field Functions 
    bool hasSpotInstanceInterruptionBehavior() const { return this->spotInstanceInterruptionBehavior_ != nullptr;};
    void deleteSpotInstanceInterruptionBehavior() { this->spotInstanceInterruptionBehavior_ = nullptr;};
    inline string spotInstanceInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceInterruptionBehavior_, "") };
    inline CreateAutoProvisioningGroupRequest& setSpotInstanceInterruptionBehavior(string spotInstanceInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInstanceInterruptionBehavior_, spotInstanceInterruptionBehavior) };


    // spotInstancePoolsToUseCount Field Functions 
    bool hasSpotInstancePoolsToUseCount() const { return this->spotInstancePoolsToUseCount_ != nullptr;};
    void deleteSpotInstancePoolsToUseCount() { this->spotInstancePoolsToUseCount_ = nullptr;};
    inline int32_t spotInstancePoolsToUseCount() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePoolsToUseCount_, 0) };
    inline CreateAutoProvisioningGroupRequest& setSpotInstancePoolsToUseCount(int32_t spotInstancePoolsToUseCount) { DARABONBA_PTR_SET_VALUE(spotInstancePoolsToUseCount_, spotInstancePoolsToUseCount) };


    // spotTargetCapacity Field Functions 
    bool hasSpotTargetCapacity() const { return this->spotTargetCapacity_ != nullptr;};
    void deleteSpotTargetCapacity() { this->spotTargetCapacity_ = nullptr;};
    inline string spotTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupRequest& setSpotTargetCapacity(string spotTargetCapacity) { DARABONBA_PTR_SET_VALUE(spotTargetCapacity_, spotTargetCapacity) };


    // systemDiskConfig Field Functions 
    bool hasSystemDiskConfig() const { return this->systemDiskConfig_ != nullptr;};
    void deleteSystemDiskConfig() { this->systemDiskConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupRequestSystemDiskConfig> & systemDiskConfig() const { DARABONBA_PTR_GET_CONST(systemDiskConfig_, vector<CreateAutoProvisioningGroupRequestSystemDiskConfig>) };
    inline vector<CreateAutoProvisioningGroupRequestSystemDiskConfig> systemDiskConfig() { DARABONBA_PTR_GET(systemDiskConfig_, vector<CreateAutoProvisioningGroupRequestSystemDiskConfig>) };
    inline CreateAutoProvisioningGroupRequest& setSystemDiskConfig(const vector<CreateAutoProvisioningGroupRequestSystemDiskConfig> & systemDiskConfig) { DARABONBA_PTR_SET_VALUE(systemDiskConfig_, systemDiskConfig) };
    inline CreateAutoProvisioningGroupRequest& setSystemDiskConfig(vector<CreateAutoProvisioningGroupRequestSystemDiskConfig> && systemDiskConfig) { DARABONBA_PTR_SET_RVALUE(systemDiskConfig_, systemDiskConfig) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAutoProvisioningGroupRequestTag>) };
    inline vector<CreateAutoProvisioningGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAutoProvisioningGroupRequestTag>) };
    inline CreateAutoProvisioningGroupRequest& setTag(const vector<CreateAutoProvisioningGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAutoProvisioningGroupRequest& setTag(vector<CreateAutoProvisioningGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // terminateInstances Field Functions 
    bool hasTerminateInstances() const { return this->terminateInstances_ != nullptr;};
    void deleteTerminateInstances() { this->terminateInstances_ = nullptr;};
    inline bool terminateInstances() const { DARABONBA_PTR_GET_DEFAULT(terminateInstances_, false) };
    inline CreateAutoProvisioningGroupRequest& setTerminateInstances(bool terminateInstances) { DARABONBA_PTR_SET_VALUE(terminateInstances_, terminateInstances) };


    // terminateInstancesWithExpiration Field Functions 
    bool hasTerminateInstancesWithExpiration() const { return this->terminateInstancesWithExpiration_ != nullptr;};
    void deleteTerminateInstancesWithExpiration() { this->terminateInstancesWithExpiration_ = nullptr;};
    inline bool terminateInstancesWithExpiration() const { DARABONBA_PTR_GET_DEFAULT(terminateInstancesWithExpiration_, false) };
    inline CreateAutoProvisioningGroupRequest& setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) { DARABONBA_PTR_SET_VALUE(terminateInstancesWithExpiration_, terminateInstancesWithExpiration) };


    // totalTargetCapacity Field Functions 
    bool hasTotalTargetCapacity() const { return this->totalTargetCapacity_ != nullptr;};
    void deleteTotalTargetCapacity() { this->totalTargetCapacity_ = nullptr;};
    inline string totalTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupRequest& setTotalTargetCapacity(string totalTargetCapacity) { DARABONBA_PTR_SET_VALUE(totalTargetCapacity_, totalTargetCapacity) };


    // validFrom Field Functions 
    bool hasValidFrom() const { return this->validFrom_ != nullptr;};
    void deleteValidFrom() { this->validFrom_ = nullptr;};
    inline string validFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, "") };
    inline CreateAutoProvisioningGroupRequest& setValidFrom(string validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string validUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline CreateAutoProvisioningGroupRequest& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


  protected:
    std::shared_ptr<CreateAutoProvisioningGroupRequestLaunchConfiguration> launchConfiguration_ = nullptr;
    // The name of the auto provisioning group. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> autoProvisioningGroupName_ = nullptr;
    // The delivery type of the auto provisioning group. Valid values:
    // 
    // *   request: one-time asynchronous delivery. When the auto provisioning group is started, it attempts to asynchronously deliver an instance cluster that meets the target capacity only once. The group does not retry the operation regardless of whether all the instances are delivered.
    // *   instant: one-time synchronous delivery. When the auto provisioning group is started, it attempts to synchronously deliver an instance cluster that meets the target capacity only once. The list of delivered instances and the causes of delivery failures are returned in the response.
    // *   maintain: continuous delivery. When the auto provisioning group is started, it attempts to deliver an instance cluster that meets the target capacity, and monitors the real-time capacity. If the target capacity of the auto provisioning group is not reached, the auto provisioning group continues to create instances until the target capacity is reached.
    // 
    // Default value: maintain.
    std::shared_ptr<string> autoProvisioningGroupType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The information of data disks on the instance.
    std::shared_ptr<vector<CreateAutoProvisioningGroupRequestDataDiskConfig>> dataDiskConfig_ = nullptr;
    // The type of supplemental instances. When the sum of the `PayAsYouGoTargetCapacity` and `SpotTargetCapacity` values is smaller than the `TotalTargetCapacity` value, the auto provisioning group creates instances of the specified type to meet the total target capacity. Valid values:
    // 
    // *   PayAsYouGo: pay-as-you-go
    // *   Spot: spot instance
    // 
    // Default value: Spot.
    std::shared_ptr<string> defaultTargetCapacityType_ = nullptr;
    // The description of the auto provisioning group.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to release scaled-in instances when the real-time capacity of the auto provisioning group exceeds the target capacity and the group is triggered to scale in. Valid values:
    // 
    // *   termination: releases the scaled-in instances in the auto provisioning group.
    // *   no-termination: removes the scaled-in instances from the auto provisioning group but does not release the instances.
    // 
    // Default value: no-termination.
    std::shared_ptr<string> excessCapacityTerminationPolicy_ = nullptr;
    std::shared_ptr<string> executionMode_ = nullptr;
    // >This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> hibernationOptionsConfigured_ = nullptr;
    // The extended configurations of the launch template.
    std::shared_ptr<vector<CreateAutoProvisioningGroupRequestLaunchTemplateConfig>> launchTemplateConfig_ = nullptr;
    // The ID of the launch template associated with the auto provisioning group. You can call the [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html) operation to query available launch templates. When both LaunchTemplateId and `LaunchConfiguration.*` parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version of the launch template associated with the auto provisioning group. You can call the [DescribeLaunchTemplateVersions](https://help.aliyun.com/document_detail/73761.html) operation to query the versions of available launch templates.
    // 
    // Default value: the default version of the launch template.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The maximum price of spot instances in the auto provisioning group.
    // 
    // >  When both `MaxSpotPrice` and `LaunchTemplateConfig.N.MaxPrice` are specified, the smaller one of the two parameter values is used.
    std::shared_ptr<float> maxSpotPrice_ = nullptr;
    // The minimum target capacity of the auto provisioning group. The value must be a positive integer. When you specify this parameter, take note of the following items:
    // 
    // - This parameter takes effect only when `AutoProvisioningGroupType` is set to instant. 
    // - If the number of instances that can be created in the current region is smaller than the value of this parameter, the operation cannot be called and no instances are created. 
    // - If the number of instances that can be created in the current region is greater than the value of this parameter, instances can be created based on the specified parameters.
    std::shared_ptr<string> minTargetCapacity_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The policy for creating pay-as-you-go instances. Valid values:
    // 
    // *   lowest-price: cost optimization policy. The auto provisioning group selects the lowest-priced instance type to create instances.
    // *   prioritized: priority-based policy. The auto provisioning group creates instances based on the priority specified by `LaunchTemplateConfig.N.Priority`.
    // 
    // Default value: lowest-price.
    std::shared_ptr<string> payAsYouGoAllocationStrategy_ = nullptr;
    // The target capacity of pay-as-you-go instances in the auto provisioning group. The value must be less than or equal to the `TotalTargetCapacity` value.
    std::shared_ptr<string> payAsYouGoTargetCapacity_ = nullptr;
    // The capacity details of the subscription instance.
    std::shared_ptr<CreateAutoProvisioningGroupRequestPrePaidOptions> prePaidOptions_ = nullptr;
    // The ID of the region in which to create the auto provisioning group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which to assign the auto provisioning group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The resource pool options to use to create instances. When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when the auto provisioning group creates pay-as-you-go instances.
    // *   This parameter takes effect only if you set `AutoProvisioningGroupType` to instant.
    std::shared_ptr<CreateAutoProvisioningGroupRequestResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The policy for creating spot instances. Valid values:
    // 
    // *   lowest-price: cost optimization policy. The auto provisioning group selects the lowest-priced instance type to create instances.
    // *   diversified: balanced distribution policy. The auto provisioning group creates instances in zones that are specified in extended configurations and then evenly distributes the instances across the zones.
    // *   capacity-optimized: capacity-optimized distribution policy. The auto provisioning group creates instances of the optimal instance types across the optimal zones based on resource availability.
    // 
    // Default value: lowest-price.
    std::shared_ptr<string> spotAllocationStrategy_ = nullptr;
    // The operation to be performed on the spot instance when it is interrupted. Valid values:
    // 
    // *   stop: stops the spot instance.
    // *   terminate: releases the spot instance.
    // 
    // Default value: terminate.
    std::shared_ptr<string> spotInstanceInterruptionBehavior_ = nullptr;
    // The number of spot instances of the lowest-priced instance type to be created by the auto provisioning group. This parameter takes effect when `SpotAllocationStrategy` is set to `lowest-price`.
    // 
    // The value must be smaller than the N value specified in `LaunchTemplateConfig.N`.
    std::shared_ptr<int32_t> spotInstancePoolsToUseCount_ = nullptr;
    // The target capacity of spot instances in the auto provisioning group. The value must be less than or equal to the `TotalTargetCapacity` value.
    std::shared_ptr<string> spotTargetCapacity_ = nullptr;
    // The information of system disks on the instance.
    std::shared_ptr<vector<CreateAutoProvisioningGroupRequestSystemDiskConfig>> systemDiskConfig_ = nullptr;
    // The tags to add to the auto provisioning group.
    std::shared_ptr<vector<CreateAutoProvisioningGroupRequestTag>> tag_ = nullptr;
    // Specifies whether to release instances in the auto provisioning group when the auto provisioning group is deleted. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: retains the instances.
    // 
    // Default value: false.
    std::shared_ptr<bool> terminateInstances_ = nullptr;
    // Specifies whether to release instances in the auto provisioning group when the group expires. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: only removes the instances from the auto provisioning group but does not release them.
    // 
    // Default value: false.
    std::shared_ptr<bool> terminateInstancesWithExpiration_ = nullptr;
    // The total target capacity of the auto provisioning group. The value must be a positive integer.
    // 
    // The total target capacity of the auto provisioning group must be greater than or equal to the sum of the target capacity of pay-as-you-go instances specified by `PayAsYouGoTargetCapacity` and the target capacity of spot instances specified by `SpotTargetCapacity`.
    // 
    // This parameter is required.
    std::shared_ptr<string> totalTargetCapacity_ = nullptr;
    // The time at which to start the auto provisioning group. The period of time between this point in time and the point in time specified by `ValidUntil` is the validity period of the auto provisioning group.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // By default, an auto provisioning group is started immediately after it is created.
    std::shared_ptr<string> validFrom_ = nullptr;
    // The time at which the auto provisioning group expires. The period of time between this point in time and the point in time specified by `ValidFrom` is the validity period of the auto provisioning group.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // Default value: 2099-12-31T23:59:59Z.
    std::shared_ptr<string> validUntil_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
