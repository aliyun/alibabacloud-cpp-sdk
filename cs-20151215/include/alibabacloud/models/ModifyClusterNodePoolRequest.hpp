// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/DiskInit.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
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
  class ModifyClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_TO_JSON(management, management_);
      DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
      DARABONBA_PTR_TO_JSON(update_nodes, updateNodes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
      DARABONBA_PTR_FROM_JSON(management, management_);
      DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
      DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
      DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
      DARABONBA_PTR_FROM_JSON(update_nodes, updateNodes_);
    };
    ModifyClusterNodePoolRequest() = default ;
    ModifyClusterNodePoolRequest(const ModifyClusterNodePoolRequest &) = default ;
    ModifyClusterNodePoolRequest(ModifyClusterNodePoolRequest &&) = default ;
    ModifyClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolRequest() = default ;
    ModifyClusterNodePoolRequest& operator=(const ModifyClusterNodePoolRequest &) = default ;
    ModifyClusterNodePoolRequest& operator=(ModifyClusterNodePoolRequest &&) = default ;
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
      // Enable the Kubernetes cluster for confidential computing. Valid values:
      // 
      // - `true`: Enable.
      // 
      // - `false`: Disable.
      // 
      // Default value: `false`.
      shared_ptr<bool> teeEnable_ {};
    };

    class ScalingGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingGroup& obj) { 
        DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(compensate_with_on_demand, compensateWithOnDemand_);
        DARABONBA_PTR_TO_JSON(data_disks, dataDisks_);
        DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_TO_JSON(desired_size, desiredSize_);
        DARABONBA_PTR_TO_JSON(disk_init, diskInit_);
        DARABONBA_PTR_TO_JSON(image_id, imageId_);
        DARABONBA_PTR_TO_JSON(image_type, imageType_);
        DARABONBA_PTR_TO_JSON(instance_charge_type, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(instance_patterns, instancePatterns_);
        DARABONBA_PTR_TO_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_TO_JSON(internet_charge_type, internetChargeType_);
        DARABONBA_PTR_TO_JSON(internet_max_bandwidth_out, internetMaxBandwidthOut_);
        DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
        DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
        DARABONBA_PTR_TO_JSON(multi_az_policy, multiAzPolicy_);
        DARABONBA_PTR_TO_JSON(on_demand_base_capacity, onDemandBaseCapacity_);
        DARABONBA_PTR_TO_JSON(on_demand_percentage_above_base_capacity, onDemandPercentageAboveBaseCapacity_);
        DARABONBA_PTR_TO_JSON(period, period_);
        DARABONBA_PTR_TO_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_TO_JSON(platform, platform_);
        DARABONBA_PTR_TO_JSON(private_pool_options, privatePoolOptions_);
        DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
        DARABONBA_PTR_TO_JSON(resource_pool_options, resourcePoolOptions_);
        DARABONBA_PTR_TO_JSON(scaling_policy, scalingPolicy_);
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
        DARABONBA_PTR_TO_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(compensate_with_on_demand, compensateWithOnDemand_);
        DARABONBA_PTR_FROM_JSON(data_disks, dataDisks_);
        DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_FROM_JSON(desired_size, desiredSize_);
        DARABONBA_PTR_FROM_JSON(disk_init, diskInit_);
        DARABONBA_PTR_FROM_JSON(image_id, imageId_);
        DARABONBA_PTR_FROM_JSON(image_type, imageType_);
        DARABONBA_PTR_FROM_JSON(instance_charge_type, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(instance_patterns, instancePatterns_);
        DARABONBA_PTR_FROM_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(internet_charge_type, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(internet_max_bandwidth_out, internetMaxBandwidthOut_);
        DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
        DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
        DARABONBA_PTR_FROM_JSON(multi_az_policy, multiAzPolicy_);
        DARABONBA_PTR_FROM_JSON(on_demand_base_capacity, onDemandBaseCapacity_);
        DARABONBA_PTR_FROM_JSON(on_demand_percentage_above_base_capacity, onDemandPercentageAboveBaseCapacity_);
        DARABONBA_PTR_FROM_JSON(period, period_);
        DARABONBA_PTR_FROM_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(platform, platform_);
        DARABONBA_PTR_FROM_JSON(private_pool_options, privatePoolOptions_);
        DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
        DARABONBA_PTR_FROM_JSON(resource_pool_options, resourcePoolOptions_);
        DARABONBA_PTR_FROM_JSON(scaling_policy, scalingPolicy_);
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
        // The maximum hourly price for the instance.
        // 
        // <props="china">
        // 
        // Unit: CNY/hour.
        // 
        // 
        // 
        // <props="intl">
        // 
        // Unit: USD/hour.
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
        // The list of private pool IDs, which are the IDs of elastic assurance or capacity reservation services. You can only pass Target mode private pool IDs. The value of N can range from 1 to 20.
        shared_ptr<vector<string>> privatePoolIds_ {};
        // The resource pool policy for instance creation. Resource pools include private pools generated by elastic assurance or capacity reservation services, and public pools. Valid values: PrivatePoolFirst: Prioritizes private pools. If resouce_pool_options.private_pool_ids is specified, it uses the specified private pools first. If no private pool is specified or the specified capacity is insufficient, it automatically matches open-type private pools. If no suitable private pool is found, it uses the public pool. PrivatePoolOnly: Uses only private pools. You must specify resouce_pool_options.private_pool_ids. If the specified private pool capacity is insufficient, the instance startup fails. None: Does not use a resource pool policy. Default value: None.
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
        // The private node pool ID. This is required when `match_criteria` is set to `Target`.
        shared_ptr<string> id_ {};
        // The private node pool type, which determines the capacity option for instance startup. Elastic assurance services or capacity reservation services generate private pool capacity for instance startup. Valid values:
        // 
        // - `Open`: Open mode. Automatically matches open-type private pool capacity. If no suitable private pool is found, public pool resources are used.
        // 
        // - `Target`: Specified mode. Starts instances using the specified private pool capacity. If the capacity is unavailable, the instance startup fails.
        // 
        // - `None`: No mode. The instance startup does not use private pool capacity.
        shared_ptr<string> matchCriteria_ {};
      };

      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->dataDisks_ == nullptr && this->deploymentsetId_ == nullptr && this->desiredSize_ == nullptr
        && this->diskInit_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceChargeType_ == nullptr && this->instancePatterns_ == nullptr
        && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->keyPair_ == nullptr && this->loginPassword_ == nullptr
        && this->multiAzPolicy_ == nullptr && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->platform_ == nullptr && this->privatePoolOptions_ == nullptr && this->rdsInstances_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingPolicy_ == nullptr
        && this->securityGroupIds_ == nullptr && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr
        && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategories_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskEncryptAlgorithm_ == nullptr && this->systemDiskEncrypted_ == nullptr
        && this->systemDiskKmsKeyId_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr
        && this->tags_ == nullptr && this->vswitchIds_ == nullptr; };
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


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline ScalingGroup& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline ScalingGroup& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


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
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline ScalingGroup& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingGroup& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline ScalingGroup& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline ScalingGroup& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      // Enable automatic renewal for nodes. This parameter takes effect only when `instance_charge_type` is `PrePaid`. Valid values:
      // 
      // - `true`: Enable automatic renewal.
      // 
      // - `false`: Disable automatic renewal.
      // 
      // Default value: `false`.
      shared_ptr<bool> autoRenew_ {};
      // The duration of each automatic renewal. Valid values:
      // 
      // - When PeriodUnit=Week: 1, 2, 3.
      // 
      // - When PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, 60.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // When `multi_az_policy` is set to `COST_OPTIMIZED`, this parameter specifies whether to automatically create on-demand instances to meet the required number of ECS instances if enough spot instances cannot be created due to price or inventory issues. Valid values:
      // 
      // - `true`: Allow automatic creation of on-demand instances.
      // 
      // - `false`: Disallow automatic creation of on-demand instances.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The data disk configuration for nodes. Valid values: [0, 10]. You can attach up to 10 data disks.
      shared_ptr<vector<DataDisk>> dataDisks_ {};
      // The deployment set to which the ECS instances created in the node pool belong. This setting applies only to new nodes. The deployment set of existing nodes is not changed.
      shared_ptr<string> deploymentsetId_ {};
      // The desired number of nodes in the node pool.
      // 
      // This is the total number of nodes the node pool should maintain. Configure at least 2 nodes to ensure cluster components run properly. Adjust this number to scale the node pool in or out.
      // 
      // If you do not need to create nodes, set this to 0 and adjust it manually later.
      shared_ptr<int64_t> desiredSize_ {};
      // The block device initialization configuration.
      shared_ptr<vector<DiskInit>> diskInit_ {};
      // The custom image ID. Query supported images using `DescribeKubernetesVersionMetadata`. By default, the latest system image is used.
      shared_ptr<string> imageId_ {};
      // The operating system distribution type. We recommend using this field to specify the node OS. Valid values:
      // 
      // - `AliyunLinux`: Alibaba Cloud Linux 2 image.
      // 
      // - `AliyunLinuxSecurity`: Alibaba Cloud Linux 2 UEFI image.
      // 
      // - `AliyunLinux3`: Alibaba Cloud Linux 3 image.
      // 
      // - `AliyunLinux3Arm64`: Alibaba Cloud Linux 3 ARM image.
      // 
      // - `AliyunLinux3Security`: Alibaba Cloud Linux 3 UEFI image.
      // 
      // - `CentOS`: CentOS image.
      // 
      // - `Windows`: Windows image.
      // 
      // - `WindowsCore`: Windows Core image.
      // 
      // - `ContainerOS`: Container-optimized image.
      // 
      // - `AliyunLinux3ContainerOptimized`: Alibaba Cloud Linux 3 container-optimized image.
      shared_ptr<string> imageType_ {};
      // The billing method for nodes in the node pool. Valid values:
      // 
      // - `PrePaid`: Subscription.
      // 
      // - `PostPaid`: Pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      shared_ptr<string> instanceChargeType_ {};
      // The instance attribute configuration.
      shared_ptr<vector<InstancePatterns>> instancePatterns_ {};
      // The list of instance types for the nodes. You can specify multiple instance types as fallback options. When creating a node, the system tries each instance type in order until it succeeds. The final instance type may vary depending on inventory.
      // 
      // Valid values: [1, 10].
      shared_ptr<vector<string>> instanceTypes_ {};
      // The billing method for public IP addresses. Valid values:
      // 
      // - `PayByBandwidth`: Pay by bandwidth.
      // 
      // - `PayByTraffic`: Pay by traffic.
      shared_ptr<string> internetChargeType_ {};
      // The maximum outbound bandwidth for the public IP address of a node, measured in megabits per second (Mbps). The value must be an integer from 1 to 100.
      shared_ptr<int64_t> internetMaxBandwidthOut_ {};
      // The key pair name. Specify either key_pair or `login_password`. For managed node pools, only `key_pair` is supported.
      shared_ptr<string> keyPair_ {};
      // The SSH login password. Specify either login_password or `key_pair`. Password rules: 8 to 30 characters, including at least three of the following: uppercase letters, lowercase letters, digits, and special characters.
      shared_ptr<string> loginPassword_ {};
      // The scaling policy for ECS instances in a multi-zone scaling group. Valid values:
      // 
      // - `PRIORITY`: Scales instances based on the virtual switches (VSwitchIds.N) you define. If an ECS instance cannot be created in the zone of a higher-priority virtual switch, the system automatically uses the next-priority virtual switch.
      // 
      // - `COST_OPTIMIZED`: Tries to create instances starting with the lowest vCPU unit price. If multiple instance types are configured with a spot instance billing method, it prioritizes creating spot instances. Use the `CompensateWithOnDemand` parameter to specify whether to automatically create on-demand instances if spot instances cannot be created due to inventory or other reasons.
      // 
      //   > `COST_OPTIMIZED` takes effect only when multiple instance types or spot instances are configured.
      // 
      // - `BALANCE`: Evenly distributes ECS instances across the specified zones in the scaling group. If the distribution becomes unbalanced due to inventory shortages or other reasons, you can use the API `RebalanceInstances` to rebalance the resources. For more information, see [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html).
      // 
      // Default value: `PRIORITY`.
      shared_ptr<string> multiAzPolicy_ {};
      // The minimum number of on-demand instances required in the scaling group. Valid values: [0, 1000]. When the number of on-demand instances is below this value, the system prioritizes creating on-demand instances.
      shared_ptr<int64_t> onDemandBaseCapacity_ {};
      // The percentage of on-demand instances among the instances that exceed the minimum on-demand instance count (`on_demand_base_capacity`). Valid values: [0, 100].
      shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ {};
      // The subscription duration for nodes in the node pool. This parameter takes effect only when `instance_charge_type` is `PrePaid`, and is required in that case.
      // 
      // - When `period_unit=Week`, valid values: {1, 2, 3, 4}.
      // 
      // - When `period_unit=Month`, valid values: {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, 60}.
      shared_ptr<int64_t> period_ {};
      // The billing cycle for nodes in the node pool. This parameter takes effect only when `instance_charge_type` is `PrePaid`, and is required in that case.
      // 
      // - `Month`: Billed monthly.
      // 
      // - `Week`: Billed weekly.
      // 
      // Default value: `Month`.
      shared_ptr<string> periodUnit_ {};
      // [Deprecated] Use the `image_type` parameter instead.
      // 
      // The operating system platform. Valid values:
      // 
      // - `AliyunLinux`
      // 
      // - `CentOS`
      // 
      // - `Windows`
      // 
      // - `WindowsCore`
      shared_ptr<string> platform_ {};
      // The private node pool configuration.
      shared_ptr<ScalingGroup::PrivatePoolOptions> privatePoolOptions_ {};
      // The list of RDS instances.
      shared_ptr<vector<string>> rdsInstances_ {};
      // The resource pool and policy to use when creating instances. Note: This parameter is effective only when creating pay-as-you-go instances. It cannot be set at the same time as private_pool_options.match_criteria or private_pool_options.id.
      shared_ptr<ScalingGroup::ResourcePoolOptions> resourcePoolOptions_ {};
      // The scaling group mode. Valid values:
      // 
      // - `release`: Standard mode. Scales by creating and releasing ECS instances based on resource usage.
      // 
      // - `recycle`: Fast mode. Scales by creating, stopping, and starting instances to improve scaling speed. You are not charged for compute resources when instances are stopped, only for storage fees (except for local disk models).
      shared_ptr<string> scalingPolicy_ {};
      // The list of security group IDs.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The number of available instance types. The scaling group creates spot instances in a balanced manner across the specified number of lowest-cost instance types. Valid values: [1, 10].
      shared_ptr<int64_t> spotInstancePools_ {};
      // Enable spot instance replenishment. When enabled, the scaling group attempts to create a new instance to replace a spot instance that is about to be reclaimed. Valid values:
      // 
      // - `true`: Enable spot instance replenishment.
      // 
      // - `false`: Disable spot instance replenishment.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The price range configuration for spot instances.
      shared_ptr<vector<ScalingGroup::SpotPriceLimit>> spotPriceLimit_ {};
      // The spot instance type. Valid values:
      // 
      // - `NoSpot`: On-demand instance.
      // 
      // - `SpotWithPriceLimit`: Set a price limit for spot instances.
      // 
      // - `SpotAsPriceGo`: Let the system automatically bid at the current market price.
      // 
      // For more information, see [Spot instances](https://help.aliyun.com/document_detail/157759.html).
      shared_ptr<string> spotStrategy_ {};
      // Enable bursting for the system disk. Valid values:
      // 
      // - true: Enable. During sudden spikes in read/write activity, the disk temporarily boosts performance until workloads return to normal.
      // 
      // - false: Disable.
      // 
      // You can set this parameter only when `system_disk_category` is `cloud_auto`. For more information, see [ESSD AutoPL disk](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The list of system disk types. If the highest-priority disk type is unavailable, the system tries the next priority disk type.
      shared_ptr<vector<string>> systemDiskCategories_ {};
      // The system disk type for nodes. Valid values:
      // 
      // - `cloud_efficiency`: Ultra disk.
      // 
      // - `cloud_ssd`: Standard SSD.
      // 
      // - `cloud_essd`: Enhanced SSD (ESSD).
      // 
      // - `cloud_auto`: ESSD AutoPL disk.
      // 
      // - `cloud_essd_entry`: ESSD Entry disk.
      // 
      // Default value: `cloud_efficiency`.
      shared_ptr<string> systemDiskCategory_ {};
      // The encryption algorithm for the system disk. Valid value: aes-256.
      shared_ptr<string> systemDiskEncryptAlgorithm_ {};
      // Encrypt the system disk. Valid values:
      // 
      // - true: Encrypt.
      // 
      // - false: Do not encrypt.
      shared_ptr<bool> systemDiskEncrypted_ {};
      // The KMS key ID for the system disk.
      shared_ptr<string> systemDiskKmsKeyId_ {};
      // The performance level of the system disk. This setting applies only to ESSD disks. Performance level depends on disk size. For more information, see [Enhanced SSD (ESSD)](https://help.aliyun.com/document_detail/122389.html).
      // 
      // - PL0: Moderate I/O performance with stable read/write latency.
      // 
      // - PL1: Moderate I/O performance with stable read/write latency.
      // 
      // - PL2: High I/O performance with stable read/write latency.
      // 
      // - PL3: Extremely high I/O performance with extremely stable read/write latency.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The provisioned IOPS for the system disk.
      // 
      // Possible values: 0 to min{50,000, 1000 × capacity − baseline performance}. Baseline performance = min{1,800 + 50 × capacity, 50,000}.
      // 
      // You can set this parameter only when `system_disk_category` is `cloud_auto`. For more information, see [ESSD AutoPL disk](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The size of the system disk for nodes. Unit: GiB.
      // 
      // Valid values: [20, 2048].
      // 
      // This value must be greater than or equal to max{20, ImageSize}.
      // 
      // Default value: max{40, image size corresponding to ImageId}.
      shared_ptr<int64_t> systemDiskSize_ {};
      // The snapshot policy for the system disk.
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
      // Add tags to ECS instances only.
      // 
      // Tag keys must be unique and up to 128 characters long. Neither tag keys nor tag values can start with "aliyun", "acs:", or contain "https\\://" or "http\\://".
      shared_ptr<vector<Tag>> tags_ {};
      // The list of virtual switch IDs. Valid values: [1, 8].
      // 
      // > To ensure high availability, select virtual switches from different zones.
      shared_ptr<vector<string>> vswitchIds_ {};
    };

    class NodepoolInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodepoolInfo& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, NodepoolInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
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
        && this->resourceGroupId_ == nullptr; };
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


    protected:
      // The node pool name.
      // 
      // Name rules: Use only numbers, letters, or hyphens (-). The name must be 1 to 63 characters long and cannot start with a hyphen (-).
      shared_ptr<string> name_ {};
      // The resource group ID for the node pool. Nodes created from this node pool belong to this resource group.
      // 
      // A resource can belong to only one resource group. Map resource groups to projects, applications, or organizations based on your business needs.
      shared_ptr<string> resourceGroupId_ {};
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
        // [Deprecated] Use the top-level `auto_upgrade` parameter instead.
        // 
        // Enable automatic upgrades. Valid values:
        // 
        // - true: Enable.
        // 
        // - false: Disable.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgrade_ {};
        // The maximum number of unavailable nodes.
        // 
        // Valid values: [1, 1000].
        // 
        // Default value: 1.
        shared_ptr<int64_t> maxUnavailable_ {};
        // The number of additional nodes. Choose either surge or `surge_percentage`.
        // 
        // Nodes become unavailable during upgrades. Create extra nodes to maintain cluster load.
        // 
        // > Do not create more extra nodes than the current number of nodes.
        shared_ptr<int64_t> surge_ {};
        // The percentage of additional nodes. Choose either surge or surge_percentage. The number of additional nodes equals `surge_percentage` × the number of nodes. For example, if `surge_percentage` is 50% and there are 6 nodes, then 3 additional nodes are created.
        // 
        // The number of additional nodes = The percentage of additional nodes × The number of nodes in the node pool. For example, if the percentage of additional nodes is 50% and the number of nodes in the node pool is 6, the number of additional nodes is 3.
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
        // Packages to exclude during vulnerability fixes.
        // 
        // Default value: `kernel`.
        shared_ptr<string> excludePackages_ {};
        // Allow node restart. This parameter takes effect only when `auto_vul_fix=true`. Valid values:
        // 
        // - `true`: Allow node restart.
        // 
        // - `false`: Disallow node restart.
        // 
        // Default value: `true`.
        shared_ptr<bool> restartNode_ {};
        // The severity levels of vulnerabilities that can be fixed automatically, separated by commas. Example: `asap,later`. Supported levels:
        // 
        // - `asap`: High
        // 
        // - `later`: Medium
        // 
        // - `nntf`: Low
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
        // Enable automatic kubelet upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // 
        // - `true`: Enable automatic kubelet upgrades.
        // 
        // - `false`: Disable automatic kubelet upgrades.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgradeKubelet_ {};
        // Enable automatic operating system upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // 
        // - `true`: Enable automatic OS upgrades.
        // 
        // - `false`: Disable automatic OS upgrades.
        // 
        // Default value: `false`.
        shared_ptr<bool> autoUpgradeOs_ {};
        // Enable automatic runtime upgrades. This parameter takes effect only when `auto_upgrade=true`. Valid values:
        // 
        // - `true`: Enable automatic runtime upgrades.
        // 
        // - `false`: Disable automatic runtime upgrades.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgradeRuntime_ {};
      };

      class AutoRepairPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoRepairPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(approval_required, approvalRequired_);
          DARABONBA_PTR_TO_JSON(auto_repair_policy_id, autoRepairPolicyId_);
          DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
        };
        friend void from_json(const Darabonba::Json& j, AutoRepairPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(approval_required, approvalRequired_);
          DARABONBA_PTR_FROM_JSON(auto_repair_policy_id, autoRepairPolicyId_);
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
        && this->autoRepairPolicyId_ == nullptr && this->restartNode_ == nullptr; };
        // approvalRequired Field Functions 
        bool hasApprovalRequired() const { return this->approvalRequired_ != nullptr;};
        void deleteApprovalRequired() { this->approvalRequired_ = nullptr;};
        inline bool getApprovalRequired() const { DARABONBA_PTR_GET_DEFAULT(approvalRequired_, false) };
        inline AutoRepairPolicy& setApprovalRequired(bool approvalRequired) { DARABONBA_PTR_SET_VALUE(approvalRequired_, approvalRequired) };


        // autoRepairPolicyId Field Functions 
        bool hasAutoRepairPolicyId() const { return this->autoRepairPolicyId_ != nullptr;};
        void deleteAutoRepairPolicyId() { this->autoRepairPolicyId_ = nullptr;};
        inline string getAutoRepairPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoRepairPolicyId_, "") };
        inline AutoRepairPolicy& setAutoRepairPolicyId(string autoRepairPolicyId) { DARABONBA_PTR_SET_VALUE(autoRepairPolicyId_, autoRepairPolicyId) };


        // restartNode Field Functions 
        bool hasRestartNode() const { return this->restartNode_ != nullptr;};
        void deleteRestartNode() { this->restartNode_ = nullptr;};
        inline bool getRestartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
        inline AutoRepairPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


      protected:
        // Require manual approval for node repair.
        shared_ptr<bool> approvalRequired_ {};
        // The automatic node repair policy ID.
        shared_ptr<string> autoRepairPolicyId_ {};
        // Allow node restart. This parameter takes effect only when `auto_repair=true`. Valid values:
        // 
        // - `true`: Allow node restart.
        // 
        // - `false`: Disallow node restart.
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
      // Enable automatic node repair. This parameter takes effect only when `enable=true`.
      // 
      // - `true`: Enable automatic repair.
      // 
      // - `false`: Disable automatic repair.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoRepair_ {};
      // The automatic node repair policy.
      shared_ptr<Management::AutoRepairPolicy> autoRepairPolicy_ {};
      // Enable automatic node upgrades. This parameter takes effect only when `enable=true`. Valid values:
      // 
      // - `true`: Enable automatic upgrades.
      // 
      // - `false`: Disable automatic upgrades.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoUpgrade_ {};
      // The automatic upgrade policy.
      shared_ptr<Management::AutoUpgradePolicy> autoUpgradePolicy_ {};
      // Enable automatic CVE vulnerability fixes. This parameter takes effect only when `enable=true`. Valid values:
      // 
      // - `true`: Enable automatic CVE fixes.
      // 
      // - `false`: Disable automatic CVE fixes.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoVulFix_ {};
      // The automatic CVE fix policy.
      shared_ptr<Management::AutoVulFixPolicy> autoVulFixPolicy_ {};
      // Enable the managed node pool. Valid values:
      // 
      // - `true`: Enable the managed node pool.
      // 
      // - `false`: Disable the managed node pool. Other related configurations take effect only when `enable=true`.
      // 
      // Default value: `false`.
      shared_ptr<bool> enable_ {};
      // [Deprecated] Use the top-level `auto_upgrade` parameter instead.
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
      // Install Cloud Monitor on ECS nodes. After installation, you can view monitoring information for the created ECS instances in the Cloud Monitor console. We recommend enabling this. Valid values:
      // 
      // - `true`: Install Cloud Monitor on ECS nodes.
      // 
      // - `false`: Do not install Cloud Monitor on ECS nodes.
      // 
      // Default value: `false`.
      shared_ptr<bool> cmsEnabled_ {};
      // The node CPU management policy. The following two policies are supported for clusters of version 1.12.6 and later:
      // 
      // - `static`: Allows pods with certain resource characteristics on the node to have enhanced CPU affinity and exclusivity.
      // 
      // - `none`: Enables the existing default CPU affinity scheme.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // Node labels. Add labels to Kubernetes cluster nodes. Label rules:
      // 
      // - Labels are case-sensitive key-value pairs. You can set up to 20 labels.
      // 
      // - Tag keys must be unique and up to 64 characters long. Tag values can be empty and up to 128 characters long. Neither tag keys nor tag values can start with `aliyun`, `acs:`, `https://`, or `http://`. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
      shared_ptr<vector<Tag>> labels_ {};
      // The custom node name parameter. A node name consists of three parts: prefix + node IP + suffix.
      // 
      // The prefix and suffix can each consist of one or more parts separated by periods (.). Each part can contain lowercase letters, numbers, and hyphens (-). The node name must start and end with a lowercase letter or a number. The node IP is the complete private IP address of the node.
      // 
      // The parameter is passed as four parts separated by commas. For example, if you pass the string "customized,aliyun,ip,com" (where "customized" and "ip" are fixed strings, "aliyun" is the prefix, and "com" is the suffix), the node name will be: aliyun.192.168.xxx.xxx.com.
      shared_ptr<string> nodeNameMode_ {};
      // The instance pre-customization data. Before a node joins the cluster, it runs the specified pre-customization data script. For more information, see [User-Data script](https://help.aliyun.com/document_detail/49121.html).
      shared_ptr<string> preUserData_ {};
      // The container runtime name. ACK supports the following three container runtimes.
      // 
      // - containerd: Recommended. Supports all cluster versions.
      // 
      // - Sandboxed-Container.runv: Sandboxed container. Provides higher isolation. Supports clusters of version 1.31 and earlier.
      // 
      // - docker: No longer maintained. Supports clusters of version 1.22 and earlier.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // The container runtime version.
      shared_ptr<string> runtimeVersion_ {};
      // The node taint configuration.
      shared_ptr<vector<Taint>> taints_ {};
      // Whether scaled-out nodes are unschedulable.
      // 
      // - true: Unschedulable.
      // 
      // - false: Schedulable.
      shared_ptr<bool> unschedulable_ {};
      // The instance user data. After a node joins the cluster, it runs the specified user data script. For more information, see [User-Data script](https://help.aliyun.com/document_detail/49121.html).
      shared_ptr<string> userData_ {};
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
      // This field is deprecated. Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // The valid values are 1 to 100. The unit is Mbps.
      shared_ptr<int64_t> eipBandwidth_ {};
      // [Deprecated] Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // The billing method for the EIP. Valid values:
      // 
      // - `PayByBandwidth`: Pay by bandwidth.
      // 
      // - `PayByTraffic`: Pay by traffic.
      // 
      // Default value: `PayByBandwidth`.
      shared_ptr<string> eipInternetChargeType_ {};
      // Enable auto scaling. Valid values:
      // 
      // - `true`: Enable auto scaling. When cluster capacity is insufficient for pod scheduling, ACK automatically scales nodes based on the minimum and maximum instance counts you configure. For clusters running Kubernetes 1.24 or later, instant elasticity is enabled by default. For earlier versions, auto scaling is enabled by default. For more information, see [Node scaling](https://help.aliyun.com/document_detail/2746785.html).
      // 
      // - `false`: Disable auto scaling. ACK adjusts the number of nodes in the node pool to match the desired node count you specify.
      // 
      // When set to false, other parameters under `auto_scaling` are ignored.
      // 
      // Default value: `false`.
      shared_ptr<bool> enable_ {};
      // [Deprecated] Use internet_charge_type and internet_max_bandwidth_out instead.
      // 
      // - `true`: Bind an EIP.
      // 
      // - `false`: Do not bind an EIP.
      // 
      // Default value: `false`.
      shared_ptr<bool> isBondEip_ {};
      // The maximum number of scalable instances in the node pool, excluding existing instances. This parameter takes effect only when `enable=true`.
      // 
      // Valid values: [min_instances, 2000]. Default value: 0.
      shared_ptr<int64_t> maxInstances_ {};
      // The minimum number of scalable instances in the node pool, excluding existing instances. This parameter takes effect only when `enable=true`.
      // 
      // Valid values: [0, max_instances]. Default value: 0.
      // 
      // > - If the minimum instance count is not zero, the system creates the specified number of ECS instances after the scaling group becomes active.
      // >
      // > - To avoid unintended scale-in, set the maximum instance count to at least the current number of nodes in the node pool.
      shared_ptr<int64_t> minInstances_ {};
      // The auto scaling type, defined by instance type. Valid values:
      // 
      // - `cpu`: Standard instance.
      // 
      // - `gpu`: GPU instance.
      // 
      // - `gpushare`: GPU shared instance.
      // 
      // - `spot`: Spot instance.
      // 
      // Default value: `cpu`.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->autoScaling_ == nullptr
        && this->concurrency_ == nullptr && this->kubernetesConfig_ == nullptr && this->management_ == nullptr && this->nodepoolInfo_ == nullptr && this->scalingGroup_ == nullptr
        && this->teeConfig_ == nullptr && this->updateNodes_ == nullptr; };
    // autoScaling Field Functions 
    bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
    void deleteAutoScaling() { this->autoScaling_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::AutoScaling & getAutoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, ModifyClusterNodePoolRequest::AutoScaling) };
    inline ModifyClusterNodePoolRequest::AutoScaling getAutoScaling() { DARABONBA_PTR_GET(autoScaling_, ModifyClusterNodePoolRequest::AutoScaling) };
    inline ModifyClusterNodePoolRequest& setAutoScaling(const ModifyClusterNodePoolRequest::AutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
    inline ModifyClusterNodePoolRequest& setAutoScaling(ModifyClusterNodePoolRequest::AutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline bool getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, false) };
    inline ModifyClusterNodePoolRequest& setConcurrency(bool concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // kubernetesConfig Field Functions 
    bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
    void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, ModifyClusterNodePoolRequest::KubernetesConfig) };
    inline ModifyClusterNodePoolRequest::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, ModifyClusterNodePoolRequest::KubernetesConfig) };
    inline ModifyClusterNodePoolRequest& setKubernetesConfig(const ModifyClusterNodePoolRequest::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
    inline ModifyClusterNodePoolRequest& setKubernetesConfig(ModifyClusterNodePoolRequest::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


    // management Field Functions 
    bool hasManagement() const { return this->management_ != nullptr;};
    void deleteManagement() { this->management_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::Management & getManagement() const { DARABONBA_PTR_GET_CONST(management_, ModifyClusterNodePoolRequest::Management) };
    inline ModifyClusterNodePoolRequest::Management getManagement() { DARABONBA_PTR_GET(management_, ModifyClusterNodePoolRequest::Management) };
    inline ModifyClusterNodePoolRequest& setManagement(const ModifyClusterNodePoolRequest::Management & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
    inline ModifyClusterNodePoolRequest& setManagement(ModifyClusterNodePoolRequest::Management && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


    // nodepoolInfo Field Functions 
    bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
    void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::NodepoolInfo & getNodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, ModifyClusterNodePoolRequest::NodepoolInfo) };
    inline ModifyClusterNodePoolRequest::NodepoolInfo getNodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, ModifyClusterNodePoolRequest::NodepoolInfo) };
    inline ModifyClusterNodePoolRequest& setNodepoolInfo(const ModifyClusterNodePoolRequest::NodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
    inline ModifyClusterNodePoolRequest& setNodepoolInfo(ModifyClusterNodePoolRequest::NodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, ModifyClusterNodePoolRequest::ScalingGroup) };
    inline ModifyClusterNodePoolRequest::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, ModifyClusterNodePoolRequest::ScalingGroup) };
    inline ModifyClusterNodePoolRequest& setScalingGroup(const ModifyClusterNodePoolRequest::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline ModifyClusterNodePoolRequest& setScalingGroup(ModifyClusterNodePoolRequest::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


    // teeConfig Field Functions 
    bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
    void deleteTeeConfig() { this->teeConfig_ = nullptr;};
    inline const ModifyClusterNodePoolRequest::TeeConfig & getTeeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, ModifyClusterNodePoolRequest::TeeConfig) };
    inline ModifyClusterNodePoolRequest::TeeConfig getTeeConfig() { DARABONBA_PTR_GET(teeConfig_, ModifyClusterNodePoolRequest::TeeConfig) };
    inline ModifyClusterNodePoolRequest& setTeeConfig(const ModifyClusterNodePoolRequest::TeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
    inline ModifyClusterNodePoolRequest& setTeeConfig(ModifyClusterNodePoolRequest::TeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


    // updateNodes Field Functions 
    bool hasUpdateNodes() const { return this->updateNodes_ != nullptr;};
    void deleteUpdateNodes() { this->updateNodes_ = nullptr;};
    inline bool getUpdateNodes() const { DARABONBA_PTR_GET_DEFAULT(updateNodes_, false) };
    inline ModifyClusterNodePoolRequest& setUpdateNodes(bool updateNodes) { DARABONBA_PTR_SET_VALUE(updateNodes_, updateNodes) };


  protected:
    // The auto scaling configuration.
    shared_ptr<ModifyClusterNodePoolRequest::AutoScaling> autoScaling_ {};
    // Whether to run concurrently.
    shared_ptr<bool> concurrency_ {};
    // The cluster-related configuration.
    shared_ptr<ModifyClusterNodePoolRequest::KubernetesConfig> kubernetesConfig_ {};
    // The managed node pool configuration.
    shared_ptr<ModifyClusterNodePoolRequest::Management> management_ {};
    // The node pool configuration.
    shared_ptr<ModifyClusterNodePoolRequest::NodepoolInfo> nodepoolInfo_ {};
    // Node pool scaling group configuration.
    shared_ptr<ModifyClusterNodePoolRequest::ScalingGroup> scalingGroup_ {};
    // The configuration of the Kubernetes cluster for confidential computing.
    shared_ptr<ModifyClusterNodePoolRequest::TeeConfig> teeConfig_ {};
    // Synchronously update node labels and taints.
    shared_ptr<bool> updateNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
