// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyScalingGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyScalingGroup& obj) { 
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
      DARABONBA_PTR_TO_JSON(ram_policy, ramPolicy_);
      DARABONBA_PTR_TO_JSON(ram_role_name, ramRoleName_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_TO_JSON(resource_pool_options, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(scaling_group_id, scalingGroupId_);
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyScalingGroup& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ram_policy, ramPolicy_);
      DARABONBA_PTR_FROM_JSON(ram_role_name, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_FROM_JSON(resource_pool_options, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(scaling_group_id, scalingGroupId_);
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
    DescribeClusterNodePoolDetailResponseBodyScalingGroup() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroup(const DescribeClusterNodePoolDetailResponseBodyScalingGroup &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroup(DescribeClusterNodePoolDetailResponseBodyScalingGroup &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyScalingGroup() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroup& operator=(const DescribeClusterNodePoolDetailResponseBodyScalingGroup &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroup& operator=(DescribeClusterNodePoolDetailResponseBodyScalingGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->cisEnabled_ != nullptr && this->compensateWithOnDemand_ != nullptr && this->dataDisks_ != nullptr && this->deploymentsetId_ != nullptr
        && this->desiredSize_ != nullptr && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceMetadataOptions_ != nullptr
        && this->instancePatterns_ != nullptr && this->instanceTypes_ != nullptr && this->internetChargeType_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->keyPair_ != nullptr
        && this->loginAsNonRoot_ != nullptr && this->loginPassword_ != nullptr && this->multiAzPolicy_ != nullptr && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr
        && this->period_ != nullptr && this->periodUnit_ != nullptr && this->platform_ != nullptr && this->privatePoolOptions_ != nullptr && this->ramPolicy_ != nullptr
        && this->ramRoleName_ != nullptr && this->rdsInstances_ != nullptr && this->resourcePoolOptions_ != nullptr && this->scalingGroupId_ != nullptr && this->scalingPolicy_ != nullptr
        && this->securityGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->securityHardeningOs_ != nullptr && this->socEnabled_ != nullptr && this->spotInstancePools_ != nullptr
        && this->spotInstanceRemedy_ != nullptr && this->spotPriceLimit_ != nullptr && this->spotStrategy_ != nullptr && this->systemDiskBurstingEnabled_ != nullptr && this->systemDiskCategories_ != nullptr
        && this->systemDiskCategory_ != nullptr && this->systemDiskEncryptAlgorithm_ != nullptr && this->systemDiskEncrypted_ != nullptr && this->systemDiskKmsKeyId_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr
        && this->systemDiskProvisionedIops_ != nullptr && this->systemDiskSize_ != nullptr && this->tags_ != nullptr && this->vswitchIds_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // cisEnabled Field Functions 
    bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
    void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
    inline bool cisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<Models::DataDisk> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<Models::DataDisk>) };
    inline vector<Models::DataDisk> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<Models::DataDisk>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setDataDisks(const vector<Models::DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setDataDisks(vector<Models::DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // desiredSize Field Functions 
    bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
    void deleteDesiredSize() { this->desiredSize_ = nullptr;};
    inline int64_t desiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setDesiredSize(int64_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceMetadataOptions Field Functions 
    bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
    void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
    inline const Models::InstanceMetadataOptions & instanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline Models::InstanceMetadataOptions instanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstanceMetadataOptions(const Models::InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstanceMetadataOptions(Models::InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


    // instancePatterns Field Functions 
    bool hasInstancePatterns() const { return this->instancePatterns_ != nullptr;};
    void deleteInstancePatterns() { this->instancePatterns_ = nullptr;};
    inline const vector<Models::InstancePatterns> & instancePatterns() const { DARABONBA_PTR_GET_CONST(instancePatterns_, vector<Models::InstancePatterns>) };
    inline vector<Models::InstancePatterns> instancePatterns() { DARABONBA_PTR_GET(instancePatterns_, vector<Models::InstancePatterns>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstancePatterns(const vector<Models::InstancePatterns> & instancePatterns) { DARABONBA_PTR_SET_VALUE(instancePatterns_, instancePatterns) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstancePatterns(vector<Models::InstancePatterns> && instancePatterns) { DARABONBA_PTR_SET_RVALUE(instancePatterns_, instancePatterns) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int64_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setOnDemandBaseCapacity(int64_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int64_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setOnDemandPercentageAboveBaseCapacity(int64_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setPrivatePoolOptions(const Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setPrivatePoolOptions(Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // ramPolicy Field Functions 
    bool hasRamPolicy() const { return this->ramPolicy_ != nullptr;};
    void deleteRamPolicy() { this->ramPolicy_ = nullptr;};
    inline string ramPolicy() const { DARABONBA_PTR_GET_DEFAULT(ramPolicy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setRamPolicy(string ramPolicy) { DARABONBA_PTR_SET_VALUE(ramPolicy_, ramPolicy) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions & resourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions) };
    inline Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions resourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setResourcePoolOptions(const Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setResourcePoolOptions(Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int64_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSpotInstancePools(int64_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline const vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit> & spotPriceLimit() const { DARABONBA_PTR_GET_CONST(spotPriceLimit_, vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit>) };
    inline vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit> spotPriceLimit() { DARABONBA_PTR_GET(spotPriceLimit_, vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSpotPriceLimit(const vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit> & spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSpotPriceLimit(vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit> && spotPriceLimit) { DARABONBA_PTR_SET_RVALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskEncryptAlgorithm Field Functions 
    bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
    void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
    inline string systemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKmsKeyId Field Functions 
    bool hasSystemDiskKmsKeyId() const { return this->systemDiskKmsKeyId_ != nullptr;};
    void deleteSystemDiskKmsKeyId() { this->systemDiskKmsKeyId_ = nullptr;};
    inline string systemDiskKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKmsKeyId_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskKmsKeyId(string systemDiskKmsKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKmsKeyId_, systemDiskKmsKeyId) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // Indicates whether auto-renewal is enabled for the nodes in the node pool. This parameter takes effect only when `instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: Auto-renewal is enabled.
    // *   `false`: Auto-renewal is disabled.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The duration of the auto-renewal. This parameter takes effect and is required only when `instance_charge_type` is set to `PrePaid`.
    // 
    // If you specify `PeriodUnit=Month`, the valid values are 1, 2, 3, 6, and 12.
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // [**Deprecated**] Please use the parameter security_hardening_os instead.
    std::shared_ptr<bool> cisEnabled_ = nullptr;
    // Indicates whether pay-as-you-go instances are automatically created to meet the required number of ECS instances if preemptible instances cannot be created due to reasons such as cost or insufficient inventory. This parameter takes effect when `multi_az_policy` is set to `COST_OPTIMIZED`. Valid values:
    // 
    // *   `true`: Pay-as-you-go instances are automatically created to meet the required number of ECS instances if preemptible instances cannot be created.
    // *   `false`: Pay-as-you-go instances are not automatically created to meet the required number of ECS instances if preemptible instances cannot be created.
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The configurations of the data disks that are attached to the nodes in the node pool. The configurations include the disk category and disk size.
    std::shared_ptr<vector<Models::DataDisk>> dataDisks_ = nullptr;
    // The ID of the deployment set to which the ECS instances in the node pool belong.
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    // The expected number of nodes in the node pool.
    std::shared_ptr<int64_t> desiredSize_ = nullptr;
    // The ID of the custom image. You can call the `DescribeKubernetesVersionMetadata` operation to query the images supported by ACK.
    std::shared_ptr<string> imageId_ = nullptr;
    // Operating system image type.
    std::shared_ptr<string> imageType_ = nullptr;
    // The billing method of the nodes in the node pool. Valid values:
    // 
    // *   `PrePaid`: the subscription billing method.
    // *   `PostPaid`: the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<Models::InstanceMetadataOptions> instanceMetadataOptions_ = nullptr;
    // The instance properties.
    std::shared_ptr<vector<Models::InstancePatterns>> instancePatterns_ = nullptr;
    // A list of instance types. You can select multiple instance types. When the system needs to create a node, it starts from the first instance type until the node is created. The instance type that is used to create the node varies based on the actual instance stock.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The billing method of the public IP address of the node.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum outbound bandwidth of the public IP address of the node. Unit: Mbit/s. Valid values: 1 to 100.
    std::shared_ptr<int64_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the key pair. You must set this parameter or the `login_password` parameter. You must set `key_pair` if the node pool is a managed node pool.
    std::shared_ptr<string> keyPair_ = nullptr;
    // Whether the popped ECS instance uses a non-root user for login.
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
    // The password for SSH logon. You must set this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // For security purposes, the returned password is encrypted.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The ECS instance scaling policy for a multi-zone scaling group. Valid values:
    // 
    // *   `PRIORITY`: the scaling group is scaled based on the VSwitchIds.N parameter. If an ECS instance cannot be created in the zone where the vSwitch that has the highest priority resides, Auto Scaling creates the ECS instance in the zone where the vSwitch that has the next highest priority resides.
    // 
    // *   `COST_OPTIMIZED`: ECS instances are created based on the vCPU unit price in ascending order. Preemptible instances are preferably created when preemptible instance types are specified in the scaling configuration. You can set the `CompensateWithOnDemand` parameter to specify whether to automatically create pay-as-you-go instances when preemptible instances cannot be created due to insufficient resources.
    // 
    //     **
    // 
    //     **Note**The `COST_OPTIMIZED` setting takes effect only when multiple instance types are specified or at least one instance type is specified for preemptible instances.
    // 
    // *   `BALANCE`: ECS instances are evenly distributed across multiple zones specified by the scaling group. If ECS instances become imbalanced among multiple zones due to insufficient inventory, you can call the RebalanceInstances operation of Auto Scaling to balance the instance distribution among zones. For more information, see [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html).
    // 
    // Default value: `PRIORITY`.
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be kept in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferably creates pay-as-you-go instances.
    std::shared_ptr<int64_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances among the extra instances that exceed the number specified by `on_demand_base_capacity`. Valid values: 0 to 100.
    std::shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // The subscription duration of worker nodes. This parameter takes effect and is required only when `instance_charge_type` is set to `PrePaid`.
    // 
    // If `PeriodUnit=Month` is specified, the valid values are 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The billing cycle of the nodes. This parameter is required if `instance_charge_type` is set to `PrePaid`.
    // 
    // Valid value: `Month`.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The release version of the operating system. Valid values:
    // 
    // *   `CentOS`
    // *   `AliyunLinux`
    // *   `Windows`
    // *   `WindowsCore`
    std::shared_ptr<string> platform_ = nullptr;
    // The configuration of the private node pool.
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // The name of the worker Resource Access Management (RAM) role. The RAM role is assigned to the worker nodes of the cluster to allow the worker nodes to manage ECS instances.
    std::shared_ptr<string> ramPolicy_ = nullptr;
    // Worker RAM role name.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // After you specify the list of RDS instances, the ECS instances in the cluster are automatically added to the whitelist of the RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    std::shared_ptr<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions> resourcePoolOptions_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scaling mode of the scaling group. Valid values:
    // 
    // *   `release`: the standard mode. ECS instances are created and released based on resource usage.
    // *   `recycle`: the swift mode. ECS instances are created, stopped, or started during scaling events. This reduces the time required for the next scale-out event. When the instance is stopped, you are charged only for the storage service. This does not apply to ECS instances that are attached with local disks.
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The ID of the security group to which the node pool is added. If the node pool is added to multiple security groups, the first ID in the value of `security_group_ids` is returned.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the security groups to which the node pool is added.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // Alibaba Cloud OS security hardening. Values:
    // - `true`: Enable Alibaba Cloud OS security hardening. 
    // - `false`: Do not enable Alibaba Cloud OS security hardening.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // Indicates whether to enable security reinforcement compliant with the hardening standards. This option is available only when the system image is set to Alibaba Cloud Linux 2 or Alibaba Cloud Linux 3. Alibaba Cloud provides baseline check standards and scanning programs compliant with Grade 3, Version 2.0 of the hardening standards for both Alibaba Cloud Linux 2 and Alibaba Cloud Linux 3 images.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // The number of instance types that are available for creating preemptible instances. Auto Scaling creates preemptible instances of multiple instance types that are available at the lowest cost. Valid values: 1 to 10.
    std::shared_ptr<int64_t> spotInstancePools_ = nullptr;
    // Indicates whether preemptible instances are supplemented when the number of preemptible instances drops below the specified minimum number. If this parameter is set to true, when the scaling group receives a system message that a preemptible instance is to be reclaimed, the scaling group attempts to create a new instance to replace this instance. Valid values: Valid values:
    // 
    // *   `true`: Supplementation of preemptible instances is enabled.
    // *   `false`: Supplementation of preemptible instances is disabled.
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The bid configurations of preemptible instances.
    std::shared_ptr<vector<Models::DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit>> spotPriceLimit_ = nullptr;
    // The type of preemptible instance. Valid values:
    // 
    // *   NoSpot: a non-preemptible instance.
    // *   SpotWithPriceLimit: a preemptible instance that is configured with the highest bid price.
    // *   SpotAsPriceGo: a preemptible instance for which the system automatically bids based on the current market price.
    // 
    // For more information, see [Preemptible instances](https://help.aliyun.com/document_detail/157759.html).
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // Indicates whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   true: enables the burst feature for the system disk. The performance burst feature allows ESSD AutoPL disks to burst their performance when spikes in read/write workloads occur and reduce the performance to the baseline level at the end of workload spikes.
    // *   false: does not enable the burst feature for the system disk.
    // 
    // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The categories of the system disk for nodes. The system attempts to create system disks of a disk category with a lower priority if the disk category with a higher priority is unavailable. Valid values: Valid values:
    // 
    // *   `cloud`: basic disk.
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: Enterprise SSD (ESSD).
    // *   `cloud_auto`: ESSD AutoPL disk.
    // *   `cloud_essd_entry`: ESSD Entry disk.
    // 
    // Default value: `cloud_efficiency`.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The system disk type. Valid values:
    // 
    // *   `cloud`: basic disk
    // *   `cloud_efficiency`: ultra disk
    // *   `cloud_ssd`: standard SSD
    // *   `cloud_essd`: Enterprise SSD (ESSD)
    // *   `cloud_auto`: ESSD AutoPL disk
    // *   `cloud_essd_entry`: ESSD Entry disk
    // 
    // Default value: `cloud_efficiency`.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The encryption algorithm that is used to encrypt the system disk. Set the value to aes-256.
    std::shared_ptr<string> systemDiskEncryptAlgorithm_ = nullptr;
    // Specifies whether to encrypt the system disk. Valid values: Valid values:
    // 
    // *   `true`: encrypts the system disk.
    // *   `false`: does not encrypt the system disk.
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    // System disk\\"s KMS key ID.
    std::shared_ptr<string> systemDiskKmsKeyId_ = nullptr;
    // The performance level (PL) of the system disk that you want to use for the node. This parameter takes effect only for enhanced SSDs (ESSDs).
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // Pre-configured read and write IOPS for the system disk of the node, configured when the disk type is cloud_auto.
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The system disk size of a node. Unit: GiB.
    // 
    // Valid values: 20 to 500.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    // The labels that you want to add only to ECS instances.
    // 
    // The label key must be unique and cannot exceed 128 characters in length. The label key and value cannot start with aliyun or acs: or contain https:// or http://.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
    // The IDs of vSwitches. You can specify 1 to 20 vSwitches.
    // 
    // > We recommend that you select vSwitches in different zones to ensure high availability.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
