// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLSCALINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLSCALINGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/NodepoolScalingGroupPrivatePoolOptions.hpp>
#include <alibabacloud/models/NodepoolScalingGroupSpotPriceLimit.hpp>
#include <alibabacloud/models/NodepoolScalingGroupTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolScalingGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolScalingGroup& obj) { 
      DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(compensate_with_on_demand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(data_disks, dataDisks_);
      DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
      DARABONBA_PTR_TO_JSON(desired_size, desiredSize_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(instance_metadata_options, instanceMetadataOptions_);
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
      DARABONBA_PTR_TO_JSON(scaling_policy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_ids, securityGroupIds_);
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
    friend void from_json(const Darabonba::Json& j, NodepoolScalingGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(compensate_with_on_demand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(data_disks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
      DARABONBA_PTR_FROM_JSON(desired_size, desiredSize_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(instance_charge_type, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(instance_metadata_options, instanceMetadataOptions_);
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
      DARABONBA_PTR_FROM_JSON(scaling_policy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_ids, securityGroupIds_);
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
    NodepoolScalingGroup() = default ;
    NodepoolScalingGroup(const NodepoolScalingGroup &) = default ;
    NodepoolScalingGroup(NodepoolScalingGroup &&) = default ;
    NodepoolScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolScalingGroup() = default ;
    NodepoolScalingGroup& operator=(const NodepoolScalingGroup &) = default ;
    NodepoolScalingGroup& operator=(NodepoolScalingGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->compensateWithOnDemand_ != nullptr && this->dataDisks_ != nullptr && this->deploymentsetId_ != nullptr && this->desiredSize_ != nullptr
        && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instanceChargeType_ != nullptr && this->instanceMetadataOptions_ != nullptr && this->instanceTypes_ != nullptr
        && this->internetChargeType_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->keyPair_ != nullptr && this->loginAsNonRoot_ != nullptr && this->loginPassword_ != nullptr
        && this->multiAzPolicy_ != nullptr && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr
        && this->platform_ != nullptr && this->privatePoolOptions_ != nullptr && this->ramRoleName_ != nullptr && this->rdsInstances_ != nullptr && this->scalingPolicy_ != nullptr
        && this->securityGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->spotInstancePools_ != nullptr && this->spotInstanceRemedy_ != nullptr && this->spotPriceLimit_ != nullptr
        && this->spotStrategy_ != nullptr && this->systemDiskBurstingEnabled_ != nullptr && this->systemDiskCategories_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskEncryptAlgorithm_ != nullptr
        && this->systemDiskEncrypted_ != nullptr && this->systemDiskKmsKeyId_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskProvisionedIops_ != nullptr && this->systemDiskSize_ != nullptr
        && this->tags_ != nullptr && this->vswitchIds_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline NodepoolScalingGroup& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline NodepoolScalingGroup& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline NodepoolScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<Models::DataDisk> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<Models::DataDisk>) };
    inline vector<Models::DataDisk> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<Models::DataDisk>) };
    inline NodepoolScalingGroup& setDataDisks(const vector<Models::DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline NodepoolScalingGroup& setDataDisks(vector<Models::DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline NodepoolScalingGroup& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // desiredSize Field Functions 
    bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
    void deleteDesiredSize() { this->desiredSize_ = nullptr;};
    inline int64_t desiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0L) };
    inline NodepoolScalingGroup& setDesiredSize(int64_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline NodepoolScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline NodepoolScalingGroup& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline NodepoolScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceMetadataOptions Field Functions 
    bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
    void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
    inline const Models::InstanceMetadataOptions & instanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline Models::InstanceMetadataOptions instanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline NodepoolScalingGroup& setInstanceMetadataOptions(const Models::InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
    inline NodepoolScalingGroup& setInstanceMetadataOptions(Models::InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline NodepoolScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline NodepoolScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline NodepoolScalingGroup& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline NodepoolScalingGroup& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline NodepoolScalingGroup& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline NodepoolScalingGroup& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline NodepoolScalingGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline NodepoolScalingGroup& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int64_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0L) };
    inline NodepoolScalingGroup& setOnDemandBaseCapacity(int64_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int64_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0L) };
    inline NodepoolScalingGroup& setOnDemandPercentageAboveBaseCapacity(int64_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline NodepoolScalingGroup& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline NodepoolScalingGroup& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline NodepoolScalingGroup& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const Models::NodepoolScalingGroupPrivatePoolOptions & privatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, Models::NodepoolScalingGroupPrivatePoolOptions) };
    inline Models::NodepoolScalingGroupPrivatePoolOptions privatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, Models::NodepoolScalingGroupPrivatePoolOptions) };
    inline NodepoolScalingGroup& setPrivatePoolOptions(const Models::NodepoolScalingGroupPrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline NodepoolScalingGroup& setPrivatePoolOptions(Models::NodepoolScalingGroupPrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline NodepoolScalingGroup& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline NodepoolScalingGroup& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline NodepoolScalingGroup& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline NodepoolScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline NodepoolScalingGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline NodepoolScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline NodepoolScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int64_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0L) };
    inline NodepoolScalingGroup& setSpotInstancePools(int64_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline NodepoolScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline const vector<Models::NodepoolScalingGroupSpotPriceLimit> & spotPriceLimit() const { DARABONBA_PTR_GET_CONST(spotPriceLimit_, vector<Models::NodepoolScalingGroupSpotPriceLimit>) };
    inline vector<Models::NodepoolScalingGroupSpotPriceLimit> spotPriceLimit() { DARABONBA_PTR_GET(spotPriceLimit_, vector<Models::NodepoolScalingGroupSpotPriceLimit>) };
    inline NodepoolScalingGroup& setSpotPriceLimit(const vector<Models::NodepoolScalingGroupSpotPriceLimit> & spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };
    inline NodepoolScalingGroup& setSpotPriceLimit(vector<Models::NodepoolScalingGroupSpotPriceLimit> && spotPriceLimit) { DARABONBA_PTR_SET_RVALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline NodepoolScalingGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline NodepoolScalingGroup& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & systemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> systemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline NodepoolScalingGroup& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline NodepoolScalingGroup& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline NodepoolScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskEncryptAlgorithm Field Functions 
    bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
    void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
    inline string systemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
    inline NodepoolScalingGroup& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


    // systemDiskEncrypted Field Functions 
    bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
    void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
    inline bool systemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
    inline NodepoolScalingGroup& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


    // systemDiskKmsKeyId Field Functions 
    bool hasSystemDiskKmsKeyId() const { return this->systemDiskKmsKeyId_ != nullptr;};
    void deleteSystemDiskKmsKeyId() { this->systemDiskKmsKeyId_ = nullptr;};
    inline string systemDiskKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKmsKeyId_, "") };
    inline NodepoolScalingGroup& setSystemDiskKmsKeyId(string systemDiskKmsKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKmsKeyId_, systemDiskKmsKeyId) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline NodepoolScalingGroup& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline NodepoolScalingGroup& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline NodepoolScalingGroup& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::NodepoolScalingGroupTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::NodepoolScalingGroupTags>) };
    inline vector<Models::NodepoolScalingGroupTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::NodepoolScalingGroupTags>) };
    inline NodepoolScalingGroup& setTags(const vector<Models::NodepoolScalingGroupTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline NodepoolScalingGroup& setTags(vector<Models::NodepoolScalingGroupTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline NodepoolScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline NodepoolScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    std::shared_ptr<vector<Models::DataDisk>> dataDisks_ = nullptr;
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    std::shared_ptr<int64_t> desiredSize_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<Models::InstanceMetadataOptions> instanceMetadataOptions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<int64_t> internetMaxBandwidthOut_ = nullptr;
    std::shared_ptr<string> keyPair_ = nullptr;
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
    std::shared_ptr<string> loginPassword_ = nullptr;
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    std::shared_ptr<int64_t> onDemandBaseCapacity_ = nullptr;
    std::shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<Models::NodepoolScalingGroupPrivatePoolOptions> privatePoolOptions_ = nullptr;
    std::shared_ptr<string> ramRoleName_ = nullptr;
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<int64_t> spotInstancePools_ = nullptr;
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    std::shared_ptr<vector<Models::NodepoolScalingGroupSpotPriceLimit>> spotPriceLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    std::shared_ptr<vector<string>> systemDiskCategories_ = nullptr;
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    std::shared_ptr<string> systemDiskEncryptAlgorithm_ = nullptr;
    std::shared_ptr<bool> systemDiskEncrypted_ = nullptr;
    std::shared_ptr<string> systemDiskKmsKeyId_ = nullptr;
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    std::shared_ptr<vector<Models::NodepoolScalingGroupTags>> tags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
