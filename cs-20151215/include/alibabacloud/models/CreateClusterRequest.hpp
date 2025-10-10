// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Addon.hpp>
#include <alibabacloud/models/CreateClusterRequestAuditLogConfig.hpp>
#include <alibabacloud/models/CreateClusterRequestAutoMode.hpp>
#include <alibabacloud/models/CreateClusterRequestControlPlaneConfig.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <alibabacloud/models/Nodepool.hpp>
#include <alibabacloud/models/CreateClusterRequestOperationPolicy.hpp>
#include <alibabacloud/models/CreateClusterRequestRrsaConfig.hpp>
#include <alibabacloud/models/Runtime.hpp>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Taint.hpp>
#include <alibabacloud/models/CreateClusterRequestWorkerDataDisks.hpp>
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
      DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
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
      DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
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
    virtual bool empty() const override { this->accessControlList_ != nullptr
        && this->addons_ != nullptr && this->apiAudiences_ != nullptr && this->auditLogConfig_ != nullptr && this->autoMode_ != nullptr && this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->chargeType_ != nullptr && this->cisEnabled_ != nullptr && this->cloudMonitorFlags_ != nullptr && this->clusterDomain_ != nullptr
        && this->clusterSpec_ != nullptr && this->clusterType_ != nullptr && this->containerCidr_ != nullptr && this->controlPlaneConfig_ != nullptr && this->controlplaneLogComponents_ != nullptr
        && this->controlplaneLogProject_ != nullptr && this->controlplaneLogTtl_ != nullptr && this->cpuPolicy_ != nullptr && this->customSan_ != nullptr && this->deletionProtection_ != nullptr
        && this->disableRollback_ != nullptr && this->enableRrsa_ != nullptr && this->encryptionProviderKey_ != nullptr && this->endpointPublicAccess_ != nullptr && this->extraSans_ != nullptr
        && this->formatDisk_ != nullptr && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instances_ != nullptr && this->ipStack_ != nullptr
        && this->isEnterpriseSecurityGroup_ != nullptr && this->keepInstanceName_ != nullptr && this->keyPair_ != nullptr && this->kubernetesVersion_ != nullptr && this->loadBalancerId_ != nullptr
        && this->loadBalancerSpec_ != nullptr && this->loggingType_ != nullptr && this->loginPassword_ != nullptr && this->maintenanceWindow_ != nullptr && this->masterAutoRenew_ != nullptr
        && this->masterAutoRenewPeriod_ != nullptr && this->masterCount_ != nullptr && this->masterInstanceChargeType_ != nullptr && this->masterInstanceTypes_ != nullptr && this->masterPeriod_ != nullptr
        && this->masterPeriodUnit_ != nullptr && this->masterSystemDiskCategory_ != nullptr && this->masterSystemDiskPerformanceLevel_ != nullptr && this->masterSystemDiskSize_ != nullptr && this->masterSystemDiskSnapshotPolicyId_ != nullptr
        && this->masterVswitchIds_ != nullptr && this->name_ != nullptr && this->natGateway_ != nullptr && this->nodeCidrMask_ != nullptr && this->nodeNameMode_ != nullptr
        && this->nodePortRange_ != nullptr && this->nodepools_ != nullptr && this->numOfNodes_ != nullptr && this->operationPolicy_ != nullptr && this->osType_ != nullptr
        && this->period_ != nullptr && this->periodUnit_ != nullptr && this->platform_ != nullptr && this->podVswitchIds_ != nullptr && this->profile_ != nullptr
        && this->proxyMode_ != nullptr && this->rdsInstances_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->rrsaConfig_ != nullptr
        && this->runtime_ != nullptr && this->securityGroupId_ != nullptr && this->securityHardeningOs_ != nullptr && this->serviceAccountIssuer_ != nullptr && this->serviceCidr_ != nullptr
        && this->serviceDiscoveryTypes_ != nullptr && this->snatEntry_ != nullptr && this->socEnabled_ != nullptr && this->sshFlags_ != nullptr && this->tags_ != nullptr
        && this->taints_ != nullptr && this->timeoutMins_ != nullptr && this->timezone_ != nullptr && this->userCa_ != nullptr && this->userData_ != nullptr
        && this->vpcid_ != nullptr && this->vswitchIds_ != nullptr && this->workerAutoRenew_ != nullptr && this->workerAutoRenewPeriod_ != nullptr && this->workerDataDisks_ != nullptr
        && this->workerInstanceChargeType_ != nullptr && this->workerInstanceTypes_ != nullptr && this->workerPeriod_ != nullptr && this->workerPeriodUnit_ != nullptr && this->workerSystemDiskCategory_ != nullptr
        && this->workerSystemDiskPerformanceLevel_ != nullptr && this->workerSystemDiskSize_ != nullptr && this->workerSystemDiskSnapshotPolicyId_ != nullptr && this->workerVswitchIds_ != nullptr && this->zoneId_ != nullptr
        && this->zoneIds_ != nullptr; };
    // accessControlList Field Functions 
    bool hasAccessControlList() const { return this->accessControlList_ != nullptr;};
    void deleteAccessControlList() { this->accessControlList_ = nullptr;};
    inline const vector<string> & accessControlList() const { DARABONBA_PTR_GET_CONST(accessControlList_, vector<string>) };
    inline vector<string> accessControlList() { DARABONBA_PTR_GET(accessControlList_, vector<string>) };
    inline CreateClusterRequest& setAccessControlList(const vector<string> & accessControlList) { DARABONBA_PTR_SET_VALUE(accessControlList_, accessControlList) };
    inline CreateClusterRequest& setAccessControlList(vector<string> && accessControlList) { DARABONBA_PTR_SET_RVALUE(accessControlList_, accessControlList) };


    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<Addon> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<Addon>) };
    inline vector<Addon> addons() { DARABONBA_PTR_GET(addons_, vector<Addon>) };
    inline CreateClusterRequest& setAddons(const vector<Addon> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline CreateClusterRequest& setAddons(vector<Addon> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // apiAudiences Field Functions 
    bool hasApiAudiences() const { return this->apiAudiences_ != nullptr;};
    void deleteApiAudiences() { this->apiAudiences_ = nullptr;};
    inline string apiAudiences() const { DARABONBA_PTR_GET_DEFAULT(apiAudiences_, "") };
    inline CreateClusterRequest& setApiAudiences(string apiAudiences) { DARABONBA_PTR_SET_VALUE(apiAudiences_, apiAudiences) };


    // auditLogConfig Field Functions 
    bool hasAuditLogConfig() const { return this->auditLogConfig_ != nullptr;};
    void deleteAuditLogConfig() { this->auditLogConfig_ = nullptr;};
    inline const CreateClusterRequestAuditLogConfig & auditLogConfig() const { DARABONBA_PTR_GET_CONST(auditLogConfig_, CreateClusterRequestAuditLogConfig) };
    inline CreateClusterRequestAuditLogConfig auditLogConfig() { DARABONBA_PTR_GET(auditLogConfig_, CreateClusterRequestAuditLogConfig) };
    inline CreateClusterRequest& setAuditLogConfig(const CreateClusterRequestAuditLogConfig & auditLogConfig) { DARABONBA_PTR_SET_VALUE(auditLogConfig_, auditLogConfig) };
    inline CreateClusterRequest& setAuditLogConfig(CreateClusterRequestAuditLogConfig && auditLogConfig) { DARABONBA_PTR_SET_RVALUE(auditLogConfig_, auditLogConfig) };


    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const CreateClusterRequestAutoMode & autoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, CreateClusterRequestAutoMode) };
    inline CreateClusterRequestAutoMode autoMode() { DARABONBA_PTR_GET(autoMode_, CreateClusterRequestAutoMode) };
    inline CreateClusterRequest& setAutoMode(const CreateClusterRequestAutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline CreateClusterRequest& setAutoMode(CreateClusterRequestAutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateClusterRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cisEnabled Field Functions 
    bool hasCisEnabled() const { return this->cisEnabled_ != nullptr;};
    void deleteCisEnabled() { this->cisEnabled_ = nullptr;};
    inline bool cisEnabled() const { DARABONBA_PTR_GET_DEFAULT(cisEnabled_, false) };
    inline CreateClusterRequest& setCisEnabled(bool cisEnabled) { DARABONBA_PTR_SET_VALUE(cisEnabled_, cisEnabled) };


    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool cloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline CreateClusterRequest& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline CreateClusterRequest& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline CreateClusterRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string containerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline CreateClusterRequest& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const CreateClusterRequestControlPlaneConfig & controlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, CreateClusterRequestControlPlaneConfig) };
    inline CreateClusterRequestControlPlaneConfig controlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, CreateClusterRequestControlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(const CreateClusterRequestControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline CreateClusterRequest& setControlPlaneConfig(CreateClusterRequestControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // controlplaneLogComponents Field Functions 
    bool hasControlplaneLogComponents() const { return this->controlplaneLogComponents_ != nullptr;};
    void deleteControlplaneLogComponents() { this->controlplaneLogComponents_ = nullptr;};
    inline const vector<string> & controlplaneLogComponents() const { DARABONBA_PTR_GET_CONST(controlplaneLogComponents_, vector<string>) };
    inline vector<string> controlplaneLogComponents() { DARABONBA_PTR_GET(controlplaneLogComponents_, vector<string>) };
    inline CreateClusterRequest& setControlplaneLogComponents(const vector<string> & controlplaneLogComponents) { DARABONBA_PTR_SET_VALUE(controlplaneLogComponents_, controlplaneLogComponents) };
    inline CreateClusterRequest& setControlplaneLogComponents(vector<string> && controlplaneLogComponents) { DARABONBA_PTR_SET_RVALUE(controlplaneLogComponents_, controlplaneLogComponents) };


    // controlplaneLogProject Field Functions 
    bool hasControlplaneLogProject() const { return this->controlplaneLogProject_ != nullptr;};
    void deleteControlplaneLogProject() { this->controlplaneLogProject_ = nullptr;};
    inline string controlplaneLogProject() const { DARABONBA_PTR_GET_DEFAULT(controlplaneLogProject_, "") };
    inline CreateClusterRequest& setControlplaneLogProject(string controlplaneLogProject) { DARABONBA_PTR_SET_VALUE(controlplaneLogProject_, controlplaneLogProject) };


    // controlplaneLogTtl Field Functions 
    bool hasControlplaneLogTtl() const { return this->controlplaneLogTtl_ != nullptr;};
    void deleteControlplaneLogTtl() { this->controlplaneLogTtl_ = nullptr;};
    inline string controlplaneLogTtl() const { DARABONBA_PTR_GET_DEFAULT(controlplaneLogTtl_, "") };
    inline CreateClusterRequest& setControlplaneLogTtl(string controlplaneLogTtl) { DARABONBA_PTR_SET_VALUE(controlplaneLogTtl_, controlplaneLogTtl) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline CreateClusterRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // customSan Field Functions 
    bool hasCustomSan() const { return this->customSan_ != nullptr;};
    void deleteCustomSan() { this->customSan_ = nullptr;};
    inline string customSan() const { DARABONBA_PTR_GET_DEFAULT(customSan_, "") };
    inline CreateClusterRequest& setCustomSan(string customSan) { DARABONBA_PTR_SET_VALUE(customSan_, customSan) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline CreateClusterRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // enableRrsa Field Functions 
    bool hasEnableRrsa() const { return this->enableRrsa_ != nullptr;};
    void deleteEnableRrsa() { this->enableRrsa_ = nullptr;};
    inline bool enableRrsa() const { DARABONBA_PTR_GET_DEFAULT(enableRrsa_, false) };
    inline CreateClusterRequest& setEnableRrsa(bool enableRrsa) { DARABONBA_PTR_SET_VALUE(enableRrsa_, enableRrsa) };


    // encryptionProviderKey Field Functions 
    bool hasEncryptionProviderKey() const { return this->encryptionProviderKey_ != nullptr;};
    void deleteEncryptionProviderKey() { this->encryptionProviderKey_ = nullptr;};
    inline string encryptionProviderKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionProviderKey_, "") };
    inline CreateClusterRequest& setEncryptionProviderKey(string encryptionProviderKey) { DARABONBA_PTR_SET_VALUE(encryptionProviderKey_, encryptionProviderKey) };


    // endpointPublicAccess Field Functions 
    bool hasEndpointPublicAccess() const { return this->endpointPublicAccess_ != nullptr;};
    void deleteEndpointPublicAccess() { this->endpointPublicAccess_ = nullptr;};
    inline bool endpointPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(endpointPublicAccess_, false) };
    inline CreateClusterRequest& setEndpointPublicAccess(bool endpointPublicAccess) { DARABONBA_PTR_SET_VALUE(endpointPublicAccess_, endpointPublicAccess) };


    // extraSans Field Functions 
    bool hasExtraSans() const { return this->extraSans_ != nullptr;};
    void deleteExtraSans() { this->extraSans_ = nullptr;};
    inline const vector<string> & extraSans() const { DARABONBA_PTR_GET_CONST(extraSans_, vector<string>) };
    inline vector<string> extraSans() { DARABONBA_PTR_GET(extraSans_, vector<string>) };
    inline CreateClusterRequest& setExtraSans(const vector<string> & extraSans) { DARABONBA_PTR_SET_VALUE(extraSans_, extraSans) };
    inline CreateClusterRequest& setExtraSans(vector<string> && extraSans) { DARABONBA_PTR_SET_RVALUE(extraSans_, extraSans) };


    // formatDisk Field Functions 
    bool hasFormatDisk() const { return this->formatDisk_ != nullptr;};
    void deleteFormatDisk() { this->formatDisk_ = nullptr;};
    inline bool formatDisk() const { DARABONBA_PTR_GET_DEFAULT(formatDisk_, false) };
    inline CreateClusterRequest& setFormatDisk(bool formatDisk) { DARABONBA_PTR_SET_VALUE(formatDisk_, formatDisk) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateClusterRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline CreateClusterRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateClusterRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string ipStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline CreateClusterRequest& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // isEnterpriseSecurityGroup Field Functions 
    bool hasIsEnterpriseSecurityGroup() const { return this->isEnterpriseSecurityGroup_ != nullptr;};
    void deleteIsEnterpriseSecurityGroup() { this->isEnterpriseSecurityGroup_ = nullptr;};
    inline bool isEnterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseSecurityGroup_, false) };
    inline CreateClusterRequest& setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(isEnterpriseSecurityGroup_, isEnterpriseSecurityGroup) };


    // keepInstanceName Field Functions 
    bool hasKeepInstanceName() const { return this->keepInstanceName_ != nullptr;};
    void deleteKeepInstanceName() { this->keepInstanceName_ = nullptr;};
    inline bool keepInstanceName() const { DARABONBA_PTR_GET_DEFAULT(keepInstanceName_, false) };
    inline CreateClusterRequest& setKeepInstanceName(bool keepInstanceName) { DARABONBA_PTR_SET_VALUE(keepInstanceName_, keepInstanceName) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline CreateClusterRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string kubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline CreateClusterRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateClusterRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline CreateClusterRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loggingType Field Functions 
    bool hasLoggingType() const { return this->loggingType_ != nullptr;};
    void deleteLoggingType() { this->loggingType_ = nullptr;};
    inline string loggingType() const { DARABONBA_PTR_GET_DEFAULT(loggingType_, "") };
    inline CreateClusterRequest& setLoggingType(string loggingType) { DARABONBA_PTR_SET_VALUE(loggingType_, loggingType) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & maintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow maintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline CreateClusterRequest& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline CreateClusterRequest& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // masterAutoRenew Field Functions 
    bool hasMasterAutoRenew() const { return this->masterAutoRenew_ != nullptr;};
    void deleteMasterAutoRenew() { this->masterAutoRenew_ = nullptr;};
    inline bool masterAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(masterAutoRenew_, false) };
    inline CreateClusterRequest& setMasterAutoRenew(bool masterAutoRenew) { DARABONBA_PTR_SET_VALUE(masterAutoRenew_, masterAutoRenew) };


    // masterAutoRenewPeriod Field Functions 
    bool hasMasterAutoRenewPeriod() const { return this->masterAutoRenewPeriod_ != nullptr;};
    void deleteMasterAutoRenewPeriod() { this->masterAutoRenewPeriod_ = nullptr;};
    inline int64_t masterAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(masterAutoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setMasterAutoRenewPeriod(int64_t masterAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(masterAutoRenewPeriod_, masterAutoRenewPeriod) };


    // masterCount Field Functions 
    bool hasMasterCount() const { return this->masterCount_ != nullptr;};
    void deleteMasterCount() { this->masterCount_ = nullptr;};
    inline int64_t masterCount() const { DARABONBA_PTR_GET_DEFAULT(masterCount_, 0L) };
    inline CreateClusterRequest& setMasterCount(int64_t masterCount) { DARABONBA_PTR_SET_VALUE(masterCount_, masterCount) };


    // masterInstanceChargeType Field Functions 
    bool hasMasterInstanceChargeType() const { return this->masterInstanceChargeType_ != nullptr;};
    void deleteMasterInstanceChargeType() { this->masterInstanceChargeType_ = nullptr;};
    inline string masterInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceChargeType_, "") };
    inline CreateClusterRequest& setMasterInstanceChargeType(string masterInstanceChargeType) { DARABONBA_PTR_SET_VALUE(masterInstanceChargeType_, masterInstanceChargeType) };


    // masterInstanceTypes Field Functions 
    bool hasMasterInstanceTypes() const { return this->masterInstanceTypes_ != nullptr;};
    void deleteMasterInstanceTypes() { this->masterInstanceTypes_ = nullptr;};
    inline const vector<string> & masterInstanceTypes() const { DARABONBA_PTR_GET_CONST(masterInstanceTypes_, vector<string>) };
    inline vector<string> masterInstanceTypes() { DARABONBA_PTR_GET(masterInstanceTypes_, vector<string>) };
    inline CreateClusterRequest& setMasterInstanceTypes(const vector<string> & masterInstanceTypes) { DARABONBA_PTR_SET_VALUE(masterInstanceTypes_, masterInstanceTypes) };
    inline CreateClusterRequest& setMasterInstanceTypes(vector<string> && masterInstanceTypes) { DARABONBA_PTR_SET_RVALUE(masterInstanceTypes_, masterInstanceTypes) };


    // masterPeriod Field Functions 
    bool hasMasterPeriod() const { return this->masterPeriod_ != nullptr;};
    void deleteMasterPeriod() { this->masterPeriod_ = nullptr;};
    inline int64_t masterPeriod() const { DARABONBA_PTR_GET_DEFAULT(masterPeriod_, 0L) };
    inline CreateClusterRequest& setMasterPeriod(int64_t masterPeriod) { DARABONBA_PTR_SET_VALUE(masterPeriod_, masterPeriod) };


    // masterPeriodUnit Field Functions 
    bool hasMasterPeriodUnit() const { return this->masterPeriodUnit_ != nullptr;};
    void deleteMasterPeriodUnit() { this->masterPeriodUnit_ = nullptr;};
    inline string masterPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(masterPeriodUnit_, "") };
    inline CreateClusterRequest& setMasterPeriodUnit(string masterPeriodUnit) { DARABONBA_PTR_SET_VALUE(masterPeriodUnit_, masterPeriodUnit) };


    // masterSystemDiskCategory Field Functions 
    bool hasMasterSystemDiskCategory() const { return this->masterSystemDiskCategory_ != nullptr;};
    void deleteMasterSystemDiskCategory() { this->masterSystemDiskCategory_ = nullptr;};
    inline string masterSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskCategory_, "") };
    inline CreateClusterRequest& setMasterSystemDiskCategory(string masterSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(masterSystemDiskCategory_, masterSystemDiskCategory) };


    // masterSystemDiskPerformanceLevel Field Functions 
    bool hasMasterSystemDiskPerformanceLevel() const { return this->masterSystemDiskPerformanceLevel_ != nullptr;};
    void deleteMasterSystemDiskPerformanceLevel() { this->masterSystemDiskPerformanceLevel_ = nullptr;};
    inline string masterSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskPerformanceLevel_, "") };
    inline CreateClusterRequest& setMasterSystemDiskPerformanceLevel(string masterSystemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(masterSystemDiskPerformanceLevel_, masterSystemDiskPerformanceLevel) };


    // masterSystemDiskSize Field Functions 
    bool hasMasterSystemDiskSize() const { return this->masterSystemDiskSize_ != nullptr;};
    void deleteMasterSystemDiskSize() { this->masterSystemDiskSize_ = nullptr;};
    inline int64_t masterSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskSize_, 0L) };
    inline CreateClusterRequest& setMasterSystemDiskSize(int64_t masterSystemDiskSize) { DARABONBA_PTR_SET_VALUE(masterSystemDiskSize_, masterSystemDiskSize) };


    // masterSystemDiskSnapshotPolicyId Field Functions 
    bool hasMasterSystemDiskSnapshotPolicyId() const { return this->masterSystemDiskSnapshotPolicyId_ != nullptr;};
    void deleteMasterSystemDiskSnapshotPolicyId() { this->masterSystemDiskSnapshotPolicyId_ = nullptr;};
    inline string masterSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(masterSystemDiskSnapshotPolicyId_, "") };
    inline CreateClusterRequest& setMasterSystemDiskSnapshotPolicyId(string masterSystemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(masterSystemDiskSnapshotPolicyId_, masterSystemDiskSnapshotPolicyId) };


    // masterVswitchIds Field Functions 
    bool hasMasterVswitchIds() const { return this->masterVswitchIds_ != nullptr;};
    void deleteMasterVswitchIds() { this->masterVswitchIds_ = nullptr;};
    inline const vector<string> & masterVswitchIds() const { DARABONBA_PTR_GET_CONST(masterVswitchIds_, vector<string>) };
    inline vector<string> masterVswitchIds() { DARABONBA_PTR_GET(masterVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setMasterVswitchIds(const vector<string> & masterVswitchIds) { DARABONBA_PTR_SET_VALUE(masterVswitchIds_, masterVswitchIds) };
    inline CreateClusterRequest& setMasterVswitchIds(vector<string> && masterVswitchIds) { DARABONBA_PTR_SET_RVALUE(masterVswitchIds_, masterVswitchIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGateway Field Functions 
    bool hasNatGateway() const { return this->natGateway_ != nullptr;};
    void deleteNatGateway() { this->natGateway_ = nullptr;};
    inline bool natGateway() const { DARABONBA_PTR_GET_DEFAULT(natGateway_, false) };
    inline CreateClusterRequest& setNatGateway(bool natGateway) { DARABONBA_PTR_SET_VALUE(natGateway_, natGateway) };


    // nodeCidrMask Field Functions 
    bool hasNodeCidrMask() const { return this->nodeCidrMask_ != nullptr;};
    void deleteNodeCidrMask() { this->nodeCidrMask_ = nullptr;};
    inline string nodeCidrMask() const { DARABONBA_PTR_GET_DEFAULT(nodeCidrMask_, "") };
    inline CreateClusterRequest& setNodeCidrMask(string nodeCidrMask) { DARABONBA_PTR_SET_VALUE(nodeCidrMask_, nodeCidrMask) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string nodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline CreateClusterRequest& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // nodePortRange Field Functions 
    bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
    void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
    inline string nodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
    inline CreateClusterRequest& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


    // nodepools Field Functions 
    bool hasNodepools() const { return this->nodepools_ != nullptr;};
    void deleteNodepools() { this->nodepools_ = nullptr;};
    inline const vector<Nodepool> & nodepools() const { DARABONBA_PTR_GET_CONST(nodepools_, vector<Nodepool>) };
    inline vector<Nodepool> nodepools() { DARABONBA_PTR_GET(nodepools_, vector<Nodepool>) };
    inline CreateClusterRequest& setNodepools(const vector<Nodepool> & nodepools) { DARABONBA_PTR_SET_VALUE(nodepools_, nodepools) };
    inline CreateClusterRequest& setNodepools(vector<Nodepool> && nodepools) { DARABONBA_PTR_SET_RVALUE(nodepools_, nodepools) };


    // numOfNodes Field Functions 
    bool hasNumOfNodes() const { return this->numOfNodes_ != nullptr;};
    void deleteNumOfNodes() { this->numOfNodes_ = nullptr;};
    inline int64_t numOfNodes() const { DARABONBA_PTR_GET_DEFAULT(numOfNodes_, 0L) };
    inline CreateClusterRequest& setNumOfNodes(int64_t numOfNodes) { DARABONBA_PTR_SET_VALUE(numOfNodes_, numOfNodes) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const CreateClusterRequestOperationPolicy & operationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, CreateClusterRequestOperationPolicy) };
    inline CreateClusterRequestOperationPolicy operationPolicy() { DARABONBA_PTR_GET(operationPolicy_, CreateClusterRequestOperationPolicy) };
    inline CreateClusterRequest& setOperationPolicy(const CreateClusterRequestOperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline CreateClusterRequest& setOperationPolicy(CreateClusterRequestOperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateClusterRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateClusterRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateClusterRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateClusterRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // podVswitchIds Field Functions 
    bool hasPodVswitchIds() const { return this->podVswitchIds_ != nullptr;};
    void deletePodVswitchIds() { this->podVswitchIds_ = nullptr;};
    inline const vector<string> & podVswitchIds() const { DARABONBA_PTR_GET_CONST(podVswitchIds_, vector<string>) };
    inline vector<string> podVswitchIds() { DARABONBA_PTR_GET(podVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setPodVswitchIds(const vector<string> & podVswitchIds) { DARABONBA_PTR_SET_VALUE(podVswitchIds_, podVswitchIds) };
    inline CreateClusterRequest& setPodVswitchIds(vector<string> && podVswitchIds) { DARABONBA_PTR_SET_RVALUE(podVswitchIds_, podVswitchIds) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline CreateClusterRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string proxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline CreateClusterRequest& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline CreateClusterRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline CreateClusterRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rrsaConfig Field Functions 
    bool hasRrsaConfig() const { return this->rrsaConfig_ != nullptr;};
    void deleteRrsaConfig() { this->rrsaConfig_ = nullptr;};
    inline const CreateClusterRequestRrsaConfig & rrsaConfig() const { DARABONBA_PTR_GET_CONST(rrsaConfig_, CreateClusterRequestRrsaConfig) };
    inline CreateClusterRequestRrsaConfig rrsaConfig() { DARABONBA_PTR_GET(rrsaConfig_, CreateClusterRequestRrsaConfig) };
    inline CreateClusterRequest& setRrsaConfig(const CreateClusterRequestRrsaConfig & rrsaConfig) { DARABONBA_PTR_SET_VALUE(rrsaConfig_, rrsaConfig) };
    inline CreateClusterRequest& setRrsaConfig(CreateClusterRequestRrsaConfig && rrsaConfig) { DARABONBA_PTR_SET_RVALUE(rrsaConfig_, rrsaConfig) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime runtime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline CreateClusterRequest& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline CreateClusterRequest& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline CreateClusterRequest& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // serviceAccountIssuer Field Functions 
    bool hasServiceAccountIssuer() const { return this->serviceAccountIssuer_ != nullptr;};
    void deleteServiceAccountIssuer() { this->serviceAccountIssuer_ = nullptr;};
    inline string serviceAccountIssuer() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountIssuer_, "") };
    inline CreateClusterRequest& setServiceAccountIssuer(string serviceAccountIssuer) { DARABONBA_PTR_SET_VALUE(serviceAccountIssuer_, serviceAccountIssuer) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string serviceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline CreateClusterRequest& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // serviceDiscoveryTypes Field Functions 
    bool hasServiceDiscoveryTypes() const { return this->serviceDiscoveryTypes_ != nullptr;};
    void deleteServiceDiscoveryTypes() { this->serviceDiscoveryTypes_ = nullptr;};
    inline const vector<string> & serviceDiscoveryTypes() const { DARABONBA_PTR_GET_CONST(serviceDiscoveryTypes_, vector<string>) };
    inline vector<string> serviceDiscoveryTypes() { DARABONBA_PTR_GET(serviceDiscoveryTypes_, vector<string>) };
    inline CreateClusterRequest& setServiceDiscoveryTypes(const vector<string> & serviceDiscoveryTypes) { DARABONBA_PTR_SET_VALUE(serviceDiscoveryTypes_, serviceDiscoveryTypes) };
    inline CreateClusterRequest& setServiceDiscoveryTypes(vector<string> && serviceDiscoveryTypes) { DARABONBA_PTR_SET_RVALUE(serviceDiscoveryTypes_, serviceDiscoveryTypes) };


    // snatEntry Field Functions 
    bool hasSnatEntry() const { return this->snatEntry_ != nullptr;};
    void deleteSnatEntry() { this->snatEntry_ = nullptr;};
    inline bool snatEntry() const { DARABONBA_PTR_GET_DEFAULT(snatEntry_, false) };
    inline CreateClusterRequest& setSnatEntry(bool snatEntry) { DARABONBA_PTR_SET_VALUE(snatEntry_, snatEntry) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline CreateClusterRequest& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // sshFlags Field Functions 
    bool hasSshFlags() const { return this->sshFlags_ != nullptr;};
    void deleteSshFlags() { this->sshFlags_ = nullptr;};
    inline bool sshFlags() const { DARABONBA_PTR_GET_DEFAULT(sshFlags_, false) };
    inline CreateClusterRequest& setSshFlags(bool sshFlags) { DARABONBA_PTR_SET_VALUE(sshFlags_, sshFlags) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline CreateClusterRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClusterRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Taint>) };
    inline vector<Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Taint>) };
    inline CreateClusterRequest& setTaints(const vector<Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline CreateClusterRequest& setTaints(vector<Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // timeoutMins Field Functions 
    bool hasTimeoutMins() const { return this->timeoutMins_ != nullptr;};
    void deleteTimeoutMins() { this->timeoutMins_ = nullptr;};
    inline int64_t timeoutMins() const { DARABONBA_PTR_GET_DEFAULT(timeoutMins_, 0L) };
    inline CreateClusterRequest& setTimeoutMins(int64_t timeoutMins) { DARABONBA_PTR_SET_VALUE(timeoutMins_, timeoutMins) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateClusterRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // userCa Field Functions 
    bool hasUserCa() const { return this->userCa_ != nullptr;};
    void deleteUserCa() { this->userCa_ = nullptr;};
    inline string userCa() const { DARABONBA_PTR_GET_DEFAULT(userCa_, "") };
    inline CreateClusterRequest& setUserCa(string userCa) { DARABONBA_PTR_SET_VALUE(userCa_, userCa) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateClusterRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vpcid Field Functions 
    bool hasVpcid() const { return this->vpcid_ != nullptr;};
    void deleteVpcid() { this->vpcid_ = nullptr;};
    inline string vpcid() const { DARABONBA_PTR_GET_DEFAULT(vpcid_, "") };
    inline CreateClusterRequest& setVpcid(string vpcid) { DARABONBA_PTR_SET_VALUE(vpcid_, vpcid) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline CreateClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline CreateClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerAutoRenew Field Functions 
    bool hasWorkerAutoRenew() const { return this->workerAutoRenew_ != nullptr;};
    void deleteWorkerAutoRenew() { this->workerAutoRenew_ = nullptr;};
    inline bool workerAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenew_, false) };
    inline CreateClusterRequest& setWorkerAutoRenew(bool workerAutoRenew) { DARABONBA_PTR_SET_VALUE(workerAutoRenew_, workerAutoRenew) };


    // workerAutoRenewPeriod Field Functions 
    bool hasWorkerAutoRenewPeriod() const { return this->workerAutoRenewPeriod_ != nullptr;};
    void deleteWorkerAutoRenewPeriod() { this->workerAutoRenewPeriod_ = nullptr;};
    inline int64_t workerAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenewPeriod_, 0L) };
    inline CreateClusterRequest& setWorkerAutoRenewPeriod(int64_t workerAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(workerAutoRenewPeriod_, workerAutoRenewPeriod) };


    // workerDataDisks Field Functions 
    bool hasWorkerDataDisks() const { return this->workerDataDisks_ != nullptr;};
    void deleteWorkerDataDisks() { this->workerDataDisks_ = nullptr;};
    inline const vector<CreateClusterRequestWorkerDataDisks> & workerDataDisks() const { DARABONBA_PTR_GET_CONST(workerDataDisks_, vector<CreateClusterRequestWorkerDataDisks>) };
    inline vector<CreateClusterRequestWorkerDataDisks> workerDataDisks() { DARABONBA_PTR_GET(workerDataDisks_, vector<CreateClusterRequestWorkerDataDisks>) };
    inline CreateClusterRequest& setWorkerDataDisks(const vector<CreateClusterRequestWorkerDataDisks> & workerDataDisks) { DARABONBA_PTR_SET_VALUE(workerDataDisks_, workerDataDisks) };
    inline CreateClusterRequest& setWorkerDataDisks(vector<CreateClusterRequestWorkerDataDisks> && workerDataDisks) { DARABONBA_PTR_SET_RVALUE(workerDataDisks_, workerDataDisks) };


    // workerInstanceChargeType Field Functions 
    bool hasWorkerInstanceChargeType() const { return this->workerInstanceChargeType_ != nullptr;};
    void deleteWorkerInstanceChargeType() { this->workerInstanceChargeType_ = nullptr;};
    inline string workerInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(workerInstanceChargeType_, "") };
    inline CreateClusterRequest& setWorkerInstanceChargeType(string workerInstanceChargeType) { DARABONBA_PTR_SET_VALUE(workerInstanceChargeType_, workerInstanceChargeType) };


    // workerInstanceTypes Field Functions 
    bool hasWorkerInstanceTypes() const { return this->workerInstanceTypes_ != nullptr;};
    void deleteWorkerInstanceTypes() { this->workerInstanceTypes_ = nullptr;};
    inline const vector<string> & workerInstanceTypes() const { DARABONBA_PTR_GET_CONST(workerInstanceTypes_, vector<string>) };
    inline vector<string> workerInstanceTypes() { DARABONBA_PTR_GET(workerInstanceTypes_, vector<string>) };
    inline CreateClusterRequest& setWorkerInstanceTypes(const vector<string> & workerInstanceTypes) { DARABONBA_PTR_SET_VALUE(workerInstanceTypes_, workerInstanceTypes) };
    inline CreateClusterRequest& setWorkerInstanceTypes(vector<string> && workerInstanceTypes) { DARABONBA_PTR_SET_RVALUE(workerInstanceTypes_, workerInstanceTypes) };


    // workerPeriod Field Functions 
    bool hasWorkerPeriod() const { return this->workerPeriod_ != nullptr;};
    void deleteWorkerPeriod() { this->workerPeriod_ = nullptr;};
    inline int64_t workerPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerPeriod_, 0L) };
    inline CreateClusterRequest& setWorkerPeriod(int64_t workerPeriod) { DARABONBA_PTR_SET_VALUE(workerPeriod_, workerPeriod) };


    // workerPeriodUnit Field Functions 
    bool hasWorkerPeriodUnit() const { return this->workerPeriodUnit_ != nullptr;};
    void deleteWorkerPeriodUnit() { this->workerPeriodUnit_ = nullptr;};
    inline string workerPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(workerPeriodUnit_, "") };
    inline CreateClusterRequest& setWorkerPeriodUnit(string workerPeriodUnit) { DARABONBA_PTR_SET_VALUE(workerPeriodUnit_, workerPeriodUnit) };


    // workerSystemDiskCategory Field Functions 
    bool hasWorkerSystemDiskCategory() const { return this->workerSystemDiskCategory_ != nullptr;};
    void deleteWorkerSystemDiskCategory() { this->workerSystemDiskCategory_ = nullptr;};
    inline string workerSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskCategory_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskCategory(string workerSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(workerSystemDiskCategory_, workerSystemDiskCategory) };


    // workerSystemDiskPerformanceLevel Field Functions 
    bool hasWorkerSystemDiskPerformanceLevel() const { return this->workerSystemDiskPerformanceLevel_ != nullptr;};
    void deleteWorkerSystemDiskPerformanceLevel() { this->workerSystemDiskPerformanceLevel_ = nullptr;};
    inline string workerSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskPerformanceLevel_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskPerformanceLevel(string workerSystemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(workerSystemDiskPerformanceLevel_, workerSystemDiskPerformanceLevel) };


    // workerSystemDiskSize Field Functions 
    bool hasWorkerSystemDiskSize() const { return this->workerSystemDiskSize_ != nullptr;};
    void deleteWorkerSystemDiskSize() { this->workerSystemDiskSize_ = nullptr;};
    inline int64_t workerSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSize_, 0L) };
    inline CreateClusterRequest& setWorkerSystemDiskSize(int64_t workerSystemDiskSize) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSize_, workerSystemDiskSize) };


    // workerSystemDiskSnapshotPolicyId Field Functions 
    bool hasWorkerSystemDiskSnapshotPolicyId() const { return this->workerSystemDiskSnapshotPolicyId_ != nullptr;};
    void deleteWorkerSystemDiskSnapshotPolicyId() { this->workerSystemDiskSnapshotPolicyId_ = nullptr;};
    inline string workerSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSnapshotPolicyId_, "") };
    inline CreateClusterRequest& setWorkerSystemDiskSnapshotPolicyId(string workerSystemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSnapshotPolicyId_, workerSystemDiskSnapshotPolicyId) };


    // workerVswitchIds Field Functions 
    bool hasWorkerVswitchIds() const { return this->workerVswitchIds_ != nullptr;};
    void deleteWorkerVswitchIds() { this->workerVswitchIds_ = nullptr;};
    inline const vector<string> & workerVswitchIds() const { DARABONBA_PTR_GET_CONST(workerVswitchIds_, vector<string>) };
    inline vector<string> workerVswitchIds() { DARABONBA_PTR_GET(workerVswitchIds_, vector<string>) };
    inline CreateClusterRequest& setWorkerVswitchIds(const vector<string> & workerVswitchIds) { DARABONBA_PTR_SET_VALUE(workerVswitchIds_, workerVswitchIds) };
    inline CreateClusterRequest& setWorkerVswitchIds(vector<string> && workerVswitchIds) { DARABONBA_PTR_SET_RVALUE(workerVswitchIds_, workerVswitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & zoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> zoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline CreateClusterRequest& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline CreateClusterRequest& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // The network access control list (ACL) rule of the SLB instance associated with the API server if the cluster is a registered cluster.
    std::shared_ptr<vector<string>> accessControlList_ = nullptr;
    // The components that you want to install in the cluster. When you create a cluster, you can configure the `addons` parameter to specify the components that you want to install.
    // 
    // **Network plug-in**: required. The Flannel and Terway plug-ins are supported. Select one of the plug-ins for the cluster.
    // 
    // *   If you want to use the Terway component, specify the network plug-in in the [{"name":"flannel","config":""}] format.
    // *   If you want to use the Terway component, specify the value network plug-in in the [{"name": "terway-eniip","Config": ""}] format.
    // 
    // **Volume plug-in**: optional. Only the `Container Storage Interface (CSI)` plug-in is supported.
    // 
    // Specify the `CSI` plug-in in the following format: [{"name":"csi-plugin","config": ""},{"name": "csi-provisioner","config": ""}].
    // 
    // **Simple Log Service component**: optional. We recommend that you enable Simple Log Service. If Simple Log Service is disabled, you cannot use the cluster auditing feature.
    // 
    // *   Specify an existing `Simple Log Service project` in the following format: [{"name": "logtail-ds","config": "{"IngressDashboardEnabled":"true","sls_project_name":"your_sls_project_name"}"}].
    // *   To create a `Simple Log Service project`, specify the component in the following format: [{"name": "logtail-ds","config": "{"IngressDashboardEnabled":"true"}"}].
    // 
    // **Ingress controller**: optional. By default, the `nginx-ingress-controller` component is installed in ACK dedicated clusters.
    // 
    // *   To install nginx-ingress-controller and enable Internet access, specify the Ingress controller in the following format: [{"name":"nginx-ingress-controller","config":"{"IngressSlbNetworkType":"internet"}"}].
    // *   To disable the automatic installation of nginx-ingress-controller, specify the Ingress controller in the following format: [{"name": "nginx-ingress-controller","config": "","disabled": true}].
    // 
    // **Event center**: optional. By default, the event center feature is enabled.
    // 
    // You can use ACK event centers to store and query events and configure alerts. You can use the Logstores that are associated with ACK event centers free of charge within 90 days. For more information, see [Create and use an event center](https://help.aliyun.com/document_detail/150476.html).
    // 
    // To enable the event center feature, specify the event center component in the following format: [{"name":"ack-node-problem-detector","config":"{"sls_project_name":"your_sls_project_name"}"}].
    std::shared_ptr<vector<Addon>> addons_ = nullptr;
    // Service accounts provide identities for pods when pods communicate with the `API server` of the cluster. The `api-audiences` parameter validates `tokens` and is used by the `API server` to check whether the `tokens` of requests are valid. Separate multiple values with commas (,).``
    // 
    // For more information about `service accounts`, see [Enable service account token volume projection](https://help.aliyun.com/document_detail/160384.html).
    std::shared_ptr<string> apiAudiences_ = nullptr;
    std::shared_ptr<CreateClusterRequestAuditLogConfig> auditLogConfig_ = nullptr;
    std::shared_ptr<CreateClusterRequestAutoMode> autoMode_ = nullptr;
    // [**Deprecated**]
    // 
    // Specifies whether to enable auto-renewal. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: disables auto-renewal.
    // 
    // Default value: `false`.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on changes to the parameter behavior of the CreateCluster operation](https://help.aliyun.com/document_detail/2849194.html).
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // [**Deprecated**]
    // 
    // The auto-renewal duration. This parameter takes effect only if charge_type is set to PrePaid and auto_renew is set to true. If you set `period_unit` to Month, the valid values of auto_renew_period are 1, 2, 3, 6, and 12.
    // 
    // Default value: 1.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on changes to the parameter behavior of the CreateCluster operation](https://help.aliyun.com/document_detail/2849194.html).
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // [**Deprecated**]
    // 
    // The billing method of the CLB instance that is used by the API server. Default value: PostPaid. Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription. This billing method is not supported by newly created CLB instances. Existing CLB instances are not affected.
    // 
    // > 
    // 
    // *   This parameter was changed on October 15, 2024. For more information, see [Announcement on changes to the parameter behavior of the CreateCluster operation](https://help.aliyun.com/document_detail/2849194.html).
    // 
    // *   Starting from December 1, 2024, newly created CLB instances no longer support the subscription billing method, and an instance fee will be charged for newly created CLB instances
    // 
    // For more information, see [CLB billing adjustments](https://help.aliyun.com/document_detail/2839797.html).
    std::shared_ptr<string> chargeType_ = nullptr;
    // [Deprecated] When you configure the control plane, use the `security_hardening_os` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `security_hardening_os` parameter of the `scaling_group` field in the `nodepool` section instead.
    std::shared_ptr<bool> cisEnabled_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `cloud_monitor_flags` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `cms_enabled` parameter of the `kubernetes_config` field in the nodepool section instead.
    // 
    // Specifies whether to install the CloudMonitor agent. Valid values:
    // 
    // *   `true`: installs the CloudMonitor agent.
    // *   `false`: does not install the CloudMonitor agent.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> cloudMonitorFlags_ = nullptr;
    // The domain name of the cluster.
    // 
    // The domain name can contain one or more parts that are separated by periods (.). Each part cannot exceed 63 characters in length, and can contain lowercase letters, digits, and hyphens (-). Each part must start and end with a lowercase letter or digit.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // If you set `cluster_type` to `ManagedKubernetes` and specify `profile`, you can further specify the edition of the cluster. Valid values:
    // 
    // *   `ack.pro.small`: Pro Edition.
    // *   `ack.standard`: Basic Edition. If you leave the parameter empty, an ACK Basic cluster is created.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // *   `Kubernetes`: ACK dedicated cluster.
    // *   `ManagedKubernetes`: ACK managed cluster. ACK managed clusters include ACK Basic clusters, ACK Pro clusters, ACK Serverless clusters (Basic Edition and Pro Edition), ACK Edge clusters (Basic Edition and Pro Edition), and ACK Lingjun clusters (Pro Edition).
    // *   `ExternalKubernetes`: registered cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The pod CIDR block. You can specify 10.0.0.0/8, 172.16-31.0.0/12-16, 192.168.0.0/16, or their subnets as the pod CIDR block. The pod CIDR block cannot overlap with the CIDR block of the VPC in which the cluster is deployed and the CIDR blocks of existing clusters in the VPC. You cannot modify the pod CIDR block after you create the cluster.
    // 
    // For more information about how to plan the network of an ACK cluster, see [Plan the network of an ACK cluster](https://help.aliyun.com/document_detail/86500.html).
    // 
    // >  This parameter is required if the cluster uses the Flannel plug-in.
    std::shared_ptr<string> containerCidr_ = nullptr;
    // The control plane configurations of an ACK dedicated cluster.
    std::shared_ptr<CreateClusterRequestControlPlaneConfig> controlPlaneConfig_ = nullptr;
    // The control plane components for which you want to enable log collection.
    // 
    // By default, the logs of kube-apiserver, kube-controller-manager, and kube-scheduler are collected.
    std::shared_ptr<vector<string>> controlplaneLogComponents_ = nullptr;
    // The Simple Log Service project that is used to store the logs of control plane components. You can use an existing project or create one. If you choose to create a Simple Log Service project, the created project is named in the `k8s-log-{ClusterID}` format.
    std::shared_ptr<string> controlplaneLogProject_ = nullptr;
    // The retention period of control plane logs in days.
    std::shared_ptr<string> controlplaneLogTtl_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `cpu_policy` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `cpu_policy` parameter of the `kubernetes_config` field in the `nodepool` section instead.
    // 
    // The CPU management policy of the node. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted enhanced CPU affinity and exclusivity.
    // *   `none`: specifies that the default CPU affinity is used.
    // 
    // Default value: `none`.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The custom subject alternative names (SANs) for the API server certificate to accept requests from specified IP addresses or domain names. Separate multiple IP addresses and domain names with commas (,).
    std::shared_ptr<string> customSan_ = nullptr;
    // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables cluster deletion protection.
    // *   `false`: disables cluster deletion protection.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // [**Deprecated**] By default, the system does not perform a rollback when the cluster fails to be created. You must manually delete the cluster that fails to be created.
    // 
    // Specifies whether to perform a rollback when the cluster fails to be created. Valid values:
    // 
    // *   `true`: performs a rollback when the cluster fails to be created.
    // *   `false`: does not perform a rollback when the cluster fails to be created.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> disableRollback_ = nullptr;
    // Specifies whether to enable the RAM Roles for Service Accounts (RRSA) feature.
    std::shared_ptr<bool> enableRrsa_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used to encrypt the system disk. For more information, see [What is KMS?](https://help.aliyun.com/document_detail/28935.html)
    // 
    // >  The key can be used only in ACK Pro clusters.
    std::shared_ptr<string> encryptionProviderKey_ = nullptr;
    // Specifies whether to enable Internet access for the cluster. You can use an elastic IP address (EIP) to expose the API server. This way, you can access the cluster over the Internet. Valid values:
    // 
    // *   `true`: enables Internet access for the cluster.
    // *   `false`: disables Internet access for the cluster. If you set the value to false, the API server cannot be accessed over the Internet.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> endpointPublicAccess_ = nullptr;
    std::shared_ptr<vector<string>> extraSans_ = nullptr;
    // [**Deprecated**] When you configure a node pool, you cannot add existing nodes to the cluster. If you want to add existing nodes, you must first create a node pool and then call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // Specifies whether to mount a data disk to a node that is created based on an existing ECS instance. Valid values:
    // 
    // *   `true`: stores the data of containers and images on a data disk. The existing data stored in the data disk is lost. Back up the existing data first.
    // *   `false`: does not store the data of containers and images on a data disk.
    // 
    // Default value: `false`.
    // 
    // How data disks are mounted:
    // 
    // *   If an ECS instance has data disks mounted and the file system of the last data disk is not initialized, the system automatically formats the data disk to ext4. Then, the system mounts the data disk to /var/lib/docker and /var/lib/kubelet.
    // *   If no data disk is mounted to the ECS instance, the system does not purchase a new data disk.
    std::shared_ptr<bool> formatDisk_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `image_id` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `image_id` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The custom image for nodes. By default, the image provided by ACK is used. You can select a custom image to replace the default image. For more information, see [Use a custom image to create an ACK cluster](https://help.aliyun.com/document_detail/146647.html).
    std::shared_ptr<string> imageId_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `image_type` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `image_type` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The type of OS distribution that you want to use. To specify the node OS, we recommend that you use this parameter. Valid values:
    // 
    // *   CentOS
    // *   AliyunLinux
    // *   AliyunLinux Qboot
    // *   AliyunLinuxUEFI
    // *   AliyunLinux3
    // *   Windows
    // *   WindowsCore
    // *   AliyunLinux3Arm64
    // *   ContainerOS
    // 
    // Default value: `CentOS`.
    std::shared_ptr<string> imageType_ = nullptr;
    // [**Deprecated**] When you configure a node pool, you cannot add existing nodes to the cluster. If you want to add existing nodes, you must first create a node pool and then call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // The existing ECS instances that are specified as worker nodes for the cluster.
    // 
    // >  This parameter is required if you create worker nodes on existing ECS instances.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    // The IP stack of the cluster.
    std::shared_ptr<string> ipStack_ = nullptr;
    // Specifies whether to create an advanced security group. This parameter takes effect only if `security_group_id` is left empty.
    // 
    // >  To use a basic security group, make sure that the sum of the number of nodes in the cluster and the number of pods that use Terway does not exceed 2,000. Therefore, we recommend that you specify an advanced security group for a cluster that uses Terway.
    // 
    // *   `true`: creates an advanced security group.
    // *   `false`: does not create an advanced security group.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> isEnterpriseSecurityGroup_ = nullptr;
    // [**Deprecated**] When you configure a node pool, you cannot add existing nodes to the cluster. If you want to add existing nodes, you must first create a node pool and then call the [AttachInstancesToNodePool](https://help.aliyun.com/document_detail/2667920.html) operation.
    // 
    // Specifies whether to retain the names of existing ECS instances that are used in the cluster. Valid values:
    // 
    // *   `true`: retains the names.
    // *   `false`: does not retain the names. The system assigns new names.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> keepInstanceName_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `key_pair` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `key_pair` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The name of the key pair. You must configure this parameter or `login_password`.
    std::shared_ptr<string> keyPair_ = nullptr;
    // The Kubernetes version of the cluster. The Kubernetes versions supported by ACK are the same as the Kubernetes versions supported by open source Kubernetes. We recommend that you specify the latest Kubernetes version. If you do not specify this parameter, the latest Kubernetes version is used.
    // 
    // You can create ACK clusters of the latest three Kubernetes versions in the ACK console. If you want to create clusters that run earlier Kubernetes versions, use the ACK API. For more information about the Kubernetes versions supported by ACK, see [Support for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    std::shared_ptr<string> kubernetesVersion_ = nullptr;
    // Specifies the ID of the CLB instance for accessing the API server. If this parameter is specified, the system does not automatically create a CLB instance for the API server.
    // 
    // >  Make sure that the CLB instance does not have other dependencies, such as listeners and backend servers. You cannot specify shared-resource or Internet-facing CLB instances.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // [**Deprecated**] The pay-as-you-go billing method is used by Classic Load Balancer (CLB) instances. This parameter does not take effect.
    // 
    // The specification of the Server Load Balancer (SLB) instance. Valid values:
    // 
    // *   slb.s1.small
    // *   slb.s2.small
    // *   slb.s2.medium
    // *   slb.s3.small
    // *   slb.s3.medium
    // *   slb.s3.large
    // 
    // Default value: `slb.s2.small`.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // Enables Simple Log Service for the cluster. This parameter takes effect only for ACK Serverless clusters. Set the value to `SLS`.
    std::shared_ptr<string> loggingType_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `login_password` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `login_password` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The password for SSH logon. You must set this parameter or `key_pair`. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The configurations of the cluster maintenance window.
    std::shared_ptr<MaintenanceWindow> maintenanceWindow_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `auto-renew` parameter in the `control_plane_config` section instead.
    // 
    // Specifies whether to enable auto-renewal for master nodes. This parameter takes effect only when `master_instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: disables auto-renewal.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> masterAutoRenew_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `auto-renew_period` parameter in the `control_plane_config` section instead.
    // 
    // The auto-renewal duration. This parameter takes effect and is required only when the subscription billing method is selected for master nodes.
    // 
    // Valid values: 1, 2, 3, 6, and 12.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> masterAutoRenewPeriod_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `size` parameter in the `control_plane_config` section instead.
    // 
    // The number of master nodes. Valid values: `3` and `5`.
    // 
    // Default value: `3`.
    std::shared_ptr<int64_t> masterCount_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `instance_charge_type` parameter in the `control_plane_config` section instead.
    // 
    // The billing method of master nodes. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    // 
    // Default value: `PostPaid`.
    std::shared_ptr<string> masterInstanceChargeType_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `instance_types` parameter in the `control_plane_config` section instead.
    // 
    // The instance types of master nodes. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<vector<string>> masterInstanceTypes_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `unit` parameter in the `control_plane_config` section instead.
    // 
    // The subscription duration of master nodes. This parameter takes effect and is required only when `master_instance_charge_type` is set to `PrePaid`.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> masterPeriod_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `period_unit` parameter in the `control_plane_config` section instead.
    // 
    // The billing cycle of the master nodes in the cluster. This parameter is required if master_instance_charge_type is set to `PrePaid`.
    // 
    // Valid value: `Month`, which indicates that master nodes are billed only on a monthly basis.
    std::shared_ptr<string> masterPeriodUnit_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `system_disk_category` parameter in the `control_plane_config` section instead.
    // 
    // The system disk category of master nodes. Valid values:
    // 
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: Enterprise SSD (ESSD).
    // 
    // Default value: `cloud_ssd`. The default value may vary in different zones.
    std::shared_ptr<string> masterSystemDiskCategory_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `system_disk_performance_level` parameter in the `control_plane_config` section instead.
    // 
    // The performance level (PL) of the system disk that you want to use for master nodes. This parameter takes effect only for ESSDs. For more information about the relationship between disk PLs and disk sizes, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> masterSystemDiskPerformanceLevel_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `system_disk_disk` parameter in the `control_plane_config` section instead.
    // 
    // The system disk size of master nodes. Valid values: 40 to 500. Unit: GiB.
    // 
    // Default value: `120`.
    std::shared_ptr<int64_t> masterSystemDiskSize_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `system_disk_snapshot_policy_id` parameter in the `control_plane_config` section instead.
    // 
    // The ID of the automatic snapshot policy that is used by the system disk specified for master nodes.
    std::shared_ptr<string> masterSystemDiskSnapshotPolicyId_ = nullptr;
    // [**Deprecated**] Use the `vswitch_ids` parameter instead.
    // 
    // The IDs of the vSwitches that are specified for master nodes. You can specify up to three vSwitches. We recommend that you specify three vSwitches in different zones to ensure high availability.
    // 
    // The number of vSwitches must be the same as the value of the `master_count` parameter and also the same as the number of vSwitches specified in the `master_vswitch_ids` parameter.
    std::shared_ptr<vector<string>> masterVswitchIds_ = nullptr;
    // The cluster name.
    // 
    // The name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). The name cannot start with a hyphen (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // [Deprecated] Use the `snat_entry` parameter instead.
    std::shared_ptr<bool> natGateway_ = nullptr;
    // The maximum number of IP addresses that can be assigned to each node. This number is determined by the subnet mask of the specified CIDR block. This parameter takes effect only if the cluster uses the Flannel plug-in.
    // 
    // Default value: `26`.
    std::shared_ptr<string> nodeCidrMask_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `node_name_mode` parameter of the `kubernetes_config` field in the `nodepool` section instead.
    // 
    // The custom node name.
    // 
    // A custom node name consists of a prefix, a node IP address, and a suffix.
    // 
    // *   The prefix and suffix can contain multiple parts that are separated by periods (.). Each part can contain lowercase letters, digits, and hyphens (-), and must start and end with a lowercase letter or digit.
    // *   The IP substring length specifies the number of digits to be truncated from the end of the node IP address. The IP substring length ranges from 5 to 12.
    // 
    // For example, if the node IP address is 192.168.0.55, the prefix is aliyun.com, the IP substring length is 5, and the suffix is test, the node name will aliyun.com00055test.
    std::shared_ptr<string> nodeNameMode_ = nullptr;
    // The node port range. Valid values: 30000 to 65535.
    // 
    // Default value: `30000-32767`.
    std::shared_ptr<string> nodePortRange_ = nullptr;
    // The list of node pools.
    std::shared_ptr<vector<Nodepool>> nodepools_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `desired_size` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The number of worker nodes. Valid values: 0 to 100.
    std::shared_ptr<int64_t> numOfNodes_ = nullptr;
    // The automatic O\\&M policy of the cluster.
    std::shared_ptr<CreateClusterRequestOperationPolicy> operationPolicy_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `image_type` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `image_type` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The type of OS. Valid values:
    // 
    // *   Windows
    // *   Linux
    // 
    // Default value: `Linux`.
    std::shared_ptr<string> osType_ = nullptr;
    // [**Deprecated**]
    // 
    // The subscription duration. This parameter takes effect and is required only when you set charge_type to PrePaid.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on changes to the parameter behavior of the CreateCluster operation](https://help.aliyun.com/document_detail/2849194.html).
    std::shared_ptr<int64_t> period_ = nullptr;
    // [**Deprecated**]
    // 
    // The billing cycle. This parameter is required if charge_type is set to PrePaid.
    // 
    // Valid value: Month, which indicates that resources are billed only on a monthly basis.
    // 
    // This parameter was changed on October 15, 2024. For more information, see [Announcement on changes to the parameter behavior of the CreateCluster operation](https://help.aliyun.com/document_detail/2849194.html).
    std::shared_ptr<string> periodUnit_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `platform` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The OS distribution that is used. Valid values:
    // 
    // *   CentOS
    // *   AliyunLinux
    // *   QbootAliyunLinux
    // *   Qboot
    // *   Windows
    // *   WindowsCore
    // 
    // Default value: `CentOS`.
    std::shared_ptr<string> platform_ = nullptr;
    // If you select Terway as the network plug-in, you must allocate vSwitches to pods. For each vSwitch that allocates IP addresses to worker nodes, you must select a vSwitch in the same zone to allocate IP addresses to pods.
    // 
    // >  We recommend that you select pod vSwitches whose subnet masks do not exceed 19 bits in length. The maximum subnet mask length of a pod vSwitch is 25 bits. If you select a pod vSwitch whose subnet mask exceeds 25 bits in length, the IP addresses that can be allocated to pods may be insufficient.
    std::shared_ptr<vector<string>> podVswitchIds_ = nullptr;
    // If you set `cluster_type` to `ManagedKubernetes`, an ACK managed cluster is created. In this case, you can further specify the cluster edition. Valid values:
    // 
    // *   `Default`: ACK managed cluster. ACK managed clusters include ACK Basic clusters and ACK Pro clusters.
    // *   `Edge`: ACK Edge cluster. ACK Edge clusters include ACK Edge Basic clusters and ACK Edge Pro clusters.
    // *   `Serverless`: ACK Serverless cluster. ACK Serverless clusters include ACK Serverless Basic clusters and ACK Serverless Pro clusters.
    // *   `Lingjun`: ACK Lingjun Pro cluster.
    std::shared_ptr<string> profile_ = nullptr;
    // The kube-proxy mode. Valid values:
    // 
    // *   `iptables`: a mature and stable mode that uses iptables rules to conduct service discovery and load balancing. The performance of this mode is limited by the size of the cluster. This mode is suitable for clusters that run a small number of Services.
    // *   `ipvs`: a mode that provides high performance and uses IP Virtual Server (IPVS) to conduct service discovery and load balancing. This mode is suitable for clusters that run a large number of Services. We recommend that you use this mode in scenarios that require high-performance load balancing.
    // 
    // Default value: `ipvs`.
    std::shared_ptr<string> proxyMode_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `rds_instances` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The ApsaraDB RDS instances. The pod CIDR block and node CIDR block are added to the whitelists of the ApsaraDB RDS instances. We recommend that you add the pod CIDR block and node CIDR block to the whitelists of the ApsaraDB RDS instances in the ApsaraDB RDS console. If the RDS instances are not in the Running state, new nodes cannot be added to the cluster.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    // The ID of the region in which the cluster is deployed. For more information about the regions supported by ACK, see [Regions supported by ACK](https://help.aliyun.com/document_detail/216938.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs. You can use resource groups to isolate clusters.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<CreateClusterRequestRrsaConfig> rrsaConfig_ = nullptr;
    // The container runtime. The default container runtime is Docker. containerd and Sandboxed-Container are also supported.
    // 
    // For more information about how to select a proper container runtime, see [Comparison among Docker, containerd, and Sandboxed-Container](https://help.aliyun.com/document_detail/160313.html).
    std::shared_ptr<Runtime> runtime_ = nullptr;
    // The ID of an existing security group. You must specify this parameter or `is_enterprise_security_group`. Cluster nodes are automatically added to the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `security_hardening_os` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `security_hardening_os` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // Specifies whether to enable Alibaba Cloud Linux Security Hardening. Valid values:
    // 
    // *   `true`: enables Alibaba Cloud Linux Security Hardening.
    // *   `false`: disables Alibaba Cloud Linux Security Hardening.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // Service accounts provide identities for pods when pods communicate with the `API server` of the cluster. `service-account-issuer` specifies the issuer of the `serviceaccount token`, which is specified by using the `iss` field in the `token payload`.
    // 
    // For more information about `ServiceAccount`, see [Enable service account token volume projection](https://help.aliyun.com/document_detail/160384.html).
    std::shared_ptr<string> serviceAccountIssuer_ = nullptr;
    // The Service CIDR block. Valid values: 10.0.0.0/16-24, 172.16-31.0.0/16-24, and 192.168.0.0/16-24. The Service CIDR block cannot overlap with the VPC CIDR block (10.1.0.0/21) or the CIDR blocks of existing clusters in the VPC. You cannot modify the Service CIDR block after the cluster is created.
    // 
    // By default, the Service CIDR block is set to 172.19.0.0/20.
    std::shared_ptr<string> serviceCidr_ = nullptr;
    // The methods for implementing service discovery in `ACK Serverless` clusters.
    // 
    // *   `CoreDNS`: a standard service discovery plug-in that is provided by open source Kubernetes. To use DNS resolution, you must provision pods. By default, two elastic container instances are used. The specification of each instance is 0.25 vCores and 512 MiB of memory.
    // *   `PrivateZone`: a DNS resolution service provided by Alibaba Cloud. You must activate Alibaba Cloud DNS PrivateZone before you can use it for service discovery.
    // 
    // By default, this parameter is not specified.
    std::shared_ptr<vector<string>> serviceDiscoveryTypes_ = nullptr;
    // Specifies whether to configure SNAT rules for the VPC in which your cluster is deployed. Valid values:
    // 
    // *   `true`: automatically creates a NAT gateway and configures SNAT rules. Set the value to `true` if nodes and applications in the cluster need to access the Internet.
    // *   `false`: does not create a NAT gateway or configure SNAT rules. In this case, nodes and applications in the cluster cannot access the Internet.
    // 
    // >  If this feature is disabled when you create the cluster, you can also manually enable this feature after you create the cluster. For more information, see [Enable an existing ACK cluster to access the Internet](https://help.aliyun.com/document_detail/178480.html).
    // 
    // Default value: `true`.
    std::shared_ptr<bool> snatEntry_ = nullptr;
    // [**Deprecated**] When you configure the control plane, use the `soc_enabled` parameter in the `control_plane_config` section instead. When you configure a node pool, use the `soc_enabled` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // Specifies whether to enable Multi-Level Protection Scheme (MLPS) security hardening. For more information, see [ACK security hardening based on MLPS](https://help.aliyun.com/document_detail/196148.html).
    // 
    // Valid values:
    // 
    // *   `true`: enables MLPS security hardening.
    // *   `false`: disables MLPS security hardening.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // Specifies whether to enable SSH logon. If this parameter is set to true, you can log on to master nodes in an ACK dedicated cluster over the Internet. This parameter does not take effect for ACK managed clusters. Valid values:
    // 
    // *   `true`: enables SSH logon.
    // *   `false`: disables SSH logon.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> sshFlags_ = nullptr;
    // The labels that you want to add to nodes. You must add labels based on the following rules:
    // 
    // *   A label is a case-sensitive key-value pair. You can add up to 20 labels.
    // *   When you add a label, you must specify a unique key, but you can leave the value empty. A key cannot exceed 64 characters in length, and a value cannot exceed 128 characters in length. Keys and values cannot start with aliyun, acs:, https://, or http://. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `taints` parameter of the `kubernetes_config` field in the `nodepool` section instead.
    // 
    // The taints that you want to add to nodes. Taints can be used together with tolerations to avoid scheduling pods to specific nodes. For more information, see [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/).
    std::shared_ptr<vector<Taint>> taints_ = nullptr;
    // [**Deprecated**] By default, the system does not perform a rollback when the cluster fails to be created. You must manually delete the cluster that fails to be created.
    // 
    // Specifies the timeout period of cluster creation. Unit: minutes.
    // 
    // Default value: `60`.
    std::shared_ptr<int64_t> timeoutMins_ = nullptr;
    // The time zone of the cluster.
    std::shared_ptr<string> timezone_ = nullptr;
    // The custom Certificate Authority (CA) certificate used by the cluster.
    std::shared_ptr<string> userCa_ = nullptr;
    // The user data of nodes.
    std::shared_ptr<string> userData_ = nullptr;
    // The virtual private cloud (VPC) in which you want to deploy the cluster. This parameter is required.
    std::shared_ptr<string> vpcid_ = nullptr;
    // The vSwitches for nodes in the cluster. This parameter is required if you create an ACK managed cluster that does not contain nodes.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `auto_renew` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // Specifies whether to enable auto-renewal for worker nodes. This parameter takes effect and is required only when `worker_instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: disables auto-renewal.
    // 
    // Default value: `true`.
    std::shared_ptr<bool> workerAutoRenew_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `auto_renew_period` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The auto-renewal duration of worker nodes. This parameter takes effect and is required only if the subscription billing method is selected for worker nodes.
    // 
    // Valid values: 1, 2, 3, 6, and 12.
    std::shared_ptr<int64_t> workerAutoRenewPeriod_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `data_disks` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The configurations of the data disks that you want to mount to worker nodes. The configurations include the disk category and disk size.
    std::shared_ptr<vector<CreateClusterRequestWorkerDataDisks>> workerDataDisks_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `instance_charge_type` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The billing method of worker nodes. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    // 
    // Default value: PostPaid.
    std::shared_ptr<string> workerInstanceChargeType_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `instance_types` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The instance configurations of worker nodes.
    std::shared_ptr<vector<string>> workerInstanceTypes_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `period` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The subscription duration of worker nodes. This parameter takes effect and is required only when `worker_instance_charge_type` is set to `PrePaid`.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> workerPeriod_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `period_unit` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The billing cycle of worker nodes. This parameter is required if worker_instance_charge_type is set to `PrePaid`.
    // 
    // Valid value: `Month`, which indicates that worker nodes are billed only on a monthly basis.
    std::shared_ptr<string> workerPeriodUnit_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `system_disk_category` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The system disk category of worker nodes. For more information, see [Elastic Block Storage devices](https://help.aliyun.com/document_detail/63136.html).
    // 
    // Valid values:
    // 
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // 
    // Default value: `cloud_ssd`.
    std::shared_ptr<string> workerSystemDiskCategory_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `system_disk_performance_level` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // If the system disk is an ESSD, you can specify the PL of the ESSD. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
    // 
    // Valid values:
    // 
    // *   PL0
    // *   PL1
    // *   PL2
    // *   PL3
    std::shared_ptr<string> workerSystemDiskPerformanceLevel_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `system_disk_size` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The system disk size of worker nodes. Unit: GiB.
    // 
    // Valid values: 40 to 500.
    // 
    // The value of this parameter must be at least 40 and greater than or equal to the image size.
    // 
    // Default value: `120`.
    std::shared_ptr<int64_t> workerSystemDiskSize_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `system_disk_snapshot_policy_id` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The ID of the automatic snapshot policy that is used by the system disk specified for worker nodes.
    std::shared_ptr<string> workerSystemDiskSnapshotPolicyId_ = nullptr;
    // [**Deprecated**] When you configure a node pool, use the `vswitch_ids` parameter of the `scaling_group` field in the `nodepool` section instead.
    // 
    // The vSwitches for worker nodes. Each worker node is allocated a vSwitch.
    // 
    // `worker_vswitch_ids` is optional, but `vswitch_ids` is required if you create an ACK managed cluster that does not contain nodes.
    std::shared_ptr<vector<string>> workerVswitchIds_ = nullptr;
    // [Deprecated] Use the `zone_ids` parameter instead.
    // 
    // The ID of the zone to which the cluster belongs. This parameter is specific to ACK Serverless clusters.
    // 
    // When you create an ACK managed cluster, you must set the `zone_id` parameter if `vpc_id` and `vswitch_ids` are not specified. This way, the system automatically creates a VPC in the specified zone. This parameter is invalid if you specify the `vpc_id` and `vswitch_ids` parameters.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The IDs of the zone in which the cluster is deployed. This parameter is specific to ACK managed clusters.
    // 
    // When you create an ACK managed cluster, you must set the `zone_id` parameter if `vpc_id` and `vswitch_ids` are not specified. This way, the system automatically creates a VPC in the specified zone. This parameter is invalid if you specify the `vpc_id` and `vswitch_ids` parameters.
    std::shared_ptr<vector<string>> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
