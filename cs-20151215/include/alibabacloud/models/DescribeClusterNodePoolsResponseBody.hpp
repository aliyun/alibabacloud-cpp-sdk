// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataDisk.hpp>
#include <alibabacloud/models/InstancePatterns.hpp>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Hugepage.hpp>
#include <alibabacloud/models/KubeletConfig.hpp>
#include <map>
#include <alibabacloud/models/Taint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodepools, nodepools_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodepools, nodepools_);
    };
    DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody(DescribeClusterNodePoolsResponseBody &&) = default ;
    DescribeClusterNodePoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBody() = default ;
    DescribeClusterNodePoolsResponseBody& operator=(const DescribeClusterNodePoolsResponseBody &) = default ;
    DescribeClusterNodePoolsResponseBody& operator=(DescribeClusterNodePoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodepools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodepools& obj) { 
        DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
        DARABONBA_PTR_TO_JSON(auto_scaling, autoScaling_);
        DARABONBA_PTR_TO_JSON(interconnect_config, interconnectConfig_);
        DARABONBA_PTR_TO_JSON(interconnect_mode, interconnectMode_);
        DARABONBA_PTR_TO_JSON(kubernetes_config, kubernetesConfig_);
        DARABONBA_PTR_TO_JSON(management, management_);
        DARABONBA_PTR_TO_JSON(max_nodes, maxNodes_);
        DARABONBA_PTR_TO_JSON(node_components, nodeComponents_);
        DARABONBA_PTR_TO_JSON(node_config, nodeConfig_);
        DARABONBA_PTR_TO_JSON(nodepool_info, nodepoolInfo_);
        DARABONBA_PTR_TO_JSON(scaling_group, scalingGroup_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tee_config, teeConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Nodepools& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
        DARABONBA_PTR_FROM_JSON(auto_scaling, autoScaling_);
        DARABONBA_PTR_FROM_JSON(interconnect_config, interconnectConfig_);
        DARABONBA_PTR_FROM_JSON(interconnect_mode, interconnectMode_);
        DARABONBA_PTR_FROM_JSON(kubernetes_config, kubernetesConfig_);
        DARABONBA_PTR_FROM_JSON(management, management_);
        DARABONBA_PTR_FROM_JSON(max_nodes, maxNodes_);
        DARABONBA_PTR_FROM_JSON(node_components, nodeComponents_);
        DARABONBA_PTR_FROM_JSON(node_config, nodeConfig_);
        DARABONBA_PTR_FROM_JSON(nodepool_info, nodepoolInfo_);
        DARABONBA_PTR_FROM_JSON(scaling_group, scalingGroup_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tee_config, teeConfig_);
      };
      Nodepools() = default ;
      Nodepools(const Nodepools &) = default ;
      Nodepools(Nodepools &&) = default ;
      Nodepools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodepools() = default ;
      Nodepools& operator=(const Nodepools &) = default ;
      Nodepools& operator=(Nodepools &&) = default ;
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
        // *   `true`
        // *   `false`
        shared_ptr<bool> teeEnable_ {};
      };

      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(failed_nodes, failedNodes_);
          DARABONBA_PTR_TO_JSON(healthy_nodes, healthyNodes_);
          DARABONBA_PTR_TO_JSON(initial_nodes, initialNodes_);
          DARABONBA_PTR_TO_JSON(offline_nodes, offlineNodes_);
          DARABONBA_PTR_TO_JSON(removing_nodes, removingNodes_);
          DARABONBA_PTR_TO_JSON(serving_nodes, servingNodes_);
          DARABONBA_PTR_TO_JSON(state, state_);
          DARABONBA_PTR_TO_JSON(total_nodes, totalNodes_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(failed_nodes, failedNodes_);
          DARABONBA_PTR_FROM_JSON(healthy_nodes, healthyNodes_);
          DARABONBA_PTR_FROM_JSON(initial_nodes, initialNodes_);
          DARABONBA_PTR_FROM_JSON(offline_nodes, offlineNodes_);
          DARABONBA_PTR_FROM_JSON(removing_nodes, removingNodes_);
          DARABONBA_PTR_FROM_JSON(serving_nodes, servingNodes_);
          DARABONBA_PTR_FROM_JSON(state, state_);
          DARABONBA_PTR_FROM_JSON(total_nodes, totalNodes_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedNodes_ == nullptr
        && this->healthyNodes_ == nullptr && this->initialNodes_ == nullptr && this->offlineNodes_ == nullptr && this->removingNodes_ == nullptr && this->servingNodes_ == nullptr
        && this->state_ == nullptr && this->totalNodes_ == nullptr; };
        // failedNodes Field Functions 
        bool hasFailedNodes() const { return this->failedNodes_ != nullptr;};
        void deleteFailedNodes() { this->failedNodes_ = nullptr;};
        inline int64_t getFailedNodes() const { DARABONBA_PTR_GET_DEFAULT(failedNodes_, 0L) };
        inline Status& setFailedNodes(int64_t failedNodes) { DARABONBA_PTR_SET_VALUE(failedNodes_, failedNodes) };


        // healthyNodes Field Functions 
        bool hasHealthyNodes() const { return this->healthyNodes_ != nullptr;};
        void deleteHealthyNodes() { this->healthyNodes_ = nullptr;};
        inline int64_t getHealthyNodes() const { DARABONBA_PTR_GET_DEFAULT(healthyNodes_, 0L) };
        inline Status& setHealthyNodes(int64_t healthyNodes) { DARABONBA_PTR_SET_VALUE(healthyNodes_, healthyNodes) };


        // initialNodes Field Functions 
        bool hasInitialNodes() const { return this->initialNodes_ != nullptr;};
        void deleteInitialNodes() { this->initialNodes_ = nullptr;};
        inline int64_t getInitialNodes() const { DARABONBA_PTR_GET_DEFAULT(initialNodes_, 0L) };
        inline Status& setInitialNodes(int64_t initialNodes) { DARABONBA_PTR_SET_VALUE(initialNodes_, initialNodes) };


        // offlineNodes Field Functions 
        bool hasOfflineNodes() const { return this->offlineNodes_ != nullptr;};
        void deleteOfflineNodes() { this->offlineNodes_ = nullptr;};
        inline int64_t getOfflineNodes() const { DARABONBA_PTR_GET_DEFAULT(offlineNodes_, 0L) };
        inline Status& setOfflineNodes(int64_t offlineNodes) { DARABONBA_PTR_SET_VALUE(offlineNodes_, offlineNodes) };


        // removingNodes Field Functions 
        bool hasRemovingNodes() const { return this->removingNodes_ != nullptr;};
        void deleteRemovingNodes() { this->removingNodes_ = nullptr;};
        inline int64_t getRemovingNodes() const { DARABONBA_PTR_GET_DEFAULT(removingNodes_, 0L) };
        inline Status& setRemovingNodes(int64_t removingNodes) { DARABONBA_PTR_SET_VALUE(removingNodes_, removingNodes) };


        // servingNodes Field Functions 
        bool hasServingNodes() const { return this->servingNodes_ != nullptr;};
        void deleteServingNodes() { this->servingNodes_ = nullptr;};
        inline int64_t getServingNodes() const { DARABONBA_PTR_GET_DEFAULT(servingNodes_, 0L) };
        inline Status& setServingNodes(int64_t servingNodes) { DARABONBA_PTR_SET_VALUE(servingNodes_, servingNodes) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Status& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // totalNodes Field Functions 
        bool hasTotalNodes() const { return this->totalNodes_ != nullptr;};
        void deleteTotalNodes() { this->totalNodes_ = nullptr;};
        inline int64_t getTotalNodes() const { DARABONBA_PTR_GET_DEFAULT(totalNodes_, 0L) };
        inline Status& setTotalNodes(int64_t totalNodes) { DARABONBA_PTR_SET_VALUE(totalNodes_, totalNodes) };


      protected:
        // The number of failed nodes.
        shared_ptr<int64_t> failedNodes_ {};
        // The number of healthy nodes.
        shared_ptr<int64_t> healthyNodes_ {};
        // The number of nodes that are being created.
        shared_ptr<int64_t> initialNodes_ {};
        // The number of offline nodes.
        shared_ptr<int64_t> offlineNodes_ {};
        // The number of nodes that are being removed.
        shared_ptr<int64_t> removingNodes_ {};
        // The number of running nodes.
        shared_ptr<int64_t> servingNodes_ {};
        // The status of the node pool. Valid values:
        // 
        // *   `active`: The node pool is active.
        // *   `scaling`: The node pool is being scaled.
        // *   `removing`: The nodes are being removed from the node pool.
        // *   `deleting`: The node pool is being deleted.
        // *   `updating`: The node pool is being updated.
        shared_ptr<string> state_ {};
        // The total number of nodes in the node pool.
        shared_ptr<int64_t> totalNodes_ {};
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
          // The price cap for a single preemptible instance.
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
          // The private pool ID, which is the same as the ID of the elasticity assurance or capacity reservation for which the private pool is generated.
          shared_ptr<string> id_ {};
          // The type of the private node pool. This parameter specifies the type of the private node pool that is used to create instances. A private node pool is generated when an elasticity assurance or a capacity reservation service takes effect. The system selects a private node pool to launch instances. Valid values:
          // 
          // *   `Open`: uses open private pool. The system selects an open private node pool to launch instances. If no matching open private node pool is available, the resources in the public node pool are used.
          // *   `Target`: uses the specified private node pool. The system uses the resources of the specified private node pool to launch instances. If the specified private node pool is unavailable, instances cannot be launched.
          // *   `None`: No private node pool is used. The resources of private node pools are not used to launch instances.
          shared_ptr<string> matchCriteria_ {};
        };

        virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->cisEnabled_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->dataDisks_ == nullptr && this->deploymentsetId_ == nullptr
        && this->desiredSize_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceChargeType_ == nullptr && this->instancePatterns_ == nullptr
        && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->keyPair_ == nullptr && this->loginAsNonRoot_ == nullptr
        && this->loginPassword_ == nullptr && this->multiAzPolicy_ == nullptr && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->platform_ == nullptr && this->privatePoolOptions_ == nullptr && this->ramPolicy_ == nullptr && this->ramRoleName_ == nullptr
        && this->rdsInstances_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingPolicy_ == nullptr && this->securityGroupId_ == nullptr
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


        // ramPolicy Field Functions 
        bool hasRamPolicy() const { return this->ramPolicy_ != nullptr;};
        void deleteRamPolicy() { this->ramPolicy_ = nullptr;};
        inline string getRamPolicy() const { DARABONBA_PTR_GET_DEFAULT(ramPolicy_, "") };
        inline ScalingGroup& setRamPolicy(string ramPolicy) { DARABONBA_PTR_SET_VALUE(ramPolicy_, ramPolicy) };


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


        // scalingGroupId Field Functions 
        bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
        void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
        inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
        inline ScalingGroup& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


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
        // Specifies whether to enable auto-renewal for the nodes in the node pool. This parameter takes effect only if `instance_charge_type` is set to `PrePaid`. Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> autoRenew_ {};
        // The auto-renewal period. Valid value:
        // 
        // *   Valid values when PeriodUnit is set to Week: 1, 2, and 3.
        // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60
        shared_ptr<int64_t> autoRenewPeriod_ {};
        // This parameter is deprecated.
        // 
        // Use security_hardening_os instead.
        shared_ptr<bool> cisEnabled_ {};
        // Specifies whether to automatically create pay-as-you-go instances to meet the required number of ECS instances if preemptible instances cannot be created due to reasons such as the cost or insufficient inventory. This parameter takes effect if you set `multi_az_policy` to `COST_OPTIMIZED` Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> compensateWithOnDemand_ {};
        // The configurations of the data disks that are mounted to the nodes in the node pool. The configurations include the disk category and disk size.
        shared_ptr<vector<DataDisk>> dataDisks_ {};
        // The deployment set ID.
        shared_ptr<string> deploymentsetId_ {};
        // The expected number of nodes in the node pool.
        shared_ptr<int64_t> desiredSize_ {};
        // The ID of the custom image. You can call the `DescribeKubernetesVersionMetadata` operation to query the images supported by ACK.
        shared_ptr<string> imageId_ {};
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
        shared_ptr<string> imageType_ {};
        // The billing method of the nodes in the node pool. Valid values:
        // 
        // *   `PrePaid`: subscription.
        // *   `PostPaid`: pay-as-you-go.
        shared_ptr<string> instanceChargeType_ {};
        // The attribute configurations of the instance.
        shared_ptr<vector<InstancePatterns>> instancePatterns_ {};
        // The list of instance types. You can select multiple instance types. When the system needs to create a node, it starts from the first instance type until the node is created. The instance type that is used to create the node varies based on the inventory.
        shared_ptr<vector<string>> instanceTypes_ {};
        // The metering method of the public IP address.
        // 
        // *   PayByBandwidth: pay-by-data-transfer.
        // *   PayByTraffic: pay-by-data-transfer.
        shared_ptr<string> internetChargeType_ {};
        // The maximum outbound bandwidth of the public IP address. Unit: Mbit/s. Valid values: 1 to 100.
        shared_ptr<int64_t> internetMaxBandwidthOut_ {};
        // The name of the key pair. You must specify this parameter or the `login_password` parameter.
        // 
        // You must specify the `key_pair` parameter if the node pool is a managed node pool.
        shared_ptr<string> keyPair_ {};
        // Indicates whether a non-root user can log on to an Elastic Compute Service (ECS) instance added to the node pool.
        // 
        // *   true: Logs in as a non-root user (ecs-user).
        // *   false: Logs in as the root user.
        shared_ptr<bool> loginAsNonRoot_ {};
        // The password for SSH logon. You must specify this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
        // 
        // The returned password is encrypted to ensure security.
        shared_ptr<string> loginPassword_ {};
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
        shared_ptr<string> multiAzPolicy_ {};
        // The minimum number of pay-as-you-go instances that must be kept in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is smaller than the value of this parameter, Auto Scaling preferably creates pay-as-you-go instances
        shared_ptr<int64_t> onDemandBaseCapacity_ {};
        // The percentage of pay-as-you-go instances among the extra instances that exceed the number specified by `on_demand_base_capacity`. Valid values: 0 to 100.
        shared_ptr<int64_t> onDemandPercentageAboveBaseCapacity_ {};
        // The subscription duration of the nodes in the node pool. This parameter is available and required only when `instance_charge_type` is set to `PrePaid`.
        // 
        // *   If `period_unit` is set to Week, the valid values of `period` are 1, 2, 3, and 4.
        // *   If `period_unit` is set to Month, the valid values of `period` are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
        shared_ptr<int64_t> period_ {};
        // The billing cycle of the nodes in the node pool. This parameter is required if you set `instance_charge_type` to `PrePaid`. Valid values:
        // 
        // *   `Month`: The subscription duration is measured in months.
        // *   `Week`: The subscription duration is measured in weeks.
        shared_ptr<string> periodUnit_ {};
        // This parameter is deprecated.
        // 
        // The OS distribution that is used. Valid values:
        // 
        // *   `CentOS`
        // *   `AliyunLinux`
        // *   `Windows`
        // *   `WindowsCore`
        shared_ptr<string> platform_ {};
        // The configurations of the private node pool.
        shared_ptr<ScalingGroup::PrivatePoolOptions> privatePoolOptions_ {};
        // This field is deprecated and replaced by the ram_role_name parameter.
        shared_ptr<string> ramPolicy_ {};
        // Worker RAM role name.
        shared_ptr<string> ramRoleName_ {};
        // The ApsaraDB RDS instances. If you specify the list of ApsaraDB RDS instances, ECS instances in the cluster are automatically added to the whitelist of the ApsaraDB RDS instances.
        shared_ptr<vector<string>> rdsInstances_ {};
        shared_ptr<ScalingGroup::ResourcePoolOptions> resourcePoolOptions_ {};
        // The scaling group ID.
        shared_ptr<string> scalingGroupId_ {};
        // The scaling mode of the scaling group. Valid values:
        // 
        // *   `release`: the standard mode. ECS instances are created and released based on the resource usage.
        // *   `recycle`: the swift mode. ECS instances are created, stopped, or started during scaling events. This reduces the time required for the next scale-out event. When the instance is stopped, you are charged only for the storage service. This does not apply to ECS instances that are attached to local disks.
        shared_ptr<string> scalingPolicy_ {};
        // This parameter is deprecated.
        // 
        // The ID of the security group to which the node pool is added. If the node pool is added to multiple security groups, the first ID in the value of `security_group_ids` is returned.
        shared_ptr<string> securityGroupId_ {};
        // The IDs of security groups for the node pool.
        shared_ptr<vector<string>> securityGroupIds_ {};
        // Indicates whether Alibaba Cloud Linux Security Hardening is enabled. Valid values:
        // 
        // *   `true`: Alibaba Cloud Linux Security Hardening is enabled.
        // *   `false`: Alibaba Cloud Linux Security Hardening is disabled.
        // 
        // Default value: `false`.
        shared_ptr<bool> securityHardeningOs_ {};
        // Specifies whether to enable reinforcement based on classified protection. You can enable reinforcement based on classified protection only if Alibaba Cloud Linux 2 or Alibaba Cloud Linux 3 is installed on nodes. Alibaba Cloud provides standards for baseline check and a scanner to ensure the compliance of Alibaba Cloud Linux 2 and Alibaba Cloud Linux 3 images with the level 3 standards of classified protection.
        shared_ptr<bool> socEnabled_ {};
        // The number of instance types that are available for creating preemptible instances. Auto Scaling creates preemptible instances of multiple instance types that are available at the lowest cost. Valid values: 1 to 10.
        shared_ptr<int64_t> spotInstancePools_ {};
        // Specifies whether to enable the supplementation of preemptible instances. If the supplementation of preemptible instances is enabled, when the scaling group receives a system message that a preemptible instance is to be reclaimed, the scaling group attempts to create a new instance to replace this instance. Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> spotInstanceRemedy_ {};
        // The bid configurations of preemptible instances.
        shared_ptr<vector<ScalingGroup::SpotPriceLimit>> spotPriceLimit_ {};
        // The bidding policy of preemptible instances. Valid values:
        // 
        // *   NoSpot: non-preemptible.
        // *   SpotWithPriceLimit: specifies the highest bid.
        // *   SpotAsPriceGo: automatically submits bids based on the up-to-date market price.
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
        // The categories of system disks. The system creates system disks of a disk category with a lower priority if the disk category with a higher priority is unavailable.
        shared_ptr<vector<string>> systemDiskCategories_ {};
        // The type of system disk. Valid values:
        // 
        // *   `cloud_efficiency`: ultra disk
        // *   `cloud_ssd`: SSD
        // *   `cloud_essd`: Enterprise ESSD (ESSD).
        // *   `cloud_auto`: ESSD AutoPL disk.
        // *   `cloud_essd_entry`: ESSD Entry disk.
        shared_ptr<string> systemDiskCategory_ {};
        // The encryption algorithm that is used to encrypt the system disk. The value is aes-256.
        shared_ptr<string> systemDiskEncryptAlgorithm_ {};
        // Specifies whether to encrypt the system disk. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> systemDiskEncrypted_ {};
        // The ID of the Key Management Service (KMS) key that is used to encrypt the system disk.
        shared_ptr<string> systemDiskKmsKeyId_ {};
        // The performance level (PL) of the system disk. This parameter takes effect only for an ESSD. You can specify a higher PL if you increase the size of a data disk. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
        // 
        // *   PL0: moderate maximum concurrent I/O performance and low I/O latency.
        // *   PL1: moderate maximum concurrent I/O performance and low I/O latency.
        // *   PL2: high maximum concurrent I/O performance and low I/O latency.
        // *   PL3: ultra-high maximum concurrent I/O performance and ultra-low I/O latency.
        shared_ptr<string> systemDiskPerformanceLevel_ {};
        // The predefined read and write IOPS of the system disk when the disk type is cloud_auto.
        shared_ptr<int64_t> systemDiskProvisionedIops_ {};
        // The size of the system disk in GiB.
        // 
        // Valid values: 20 to 2048.
        shared_ptr<int64_t> systemDiskSize_ {};
        shared_ptr<string> systemDiskSnapshotPolicyId_ {};
        // The label to be added to the ECS instances.
        shared_ptr<vector<Tag>> tags_ {};
        // The vSwitch IDs.
        shared_ptr<vector<string>> vswitchIds_ {};
      };

      class NodepoolInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodepoolInfo& obj) { 
          DARABONBA_PTR_TO_JSON(created, created_);
          DARABONBA_PTR_TO_JSON(is_default, isDefault_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
          DARABONBA_PTR_TO_JSON(region_id, regionId_);
          DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(updated, updated_);
        };
        friend void from_json(const Darabonba::Json& j, NodepoolInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(created, created_);
          DARABONBA_PTR_FROM_JSON(is_default, isDefault_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
          DARABONBA_PTR_FROM_JSON(region_id, regionId_);
          DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(updated, updated_);
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
        virtual bool empty() const override { return this->created_ == nullptr
        && this->isDefault_ == nullptr && this->name_ == nullptr && this->nodepoolId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->type_ == nullptr && this->updated_ == nullptr; };
        // created Field Functions 
        bool hasCreated() const { return this->created_ != nullptr;};
        void deleteCreated() { this->created_ = nullptr;};
        inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
        inline NodepoolInfo& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline NodepoolInfo& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NodepoolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodepoolId Field Functions 
        bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
        void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
        inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
        inline NodepoolInfo& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline NodepoolInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


        // updated Field Functions 
        bool hasUpdated() const { return this->updated_ != nullptr;};
        void deleteUpdated() { this->updated_ = nullptr;};
        inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
        inline NodepoolInfo& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      protected:
        // The time when the node pool was created.
        shared_ptr<string> created_ {};
        // Indicates whether the node pool is a default node pool. An Container Service for Kubernetes (ACK) cluster usually has only one default node pool. Valid values:
        // 
        // *   `true`: The node pool is a default node pool.
        // *   `false`: The node pool is a non-default node pool.
        shared_ptr<bool> isDefault_ {};
        // The name of the node pool.
        shared_ptr<string> name_ {};
        // The node pool ID.
        shared_ptr<string> nodepoolId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The type of node pool. Valid values:
        // 
        // *   `ess`: regular node pool, which supports the managed node pool feature and the auto scaling feature.
        // *   `edge`: edge node pool
        // *   `lingjun`: Lingjun node pool.
        shared_ptr<string> type_ {};
        // The time when the node pool was last updated.
        shared_ptr<string> updated_ {};
      };

      class NodeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(kubelet_configuration, kubeletConfiguration_);
          DARABONBA_PTR_TO_JSON(node_os_config, nodeOsConfig_);
        };
        friend void from_json(const Darabonba::Json& j, NodeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(kubelet_configuration, kubeletConfiguration_);
          DARABONBA_PTR_FROM_JSON(node_os_config, nodeOsConfig_);
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
        class NodeOsConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeOsConfig& obj) { 
            DARABONBA_PTR_TO_JSON(hugepage, hugepage_);
          };
          friend void from_json(const Darabonba::Json& j, NodeOsConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(hugepage, hugepage_);
          };
          NodeOsConfig() = default ;
          NodeOsConfig(const NodeOsConfig &) = default ;
          NodeOsConfig(NodeOsConfig &&) = default ;
          NodeOsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeOsConfig() = default ;
          NodeOsConfig& operator=(const NodeOsConfig &) = default ;
          NodeOsConfig& operator=(NodeOsConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hugepage_ == nullptr; };
          // hugepage Field Functions 
          bool hasHugepage() const { return this->hugepage_ != nullptr;};
          void deleteHugepage() { this->hugepage_ = nullptr;};
          inline const Hugepage & getHugepage() const { DARABONBA_PTR_GET_CONST(hugepage_, Hugepage) };
          inline Hugepage getHugepage() { DARABONBA_PTR_GET(hugepage_, Hugepage) };
          inline NodeOsConfig& setHugepage(const Hugepage & hugepage) { DARABONBA_PTR_SET_VALUE(hugepage_, hugepage) };
          inline NodeOsConfig& setHugepage(Hugepage && hugepage) { DARABONBA_PTR_SET_RVALUE(hugepage_, hugepage) };


        protected:
          shared_ptr<Hugepage> hugepage_ {};
        };

        virtual bool empty() const override { return this->kubeletConfiguration_ == nullptr
        && this->nodeOsConfig_ == nullptr; };
        // kubeletConfiguration Field Functions 
        bool hasKubeletConfiguration() const { return this->kubeletConfiguration_ != nullptr;};
        void deleteKubeletConfiguration() { this->kubeletConfiguration_ = nullptr;};
        inline const KubeletConfig & getKubeletConfiguration() const { DARABONBA_PTR_GET_CONST(kubeletConfiguration_, KubeletConfig) };
        inline KubeletConfig getKubeletConfiguration() { DARABONBA_PTR_GET(kubeletConfiguration_, KubeletConfig) };
        inline NodeConfig& setKubeletConfiguration(const KubeletConfig & kubeletConfiguration) { DARABONBA_PTR_SET_VALUE(kubeletConfiguration_, kubeletConfiguration) };
        inline NodeConfig& setKubeletConfiguration(KubeletConfig && kubeletConfiguration) { DARABONBA_PTR_SET_RVALUE(kubeletConfiguration_, kubeletConfiguration) };


        // nodeOsConfig Field Functions 
        bool hasNodeOsConfig() const { return this->nodeOsConfig_ != nullptr;};
        void deleteNodeOsConfig() { this->nodeOsConfig_ = nullptr;};
        inline const NodeConfig::NodeOsConfig & getNodeOsConfig() const { DARABONBA_PTR_GET_CONST(nodeOsConfig_, NodeConfig::NodeOsConfig) };
        inline NodeConfig::NodeOsConfig getNodeOsConfig() { DARABONBA_PTR_GET(nodeOsConfig_, NodeConfig::NodeOsConfig) };
        inline NodeConfig& setNodeOsConfig(const NodeConfig::NodeOsConfig & nodeOsConfig) { DARABONBA_PTR_SET_VALUE(nodeOsConfig_, nodeOsConfig) };
        inline NodeConfig& setNodeOsConfig(NodeConfig::NodeOsConfig && nodeOsConfig) { DARABONBA_PTR_SET_RVALUE(nodeOsConfig_, nodeOsConfig) };


      protected:
        // The parameter settings of the kubelet.
        shared_ptr<KubeletConfig> kubeletConfiguration_ {};
        shared_ptr<NodeConfig::NodeOsConfig> nodeOsConfig_ {};
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
        shared_ptr<NodeComponents::Config> config_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> version_ {};
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
          // Specifies whether to enable auto update. Valid values:
          // 
          // *   `true`
          // *   `false`
          shared_ptr<bool> autoUpgrade_ {};
          // The maximum number of unavailable nodes. Valid values: 1 to 1000.
          // 
          // Default value: 1
          shared_ptr<int64_t> maxUnavailable_ {};
          // The number of nodes that are temporarily added to the node pool during an auto update. You must specify this parameter or `surge_percentage`.
          shared_ptr<int64_t> surge_ {};
          // The percentage of additional nodes to the total nodes in the node pool. You must specify this parameter or the `surge` parameter.
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
          // Specifies whether to allow node restart. This parameter takes effect only if `auto_vul_fix` is set to true. Valid values:
          // 
          // *   `true`: allows node restart.
          // *   `false`: does not allow node restart.
          shared_ptr<bool> restartNode_ {};
          // The severity level of CVEs that can be automatically patched. Multiple severity levels are separated by commas (,).
          // 
          // *   `asap`: high.
          // *   `later`: medium.
          // *   `nntf`: low.
          shared_ptr<string> vulLevel_ {};
        };

        class AutoUpgradePolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AutoUpgradePolicy& obj) { 
            DARABONBA_PTR_TO_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
          };
          friend void from_json(const Darabonba::Json& j, AutoUpgradePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(auto_upgrade_kubelet, autoUpgradeKubelet_);
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
          virtual bool empty() const override { return this->autoUpgradeKubelet_ == nullptr; };
          // autoUpgradeKubelet Field Functions 
          bool hasAutoUpgradeKubelet() const { return this->autoUpgradeKubelet_ != nullptr;};
          void deleteAutoUpgradeKubelet() { this->autoUpgradeKubelet_ = nullptr;};
          inline bool getAutoUpgradeKubelet() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeKubelet_, false) };
          inline AutoUpgradePolicy& setAutoUpgradeKubelet(bool autoUpgradeKubelet) { DARABONBA_PTR_SET_VALUE(autoUpgradeKubelet_, autoUpgradeKubelet) };


        protected:
          // Specifies whether to allow the auto upgrade of the kubelet. This parameter takes effect only if `auto_upgrade` is set to true. Valid values:
          // 
          // *   `true`: allows the auto upgrade of the kubelet.
          // *   `false`: no.
          shared_ptr<bool> autoUpgradeKubelet_ {};
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
          shared_ptr<bool> approvalRequired_ {};
          // Specifies whether to allow node restart. This parameter takes effect only when `auto_repair=true` is specified.
          // 
          // *   `true`: allows node restart.
          // *   `false`: does not allow node restart.
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
        // Specifies whether to enable auto repair. This parameter takes effect only if `enable` is set to true. Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> autoRepair_ {};
        // The auto node repair policy.
        shared_ptr<Management::AutoRepairPolicy> autoRepairPolicy_ {};
        // Specifies whether to enable auto node upgrade. This parameter takes effect only if `enable` is set to true.
        // 
        // *   `true`: Auto update is enabled.
        // *   `false`: Auto update is disabled.
        shared_ptr<bool> autoUpgrade_ {};
        // The auto update policy.
        shared_ptr<Management::AutoUpgradePolicy> autoUpgradePolicy_ {};
        // Indicates whether auto Common Vulnerabilities and Exposures (CVE) patching is enabled. This parameter takes effect only when `enable=true` is specified.
        // 
        // *   `true`: enables auto CVE patching.
        // *   `true`: disables auto CVE patching.
        shared_ptr<bool> autoVulFix_ {};
        // The auto CVE patching policy.
        shared_ptr<Management::AutoVulFixPolicy> autoVulFixPolicy_ {};
        // Specifies whether to enable the managed node pool feature. Valid values:
        // 
        // *   `true`
        // *   `false`: If you set this parameter to false, other parameters of `management` do not take effect.
        shared_ptr<bool> enable_ {};
        // The configurations of auto update. The configurations take effect only if `enable` is set to true.
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
        // Specifies whether to install the CloudMonitor agent on ECS nodes. After the CloudMonitor agent is installed on ECS nodes, you can view the monitoring information about the instances in the CloudMonitor console. We recommend that you install the CloudMonitor agent. Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> cmsEnabled_ {};
        // The CPU management policy of the nodes in the node pool. The following policies are supported if the version of the cluster is Kubernetes 1.12.6 or later:
        // 
        // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
        // *   `none`: specifies that the default CPU affinity is used.
        shared_ptr<string> cpuPolicy_ {};
        // The node labels.
        shared_ptr<vector<Tag>> labels_ {};
        // The name of the custom node.
        // 
        // The custom node name. A custom node name consists of a prefix, an IP substring, and a suffix.
        // 
        // *   The prefix and suffix can contain multiple parts that are separated by periods (.). Each part can contain lowercase letters, digits, and hyphens (-). A custom node name must start and end with a digit or lowercase letter.
        // *   The IP substring length specifies the number of digits to be truncated from the end of the node IP address. The IP substring length ranges from 5 to 12.
        // 
        // For example, if the node IP address is 192.168.0.55, the prefix is aliyun.com, the IP substring length is 5, and the suffix is test, the node name will aliyun.com00055test.
        shared_ptr<string> nodeNameMode_ {};
        // The user-defined script that is executed before nodes are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
        shared_ptr<string> preUserData_ {};
        // The name of the container runtime. The following types of runtime are supported by ACK:
        // 
        // *   containerd: containerd is the recommended runtime and supports all Kubernetes versions.
        // *   Sandboxed-Container.runv: The Sandbox-Container runtime provides improved isolation and supports Kubernetes 1.31 and earlier.
        // *   Docker (deprecated): supports Kubernetes 1.22 and earlier.
        shared_ptr<string> runtime_ {};
        // The version of the container runtime.
        shared_ptr<string> runtimeVersion_ {};
        // The taint. Taints can be used together with tolerations to avoid scheduling pods to specified nodes. For more information, see [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/).
        shared_ptr<vector<Taint>> taints_ {};
        // Specifies whether the nodes are unschedulable after a scale-out activity is performed.
        // 
        // *   true: The node cannot be scheduled.
        // *   false: The node can be scheduled.
        shared_ptr<bool> unschedulable_ {};
        // The user-defined script that is executed after nodes are initialized. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
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
        // This parameter is discontinued.
        // 
        // The bandwidth of the enhanced edge node pool. Unit: Mbit/s.
        shared_ptr<int64_t> bandwidth_ {};
        // This parameter is discontinued.
        // 
        // The ID of the Cloud Connect Network (CCN) instance that is associated with the enhanced edge node pool.
        shared_ptr<string> ccnId_ {};
        // This parameter is discontinued.
        // 
        // The region in which the CCN instance that is with the enhanced edge node pool resides.
        shared_ptr<string> ccnRegionId_ {};
        // This parameter is discontinued.
        // 
        // The ID of the Cloud Enterprise Network (CEN) instance that is associated with the enhanced edge node pool.
        shared_ptr<string> cenId_ {};
        // This parameter is discontinued.
        // 
        // The subscription duration of the enhanced edge node pool. Unit: months.
        shared_ptr<string> improvedPeriod_ {};
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
        // The maximum bandwidth of the elastic IP address (EIP).
        // 
        // Valid values: 1 to 100. Unit: Mbit/s.
        shared_ptr<int64_t> eipBandwidth_ {};
        // The billing method of the EIP. Valid values:
        // 
        // *   `PayByBandwidth`: pay-by-bandwidth.
        // *   `PayByTraffic`: pay-by-data-transfer.
        shared_ptr<string> eipInternetChargeType_ {};
        // Indicates whether auto scaling is enabled. Valid values:
        // 
        // *   `true`: Auto scaling is enabled for the node pool. When the capacity planning of the cluster cannot meet the requirements of pod scheduling, ACK automatically scales out nodes based on the configured minimum and maximum number of instances. Node instant scaling is enabled by default for clusters that run Kubernetes 1.24 or later. Node auto scaling is enabled for clusters that run Kubernetes 1.24 and earlier. For more information, see [Node auto scaling](https://help.aliyun.com/document_detail/2746785.html).
        // *   `false`: does not enable auto scaling. ACK adjusts the number of nodes in the node pool based on the value of the Expected Nodes parameter. The number of nodes is always the same as the value of the Expected Nodes parameter.
        // 
        // If you set this parameter to false, other parameters of `auto_scaling` do not take effect.
        shared_ptr<bool> enable_ {};
        // Specifies whether to associate an EIP with the node pool. Valid values:
        // 
        // *   `true`
        // *   `false`
        shared_ptr<bool> isBondEip_ {};
        // The maximum number of scalable instances in the node pool. Your existing instances are not included.
        shared_ptr<int64_t> maxInstances_ {};
        // The minimum number of scalable instances in the node pool, excluding your existing instances.
        shared_ptr<int64_t> minInstances_ {};
        // The instance types that can be used for the auto scaling of the node pool. Valid values:
        // 
        // *   `cpu`: regular instance.
        // *   `gpu`: GPU-accelerated instance.
        // *   `gpushare`: shared GPU-accelerated instance.
        // *   `spot`: preemptible instance.
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
        shared_ptr<bool> enable_ {};
      };

      virtual bool empty() const override { return this->autoMode_ == nullptr
        && this->autoScaling_ == nullptr && this->interconnectConfig_ == nullptr && this->interconnectMode_ == nullptr && this->kubernetesConfig_ == nullptr && this->management_ == nullptr
        && this->maxNodes_ == nullptr && this->nodeComponents_ == nullptr && this->nodeConfig_ == nullptr && this->nodepoolInfo_ == nullptr && this->scalingGroup_ == nullptr
        && this->status_ == nullptr && this->teeConfig_ == nullptr; };
      // autoMode Field Functions 
      bool hasAutoMode() const { return this->autoMode_ != nullptr;};
      void deleteAutoMode() { this->autoMode_ = nullptr;};
      inline const Nodepools::AutoMode & getAutoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, Nodepools::AutoMode) };
      inline Nodepools::AutoMode getAutoMode() { DARABONBA_PTR_GET(autoMode_, Nodepools::AutoMode) };
      inline Nodepools& setAutoMode(const Nodepools::AutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
      inline Nodepools& setAutoMode(Nodepools::AutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


      // autoScaling Field Functions 
      bool hasAutoScaling() const { return this->autoScaling_ != nullptr;};
      void deleteAutoScaling() { this->autoScaling_ = nullptr;};
      inline const Nodepools::AutoScaling & getAutoScaling() const { DARABONBA_PTR_GET_CONST(autoScaling_, Nodepools::AutoScaling) };
      inline Nodepools::AutoScaling getAutoScaling() { DARABONBA_PTR_GET(autoScaling_, Nodepools::AutoScaling) };
      inline Nodepools& setAutoScaling(const Nodepools::AutoScaling & autoScaling) { DARABONBA_PTR_SET_VALUE(autoScaling_, autoScaling) };
      inline Nodepools& setAutoScaling(Nodepools::AutoScaling && autoScaling) { DARABONBA_PTR_SET_RVALUE(autoScaling_, autoScaling) };


      // interconnectConfig Field Functions 
      bool hasInterconnectConfig() const { return this->interconnectConfig_ != nullptr;};
      void deleteInterconnectConfig() { this->interconnectConfig_ = nullptr;};
      inline const Nodepools::InterconnectConfig & getInterconnectConfig() const { DARABONBA_PTR_GET_CONST(interconnectConfig_, Nodepools::InterconnectConfig) };
      inline Nodepools::InterconnectConfig getInterconnectConfig() { DARABONBA_PTR_GET(interconnectConfig_, Nodepools::InterconnectConfig) };
      inline Nodepools& setInterconnectConfig(const Nodepools::InterconnectConfig & interconnectConfig) { DARABONBA_PTR_SET_VALUE(interconnectConfig_, interconnectConfig) };
      inline Nodepools& setInterconnectConfig(Nodepools::InterconnectConfig && interconnectConfig) { DARABONBA_PTR_SET_RVALUE(interconnectConfig_, interconnectConfig) };


      // interconnectMode Field Functions 
      bool hasInterconnectMode() const { return this->interconnectMode_ != nullptr;};
      void deleteInterconnectMode() { this->interconnectMode_ = nullptr;};
      inline string getInterconnectMode() const { DARABONBA_PTR_GET_DEFAULT(interconnectMode_, "") };
      inline Nodepools& setInterconnectMode(string interconnectMode) { DARABONBA_PTR_SET_VALUE(interconnectMode_, interconnectMode) };


      // kubernetesConfig Field Functions 
      bool hasKubernetesConfig() const { return this->kubernetesConfig_ != nullptr;};
      void deleteKubernetesConfig() { this->kubernetesConfig_ = nullptr;};
      inline const Nodepools::KubernetesConfig & getKubernetesConfig() const { DARABONBA_PTR_GET_CONST(kubernetesConfig_, Nodepools::KubernetesConfig) };
      inline Nodepools::KubernetesConfig getKubernetesConfig() { DARABONBA_PTR_GET(kubernetesConfig_, Nodepools::KubernetesConfig) };
      inline Nodepools& setKubernetesConfig(const Nodepools::KubernetesConfig & kubernetesConfig) { DARABONBA_PTR_SET_VALUE(kubernetesConfig_, kubernetesConfig) };
      inline Nodepools& setKubernetesConfig(Nodepools::KubernetesConfig && kubernetesConfig) { DARABONBA_PTR_SET_RVALUE(kubernetesConfig_, kubernetesConfig) };


      // management Field Functions 
      bool hasManagement() const { return this->management_ != nullptr;};
      void deleteManagement() { this->management_ = nullptr;};
      inline const Nodepools::Management & getManagement() const { DARABONBA_PTR_GET_CONST(management_, Nodepools::Management) };
      inline Nodepools::Management getManagement() { DARABONBA_PTR_GET(management_, Nodepools::Management) };
      inline Nodepools& setManagement(const Nodepools::Management & management) { DARABONBA_PTR_SET_VALUE(management_, management) };
      inline Nodepools& setManagement(Nodepools::Management && management) { DARABONBA_PTR_SET_RVALUE(management_, management) };


      // maxNodes Field Functions 
      bool hasMaxNodes() const { return this->maxNodes_ != nullptr;};
      void deleteMaxNodes() { this->maxNodes_ = nullptr;};
      inline int64_t getMaxNodes() const { DARABONBA_PTR_GET_DEFAULT(maxNodes_, 0L) };
      inline Nodepools& setMaxNodes(int64_t maxNodes) { DARABONBA_PTR_SET_VALUE(maxNodes_, maxNodes) };


      // nodeComponents Field Functions 
      bool hasNodeComponents() const { return this->nodeComponents_ != nullptr;};
      void deleteNodeComponents() { this->nodeComponents_ = nullptr;};
      inline const vector<Nodepools::NodeComponents> & getNodeComponents() const { DARABONBA_PTR_GET_CONST(nodeComponents_, vector<Nodepools::NodeComponents>) };
      inline vector<Nodepools::NodeComponents> getNodeComponents() { DARABONBA_PTR_GET(nodeComponents_, vector<Nodepools::NodeComponents>) };
      inline Nodepools& setNodeComponents(const vector<Nodepools::NodeComponents> & nodeComponents) { DARABONBA_PTR_SET_VALUE(nodeComponents_, nodeComponents) };
      inline Nodepools& setNodeComponents(vector<Nodepools::NodeComponents> && nodeComponents) { DARABONBA_PTR_SET_RVALUE(nodeComponents_, nodeComponents) };


      // nodeConfig Field Functions 
      bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
      void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
      inline const Nodepools::NodeConfig & getNodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, Nodepools::NodeConfig) };
      inline Nodepools::NodeConfig getNodeConfig() { DARABONBA_PTR_GET(nodeConfig_, Nodepools::NodeConfig) };
      inline Nodepools& setNodeConfig(const Nodepools::NodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
      inline Nodepools& setNodeConfig(Nodepools::NodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


      // nodepoolInfo Field Functions 
      bool hasNodepoolInfo() const { return this->nodepoolInfo_ != nullptr;};
      void deleteNodepoolInfo() { this->nodepoolInfo_ = nullptr;};
      inline const Nodepools::NodepoolInfo & getNodepoolInfo() const { DARABONBA_PTR_GET_CONST(nodepoolInfo_, Nodepools::NodepoolInfo) };
      inline Nodepools::NodepoolInfo getNodepoolInfo() { DARABONBA_PTR_GET(nodepoolInfo_, Nodepools::NodepoolInfo) };
      inline Nodepools& setNodepoolInfo(const Nodepools::NodepoolInfo & nodepoolInfo) { DARABONBA_PTR_SET_VALUE(nodepoolInfo_, nodepoolInfo) };
      inline Nodepools& setNodepoolInfo(Nodepools::NodepoolInfo && nodepoolInfo) { DARABONBA_PTR_SET_RVALUE(nodepoolInfo_, nodepoolInfo) };


      // scalingGroup Field Functions 
      bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
      void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
      inline const Nodepools::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, Nodepools::ScalingGroup) };
      inline Nodepools::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, Nodepools::ScalingGroup) };
      inline Nodepools& setScalingGroup(const Nodepools::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
      inline Nodepools& setScalingGroup(Nodepools::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Nodepools::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Nodepools::Status) };
      inline Nodepools::Status getStatus() { DARABONBA_PTR_GET(status_, Nodepools::Status) };
      inline Nodepools& setStatus(const Nodepools::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Nodepools& setStatus(Nodepools::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // teeConfig Field Functions 
      bool hasTeeConfig() const { return this->teeConfig_ != nullptr;};
      void deleteTeeConfig() { this->teeConfig_ = nullptr;};
      inline const Nodepools::TeeConfig & getTeeConfig() const { DARABONBA_PTR_GET_CONST(teeConfig_, Nodepools::TeeConfig) };
      inline Nodepools::TeeConfig getTeeConfig() { DARABONBA_PTR_GET(teeConfig_, Nodepools::TeeConfig) };
      inline Nodepools& setTeeConfig(const Nodepools::TeeConfig & teeConfig) { DARABONBA_PTR_SET_VALUE(teeConfig_, teeConfig) };
      inline Nodepools& setTeeConfig(Nodepools::TeeConfig && teeConfig) { DARABONBA_PTR_SET_RVALUE(teeConfig_, teeConfig) };


    protected:
      shared_ptr<Nodepools::AutoMode> autoMode_ {};
      // The configurations about auto scaling.
      shared_ptr<Nodepools::AutoScaling> autoScaling_ {};
      // This parameter is discontinued.
      // 
      // The network configurations of the edge node pool. This parameter takes effect only on edge node pools.
      shared_ptr<Nodepools::InterconnectConfig> interconnectConfig_ {};
      // The network type of the edge node pool. This parameter takes effect only if you set `type` of the node pool to `edge`. Valid values:
      // 
      // *   `basic`: Internet. Nodes in the node pool communicate with nodes in the cloud over the Internet. Applications deployed on the edge nodes cannot directly access virtual private clouds (VPCs) over the Internet.
      // *   `private`: private network. You can connect nodes in the node pool to the cloud by using Express Connect, VPN, or Cloud Enterprise Network (CEN). This greatly improves the quality and security of cloud-edge communication.
      shared_ptr<string> interconnectMode_ {};
      // The configurations of the cluster.
      shared_ptr<Nodepools::KubernetesConfig> kubernetesConfig_ {};
      // The configuration of the managed node pool feature. The configuration takes effect only for ACK Pro managed clusters.
      shared_ptr<Nodepools::Management> management_ {};
      // The maximum number of nodes that can be created in the edge node pool. The value of this parameter must be greater than or equal to 0. A value of 0 indicates that the number of nodes in the node pool is limited only by the quota of nodes in the cluster. In most cases, this parameter is set to a value larger than 0 for edge node pools. This parameter is set to 0 for node pools whose types are ess or default edge node pools.
      shared_ptr<int64_t> maxNodes_ {};
      shared_ptr<vector<Nodepools::NodeComponents>> nodeComponents_ {};
      // The configurations of nodes.
      shared_ptr<Nodepools::NodeConfig> nodeConfig_ {};
      // The information about the node pool.
      shared_ptr<Nodepools::NodepoolInfo> nodepoolInfo_ {};
      // The configurations of the scaling group that is used by the node pool.
      shared_ptr<Nodepools::ScalingGroup> scalingGroup_ {};
      // The status of the node pool.
      shared_ptr<Nodepools::Status> status_ {};
      // The configurations of confidential computing.
      shared_ptr<Nodepools::TeeConfig> teeConfig_ {};
    };

    virtual bool empty() const override { return this->nodepools_ == nullptr; };
    // nodepools Field Functions 
    bool hasNodepools() const { return this->nodepools_ != nullptr;};
    void deleteNodepools() { this->nodepools_ = nullptr;};
    inline const vector<DescribeClusterNodePoolsResponseBody::Nodepools> & getNodepools() const { DARABONBA_PTR_GET_CONST(nodepools_, vector<DescribeClusterNodePoolsResponseBody::Nodepools>) };
    inline vector<DescribeClusterNodePoolsResponseBody::Nodepools> getNodepools() { DARABONBA_PTR_GET(nodepools_, vector<DescribeClusterNodePoolsResponseBody::Nodepools>) };
    inline DescribeClusterNodePoolsResponseBody& setNodepools(const vector<DescribeClusterNodePoolsResponseBody::Nodepools> & nodepools) { DARABONBA_PTR_SET_VALUE(nodepools_, nodepools) };
    inline DescribeClusterNodePoolsResponseBody& setNodepools(vector<DescribeClusterNodePoolsResponseBody::Nodepools> && nodepools) { DARABONBA_PTR_SET_RVALUE(nodepools_, nodepools) };


  protected:
    // The node pools.
    shared_ptr<vector<DescribeClusterNodePoolsResponseBody::Nodepools>> nodepools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
