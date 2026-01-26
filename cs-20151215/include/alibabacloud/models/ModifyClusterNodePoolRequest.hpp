// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
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
      // Specifies whether to enable confidential computing for the cluster. Valid values:
      // 
      // *   `true`: enables confidential computing for the cluster.
      // *   `false`: disables confidential computing for the cluster.
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
        // The instance type of preemptible instances.
        shared_ptr<string> instanceType_ {};
        // The price cap of a preemptible instance.
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
        shared_ptr<vector<string>> privatePoolIds_ {};
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
        // The private node pool ID. This parameter is available only when `match_criteria` is set to `Target`.
        shared_ptr<string> id_ {};
        // The type of private node pool. This parameter specifies the type of private pool that you want to use to create instances. A private pool is generated when an elasticity assurance or a capacity reservation takes effect. The system selects a private pool to start instances. Valid values:
        // 
        // *   `Open`: open private pool. The system selects an open private pool to start instances. If no matching open private pools are available, the resources in the public pool are used.
        // *   `Target`: uses a specified private pool. The system uses the resources of the specified private pool to start instances. If the specified private pool is unavailable, instances cannot be started.
        // *   `None`: no private pool is used. The resources of private pools are not used to launch the instances.
        shared_ptr<string> matchCriteria_ {};
      };

      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->dataDisks_ == nullptr && this->deploymentsetId_ == nullptr && this->desiredSize_ == nullptr
        && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceChargeType_ == nullptr && this->instancePatterns_ == nullptr && this->instanceTypes_ == nullptr
        && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->keyPair_ == nullptr && this->loginPassword_ == nullptr && this->multiAzPolicy_ == nullptr
        && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->platform_ == nullptr
        && this->privatePoolOptions_ == nullptr && this->rdsInstances_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingPolicy_ == nullptr && this->securityGroupIds_ == nullptr
        && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr
        && this->systemDiskCategories_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskEncryptAlgorithm_ == nullptr && this->systemDiskEncrypted_ == nullptr && this->systemDiskKmsKeyId_ == nullptr
        && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr && this->tags_ == nullptr
        && this->vswitchIds_ == nullptr; };
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
      // Specifies whether to enable auto-renewal for the nodes in the node pool. This parameter takes effect only when you set `instance_charge_type` to `PrePaid`. Valid values:
      // 
      // *   `true`: enables auto-renewal.
      // *   `false`: disables auto-renewal.
      // 
      // Default value: `false`.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period. Valid values:
      // 
      // *   Valid values when PeriodUnit is set to Week: 1, 2, and 3.
      // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // Specifies whether to automatically create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created due to reasons such as the price or insufficient inventory. This parameter takes effect when you set `multi_az_policy` to `COST_OPTIMIZED`. Valid values:
      // 
      // *   `true`: automatically creates pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created.
      // *   `false`: does not create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The configurations of the data disks that are mounted to nodes in the node pool. Valid values: 0 to 10. You can mount at most 10 data disks to the nodes in the node pool.
      shared_ptr<vector<DataDisk>> dataDisks_ {};
      shared_ptr<string> deploymentsetId_ {};
      // The expected number of nodes in the node pool.
      // 
      // The expected number of nodes in the node pool. We recommend that you configure at least two nodes to ensure that cluster components run as expected. You can modify the Expected Nodes parameter to adjust the number of nodes in the node pool.
      // 
      // If you do not want to create nodes in the node pool, set this parameter to 0. You can manually modify this parameter to add nodes later.
      shared_ptr<int64_t> desiredSize_ {};
      // The custom image ID. You can call the `DescribeKubernetesVersionMetadata` operation to query the images supported by ACK. By default, the latest image is used.
      shared_ptr<string> imageId_ {};
      // The type of operating system distribution that you want to use. We recommend that you use this parameter to specify the node operating system. Valid values:
      // 
      // *   `AliyunLinux`: Alibaba Cloud Linux 2.
      // *   `AliyunLinuxSecurity`: Alibaba Cloud Linux 2 (UEFI).
      // *   `AliyunLinux3`: Alibaba Cloud Linux 3.
      // *   `AliyunLinux3Arm64`: Alibaba Cloud Linux 3 for ARM.
      // *   `AliyunLinux3Security`: Alibaba Cloud Linux 3 (UEFI).
      // *   `CentOS`: CentOS.
      // *   `Windows`: Windows.
      // *   `WindowsCore`: Windows Core.
      // *   `ContainerOS`: ContainerOS.
      // *   `AliyunLinux3ContainerOptimized`: Alibaba Cloud Linux 3 Container-optimized.
      shared_ptr<string> imageType_ {};
      // The billing method of nodes in the node pool. Valid values:
      // 
      // *   `PrePaid`: subscription.
      // *   `PostPaid`: pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      shared_ptr<string> instanceChargeType_ {};
      // .The instance attributes.
      shared_ptr<vector<InstancePatterns>> instancePatterns_ {};
      // The instance types. You can specify multiple instance types. A node is assigned the instance type from the first instance type of the list until the node is created. The instance type that is used to create the node varies based on the actual instance stock.
      // 
      // You can specify 1 to 10 instance types.
      shared_ptr<vector<string>> instanceTypes_ {};
      // The metering method of the public IP address. Valid values:
      // 
      // *   `PayByBandwidth`: pay-by-bandwidth.
      // *   `PayByTraffic`: pay-by-data-transfer.
      shared_ptr<string> internetChargeType_ {};
      // The maximum outbound bandwidth of the public IP address of the node. Unit: Mbit/s. Valid values: 1 to 100.
      shared_ptr<int64_t> internetMaxBandwidthOut_ {};
      // The name of the key pair. You must specify this parameter or `login_password`. You must specify the `key_pair` parameter if the node pool is a managed node pool.
      shared_ptr<string> keyPair_ {};
      // The password for SSH logon. You must specify this parameter or `key_pair`. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
      shared_ptr<string> loginPassword_ {};
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
      // *   `BALANCE`: ECS instances are evenly distributed across multiple zones specified by the scaling group. If ECS instances become imbalanced among multiple zones due to insufficient inventory, you can call the `RebalanceInstances` operation of Auto Scaling to balance the instance distribution among zones. For more information, see [RebalanceInstances](https://help.aliyun.com/document_detail/71516.html).
      // 
      // Default value: `PRIORITY`.
      shared_ptr<string> multiAzPolicy_ {};
      // The minimum number of pay-as-you-go instances that must be kept in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, the system preferably creates pay-as-you-go instances.
      shared_ptr<int64_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances among the extra instances that exceed the number specified by `on_demand_base_capacity`. Valid values: 0 to 100.
      shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ {};
      // The subscription duration of nodes in the node pool. This parameter takes effect and is required if you set `instance_charge_type` to `PrePaid`.
      // 
      // *   If `period_unit` is set to Week, the valid values of `period` are 1, 2, 3, and 4.
      // *   If `period_unit` is set to Month, the valid values of `period` are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
      shared_ptr<int64_t> period_ {};
      // The billing cycle of nodes in the node pool. This parameter takes effect and is required if you set `instance_charge_type` to `PrePaid`. Valid values:
      // 
      // *   `Month`: The subscription duration is measured in months.
      // *   `Week`: The subscription duration is measured in weeks.
      // 
      // Default value: `Month`.
      shared_ptr<string> periodUnit_ {};
      // This parameter is obsolete. Use the `image_type` parameter instead.
      // 
      // The OS platform. Valid values:
      // 
      // *   `AliyunLinux`
      // *   `CentOS`
      // *   `Windows`
      // *   `WindowsCore`
      shared_ptr<string> platform_ {};
      // The configurations of the private node pool.
      shared_ptr<ScalingGroup::PrivatePoolOptions> privatePoolOptions_ {};
      // The IDs of ApsaraDB RDS instances.
      shared_ptr<vector<string>> rdsInstances_ {};
      shared_ptr<ScalingGroup::ResourcePoolOptions> resourcePoolOptions_ {};
      // The scaling mode of the scaling group. Valid values:
      // 
      // *   `release`: the standard mode. ECS instances are created and released based on resource usage.
      // *   `recycle`: the swift mode. ECS instances are created, stopped, or started during scaling events. This reduces the time required for the next scale-out event. When the instance is stopped, you are charged only for the storage service. This does not apply to ECS instances that are attached with local disks.
      shared_ptr<string> scalingPolicy_ {};
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The number of instance types that are available for creating preemptible instances. Auto Scaling creates preemptible instances of multiple instance types that are available at the lowest cost. Valid values: 1 to 10.
      shared_ptr<int64_t> spotInstancePools_ {};
      // Specifies whether to enable the supplementation of preemptible instances. If you set this parameter to true, when the scaling group receives a system message indicating that a preemptible instance is to be reclaimed, the scaling group attempts to create a new instance to replace the instance. Valid values:
      // 
      // *   `true`: supplements preemptible instances.
      // *   `false`: does not supplement preemptible instances.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The bid configurations of preemptible instances.
      shared_ptr<vector<ScalingGroup::SpotPriceLimit>> spotPriceLimit_ {};
      // The bidding policy of preemptible instances. Valid values:
      // 
      // *   `NoSpot`: non-preemptible instance.
      // *   `SpotWithPriceLimit`: specifies the highest bid.
      // *   `SpotAsPriceGo`: automatically submits bids based on the up-to-date market price.
      // 
      // For more information, see [Create a preemptible elastic container instance](https://help.aliyun.com/document_detail/157759.html).
      shared_ptr<string> spotStrategy_ {};
      // Specifies whether to enable the burst feature for the system disk. Valid values:
      // 
      // *   true: enables the burst feature.
      // *   false: disables the burst feature.
      // 
      // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The categories of the system disk. The system attempts to create system disks of a disk category with a lower priority if the disk category with a higher priority is unavailable.
      shared_ptr<vector<string>> systemDiskCategories_ {};
      // The category of the system disk. Valid values:
      // 
      // *   `cloud_efficiency`: ultra disk.
      // *   `cloud_ssd`: standard SSD.
      // *   `cloud_essd`: Enterprise ESSD (ESSD).
      // *   `cloud_auto`: ESSD AutoPL disk.
      // *   `cloud_essd_entry`: ESSD Entry disk.
      // 
      // Default value: `cloud_efficiency`.
      shared_ptr<string> systemDiskCategory_ {};
      // The encryption algorithm that is used to encrypt the system disk. Set the value to aes-256.
      shared_ptr<string> systemDiskEncryptAlgorithm_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // *   true: encrypts the system disk.
      // *   false: does not encrypt the system disk.
      shared_ptr<bool> systemDiskEncrypted_ {};
      // The ID of the Key Management Service (KMS) key that is used to encrypt the system disk.
      shared_ptr<string> systemDiskKmsKeyId_ {};
      // The performance level (PL) of the system disk. This parameter takes effect only for an ESSD. You can specify a higher PL if you increase the size of the data disk. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      // 
      // *   PL0: moderate maximum concurrent I/O performance and low I/O latency.
      // *   PL1: moderate maximum concurrent I/O performance and low I/O latency.
      // *   PL2: high maximum concurrent I/O performance and low I/O latency.
      // *   PL3: ultra-high maximum concurrent I/O performance and ultra-low I/O latency.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The preset IOPS of the system disk.
      // 
      // Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The size of the system disk. Unit: GiB
      // 
      // Valid values: 20 to 2048.
      // 
      // The value of this parameter must be at least 20 and greater than or equal to the size of the image.
      // 
      // Default value: the greater value between 40 and the image size.
      shared_ptr<int64_t> systemDiskSize_ {};
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
      // The tags that you want to add only to ECS instances.
      // 
      // The tag key must be unique and cannot exceed 128 characters in length. The tag key and value cannot start with aliyun or acs: or contain https:// or http://.
      shared_ptr<vector<Tag>> tags_ {};
      // The vSwitch IDs. You can specify one to eight vSwitch IDs.
      // 
      // >  To ensure high availability, we recommend that you select vSwitches that reside in different zones.
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
      // The name of the node pool.
      // 
      // The name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). It cannot start with a hyphen (-).
      shared_ptr<string> name_ {};
      // The ID of the resource group to which the node pool belongs. Instances that are added to the node pool belong to this resource group.
      // 
      // Each resource can belong only to one resource group. You can regard a resource group as a project, an application, or an organization based on your business scenarios.
      shared_ptr<string> resourceGroupId_ {};
    };

    class Management : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Management& obj) { 
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
        // This parameter is deprecated. Use the preceding `auto_upgrade` parameter instead.
        // 
        // Specifies whether to enable auto upgrade. Valid values:
        // 
        // *   true: enables auto upgrade.
        // *   false: disables auto upgrade.
        // 
        // Default value: `true`.
        shared_ptr<bool> autoUpgrade_ {};
        // The maximum number of nodes that can be in the Unavailable state.
        // 
        // Valid values: 1 to 1000.
        // 
        // Default value: 1.
        shared_ptr<int64_t> maxUnavailable_ {};
        // The number of additional nodes that are temporarily added to the node pool during an auto upgrade. Specify this parameter or `surge_percentage`.
        // 
        // A node is unavailable during an upgrade. Additional nodes are used to temporarily host the workloads of nodes that are being upgraded.
        // 
        // >  We recommend that you specify a value that does not exceed the current number of nodes in the node pool.
        shared_ptr<int64_t> surge_ {};
        // The percentage of additional nodes in the node pool. Specify this parameter or the `surge` parameter is specified.
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
        shared_ptr<string> excludePackages_ {};
        // Specifies whether ACK is allowed to automatically restart nodes after repairing the nodes. Valid values:
        // 
        // *   `true`: yes.
        // *   `false`: no.
        shared_ptr<bool> restartNode_ {};
        // The severity levels of CVEs that can be automatically patched. Separate multiple levels with commas (,). Example: `asap,later`. Valid values:
        // 
        // *   `asap`: high.
        // *   `later`: medium.
        // *   `nntf`: low.
        // 
        // If `auto_vul_fix=true` is specified, the default value is `asap`.
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
        // Specifies whether ACK is allowed to automatically upgrade the kubelet. Valid values:
        // 
        // *   `true`: yes.
        // *   `false`: no.
        shared_ptr<bool> autoUpgradeKubelet_ {};
        // Specifies whether ACK is allowed to automatically upgrade the operating system. This parameter takes effect only when you specify `auto_upgrade=true`. Valid values:
        // 
        // *   `true`: yes.
        // *   `false`: no.
        // 
        // Default value: `false`.
        shared_ptr<bool> autoUpgradeOs_ {};
        // Specifies whether ACK is allowed to automatically upgrade the runtime. This parameter takes effect only when you specify `auto_upgrade=true`. Valid values:
        // 
        // *   `true`: yes.
        // *   `false`: no.
        // 
        // Default value: `false`.
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
        shared_ptr<bool> approvalRequired_ {};
        shared_ptr<string> autoRepairPolicyId_ {};
        // Specifies whether ACK is allowed to automatically restart nodes after repairing the nodes. Valid values:
        // 
        // *   `true`: yes.
        // *   `false`: no.
        shared_ptr<bool> restartNode_ {};
      };

      virtual bool empty() const override { return this->autoRepair_ == nullptr
        && this->autoRepairPolicy_ == nullptr && this->autoUpgrade_ == nullptr && this->autoUpgradePolicy_ == nullptr && this->autoVulFix_ == nullptr && this->autoVulFixPolicy_ == nullptr
        && this->enable_ == nullptr && this->upgradeConfig_ == nullptr; };
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
      // Specifies whether to enable auto node repair. This parameter takes effect only if `enable` is set to true. Valid values:
      // 
      // *   `true`: enables auto repair.
      // *   `false`: disables auto repair.
      // 
      // Default value: `true`.
      shared_ptr<bool> autoRepair_ {};
      // The auto node repair policy.
      shared_ptr<Management::AutoRepairPolicy> autoRepairPolicy_ {};
      // Specifies whether to enable auto upgrade. Valid values:
      // 
      // *   `true`: enables auto upgrade.
      // *   `false`: disables auto upgrade.
      shared_ptr<bool> autoUpgrade_ {};
      // The auto upgrade policy.
      shared_ptr<Management::AutoUpgradePolicy> autoUpgradePolicy_ {};
      // Specifies whether ACK is allowed to automatically patch CVE vulnerabilities. Valid values:
      // 
      // *   `true`: enables auto CVE patching.
      // *   `true`: disables auto CVE patching.
      shared_ptr<bool> autoVulFix_ {};
      // The auto CVE patching policy.
      shared_ptr<Management::AutoVulFixPolicy> autoVulFixPolicy_ {};
      // Specifies whether to enable the managed node pool feature. Valid values:
      // 
      // *   `true`: enables the managed node pool feature.
      // *   `false`: disables the managed node pool feature. Other parameters in this section take effect only when `enable=true` is specified.
      // 
      // Default value: `false`.
      shared_ptr<bool> enable_ {};
      // This parameter is deprecated. Use the preceding `auto_upgrade` parameter instead.
      // 
      // The configurations of auto upgrade. The configurations take effect only when `enable` is set to true.
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
      // Specifies whether to install the CloudMonitor agent on ECS nodes. After the CloudMonitor agent is installed on ECS nodes, you can view monitoring information about the instances in the CloudMonitor console. We recommend that you install the CloudMonitor agent. Valid values:
      // 
      // *   `true`: installs the CloudMonitor agent on ECS nodes.
      // *   `false`: does not install the CloudMonitor agent on ECS nodes.
      // 
      // Default value: `false`.
      shared_ptr<bool> cmsEnabled_ {};
      // The CPU management policy of nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
      // 
      // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
      // *   `none`: specifies that the default CPU affinity is used.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // The labels that are added to the nodes in the cluster. You must add the label based on the following rules:
      // 
      // *   A label is a case-sensitive key-value pair. You can add up to 20 labels.
      // *   The key must be unique and cannot exceed 64 characters in length. The value can be empty and cannot exceed 128 characters in length. Keys and values cannot start with `aliyun`, `acs:`, `https://`, or `http://`. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
      shared_ptr<vector<Tag>> labels_ {};
      shared_ptr<string> nodeNameMode_ {};
      // Predefined custom data. Nodes automatically run predefined scripts before they are added to the cluster. For more information, see [User-Data script](https://help.aliyun.com/document_detail/49121.html).
      shared_ptr<string> preUserData_ {};
      // The name of the container runtime. The following types of runtime are supported by ACK:
      // 
      // *   containerd: containerd is the recommended runtime and supports all Kubernetes versions.
      // *   Sandboxed-Container.runv: The Sandbox-Container runtime provides improved isolation and supports Kubernetes 1.31 and earlier.
      // *   docker: discontinued. The Docker runtime supports Kubernetes 1.22 and earlier.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // The version of the container runtime.
      shared_ptr<string> runtimeVersion_ {};
      // The configurations of node taints.
      shared_ptr<vector<Taint>> taints_ {};
      // Specifies whether the nodes are unschedulable after a scale-out activity is performed.
      // 
      // *   true: The nodes are unschedulable after a scale-out activity is performed.
      // *   false: The nodes are schedulable after a scale-out activity is performed.
      shared_ptr<bool> unschedulable_ {};
      // The user data of the instance. Nodes automatically run user-data scripts after they are added to the cluster. For more information, see [User-Data script](https://help.aliyun.com/document_detail/49121.html).
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
      // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead. The maximum bandwidth of the EIP.
      // 
      // Valid values: 1 to 100. Unit: Mbit/s.
      shared_ptr<int64_t> eipBandwidth_ {};
      // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
      // 
      // The metering method of the EIP. Valid values:
      // 
      // *   `PayByBandwidth`: pay-by-bandwidth.
      // *   `PayByTraffic`: pay-by-data-transfer.
      // 
      // Default value: `PayByBandwidth`.
      shared_ptr<string> eipInternetChargeType_ {};
      // Specifies whether to enable auto scaling. Valid values:
      // 
      // *   `true`: enables auto scaling for the node pool. When the capacity planning of the cluster cannot meet the requirements of pod scheduling, ACK automatically scales out nodes based on the configured minimum and maximum number of instances. By default, node instant scaling is enabled for clusters that run Kubernetes 1.24. By default, node auto scaling is enabled for clusters that run Kubernetes versions earlier than 1.24. For more information, see [Auto scaling of nodes](https://help.aliyun.com/document_detail/2746785.html).
      // *   `false`: disables auto scaling. Container Service for Kubernetes (ACK) adjusts the number of nodes in the node pool based on the value of the Expected Nodes parameter. The number of nodes is always the same as the value of the Expected Nodes parameter.
      // 
      // If you set this parameter to false, other parameters in the `auto_scaling` section do not take effect.
      // 
      // Default value: `false`.
      shared_ptr<bool> enable_ {};
      // This parameter is deprecated. Use the internet_charge_type and internet_max_bandwidth_out parameters instead.
      // 
      // *   `true`: associates an elastic IP address (EIP) with the node pool.
      // *   `false`: does not associate an EIP with the node pool.
      // 
      // Default value: `false`.
      shared_ptr<bool> isBondEip_ {};
      // The maximum number of nodes that can be created in the node pool. Existing instances are excluded. This parameter takes effect only when `enable=true` is specified.
      // 
      // The value must be at least the value of min_instances and cannot exceed 2000. Default value: 0.
      shared_ptr<int64_t> maxInstances_ {};
      // The minimum number of nodes that must be kept in the node pool. Existing instances are excluded. This parameter takes effect only when `enable=true` is specified.
      // 
      // The value must be at least 0 and cannot exceed the value of max_instances. Default value: 0.
      // 
      // > 
      // 
      // *   When the minimum number of instances is greater than 0 and a scaling group is set up, ECS instances are automatically created based on the minimum number.
      // 
      // *   We recommend that the value of max_instances is equal to or larger than the current number of nodes in the node pool. If the value of max_instances is less than the current number of nodes in the node pool, the node pool will be scaled in after you enable auto scaling for the node pool.
      shared_ptr<int64_t> minInstances_ {};
      // The instance type that is used for auto scaling. Valid values:
      // 
      // *   `cpu`: regular instance.
      // *   `gpu`: GPU-accelerated instance.
      // *   `gpushare`: shared GPU-accelerated instance.
      // *   `spot`: preemptible instance.
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
    // The configurations about auto scaling.
    shared_ptr<ModifyClusterNodePoolRequest::AutoScaling> autoScaling_ {};
    // Specifies whether concurrency is supported.
    shared_ptr<bool> concurrency_ {};
    // The configurations of the cluster.
    shared_ptr<ModifyClusterNodePoolRequest::KubernetesConfig> kubernetesConfig_ {};
    // The configurations of the managed node pool feature.
    shared_ptr<ModifyClusterNodePoolRequest::Management> management_ {};
    // The configurations of the node pool.
    shared_ptr<ModifyClusterNodePoolRequest::NodepoolInfo> nodepoolInfo_ {};
    // The configurations of the scaling group that is used by the node pool.
    shared_ptr<ModifyClusterNodePoolRequest::ScalingGroup> scalingGroup_ {};
    // The configurations of confidential computing for the cluster.
    shared_ptr<ModifyClusterNodePoolRequest::TeeConfig> teeConfig_ {};
    // Specifies whether to update node information, such as labels and taints.
    shared_ptr<bool> updateNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
