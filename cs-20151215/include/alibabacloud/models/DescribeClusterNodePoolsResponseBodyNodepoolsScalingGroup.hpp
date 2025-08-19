// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions.hpp>
#include <alibabacloud/models/DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit.hpp>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& obj) { 
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
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->cisEnabled_ != nullptr && this->compensateWithOnDemand_ != nullptr && this->dataDisks_ != nullptr && this->deploymentsetId_ != nullptr
        && this->desiredSize_ != nullptr && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instanceChargeType_ != nullptr && this->instancePatterns_ != nullptr
        && this->instanceTypes_ != nullptr && this->internetChargeType_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->keyPair_ != nullptr && this->loginAsNonRoot_ != nullptr
        && this->loginPassword_ != nullptr && this->multiAzPolicy_ != nullptr && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->platform_ != nullptr && this->privatePoolOptions_ != nullptr && this->ramPolicy_ != nullptr && this->ramRoleName_ != nullptr
        && this->rdsInstances_ != nullptr && this->scalingGroupId_ != nullptr && this->scalingPolicy_ != nullptr && this->securityGroupId_ != nullptr && this->securityGroupIds_ != nullptr
        && this->securityHardeningOs_ != nullptr && this->socEnabled_ != nullptr && this->spotInstancePools_ != nullptr && this->spotInstanceRemedy_ != nullptr && this->spotPriceLimit_ != nullptr
        && this->spotStrategy_ != nullptr && this->systemDiskBurstingEnabled_ != nullptr && this->systemDiskCategories_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskEncryptAlgorithm_ != nullptr
        && this->systemDiskEncrypted_ != nullptr && this->systemDiskKmsKeyId_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskProvisionedIops_ != nullptr && this->systemDiskSize_ != nullptr
        && this->tags_ != nullptr && this->vswitchIds_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // cisEnabled Field Functions 
    bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
    void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
    inline bool cisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<Models::DataDisk> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<Models::DataDisk>) };
    inline vector<Models::DataDisk> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<Models::DataDisk>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setDataDisks(const vector<Models::DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setDataDisks(vector<Models::DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // desiredSize Field Functions 
    bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
    void deleteDesiredSize() { this->desiredSize_ = nullptr;};
    inline int64_t desiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setDesiredSize(int64_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instancePatterns Field Functions 
    bool hasInstancePatterns() const { return this->instancePatterns_ != nullptr;};
    void deleteInstancePatterns() { this->instancePatterns_ = nullptr;};
    inline const vector<Models::InstancePatterns> & instancePatterns() const { DARABONBA_PTR_GET_CONST(instancePatterns_, vector<Models::InstancePatterns>) };
    inline vector<Models::InstancePatterns> instancePatterns() { DARABONBA_PTR_GET(instancePatterns_, vector<Models::InstancePatterns>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInstancePatterns(const vector<Models::InstancePatterns> & instancePatterns) { DARABONBA_PTR_SET_VALUE(instancePatterns_, instancePatterns) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInstancePatterns(vector<Models::InstancePatterns> && instancePatterns) { DARABONBA_PTR_SET_RVALUE(instancePatterns_, instancePatterns) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int64_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setOnDemandBaseCapacity(int64_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int64_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setOnDemandPercentageAboveBaseCapacity(int64_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions) };
    inline Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setPrivatePoolOptions(const Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setPrivatePoolOptions(Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // ramPolicy Field Functions 
    bool hasRamPolicy() const { return this->ramPolicy_ != nullptr;};
    void deleteRamPolicy() { this->ramPolicy_ = nullptr;};
    inline string ramPolicy() const { DARABONBA_PTR_GET_DEFAULT(ramPolicy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setRamPolicy(string ramPolicy) { DARABONBA_PTR_SET_VALUE(ramPolicy_, ramPolicy) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int64_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSpotInstancePools(int64_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline const vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit> & spotPriceLimit() const { DARABONBA_PTR_GET_CONST(spotPriceLimit_, vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit>) };
    inline vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit> spotPriceLimit() { DARABONBA_PTR_GET(spotPriceLimit_, vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSpotPriceLimit(const vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit> & spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSpotPriceLimit(vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit> && spotPriceLimit) { DARABONBA_PTR_SET_RVALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskEncryptAlgorithm Field Functions 
    bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
    void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
    inline string systemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKmsKeyId Field Functions 
    bool hasSystemDiskKmsKeyId() const { return this->systemDiskKmsKeyId_ != nullptr;};
    void deleteSystemDiskKmsKeyId() { this->systemDiskKmsKeyId_ = nullptr;};
    inline string systemDiskKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKmsKeyId_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskKmsKeyId(string systemDiskKmsKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKmsKeyId_, systemDiskKmsKeyId) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // Specifies whether to enable auto-renewal for the nodes in the node pool. This parameter takes effect only if `instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period. Valid value:
    // 
    // *   Valid values when PeriodUnit is set to Week: 1, 2, and 3.
    // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // This parameter is deprecated.
    // 
    // Use security_hardening_os instead.
    std::shared_ptr<bool> cisEnabled_ = nullptr;
    // Specifies whether to automatically create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created due to reasons such as the cost or insufficient inventory. This parameter takes effect if you set `multi_az_policy` to `COST_OPTIMIZED` Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The configurations of the data disks that are mounted to the nodes in the node pool. The configurations include the disk category and disk size.
    std::shared_ptr<vector<Models::DataDisk>> dataDisks_ = nullptr;
    // The deployment set ID.
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    // The expected number of nodes in the node pool.
    std::shared_ptr<int64_t> desiredSize_ = nullptr;
    // The ID of the custom image. You can call the `DescribeKubernetesVersionMetadata` operation to query the images supported by ACK.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the OS image.
    // 
    // *   `AliyunLinux`: Alibaba Cloud Linux 2.
    // *   `AliyunLinuxSecurity`: Alibaba Cloud Linux 2 (UEFI).
    // *   `AliyunLinux3`: Alibaba Cloud Linux 3
    // *   `AliyunLinux3Arm64`: Alibaba Cloud Linux 3 (ARM).
    // *   `AliyunLinux3Security`: Alibaba Cloud Linux 3 (UEFI).
    // *   `CentOS`: CentOS.
    // *   `Windows`: Windows.
    // *   `WindowsCore`: Windows Core.
    // *   `ContainerOS`: ContainerOS.
    // *   `AliyunLinux3ContainerOptimized`: Alibaba Cloud Linux 3 Container-optimized.
    std::shared_ptr<string> imageType_ = nullptr;
    // The billing method of the nodes in the node pool. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The attribute configurations of the instance.
    std::shared_ptr<vector<Models::InstancePatterns>> instancePatterns_ = nullptr;
    // The list of instance types. You can select multiple instance types. When the system needs to create a node, it starts from the first instance type until the node is created. The instance type that is used to create the node varies based on the inventory.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The metering method of the public IP address.
    // 
    // *   PayByBandwidth: pay-by-data-transfer.
    // *   PayByTraffic: pay-by-data-transfer.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum outbound bandwidth of the public IP address. Unit: Mbit/s. Valid values: 1 to 100.
    std::shared_ptr<int64_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the key pair. You must specify this parameter or the `login_password` parameter.
    // 
    // You must specify the `key_pair` parameter if the node pool is a managed node pool.
    std::shared_ptr<string> keyPair_ = nullptr;
    // Indicates whether a non-root user can log on to an Elastic Compute Service (ECS) instance added to the node pool.
    // 
    // *   true: Logs in as a non-root user (ecs-user).
    // *   false: Logs in as the root user.
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
    // The password for SSH logon. You must specify this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // The returned password is encrypted to ensure security.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The ECS instance scaling policy for the multi-zone scaling group. Valid values:
    // 
    // *   `PRIORITY`: ECS instances are created based on the VSwitchIds.N parameter. If Auto Scaling fails to create an ECS instance in the zone of the vSwitch that has the highest priority, Auto Scaling attempts to create the ECS instance in the zone of the vSwitch that has a lower priority.
    // 
    // *   `COST_OPTIMIZED`: ECS instances are created based on the vCPU unit price in ascending order. Preemptible instances are preferably created when preemptible instance types are specified in the scaling configuration. You can specify `CompensateWithOnDemand` to specify whether to automatically create pay-as-you-go instances if preemptible instances cannot be created due to insufficient resources.
    // 
    //     **
    // 
    //     **Note** `COST_OPTIMIZED` takes effect only if multiple instance types are specified or at least one preemptible instance type is specified.
    // 
    // *   `BALANCE`: ECS instances are evenly distributed across multiple zones specified by the scaling group. If the distribution of ECS instances across zones is not balanced due to reasons such as insufficient inventory, you can call the `RebalanceInstances` operation to evenly distribute the ECS instances across zones. For more information, see [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html).
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be kept in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is smaller than the value of this parameter, Auto Scaling preferably creates pay-as-you-go instances
    std::shared_ptr<int64_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances among the extra instances that exceed the number specified by `on_demand_base_capacity`. Valid values: 0 to 100.
    std::shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // The subscription duration of the nodes in the node pool. This parameter is available and required only when `instance_charge_type` is set to `PrePaid`.
    // 
    // *   If `period_unit` is set to Week, the valid values of `period` are 1, 2, 3, and 4.
    // *   If `period_unit` is set to Month, the valid values of `period` are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The billing cycle of the nodes in the node pool. This parameter is required if you set `instance_charge_type` to `PrePaid`. Valid values:
    // 
    // *   `Month`: The subscription duration is measured in months.
    // *   `Week`: The subscription duration is measured in weeks.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // This parameter is deprecated.
    // 
    // The OS distribution that is used. Valid values:
    // 
    // *   `CentOS`
    // *   `AliyunLinux`
    // *   `Windows`
    // *   `WindowsCore`
    std::shared_ptr<string> platform_ = nullptr;
    // The configurations of the private node pool.
    std::shared_ptr<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions> privatePoolOptions_ = nullptr;
    // This field is deprecated and replaced by the ram_role_name parameter.
    std::shared_ptr<string> ramPolicy_ = nullptr;
    // Worker RAM role name.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ApsaraDB RDS instances. If you specify the list of ApsaraDB RDS instances, ECS instances in the cluster are automatically added to the whitelist of the ApsaraDB RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    // The scaling group ID.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The scaling mode of the scaling group. Valid values:
    // 
    // *   `release`: the standard mode. ECS instances are created and released based on the resource usage.
    // *   `recycle`: the swift mode. ECS instances are created, stopped, or started during scaling events. This reduces the time required for the next scale-out event. When the instance is stopped, you are charged only for the storage service. This does not apply to ECS instances that are attached to local disks.
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // This parameter is deprecated.
    // 
    // The ID of the security group to which the node pool is added. If the node pool is added to multiple security groups, the first ID in the value of `security_group_ids` is returned.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of security groups for the node pool.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // Indicates whether Alibaba Cloud Linux Security Hardening is enabled. Valid values:
    // 
    // *   `true`: Alibaba Cloud Linux Security Hardening is enabled.
    // *   `false`: Alibaba Cloud Linux Security Hardening is disabled.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // Specifies whether to enable reinforcement based on classified protection. You can enable reinforcement based on classified protection only if Alibaba Cloud Linux 2 or Alibaba Cloud Linux 3 is installed on nodes. Alibaba Cloud provides standards for baseline check and a scanner to ensure the compliance of Alibaba Cloud Linux 2 and Alibaba Cloud Linux 3 images with the level 3 standards of classified protection.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // The number of instance types that are available for creating preemptible instances. Auto Scaling creates preemptible instances of multiple instance types that are available at the lowest cost. Valid values: 1 to 10.
    std::shared_ptr<int64_t> spotInstancePools_ = nullptr;
    // Specifies whether to enable the supplementation of preemptible instances. If the supplementation of preemptible instances is enabled, when the scaling group receives a system message that a preemptible instance is to be reclaimed, the scaling group attempts to create a new instance to replace this instance. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The bid configurations of preemptible instances.
    std::shared_ptr<vector<Models::DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit>> spotPriceLimit_ = nullptr;
    // The bidding policy of preemptible instances. Valid values:
    // 
    // *   NoSpot: non-preemptible.
    // *   SpotWithPriceLimit: specifies the highest bid.
    // *   SpotAsPriceGo: automatically submits bids based on the up-to-date market price.
    // 
    // For more information, see [Create a preemptible elastic container instance](https://help.aliyun.com/document_detail/157759.html).
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   true: enables the burst feature.
    // *   false: disables the burst feature.
    // 
    // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The categories of system disks. The system creates system disks of a disk category with a lower priority if the disk category with a higher priority is unavailable.
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    // The type of system disk. Valid values:
    // 
    // *   `cloud_efficiency`: ultra disk
    // *   `cloud_ssd`: SSD
    // *   `cloud_essd`: Enterprise ESSD (ESSD).
    // *   `cloud_auto`: ESSD AutoPL disk.
    // *   `cloud_essd_entry`: ESSD Entry disk.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The encryption algorithm that is used to encrypt the system disk. The value is aes-256.
    std::shared_ptr<string> systemDiskEncryptAlgorithm_ = nullptr;
    // Specifies whether to encrypt the system disk. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used to encrypt the system disk.
    std::shared_ptr<string> systemDiskKmsKeyId_ = nullptr;
    // The performance level (PL) of the system disk. This parameter takes effect only for an ESSD. You can specify a higher PL if you increase the size of a data disk. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    // 
    // *   PL0: moderate maximum concurrent I/O performance and low I/O latency.
    // *   PL1: moderate maximum concurrent I/O performance and low I/O latency.
    // *   PL2: high maximum concurrent I/O performance and low I/O latency.
    // *   PL3: ultra-high maximum concurrent I/O performance and ultra-low I/O latency.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The predefined read and write IOPS of the system disk when the disk type is cloud_auto.
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The size of the system disk in GiB.
    // 
    // Valid values: 20 to 2048.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    // The label to be added to the ECS instances.
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
    // The vSwitch IDs.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
