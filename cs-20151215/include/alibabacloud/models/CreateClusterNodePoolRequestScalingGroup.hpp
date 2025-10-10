// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUESTSCALINGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestScalingGroupResourcePoolOptions.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestScalingGroupSpotPriceLimit.hpp>
#include <alibabacloud/models/CreateClusterNodePoolRequestScalingGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequestScalingGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequestScalingGroup& obj) { 
      DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(cis_enabled, cisEnabled_);
      DARABONBA_PTR_TO_JSON(compensate_with_on_demand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(data_disks, dataDisks_);
      DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
      DARABONBA_PTR_TO_JSON(desired_size, desiredSize_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(instance_metadata_options, instanceMetadataOptions_);
      DARABONBA_PTR_TO_JSON(instance_patterns, instancePatterns_);
      DARABONBA_PTR_TO_JSON(instance_types, instanceTypes_);
      DARABONBA_PTR_TO_JSON(internet_charge_type, internetChargeType_);
      DARABONBA_PTR_TO_JSON(internet_max_bandwidth_out, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
      DARABONBA_PTR_TO_JSON(login_as_non_root, loginAsNonRoot_);
      DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
      DARABONBA_PTR_TO_JSON(multi_az_policy, multiAzPolicy_);
      DARABONBA_PTR_TO_JSON(on_demand_base_capacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(on_demand_percentage_above_base_capacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(period_unit, periodUnit_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(private_pool_options, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(ram_role_name, ramRoleName_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_TO_JSON(resource_pool_options, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(scaling_policy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_ids, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(security_hardening_os, securityHardeningOs_);
      DARABONBA_PTR_TO_JSON(soc_enabled, socEnabled_);
      DARABONBA_PTR_TO_JSON(spot_instance_pools, spotInstancePools_);
      DARABONBA_PTR_TO_JSON(spot_instance_remedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(spot_price_limit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(spot_strategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
      DARABONBA_PTR_TO_JSON(system_disk_categories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(system_disk_category, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(system_disk_encrypt_algorithm, systemDiskEncryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(system_disk_encrypted, systemDiskEncrypted_);
      DARABONBA_PTR_TO_JSON(system_disk_kms_key_id, systemDiskKmsKeyId_);
      DARABONBA_PTR_TO_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
      DARABONBA_PTR_TO_JSON(system_disk_size, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequestScalingGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(cis_enabled, cisEnabled_);
      DARABONBA_PTR_FROM_JSON(compensate_with_on_demand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(data_disks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
      DARABONBA_PTR_FROM_JSON(desired_size, desiredSize_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(instance_metadata_options, instanceMetadataOptions_);
      DARABONBA_PTR_FROM_JSON(instance_patterns, instancePatterns_);
      DARABONBA_PTR_FROM_JSON(instance_types, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(internet_charge_type, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(internet_max_bandwidth_out, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
      DARABONBA_PTR_FROM_JSON(login_as_non_root, loginAsNonRoot_);
      DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
      DARABONBA_PTR_FROM_JSON(multi_az_policy, multiAzPolicy_);
      DARABONBA_PTR_FROM_JSON(on_demand_base_capacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(on_demand_percentage_above_base_capacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(period_unit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(private_pool_options, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ram_role_name, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_FROM_JSON(resource_pool_options, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(scaling_policy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_ids, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(security_hardening_os, securityHardeningOs_);
      DARABONBA_PTR_FROM_JSON(soc_enabled, socEnabled_);
      DARABONBA_PTR_FROM_JSON(spot_instance_pools, spotInstancePools_);
      DARABONBA_PTR_FROM_JSON(spot_instance_remedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(spot_price_limit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(spot_strategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
      DARABONBA_PTR_FROM_JSON(system_disk_categories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(system_disk_category, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(system_disk_encrypt_algorithm, systemDiskEncryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(system_disk_encrypted, systemDiskEncrypted_);
      DARABONBA_PTR_FROM_JSON(system_disk_kms_key_id, systemDiskKmsKeyId_);
      DARABONBA_PTR_FROM_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
      DARABONBA_PTR_FROM_JSON(system_disk_size, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
    };
    CreateClusterNodePoolRequestScalingGroup() = default ;
    CreateClusterNodePoolRequestScalingGroup(const CreateClusterNodePoolRequestScalingGroup &) = default ;
    CreateClusterNodePoolRequestScalingGroup(CreateClusterNodePoolRequestScalingGroup &&) = default ;
    CreateClusterNodePoolRequestScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequestScalingGroup() = default ;
    CreateClusterNodePoolRequestScalingGroup& operator=(const CreateClusterNodePoolRequestScalingGroup &) = default ;
    CreateClusterNodePoolRequestScalingGroup& operator=(CreateClusterNodePoolRequestScalingGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->cisEnabled_ != nullptr && this->compensateWithOnDemand_ != nullptr && this->dataDisks_ != nullptr && this->deploymentsetId_ != nullptr
        && this->desiredSize_ != nullptr && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceMetadataOptions_ != nullptr
        && this->instancePatterns_ != nullptr && this->instanceTypes_ != nullptr && this->internetChargeType_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->keyPair_ != nullptr
        && this->loginAsNonRoot_ != nullptr && this->loginPassword_ != nullptr && this->multiAzPolicy_ != nullptr && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr
        && this->period_ != nullptr && this->periodUnit_ != nullptr && this->platform_ != nullptr && this->privatePoolOptions_ != nullptr && this->ramRoleName_ != nullptr
        && this->rdsInstances_ != nullptr && this->resourcePoolOptions_ != nullptr && this->scalingPolicy_ != nullptr && this->securityGroupId_ != nullptr && this->securityGroupIds_ != nullptr
        && this->securityHardeningOs_ != nullptr && this->socEnabled_ != nullptr && this->spotInstancePools_ != nullptr && this->spotInstanceRemedy_ != nullptr && this->spotPriceLimit_ != nullptr
        && this->spotStrategy_ != nullptr && this->systemDiskBurstingEnabled_ != nullptr && this->systemDiskCategories_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskEncryptAlgorithm_ != nullptr
        && this->systemDiskEncrypted_ != nullptr && this->systemDiskKmsKeyId_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskProvisionedIops_ != nullptr && this->systemDiskSize_ != nullptr
        && this->tags_ != nullptr && this->vswitchIds_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // cisEnabled Field Functions 
    bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
    void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
    inline bool cisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<Models::DataDisk> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<Models::DataDisk>) };
    inline vector<Models::DataDisk> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<Models::DataDisk>) };
    inline CreateClusterNodePoolRequestScalingGroup& setDataDisks(const vector<Models::DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateClusterNodePoolRequestScalingGroup& setDataDisks(vector<Models::DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // desiredSize Field Functions 
    bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
    void deleteDesiredSize() { this->desiredSize_ = nullptr;};
    inline int64_t desiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setDesiredSize(int64_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceMetadataOptions Field Functions 
    bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
    void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
    inline const Models::InstanceMetadataOptions & instanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline Models::InstanceMetadataOptions instanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstanceMetadataOptions(const Models::InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstanceMetadataOptions(Models::InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


    // instancePatterns Field Functions 
    bool hasInstancePatterns() const { return this->instancePatterns_ != nullptr;};
    void deleteInstancePatterns() { this->instancePatterns_ = nullptr;};
    inline const vector<Models::InstancePatterns> & instancePatterns() const { DARABONBA_PTR_GET_CONST(instancePatterns_, vector<Models::InstancePatterns>) };
    inline vector<Models::InstancePatterns> instancePatterns() { DARABONBA_PTR_GET(instancePatterns_, vector<Models::InstancePatterns>) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstancePatterns(const vector<Models::InstancePatterns> & instancePatterns) { DARABONBA_PTR_SET_VALUE(instancePatterns_, instancePatterns) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstancePatterns(vector<Models::InstancePatterns> && instancePatterns) { DARABONBA_PTR_SET_RVALUE(instancePatterns_, instancePatterns) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateClusterNodePoolRequestScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int64_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setOnDemandBaseCapacity(int64_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int64_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setOnDemandPercentageAboveBaseCapacity(int64_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions) };
    inline Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setPrivatePoolOptions(const Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setPrivatePoolOptions(Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline CreateClusterNodePoolRequestScalingGroup& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline CreateClusterNodePoolRequestScalingGroup& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions) };
    inline Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setResourcePoolOptions(const Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline CreateClusterNodePoolRequestScalingGroup& setResourcePoolOptions(Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateClusterNodePoolRequestScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateClusterNodePoolRequestScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int64_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setSpotInstancePools(int64_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline const vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit> & spotPriceLimit() const { DARABONBA_PTR_GET_CONST(spotPriceLimit_, vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit>) };
    inline vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit> spotPriceLimit() { DARABONBA_PTR_GET(spotPriceLimit_, vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit>) };
    inline CreateClusterNodePoolRequestScalingGroup& setSpotPriceLimit(const vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit> & spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };
    inline CreateClusterNodePoolRequestScalingGroup& setSpotPriceLimit(vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit> && spotPriceLimit) { DARABONBA_PTR_SET_RVALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskEncryptAlgorithm Field Functions 
    bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
    void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
    inline string systemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKmsKeyId Field Functions 
    bool hasSystemDiskKmsKeyId() const { return this->systemDiskKmsKeyId_ != nullptr;};
    void deleteSystemDiskKmsKeyId() { this->systemDiskKmsKeyId_ = nullptr;};
    inline string systemDiskKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKmsKeyId_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskKmsKeyId(string systemDiskKmsKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKmsKeyId_, systemDiskKmsKeyId) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline CreateClusterNodePoolRequestScalingGroup& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::CreateClusterNodePoolRequestScalingGroupTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::CreateClusterNodePoolRequestScalingGroupTags>) };
    inline vector<Models::CreateClusterNodePoolRequestScalingGroupTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::CreateClusterNodePoolRequestScalingGroupTags>) };
    inline CreateClusterNodePoolRequestScalingGroup& setTags(const vector<Models::CreateClusterNodePoolRequestScalingGroupTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClusterNodePoolRequestScalingGroup& setTags(vector<Models::CreateClusterNodePoolRequestScalingGroupTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline CreateClusterNodePoolRequestScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline CreateClusterNodePoolRequestScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // Specifies whether to enable auto-renewal for nodes in the node pool. This parameter takes effect only when you set `instance_charge_type` to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: disables auto-renewal.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period. Valid values:
    // 
    // *   Valid values when PeriodUnit is set to Week: 1, 2, and 3.
    // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // This parameter is deprecated. Use security_hardening_os instead.
    std::shared_ptr<bool> cisEnabled_ = nullptr;
    // Specifies whether to automatically create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created due to reasons such as the price or insufficient inventory. This parameter takes effect when you set `multi_az_policy` to `COST_OPTIMIZED`. Valid values:
    // 
    // *   `true`: automatically creates pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created.
    // *   `false`: does not create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created.
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The configurations of the data disks that are attached to nodes in the node pool.
    std::shared_ptr<vector<Models::DataDisk>> dataDisks_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    // The expected number of nodes in the node pool.
    std::shared_ptr<int64_t> desiredSize_ = nullptr;
    // The custom image ID. By default, the image provided by Container Service for Kubernetes (ACK) is used.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the OS image. You must specify this parameter or `platform`. Valid values:
    // 
    // *   `AliyunLinux`: Alibaba Cloud Linux 2.
    // *   `AliyunLinuxSecurity`: Alibaba Cloud Linux 2 (UEFI).
    // *   `AliyunLinux3`: Alibaba Cloud Linux 3
    // *   `AliyunLinux3Arm64`: Alibaba Cloud Linux 3 for ARM.
    // *   `AliyunLinux3Security`: Alibaba Cloud Linux 3 for ARM.
    // *   `CentOS`: CentOS.
    // *   `Windows`: Windows.
    // *   `WindowsCore`: Windows Core.
    // *   `ContainerOS`: ContainerOS.
    // *   `AliyunLinux3ContainerOptimized`: Alibaba Cloud Linux 3 Container-optimized.
    std::shared_ptr<string> imageType_ = nullptr;
    // The billing method of nodes in the node pool. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    // 
    // Default value: `PostPaid`
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<Models::InstanceMetadataOptions> instanceMetadataOptions_ = nullptr;
    // The instance attributes.
    std::shared_ptr<vector<Models::InstancePatterns>> instancePatterns_ = nullptr;
    // The instance types of nodes in the node pool. When the system adds a node to the node pool, the system selects the most appropriate one from the specified instance types for the node. You can specify 1 to 10 instance types.
    // 
    // >  To ensure high availability, we recommend that you specify multiple instance types.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The metering method of the public IP address. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth.
    // *   PayByTraffic: pay-by-data-transfer.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum outbound bandwidth of the public IP address. Unit: Mbit/s. Valid values: 1 to 100.
    std::shared_ptr<int64_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the key pair used to log on to nodes in the node pool. You must set this parameter or `login_password`.
    // 
    // >  If you select ContainerOS as the OS of nodes in the node pool, you must specify `key_pair`.
    std::shared_ptr<string> keyPair_ = nullptr;
    // Specifies whether to allow a non-root user to log on to an ECS instance that is added to the node pool.
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
    // The password for SSH logon. You must specify this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The ECS instance scaling policy for the multi-zone scaling group. Valid values:
    // 
    // *   `PRIORITY`: ECS instances are scaled based on the value of VSwitchIds.N. If an ECS instance cannot be created in the zone where the vSwitch that has the highest priority resides, the system creates the ECS instance in the zone where the vSwitch that has the next highest priority resides.
    // 
    // *   `COST_OPTIMIZED`: ECS instances are created based on the vCPU unit price in ascending order. Preemptible instances are preferably created if preemptible instance types are specified in the scaling configurations. You can set the `CompensateWithOnDemand` parameter to specify whether to automatically create pay-as-you-go instances when preemptible instances cannot be created due to insufficient inventory.
    // 
    //     **
    // 
    //     **Note** `COST_OPTIMIZED` takes effect only when multiple instance types are specified or at least one preemptible instance type is specified.
    // 
    // *   `BALANCE`: ECS instances are evenly distributed across multiple zones for the scaling group. If ECS instances become imbalanced among multiple zones due to insufficient inventory, you can call the [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html) operation of Auto Scaling to evenly distribute the ECS instances among zones.
    // 
    // Default value: `PRIORITY`.
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be kept in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, the system preferably creates pay-as-you-go instances.
    std::shared_ptr<int64_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances among the extra instances that exceed the number specified by `on_demand_base_capacity`. Valid values: 0 to 100.
    std::shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // The subscription duration of nodes in the node pool. This parameter takes effect and is required if you set `instance_charge_type` to `PrePaid`.
    // 
    // *   If `period_unit` is set to Week, the valid values of `period` are 1, 2, 3, and 4.
    // *   If `period_unit` is set to Month, the valid values of `period` are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The billing cycle of nodes in the node pool. This parameter takes effect and is required only when you set `instance_charge_type` to `PrePaid`. Valid values:
    // 
    // *   `Month`: The subscription duration is measured in months.
    // *   `Week`: The subscription duration is measured in weeks.
    // 
    // Default value: `Month`.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The operating system distribution. Valid values:
    // 
    // *   `CentOS`
    // *   `AliyunLinux`
    // *   `Windows`
    // *   `WindowsCore`
    // 
    // Default value: `AliyunLinux`.
    std::shared_ptr<string> platform_ = nullptr;
    // The configurations of the private node pool.
    std::shared_ptr<Models::CreateClusterNodePoolRequestScalingGroupPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // The name of the worker RAM role.
    // 
    // *   If you do not specify this parameter, the default worker RAM role created by the cluster is used.
    // *   The specified RAM role must be a **regular service role** and the **Select Trusted Service** parameter must be set to **Elastic Compute Service**. For more information, see [Create a normal service role](https://help.aliyun.com/document_detail/116800.html). If the specified RAM role is not the default worker RAM role created by the cluster, the name of the RAM role cannot start with `KubernetesMasterRole-` or `KubernetesWorkerRole-`.
    // 
    // >  This parameter is available only for ACK managed clusters that run Kubernetes 1.22 or later.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The IDs of ApsaraDB RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    std::shared_ptr<Models::CreateClusterNodePoolRequestScalingGroupResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The scaling mode of the scaling group. Valid values:
    // 
    // *   `release`: the standard mode. ECS instances are created and released based on resource usage.
    // *   `recycle`: the swift mode. ECS instances are created, stopped, or started during scaling events. This reduces the time required for the next scale-out event. When the instance is stopped, you are charged only for the storage service. This does not apply to ECS instances that are attached with local disks.
    // 
    // Default value: `release`.
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The ID of the security group to which you want to add the node pool. You must specify this parameter or the `security_group_ids` parameter. We recommend that you specify `security_group_ids`.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of security groups. You must specify this parameter or `security_group_id`. We recommend that you specify `security_group_ids`. If you specify both `security_group_id` and `security_group_ids`, `security_group_ids` is used.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // Indicates whether Alibaba Cloud Linux Security Hardening is enabled. Valid values:
    // 
    // *   `true`: enables Alibaba Cloud Linux Security Hardening.
    // *   `false`: disables Alibaba Cloud Linux Security Hardening.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // Specifies whether to enable MLPS Security Hardening. You can enable security hardening based on Multi-Level Protection Scheme (MLPS) only when Alibaba Cloud Linux 2 or Alibaba Cloud Linux 3 is installed on nodes. Alibaba Cloud provides standards for baseline checks and a scanner to ensure the compliance of Alibaba Cloud Linux 2 and Alibaba Cloud Linux 3 images with the level 3 standards of MLPS 2.0.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // The number of instance types that are available for creating preemptible instances. Auto Scaling creates preemptible instances of multiple instance types that are available at the lowest cost. Valid values: 1 to 10.
    std::shared_ptr<int64_t> spotInstancePools_ = nullptr;
    // Indicates whether preemptible instances can be supplemented. If you set this parameter to true, when the scaling group receives a system message indicating that a preemptible instance is to be reclaimed, the scaling group attempts to create a new instance to replace this instance. Valid values:
    // 
    // *   `true`: enables the supplementation of preemptible instances.
    // *   `false`: disables the supplementation of preemptible instances.
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The instance type of preemptible instances and the price cap for the instance type.
    std::shared_ptr<vector<Models::CreateClusterNodePoolRequestScalingGroupSpotPriceLimit>> spotPriceLimit_ = nullptr;
    // The bidding policy of preemptible instances. Valid values:
    // 
    // *   `NoSpot`: non-preemptible.
    // *   `SpotWithPriceLimit`: specifies the highest bid for the preemptible instance.
    // *   `SpotAsPriceGo`: automatically submits bids based on the up-to-date market price.
    // 
    // For more information, see [Use preemptible instances](https://help.aliyun.com/document_detail/165053.html).
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   true: enables the burst feature.
    // *   false: disables the burst feature.
    // 
    // This parameter is available only when `SystemDiskCategory` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The categories of the system disk for nodes. The system attempts to create system disks of a disk category with a lower priority if the disk category with a higher priority is unavailable. Valid values:
    // 
    // *   `cloud`: basic disk.
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: ESSD.
    // *   `cloud_auto`: ESSD AutoPL disk.
    // *   `cloud_essd_entry`: ESSD Entry disk.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The category of the system disk. Valid values:
    // 
    // *   `cloud`: basic disk.
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: ESSD.
    // *   `cloud_auto`: ESSD AutoPL disk.
    // *   `cloud_essd_entry`: ESSD Entry disk.
    // 
    // Default value: `cloud_efficiency`.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The encryption algorithm that is used to encrypt the system disk. Set the value to aes-256.
    std::shared_ptr<string> systemDiskEncryptAlgorithm_ = nullptr;
    // Specifies whether to encrypt the system disk. true: encrypts the system disk. false: does not encrypt the system disk.
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    // The ID of the KMS key that is used to encrypt the system disk.
    std::shared_ptr<string> systemDiskKmsKeyId_ = nullptr;
    // The PL of the system disk. This parameter takes effect only for an ESSD.
    // 
    // *   PL0: moderate maximum concurrent I/O performance and low I/O latency.
    // *   PL1: moderate maximum concurrent I/O performance and low I/O latency.
    // *   PL2: high maximum concurrent I/O performance and low I/O latency.
    // *   PL3: ultra-high maximum concurrent I/O performance and ultra-low I/O latency.
    // 
    // >  Alibaba Cloud disks support the preceding PLs. However, when you create a disk, the available PLs vary based on the ECS instance type that you selected. For more information, see [Overview of ECS instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The preset IOPS of the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // This parameter is supported only when `SystemDiskCategory` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The size of the system disk. Unit: GiB.
    // 
    // Valid values: 20 to 20248.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    // The tags that you want to add only to ECS instances.
    // 
    // The tag key must be unique and cannot exceed 128 characters in length. The tag key and value cannot start with aliyun or acs: or contain https:// or http://.
    std::shared_ptr<vector<Models::CreateClusterNodePoolRequestScalingGroupTags>> tags_ = nullptr;
    // The vSwitch IDs. You can specify one to eight vSwitch IDs.
    // 
    // >  To ensure high availability, we recommend that you select vSwitches that reside in different zones.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
