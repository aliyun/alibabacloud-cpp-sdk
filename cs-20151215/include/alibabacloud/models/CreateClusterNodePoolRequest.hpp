// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/DiskInit.hpp>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
#include <map>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Taint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(eflo_node_group, efloNodeGroup_);
      DARABONBA_PTR_TO_JSON(host_network, hostNetwork_);
      DARABONBA_PTR_TO_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_TO_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_TO_JSON(intranet, intranet_);
      DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(management, management_);
      DARABONBA_PTR_TO_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_TO_JSON(node_components, nodeComponents_);
      DARABONBA_PTR_TO_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(eflo_node_group, efloNodeGroup_);
      DARABONBA_PTR_FROM_JSON(host_network, hostNetwork_);
      DARABONBA_PTR_FROM_JSON(interconnect_config, interconnectConfig_);
      DARABONBA_PTR_FROM_JSON(interconnect_mode, interconnectMode_);
      DARABONBA_PTR_FROM_JSON(intranet, intranet_);
      DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(management, management_);
      DARABONBA_PTR_FROM_JSON(max_nodes, maxNodes_);
      DARABONBA_PTR_FROM_JSON(node_components, nodeComponents_);
      DARABONBA_PTR_FROM_JSON(node_config, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
    };
    CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest(CreateClusterNodePoolRequest &&) = default ;
    CreateClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterNodePoolRequest() = default ;
    CreateClusterNodePoolRequest& operator=(const CreateClusterNodePoolRequest &) = default ;
    CreateClusterNodePoolRequest& operator=(CreateClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TeeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TeeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
      };
      friend void from_json(const Darabonba::Json& j, TeeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
      };
      TeeConfig() = default ;
      TeeConfig(const TeeConfig &) = default ;
      TeeConfig(TeeConfig &&) = default ;
      TeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TeeConfig() = default ;
      TeeConfig& operator=(const TeeConfig &) = default ;
      TeeConfig& operator=(TeeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->teeEnable_ == nullptr; };
      // teeEnable Field Functions 
      bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
      void deleteTeeEnable() { this->teeEnable_ = nullptr;};
      inline bool getTeeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
      inline TeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


    protected:
      // Specifies whether to enable confidential computing for the cluster.
      // 
      // - true: enables confidential computing.
      // 
      // - false: does not enable confidential computing.
      shared_ptr<bool> teeEnable_ {};
    };

    class ScalingGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingGroup& obj) { 
        DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(cis_enabled, cisEnabled_);
        DARABONBA_PTR_TO_JSON(compensate_with_on_demand, compensateWithOnDemand_);
        DARABONBA_PTR_TO_JSON(data_disks, dataDisks_);
        DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_TO_JSON(desired_size, desiredSize_);
        DARABONBA_PTR_TO_JSON(disk_init, diskInit_);
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
        DARABONBA_PTR_TO_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(cis_enabled, cisEnabled_);
        DARABONBA_PTR_FROM_JSON(compensate_with_on_demand, compensateWithOnDemand_);
        DARABONBA_PTR_FROM_JSON(data_disks, dataDisks_);
        DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_FROM_JSON(desired_size, desiredSize_);
        DARABONBA_PTR_FROM_JSON(disk_init, diskInit_);
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
        DARABONBA_PTR_FROM_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
      };
      ScalingGroup() = default ;
      ScalingGroup(const ScalingGroup &) = default ;
      ScalingGroup(ScalingGroup &&) = default ;
      ScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingGroup() = default ;
      ScalingGroup& operator=(const ScalingGroup &) = default ;
      ScalingGroup& operator=(ScalingGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class SpotPriceLimit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpotPriceLimit& obj) { 
          DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
          DARABONBA_PTR_TO_JSON(price_limit, priceLimit_);
        };
        friend void from_json(const Darabonba::Json& j, SpotPriceLimit& obj) { 
          DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
          DARABONBA_PTR_FROM_JSON(price_limit, priceLimit_);
        };
        SpotPriceLimit() = default ;
        SpotPriceLimit(const SpotPriceLimit &) = default ;
        SpotPriceLimit(SpotPriceLimit &&) = default ;
        SpotPriceLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpotPriceLimit() = default ;
        SpotPriceLimit& operator=(const SpotPriceLimit &) = default ;
        SpotPriceLimit& operator=(SpotPriceLimit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->priceLimit_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SpotPriceLimit& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // priceLimit Field Functions 
        bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
        void deletePriceLimit() { this->priceLimit_ = nullptr;};
        inline string getPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, "") };
        inline SpotPriceLimit& setPriceLimit(string priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


      protected:
        // The spot instance type.
        shared_ptr<string> instanceType_ {};
        // The maximum price per instance.
        // <props="china">Unit: CNY/hour.
        // 
        // 
        // 
        // <props="intl">Unit: USD/hour..
        shared_ptr<string> priceLimit_ {};
      };

      class ResourcePoolOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePoolOptions& obj) { 
          DARABONBA_PTR_TO_JSON(private_pool_ids, privatePoolIds_);
          DARABONBA_PTR_TO_JSON(strategy, strategy_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePoolOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(private_pool_ids, privatePoolIds_);
          DARABONBA_PTR_FROM_JSON(strategy, strategy_);
        };
        ResourcePoolOptions() = default ;
        ResourcePoolOptions(const ResourcePoolOptions &) = default ;
        ResourcePoolOptions(ResourcePoolOptions &&) = default ;
        ResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePoolOptions() = default ;
        ResourcePoolOptions& operator=(const ResourcePoolOptions &) = default ;
        ResourcePoolOptions& operator=(ResourcePoolOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privatePoolIds_ == nullptr
        && this->strategy_ == nullptr; };
        // privatePoolIds Field Functions 
        bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
        void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
        inline const vector<string> & getPrivatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
        inline vector<string> getPrivatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
        inline ResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
        inline ResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline ResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      protected:
        // The list of private pool IDs, which are elasticity assurance IDs or capacity reservation IDs. Only Target-mode private pool IDs can be specified. Valid values of N: 1 to 20.
        shared_ptr<vector<string>> privatePoolIds_ {};
        // The resource pool policy used when creating instances. Resource pools include private pools generated by elasticity assurance or capacity reservation services and public pools. Valid values:
        // PrivatePoolFirst: private pool first. When this policy is selected and resouce_pool_options.private_pool_ids is specified, the specified private pools are used first. If no private pools are specified or the specified private pool capacity is insufficient, open-type private pools are automatically matched. If no matching private pools are available, public pool resources are used to create instances.
        // PrivatePoolOnly: private pool only. When this policy is selected, you must specify resouce_pool_options.private_pool_ids. If the specified private pool capacity is insufficient, the instance fails to launch.
        // None: no resource pool policy is used.
        // Default value: None.
        shared_ptr<string> strategy_ {};
      };

      class PrivatePoolOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
        };
        friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
        };
        PrivatePoolOptions() = default ;
        PrivatePoolOptions(const PrivatePoolOptions &) = default ;
        PrivatePoolOptions(PrivatePoolOptions &&) = default ;
        PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivatePoolOptions() = default ;
        PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
        PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->matchCriteria_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // matchCriteria Field Functions 
        bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
        void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
        inline string getMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
        inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


      protected:
        // The private pool ID. When `match_criteria` is set to `Target`, you must specify the private pool ID.
        shared_ptr<string> id_ {};
        // The private pool type. Specifies the capacity option for the private pool used to launch instances. After an elasticity assurance or capacity reservation takes effect, a private pool is generated for instance launches. Valid values:
        // - `Open`: open mode. Automatically matches open-type private pool capacity. If no matching private pool capacity is available, public pool resources are used to launch instances.
        // - `Target`: targeted mode. Uses the specified private pool capacity to launch instances. If the specified private pool capacity is unavailable, the instance fails to launch.
        // - `None`: none mode. Private pool capacity is not used to launch instances.
        shared_ptr<string> matchCriteria_ {};
      };

      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->cisEnabled_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->dataDisks_ == nullptr && this->deploymentsetId_ == nullptr
        && this->desiredSize_ == nullptr && this->diskInit_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceChargeType_ == nullptr
        && this->instanceMetadataOptions_ == nullptr && this->instancePatterns_ == nullptr && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr
        && this->keyPair_ == nullptr && this->loginAsNonRoot_ == nullptr && this->loginPassword_ == nullptr && this->multiAzPolicy_ == nullptr && this->onDemandBaseCapacity_ == nullptr
        && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->platform_ == nullptr && this->privatePoolOptions_ == nullptr
        && this->ramRoleName_ == nullptr && this->rdsInstances_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingPolicy_ == nullptr && this->securityGroupId_ == nullptr
        && this->securityGroupIds_ == nullptr && this->securityHardeningOs_ == nullptr && this->socEnabled_ == nullptr && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr
        && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategories_ == nullptr && this->systemDiskCategory_ == nullptr
        && this->systemDiskEncryptAlgorithm_ == nullptr && this->systemDiskEncrypted_ == nullptr && this->systemDiskKmsKeyId_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskProvisionedIops_ == nullptr
        && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr && this->tags_ == nullptr && this->vswitchIds_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline ScalingGroup& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
      inline ScalingGroup& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // cisEnabled Field Functions 
      bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
      void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
      inline bool getCisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
      inline ScalingGroup& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


      // compensateWithOnDemand Field Functions 
      bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
      void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
      inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
      inline ScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


      // dataDisks Field Functions 
      bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
      void deleteDataDisks() { this->dataDisks_ = nullptr;};
      inline const vector<DataDisk> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<DataDisk>) };
      inline vector<DataDisk> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<DataDisk>) };
      inline ScalingGroup& setDataDisks(const vector<DataDisk> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
      inline ScalingGroup& setDataDisks(vector<DataDisk> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


      // deploymentsetId Field Functions 
      bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
      void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
      inline string getDeploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
      inline ScalingGroup& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


      // desiredSize Field Functions 
      bool hasDesiredSize() const { return this->desiredSize_ != nullptr;};
      void deleteDesiredSize() { this->desiredSize_ = nullptr;};
      inline int64_t getDesiredSize() const { DARABONBA_PTR_GET_DEFAULT(desiredSize_, 0L) };
      inline ScalingGroup& setDesiredSize(int64_t desiredSize) { DARABONBA_PTR_SET_VALUE(desiredSize_, desiredSize) };


      // diskInit Field Functions 
      bool hasDiskInit() const { return this->diskInit_ != nullptr;};
      void deleteDiskInit() { this->diskInit_ = nullptr;};
      inline const vector<DiskInit> & getDiskInit() const { DARABONBA_PTR_GET_CONST(diskInit_, vector<DiskInit>) };
      inline vector<DiskInit> getDiskInit() { DARABONBA_PTR_GET(diskInit_, vector<DiskInit>) };
      inline ScalingGroup& setDiskInit(const vector<DiskInit> & diskInit) { DARABONBA_PTR_SET_VALUE(diskInit_, diskInit) };
      inline ScalingGroup& setDiskInit(vector<DiskInit> && diskInit) { DARABONBA_PTR_SET_RVALUE(diskInit_, diskInit) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ScalingGroup& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline ScalingGroup& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline ScalingGroup& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceMetadataOptions Field Functions 
      bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
      void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
      inline const InstanceMetadataOptions & getInstanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline InstanceMetadataOptions getInstanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline ScalingGroup& setInstanceMetadataOptions(const InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
      inline ScalingGroup& setInstanceMetadataOptions(InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


      // instancePatterns Field Functions 
      bool hasInstancePatterns() const { return this->instancePatterns_ != nullptr;};
      void deleteInstancePatterns() { this->instancePatterns_ = nullptr;};
      inline const vector<InstancePatterns> & getInstancePatterns() const { DARABONBA_PTR_GET_CONST(instancePatterns_, vector<InstancePatterns>) };
      inline vector<InstancePatterns> getInstancePatterns() { DARABONBA_PTR_GET(instancePatterns_, vector<InstancePatterns>) };
      inline ScalingGroup& setInstancePatterns(const vector<InstancePatterns> & instancePatterns) { DARABONBA_PTR_SET_VALUE(instancePatterns_, instancePatterns) };
      inline ScalingGroup& setInstancePatterns(vector<InstancePatterns> && instancePatterns) { DARABONBA_PTR_SET_RVALUE(instancePatterns_, instancePatterns) };


      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
      inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
      inline ScalingGroup& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline ScalingGroup& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline ScalingGroup& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // internetMaxBandwidthOut Field Functions 
      bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
      void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
      inline int64_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
      inline ScalingGroup& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


      // keyPair Field Functions 
      bool hasKeyPair() const { return this->keyPair_ != nullptr;};
      void deleteKeyPair() { this->keyPair_ = nullptr;};
      inline string getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
      inline ScalingGroup& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


      // loginAsNonRoot Field Functions 
      bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
      void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
      inline bool getLoginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
      inline ScalingGroup& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline ScalingGroup& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // multiAzPolicy Field Functions 
      bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
      void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
      inline string getMultiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
      inline ScalingGroup& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


      // onDemandBaseCapacity Field Functions 
      bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
      void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
      inline int64_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0L) };
      inline ScalingGroup& setOnDemandBaseCapacity(int64_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


      // onDemandPercentageAboveBaseCapacity Field Functions 
      bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
      void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
      inline int64_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0L) };
      inline ScalingGroup& setOnDemandPercentageAboveBaseCapacity(int64_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline ScalingGroup& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline ScalingGroup& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline ScalingGroup& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // privatePoolOptions Field Functions 
      bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
      void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
      inline const ScalingGroup::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ScalingGroup::PrivatePoolOptions) };
      inline ScalingGroup::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ScalingGroup::PrivatePoolOptions) };
      inline ScalingGroup& setPrivatePoolOptions(const ScalingGroup::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
      inline ScalingGroup& setPrivatePoolOptions(ScalingGroup::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


      // ramRoleName Field Functions 
      bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
      void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
      inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
      inline ScalingGroup& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


      // rdsInstances Field Functions 
      bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
      void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
      inline const vector<string> & getRdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
      inline vector<string> getRdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
      inline ScalingGroup& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
      inline ScalingGroup& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


      // resourcePoolOptions Field Functions 
      bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
      void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
      inline const ScalingGroup::ResourcePoolOptions & getResourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, ScalingGroup::ResourcePoolOptions) };
      inline ScalingGroup::ResourcePoolOptions getResourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, ScalingGroup::ResourcePoolOptions) };
      inline ScalingGroup& setResourcePoolOptions(const ScalingGroup::ResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
      inline ScalingGroup& setResourcePoolOptions(ScalingGroup::ResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


      // scalingPolicy Field Functions 
      bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
      void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
      inline string getScalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
      inline ScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline ScalingGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline ScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline ScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // securityHardeningOs Field Functions 
      bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
      void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
      inline bool getSecurityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
      inline ScalingGroup& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


      // socEnabled Field Functions 
      bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
      void deleteSocEnabled() { this->socEnabled_ = nullptr;};
      inline bool getSocEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
      inline ScalingGroup& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


      // spotInstancePools Field Functions 
      bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
      void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
      inline int64_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0L) };
      inline ScalingGroup& setSpotInstancePools(int64_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


      // spotInstanceRemedy Field Functions 
      bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
      void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
      inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
      inline ScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


      // spotPriceLimit Field Functions 
      bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
      void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
      inline const vector<ScalingGroup::SpotPriceLimit> & getSpotPriceLimit() const { DARABONBA_PTR_GET_CONST(spotPriceLimit_, vector<ScalingGroup::SpotPriceLimit>) };
      inline vector<ScalingGroup::SpotPriceLimit> getSpotPriceLimit() { DARABONBA_PTR_GET(spotPriceLimit_, vector<ScalingGroup::SpotPriceLimit>) };
      inline ScalingGroup& setSpotPriceLimit(const vector<ScalingGroup::SpotPriceLimit> & spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };
      inline ScalingGroup& setSpotPriceLimit(vector<ScalingGroup::SpotPriceLimit> && spotPriceLimit) { DARABONBA_PTR_SET_RVALUE(spotPriceLimit_, spotPriceLimit) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline ScalingGroup& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // systemDiskBurstingEnabled Field Functions 
      bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
      void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
      inline bool getSystemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
      inline ScalingGroup& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


      // systemDiskCategories Field Functions 
      bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
      void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
      inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
      inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
      inline ScalingGroup& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
      inline ScalingGroup& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline ScalingGroup& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskEncryptAlgorithm Field Functions 
      bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
      void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
      inline string getSystemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
      inline ScalingGroup& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


      // systemDiskEncrypted Field Functions 
      bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
      void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
      inline bool getSystemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
      inline ScalingGroup& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


      // systemDiskKmsKeyId Field Functions 
      bool hasSystemDiskKmsKeyId() const { return this->systemDiskKmsKeyId_ != nullptr;};
      void deleteSystemDiskKmsKeyId() { this->systemDiskKmsKeyId_ = nullptr;};
      inline string getSystemDiskKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKmsKeyId_, "") };
      inline ScalingGroup& setSystemDiskKmsKeyId(string systemDiskKmsKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKmsKeyId_, systemDiskKmsKeyId) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline ScalingGroup& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskProvisionedIops Field Functions 
      bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
      void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
      inline int64_t getSystemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
      inline ScalingGroup& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline ScalingGroup& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // systemDiskSnapshotPolicyId Field Functions 
      bool hasSystemDiskSnapshotPolicyId() const { return this->systemDiskSnapshotPolicyId_ != nullptr;};
      void deleteSystemDiskSnapshotPolicyId() { this->systemDiskSnapshotPolicyId_ = nullptr;};
      inline string getSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSnapshotPolicyId_, "") };
      inline ScalingGroup& setSystemDiskSnapshotPolicyId(string systemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskSnapshotPolicyId_, systemDiskSnapshotPolicyId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ScalingGroup::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScalingGroup::Tags>) };
      inline vector<ScalingGroup::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ScalingGroup::Tags>) };
      inline ScalingGroup& setTags(const vector<ScalingGroup::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingGroup& setTags(vector<ScalingGroup::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline ScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline ScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      // Specifies whether to enable auto-renewal for nodes in the node pool. This parameter takes effect only when `instance_charge_type` is set to `PrePaid`. Valid values:
      // 
      // - `true`: enables auto-renewal.
      // - `false`: disables auto-renewal.
      // 
      // Default value: `false`.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period. Valid values:
      // - When PeriodUnit=Week: 1, 2, 3.
      // - When PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, 60.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // [This parameter is deprecated] Use the security_hardening_os parameter instead.
      shared_ptr<bool> cisEnabled_ {};
      // When `multi_az_policy` is set to `COST_OPTIMIZED`, specifies whether to automatically create pay-as-you-go instances when spot instances cannot be created due to price or inventory reasons. Valid values:
      // 
      // - `true`: allows automatic creation of pay-as-you-go instances to meet the required number of ECS instances.
      // - `false`: does not allow automatic creation of pay-as-you-go instances.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The data cloud disk configuration for nodes in the node pool.
      shared_ptr<vector<DataDisk>> dataDisks_ {};
      // The deployment set ID. You can use a deployment set to distribute ECS instances created by the node pool across different physical servers to ensure high availability and fault tolerance. When ECS instances are created in a deployment set, they are launched in the specified region based on the preconfigured deployment policy.
      // 
      // 
      // >Notice: After you select a deployment set, the maximum number of nodes in the node pool is limited. The default maximum number of nodes supported by a deployment set is 20 × number of zones (the number of zones is determined by the vSwitches). Select carefully and ensure that the deployment set has sufficient quota to avoid node creation failures..
      shared_ptr<string> deploymentsetId_ {};
      // The desired number of nodes in the node pool.
      // 
      // This is the total number of nodes that the node pool should maintain. Configure at least 2 nodes to ensure that cluster components run properly. You can adjust the desired node count to scale the node pool in or out.
      // 
      // If you do not need to create nodes, set this parameter to 0 and manually adjust the value later to add nodes.
      shared_ptr<int64_t> desiredSize_ {};
      // The block device initialization configuration.
      shared_ptr<vector<DiskInit>> diskInit_ {};
      // The custom image ID. The system-provided image is used by default.
      shared_ptr<string> imageId_ {};
      // The operating system image type. Valid values:
      // 
      // - `AliyunLinux`: Alinux2 image.
      // - `AliyunLinuxSecurity`: Alinux2 UEFI image.
      // - `AliyunLinux3`: Alinux3 image.
      // - `AliyunLinux3Arm64`: Alinux3 ARM image.
      // - `AliyunLinux3Security`: Alinux3 UEFI image.
      // - `CentOS`: CentOS image.
      // - `Windows`: Windows image.
      // - `WindowsCore`: WindowsCore image.
      // - `ContainerOS`: container-optimized image.
      // - `AliyunLinux3ContainerOptimized`: Alinux3 container-optimized image.
      shared_ptr<string> imageType_ {};
      // The billing method for nodes in the node pool. Valid values:
      //  
      // - `PrePaid`: subscription.
      // 
      // - `PostPaid`: pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      // 
      // This parameter is required.
      shared_ptr<string> instanceChargeType_ {};
      // The ECS instance metadata access configuration.
      shared_ptr<InstanceMetadataOptions> instanceMetadataOptions_ {};
      // The instance attribute configuration.
      shared_ptr<vector<InstancePatterns>> instancePatterns_ {};
      // The list of instance types for the node pool. When the node pool scales out, instances are created from the specified instance types that meet the requirements.
      // 
      // The number of supported instance types ranges from 1 to 10.
      // 
      // 
      // > To ensure high availability, select multiple instance types.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> instanceTypes_ {};
      // The billing method for public IP addresses. Valid values:
      // 
      // - PayByBandwidth: pay-by-bandwidth.
      // - PayByTraffic: pay-by-data-transfer.
      shared_ptr<string> internetChargeType_ {};
      // The maximum outbound bandwidth for the public IP address of a node. Unit: Mbit/s. Valid values: [1,100\\].
      shared_ptr<int64_t> internetMaxBandwidthOut_ {};
      // The name of the key pair for passwordless logon. You can specify either this parameter or `login_password`.
      // 
      // > If the node pool uses the ContainerOS operating system, only `key_pair` is supported.
      shared_ptr<string> keyPair_ {};
      // Specifies whether to log on to the ECS instance as a non-root user.
      //  
      // - true: logs on as a non-root user (ecs-user).
      // 
      // - false: logs on as the root user.
      shared_ptr<bool> loginAsNonRoot_ {};
      // The SSH logon password. You can specify either this parameter or `key_pair`. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
      shared_ptr<string> loginPassword_ {};
      // The scaling policy for ECS instances in a multi-zone scaling group. Valid values:
      // 
      // - `PRIORITY`: scales instances based on the vSwitches (VSwitchIds.N) that you define. When ECS instances cannot be created in the zone of the vSwitch with the highest priority, the system automatically uses the vSwitch with the next highest priority to create ECS instances.
      // 
      // - `COST_OPTIMIZED`: attempts to create instances in ascending order of vCPU unit price. When the scaling configuration sets the billing method of multiple instance types to spot, spot instances are created first. You can use the `CompensateWithOnDemand` parameter to specify whether to automatically attempt to create pay-as-you-go instances when spot instances cannot be created due to insufficient inventory.
      // 
      //   >`COST_OPTIMIZED` takes effect only when the scaling configuration specifies multiple instance types or uses spot instances.
      // 
      // - `BALANCE`: evenly allocates ECS instances across the multiple active zones specified in the scaling group. If the zones become unbalanced due to insufficient inventory, you can call the [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html) API operation to rebalance resources.
      // 
      // Default value: `PRIORITY`.
      shared_ptr<string> multiAzPolicy_ {};
      // The minimum number of pay-as-you-go instances required in the scaling group. Valid values: [0,1000\\]. When the number of pay-as-you-go instances is less than this value, pay-as-you-go instances are created first.
      shared_ptr<int64_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances among the instances that exceed the minimum pay-as-you-go instance count (`on_demand_base_capacity`). Valid values: [0,100\\].
      shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ {};
      // The subscription duration for nodes in the node pool. This parameter takes effect and is required only when `instance_charge_type` is set to `PrePaid`.
      // 
      // - When `period_unit=Week`, valid values of `period`: {1, 2, 3, 4}.
      // - When `period_unit=Month`, valid values of `period`: {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, 60}.
      shared_ptr<int64_t> period_ {};
      // The compute unit (CU) for the billing cycle of nodes in the node pool. This parameter takes effect and is required only when `instance_charge_type` is set to `PrePaid`.
      // 
      // - `Month`: billed on a monthly basis.
      // - `Week`: billed on a weekly basis.
      // 
      // Default value: `Month`.
      shared_ptr<string> periodUnit_ {};
      // [This parameter is deprecated] Use the `image_type` parameter instead.
      // 
      // The operating system distribution. Valid values:
      // - `CentOS`
      // - `AliyunLinux`
      // - `Windows`
      // - `WindowsCore`
      // 
      // Default value: `AliyunLinux`.
      shared_ptr<string> platform_ {};
      // The private pool configuration.
      shared_ptr<ScalingGroup::PrivatePoolOptions> privatePoolOptions_ {};
      // The Worker RAM role name.
      // 
      // * If left empty, the default Worker RAM role created by the cluster is used.
      // * If specified, the RAM role must be a **regular service role** with its **trusted service** configured as **Elastic Compute Service**. For more information, see [Create a regular service role](https://help.aliyun.com/document_detail/116800.html). When the specified RAM role is not the default Worker RAM role created by the cluster, the role name cannot start with `KubernetesMasterRole-` or `KubernetesWorkerRole-`.
      // 
      // >Notice: This parameter is supported only for ACK managed clusters of version 1.22 or later..
      shared_ptr<string> ramRoleName_ {};
      // The list of ApsaraDB RDS instances.
      shared_ptr<vector<string>> rdsInstances_ {};
      // The resource pool and resource pool policy used when creating instances. Note the following when you set this parameter:
      // This parameter takes effect only when creating pay-as-you-go instances.
      // This parameter cannot be set together with private_pool_options.match_criteria or private_pool_options.id.
      shared_ptr<ScalingGroup::ResourcePoolOptions> resourcePoolOptions_ {};
      // The scaling group mode. Valid values:
      // 
      // - `release`: standard mode. Scales by creating and releasing ECS instances based on resource usage.
      // - `recycle`: swift mode. Scales by creating, stopping, and starting instances, which improves the speed of subsequent scaling operations. Compute resources are not charged during the stop period. Only storage fees are charged, except for instances with local disks.
      // 
      // Default value: `release`.
      shared_ptr<string> scalingPolicy_ {};
      // The security group ID for the node pool. You can specify either this parameter or `security_group_ids`. We recommend that you use `security_group_ids`.
      shared_ptr<string> securityGroupId_ {};
      // The list of security group IDs. You can specify either this parameter or `security_group_id`. We recommend that you use `security_group_ids`. If both `security_group_id` and `security_group_ids` are specified, `security_group_ids` takes precedence.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // Specifies whether to enable Alibaba Cloud OS security hardening. Valid values:
      // 
      // - `true`: enables Alibaba Cloud OS security hardening.
      // - `false`: does not enable Alibaba Cloud OS security hardening.
      // 
      // Default value: `false`.
      shared_ptr<bool> securityHardeningOs_ {};
      // Specifies whether to enable MLPS 2.0 security hardening. This parameter is available only when the system image is Alibaba Cloud Linux 2 or Alibaba Cloud Linux 3. Alibaba Cloud provides classified protection compliance baseline check standards and scanning programs for Alibaba Cloud Linux 2 and Alibaba Cloud Linux 3 MLPS 2.0 Level 3 images.
      shared_ptr<bool> socEnabled_ {};
      // The number of available instance types. The scaling group creates spot instances across multiple types at the lowest cost. Valid values: [1,10\\].
      shared_ptr<int64_t> spotInstancePools_ {};
      // Specifies whether to enable supplemental spot instances. When enabled, the scaling group attempts to create new instances to replace spot instances that are about to be reclaimed. Valid values:
      // 
      // - `true`: enables supplemental spot instances.
      // - `false`: disables supplemental spot instances.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The price range configuration for the current spot instance type.
      shared_ptr<vector<ScalingGroup::SpotPriceLimit>> spotPriceLimit_ {};
      // The bidding policy for spot instances. Valid values:
      // 
      // - `NoSpot`: non-spot instance.
      // 
      // - `SpotWithPriceLimit`: sets a maximum price for the spot instance.
      // 
      // - `SpotAsPriceGo`: the system automatically bids at the current market price.
      // 
      // For more information, see [Spot instances](https://help.aliyun.com/document_detail/165053.html).
      shared_ptr<string> spotStrategy_ {};
      // Specifies whether to enable burst (performance burst) for the system cloud disk. Valid values:
      // - true: enables burst.
      // - false: disables burst.
      // 
      // This parameter is supported only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The list of cloud disk types for the system cloud disk. When a higher-priority cloud disk type is unavailable, the system automatically attempts the next-priority cloud disk type to create the system cloud disk.
      shared_ptr<vector<string>> systemDiskCategories_ {};
      // The system cloud disk type for nodes. Valid values:
      // - `cloud_efficiency`: ultra cloud disk.
      // - `cloud_ssd`: standard SSD.
      // - `cloud_essd`: Enterprise SSD (ESSD).
      // - `cloud_auto`: ESSD AutoPL cloud disk.
      // - `cloud_essd_entry`: ESSD Entry cloud disk.
      // 
      // Default value: `cloud_efficiency`.
      shared_ptr<string> systemDiskCategory_ {};
      // The encryption algorithm for the system cloud disk. Valid values: aes-256.
      shared_ptr<string> systemDiskEncryptAlgorithm_ {};
      // Specifies whether to encrypt the system cloud disk. Valid values:
      // 
      // - true: encrypts the system cloud disk.
      // 
      // - false: does not encrypt the system cloud disk.
      shared_ptr<bool> systemDiskEncrypted_ {};
      // The KMS key ID used for the system cloud disk.
      shared_ptr<string> systemDiskKmsKeyId_ {};
      // The performance level of the system cloud disk. This parameter takes effect only for ESSD cloud disks. The performance level varies based on the cloud disk size. For more information, see [ESSD cloud disks](https://help.aliyun.com/document_detail/122389.html). The standard SSD does not support performance levels.
      // - PL0: moderate maximum concurrent I/O performance with relatively stable read/write latency.
      // - PL1: moderate maximum concurrent I/O performance with relatively stable read/write latency.
      // - PL2: high maximum concurrent I/O performance with stable read/write latency.
      // - PL3: ultra-high maximum concurrent I/O performance with extremely stable read/write latency.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The provisioned read/write IOPS for the system cloud disk.
      // 
      // Valid values: 0 to min{50,000, 1000 × Capacity - Baseline performance}. Baseline performance = min{1,800 + 50 × Capacity, 50000}.
      // 
      // This parameter is supported only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The system cloud disk size for nodes. Unit: GiB.
      // 
      // Valid values: [20,2048\\].
      shared_ptr<int64_t> systemDiskSize_ {};
      // The snapshot policy for the system cloud disk.
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
      // Tags that are added only to ECS instances.
      // 
      // Tag keys cannot be duplicated and can be up to 128 characters in length. Tag keys and tag values cannot start with "aliyun" or "acs:", or contain "https://" or "http://".
      shared_ptr<vector<ScalingGroup::Tags>> tags_ {};
      // The list of vSwitch IDs. Valid values: [1,8\\].
      // 
      // > To ensure high availability, select vSwitches in different zones.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> vswitchIds_ {};
    };

    class NodepoolInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodepoolInfo& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, NodepoolInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      NodepoolInfo() = default ;
      NodepoolInfo(const NodepoolInfo &) = default ;
      NodepoolInfo(NodepoolInfo &&) = default ;
      NodepoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodepoolInfo() = default ;
      NodepoolInfo& operator=(const NodepoolInfo &) = default ;
      NodepoolInfo& operator=(NodepoolInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline NodepoolInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NodepoolInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The node pool name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The resource group ID of the node pool. Instances created by the node pool belong to this resource group.
      // 
      // A resource can belong to only one resource group. You can map resource groups to concepts such as projects, applications, or organizations based on your business requirements.
      shared_ptr<string> resourceGroupId_ {};
      // The node pool type. Valid values:
      // 
      // - `ess`: regular node pool (includes managed features and elastic scaling features).
      // - `edge`: edge node pool.
      // - `lingjun`: Lingjun node pool.
      // - `hybrid`: hybrid cloud node pool.
      shared_ptr<string> type_ {};
    };

    class NodeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(kubelet_configuration, kubeletConfiguration_);
      };
      friend void from_json(const Darabonba::Json& j, NodeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(kubelet_configuration, kubeletConfiguration_);
      };
      NodeConfig() = default ;
      NodeConfig(const NodeConfig &) = default ;
      NodeConfig(NodeConfig &&) = default ;
      NodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeConfig() = default ;
      NodeConfig& operator=(const NodeConfig &) = default ;
      NodeConfig& operator=(NodeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->kubeletConfiguration_ == nullptr; };
      // kubeletConfiguration Field Functions 
      bool hasKubeletConfiguration() const { return this->kubeletConfiguration_ != nullptr;};
      void deleteKubeletConfiguration() { this->kubeletConfiguration_ = nullptr;};
      inline const KubeletConfig & getKubeletConfiguration() const { DARABONBA_PTR_GET_CONST(kubeletConfiguration_, KubeletConfig) };
      inline KubeletConfig getKubeletConfiguration() { DARABONBA_PTR_GET(kubeletConfiguration_, KubeletConfig) };
      inline NodeConfig& setKubeletConfiguration(const KubeletConfig & kubeletConfiguration) { DARABONBA_PTR_SET_VALUE(kubeletConfiguration_, kubeletConfiguration) };
      inline NodeConfig& setKubeletConfiguration(KubeletConfig && kubeletConfiguration) { DARABONBA_PTR_SET_RVALUE(kubeletConfiguration_, kubeletConfiguration) };


    protected:
      // Kubelet parameter configuration.
      shared_ptr<KubeletConfig> kubeletConfiguration_ {};
    };

    class NodeComponents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeComponents& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, NodeComponents& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      NodeComponents() = default ;
      NodeComponents(const NodeComponents &) = default ;
      NodeComponents(NodeComponents &&) = default ;
      NodeComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeComponents() = default ;
      NodeComponents& operator=(const NodeComponents &) = default ;
      NodeComponents& operator=(NodeComponents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(custom_config, customConfig_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(custom_config, customConfig_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customConfig_ == nullptr; };
        // customConfig Field Functions 
        bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
        void deleteCustomConfig() { this->customConfig_ = nullptr;};
        inline const map<string, string> & getCustomConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, string>) };
        inline map<string, string> getCustomConfig() { DARABONBA_PTR_GET(customConfig_, map<string, string>) };
        inline Config& setCustomConfig(const map<string, string> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
        inline Config& setCustomConfig(map<string, string> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


      protected:
        // The custom configuration of the node component.
        shared_ptr<map<string, string>> customConfig_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const NodeComponents::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, NodeComponents::Config) };
      inline NodeComponents::Config getConfig() { DARABONBA_PTR_GET(config_, NodeComponents::Config) };
      inline NodeComponents& setConfig(const NodeComponents::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline NodeComponents& setConfig(NodeComponents::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NodeComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline NodeComponents& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The node component configuration.
      shared_ptr<NodeComponents::Config> config_ {};
      // The node component name.
      shared_ptr<string> name_ {};
      // The node component version.
      shared_ptr<string> version_ {};
    };

    class Management : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Management& obj) { 
        DARABONBA_PTR_TO_JSON(auto_fault_diagnosis, autoFaultDiagnosis_);
        DARABONBA_PTR_TO_JSON(auto_repair, autoRepair_);
        DARABONBA_PTR_TO_JSON(auto_repair_policy, autoRepairPolicy_);
        DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
        DARABONBA_PTR_TO_JSON(auto_upgrade_policy, autoUpgradePolicy_);
        DARABONBA_PTR_TO_JSON(auto_vul_fix, autoVulFix_);
        DARABONBA_PTR_TO_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(upgrade_config, upgradeConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Management& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_fault_diagnosis, autoFaultDiagnosis_);
        DARABONBA_PTR_FROM_JSON(auto_repair, autoRepair_);
        DARABONBA_PTR_FROM_JSON(auto_repair_policy, autoRepairPolicy_);
        DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
        DARABONBA_PTR_FROM_JSON(auto_upgrade_policy, autoUpgradePolicy_);
        DARABONBA_PTR_FROM_JSON(auto_vul_fix, autoVulFix_);
        DARABONBA_PTR_FROM_JSON(auto_vul_fix_policy, autoVulFixPolicy_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(upgrade_config, upgradeConfig_);
      };
      Management() = default ;
      Management(const Management &) = default ;
      Management(Management &&) = default ;
      Management(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Management() = default ;
      Management& operator=(const Management &) = default ;
      Management& operator=(Management &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpgradeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpgradeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(auto_upgrade, autoUpgrade_);
          DARABONBA_PTR_TO_JSON(max_unavailable, maxUnavailable_);
          DARABONBA_PTR_TO_JSON(surge, surge_);
          DARABONBA_PTR_TO_JSON(surge_percentage, surgePercentage_);
        };
        friend void from_json(const Darabonba::Json& j, UpgradeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(auto_upgrade, autoUpgrade_);
          DARABONBA_PTR_FROM_JSON(max_unavailable, maxUnavailable_);
          DARABONBA_PTR_FROM_JSON(surge, surge_);
          DARABONBA_PTR_FROM_JSON(surge_percentage, surgePercentage_);
        };
        UpgradeConfig() = default ;
        UpgradeConfig(const UpgradeConfig &) = default ;
        UpgradeConfig(UpgradeConfig &&) = default ;
        UpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpgradeConfig() = default ;
        UpgradeConfig& operator=(const UpgradeConfig &) = default ;
        UpgradeConfig& operator=(UpgradeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoUpgrade_ == nullptr
        && this->maxUnavailable_ == nullptr && this->surge_ == nullptr && this->surgePercentage_ == nullptr; };
        // autoUpgrade Field Functions 
        bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
        void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
        inline bool getAutoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
        inline UpgradeConfig& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


        // maxUnavailable Field Functions 
        bool hasMaxUnavailable() const { return this->maxUnavailable_ != nullptr;};
        void deleteMaxUnavailable() { this->maxUnavailable_ = nullptr;};
        inline int64_t getMaxUnavailable() const { DARABONBA_PTR_GET_DEFAULT(maxUnavailable_, 0L) };
        inline UpgradeConfig& setMaxUnavailable(int64_t maxUnavailable) { DARABONBA_PTR_SET_VALUE(maxUnavailable_, maxUnavailable) };


        // surge Field Functions 
        bool hasSurge() const { return this->surge_ != nullptr;};
        void deleteSurge() { this->surge_ = nullptr;};
        inline int64_t getSurge() const { DARABONBA_PTR_GET_DEFAULT(surge_, 0L) };
        inline UpgradeConfig& setSurge(int64_t surge) { DARABONBA_PTR_SET_VALUE(surge_, surge) };


        // surgePercentage Field Functions 
        bool hasSurgePercentage() const { return this->surgePercentage_ != nullptr;};
        void deleteSurgePercentage() { this->surgePercentage_ = nullptr;};
        inline int64_t getSurgePercentage() const { DARABONBA_PTR_GET_DEFAULT(surgePercentage_, 0L) };
        inline UpgradeConfig& setSurgePercentage(int64_t surgePercentage) { DARABONBA_PTR_SET_VALUE(surgePercentage_, surgePercentage) };


      protected:
        // [This parameter is deprecated] Use the `auto_upgrade` parameter at the upper level instead.
        // 
        // Specifies whether to enable automatic upgrades. Valid values:
        // 
        // - `true`: enables automatic upgrades.
        // 
        // - `false`: disables automatic upgrades.
        shared_ptr<bool> autoUpgrade_ {};
        // The maximum number of unavailable nodes.
        // Valid values: [1,1000\\].
        // 
        // Default value: 1.
        shared_ptr<int64_t> maxUnavailable_ {};
        // The number of extra nodes. You can specify either this parameter or `surge_percentage`.
        // 
        // Nodes become unavailable during upgrades. You can create extra nodes to compensate for the cluster workload.
        // 
        // > The number of extra nodes should not exceed the current number of nodes.
        shared_ptr<int64_t> surge_ {};
        // The percentage of extra nodes. You can specify either this parameter or `surge`.
        // 
        // Number of extra nodes = Extra node percentage × Number of nodes. For example, if the extra node percentage is set to 50% and there are 6 existing nodes, the number of extra nodes = 50% × 6 = 3.
        shared_ptr<int64_t> surgePercentage_ {};
      };

      class AutoVulFixPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoVulFixPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(exclude_packages, excludePackages_);
          DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
          DARABONBA_PTR_TO_JSON(vul_level, vulLevel_);
        };
        friend void from_json(const Darabonba::Json& j, AutoVulFixPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(exclude_packages, excludePackages_);
          DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
          DARABONBA_PTR_FROM_JSON(vul_level, vulLevel_);
        };
        AutoVulFixPolicy() = default ;
        AutoVulFixPolicy(const AutoVulFixPolicy &) = default ;
        AutoVulFixPolicy(AutoVulFixPolicy &&) = default ;
        AutoVulFixPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoVulFixPolicy() = default ;
        AutoVulFixPolicy& operator=(const AutoVulFixPolicy &) = default ;
        AutoVulFixPolicy& operator=(AutoVulFixPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->excludePackages_ == nullptr
        && this->restartNode_ == nullptr && this->vulLevel_ == nullptr; };
        // excludePackages Field Functions 
        bool hasExcludePackages() const { return this->excludePackages_ != nullptr;};
        void deleteExcludePackages() { this->excludePackages_ = nullptr;};
        inline string getExcludePackages() const { DARABONBA_PTR_GET_DEFAULT(excludePackages_, "") };
        inline AutoVulFixPolicy& setExcludePackages(string excludePackages) { DARABONBA_PTR_SET_VALUE(excludePackages_, excludePackages) };


        // restartNode Field Functions 
        bool hasRestartNode() const { return this->restartNode_ != nullptr;};
        void deleteRestartNode() { this->restartNode_ = nullptr;};
        inline bool getRestartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
        inline AutoVulFixPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


        // vulLevel Field Functions 
        bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
        void deleteVulLevel() { this->vulLevel_ = nullptr;};
        inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
        inline AutoVulFixPolicy& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


      protected:
        // The packages to exclude during vulnerability fixes.
        // 
        // Default value: `kernel`.
        shared_ptr<string> excludePackages_ {};
        // Specifies whether to allow node restarts. This parameter takes effect only when `auto_vul_fix=true`. Valid values:
        // - `true`: allows node restarts.
        // - `false`: does not allow node restarts.
        // 
        // Default value: `true`.
        shared_ptr<bool> restartNode_ {};
        // The vulnerability levels that are allowed for automatic fixes, separated by commas. Example: `asap,later`. Supported vulnerability levels:
        // 
        // - `asap`: high
        // - `later`: medium
        // - `nntf`: low
        // 
        // Default value: `asap`.
        shared_ptr<string> vulLevel_ {};
      };

      class AutoUpgradePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoUpgradePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
          DARABONBA_PTR_TO_JSON(auto_upgrade_os, autoUpgradeOs_);
          DARABONBA_PTR_TO_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
        };
        friend void from_json(const Darabonba::Json& j, AutoUpgradePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
          DARABONBA_PTR_FROM_JSON(auto_upgrade_os, autoUpgradeOs_);
          DARABONBA_PTR_FROM_JSON(auto_upgrade_runtime, autoUpgradeRuntime_);
        };
        AutoUpgradePolicy() = default ;
        AutoUpgradePolicy(const AutoUpgradePolicy &) = default ;
        AutoUpgradePolicy(AutoUpgradePolicy &&) = default ;
        AutoUpgradePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoUpgradePolicy() = default ;
        AutoUpgradePolicy& operator=(const AutoUpgradePolicy &) = default ;
        AutoUpgradePolicy& operator=(AutoUpgradePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoUpgradeKubelet_ == nullptr
        && this->autoUpgradeOs_ == nullptr && this->autoUpgradeRuntime_ == nullptr; };
        // autoUpgradeKubelet Field Functions 
        bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
        void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
        inline bool getAutoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
        inline AutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


        // autoUpgradeOs Field Functions 
        bool hasAutoUpgradeOs() const { return this->autoUpgradeOs_ != nullptr;};
        void deleteAutoUpgradeOs() { this->autoUpgradeOs_ = nullptr;};
        inline bool getAutoUpgradeOs() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeOs_, false) };
        inline AutoUpgradePolicy& setAutoUpgradeOs(bool autoUpgradeOs) { DARABONBA_PTR_SET_VALUE(autoUpgradeOs_, autoUpgradeOs) };


        // autoUpgradeRuntime Field Functions 
        bool hasAutoUpgradeRuntime() const { return this->autoUpgradeRuntime_ != nullptr;};
        void deleteAutoUpgradeRuntime() { this->autoUpgradeRuntime_ = nullptr;};
        inline bool getAutoUpgradeRuntime() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeRuntime_, false) };
        inline AutoUpgradePolicy& setAutoUpgradeRuntime(bool autoUpgradeRuntime) { DARABONBA_PTR_SET_VALUE(autoUpgradeRuntime_, autoUpgradeRuntime) };


      protected:
        // Specifies whether to allow automatic kubelet upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // - `true`: allows automatic kubelet upgrades.
        // - `false`: does not allow automatic kubelet upgrades.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgradeKubelet_ {};
        // Specifies whether to allow automatic operating system upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // - `true`: allows automatic operating system upgrades.
        // - `false`: does not allow automatic operating system upgrades.
        // 
        // 
        // Default value: `false`.
        shared_ptr<bool> autoUpgradeOs_ {};
        // Specifies whether to allow automatic runtime upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // - `true`: allows automatic runtime upgrades.
        // - `false`: does not allow automatic runtime upgrades.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgradeRuntime_ {};
      };

      class AutoRepairPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoRepairPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(approval_required, approvalRequired_);
          DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
        };
        friend void from_json(const Darabonba::Json& j, AutoRepairPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(approval_required, approvalRequired_);
          DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
        };
        AutoRepairPolicy() = default ;
        AutoRepairPolicy(const AutoRepairPolicy &) = default ;
        AutoRepairPolicy(AutoRepairPolicy &&) = default ;
        AutoRepairPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoRepairPolicy() = default ;
        AutoRepairPolicy& operator=(const AutoRepairPolicy &) = default ;
        AutoRepairPolicy& operator=(AutoRepairPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->approvalRequired_ == nullptr
        && this->restartNode_ == nullptr; };
        // approvalRequired Field Functions 
        bool hasApprovalRequired() const { return this->approvalRequired_ != nullptr;};
        void deleteApprovalRequired() { this->approvalRequired_ = nullptr;};
        inline bool getApprovalRequired() const { DARABONBA_PTR_GET_DEFAULT(approvalRequired_, false) };
        inline AutoRepairPolicy& setApprovalRequired(bool approvalRequired) { DARABONBA_PTR_SET_VALUE(approvalRequired_, approvalRequired) };


        // restartNode Field Functions 
        bool hasRestartNode() const { return this->restartNode_ != nullptr;};
        void deleteRestartNode() { this->restartNode_ = nullptr;};
        inline bool getRestartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
        inline AutoRepairPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


      protected:
        // Specifies whether manual approval is required for node repair.
        shared_ptr<bool> approvalRequired_ {};
        // Specifies whether to allow node restarts. This parameter takes effect only when `auto_repair=true`. Valid values:
        // 
        // - `true`: allows node restarts.
        // - `false`: does not allow node restarts.
        // 
        // Default value: `true`.
        shared_ptr<bool> restartNode_ {};
      };

      virtual bool empty() const override { return this->autoFaultDiagnosis_ == nullptr
        && this->autoRepair_ == nullptr && this->autoRepairPolicy_ == nullptr && this->autoUpgrade_ == nullptr && this->autoUpgradePolicy_ == nullptr && this->autoVulFix_ == nullptr
        && this->autoVulFixPolicy_ == nullptr && this->enable_ == nullptr && this->upgradeConfig_ == nullptr; };
      // autoFaultDiagnosis Field Functions 
      bool hasAutoFaultDiagnosis() const { return this->autoFaultDiagnosis_ != nullptr;};
      void deleteAutoFaultDiagnosis() { this->autoFaultDiagnosis_ = nullptr;};
      inline bool getAutoFaultDiagnosis() const { DARABONBA_PTR_GET_DEFAULT(autoFaultDiagnosis_, false) };
      inline Management& setAutoFaultDiagnosis(bool autoFaultDiagnosis) { DARABONBA_PTR_SET_VALUE(autoFaultDiagnosis_, autoFaultDiagnosis) };


      // autoRepair Field Functions 
      bool hasAutoRepair() const { return this->autoRepair_ != nullptr;};
      void deleteAutoRepair() { this->autoRepair_ = nullptr;};
      inline bool getAutoRepair() const { DARABONBA_PTR_GET_DEFAULT(autoRepair_, false) };
      inline Management& setAutoRepair(bool autoRepair) { DARABONBA_PTR_SET_VALUE(autoRepair_, autoRepair) };


      // autoRepairPolicy Field Functions 
      bool hasAutoRepairPolicy() const { return this->autoRepairPolicy_ != nullptr;};
      void deleteAutoRepairPolicy() { this->autoRepairPolicy_ = nullptr;};
      inline const Management::AutoRepairPolicy & getAutoRepairPolicy() const { DARABONBA_PTR_GET_CONST(autoRepairPolicy_, Management::AutoRepairPolicy) };
      inline Management::AutoRepairPolicy getAutoRepairPolicy() { DARABONBA_PTR_GET(autoRepairPolicy_, Management::AutoRepairPolicy) };
      inline Management& setAutoRepairPolicy(const Management::AutoRepairPolicy & autoRepairPolicy) { DARABONBA_PTR_SET_VALUE(autoRepairPolicy_, autoRepairPolicy) };
      inline Management& setAutoRepairPolicy(Management::AutoRepairPolicy && autoRepairPolicy) { DARABONBA_PTR_SET_RVALUE(autoRepairPolicy_, autoRepairPolicy) };


      // autoUpgrade Field Functions 
      bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
      void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
      inline bool getAutoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, false) };
      inline Management& setAutoUpgrade(bool autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


      // autoUpgradePolicy Field Functions 
      bool hasAutoUpgradePolicy() const { return this->autoUpgradePolicy_ != nullptr;};
      void deleteAutoUpgradePolicy() { this->autoUpgradePolicy_ = nullptr;};
      inline const Management::AutoUpgradePolicy & getAutoUpgradePolicy() const { DARABONBA_PTR_GET_CONST(autoUpgradePolicy_, Management::AutoUpgradePolicy) };
      inline Management::AutoUpgradePolicy getAutoUpgradePolicy() { DARABONBA_PTR_GET(autoUpgradePolicy_, Management::AutoUpgradePolicy) };
      inline Management& setAutoUpgradePolicy(const Management::AutoUpgradePolicy & autoUpgradePolicy) { DARABONBA_PTR_SET_VALUE(autoUpgradePolicy_, autoUpgradePolicy) };
      inline Management& setAutoUpgradePolicy(Management::AutoUpgradePolicy && autoUpgradePolicy) { DARABONBA_PTR_SET_RVALUE(autoUpgradePolicy_, autoUpgradePolicy) };


      // autoVulFix Field Functions 
      bool hasAutoVulFix() const { return this->autoVulFix_ != nullptr;};
      void deleteAutoVulFix() { this->autoVulFix_ = nullptr;};
      inline bool getAutoVulFix() const { DARABONBA_PTR_GET_DEFAULT(autoVulFix_, false) };
      inline Management& setAutoVulFix(bool autoVulFix) { DARABONBA_PTR_SET_VALUE(autoVulFix_, autoVulFix) };


      // autoVulFixPolicy Field Functions 
      bool hasAutoVulFixPolicy() const { return this->autoVulFixPolicy_ != nullptr;};
      void deleteAutoVulFixPolicy() { this->autoVulFixPolicy_ = nullptr;};
      inline const Management::AutoVulFixPolicy & getAutoVulFixPolicy() const { DARABONBA_PTR_GET_CONST(autoVulFixPolicy_, Management::AutoVulFixPolicy) };
      inline Management::AutoVulFixPolicy getAutoVulFixPolicy() { DARABONBA_PTR_GET(autoVulFixPolicy_, Management::AutoVulFixPolicy) };
      inline Management& setAutoVulFixPolicy(const Management::AutoVulFixPolicy & autoVulFixPolicy) { DARABONBA_PTR_SET_VALUE(autoVulFixPolicy_, autoVulFixPolicy) };
      inline Management& setAutoVulFixPolicy(Management::AutoVulFixPolicy && autoVulFixPolicy) { DARABONBA_PTR_SET_RVALUE(autoVulFixPolicy_, autoVulFixPolicy) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Management& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // upgradeConfig Field Functions 
      bool hasUpgradeConfig() const { return this->upgradeConfig_ != nullptr;};
      void deleteUpgradeConfig() { this->upgradeConfig_ = nullptr;};
      inline const Management::UpgradeConfig & getUpgradeConfig() const { DARABONBA_PTR_GET_CONST(upgradeConfig_, Management::UpgradeConfig) };
      inline Management::UpgradeConfig getUpgradeConfig() { DARABONBA_PTR_GET(upgradeConfig_, Management::UpgradeConfig) };
      inline Management& setUpgradeConfig(const Management::UpgradeConfig & upgradeConfig) { DARABONBA_PTR_SET_VALUE(upgradeConfig_, upgradeConfig) };
      inline Management& setUpgradeConfig(Management::UpgradeConfig && upgradeConfig) { DARABONBA_PTR_SET_RVALUE(upgradeConfig_, upgradeConfig) };


    protected:
      shared_ptr<bool> autoFaultDiagnosis_ {};
      // Specifies whether to automatically repair nodes. This parameter takes effect only when `enable=true`.
      // 
      // - `true`: automatically repairs nodes.
      // 
      // - `false`: does not automatically repair nodes.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoRepair_ {};
      // The automatic node repair policy.
      shared_ptr<Management::AutoRepairPolicy> autoRepairPolicy_ {};
      // Specifies whether to automatically upgrade nodes. This parameter takes effect only when `enable=true`.
      // - `true`: enables automatic upgrades.
      // - `false`: disables automatic upgrades.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoUpgrade_ {};
      // The automatic node upgrade policy.
      shared_ptr<Management::AutoUpgradePolicy> autoUpgradePolicy_ {};
      // Specifies whether to automatically fix CVE vulnerabilities. This parameter takes effect only when `enable=true`.
      // 
      // - `true`: allows automatic CVE fixes.
      // - `false`: does not allow automatic CVE fixes.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoVulFix_ {};
      // The automatic CVE fix policy.
      shared_ptr<Management::AutoVulFixPolicy> autoVulFixPolicy_ {};
      // Specifies whether to enable the managed feature for the node pool. Valid values:
      // 
      // - `true`: enables the managed feature.
      // 
      // - `false`: disables the managed feature. Other related configurations take effect only when enable=true.
      // 
      // Default value: false.
      shared_ptr<bool> enable_ {};
      // [This parameter is deprecated] Use the `auto_upgrade` parameter at the upper level instead.
      // 
      // The automatic upgrade configuration. This parameter takes effect only when `enable=true`.
      shared_ptr<Management::UpgradeConfig> upgradeConfig_ {};
    };

    class KubernetesConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KubernetesConfig& obj) { 
        DARABONBA_PTR_TO_JSON(cms_enabled, cmsEnabled_);
        DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(node_name_mode, nodeNameMode_);
        DARABONBA_PTR_TO_JSON(pre_user_data, preUserData_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(runtime_version, runtimeVersion_);
        DARABONBA_PTR_TO_JSON(taints, taints_);
        DARABONBA_PTR_TO_JSON(unschedulable, unschedulable_);
        DARABONBA_PTR_TO_JSON(user_data, userData_);
      };
      friend void from_json(const Darabonba::Json& j, KubernetesConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(cms_enabled, cmsEnabled_);
        DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(node_name_mode, nodeNameMode_);
        DARABONBA_PTR_FROM_JSON(pre_user_data, preUserData_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(runtime_version, runtimeVersion_);
        DARABONBA_PTR_FROM_JSON(taints, taints_);
        DARABONBA_PTR_FROM_JSON(unschedulable, unschedulable_);
        DARABONBA_PTR_FROM_JSON(user_data, userData_);
      };
      KubernetesConfig() = default ;
      KubernetesConfig(const KubernetesConfig &) = default ;
      KubernetesConfig(KubernetesConfig &&) = default ;
      KubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KubernetesConfig() = default ;
      KubernetesConfig& operator=(const KubernetesConfig &) = default ;
      KubernetesConfig& operator=(KubernetesConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cmsEnabled_ == nullptr
        && this->cpuPolicy_ == nullptr && this->labels_ == nullptr && this->nodeNameMode_ == nullptr && this->preUserData_ == nullptr && this->runtime_ == nullptr
        && this->runtimeVersion_ == nullptr && this->taints_ == nullptr && this->unschedulable_ == nullptr && this->userData_ == nullptr; };
      // cmsEnabled Field Functions 
      bool hasCmsEnabled() const { return this->cmsEnabled_ != nullptr;};
      void deleteCmsEnabled() { this->cmsEnabled_ = nullptr;};
      inline bool getCmsEnabled() const { DARABONBA_PTR_GET_DEFAULT(cmsEnabled_, false) };
      inline KubernetesConfig& setCmsEnabled(bool cmsEnabled) { DARABONBA_PTR_SET_VALUE(cmsEnabled_, cmsEnabled) };


      // cpuPolicy Field Functions 
      bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
      void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
      inline string getCpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
      inline KubernetesConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Tag> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Tag>) };
      inline vector<Tag> getLabels() { DARABONBA_PTR_GET(labels_, vector<Tag>) };
      inline KubernetesConfig& setLabels(const vector<Tag> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline KubernetesConfig& setLabels(vector<Tag> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // nodeNameMode Field Functions 
      bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
      void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
      inline string getNodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
      inline KubernetesConfig& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


      // preUserData Field Functions 
      bool hasPreUserData() const { return this->preUserData_ != nullptr;};
      void deletePreUserData() { this->preUserData_ = nullptr;};
      inline string getPreUserData() const { DARABONBA_PTR_GET_DEFAULT(preUserData_, "") };
      inline KubernetesConfig& setPreUserData(string preUserData) { DARABONBA_PTR_SET_VALUE(preUserData_, preUserData) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline KubernetesConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // runtimeVersion Field Functions 
      bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
      void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
      inline string getRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
      inline KubernetesConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


      // taints Field Functions 
      bool hasTaints() const { return this->taints_ != nullptr;};
      void deleteTaints() { this->taints_ = nullptr;};
      inline const vector<Taint> & getTaints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Taint>) };
      inline vector<Taint> getTaints() { DARABONBA_PTR_GET(taints_, vector<Taint>) };
      inline KubernetesConfig& setTaints(const vector<Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
      inline KubernetesConfig& setTaints(vector<Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


      // unschedulable Field Functions 
      bool hasUnschedulable() const { return this->unschedulable_ != nullptr;};
      void deleteUnschedulable() { this->unschedulable_ = nullptr;};
      inline bool getUnschedulable() const { DARABONBA_PTR_GET_DEFAULT(unschedulable_, false) };
      inline KubernetesConfig& setUnschedulable(bool unschedulable) { DARABONBA_PTR_SET_VALUE(unschedulable_, unschedulable) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline KubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // Specifies whether to install the CloudMonitor agent on ECS nodes. After installation, you can view monitoring information about the created ECS instances in the CloudMonitor console. We recommend that you enable this feature. Valid values:
      // 
      // - `true`: installs the CloudMonitor agent on ECS nodes.
      // 
      // - `false`: does not install the CloudMonitor agent on ECS nodes.
      // 
      // Default value: `false`.
      shared_ptr<bool> cmsEnabled_ {};
      // The CPU management policy for nodes. The following two policies are supported for clusters of version 1.12.6 and later:
      // 
      // - `static`: allows pods with certain resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
      // - `none`: uses the existing default CPU affinity scheme.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // The node labels. Adds labels to Kubernetes cluster nodes.
      shared_ptr<vector<Tag>> labels_ {};
      // The custom node name. After you customize the node name, the node name, ECS instance name, and ECS instance hostname are all changed accordingly.
      // > For Windows instances with custom node names enabled, the hostname is fixed to the IP address, with hyphens (-) replacing the periods (.) in the IP address, and does not include the prefix or suffix. 
      // 
      // The node name consists of a prefix, the node IP address, and a suffix:
      // 
      // - The total length is 2 to 64 characters. The node name must start and end with a lowercase letter or digit.
      // 
      // - The prefix and suffix can contain uppercase and lowercase letters, digits, hyphens (-), and periods (.). They must start with an uppercase or lowercase letter and cannot start or end with a hyphen (-) or period (.). Consecutive hyphens (-) or periods (.) are not allowed.
      // - The prefix is required (ECS restriction). The suffix is optional.
      // - The node IP is the full private IP address of the node.
      // 
      // Example: If the node IP address is 192.XX.YY.55, the prefix is aliyun.com, and the suffix is test:
      // 
      // - For a Linux node, the node name, ECS instance name, and ECS instance hostname are all aliyun.com192.XX.YY.55test.
      // 
      // - For a Windows node, the ECS instance hostname is 192-XX-YY-55, and the node name and ECS instance name are both aliyun.com192.XX.YY.55test.
      shared_ptr<string> nodeNameMode_ {};
      // The pre-user data for the instance. Before a node joins the cluster, the specified pre-user data script is run. For more information, see [User data scripts](https://help.aliyun.com/document_detail/49121.html).
      shared_ptr<string> preUserData_ {};
      // The container runtime name. ACK supports the following three container runtimes:
      // 
      // - containerd: recommended. Supported by all cluster versions.
      // - Sandboxed-Container.runv: sandboxed container runtime that provides higher isolation. Supported by clusters of version 1.31 and earlier.
      // - docker: no longer maintained. Supported by clusters of version 1.22 and earlier.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // The container runtime version.
      shared_ptr<string> runtimeVersion_ {};
      // The taint configuration.
      shared_ptr<vector<Taint>> taints_ {};
      // Specifies whether the nodes added through scale-out are unschedulable.
      // 
      // - true: unschedulable.
      // 
      // - false: schedulable.
      shared_ptr<bool> unschedulable_ {};
      // The instance user data. After a node joins the cluster, the specified user data script is run. For more information, see [User data scripts](https://help.aliyun.com/document_detail/49121.html).
      shared_ptr<string> userData_ {};
    };

    class InterconnectConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterconnectConfig& obj) { 
        DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(ccn_id, ccnId_);
        DARABONBA_PTR_TO_JSON(ccn_region_id, ccnRegionId_);
        DARABONBA_PTR_TO_JSON(cen_id, cenId_);
        DARABONBA_PTR_TO_JSON(improved_period, improvedPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, InterconnectConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(ccn_id, ccnId_);
        DARABONBA_PTR_FROM_JSON(ccn_region_id, ccnRegionId_);
        DARABONBA_PTR_FROM_JSON(cen_id, cenId_);
        DARABONBA_PTR_FROM_JSON(improved_period, improvedPeriod_);
      };
      InterconnectConfig() = default ;
      InterconnectConfig(const InterconnectConfig &) = default ;
      InterconnectConfig(InterconnectConfig &&) = default ;
      InterconnectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InterconnectConfig() = default ;
      InterconnectConfig& operator=(const InterconnectConfig &) = default ;
      InterconnectConfig& operator=(InterconnectConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->ccnId_ == nullptr && this->ccnRegionId_ == nullptr && this->cenId_ == nullptr && this->improvedPeriod_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
      inline InterconnectConfig& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // ccnId Field Functions 
      bool hasCcnId() const { return this->ccnId_ != nullptr;};
      void deleteCcnId() { this->ccnId_ = nullptr;};
      inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
      inline InterconnectConfig& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


      // ccnRegionId Field Functions 
      bool hasCcnRegionId() const { return this->ccnRegionId_ != nullptr;};
      void deleteCcnRegionId() { this->ccnRegionId_ = nullptr;};
      inline string getCcnRegionId() const { DARABONBA_PTR_GET_DEFAULT(ccnRegionId_, "") };
      inline InterconnectConfig& setCcnRegionId(string ccnRegionId) { DARABONBA_PTR_SET_VALUE(ccnRegionId_, ccnRegionId) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline InterconnectConfig& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // improvedPeriod Field Functions 
      bool hasImprovedPeriod() const { return this->improvedPeriod_ != nullptr;};
      void deleteImprovedPeriod() { this->improvedPeriod_ = nullptr;};
      inline string getImprovedPeriod() const { DARABONBA_PTR_GET_DEFAULT(improvedPeriod_, "") };
      inline InterconnectConfig& setImprovedPeriod(string improvedPeriod) { DARABONBA_PTR_SET_VALUE(improvedPeriod_, improvedPeriod) };


    protected:
      // [This field is deprecated]
      // 
      // The network bandwidth of the enhanced edge node pool, in Mbit/s.
      shared_ptr<int64_t> bandwidth_ {};
      // [This field is deprecated]
      // 
      // The Cloud Connect Network (CCN) instance ID bound to the enhanced edge node pool.
      shared_ptr<string> ccnId_ {};
      // [This field is deprecated]
      // 
      // The region of the Cloud Connect Network (CCN) instance associated with the enhanced edge node pool.
      shared_ptr<string> ccnRegionId_ {};
      // [This field is deprecated]
      // 
      // The Cloud Enterprise Network (CEN) instance ID bound to the enhanced edge node pool.
      shared_ptr<string> cenId_ {};
      // [This field is deprecated]
      // 
      // The subscription duration of the enhanced edge node pool, in months.
      shared_ptr<string> improvedPeriod_ {};
    };

    class EfloNodeGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EfloNodeGroup& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(group_id, groupId_);
      };
      friend void from_json(const Darabonba::Json& j, EfloNodeGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(group_id, groupId_);
      };
      EfloNodeGroup() = default ;
      EfloNodeGroup(const EfloNodeGroup &) = default ;
      EfloNodeGroup(EfloNodeGroup &&) = default ;
      EfloNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EfloNodeGroup() = default ;
      EfloNodeGroup& operator=(const EfloNodeGroup &) = default ;
      EfloNodeGroup& operator=(EfloNodeGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->groupId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline EfloNodeGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline EfloNodeGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    protected:
      // The ID of the Lingjun cluster to associate with when creating a Lingjun node pool.
      shared_ptr<string> clusterId_ {};
      // The group ID of the Lingjun cluster to associate with when creating a Lingjun node pool.
      shared_ptr<string> groupId_ {};
    };

    class AutoScaling : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoScaling& obj) { 
        DARABONBA_PTR_TO_JSON(eip_bandwidth, eipBandwidth_);
        DARABONBA_PTR_TO_JSON(eip_internet_charge_type, eipInternetChargeType_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(is_bond_eip, isBondEip_);
        DARABONBA_PTR_TO_JSON(max_instances, maxInstances_);
        DARABONBA_PTR_TO_JSON(min_instances, minInstances_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AutoScaling& obj) { 
        DARABONBA_PTR_FROM_JSON(eip_bandwidth, eipBandwidth_);
        DARABONBA_PTR_FROM_JSON(eip_internet_charge_type, eipInternetChargeType_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(is_bond_eip, isBondEip_);
        DARABONBA_PTR_FROM_JSON(max_instances, maxInstances_);
        DARABONBA_PTR_FROM_JSON(min_instances, minInstances_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      AutoScaling() = default ;
      AutoScaling(const AutoScaling &) = default ;
      AutoScaling(AutoScaling &&) = default ;
      AutoScaling(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoScaling() = default ;
      AutoScaling& operator=(const AutoScaling &) = default ;
      AutoScaling& operator=(AutoScaling &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eipBandwidth_ == nullptr
        && this->eipInternetChargeType_ == nullptr && this->enable_ == nullptr && this->isBondEip_ == nullptr && this->maxInstances_ == nullptr && this->minInstances_ == nullptr
        && this->type_ == nullptr; };
      // eipBandwidth Field Functions 
      bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
      void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
      inline int64_t getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0L) };
      inline AutoScaling& setEipBandwidth(int64_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


      // eipInternetChargeType Field Functions 
      bool hasEipInternetChargeType() const { return this->eipInternetChargeType_ != nullptr;};
      void deleteEipInternetChargeType() { this->eipInternetChargeType_ = nullptr;};
      inline string getEipInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(eipInternetChargeType_, "") };
      inline AutoScaling& setEipInternetChargeType(string eipInternetChargeType) { DARABONBA_PTR_SET_VALUE(eipInternetChargeType_, eipInternetChargeType) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoScaling& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // isBondEip Field Functions 
      bool hasIsBondEip() const { return this->isBondEip_ != nullptr;};
      void deleteIsBondEip() { this->isBondEip_ = nullptr;};
      inline bool getIsBondEip() const { DARABONBA_PTR_GET_DEFAULT(isBondEip_, false) };
      inline AutoScaling& setIsBondEip(bool isBondEip) { DARABONBA_PTR_SET_VALUE(isBondEip_, isBondEip) };


      // maxInstances Field Functions 
      bool hasMaxInstances() const { return this->maxInstances_ != nullptr;};
      void deleteMaxInstances() { this->maxInstances_ = nullptr;};
      inline int64_t getMaxInstances() const { DARABONBA_PTR_GET_DEFAULT(maxInstances_, 0L) };
      inline AutoScaling& setMaxInstances(int64_t maxInstances) { DARABONBA_PTR_SET_VALUE(maxInstances_, maxInstances) };


      // minInstances Field Functions 
      bool hasMinInstances() const { return this->minInstances_ != nullptr;};
      void deleteMinInstances() { this->minInstances_ = nullptr;};
      inline int64_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
      inline AutoScaling& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AutoScaling& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // [This parameter is deprecated] Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // The peak bandwidth of the EIP. Unit: Mbit/s.
      shared_ptr<int64_t> eipBandwidth_ {};
      // [This parameter is deprecated] Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // The billing method for the EIP. Valid values:
      // - `PayByBandwidth`: pay-by-bandwidth.
      // - `PayByTraffic`: pay-by-data-transfer.
      // 
      // Default value: `PayByBandwidth`.
      shared_ptr<string> eipInternetChargeType_ {};
      // Specifies whether to enable automatic scaling. Valid values:
      // 
      // - `true`: enables the automatic scaling feature for the node pool. When the cluster capacity planning cannot meet application pod scheduling requirements, ACK automatically scales node resources based on the configured minimum and maximum instance counts. Clusters of version 1.24 and later use instant node elastic scaling by default. Clusters of versions earlier than 1.24 use node automatic scaling by default. For more information, see [Node scaling](https://help.aliyun.com/document_detail/2746785.html).
      // 
      // - `false`: disables automatic scaling. ACK adjusts the number of nodes in the node pool based on the configured desired node count and always maintains the node count at the desired value.
      // 
      // When this parameter is set to false, other configuration parameters in `auto_scaling` do not take effect.
      // 
      // Default value: `false`.
      shared_ptr<bool> enable_ {};
      // [This parameter is deprecated] This parameter is deprecated. Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // Specifies whether to associate an EIP. Valid values:
      // 
      // - `true`: associates an EIP.
      // 
      // - `false`: does not associate an EIP.
      // 
      // Default value: `false`.
      shared_ptr<bool> isBondEip_ {};
      // The maximum number of instances that can be scaled in the node pool, excluding your existing instances. This parameter takes effect only when `enable=true`.
      // 
      // Valid values: [min_instances, 2000]. Default value: 0.
      shared_ptr<int64_t> maxInstances_ {};
      // The minimum number of instances that can be scaled in the node pool, excluding your existing instances. This parameter takes effect only when `enable=true`.
      // 
      // Valid values: [0, max_instances]. Default value: 0.
      // 
      // > - If the minimum number of instances is not 0, the scaling group performs automatic creation of the corresponding number of ECS instances after the elastic scaling feature takes effect.
      // > - Do not set the maximum number of instances to a value smaller than the current number of nodes in the node pool. Otherwise, nodes in the node pool are scaled in immediately after the elastic scaling feature takes effect.
      shared_ptr<int64_t> minInstances_ {};
      // The elastic scaling instance type. This parameter takes effect only when `enable=true`. Valid values:
      // 
      // - `cpu`: regular instance type.
      // 
      // - `gpu`: GPU instance type.
      // 
      // - `gpushare`: GPU-shared instance type.
      // 
      // - `spot`: spot instance type.
      // 
      // Default value: `cpu`.
      // >Notice: This parameter cannot be modified after the node pool is created.
      shared_ptr<string> type_ {};
    };

    class AutoMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoMode& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, AutoMode& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
      };
      AutoMode() = default ;
      AutoMode(const AutoMode &) = default ;
      AutoMode(AutoMode &&) = default ;
      AutoMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoMode() = default ;
      AutoMode& operator=(const AutoMode &) = default ;
      AutoMode& operator=(AutoMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoMode& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // Specifies whether to enable intelligent managed mode.
      // Valid values:
      // - true: enables intelligent managed mode. This can be enabled only when the cluster has intelligent managed mode enabled.
      // - false: does not enable intelligent managed mode.
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->autoMode_ == nullptr
        && this->autoScaling_ == nullptr && this->count_ == nullptr && this->efloNodeGroup_ == nullptr && this->hostNetwork_ == nullptr && this->interconnectConfig_ == nullptr
        && this->interconnectMode_ == nullptr && this->intranet_ == nullptr && this->kubernetesConfig_ == nullptr && this->management_ == nullptr && this->maxNodes_ == nullptr
        && this->nodeComponents_ == nullptr && this->nodeConfig_ == nullptr && this->nodepoolInfo_ == nullptr && this->scalingGroup_ == nullptr && this->teeConfig_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const CreateClusterNodePoolRequest::AutoMode & getAutoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, CreateClusterNodePoolRequest::AutoMode) };
    inline CreateClusterNodePoolRequest::AutoMode getAutoMode() { DARABONBA_PTR_GET(autoMode_, CreateClusterNodePoolRequest::AutoMode) };
    inline CreateClusterNodePoolRequest& setAutoMode(const CreateClusterNodePoolRequest::AutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline CreateClusterNodePoolRequest& setAutoMode(CreateClusterNodePoolRequest::AutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const CreateClusterNodePoolRequest::AutoScaling & getAutoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, CreateClusterNodePoolRequest::AutoScaling) };
    inline CreateClusterNodePoolRequest::AutoScaling getAutoScaling() { DARABONBA_PTR_GET(autoScaling_, CreateClusterNodePoolRequest::AutoScaling) };
    inline CreateClusterNodePoolRequest& setAutoScaling(const CreateClusterNodePoolRequest::AutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline CreateClusterNodePoolRequest& setAutoScaling(CreateClusterNodePoolRequest::AutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline CreateClusterNodePoolRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // efloNodeGroup Field Functions 
    bool hasEfloNodeGroup() const { return this->efloNodeGroup_ != nullptr;};
    void deleteEfloNodeGroup() { this->efloNodeGroup_ = nullptr;};
    inline const CreateClusterNodePoolRequest::EfloNodeGroup & getEfloNodeGroup() const { DARABONBA_PTR_GET_CONST(efloNodeGroup_, CreateClusterNodePoolRequest::EfloNodeGroup) };
    inline CreateClusterNodePoolRequest::EfloNodeGroup getEfloNodeGroup() { DARABONBA_PTR_GET(efloNodeGroup_, CreateClusterNodePoolRequest::EfloNodeGroup) };
    inline CreateClusterNodePoolRequest& setEfloNodeGroup(const CreateClusterNodePoolRequest::EfloNodeGroup & efloNodeGroup) { DARABONBA_PTR_SET_VALUE(efloNodeGroup_, efloNodeGroup) };
    inline CreateClusterNodePoolRequest& setEfloNodeGroup(CreateClusterNodePoolRequest::EfloNodeGroup && efloNodeGroup) { DARABONBA_PTR_SET_RVALUE(efloNodeGroup_, efloNodeGroup) };


    // hostNetwork Field Functions 
    bool hasHostNetwork() const { return this->hostNetwork_ != nullptr;};
    void deleteHostNetwork() { this->hostNetwork_ = nullptr;};
    inline bool getHostNetwork() const { DARABONBA_PTR_GET_DEFAULT(hostNetwork_, false) };
    inline CreateClusterNodePoolRequest& setHostNetwork(bool hostNetwork) { DARABONBA_PTR_SET_VALUE(hostNetwork_, hostNetwork) };


    // interconnectConfig Field Functions 
    bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
    void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequest::InterconnectConfig & getInterconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, CreateClusterNodePoolRequest::InterconnectConfig) };
    inline CreateClusterNodePoolRequest::InterconnectConfig getInterconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, CreateClusterNodePoolRequest::InterconnectConfig) };
    inline CreateClusterNodePoolRequest& setInterconnectConfig(const CreateClusterNodePoolRequest::InterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
    inline CreateClusterNodePoolRequest& setInterconnectConfig(CreateClusterNodePoolRequest::InterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


    // interconnectMode Field Functions 
    bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
    void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
    inline string getInterconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
    inline CreateClusterNodePoolRequest& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline bool getIntranet() const { DARABONBA_PTR_GET_DEFAULT(intranet_, false) };
    inline CreateClusterNodePoolRequest& setIntranet(bool intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequest::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, CreateClusterNodePoolRequest::KubernetesConfig) };
    inline CreateClusterNodePoolRequest::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, CreateClusterNodePoolRequest::KubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(const CreateClusterNodePoolRequest::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline CreateClusterNodePoolRequest& setKubernetesConfig(CreateClusterNodePoolRequest::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const CreateClusterNodePoolRequest::Management & getManagement() const { DARABONBA_PTR_GET_CONST(management_, CreateClusterNodePoolRequest::Management) };
    inline CreateClusterNodePoolRequest::Management getManagement() { DARABONBA_PTR_GET(management_, CreateClusterNodePoolRequest::Management) };
    inline CreateClusterNodePoolRequest& setManagement(const CreateClusterNodePoolRequest::Management & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline CreateClusterNodePoolRequest& setManagement(CreateClusterNodePoolRequest::Management && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // maxNodes Field Functions 
    bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
    void deleteMaxNodes() { this->maxNodes_ = nullptr;};
    inline int64_t getMaxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
    inline CreateClusterNodePoolRequest& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


    // nodeComponents Field Functions 
    bool hasNodeComponents() const { return this->nodeComponents_ != nullptr;};
    void deleteNodeComponents() { this->nodeComponents_ = nullptr;};
    inline const vector<CreateClusterNodePoolRequest::NodeComponents> & getNodeComponents() const { DARABONBA_PTR_GET_CONST(nodeComponents_, vector<CreateClusterNodePoolRequest::NodeComponents>) };
    inline vector<CreateClusterNodePoolRequest::NodeComponents> getNodeComponents() { DARABONBA_PTR_GET(nodeComponents_, vector<CreateClusterNodePoolRequest::NodeComponents>) };
    inline CreateClusterNodePoolRequest& setNodeComponents(const vector<CreateClusterNodePoolRequest::NodeComponents> & nodeComponents) { DARABONBA_PTR_SET_VALUE(nodeComponents_, nodeComponents) };
    inline CreateClusterNodePoolRequest& setNodeComponents(vector<CreateClusterNodePoolRequest::NodeComponents> && nodeComponents) { DARABONBA_PTR_SET_RVALUE(nodeComponents_, nodeComponents) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequest::NodeConfig & getNodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, CreateClusterNodePoolRequest::NodeConfig) };
    inline CreateClusterNodePoolRequest::NodeConfig getNodeConfig() { DARABONBA_PTR_GET(nodeConfig_, CreateClusterNodePoolRequest::NodeConfig) };
    inline CreateClusterNodePoolRequest& setNodeConfig(const CreateClusterNodePoolRequest::NodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline CreateClusterNodePoolRequest& setNodeConfig(CreateClusterNodePoolRequest::NodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const CreateClusterNodePoolRequest::NodepoolInfo & getNodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, CreateClusterNodePoolRequest::NodepoolInfo) };
    inline CreateClusterNodePoolRequest::NodepoolInfo getNodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, CreateClusterNodePoolRequest::NodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(const CreateClusterNodePoolRequest::NodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline CreateClusterNodePoolRequest& setNodepoolInfo(CreateClusterNodePoolRequest::NodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const CreateClusterNodePoolRequest::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, CreateClusterNodePoolRequest::ScalingGroup) };
    inline CreateClusterNodePoolRequest::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, CreateClusterNodePoolRequest::ScalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(const CreateClusterNodePoolRequest::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline CreateClusterNodePoolRequest& setScalingGroup(CreateClusterNodePoolRequest::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const CreateClusterNodePoolRequest::TeeConfig & getTeeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, CreateClusterNodePoolRequest::TeeConfig) };
    inline CreateClusterNodePoolRequest::TeeConfig getTeeConfig() { DARABONBA_PTR_GET(teeConfig_, CreateClusterNodePoolRequest::TeeConfig) };
    inline CreateClusterNodePoolRequest& setTeeConfig(const CreateClusterNodePoolRequest::TeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline CreateClusterNodePoolRequest& setTeeConfig(CreateClusterNodePoolRequest::TeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


  protected:
    // The intelligent managed mode configuration for the node pool.
    shared_ptr<CreateClusterNodePoolRequest::AutoMode> autoMode_ {};
    // The elastic scaling configuration.
    shared_ptr<CreateClusterNodePoolRequest::AutoScaling> autoScaling_ {};
    // [This field is deprecated] Use desired_size instead.
    // 
    // The number of nodes in the node pool.
    shared_ptr<int64_t> count_ {};
    // The Lingjun node pool configuration.
    shared_ptr<CreateClusterNodePoolRequest::EfloNodeGroup> efloNodeGroup_ {};
    // Specifies whether the pod network uses host network mode.
    // - `true`: host network. Pods directly use the host network stack and share the IP address and ports with the host.
    // - `false`: container network. Pods have independent network stacks and do not occupy host network ports.
    shared_ptr<bool> hostNetwork_ {};
    // [This field is deprecated]
    // 
    // The edge node pool configuration.
    shared_ptr<CreateClusterNodePoolRequest::InterconnectConfig> interconnectConfig_ {};
    // The network type of the edge node pool. This parameter takes effect only for node pools whose `type` is `edge`. Valid values:
    // 
    // - `basic`: public network. Nodes in cloud node pool interact with cloud nodes over the Internet. Applications in cloud node pool cannot directly access the cloud VPC internal network.
    // - `private`: private network. Nodes in cloud node pool connect to the cloud through Express Connect, VPN, or CEN, providing higher cloud-edge communication quality and more effective security.
    shared_ptr<string> interconnectMode_ {};
    // Specifies whether Layer 3 network connectivity is enabled among nodes within the edge node pool.
    // - `true`: enabled. All nodes in the node pool have Layer 3 network connectivity with each other.
    // - `false`: disabled. All nodes in the node pool do not have Layer 3 network connectivity with each other.
    shared_ptr<bool> intranet_ {};
    // The cluster-related configuration.
    shared_ptr<CreateClusterNodePoolRequest::KubernetesConfig> kubernetesConfig_ {};
    // The managed node pool configuration.
    shared_ptr<CreateClusterNodePoolRequest::Management> management_ {};
    // [This field is deprecated]
    // 
    // The maximum number of nodes allowed in the edge node pool.
    shared_ptr<int64_t> maxNodes_ {};
    // The list of node components.
    shared_ptr<vector<CreateClusterNodePoolRequest::NodeComponents>> nodeComponents_ {};
    // The node configuration.
    shared_ptr<CreateClusterNodePoolRequest::NodeConfig> nodeConfig_ {};
    // The node pool configuration.
    shared_ptr<CreateClusterNodePoolRequest::NodepoolInfo> nodepoolInfo_ {};
    // The scaling group configuration for the node pool.
    shared_ptr<CreateClusterNodePoolRequest::ScalingGroup> scalingGroup_ {};
    // The confidential computing cluster configuration.
    shared_ptr<CreateClusterNodePoolRequest::TeeConfig> teeConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
