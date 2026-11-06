// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/Addon.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <alibabacloud/models/Nodepool.hpp>
#include <alibabacloud/models/Runtime.hpp>
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
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_TO_JSON(addons, addons_);
      DARABONBA_PTR_TO_JSON(api_audiences, apiAudiences_);
      DARABONBA_PTR_TO_JSON(audit_log_config, auditLogConfig_);
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(charge_type, chargeType_);
      DARABONBA_PTR_TO_JSON(cis_enabled, cisEnabled_);
      DARABONBA_PTR_TO_JSON(client_token, clientToken_);
      DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_TO_JSON(controlplane_log_components, controlplaneLogComponents_);
      DARABONBA_PTR_TO_JSON(controlplane_log_project, controlplaneLogProject_);
      DARABONBA_PTR_TO_JSON(controlplane_log_ttl, controlplaneLogTtl_);
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(custom_san, customSan_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(disable_rollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_TO_JSON(encryption_provider_key, encryptionProviderKey_);
      DARABONBA_PTR_TO_JSON(endpoint_public_access, endpointPublicAccess_);
      DARABONBA_PTR_TO_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_TO_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(image_type, imageType_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_TO_JSON(is_enterprise_security_group, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_TO_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
      DARABONBA_PTR_TO_JSON(kubernetes_version, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(load_balancer_id, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(load_balancer_spec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(logging_type, loggingType_);
      DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(master_auto_renew, masterAutoRenew_);
      DARABONBA_PTR_TO_JSON(master_auto_renew_period, masterAutoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(master_count, masterCount_);
      DARABONBA_PTR_TO_JSON(master_instance_charge_type, masterInstanceChargeType_);
      DARABONBA_PTR_TO_JSON(master_instance_types, masterInstanceTypes_);
      DARABONBA_PTR_TO_JSON(master_period, masterPeriod_);
      DARABONBA_PTR_TO_JSON(master_period_unit, masterPeriodUnit_);
      DARABONBA_PTR_TO_JSON(master_system_disk_category, masterSystemDiskCategory_);
      DARABONBA_PTR_TO_JSON(master_system_disk_performance_level, masterSystemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(master_system_disk_size, masterSystemDiskSize_);
      DARABONBA_PTR_TO_JSON(master_system_disk_snapshot_policy_id, masterSystemDiskSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(master_vswitch_ids, masterVswitchIds_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nat_gateway, natGateway_);
      DARABONBA_PTR_TO_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_TO_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_TO_JSON(node_port_range, nodePortRange_);
      DARABONBA_PTR_TO_JSON(nodepools, nodepools_);
      DARABONBA_PTR_TO_JSON(num_of_nodes, numOfNodes_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(os_type, osType_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(period_unit, periodUnit_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(pod_vswitch_ids, podVswitchIds_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(rrsa_config, rrsaConfig_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(security_hardening_os, securityHardeningOs_);
      DARABONBA_PTR_TO_JSON(service_account_issuer, serviceAccountIssuer_);
      DARABONBA_PTR_TO_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(service_discovery_types, serviceDiscoveryTypes_);
      DARABONBA_PTR_TO_JSON(snat_entry, snatEntry_);
      DARABONBA_PTR_TO_JSON(soc_enabled, socEnabled_);
      DARABONBA_PTR_TO_JSON(ssh_flags, sshFlags_);
      DARABONBA_PTR_TO_JSON(support_policy, supportPolicy_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taints, taints_);
      DARABONBA_PTR_TO_JSON(timeout_mins, timeoutMins_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(user_ca, userCa_);
      DARABONBA_PTR_TO_JSON(user_data, userData_);
      DARABONBA_PTR_TO_JSON(vpcid, vpcid_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_TO_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_TO_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_TO_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_TO_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_performance_level, workerSystemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_size, workerSystemDiskSize_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_snapshot_policy_id, workerSystemDiskSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(worker_vswitch_ids, workerVswitchIds_);
      DARABONBA_PTR_TO_JSON(zone_id, zoneId_);
      DARABONBA_PTR_TO_JSON(zone_ids, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_FROM_JSON(addons, addons_);
      DARABONBA_PTR_FROM_JSON(api_audiences, apiAudiences_);
      DARABONBA_PTR_FROM_JSON(audit_log_config, auditLogConfig_);
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(charge_type, chargeType_);
      DARABONBA_PTR_FROM_JSON(cis_enabled, cisEnabled_);
      DARABONBA_PTR_FROM_JSON(client_token, clientToken_);
      DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_FROM_JSON(controlplane_log_components, controlplaneLogComponents_);
      DARABONBA_PTR_FROM_JSON(controlplane_log_project, controlplaneLogProject_);
      DARABONBA_PTR_FROM_JSON(controlplane_log_ttl, controlplaneLogTtl_);
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(custom_san, customSan_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(disable_rollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_FROM_JSON(encryption_provider_key, encryptionProviderKey_);
      DARABONBA_PTR_FROM_JSON(endpoint_public_access, endpointPublicAccess_);
      DARABONBA_PTR_FROM_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_FROM_JSON(format_disk, formatDisk_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(image_type, imageType_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_FROM_JSON(is_enterprise_security_group, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(keep_instance_name, keepInstanceName_);
      DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
      DARABONBA_PTR_FROM_JSON(kubernetes_version, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(load_balancer_id, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(load_balancer_spec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(logging_type, loggingType_);
      DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(master_auto_renew, masterAutoRenew_);
      DARABONBA_PTR_FROM_JSON(master_auto_renew_period, masterAutoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(master_count, masterCount_);
      DARABONBA_PTR_FROM_JSON(master_instance_charge_type, masterInstanceChargeType_);
      DARABONBA_PTR_FROM_JSON(master_instance_types, masterInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(master_period, masterPeriod_);
      DARABONBA_PTR_FROM_JSON(master_period_unit, masterPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(master_system_disk_category, masterSystemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(master_system_disk_performance_level, masterSystemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(master_system_disk_size, masterSystemDiskSize_);
      DARABONBA_PTR_FROM_JSON(master_system_disk_snapshot_policy_id, masterSystemDiskSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(master_vswitch_ids, masterVswitchIds_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nat_gateway, natGateway_);
      DARABONBA_PTR_FROM_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_FROM_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_FROM_JSON(node_port_range, nodePortRange_);
      DARABONBA_PTR_FROM_JSON(nodepools, nodepools_);
      DARABONBA_PTR_FROM_JSON(num_of_nodes, numOfNodes_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(os_type, osType_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(period_unit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(pod_vswitch_ids, podVswitchIds_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(rrsa_config, rrsaConfig_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(security_hardening_os, securityHardeningOs_);
      DARABONBA_PTR_FROM_JSON(service_account_issuer, serviceAccountIssuer_);
      DARABONBA_PTR_FROM_JSON(service_cidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(service_discovery_types, serviceDiscoveryTypes_);
      DARABONBA_PTR_FROM_JSON(snat_entry, snatEntry_);
      DARABONBA_PTR_FROM_JSON(soc_enabled, socEnabled_);
      DARABONBA_PTR_FROM_JSON(ssh_flags, sshFlags_);
      DARABONBA_PTR_FROM_JSON(support_policy, supportPolicy_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taints, taints_);
      DARABONBA_PTR_FROM_JSON(timeout_mins, timeoutMins_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(user_ca, userCa_);
      DARABONBA_PTR_FROM_JSON(user_data, userData_);
      DARABONBA_PTR_FROM_JSON(vpcid, vpcid_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_FROM_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_FROM_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_performance_level, workerSystemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_size, workerSystemDiskSize_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_snapshot_policy_id, workerSystemDiskSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(worker_vswitch_ids, workerVswitchIds_);
      DARABONBA_PTR_FROM_JSON(zone_id, zoneId_);
      DARABONBA_PTR_FROM_JSON(zone_ids, zoneIds_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkerDataDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkerDataDisks& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(performance_level, performanceLevel_);
        DARABONBA_PTR_TO_JSON(size, size_);
      };
      friend void from_json(const Darabonba::Json& j, WorkerDataDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(performance_level, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(size, size_);
      };
      WorkerDataDisks() = default ;
      WorkerDataDisks(const WorkerDataDisks &) = default ;
      WorkerDataDisks(WorkerDataDisks &&) = default ;
      WorkerDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkerDataDisks() = default ;
      WorkerDataDisks& operator=(const WorkerDataDisks &) = default ;
      WorkerDataDisks& operator=(WorkerDataDisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->encrypted_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline WorkerDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline WorkerDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline WorkerDataDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline WorkerDataDisks& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The type of the data cloud disk.
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // Specifies whether to encrypt the data cloud disk. Valid values:
      // 
      // - `true`: Encrypts the data cloud disk.
      // - `false`: Does not encrypt the data cloud disk.
      // 
      // Default value: `false`.
      shared_ptr<string> encrypted_ {};
      // The performance level of the data cloud disk. This parameter takes effect only for [ESSD](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The size of the data cloud disk. Valid values: 40 to 32767. Unit: GiB.
      // 
      // This parameter is required.
      shared_ptr<string> size_ {};
    };

    class RrsaConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RrsaConfig& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, RrsaConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      };
      RrsaConfig() = default ;
      RrsaConfig(const RrsaConfig &) = default ;
      RrsaConfig(RrsaConfig &&) = default ;
      RrsaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RrsaConfig() = default ;
      RrsaConfig& operator=(const RrsaConfig &) = default ;
      RrsaConfig& operator=(RrsaConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline RrsaConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // Specifies whether to enable the RRSA feature. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
    };

    class OperationPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
      };
      friend void from_json(const Darabonba::Json& j, OperationPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
      };
      OperationPolicy() = default ;
      OperationPolicy(const OperationPolicy &) = default ;
      OperationPolicy(OperationPolicy &&) = default ;
      OperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationPolicy() = default ;
      OperationPolicy& operator=(const OperationPolicy &) = default ;
      OperationPolicy& operator=(OperationPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClusterAutoUpgrade : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterAutoUpgrade& obj) { 
          DARABONBA_PTR_TO_JSON(channel, channel_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterAutoUpgrade& obj) { 
          DARABONBA_PTR_FROM_JSON(channel, channel_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        ClusterAutoUpgrade() = default ;
        ClusterAutoUpgrade(const ClusterAutoUpgrade &) = default ;
        ClusterAutoUpgrade(ClusterAutoUpgrade &&) = default ;
        ClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterAutoUpgrade() = default ;
        ClusterAutoUpgrade& operator=(const ClusterAutoUpgrade &) = default ;
        ClusterAutoUpgrade& operator=(ClusterAutoUpgrade &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channel_ == nullptr
        && this->enabled_ == nullptr; };
        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline ClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline ClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // The automatic cluster upgrade channel. Valid values:
        // - patch: Automatically upgrades to the patch version when a patch version is available for the current minor version. The new Kubernetes version does not include breaking changes.
        // - stable: Automatically upgrades to the latest patch version of the second most recent minor version. The new Kubernetes version may include API and feature changes, but its stability has been widely verified.
        // - rapid: Automatically upgrades to the latest patch version of the latest minor version to obtain new features from the Kubernetes community faster.
        shared_ptr<string> channel_ {};
        // Specifies whether to enable automatic cluster upgrade. Valid values:
        // - true: Enabled.
        // - false: Disabled.
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->clusterAutoUpgrade_ == nullptr; };
      // clusterAutoUpgrade Field Functions 
      bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
      void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
      inline const OperationPolicy::ClusterAutoUpgrade & getClusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, OperationPolicy::ClusterAutoUpgrade) };
      inline OperationPolicy::ClusterAutoUpgrade getClusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, OperationPolicy::ClusterAutoUpgrade) };
      inline OperationPolicy& setClusterAutoUpgrade(const OperationPolicy::ClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
      inline OperationPolicy& setClusterAutoUpgrade(OperationPolicy::ClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


    protected:
      // The automatic cluster upgrade configuration.
      shared_ptr<OperationPolicy::ClusterAutoUpgrade> clusterAutoUpgrade_ {};
    };

    class ControlPlaneEndpointsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(internal_dns_config, internalDnsConfig_);
        DARABONBA_PTR_TO_JSON(load_balancers_config, loadBalancersConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(internal_dns_config, internalDnsConfig_);
        DARABONBA_PTR_FROM_JSON(load_balancers_config, loadBalancersConfig_);
      };
      ControlPlaneEndpointsConfig() = default ;
      ControlPlaneEndpointsConfig(const ControlPlaneEndpointsConfig &) = default ;
      ControlPlaneEndpointsConfig(ControlPlaneEndpointsConfig &&) = default ;
      ControlPlaneEndpointsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneEndpointsConfig() = default ;
      ControlPlaneEndpointsConfig& operator=(const ControlPlaneEndpointsConfig &) = default ;
      ControlPlaneEndpointsConfig& operator=(ControlPlaneEndpointsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LoadBalancersConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancersConfig& obj) { 
          DARABONBA_PTR_TO_JSON(endpoint_type, endpointType_);
          DARABONBA_PTR_TO_JSON(load_balancer_id, loadBalancerId_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancersConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(endpoint_type, endpointType_);
          DARABONBA_PTR_FROM_JSON(load_balancer_id, loadBalancerId_);
        };
        LoadBalancersConfig() = default ;
        LoadBalancersConfig(const LoadBalancersConfig &) = default ;
        LoadBalancersConfig(LoadBalancersConfig &&) = default ;
        LoadBalancersConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancersConfig() = default ;
        LoadBalancersConfig& operator=(const LoadBalancersConfig &) = default ;
        LoadBalancersConfig& operator=(LoadBalancersConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->loadBalancerId_ == nullptr; };
        // endpointType Field Functions 
        bool hasEndpointType() const { return this->endpointType_ != nullptr;};
        void deleteEndpointType() { this->endpointType_ = nullptr;};
        inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
        inline LoadBalancersConfig& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline LoadBalancersConfig& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      protected:
        // The type of the endpoint.
        shared_ptr<string> endpointType_ {};
        // The ID of the NLB instance.
        shared_ptr<string> loadBalancerId_ {};
      };

      class InternalDnsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternalDnsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(bind_vpcs, bindVpcs_);
        };
        friend void from_json(const Darabonba::Json& j, InternalDnsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(bind_vpcs, bindVpcs_);
        };
        InternalDnsConfig() = default ;
        InternalDnsConfig(const InternalDnsConfig &) = default ;
        InternalDnsConfig(InternalDnsConfig &&) = default ;
        InternalDnsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InternalDnsConfig() = default ;
        InternalDnsConfig& operator=(const InternalDnsConfig &) = default ;
        InternalDnsConfig& operator=(InternalDnsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindVpcs_ == nullptr; };
        // bindVpcs Field Functions 
        bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
        void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
        inline const vector<string> & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, vector<string>) };
        inline vector<string> getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, vector<string>) };
        inline InternalDnsConfig& setBindVpcs(const vector<string> & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
        inline InternalDnsConfig& setBindVpcs(vector<string> && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


      protected:
        // The VPCs where the internal DNS records of the cluster take effect.
        shared_ptr<vector<string>> bindVpcs_ {};
      };

      virtual bool empty() const override { return this->internalDnsConfig_ == nullptr
        && this->loadBalancersConfig_ == nullptr; };
      // internalDnsConfig Field Functions 
      bool hasInternalDnsConfig() const { return this->internalDnsConfig_ != nullptr;};
      void deleteInternalDnsConfig() { this->internalDnsConfig_ = nullptr;};
      inline const ControlPlaneEndpointsConfig::InternalDnsConfig & getInternalDnsConfig() const { DARABONBA_PTR_GET_CONST(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig::InternalDnsConfig getInternalDnsConfig() { DARABONBA_PTR_GET(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(const ControlPlaneEndpointsConfig::InternalDnsConfig & internalDnsConfig) { DARABONBA_PTR_SET_VALUE(internalDnsConfig_, internalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(ControlPlaneEndpointsConfig::InternalDnsConfig && internalDnsConfig) { DARABONBA_PTR_SET_RVALUE(internalDnsConfig_, internalDnsConfig) };


      // loadBalancersConfig Field Functions 
      bool hasLoadBalancersConfig() const { return this->loadBalancersConfig_ != nullptr;};
      void deleteLoadBalancersConfig() { this->loadBalancersConfig_ = nullptr;};
      inline const vector<ControlPlaneEndpointsConfig::LoadBalancersConfig> & getLoadBalancersConfig() const { DARABONBA_PTR_GET_CONST(loadBalancersConfig_, vector<ControlPlaneEndpointsConfig::LoadBalancersConfig>) };
      inline vector<ControlPlaneEndpointsConfig::LoadBalancersConfig> getLoadBalancersConfig() { DARABONBA_PTR_GET(loadBalancersConfig_, vector<ControlPlaneEndpointsConfig::LoadBalancersConfig>) };
      inline ControlPlaneEndpointsConfig& setLoadBalancersConfig(const vector<ControlPlaneEndpointsConfig::LoadBalancersConfig> & loadBalancersConfig) { DARABONBA_PTR_SET_VALUE(loadBalancersConfig_, loadBalancersConfig) };
      inline ControlPlaneEndpointsConfig& setLoadBalancersConfig(vector<ControlPlaneEndpointsConfig::LoadBalancersConfig> && loadBalancersConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancersConfig_, loadBalancersConfig) };


    protected:
      // The internal DNS configuration of the cluster, which applies to ACK managed clusters. The internal domain name is used by node-side system components such as kubelet and kube-proxy to access the API server. If internal domain name access is not enabled, node-side system components access the API server by using the IP address of the CLB instance.
      shared_ptr<ControlPlaneEndpointsConfig::InternalDnsConfig> internalDnsConfig_ {};
      // The connection configuration of the cluster. If you specify this parameter, the endpoint_public_access and load_balancer_id parameters do not take effect. ACK supports only automatic creation of NLB instances. To specify a CLB or NLB instance, use load_balancers_config to specify the corresponding instance ID.
      shared_ptr<vector<ControlPlaneEndpointsConfig::LoadBalancersConfig>> loadBalancersConfig_ {};
    };

    class ControlPlaneConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneConfig& obj) { 
        DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(charge_type, chargeType_);
        DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
        DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_TO_JSON(image_id, imageId_);
        DARABONBA_PTR_TO_JSON(image_type, imageType_);
        DARABONBA_PTR_TO_JSON(instance_metadata_options, instanceMetadataOptions_);
        DARABONBA_PTR_TO_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
        DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
        DARABONBA_PTR_TO_JSON(node_port_range, nodePortRange_);
        DARABONBA_PTR_TO_JSON(period, period_);
        DARABONBA_PTR_TO_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(security_hardening_os, securityHardeningOs_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(soc_enabled, socEnabled_);
        DARABONBA_PTR_TO_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_TO_JSON(system_disk_category, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
        DARABONBA_PTR_TO_JSON(system_disk_size, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(charge_type, chargeType_);
        DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
        DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_FROM_JSON(image_id, imageId_);
        DARABONBA_PTR_FROM_JSON(image_type, imageType_);
        DARABONBA_PTR_FROM_JSON(instance_metadata_options, instanceMetadataOptions_);
        DARABONBA_PTR_FROM_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
        DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
        DARABONBA_PTR_FROM_JSON(node_port_range, nodePortRange_);
        DARABONBA_PTR_FROM_JSON(period, period_);
        DARABONBA_PTR_FROM_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(security_hardening_os, securityHardeningOs_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(soc_enabled, socEnabled_);
        DARABONBA_PTR_FROM_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_FROM_JSON(system_disk_category, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
        DARABONBA_PTR_FROM_JSON(system_disk_size, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
      };
      ControlPlaneConfig() = default ;
      ControlPlaneConfig(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig(ControlPlaneConfig &&) = default ;
      ControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneConfig() = default ;
      ControlPlaneConfig& operator=(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig& operator=(ControlPlaneConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->chargeType_ == nullptr && this->cloudMonitorFlags_ == nullptr && this->cpuPolicy_ == nullptr && this->deploymentsetId_ == nullptr
        && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceMetadataOptions_ == nullptr && this->instanceTypes_ == nullptr && this->keyPair_ == nullptr
        && this->loginPassword_ == nullptr && this->nodePortRange_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->runtime_ == nullptr
        && this->securityHardeningOs_ == nullptr && this->size_ == nullptr && this->socEnabled_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategory_ == nullptr
        && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline ControlPlaneConfig& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
      inline ControlPlaneConfig& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline ControlPlaneConfig& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cloudMonitorFlags Field Functions 
      bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
      void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
      inline bool getCloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
      inline ControlPlaneConfig& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


      // cpuPolicy Field Functions 
      bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
      void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
      inline string getCpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
      inline ControlPlaneConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


      // deploymentsetId Field Functions 
      bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
      void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
      inline string getDeploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
      inline ControlPlaneConfig& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline ControlPlaneConfig& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // instanceMetadataOptions Field Functions 
      bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
      void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
      inline const InstanceMetadataOptions & getInstanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline InstanceMetadataOptions getInstanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline ControlPlaneConfig& setInstanceMetadataOptions(const InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
      inline ControlPlaneConfig& setInstanceMetadataOptions(InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
      inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
      inline ControlPlaneConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline ControlPlaneConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // keyPair Field Functions 
      bool hasKeyPair() const { return this->keyPair_ != nullptr;};
      void deleteKeyPair() { this->keyPair_ = nullptr;};
      inline string getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
      inline ControlPlaneConfig& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


      // loginPassword Field Functions 
      bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
      void deleteLoginPassword() { this->loginPassword_ = nullptr;};
      inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
      inline ControlPlaneConfig& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


      // nodePortRange Field Functions 
      bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
      void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
      inline string getNodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
      inline ControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline ControlPlaneConfig& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline ControlPlaneConfig& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline ControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // securityHardeningOs Field Functions 
      bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
      void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
      inline bool getSecurityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
      inline ControlPlaneConfig& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline ControlPlaneConfig& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // socEnabled Field Functions 
      bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
      void deleteSocEnabled() { this->socEnabled_ = nullptr;};
      inline bool getSocEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
      inline ControlPlaneConfig& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


      // systemDiskBurstingEnabled Field Functions 
      bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
      void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
      inline bool getSystemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
      inline ControlPlaneConfig& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline ControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline ControlPlaneConfig& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskProvisionedIops Field Functions 
      bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
      void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
      inline int64_t getSystemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
      inline ControlPlaneConfig& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline ControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // systemDiskSnapshotPolicyId Field Functions 
      bool hasSystemDiskSnapshotPolicyId() const { return this->systemDiskSnapshotPolicyId_ != nullptr;};
      void deleteSystemDiskSnapshotPolicyId() { this->systemDiskSnapshotPolicyId_ = nullptr;};
      inline string getSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSnapshotPolicyId_, "") };
      inline ControlPlaneConfig& setSystemDiskSnapshotPolicyId(string systemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskSnapshotPolicyId_, systemDiskSnapshotPolicyId) };


    protected:
      // Specifies whether to enable auto-renewal for control plane nodes. This parameter takes effect only when the billing method is set to PrePaid. Valid values:
      // - true: enables auto-renewal.
      // - false: disables auto-renewal.
      // 
      // Default value: true.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period for control plane nodes. Valid values: 1, 2, 3, 6, and 12. Unit: months.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // The billing method for control plane nodes. Valid values:
      // - PrePaid: subscription.
      // - PostPaid: pay-as-you-go.
      // 
      // Default value: PostPaid.
      shared_ptr<string> chargeType_ {};
      // Specifies whether to install the CloudMonitor agent on the nodes. Valid values:
      // - true: installs the CloudMonitor agent.
      // - false: does not install the CloudMonitor agent.
      // 
      // Default value: false.
      shared_ptr<bool> cloudMonitorFlags_ {};
      // The CPU management policy for nodes. Valid values:
      // - static: allows you to enhance CPU affinity and exclusivity for pods with specific resource characteristics on the node.
      // - none: uses the default CPU affinity policy.
      // 
      // Default value: none.
      shared_ptr<string> cpuPolicy_ {};
      // The ID of the deployment set.
      shared_ptr<string> deploymentsetId_ {};
      // The ID of the image.
      shared_ptr<string> imageId_ {};
      // The type of the operating system image.
      shared_ptr<string> imageType_ {};
      // The instance metadata access configuration for ECS instances. This parameter is available only to users in the whitelist. To use this parameter, submit a ticket.
      shared_ptr<InstanceMetadataOptions> instanceMetadataOptions_ {};
      // The instance types of the nodes.
      shared_ptr<vector<string>> instanceTypes_ {};
      // The name of the key pair. You must specify this parameter or the login_password parameter.
      shared_ptr<string> keyPair_ {};
      // The SSH logon password. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. You must specify this parameter or the key_pair parameter.
      shared_ptr<string> loginPassword_ {};
      // **[Deprecated]** The service port range of the node.
      shared_ptr<string> nodePortRange_ {};
      // The subscription period for control plane nodes. This parameter is required and takes effect only when the billing method is set to PrePaid. Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60. Unit: months.
      // 
      // Default value: 1.
      shared_ptr<int64_t> period_ {};
      // The unit of the subscription period for control plane nodes. This parameter is required and takes effect only when the billing method is set to PrePaid. Valid value: Month. Currently, only months are supported.
      shared_ptr<string> periodUnit_ {};
      // **[Deprecated]** The name of the runtime for control plane nodes. Valid value:
      // 
      // containerd: the containerd runtime, which supports all cluster versions.
      shared_ptr<string> runtime_ {};
      // Specifies whether to enable security hardening for Alibaba Cloud OS. Valid values:
      // - true: enables security hardening for Alibaba Cloud OS.
      // - false: disables security hardening for Alibaba Cloud OS.
      // 
      // Default value: false.
      shared_ptr<bool> securityHardeningOs_ {};
      // The number of control plane nodes. Valid values: 3 and 5.
      shared_ptr<int64_t> size_ {};
      // Specifies whether to enable MLPS 2.0 security hardening. Valid values:
      // - true: enables MLPS 2.0 security hardening.
      // - false: disables MLPS 2.0 security hardening.
      // 
      // Default value: false.
      shared_ptr<bool> socEnabled_ {};
      // Specifies whether to enable the performance burst feature for the system cloud disk of the node. Valid values:
      // - true: enables the feature.
      // - false: disables the feature.
      // 
      // This parameter is supported only when system_disk_category is set to cloud_auto.
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The type of the system cloud disk for the node. Valid values:
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: ESSD.
      // - cloud_auto: ESSD AutoPL cloud disk.
      // - cloud_essd_entry: ESSD Entry cloud disk.
      // 
      // Default value: cloud_ssd. The default value may vary by zone.
      shared_ptr<string> systemDiskCategory_ {};
      // The performance level of the system cloud disk for the node. This parameter takes effect only for ESSDs. The performance level varies based on the disk size. For more information, see [ESSD (standard SSD)](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The provisioned read and write IOPS for the system cloud disk of the node. Valid values: 0 to min{50,000, 1000 × capacity - baseline performance}. Baseline performance = min{1,800 + 50 × capacity, 50,000}. 
      // 
      // This parameter is supported only when system_disk_category is set to cloud_auto.
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The size of the system cloud disk for the node. Valid values: 40 to 500. Unit: GiB.
      // 
      // Default value: 120.
      shared_ptr<int64_t> systemDiskSize_ {};
      // The ID of the automatic snapshot policy for the node.
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
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
      // Specifies whether to enable the intelligent managed mode. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      shared_ptr<bool> enable_ {};
    };

    class AuditLogConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuditLogConfig& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(sls_project_name, slsProjectName_);
      };
      friend void from_json(const Darabonba::Json& j, AuditLogConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(sls_project_name, slsProjectName_);
      };
      AuditLogConfig() = default ;
      AuditLogConfig(const AuditLogConfig &) = default ;
      AuditLogConfig(AuditLogConfig &&) = default ;
      AuditLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuditLogConfig() = default ;
      AuditLogConfig& operator=(const AuditLogConfig &) = default ;
      AuditLogConfig& operator=(AuditLogConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->slsProjectName_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AuditLogConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // slsProjectName Field Functions 
      bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
      void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
      inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
      inline AuditLogConfig& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


    protected:
      // Specifies whether to enable the cluster audit log feature. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
      // The [SLS Project](https://help.aliyun.com/document_detail/48873.html) where the [Logstore](https://help.aliyun.com/document_detail/48873.html) for cluster audit logs is located.
      // 
      // - Default value: `k8s-log-{clusterid}`.
      // 
      // - After you enable the cluster audit log feature, a Logstore for cluster audit logs is created in the specified SLS Project.
      shared_ptr<string> slsProjectName_ {};
    };

    virtual bool empty() const override { return this->accessControlList_ == nullptr
        && this->addons_ == nullptr && this->apiAudiences_ == nullptr && this->auditLogConfig_ == nullptr && this->autoMode_ == nullptr && this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->chargeType_ == nullptr && this->cisEnabled_ == nullptr && this->clientToken_ == nullptr && this->cloudMonitorFlags_ == nullptr
        && this->clusterDomain_ == nullptr && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->containerCidr_ == nullptr && this->controlPlaneConfig_ == nullptr
        && this->controlPlaneEndpointsConfig_ == nullptr && this->controlplaneLogComponents_ == nullptr && this->controlplaneLogProject_ == nullptr && this->controlplaneLogTtl_ == nullptr && this->cpuPolicy_ == nullptr
        && this->customSan_ == nullptr && this->deletionProtection_ == nullptr && this->disableRollback_ == nullptr && this->enableRrsa_ == nullptr && this->encryptionProviderKey_ == nullptr
        && this->endpointPublicAccess_ == nullptr && this->extraSans_ == nullptr && this->formatDisk_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr
        && this->instances_ == nullptr && this->ipStack_ == nullptr && this->isEnterpriseSecurityGroup_ == nullptr && this->keepInstanceName_ == nullptr && this->keyPair_ == nullptr
        && this->kubernetesVersion_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerSpec_ == nullptr && this->loggingType_ == nullptr && this->loginPassword_ == nullptr
        && this->maintenanceWindow_ == nullptr && this->masterAutoRenew_ == nullptr && this->masterAutoRenewPeriod_ == nullptr && this->masterCount_ == nullptr && this->masterInstanceChargeType_ == nullptr
        && this->masterInstanceTypes_ == nullptr && this->masterPeriod_ == nullptr && this->masterPeriodUnit_ == nullptr && this->masterSystemDiskCategory_ == nullptr && this->masterSystemDiskPerformanceLevel_ == nullptr
        && this->masterSystemDiskSize_ == nullptr && this->masterSystemDiskSnapshotPolicyId_ == nullptr && this->masterVswitchIds_ == nullptr && this->name_ == nullptr && this->natGateway_ == nullptr
        && this->nodeCidrMask_ == nullptr && this->nodeNameMode_ == nullptr && this->nodePortRange_ == nullptr && this->nodepools_ == nullptr && this->numOfNodes_ == nullptr
        && this->operationPolicy_ == nullptr && this->osType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->platform_ == nullptr
        && this->podVswitchIds_ == nullptr && this->profile_ == nullptr && this->proxyMode_ == nullptr && this->rdsInstances_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->rrsaConfig_ == nullptr && this->runtime_ == nullptr && this->securityGroupId_ == nullptr && this->securityHardeningOs_ == nullptr
        && this->serviceAccountIssuer_ == nullptr && this->serviceCidr_ == nullptr && this->serviceDiscoveryTypes_ == nullptr && this->snatEntry_ == nullptr && this->socEnabled_ == nullptr
        && this->sshFlags_ == nullptr && this->supportPolicy_ == nullptr && this->tags_ == nullptr && this->taints_ == nullptr && this->timeoutMins_ == nullptr
        && this->timezone_ == nullptr && this->userCa_ == nullptr && this->userData_ == nullptr && this->vpcid_ == nullptr && this->vswitchIds_ == nullptr
        && this->workerAutoRenew_ == nullptr && this->workerAutoRenewPeriod_ == nullptr && this->workerDataDisks_ == nullptr && this->workerInstanceChargeType_ == nullptr && this->workerInstanceTypes_ == nullptr
        && this->workerPeriod_ == nullptr && this->workerPeriodUnit_ == nullptr && this->workerSystemDiskCategory_ == nullptr && this->workerSystemDiskPerformanceLevel_ == nullptr && this->workerSystemDiskSize_ == nullptr
        && this->workerSystemDiskSnapshotPolicyId_ == nullptr && this->workerVswitchIds_ == nullptr && this->zoneId_ == nullptr && this->zoneIds_ == nullptr; };
    // accessControlList Field Functions 
    bool hasAccessControlList() const { return this->accessControlList_ != nullptr;};
    void deleteAccessControlList() { this->accessControlList_ = nullptr;};
    inline const vector<string> & getAccessControlList() const { DARABONBA_PTR_GET_CONST(accessControlList_, vector<string>) };
    inline vector<string> getAccessControlList() { DARABONBA_PTR_GET(accessControlList_, vector<string>) };
    inline CreateClusterRequest& setAccessControlList(const vector<string> & accessControlList) { DARABONBA_PTR_SET_VALUE(accessControlList_, accessControlList) };
    inline CreateClusterRequest& setAccessControlList(vector<string> && accessControlList) { DARABONBA_PTR_SET_RVALUE(accessControlList_, accessControlList) };


    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<Addon> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Addon>) };
    inline vector<Addon> getAddons() { DARABONBA_PTR_GET(addons_, vector<Addon>) };
    inline CreateClusterRequest& setAddons(const vector<Addon> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline CreateClusterRequest& setAddons(vector<Addon> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // apiAudiences Field Functions 
    bool hasApiAudiences() const { return this->apiAudiences_ != nullptr;};
    void deleteApiAudiences() { this->apiAudiences_ = nullptr;};
    inline string getApiAudiences() const { DARABONBA_PTR_GET_DEFAULT(apiAudiences_, "") };
    inline CreateClusterRequest& setApiAudiences(string apiAudiences) { DARABONBA_PTR_SET_VALUE(apiAudiences_, apiAudiences) };


    // auditLogConfig Field Functions 
    bool hasAuditLogConfig() const { return this->auditLogConfig_ != nullptr;};
    void deleteAuditLogConfig() { this->auditLogConfig_ = nullptr;};
    inline const CreateClusterRequest::AuditLogConfig & getAuditLogConfig() const { DARABONBA_PTR_GET_CONST(auditLogConfig_, CreateClusterRequest::AuditLogConfig) };
    inline CreateClusterRequest::AuditLogConfig getAuditLogConfig() { DARABONBA_PTR_GET(auditLogConfig_, CreateClusterRequest::AuditLogConfig) };
    inline CreateClusterRequest& setAuditLogConfig(const CreateClusterRequest::AuditLogConfig & auditLogConfig) { DARABONBA_PTR_SET_VALUE(auditLogConfig_, auditLogConfig) };
    inline CreateClusterRequest& setAuditLogConfig(CreateClusterRequest::AuditLogConfig && auditLogConfig) { DARABONBA_PTR_SET_RVALUE(auditLogConfig_, auditLogConfig) };


    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const CreateClusterRequest::AutoMode & getAutoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, CreateClusterRequest::AutoMode) };
    inline CreateClusterRequest::AutoMode getAutoMode() { DARABONBA_PTR_GET(autoMode_, CreateClusterRequest::AutoMode) };
    inline CreateClusterRequest& setAutoMode(const CreateClusterRequest::AutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline CreateClusterRequest& setAutoMode(CreateClusterRequest::AutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateClusterRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cisEnabled Field Functions 
    bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
    void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
    inline bool getCisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
    inline CreateClusterRequest& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool getCloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline CreateClusterRequest& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string getClusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline CreateClusterRequest& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline CreateClusterRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline CreateClusterRequest& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const CreateClusterRequest::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, CreateClusterRequest::ControlPlaneConfig) };
    inline CreateClusterRequest::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, CreateClusterRequest::ControlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(const CreateClusterRequest::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(CreateClusterRequest::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // controlPlaneEndpointsConfig Field Functions 
    bool hasControlPlaneEndpointsConfig() const { return this->controlPlaneEndpointsConfig_ != nullptr;};
    void deleteControlPlaneEndpointsConfig() { this->controlPlaneEndpointsConfig_ = nullptr;};
    inline const CreateClusterRequest::ControlPlaneEndpointsConfig & getControlPlaneEndpointsConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneEndpointsConfig_, CreateClusterRequest::ControlPlaneEndpointsConfig) };
    inline CreateClusterRequest::ControlPlaneEndpointsConfig getControlPlaneEndpointsConfig() { DARABONBA_PTR_GET(controlPlaneEndpointsConfig_, CreateClusterRequest::ControlPlaneEndpointsConfig) };
    inline CreateClusterRequest& setControlPlaneEndpointsConfig(const CreateClusterRequest::ControlPlaneEndpointsConfig & controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };
    inline CreateClusterRequest& setControlPlaneEndpointsConfig(CreateClusterRequest::ControlPlaneEndpointsConfig && controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };


    // controlplaneLogComponents Field Functions 
    bool hasControlplaneLogComponents() const { return this->controlplaneLogComponents_ != nullptr;};
    void deleteControlplaneLogComponents() { this->controlplaneLogComponents_ = nullptr;};
    inline const vector<string> & getControlplaneLogComponents() const { DARABONBA_PTR_GET_CONST(controlplaneLogComponents_, vector<string>) };
    inline vector<string> getControlplaneLogComponents() { DARABONBA_PTR_GET(controlplaneLogComponents_, vector<string>) };
    inline CreateClusterRequest& setControlplaneLogComponents(const vector<string> & controlplaneLogComponents) { DARABONBA_PTR_SET_VALUE(controlplaneLogComponents_, controlplaneLogComponents) };
    inline CreateClusterRequest& setControlplaneLogComponents(vector<string> && controlplaneLogComponents) { DARABONBA_PTR_SET_RVALUE(controlplaneLogComponents_, controlplaneLogComponents) };


    // controlplaneLogProject Field Functions 
    bool hasControlplaneLogProject() const { return this->controlplaneLogProject_ != nullptr;};
    void deleteControlplaneLogProject() { this->controlplaneLogProject_ = nullptr;};
    inline string getControlplaneLogProject() const { DARABONBA_PTR_GET_DEFAULT(controlplaneLogProject_, "") };
    inline CreateClusterRequest& setControlplaneLogProject(string controlplaneLogProject) { DARABONBA_PTR_SET_VALUE(controlplaneLogProject_, controlplaneLogProject) };


    // controlplaneLogTtl Field Functions 
    bool hasControlplaneLogTtl() const { return this->controlplaneLogTtl_ != nullptr;};
    void deleteControlplaneLogTtl() { this->controlplaneLogTtl_ = nullptr;};
    inline string getControlplaneLogTtl() const { DARABONBA_PTR_GET_DEFAULT(controlplaneLogTtl_, "") };
    inline CreateClusterRequest& setControlplaneLogTtl(string controlplaneLogTtl) { DARABONBA_PTR_SET_VALUE(controlplaneLogTtl_, controlplaneLogTtl) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string getCpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline CreateClusterRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // customSan Field Functions 
    bool hasCustomSan() const { return this->customSan_ != nullptr;};
    void deleteCustomSan() { this->customSan_ = nullptr;};
    inline string getCustomSan() const { DARABONBA_PTR_GET_DEFAULT(customSan_, "") };
    inline CreateClusterRequest& setCustomSan(string customSan) { DARABONBA_PTR_SET_VALUE(customSan_, customSan) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateClusterRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // enableRrsa Field Functions 
    bool hasEnableRrsa() const { return this->enableRrsa_ != nullptr;};
    void deleteEnableRrsa() { this->enableRrsa_ = nullptr;};
    inline bool getEnableRrsa() const { DARABONBA_PTR_GET_DEFAULT(enableRrsa_, false) };
    inline CreateClusterRequest& setEnableRrsa(bool enableRrsa) { DARABONBA_PTR_SET_VALUE(enableRrsa_, enableRrsa) };


    // encryptionProviderKey Field Functions 
    bool hasEncryptionProviderKey() const { return this->encryptionProviderKey_ != nullptr;};
    void deleteEncryptionProviderKey() { this->encryptionProviderKey_ = nullptr;};
    inline string getEncryptionProviderKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionProviderKey_, "") };
    inline CreateClusterRequest& setEncryptionProviderKey(string encryptionProviderKey) { DARABONBA_PTR_SET_VALUE(encryptionProviderKey_, encryptionProviderKey) };


    // endpointPublicAccess Field Functions 
    bool hasEndpointPublicAccess() const { return this->endpointPublicAccess_ != nullptr;};
    void deleteEndpointPublicAccess() { this->endpointPublicAccess_ = nullptr;};
    inline bool getEndpointPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(endpointPublicAccess_, false) };
    inline CreateClusterRequest& setEndpointPublicAccess(bool endpointPublicAccess) { DARABONBA_PTR_SET_VALUE(endpointPublicAccess_, endpointPublicAccess) };


    // extraSans Field Functions 
    bool hasExtraSans() const { return this->extraSans_ != nullptr;};
    void deleteExtraSans() { this->extraSans_ = nullptr;};
    inline const vector<string> & getExtraSans() const { DARABONBA_PTR_GET_CONST(extraSans_, vector<string>) };
    inline vector<string> getExtraSans() { DARABONBA_PTR_GET(extraSans_, vector<string>) };
    inline CreateClusterRequest& setExtraSans(const vector<string> & extraSans) { DARABONBA_PTR_SET_VALUE(extraSans_, extraSans) };
    inline CreateClusterRequest& setExtraSans(vector<string> && extraSans) { DARABONBA_PTR_SET_RVALUE(extraSans_, extraSans) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool getFormatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline CreateClusterRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateClusterRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline CreateClusterRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateClusterRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string getIpStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline CreateClusterRequest& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // isEnterpriseSecurityGroup Field Functions 
    bool hasIsEnterpriseSecurityGroup() const { return this->isEnterpriseSecurityGroup_ != nullptr;};
    void deleteIsEnterpriseSecurityGroup() { this->isEnterpriseSecurityGroup_ = nullptr;};
    inline bool getIsEnterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseSecurityGroup_, false) };
    inline CreateClusterRequest& setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(isEnterpriseSecurityGroup_, isEnterpriseSecurityGroup) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool getKeepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline CreateClusterRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline CreateClusterRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline CreateClusterRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateClusterRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline CreateClusterRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loggingType Field Functions 
    bool hasLoggingType() const { return this->loggingType_ != nullptr;};
    void deleteLoggingType() { this->loggingType_ = nullptr;};
    inline string getLoggingType() const { DARABONBA_PTR_GET_DEFAULT(loggingType_, "") };
    inline CreateClusterRequest& setLoggingType(string loggingType) { DARABONBA_PTR_SET_VALUE(loggingType_, loggingType) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string getLoginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline CreateClusterRequest& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline CreateClusterRequest& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // masterAutoRenew Field Functions 
    bool hasMasterAutoRenew() const { return this->masterAutoRenew_ != nullptr;};
    void deleteMasterAutoRenew() { this->masterAutoRenew_ = nullptr;};
    inline bool getMasterAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(masterAutoRenew_, false) };
    inline CreateClusterRequest& setMasterAutoRenew(bool masterAutoRenew) { DARABONBA_PTR_SET_VALUE(masterAutoRenew_, masterAutoRenew) };


    // masterAutoRenewPeriod Field Functions 
    bool hasMasterAutoRenewPeriod() const { return this->masterAutoRenewPeriod_ != nullptr;};
    void deleteMasterAutoRenewPeriod() { this->masterAutoRenewPeriod_ = nullptr;};
    inline int64_t getMasterAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(masterAutoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setMasterAutoRenewPeriod(int64_t masterAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(masterAutoRenewPeriod_, masterAutoRenewPeriod) };


    // masterCount Field Functions 
    bool hasMasterCount() const { return this->masterCount_ != nullptr;};
    void deleteMasterCount() { this->masterCount_ = nullptr;};
    inline int64_t getMasterCount() const { DARABONBA_PTR_GET_DEFAULT(masterCount_, 0L) };
    inline CreateClusterRequest& setMasterCount(int64_t masterCount) { DARABONBA_PTR_SET_VALUE(masterCount_, masterCount) };


    // masterInstanceChargeType Field Functions 
    bool hasMasterInstanceChargeType() const { return this->masterInstanceChargeType_ != nullptr;};
    void deleteMasterInstanceChargeType() { this->masterInstanceChargeType_ = nullptr;};
    inline string getMasterInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceChargeType_, "") };
    inline CreateClusterRequest& setMasterInstanceChargeType(string masterInstanceChargeType) { DARABONBA_PTR_SET_VALUE(masterInstanceChargeType_, masterInstanceChargeType) };


    // masterInstanceTypes Field Functions 
    bool hasMasterInstanceTypes() const { return this->masterInstanceTypes_ != nullptr;};
    void deleteMasterInstanceTypes() { this->masterInstanceTypes_ = nullptr;};
    inline const vector<string> & getMasterInstanceTypes() const { DARABONBA_PTR_GET_CONST(masterInstanceTypes_, vector<string>) };
    inline vector<string> getMasterInstanceTypes() { DARABONBA_PTR_GET(masterInstanceTypes_, vector<string>) };
    inline CreateClusterRequest& setMasterInstanceTypes(const vector<string> & masterInstanceTypes) { DARABONBA_PTR_SET_VALUE(masterInstanceTypes_, masterInstanceTypes) };
    inline CreateClusterRequest& setMasterInstanceTypes(vector<string> && masterInstanceTypes) { DARABONBA_PTR_SET_RVALUE(masterInstanceTypes_, masterInstanceTypes) };


    // masterPeriod Field Functions 
    bool hasMasterPeriod() const { return this->masterPeriod_ != nullptr;};
    void deleteMasterPeriod() { this->masterPeriod_ = nullptr;};
    inline int64_t getMasterPeriod() const { DARABONBA_PTR_GET_DEFAULT(masterPeriod_, 0L) };
    inline CreateClusterRequest& setMasterPeriod(int64_t masterPeriod) { DARABONBA_PTR_SET_VALUE(masterPeriod_, masterPeriod) };


    // masterPeriodUnit Field Functions 
    bool hasMasterPeriodUnit() const { return this->masterPeriodUnit_ != nullptr;};
    void deleteMasterPeriodUnit() { this->masterPeriodUnit_ = nullptr;};
    inline string getMasterPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(masterPeriodUnit_, "") };
    inline CreateClusterRequest& setMasterPeriodUnit(string masterPeriodUnit) { DARABONBA_PTR_SET_VALUE(masterPeriodUnit_, masterPeriodUnit) };


    // masterSystemDiskCategory Field Functions 
    bool hasMasterSystemDiskCategory() const { return this->masterSystemDiskCategory_ != nullptr;};
    void deleteMasterSystemDiskCategory() { this->masterSystemDiskCategory_ = nullptr;};
    inline string getMasterSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskCategory_, "") };
    inline CreateClusterRequest& setMasterSystemDiskCategory(string masterSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(masterSystemDiskCategory_, masterSystemDiskCategory) };


    // masterSystemDiskPerformanceLevel Field Functions 
    bool hasMasterSystemDiskPerformanceLevel() const { return this->masterSystemDiskPerformanceLevel_ != nullptr;};
    void deleteMasterSystemDiskPerformanceLevel() { this->masterSystemDiskPerformanceLevel_ = nullptr;};
    inline string getMasterSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskPerformanceLevel_, "") };
    inline CreateClusterRequest& setMasterSystemDiskPerformanceLevel(string masterSystemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(masterSystemDiskPerformanceLevel_, masterSystemDiskPerformanceLevel) };


    // masterSystemDiskSize Field Functions 
    bool hasMasterSystemDiskSize() const { return this->masterSystemDiskSize_ != nullptr;};
    void deleteMasterSystemDiskSize() { this->masterSystemDiskSize_ = nullptr;};
    inline int64_t getMasterSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskSize_, 0L) };
    inline CreateClusterRequest& setMasterSystemDiskSize(int64_t masterSystemDiskSize) { DARABONBA_PTR_SET_VALUE(masterSystemDiskSize_, masterSystemDiskSize) };


    // masterSystemDiskSnapshotPolicyId Field Functions 
    bool hasMasterSystemDiskSnapshotPolicyId() const { return this->masterSystemDiskSnapshotPolicyId_ != nullptr;};
    void deleteMasterSystemDiskSnapshotPolicyId() { this->masterSystemDiskSnapshotPolicyId_ = nullptr;};
    inline string getMasterSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskSnapshotPolicyId_, "") };
    inline CreateClusterRequest& setMasterSystemDiskSnapshotPolicyId(string masterSystemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(masterSystemDiskSnapshotPolicyId_, masterSystemDiskSnapshotPolicyId) };


    // masterVswitchIds Field Functions 
    bool hasMasterVswitchIds() const { return this->masterVswitchIds_ != nullptr;};
    void deleteMasterVswitchIds() { this->masterVswitchIds_ = nullptr;};
    inline const vector<string> & getMasterVswitchIds() const { DARABONBA_PTR_GET_CONST(masterVswitchIds_, vector<string>) };
    inline vector<string> getMasterVswitchIds() { DARABONBA_PTR_GET(masterVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setMasterVswitchIds(const vector<string> & masterVswitchIds) { DARABONBA_PTR_SET_VALUE(masterVswitchIds_, masterVswitchIds) };
    inline CreateClusterRequest& setMasterVswitchIds(vector<string> && masterVswitchIds) { DARABONBA_PTR_SET_RVALUE(masterVswitchIds_, masterVswitchIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGateway Field Functions 
    bool hasNatGateway() const { return this->natGateway_ != nullptr;};
    void deleteNatGateway() { this->natGateway_ = nullptr;};
    inline bool getNatGateway() const { DARABONBA_PTR_GET_DEFAULT(natGateway_, false) };
    inline CreateClusterRequest& setNatGateway(bool natGateway) { DARABONBA_PTR_SET_VALUE(natGateway_, natGateway) };


    // nodeCidrMask Field Functions 
    bool hasNodeCidrMask() const { return this->nodeCidrMask_ != nullptr;};
    void deleteNodeCidrMask() { this->nodeCidrMask_ = nullptr;};
    inline string getNodeCidrMask() const { DARABONBA_PTR_GET_DEFAULT(nodeCidrMask_, "") };
    inline CreateClusterRequest& setNodeCidrMask(string nodeCidrMask) { DARABONBA_PTR_SET_VALUE(nodeCidrMask_, nodeCidrMask) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string getNodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline CreateClusterRequest& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // nodePortRange Field Functions 
    bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
    void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
    inline string getNodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
    inline CreateClusterRequest& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


    // nodepools Field Functions 
    bool hasNodepools() const { return this->nodepools_ != nullptr;};
    void deleteNodepools() { this->nodepools_ = nullptr;};
    inline const vector<Nodepool> & getNodepools() const { DARABONBA_PTR_GET_CONST(nodepools_, vector<Nodepool>) };
    inline vector<Nodepool> getNodepools() { DARABONBA_PTR_GET(nodepools_, vector<Nodepool>) };
    inline CreateClusterRequest& setNodepools(const vector<Nodepool> & nodepools) { DARABONBA_PTR_SET_VALUE(nodepools_, nodepools) };
    inline CreateClusterRequest& setNodepools(vector<Nodepool> && nodepools) { DARABONBA_PTR_SET_RVALUE(nodepools_, nodepools) };


    // numOfNodes Field Functions 
    bool hasNumOfNodes() const { return this->numOfNodes_ != nullptr;};
    void deleteNumOfNodes() { this->numOfNodes_ = nullptr;};
    inline int64_t getNumOfNodes() const { DARABONBA_PTR_GET_DEFAULT(numOfNodes_, 0L) };
    inline CreateClusterRequest& setNumOfNodes(int64_t numOfNodes) { DARABONBA_PTR_SET_VALUE(numOfNodes_, numOfNodes) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const CreateClusterRequest::OperationPolicy & getOperationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, CreateClusterRequest::OperationPolicy) };
    inline CreateClusterRequest::OperationPolicy getOperationPolicy() { DARABONBA_PTR_GET(operationPolicy_, CreateClusterRequest::OperationPolicy) };
    inline CreateClusterRequest& setOperationPolicy(const CreateClusterRequest::OperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline CreateClusterRequest& setOperationPolicy(CreateClusterRequest::OperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateClusterRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateClusterRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateClusterRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateClusterRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // podVswitchIds Field Functions 
    bool hasPodVswitchIds() const { return this->podVswitchIds_ != nullptr;};
    void deletePodVswitchIds() { this->podVswitchIds_ = nullptr;};
    inline const vector<string> & getPodVswitchIds() const { DARABONBA_PTR_GET_CONST(podVswitchIds_, vector<string>) };
    inline vector<string> getPodVswitchIds() { DARABONBA_PTR_GET(podVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setPodVswitchIds(const vector<string> & podVswitchIds) { DARABONBA_PTR_SET_VALUE(podVswitchIds_, podVswitchIds) };
    inline CreateClusterRequest& setPodVswitchIds(vector<string> && podVswitchIds) { DARABONBA_PTR_SET_RVALUE(podVswitchIds_, podVswitchIds) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline CreateClusterRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string getProxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline CreateClusterRequest& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & getRdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> getRdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline CreateClusterRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline CreateClusterRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rrsaConfig Field Functions 
    bool hasRrsaConfig() const { return this->rrsaConfig_ != nullptr;};
    void deleteRrsaConfig() { this->rrsaConfig_ = nullptr;};
    inline const CreateClusterRequest::RrsaConfig & getRrsaConfig() const { DARABONBA_PTR_GET_CONST(rrsaConfig_, CreateClusterRequest::RrsaConfig) };
    inline CreateClusterRequest::RrsaConfig getRrsaConfig() { DARABONBA_PTR_GET(rrsaConfig_, CreateClusterRequest::RrsaConfig) };
    inline CreateClusterRequest& setRrsaConfig(const CreateClusterRequest::RrsaConfig & rrsaConfig) { DARABONBA_PTR_SET_VALUE(rrsaConfig_, rrsaConfig) };
    inline CreateClusterRequest& setRrsaConfig(CreateClusterRequest::RrsaConfig && rrsaConfig) { DARABONBA_PTR_SET_RVALUE(rrsaConfig_, rrsaConfig) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline CreateClusterRequest& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline CreateClusterRequest& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool getSecurityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline CreateClusterRequest& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // serviceAccountIssuer Field Functions 
    bool hasServiceAccountIssuer() const { return this->serviceAccountIssuer_ != nullptr;};
    void deleteServiceAccountIssuer() { this->serviceAccountIssuer_ = nullptr;};
    inline string getServiceAccountIssuer() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountIssuer_, "") };
    inline CreateClusterRequest& setServiceAccountIssuer(string serviceAccountIssuer) { DARABONBA_PTR_SET_VALUE(serviceAccountIssuer_, serviceAccountIssuer) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline CreateClusterRequest& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // serviceDiscoveryTypes Field Functions 
    bool hasServiceDiscoveryTypes() const { return this->serviceDiscoveryTypes_ != nullptr;};
    void deleteServiceDiscoveryTypes() { this->serviceDiscoveryTypes_ = nullptr;};
    inline const vector<string> & getServiceDiscoveryTypes() const { DARABONBA_PTR_GET_CONST(serviceDiscoveryTypes_, vector<string>) };
    inline vector<string> getServiceDiscoveryTypes() { DARABONBA_PTR_GET(serviceDiscoveryTypes_, vector<string>) };
    inline CreateClusterRequest& setServiceDiscoveryTypes(const vector<string> & serviceDiscoveryTypes) { DARABONBA_PTR_SET_VALUE(serviceDiscoveryTypes_, serviceDiscoveryTypes) };
    inline CreateClusterRequest& setServiceDiscoveryTypes(vector<string> && serviceDiscoveryTypes) { DARABONBA_PTR_SET_RVALUE(serviceDiscoveryTypes_, serviceDiscoveryTypes) };


    // snatEntry Field Functions 
    bool hasSnatEntry() const { return this->snatEntry_ != nullptr;};
    void deleteSnatEntry() { this->snatEntry_ = nullptr;};
    inline bool getSnatEntry() const { DARABONBA_PTR_GET_DEFAULT(snatEntry_, false) };
    inline CreateClusterRequest& setSnatEntry(bool snatEntry) { DARABONBA_PTR_SET_VALUE(snatEntry_, snatEntry) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool getSocEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline CreateClusterRequest& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // sshFlags Field Functions 
    bool hasSshFlags() const { return this->sshFlags_ != nullptr;};
    void deleteSshFlags() { this->sshFlags_ = nullptr;};
    inline bool getSshFlags() const { DARABONBA_PTR_GET_DEFAULT(sshFlags_, false) };
    inline CreateClusterRequest& setSshFlags(bool sshFlags) { DARABONBA_PTR_SET_VALUE(sshFlags_, sshFlags) };


    // supportPolicy Field Functions 
    bool hasSupportPolicy() const { return this->supportPolicy_ != nullptr;};
    void deleteSupportPolicy() { this->supportPolicy_ = nullptr;};
    inline string getSupportPolicy() const { DARABONBA_PTR_GET_DEFAULT(supportPolicy_, "") };
    inline CreateClusterRequest& setSupportPolicy(string supportPolicy) { DARABONBA_PTR_SET_VALUE(supportPolicy_, supportPolicy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline CreateClusterRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClusterRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Taint> & getTaints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Taint>) };
    inline vector<Taint> getTaints() { DARABONBA_PTR_GET(taints_, vector<Taint>) };
    inline CreateClusterRequest& setTaints(const vector<Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline CreateClusterRequest& setTaints(vector<Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // timeoutMins Field Functions 
    bool hasTimeoutMins() const { return this->timeoutMins_ != nullptr;};
    void deleteTimeoutMins() { this->timeoutMins_ = nullptr;};
    inline int64_t getTimeoutMins() const { DARABONBA_PTR_GET_DEFAULT(timeoutMins_, 0L) };
    inline CreateClusterRequest& setTimeoutMins(int64_t timeoutMins) { DARABONBA_PTR_SET_VALUE(timeoutMins_, timeoutMins) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateClusterRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // userCa Field Functions 
    bool hasUserCa() const { return this->userCa_ != nullptr;};
    void deleteUserCa() { this->userCa_ = nullptr;};
    inline string getUserCa() const { DARABONBA_PTR_GET_DEFAULT(userCa_, "") };
    inline CreateClusterRequest& setUserCa(string userCa) { DARABONBA_PTR_SET_VALUE(userCa_, userCa) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateClusterRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vpcid Field Functions 
    bool hasVpcid() const { return this->vpcid_ != nullptr;};
    void deleteVpcid() { this->vpcid_ = nullptr;};
    inline string getVpcid() const { DARABONBA_PTR_GET_DEFAULT(vpcid_, "") };
    inline CreateClusterRequest& setVpcid(string vpcid) { DARABONBA_PTR_SET_VALUE(vpcid_, vpcid) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline CreateClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline CreateClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerAutoRenew Field Functions 
    bool hasWorkerAutoRenew() const { return this->workerAutoRenew_ != nullptr;};
    void deleteWorkerAutoRenew() { this->workerAutoRenew_ = nullptr;};
    inline bool getWorkerAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenew_, false) };
    inline CreateClusterRequest& setWorkerAutoRenew(bool workerAutoRenew) { DARABONBA_PTR_SET_VALUE(workerAutoRenew_, workerAutoRenew) };


    // workerAutoRenewPeriod Field Functions 
    bool hasWorkerAutoRenewPeriod() const { return this->workerAutoRenewPeriod_ != nullptr;};
    void deleteWorkerAutoRenewPeriod() { this->workerAutoRenewPeriod_ = nullptr;};
    inline int64_t getWorkerAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setWorkerAutoRenewPeriod(int64_t workerAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(workerAutoRenewPeriod_, workerAutoRenewPeriod) };


    // workerDataDisks Field Functions 
    bool hasWorkerDataDisks() const { return this->workerDataDisks_ != nullptr;};
    void deleteWorkerDataDisks() { this->workerDataDisks_ = nullptr;};
    inline const vector<CreateClusterRequest::WorkerDataDisks> & getWorkerDataDisks() const { DARABONBA_PTR_GET_CONST(workerDataDisks_, vector<CreateClusterRequest::WorkerDataDisks>) };
    inline vector<CreateClusterRequest::WorkerDataDisks> getWorkerDataDisks() { DARABONBA_PTR_GET(workerDataDisks_, vector<CreateClusterRequest::WorkerDataDisks>) };
    inline CreateClusterRequest& setWorkerDataDisks(const vector<CreateClusterRequest::WorkerDataDisks> & workerDataDisks) { DARABONBA_PTR_SET_VALUE(workerDataDisks_, workerDataDisks) };
    inline CreateClusterRequest& setWorkerDataDisks(vector<CreateClusterRequest::WorkerDataDisks> && workerDataDisks) { DARABONBA_PTR_SET_RVALUE(workerDataDisks_, workerDataDisks) };


    // workerInstanceChargeType Field Functions 
    bool hasWorkerInstanceChargeType() const { return this->workerInstanceChargeType_ != nullptr;};
    void deleteWorkerInstanceChargeType() { this->workerInstanceChargeType_ = nullptr;};
    inline string getWorkerInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(workerInstanceChargeType_, "") };
    inline CreateClusterRequest& setWorkerInstanceChargeType(string workerInstanceChargeType) { DARABONBA_PTR_SET_VALUE(workerInstanceChargeType_, workerInstanceChargeType) };


    // workerInstanceTypes Field Functions 
    bool hasWorkerInstanceTypes() const { return this->workerInstanceTypes_ != nullptr;};
    void deleteWorkerInstanceTypes() { this->workerInstanceTypes_ = nullptr;};
    inline const vector<string> & getWorkerInstanceTypes() const { DARABONBA_PTR_GET_CONST(workerInstanceTypes_, vector<string>) };
    inline vector<string> getWorkerInstanceTypes() { DARABONBA_PTR_GET(workerInstanceTypes_, vector<string>) };
    inline CreateClusterRequest& setWorkerInstanceTypes(const vector<string> & workerInstanceTypes) { DARABONBA_PTR_SET_VALUE(workerInstanceTypes_, workerInstanceTypes) };
    inline CreateClusterRequest& setWorkerInstanceTypes(vector<string> && workerInstanceTypes) { DARABONBA_PTR_SET_RVALUE(workerInstanceTypes_, workerInstanceTypes) };


    // workerPeriod Field Functions 
    bool hasWorkerPeriod() const { return this->workerPeriod_ != nullptr;};
    void deleteWorkerPeriod() { this->workerPeriod_ = nullptr;};
    inline int64_t getWorkerPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerPeriod_, 0L) };
    inline CreateClusterRequest& setWorkerPeriod(int64_t workerPeriod) { DARABONBA_PTR_SET_VALUE(workerPeriod_, workerPeriod) };


    // workerPeriodUnit Field Functions 
    bool hasWorkerPeriodUnit() const { return this->workerPeriodUnit_ != nullptr;};
    void deleteWorkerPeriodUnit() { this->workerPeriodUnit_ = nullptr;};
    inline string getWorkerPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(workerPeriodUnit_, "") };
    inline CreateClusterRequest& setWorkerPeriodUnit(string workerPeriodUnit) { DARABONBA_PTR_SET_VALUE(workerPeriodUnit_, workerPeriodUnit) };


    // workerSystemDiskCategory Field Functions 
    bool hasWorkerSystemDiskCategory() const { return this->workerSystemDiskCategory_ != nullptr;};
    void deleteWorkerSystemDiskCategory() { this->workerSystemDiskCategory_ = nullptr;};
    inline string getWorkerSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskCategory_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskCategory(string workerSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(workerSystemDiskCategory_, workerSystemDiskCategory) };


    // workerSystemDiskPerformanceLevel Field Functions 
    bool hasWorkerSystemDiskPerformanceLevel() const { return this->workerSystemDiskPerformanceLevel_ != nullptr;};
    void deleteWorkerSystemDiskPerformanceLevel() { this->workerSystemDiskPerformanceLevel_ = nullptr;};
    inline string getWorkerSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskPerformanceLevel_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskPerformanceLevel(string workerSystemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(workerSystemDiskPerformanceLevel_, workerSystemDiskPerformanceLevel) };


    // workerSystemDiskSize Field Functions 
    bool hasWorkerSystemDiskSize() const { return this->workerSystemDiskSize_ != nullptr;};
    void deleteWorkerSystemDiskSize() { this->workerSystemDiskSize_ = nullptr;};
    inline int64_t getWorkerSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSize_, 0L) };
    inline CreateClusterRequest& setWorkerSystemDiskSize(int64_t workerSystemDiskSize) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSize_, workerSystemDiskSize) };


    // workerSystemDiskSnapshotPolicyId Field Functions 
    bool hasWorkerSystemDiskSnapshotPolicyId() const { return this->workerSystemDiskSnapshotPolicyId_ != nullptr;};
    void deleteWorkerSystemDiskSnapshotPolicyId() { this->workerSystemDiskSnapshotPolicyId_ = nullptr;};
    inline string getWorkerSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSnapshotPolicyId_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskSnapshotPolicyId(string workerSystemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSnapshotPolicyId_, workerSystemDiskSnapshotPolicyId) };


    // workerVswitchIds Field Functions 
    bool hasWorkerVswitchIds() const { return this->workerVswitchIds_ != nullptr;};
    void deleteWorkerVswitchIds() { this->workerVswitchIds_ = nullptr;};
    inline const vector<string> & getWorkerVswitchIds() const { DARABONBA_PTR_GET_CONST(workerVswitchIds_, vector<string>) };
    inline vector<string> getWorkerVswitchIds() { DARABONBA_PTR_GET(workerVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setWorkerVswitchIds(const vector<string> & workerVswitchIds) { DARABONBA_PTR_SET_VALUE(workerVswitchIds_, workerVswitchIds) };
    inline CreateClusterRequest& setWorkerVswitchIds(vector<string> && workerVswitchIds) { DARABONBA_PTR_SET_RVALUE(workerVswitchIds_, workerVswitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & getZoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> getZoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline CreateClusterRequest& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline CreateClusterRequest& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // **[Deprecated]** The access control list (ACL) for the Server Load Balancer (SLB) instance of the API server in a registered cluster.
    shared_ptr<vector<string>> accessControlList_ {};
    // The list of cluster components. You can use `addons` to specify the cluster components that you want to install when you create a cluster.
    // 
    // **Network components**: Required. Includes two options for the network type: Flannel and Terway. You must select one of them when you create a cluster:
    // 
    // - Flannel: [{"name":"flannel","config":""}\\].
    // - Terway: [{"name": "terway-eniip","config": ""}\\].
    // 
    // **Storage components**: Optional. Only `csi` is supported:
    // 
    // `csi`: [{"name":"csi-plugin","config": ""},{"name": "csi-provisioner","config": ""}\\].
    // 
    // **Log components**: Optional. We recommend that you enable this component. If you do not enable Log Service, you cannot use the cluster audit feature.
    // 
    // - Use an existing `SLS Project`: [{"name": "loongcollector","config": "{\\"IngressDashboardEnabled\\":\\"true\\",\\"sls_project_name\\":\\"your_sls_project_name\\"}"}\\].
    // - Create a new `SLS Project`: [{"name": "loongcollector","config": "{\\"IngressDashboardEnabled\\":\\"true\\"}"}\\].
    // 
    // **Ingress components**: Optional. By default, the `nginx-ingress-controller` Ingress component is installed in ACK dedicated clusters.
    // 
    // - Install the Ingress component and enable Internet access: [{"name":"nginx-ingress-controller","config":"{\\"IngressSlbNetworkType\\":\\"internet\\"}"}\\].
    // - Disable the default installation of the Ingress component: [{"name": "nginx-ingress-controller","config": "","disabled": true}\\].
    // 
    // **Event center**: Optional. Enabled by default.
    // 
    // The event center provides capabilities such as storage, query, and alerting for Kubernetes events. The Logstore associated with the Kubernetes event center is free of charge for 90 days. For more information about the free quota policy, see [Create and use a Kubernetes event center](https://help.aliyun.com/document_detail/150476.html).
    // 
    // Example of enabling the event center: [{"name":"ack-node-problem-detector","config":"{\\"sls_project_name\\":\\"your_sls_project_name\\"}"}\\].
    shared_ptr<vector<Addon>> addons_ {};
    // A ServiceAccount is the access credential for communication between pods and the cluster API server. `api-audiences` specifies the valid identities for request `tokens` and is used by the `apiserver` to authenticate whether a request `token` is valid. You can configure multiple `audiences` and separate them with commas (,).
    // 
    // For more information about `ServiceAccount`, see [Deploy service account token volume projection](https://help.aliyun.com/document_detail/160384.html).
    shared_ptr<string> apiAudiences_ {};
    // The cluster audit log configurations.
    shared_ptr<CreateClusterRequest::AuditLogConfig> auditLogConfig_ {};
    // The [intelligent managed mode](https://help.aliyun.com/document_detail/2938898.html) configurations.
    shared_ptr<CreateClusterRequest::AutoMode> autoMode_ {};
    // **[Deprecated]** Specifies whether to enable auto-renewal. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
    // 
    // - `true`: Enables auto-renewal.
    // - `false`: Disables auto-renewal.
    // 
    // Default value: `false`.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on parameter behavior changes of the CreateCluster operation for cluster creation](https://help.aliyun.com/document_detail/2849194.html).
    shared_ptr<bool> autoRenew_ {};
    // **[Deprecated]** The auto-renewal cycle. This parameter takes effect only when you select subscription and auto-renewal. When `PeriodUnit` is set to `Month`, valid values are 1, 2, 3, 6, and 12.
    // 
    // Default value: 1.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on parameter behavior changes of the CreateCluster operation for cluster creation](https://help.aliyun.com/document_detail/2849194.html).
    shared_ptr<int64_t> autoRenewPeriod_ {};
    // **[Deprecated]** The billing method of the Classic Load Balancer (CLB) instance used by the API server. Default value: PostPaid. Valid values:
    // - PostPaid: Pay-as-you-go.
    // - PrePaid: Subscription. This billing method is no longer supported for new CLB instances, but existing instances are not affected.
    // 
    // >Notice: 
    // 
    // - This parameter was changed on October 15, 2024. For more information, see [Announcement on parameter behavior changes of the CreateCluster operation for cluster creation](https://help.aliyun.com/document_detail/2849194.html).
    // - Starting December 1, 2024, newly created CLB instances no longer support the subscription billing method, and an instance fee is charged.
    // </notice>
    // <props="china">For more information, see [Service notices: Deprecation of the subscription billing method for the CLB instance of the API server in newly created clusters](https://help.aliyun.com/document_detail/2851191.html) and [Announcement on billing item adjustments for Classic Load Balancer (CLB)](https://help.aliyun.com/document_detail/2839797.html).
    // <props="intl">For more information, see [Announcement on billing item adjustments for Classic Load Balancer (CLB)](https://help.aliyun.com/document_detail/2839797.html).
    shared_ptr<string> chargeType_ {};
    // **[Deprecated]** To configure the cluster control plane, use the `security_hardening_os` parameter under `control_plane_config` instead. To configure node pools, use the `security_hardening_os` parameter under `scaling_group` in `nodepool` instead.
    shared_ptr<bool> cisEnabled_ {};
    // The client token.
    shared_ptr<string> clientToken_ {};
    // **[Deprecated]** To configure control plane nodes of a cluster, use the `cloud_monitor_flags` parameter under `control_plane_config` instead. To configure node pools, use the `cms_enabled` parameter under `kubernetes_config` in `nodepool` instead.
    // 
    // Specifies whether to install the CloudMonitor agent on the cluster. Valid values:
    // 
    // - `true`: Installs the CloudMonitor agent.
    // - `false`: Does not install the CloudMonitor agent.
    // 
    // Default value: `false`.
    shared_ptr<bool> cloudMonitorFlags_ {};
    // The local domain name of the cluster.
    // 
    // Naming rules: The domain name consists of one or more parts separated by periods (.). Each part can be up to 63 characters in length and can contain lowercase letters, digits, and hyphens (-). It must start and end with a lowercase letter or a digit.
    shared_ptr<string> clusterDomain_ {};
    // After you set `cluster_type` to `ManagedKubernetes` and configure `profile`, you can further specify the cluster edition. Valid values:
    // 
    // - `ack.standard`: Basic Edition. This is the default value if this parameter is left empty.
    // - `ack.pro.small`: Pro Edition.
    // - `ack.pro.xlarge`: Pro XL.
    // - `ack.pro.2xlarge`: Pro 2XL.
    // - `ack.pro.4xlarge`: Pro 4XL. You must contact customer service to apply for whitelist access.
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers provided by <props="china">[ACK Pro Provisioned Control Plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro Provisioned Control Plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). By pre-allocating and reserving control plane resources, these editions ensure that API concurrency and pod scheduling capabilities are always maintained at a consistently high level. They are suitable for AI training and inference, ultra-large-scale clusters, and mission-critical workloads.
    // 
    // For more information about the cluster management fees for Pro Edition and provisioned control plane editions, see <props="china">[Cluster management fees](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster management fees](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // Valid values:
    // - `Kubernetes`: ACK dedicated cluster.
    // - `ManagedKubernetes`: ACK managed cluster, including ACK managed clusters (Pro Edition and Basic Edition), ACK Serverless clusters (Pro Edition and Basic Edition), ACK Edge clusters (Pro Edition and Basic Edition), and ACK Lingjun clusters (Pro Edition).
    // - `ExternalKubernetes`: Registered cluster.
    shared_ptr<string> clusterType_ {};
    // The CIDR block for pods. It must be a valid private CIDR block, specifically one of the following CIDR blocks or their subnets: 10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16. It cannot overlap with the CIDR block of the VPC or the CIDR blocks used by existing Kubernetes clusters in the VPC. It cannot be modified after the cluster is created.
    // 
    // For more information about cluster network planning, see [Network planning for ACK managed clusters](https://help.aliyun.com/document_detail/86500.html).
    // 
    // > This parameter is required for Flannel clusters.
    shared_ptr<string> containerCidr_ {};
    // The control plane configuration for an ACK dedicated cluster.
    shared_ptr<CreateClusterRequest::ControlPlaneConfig> controlPlaneConfig_ {};
    // The connection configuration of the cluster. If you specify this parameter, the endpoint_public_access and load_balancer_id parameters do not take effect. To specify a CLB or NLB instance, use load_balancers_config to specify the corresponding instance ID.
    shared_ptr<CreateClusterRequest::ControlPlaneEndpointsConfig> controlPlaneEndpointsConfig_ {};
    // The list of component names. This parameter specifies the control plane components whose logs are collected. By default, logs of kube-apiserver, kube-controller-manager, kube-scheduler, and cloud-controller-manager are collected.
    shared_ptr<vector<string>> controlplaneLogComponents_ {};
    // The Log Service project for control plane component logs. You can use an existing project for log storage, or use the automatic creation feature to create a project. If you choose automatic creation, a Log Service project named k8s-log-{ClusterID} is created.
    shared_ptr<string> controlplaneLogProject_ {};
    // The log retention period for control plane components. Unit: days.
    shared_ptr<string> controlplaneLogTtl_ {};
    // **[Deprecated]** Use the cpu_policy parameter under control_plane_config for cluster control plane configuration, and use the cpu_policy parameter under kubernetes_config in nodepool for node pool configuration.
    // 
    // The CPU management policy for nodes. This parameter supports the following policies when the cluster version is 1.12.6 or later:
    // - static: allows you to enhance CPU affinity and exclusivity for pods with specific resource characteristics on the node.
    // - none: uses the default CPU affinity policy.
    // 
    // Default value: none.
    shared_ptr<string> cpuPolicy_ {};
    // **[Deprecated]** Use the extra_sans parameter instead.
    // 
    // The SANs of the custom certificate. Separate multiple IP addresses or domain names with commas (,).
    shared_ptr<string> customSan_ {};
    // Specifies whether to enable deletion protection for the cluster to prevent accidental deletion through the console or API calls. Valid values:
    // 
    // - `true`: Enables cluster deletion protection. The cluster cannot be deleted through the console or API.
    // - `false`: Disables cluster deletion protection. The cluster can be deleted through the console or API.
    // 
    // Default value: `false`.
    shared_ptr<bool> deletionProtection_ {};
    // **[Deprecated]** By default, no rollback is performed when cluster creation fails. You must manually clean up the failed cluster.
    // 
    // Specifies whether to perform a rollback when cluster creation fails. Valid values:
    // 
    // - `true`: Performs a rollback when cluster creation fails.
    // - `false`: Does not perform a rollback when cluster creation fails.
    // 
    // Default value: `true`.
    shared_ptr<bool> disableRollback_ {};
    // **[Deprecated]** Use the `rrsa_config` parameter instead.
    // 
    // Specifies whether to enable RRSA. Valid values:
    // 
    // - true: Enables RRSA.
    // - false: Disables RRSA.
    shared_ptr<bool> enableRrsa_ {};
    // The ID of the KMS key used to encrypt data cloud disks. For more information, see [Key Management Service](https://help.aliyun.com/document_detail/28935.html).
    // 
    // > This feature takes effect only in ACK Pro clusters.
    shared_ptr<string> encryptionProviderKey_ {};
    // Specifies whether to enable public network access. An elastic IP address (EIP) is used to expose the API Server for public network access to the cluster. Valid values:
    // 
    // - `true`: Enables public network access.
    // - `false`: Disables public network access. If you select this value, the cluster API Server cannot be accessed over the Internet.
    // 
    // Default value: `false`.
    shared_ptr<bool> endpointPublicAccess_ {};
    // The custom Subject Alternative Name (SAN) of the API Server certificate.
    shared_ptr<vector<string>> extraSans_ {};
    // **[Deprecated]** You cannot select existing nodes when creating a cluster. To add existing nodes to a cluster, create a node pool first and call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // Specifies whether to mount data cloud disks to existing instances when creating a cluster. Valid values:
    // 
    // - `true`: Stores containers and images on data cloud disks. Existing data on the data cloud disks will be lost. Back up your data first.
    // - `false`: Does not store containers and images on data cloud disks.
    // 
    // Default value: `false`.
    // 
    // Data cloud disk mounting rules:
    // 
    // - If the ECS instance has data cloud disks attached and the file system of the last data cloud disk is not initialized, the system automatically formats the data cloud disk to ext4 to store /var/lib/docker and /var/lib/kubelet.
    // - If the ECS instance does not have data cloud disks attached, no new data cloud disk will be attached.
    shared_ptr<bool> formatDisk_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `image_id` parameter under `control_plane_config` instead. For node pool configurations, use the `image_id` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The custom image for nodes. By default, the system image is used. If you select a custom image, it replaces the default system image. For more information, see [Custom images](https://help.aliyun.com/document_detail/146647.html).
    shared_ptr<string> imageId_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `image_type` parameter under `control_plane_config` instead. For node pool configurations, use the `image_type` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The operating system distribution type. We recommend that you use this field to specify the node operating system. Valid values:
    // 
    // - CentOS
    // - AliyunLinux
    // - AliyunLinux Qboot
    // - AliyunLinuxUEFI
    // - AliyunLinux3
    // - Windows
    // - WindowsCore
    // - AliyunLinux3Arm64
    // - ContainerOS
    // 
    // Default value: `CentOS`.
    shared_ptr<string> imageType_ {};
    // **[Deprecated]** You cannot select existing nodes when creating a cluster. To add existing nodes to a cluster, create a node pool first and call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // The list of existing ECS instances to be added as worker nodes when creating a cluster with existing nodes.
    // 
    // > This field is required when you create a cluster with existing instances.
    shared_ptr<vector<string>> instances_ {};
    // The IP stack of the cluster.
    shared_ptr<string> ipStack_ {};
    // Specifies whether to enable automatic creation of an advanced security group. This parameter takes effect when `security_group_id` is empty.
    // 
    // > If you use a basic security group, the total number of nodes and Terway pods in the cluster cannot exceed 2,000. Therefore, we recommend that you use an advanced security group when creating a cluster of the Terway network type.
    // 
    // Valid values:
    // - `true`: Creates and uses an advanced security group.
    // - `false`: Uses a basic security group.
    // 
    // Default value: `true`.
    shared_ptr<bool> isEnterpriseSecurityGroup_ {};
    // **[Deprecated]** You cannot select existing nodes when creating a cluster. To add existing nodes to a cluster, create a node pool first and call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // Specifies whether to retain the instance names when creating a cluster with existing instances. Valid values:
    // 
    // - `true`: Retains the instance names.
    // - `false`: Does not retain the instance names. The names are replaced based on system rules.
    // 
    // Default value: `true`.
    shared_ptr<bool> keepInstanceName_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `key_pair` parameter under `control_plane_config` instead. For node pool configurations, use the `key_pair` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The name of the key pair. You must specify either this parameter or `login_password`.
    shared_ptr<string> keyPair_ {};
    // The cluster version, which is consistent with the Kubernetes community baseline version. We recommend that you select the latest version. If you do not specify this parameter, the latest version is used by default.
    // 
    // You can create clusters of the latest three versions. You can call the [DescribeKubernetesVersionMetadata](https://help.aliyun.com/document_detail/2667899.html) operation to query the supported cluster versions.
    // 
    // For more information about the Kubernetes versions supported by ACK, see [Kubernetes version release overview](https://help.aliyun.com/document_detail/185269.html).
    shared_ptr<string> kubernetesVersion_ {};
    // The instance ID of the Classic Load Balancer (CLB) used for API server access. If you specify this parameter, automatic creation of a CLB instance for the API server is disabled.
    // > Make sure that the CLB instance has no other dependencies, such as listeners or backend servers. Shared-resource and Internet-facing CLB instances are not supported.
    shared_ptr<string> loadBalancerId_ {};
    // **[Deprecated]** For CLB instances, billing is based on usage. This parameter does not take effect.
    // 
    // The load balancing specification. Valid values:
    // - slb.s1.small
    // - slb.s2.small
    // - slb.s2.medium
    // - slb.s3.small
    // - slb.s3.medium
    // - slb.s3.large
    // 
    // Default value: `slb.s2.small`.
    shared_ptr<string> loadBalancerSpec_ {};
    // **[Deprecated]** This parameter enables Simple Log Service for the cluster. It takes effect only for ACK Serverless clusters and must be set to `SLS`.
    shared_ptr<string> loggingType_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `login_password` parameter under `control_plane_config` instead. For node pool configurations, use the `login_password` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The SSH logon password. You must specify either this parameter or `key_pair`. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    shared_ptr<string> loginPassword_ {};
    // The maintenance window of the cluster.
    shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `auto_renew` parameter under `control_plane_config` instead.
    // 
    // Specifies whether to enable auto-renewal for master nodes. This parameter takes effect only when `master_instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // - `true`: Enables auto-renewal.
    // - `false`: Disables auto-renewal.
    // 
    // Default value: `true`.
    shared_ptr<bool> masterAutoRenew_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `auto_renew_period` parameter under `control_plane_config` instead.
    // 
    // The auto-renewal epoch for master nodes. This parameter takes effect and is required only when the subscription billing method is selected.
    // 
    // Valid values: 1, 2, 3, 6, and 12.
    // 
    // Default value: 1.
    shared_ptr<int64_t> masterAutoRenewPeriod_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `size` parameter under `control_plane_config` instead.
    // 
    // The number of master nodes. Valid values: `3` and `5`.
    // 
    // Default value: `3`.
    shared_ptr<int64_t> masterCount_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `instance_charge_type` parameter under `control_plane_config` instead.
    // 
    // The billing method of master nodes. Valid values:
    // 
    // - `PrePaid`: subscription.
    // - `PostPaid`: pay-as-you-go.
    // 
    // Default value: `PostPaid`.
    shared_ptr<string> masterInstanceChargeType_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `instance_types` parameter under `control_plane_config` instead.
    // 
    // The instance types of master nodes. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    shared_ptr<vector<string>> masterInstanceTypes_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `unit` parameter under `control_plane_config` instead.
    // 
    // The subscription period of master nodes. This parameter takes effect and is required only when `master_instance_charge_type` is set to `PrePaid`.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    shared_ptr<int64_t> masterPeriod_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `period_unit` parameter under `control_plane_config` instead.
    // 
    // The subscription period unit of master nodes. This parameter is required when the billing method is `PrePaid`.
    // 
    // Valid value: `Month`. Currently, only month is supported.
    shared_ptr<string> masterPeriodUnit_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `system_disk_category` parameter under `control_plane_config` instead.
    // 
    // The system cloud disk category of master nodes. Valid values:
    // 
    // - `cloud_efficiency`: ultra disk.
    // - `cloud_ssd`: standard SSD.
    // - `cloud_essd`: ESSD.
    // 
    // Default value: `cloud_ssd`. The default value may vary by zone.
    shared_ptr<string> masterSystemDiskCategory_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `system_disk_performance_level` parameter under `control_plane_config` instead.
    // 
    // The performance level of the system cloud disk for master nodes. This parameter takes effect only for ESSDs. The performance level is related to the disk size. For more information, see [ESSD standard SSD](https://help.aliyun.com/document_detail/122389.html).
    shared_ptr<string> masterSystemDiskPerformanceLevel_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `system_disk_size` parameter under `control_plane_config` instead.
    // 
    // The system cloud disk size of master nodes. Valid values: 40 to 500. Unit: GiB.
    // 
    // Default value: `120`.
    shared_ptr<int64_t> masterSystemDiskSize_ {};
    // **[Deprecated]** For cluster control plane configurations, use the `system_disk_snapshot_policy_id` parameter under `control_plane_config` instead.
    // 
    // The ID of the automatic snapshot policy applied to the system cloud disk of master nodes.
    shared_ptr<string> masterSystemDiskSnapshotPolicyId_ {};
    // **[Deprecated]** Use the `vswitch_ids` parameter instead.
    // 
    // The list of vSwitch IDs for master nodes. You can specify 1 to 3 vSwitches. To ensure high availability of the cluster, we recommend that you select three vSwitches in different zones.
    // 
    // The number of specified vSwitches must be consistent with the value of `master_count` and correspond to the elements in `master_vswitch_ids` one by one.
    shared_ptr<vector<string>> masterVswitchIds_ {};
    // The custom name of the cluster. The name must be 1 to 63 characters in length and can contain digits, Chinese characters, English letters, and hyphens (-). It cannot start with a hyphen (-).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // **[Deprecated]** Use the `snat_entry` parameter instead.
    shared_ptr<bool> natGateway_ {};
    // The maximum number of IP addresses that can be assigned to nodes. This parameter determines the number of IP addresses by specifying the CIDR block of the network. It takes effect only for clusters of the Flannel network type.
    // 
    // Default value: `26`.
    shared_ptr<string> nodeCidrMask_ {};
    // **[Deprecated]** For node pool configurations, use the `node_name_mode` parameter under `kubernetes_config` in `nodepool` instead.
    shared_ptr<string> nodeNameMode_ {};
    // The node service port. Valid port range: 30000 to 65535.
    // 
    // Default value: `30000-32767`.
    shared_ptr<string> nodePortRange_ {};
    // The list of node pools.
    shared_ptr<vector<Nodepool>> nodepools_ {};
    // **[Deprecated]** For node pool configurations, use the `desired_size` parameter under `scaling_group` in `nodepool` instead. The number of worker nodes. Valid values: 0 to 100.
    shared_ptr<int64_t> numOfNodes_ {};
    // The automatic O&M policy for the cluster.
    shared_ptr<CreateClusterRequest::OperationPolicy> operationPolicy_ {};
    // **[Deprecated]** For control plane node configurations, use the `image_type` parameter under `control_plane_config` instead. For node pool configurations, use the `image_type` parameter under `scaling_group` in `nodepool` instead. The operating system platform type. Valid values:
    // - Windows
    // - Linux
    // Default value: `Linux`.
    shared_ptr<string> osType_ {};
    // **[Deprecated]** The subscription duration. This parameter takes effect and is required only when `charge_type` is set to `PrePaid`. Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60. Default value: 1. This field was changed on October 15, 2024. For more information, see [Announcement on parameter behavior changes of the CreateCluster API operation](https://help.aliyun.com/document_detail/2849194.html).
    shared_ptr<int64_t> period_ {};
    // **[Deprecated]** The billing cycle. This parameter is required when the billing method is `PrePaid`. Valid value: `Month`. Currently, only monthly billing is supported. This field was changed on October 15, 2024. For more information, see [Announcement on parameter behavior changes of the CreateCluster API operation](https://help.aliyun.com/document_detail/2849194.html).
    shared_ptr<string> periodUnit_ {};
    // **[Deprecated]** For node pool configurations, use the `platform` parameter under `scaling_group` in `nodepool` instead. The operating system distribution. Valid values:
    // - CentOS
    // - AliyunLinux
    // - QbootAliyunLinux
    // - Qboot
    // - Windows
    // - WindowsCore
    // Default value: `CentOS`.
    shared_ptr<string> platform_ {};
    // **[Deprecated]** When the Terway network plug-in is selected, you must specify the vSwitches used to assign IP addresses to pods. Each pod vSwitch corresponds to a worker node vSwitch, and they must be in the same zone.
    // > We recommend that the subnet mask length of the pod vSwitch does not exceed 19, and the maximum subnet mask length does not exceed 25. Otherwise, the number of pod IP addresses that can be allocated in the cluster network is very limited, which affects the normal use of the cluster.
    shared_ptr<vector<string>> podVswitchIds_ {};
    // The cluster subtype when `cluster_type` is set to `ManagedKubernetes`, which indicates an ACK managed cluster. Valid values:
    // - `Default`: ACK managed clusters, including ACK Pro and ACK ACK clusters.
    // - `Edge`: ACK Edge clusters, including ACK Edge Pro and ACK Edge ACK clusters.
    // - `Serverless`: ACK Serverless clusters, including ACK Serverless Pro and ACK Serverless ACK clusters.
    // - `Lingjun`: ACK Lingjun clusters, which provide the Pro edition.
    shared_ptr<string> profile_ {};
    // The kube-proxy mode. Valid values:
    // - `iptables`: A mature and stable kube-proxy mode. Service discovery and load balancing for Kubernetes Services are configured by using iptables rules. However, the performance is average and greatly affected by the scale. This mode is suitable for clusters with a small number of Services.
    // - `ipvs`: A high-performance kube-proxy mode. Service discovery and load balancing for Kubernetes Services are configured by using the Linux IPVS module. This mode is suitable for clusters with a large number of Services and scenarios that require high-performance load balancing.
    // - `nftables`: A next-generation kube-proxy mode. Service discovery and load balancing are implemented based on Linux nftables, which is a modern alternative to iptables. Compared with iptables, nftables provides better network performance, rule update efficiency, and performance in large-scale Service scenarios.
    // This mode is supported only in clusters of Kubernetes 1.35 and later. The Kubernetes community deprecated IPVS in version 1.35. We recommend that you use nftables for new clusters to obtain long-term community support.
    // Default value: `ipvs`.
    shared_ptr<string> proxyMode_ {};
    // **[Deprecated]** For node pool configurations, use the `rds_instances` parameter under `scaling_group` in `nodepool` instead. The list of ApsaraDB RDS instances to which you want to add the cluster to the whitelist. We recommend that you add the pod CIDR block and node CIDR block to the RDS whitelist. If you specify RDS instances here, nodes may fail to be created because the instances are not in the running state.
    shared_ptr<vector<string>> rdsInstances_ {};
    // The ID of the region where the cluster is deployed. For details, see [Regions supported by container service](https://help.aliyun.com/document_detail/216938.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the cluster belongs. This parameter is used to isolate different resources.
    shared_ptr<string> resourceGroupId_ {};
    // The configuration of the RAM Roles for Service Accounts (RRSA) feature.
    shared_ptr<CreateClusterRequest::RrsaConfig> rrsaConfig_ {};
    // The container runtime used in the cluster. Valid values: containerd, sandboxed container, and Docker.
    // > Kubernetes 1.24 and later no longer support Docker as a built-in container runtime.
    // For more information, see [Comparison among Docker, containerd, and sandboxed container runtimes](https://help.aliyun.com/document_detail/160313.html).
    shared_ptr<Runtime> runtime_ {};
    // The ID of the security group. Required when you create a cluster by using an existing security group. This parameter and is_enterprise_security_group are mutually exclusive. Cluster nodes are automatically added to this security group.
    shared_ptr<string> securityGroupId_ {};
    // **[Deprecated]** For control plane configurations, use the `security_hardening_os` parameter under `control_plane_config` instead. For node pool configurations, use the `security_hardening_os` parameter under `scaling_group` in `nodepool` instead. Specifies whether to enable Alibaba Cloud OS security hardening. Valid values:
    // - `true`: Enabled.
    // - `false`: Disabled.
    // Default value: `false`.
    shared_ptr<bool> securityHardeningOs_ {};
    // A ServiceAccount is an access credential for communication between pods and the cluster API server. The `service-account-issuer` is the issuer identity in the `serviceaccount token`, which is the `iss` field in the `token payload`. For more information about `ServiceAccount`, see [Deploy service account token volume projection](https://help.aliyun.com/document_detail/160384.html).
    shared_ptr<string> serviceAccountIssuer_ {};
    // The CIDR block of the Service network. Valid values: 10.0.0.0/16 to 10.0.0.0/24, 172.16.0.0/16 to 172.31.0.0/24, and 192.168.0.0/16 to 192.168.0.0/24. The CIDR block cannot overlap with the VPC CIDR block 10.1.0.0/21 or the CIDR blocks used by existing Kubernetes clusters in the VPC. The CIDR block cannot be modified after the cluster is created. Default value: 172.19.0.0/20.
    shared_ptr<string> serviceCidr_ {};
    // **[Deprecated]** The service discovery type used in the cluster. This parameter is used to specify the service discovery method in an `ACK Serverless` cluster. Valid values:
    // - `CoreDNS`: Uses the standard Kubernetes service discovery component CoreDNS. You must deploy a group of containers in the cluster for DNS resolution. By default, two ECI instances with 0.25 vCPUs and 512 MiB of memory are used.
    // - `PrivateZone`: Uses Alibaba Cloud PrivateZone to provide service discovery capabilities. You must activate the PrivateZone service.
    // Default value: None (disabled).
    shared_ptr<vector<string>> serviceDiscoveryTypes_ {};
    // Specifies whether to configure SNAT for the VPC. Valid values:
    // - `true`: Enables automatic creation of a NAT gateway and configures SNAT rules. Settings: `true` is required if nodes and applications in the cluster need to access the Internet.
    // - `false`: Does not create a NAT gateway or configure SNAT rules. Nodes and applications in the cluster cannot access the Internet.
    // > If you do not enable this feature when you create the cluster, you can [manually enable it](https://help.aliyun.com/document_detail/178480.html) later if your business needs to access the Internet.
    // Default value: `false`.
    shared_ptr<bool> snatEntry_ {};
    // **[Deprecated]** For control plane node configurations, use the `soc_enabled` parameter under `control_plane_config` instead. For node pool configurations, use the `soc_enabled` parameter under `scaling_group` in `nodepool` instead. Specifies whether to enable mlps 2.0 security hardening. For more information, see [ACK mlps 2.0 security hardening instructions](https://help.aliyun.com/document_detail/196148.html). Valid values:
    // - `true`: Enabled.
    // - `false`: Disabled.
    // Default value: `false`.
    shared_ptr<bool> socEnabled_ {};
    // Specifies whether to enable public SSH access. This parameter is used to log on to the master nodes of an ACK dedicated cluster. This parameter does not take effect in managed clusters. Valid values:
    // - `true`: Enabled.
    // - `false`: Disabled.
    // Default value: `false`.
    shared_ptr<bool> sshFlags_ {};
    // The support policy for the cluster version. The value is case-sensitive. Valid values:
    // - Standard: Standard support.
    // - Extended: Extended support. After the standard support period ends, the cluster enters the extended support period and continues to receive CVE patch versions.
    // Only ACK Pro managed clusters (where `cluster_spec` is set to `ack.pro.*` and `profile` is set to `Default`) support the `Extended` value. Specifying `Extended` for ACK Basic, ACS, ACK Edge managed, and ACK dedicated clusters will be rejected. Patch versions in the extended support period are also applicable only to ACK Pro managed clusters. Specifying such versions for other cluster types will be rejected. If this parameter is not specified, the default value is determined by the server configuration.
    shared_ptr<string> supportPolicy_ {};
    // The node tags. Tag definition rules:
    // - A tag is a case-sensitive key-value pair. You can configure up to 20 tags.
    // - Tag keys must be unique and can be up to 64 characters in length. Tag values can be empty and can be up to 128 characters in length. Tag keys and values cannot start with "aliyun", "acs:", "https://", or "http://". For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    shared_ptr<vector<Tag>> tags_ {};
    // **[Deprecated]** For node pool configurations, use the `taints` parameter under `kubernetes_config` in `nodepool` instead. The taints of the nodes. Taints and tolerations work together to prevent pods from being scheduled to inappropriate nodes. For more information, see [Taints and Tolerations](https://kubernetes.io/docs/concepts/scheduling-eviction/taint-and-toleration/).
    // [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/)
    shared_ptr<vector<Taint>> taints_ {};
    // **[Deprecated]** By default, no rollback is performed when cluster creation fails. You must manually clean up the failed cluster. The timeout period for cluster creation, in minutes. Default value: `60`.
    shared_ptr<int64_t> timeoutMins_ {};
    // The time zone used by the cluster. For more information, see [Supported time zones](https://help.aliyun.com/document_detail/354879.html).
    shared_ptr<string> timezone_ {};
    // The custom cluster CA certificate.
    shared_ptr<string> userCa_ {};
    // **[Deprecated]** The custom node data.
    shared_ptr<string> userData_ {};
    // The ID of the VPC used by the cluster. This parameter is required when you create the cluster.
    shared_ptr<string> vpcid_ {};
    // The vSwitches where the cluster nodes are deployed. This parameter is required when you create a managed cluster with zero nodes.
    shared_ptr<vector<string>> vswitchIds_ {};
    // **[Deprecated]** For node pool configurations, use the `auto_renew` parameter under `scaling_group` in `nodepool` instead. Specifies whether to enable auto-renewal for worker nodes. This parameter takes effect only when `worker_instance_charge_type` is set to `PrePaid`. Valid values:
    // - `true`: Enabled.
    // - `false`: Disabled.
    // Default value: `true`.
    shared_ptr<bool> workerAutoRenew_ {};
    // **[Deprecated]** For node pool configurations, use the `auto_renew_period` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The auto-renewal epoch for worker nodes. This parameter takes effect and is required only when the subscription billing method is selected.
    // 
    // Valid values: 1, 2, 3, 6, and 12.
    shared_ptr<int64_t> workerAutoRenewPeriod_ {};
    // **[Deprecated]** For node pool configurations, use the `data_disks` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The combination of configurations such as the type and size of the data cloud disks for worker nodes.
    shared_ptr<vector<CreateClusterRequest::WorkerDataDisks>> workerDataDisks_ {};
    // **[Deprecated]** For node pool configurations, use the `instance_charge_type` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The billing method for worker nodes. Valid values:
    // 
    // - `PrePaid`: Subscription.
    // - `PostPaid`: Pay-as-you-go.
    // 
    // Default value: `PostPaid`.
    shared_ptr<string> workerInstanceChargeType_ {};
    // **[Deprecated]** For node pool configurations, use the `instance_types` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The instance configurations for worker nodes.
    shared_ptr<vector<string>> workerInstanceTypes_ {};
    // **[Deprecated]** For node pool configurations, use the `period` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The subscription duration for worker nodes. This parameter takes effect and is required only when `worker_instance_charge_type` is set to `PrePaid`.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    shared_ptr<int64_t> workerPeriod_ {};
    // **[Deprecated]** For node pool configurations, use the `period_unit` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The subscription period unit for worker nodes. This parameter is required when the billing method is set to `PrePaid`.
    // 
    // Valid value: `Month`. Currently, only month is supported.
    shared_ptr<string> workerPeriodUnit_ {};
    // **[Deprecated]** For node pool configurations, use the `system_disk_category` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The type of the system cloud disk for worker nodes. For more information, see [Block Storage overview](https://help.aliyun.com/document_detail/63136.html).
    // 
    // Valid values:
    // 
    // - `cloud_efficiency`: Ultra cloud disk.
    // - `cloud_ssd`: Standard SSD.
    // 
    // Default value: `cloud_ssd`.
    shared_ptr<string> workerSystemDiskCategory_ {};
    // **[Deprecated]** For node pool configurations, use the `system_disk_performance_level` parameter under `scaling_group` in `nodepool` instead.
    // 
    // When the system cloud disk is an ESSD, you can configure the performance level (PL). For more information, see [ESSD](https://help.aliyun.com/document_detail/122389.html).
    // 
    // Valid values:
    // 
    // - PL0
    // - PL1
    // - PL2
    // - PL3
    shared_ptr<string> workerSystemDiskPerformanceLevel_ {};
    // **[Deprecated]** For node pool configurations, use the `system_disk_size` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The size of the system cloud disk for worker nodes. Unit: GiB.
    // 
    // Valid values: 40 to 500.
    // 
    // The value of this parameter must be greater than or equal to the maximum of 40 and the image size.
    // 
    // Default value: `120`.
    shared_ptr<int64_t> workerSystemDiskSize_ {};
    // **[Deprecated]** For node pool configurations, use the `system_disk_snapshot_policy_id` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The ID of the automatic snapshot policy applied to the system cloud disk of worker nodes.
    shared_ptr<string> workerSystemDiskSnapshotPolicyId_ {};
    // **[Deprecated]** For node pool configurations, use the `vswitch_ids` parameter under `scaling_group` in `nodepool` instead.
    // 
    // The list of vSwitches used by cluster nodes. Each node corresponds to one vSwitch.
    // 
    // When you create a managed cluster with zero nodes, the `worker_vswitch_ids` parameter is not required, but you must specify `vswitch_ids`.
    shared_ptr<vector<string>> workerVswitchIds_ {};
    // **[Deprecated]** Use the `zone_ids` parameter instead.
    // 
    // The zone ID of the region where the cluster resides. This parameter is specific to managed ACK clusters.
    // 
    // When you create a managed ACK cluster, if `vpc_id` and `vswitch_ids` are not specified, you must specify `zone_id` for the cluster to automatically create a VPC and network resources in this zone. If `vpc_id` and `vswitch_ids` are specified, this parameter does not take effect.
    shared_ptr<string> zoneId_ {};
    // The zone IDs of the region where the cluster resides. This parameter is specific to managed ACK clusters.
    shared_ptr<vector<string>> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
