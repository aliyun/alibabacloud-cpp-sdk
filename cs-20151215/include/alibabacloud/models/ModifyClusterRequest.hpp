// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MaintenanceWindow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_TO_JSON(api_server_custom_cert_sans, apiServerCustomCertSans_);
      DARABONBA_PTR_TO_JSON(api_server_eip, apiServerEip_);
      DARABONBA_PTR_TO_JSON(api_server_eip_id, apiServerEipId_);
      DARABONBA_PTR_TO_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_TO_JSON(ingress_domain_rebinding, ingressDomainRebinding_);
      DARABONBA_PTR_TO_JSON(ingress_loadbalancer_id, ingressLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(instance_deletion_protection, instanceDeletionProtection_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(system_events_logging, systemEventsLogging_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_FROM_JSON(api_server_custom_cert_sans, apiServerCustomCertSans_);
      DARABONBA_PTR_FROM_JSON(api_server_eip, apiServerEip_);
      DARABONBA_PTR_FROM_JSON(api_server_eip_id, apiServerEipId_);
      DARABONBA_PTR_FROM_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_FROM_JSON(ingress_domain_rebinding, ingressDomainRebinding_);
      DARABONBA_PTR_FROM_JSON(ingress_loadbalancer_id, ingressLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(instance_deletion_protection, instanceDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(system_events_logging, systemEventsLogging_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
    };
    ModifyClusterRequest() = default ;
    ModifyClusterRequest(const ModifyClusterRequest &) = default ;
    ModifyClusterRequest(ModifyClusterRequest &&) = default ;
    ModifyClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequest() = default ;
    ModifyClusterRequest& operator=(const ModifyClusterRequest &) = default ;
    ModifyClusterRequest& operator=(ModifyClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemEventsLogging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemEventsLogging& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(logging_project, loggingProject_);
      };
      friend void from_json(const Darabonba::Json& j, SystemEventsLogging& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(logging_project, loggingProject_);
      };
      SystemEventsLogging() = default ;
      SystemEventsLogging(const SystemEventsLogging &) = default ;
      SystemEventsLogging(SystemEventsLogging &&) = default ;
      SystemEventsLogging(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemEventsLogging() = default ;
      SystemEventsLogging& operator=(const SystemEventsLogging &) = default ;
      SystemEventsLogging& operator=(SystemEventsLogging &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->loggingProject_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline SystemEventsLogging& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // loggingProject Field Functions 
      bool hasLoggingProject() const { return this->loggingProject_ != nullptr;};
      void deleteLoggingProject() { this->loggingProject_ = nullptr;};
      inline string getLoggingProject() const { DARABONBA_PTR_GET_DEFAULT(loggingProject_, "") };
      inline SystemEventsLogging& setLoggingProject(string loggingProject) { DARABONBA_PTR_SET_VALUE(loggingProject_, loggingProject) };


    protected:
      // Whether to enable system event storage.
      // 
      // 
      // - true: Enable system event storage.
      // 
      // - false: Disable system event storage.
      shared_ptr<bool> enabled_ {};
      // LogProject name for system event storage.
      shared_ptr<string> loggingProject_ {};
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
        // Cluster automatic upgrade frequency. For more information, see [Upgrade Frequency](https://help.aliyun.com/document_detail/2712866.html).
        // 
        // Valid values:
        // - patch: Latest patch version.
        // - stable: Second latest minor version.
        // - rapid: Latest minor version.
        shared_ptr<string> channel_ {};
        // Whether to enable cluster automatic upgrade.
        // 
        // - true: Enable automatic upgrade.
        // 
        // - false: Disable automatic upgrade.
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
      // Cluster automatic upgrade.
      shared_ptr<OperationPolicy::ClusterAutoUpgrade> clusterAutoUpgrade_ {};
    };

    class ControlPlaneEndpointsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(internal_dns_config, internalDnsConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(internal_dns_config, internalDnsConfig_);
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
      class InternalDnsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternalDnsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(bind_vpcs, bindVpcs_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, InternalDnsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(bind_vpcs, bindVpcs_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
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
        virtual bool empty() const override { return this->bindVpcs_ == nullptr
        && this->enabled_ == nullptr; };
        // bindVpcs Field Functions 
        bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
        void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
        inline const vector<string> & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, vector<string>) };
        inline vector<string> getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, vector<string>) };
        inline InternalDnsConfig& setBindVpcs(const vector<string> & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
        inline InternalDnsConfig& setBindVpcs(vector<string> && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline InternalDnsConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // VPCs where the cluster internal domain name record resolution takes effect.
        shared_ptr<vector<string>> bindVpcs_ {};
        // Whether to enable cluster internal domain name access. Valid values:
        // - true: Enable cluster internal domain name access. Node-side components (kubelet, kube-proxy) will access the API Server through the cluster internal domain name.
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->internalDnsConfig_ == nullptr; };
      // internalDnsConfig Field Functions 
      bool hasInternalDnsConfig() const { return this->internalDnsConfig_ != nullptr;};
      void deleteInternalDnsConfig() { this->internalDnsConfig_ = nullptr;};
      inline const ControlPlaneEndpointsConfig::InternalDnsConfig & getInternalDnsConfig() const { DARABONBA_PTR_GET_CONST(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig::InternalDnsConfig getInternalDnsConfig() { DARABONBA_PTR_GET(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(const ControlPlaneEndpointsConfig::InternalDnsConfig & internalDnsConfig) { DARABONBA_PTR_SET_VALUE(internalDnsConfig_, internalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(ControlPlaneEndpointsConfig::InternalDnsConfig && internalDnsConfig) { DARABONBA_PTR_SET_RVALUE(internalDnsConfig_, internalDnsConfig) };


    protected:
      // Cluster internal domain name configuration. Applicable to ACK managed clusters. The cluster internal domain name is used by node-side system components such as kubelet and kube-proxy to access the API Server. When the cluster internal domain name access is not enabled, node-side system components access via the CLB IP.
      shared_ptr<ControlPlaneEndpointsConfig::InternalDnsConfig> internalDnsConfig_ {};
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
        && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceTypes_ == nullptr && this->keyPair_ == nullptr && this->loginPassword_ == nullptr
        && this->nodePortRange_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->runtime_ == nullptr && this->securityHardeningOs_ == nullptr
        && this->size_ == nullptr && this->socEnabled_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr
        && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr; };
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
      // Whether to enable automatic renewal for control plane node instances. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
      // 
      // - `true`: Enable automatic renewal.
      // - `false`: Disable automatic renewal.
      // 
      // Default value: `false`.
      shared_ptr<bool> autoRenew_ {};
      // Duration for each automatic renewal of control plane node instances.
      // 
      // Valid values: {1, 2, 3, 6, 12}. Unit: months.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // Control plane node instance billing method. Valid values:
      // 
      // - `PrePaid`: Subscription.
      // - `PostPaid`: Pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      shared_ptr<string> chargeType_ {};
      // Whether to install the Cloud Monitor agent on control plane nodes. Valid values:
      // 
      // - `true`: Install the Cloud Monitor agent.
      // - `false`: Do not install the Cloud Monitor agent.
      shared_ptr<bool> cloudMonitorFlags_ {};
      // Node CPU management policy. When the cluster version is 1.12.6 or later, the following two policies are supported:
      // 
      // - `static`: Allows enhanced CPU affinity and exclusivity for Pods with certain resource characteristics on the node.
      // - `none`: Uses the existing default CPU affinity scheme.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // Deployment set ID.
      shared_ptr<string> deploymentsetId_ {};
      // Custom image ID. Specified when using a custom image.
      shared_ptr<string> imageId_ {};
      // Operating system image type. Valid values:
      // 
      // - `AliyunLinux3`: Alinux3 image.
      // - `Custom`: Custom image.
      shared_ptr<string> imageType_ {};
      // Instance types. For more information, see [Instance Family](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<vector<string>> instanceTypes_ {};
      // Key pair name. Mutually exclusive with `login_password`.
      shared_ptr<string> keyPair_ {};
      // SSH login password. Mutually exclusive with `key_pair`. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. If you want to use password login, specify this parameter during scale-out.
      shared_ptr<string> loginPassword_ {};
      // Node service port range.
      // Available port range: [30000, 65535].
      // 
      // Default value: 30000-32767.
      shared_ptr<string> nodePortRange_ {};
      // Control plane node instance subscription duration. This parameter takes effect and is required only when `charge_type` is set to `PrePaid`.
      // 
      // When `period_unit=Month`, valid values: {1, 2, 3, 6, 12, 24, 36, 48, 60}.
      shared_ptr<int64_t> period_ {};
      // Control plane node instance billing period. This parameter takes effect only when `charge_type` is set to `PrePaid`.
      // 
      // `Month`: Billed on a monthly basis. Currently, only monthly billing is supported.
      shared_ptr<string> periodUnit_ {};
      // Container runtime name. Valid values:
      // 
      // - `containerd`: Recommended. Supported by all cluster versions.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // Alibaba Cloud OS security hardening. Valid values:
      // 
      // - `true`: Enable Alibaba Cloud OS security hardening.
      // - `false`: Disable Alibaba Cloud OS security hardening.
      // 
      // Default value: `false`.
      shared_ptr<bool> securityHardeningOs_ {};
      // Number of control plane nodes. To scale out the dedicated cluster control plane, this parameter specifies the target number of control plane nodes and must be greater than the current number of control plane nodes.
      shared_ptr<int64_t> size_ {};
      // Security hardening for compliance. For more information, see [ACK Security Hardening for Compliance](https://help.aliyun.com/document_detail/196148.html).
      // 
      // Valid values:
      // - `true`: Enable security hardening for compliance.
      // - `false`: Disable security hardening for compliance.
      // 
      // Default value: `false`.
      shared_ptr<bool> socEnabled_ {};
      // Whether to enable burst (performance bursting) for the node system disk. Valid values:
      // - `true`: Enable.
      // - `false`: Disable.
      // 
      // This parameter is supported only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // Node system disk type. Valid values:
      // - `cloud_efficiency`: Ultra disk.
      // - `cloud_ssd`: SSD disk.
      // - `cloud_essd`: ESSD disk.
      // - `cloud_auto`: ESSD AutoPL disk.
      // - `cloud_essd_entry`: ESSD Entry disk.
      shared_ptr<string> systemDiskCategory_ {};
      // Node system disk performance level. Only applicable to ESSD disks. The performance level is related to the disk size. For more information, see [ESSD](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // Provisioned read/write IOPS for the node system disk. Valid values: 0 to min{50,000, 1000*capacity - baseline performance}. Baseline performance = min{1,800 + 50*capacity, 50,000}.
      // 
      // This parameter is supported only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // Node system disk size. Valid values: [40, 500]. Unit: GiB.
      shared_ptr<int64_t> systemDiskSize_ {};
      // Automatic snapshot policy ID for the node system disk.
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
    };

    class ApiServerCustomCertSans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiServerCustomCertSans& obj) { 
        DARABONBA_PTR_TO_JSON(action, action_);
        DARABONBA_PTR_TO_JSON(subject_alternative_names, subjectAlternativeNames_);
      };
      friend void from_json(const Darabonba::Json& j, ApiServerCustomCertSans& obj) { 
        DARABONBA_PTR_FROM_JSON(action, action_);
        DARABONBA_PTR_FROM_JSON(subject_alternative_names, subjectAlternativeNames_);
      };
      ApiServerCustomCertSans() = default ;
      ApiServerCustomCertSans(const ApiServerCustomCertSans &) = default ;
      ApiServerCustomCertSans(ApiServerCustomCertSans &&) = default ;
      ApiServerCustomCertSans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiServerCustomCertSans() = default ;
      ApiServerCustomCertSans& operator=(const ApiServerCustomCertSans &) = default ;
      ApiServerCustomCertSans& operator=(ApiServerCustomCertSans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->subjectAlternativeNames_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ApiServerCustomCertSans& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // subjectAlternativeNames Field Functions 
      bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
      void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
      inline const vector<string> & getSubjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<string>) };
      inline vector<string> getSubjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<string>) };
      inline ApiServerCustomCertSans& setSubjectAlternativeNames(const vector<string> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
      inline ApiServerCustomCertSans& setSubjectAlternativeNames(vector<string> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


    protected:
      // Overwrite or append SAN configuration. Valid values:
      // - overwrite: Overwrite.
      // - append: Append.
      shared_ptr<string> action_ {};
      // SAN list.
      shared_ptr<vector<string>> subjectAlternativeNames_ {};
    };

    virtual bool empty() const override { return this->accessControlList_ == nullptr
        && this->apiServerCustomCertSans_ == nullptr && this->apiServerEip_ == nullptr && this->apiServerEipId_ == nullptr && this->clusterName_ == nullptr && this->clusterSpec_ == nullptr
        && this->controlPlaneConfig_ == nullptr && this->controlPlaneEndpointsConfig_ == nullptr && this->deletionProtection_ == nullptr && this->enableRrsa_ == nullptr && this->ingressDomainRebinding_ == nullptr
        && this->ingressLoadbalancerId_ == nullptr && this->instanceDeletionProtection_ == nullptr && this->maintenanceWindow_ == nullptr && this->operationPolicy_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->systemEventsLogging_ == nullptr && this->timezone_ == nullptr && this->vswitchIds_ == nullptr; };
    // accessControlList Field Functions 
    bool hasAccessControlList() const { return this->accessControlList_ != nullptr;};
    void deleteAccessControlList() { this->accessControlList_ = nullptr;};
    inline const vector<string> & getAccessControlList() const { DARABONBA_PTR_GET_CONST(accessControlList_, vector<string>) };
    inline vector<string> getAccessControlList() { DARABONBA_PTR_GET(accessControlList_, vector<string>) };
    inline ModifyClusterRequest& setAccessControlList(const vector<string> & accessControlList) { DARABONBA_PTR_SET_VALUE(accessControlList_, accessControlList) };
    inline ModifyClusterRequest& setAccessControlList(vector<string> && accessControlList) { DARABONBA_PTR_SET_RVALUE(accessControlList_, accessControlList) };


    // apiServerCustomCertSans Field Functions 
    bool hasApiServerCustomCertSans() const { return this->apiServerCustomCertSans_ != nullptr;};
    void deleteApiServerCustomCertSans() { this->apiServerCustomCertSans_ = nullptr;};
    inline const ModifyClusterRequest::ApiServerCustomCertSans & getApiServerCustomCertSans() const { DARABONBA_PTR_GET_CONST(apiServerCustomCertSans_, ModifyClusterRequest::ApiServerCustomCertSans) };
    inline ModifyClusterRequest::ApiServerCustomCertSans getApiServerCustomCertSans() { DARABONBA_PTR_GET(apiServerCustomCertSans_, ModifyClusterRequest::ApiServerCustomCertSans) };
    inline ModifyClusterRequest& setApiServerCustomCertSans(const ModifyClusterRequest::ApiServerCustomCertSans & apiServerCustomCertSans) { DARABONBA_PTR_SET_VALUE(apiServerCustomCertSans_, apiServerCustomCertSans) };
    inline ModifyClusterRequest& setApiServerCustomCertSans(ModifyClusterRequest::ApiServerCustomCertSans && apiServerCustomCertSans) { DARABONBA_PTR_SET_RVALUE(apiServerCustomCertSans_, apiServerCustomCertSans) };


    // apiServerEip Field Functions 
    bool hasApiServerEip() const { return this->apiServerEip_ != nullptr;};
    void deleteApiServerEip() { this->apiServerEip_ = nullptr;};
    inline bool getApiServerEip() const { DARABONBA_PTR_GET_DEFAULT(apiServerEip_, false) };
    inline ModifyClusterRequest& setApiServerEip(bool apiServerEip) { DARABONBA_PTR_SET_VALUE(apiServerEip_, apiServerEip) };


    // apiServerEipId Field Functions 
    bool hasApiServerEipId() const { return this->apiServerEipId_ != nullptr;};
    void deleteApiServerEipId() { this->apiServerEipId_ = nullptr;};
    inline string getApiServerEipId() const { DARABONBA_PTR_GET_DEFAULT(apiServerEipId_, "") };
    inline ModifyClusterRequest& setApiServerEipId(string apiServerEipId) { DARABONBA_PTR_SET_VALUE(apiServerEipId_, apiServerEipId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline ModifyClusterRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const ModifyClusterRequest::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, ModifyClusterRequest::ControlPlaneConfig) };
    inline ModifyClusterRequest::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, ModifyClusterRequest::ControlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(const ModifyClusterRequest::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(ModifyClusterRequest::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // controlPlaneEndpointsConfig Field Functions 
    bool hasControlPlaneEndpointsConfig() const { return this->controlPlaneEndpointsConfig_ != nullptr;};
    void deleteControlPlaneEndpointsConfig() { this->controlPlaneEndpointsConfig_ = nullptr;};
    inline const ModifyClusterRequest::ControlPlaneEndpointsConfig & getControlPlaneEndpointsConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneEndpointsConfig_, ModifyClusterRequest::ControlPlaneEndpointsConfig) };
    inline ModifyClusterRequest::ControlPlaneEndpointsConfig getControlPlaneEndpointsConfig() { DARABONBA_PTR_GET(controlPlaneEndpointsConfig_, ModifyClusterRequest::ControlPlaneEndpointsConfig) };
    inline ModifyClusterRequest& setControlPlaneEndpointsConfig(const ModifyClusterRequest::ControlPlaneEndpointsConfig & controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };
    inline ModifyClusterRequest& setControlPlaneEndpointsConfig(ModifyClusterRequest::ControlPlaneEndpointsConfig && controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // enableRrsa Field Functions 
    bool hasEnableRrsa() const { return this->enableRrsa_ != nullptr;};
    void deleteEnableRrsa() { this->enableRrsa_ = nullptr;};
    inline bool getEnableRrsa() const { DARABONBA_PTR_GET_DEFAULT(enableRrsa_, false) };
    inline ModifyClusterRequest& setEnableRrsa(bool enableRrsa) { DARABONBA_PTR_SET_VALUE(enableRrsa_, enableRrsa) };


    // ingressDomainRebinding Field Functions 
    bool hasIngressDomainRebinding() const { return this->ingressDomainRebinding_ != nullptr;};
    void deleteIngressDomainRebinding() { this->ingressDomainRebinding_ = nullptr;};
    inline bool getIngressDomainRebinding() const { DARABONBA_PTR_GET_DEFAULT(ingressDomainRebinding_, false) };
    inline ModifyClusterRequest& setIngressDomainRebinding(bool ingressDomainRebinding) { DARABONBA_PTR_SET_VALUE(ingressDomainRebinding_, ingressDomainRebinding) };


    // ingressLoadbalancerId Field Functions 
    bool hasIngressLoadbalancerId() const { return this->ingressLoadbalancerId_ != nullptr;};
    void deleteIngressLoadbalancerId() { this->ingressLoadbalancerId_ = nullptr;};
    inline string getIngressLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(ingressLoadbalancerId_, "") };
    inline ModifyClusterRequest& setIngressLoadbalancerId(string ingressLoadbalancerId) { DARABONBA_PTR_SET_VALUE(ingressLoadbalancerId_, ingressLoadbalancerId) };


    // instanceDeletionProtection Field Functions 
    bool hasInstanceDeletionProtection() const { return this->instanceDeletionProtection_ != nullptr;};
    void deleteInstanceDeletionProtection() { this->instanceDeletionProtection_ = nullptr;};
    inline bool getInstanceDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(instanceDeletionProtection_, false) };
    inline ModifyClusterRequest& setInstanceDeletionProtection(bool instanceDeletionProtection) { DARABONBA_PTR_SET_VALUE(instanceDeletionProtection_, instanceDeletionProtection) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline ModifyClusterRequest& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline ModifyClusterRequest& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const ModifyClusterRequest::OperationPolicy & getOperationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, ModifyClusterRequest::OperationPolicy) };
    inline ModifyClusterRequest::OperationPolicy getOperationPolicy() { DARABONBA_PTR_GET(operationPolicy_, ModifyClusterRequest::OperationPolicy) };
    inline ModifyClusterRequest& setOperationPolicy(const ModifyClusterRequest::OperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline ModifyClusterRequest& setOperationPolicy(ModifyClusterRequest::OperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // systemEventsLogging Field Functions 
    bool hasSystemEventsLogging() const { return this->systemEventsLogging_ != nullptr;};
    void deleteSystemEventsLogging() { this->systemEventsLogging_ = nullptr;};
    inline const ModifyClusterRequest::SystemEventsLogging & getSystemEventsLogging() const { DARABONBA_PTR_GET_CONST(systemEventsLogging_, ModifyClusterRequest::SystemEventsLogging) };
    inline ModifyClusterRequest::SystemEventsLogging getSystemEventsLogging() { DARABONBA_PTR_GET(systemEventsLogging_, ModifyClusterRequest::SystemEventsLogging) };
    inline ModifyClusterRequest& setSystemEventsLogging(const ModifyClusterRequest::SystemEventsLogging & systemEventsLogging) { DARABONBA_PTR_SET_VALUE(systemEventsLogging_, systemEventsLogging) };
    inline ModifyClusterRequest& setSystemEventsLogging(ModifyClusterRequest::SystemEventsLogging && systemEventsLogging) { DARABONBA_PTR_SET_RVALUE(systemEventsLogging_, systemEventsLogging) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ModifyClusterRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline ModifyClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline ModifyClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // Access control list for the registered cluster API Server SLB.
    shared_ptr<vector<string>> accessControlList_ {};
    // Custom API Server certificate SAN (Subject Alternative Name).
    // Used to add custom IPs or domain names to the SAN field of the cluster API Server server certificate for client access control.
    // 
    // Only managed clusters support this parameter.
    shared_ptr<ModifyClusterRequest::ApiServerCustomCertSans> apiServerCustomCertSans_ {};
    // Whether to associate an EIP with the cluster for public access to API Server. Valid values:
    // 
    // - `true`: Associate an EIP with the cluster.
    // - `false`: Do not associate an EIP with the cluster.
    shared_ptr<bool> apiServerEip_ {};
    // The ID of the EIP instance associated with the cluster API Server. This parameter takes effect only when `api_server_eip` is set to `true`.
    shared_ptr<string> apiServerEipId_ {};
    // Custom cluster name. The name can contain digits, Chinese characters, English characters, or hyphens (-), must be 1 to 63 characters in length, and cannot start with a hyphen (-).
    shared_ptr<string> clusterName_ {};
    // When `cluster_type` is set to `ManagedKubernetes` and `profile` is configured, specifies the cluster specification. Valid values:
    // 
    // - `ack.pro.small`: Pro Edition
    // - `ack.pro.xlarge`: Pro XL
    // - `ack.pro.2xlarge`: Pro 2XL
    // - `ack.pro.4xlarge`: Pro 4XL (requires contacting customer service to enable allowlisting)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers provided by <props="china">[ACK Pro Provisioned Control Plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro Provisioned Control Plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). By pre-allocating and fixing control plane resources, it ensures that API concurrency and Pod scheduling capabilities are always at a determined high level, suitable for AI training and inference, ultra-large-scale clusters, and mission-critical workloads.
    // 
    // For cluster management fees for Pro Edition and Provisioned Control Plane editions, see <props="china">[Cluster Management Fees](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster Management Fees](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // Dedicated cluster control plane configuration.
    shared_ptr<ModifyClusterRequest::ControlPlaneConfig> controlPlaneConfig_ {};
    // Cluster connection configuration.
    shared_ptr<ModifyClusterRequest::ControlPlaneEndpointsConfig> controlPlaneEndpointsConfig_ {};
    // Cluster deletion protection, which prevents accidental deletion of the cluster through the console or API. Valid values:
    // 
    // - `true`: Enable cluster deletion protection. The cluster cannot be deleted through the console or API.
    // - `false`: Disable cluster deletion protection. The cluster can be deleted through the console or API.
    // 
    // Default value: `false`.
    shared_ptr<bool> deletionProtection_ {};
    // Enable or disable the RRSA feature (only managed clusters support this parameter). Valid values:
    // 
    // - `true`: Enable.
    // - `false`: Disable.
    shared_ptr<bool> enableRrsa_ {};
    // Rebind the cluster test domain. Valid values:
    // 
    // - `true`: Rebind the cluster test domain.
    // - `false`: Do not rebind the cluster test domain.
    // 
    // Default value: `false`.
    shared_ptr<bool> ingressDomainRebinding_ {};
    // SLB instance ID of the cluster to be modified.
    shared_ptr<string> ingressLoadbalancerId_ {};
    // Instance deletion protection to prevent accidental deletion and release of nodes through the console or API. Valid values:
    // 
    // - `true`: Nodes cannot be accidentally deleted through the console or API.
    // - `false`: Nodes can be deleted through the console or API.
    // 
    // Default value: `false`.
    shared_ptr<bool> instanceDeletionProtection_ {};
    // Cluster maintenance window. This feature only takes effect for ACK Pro managed clusters.
    shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
    // Cluster automatic O&M policy.
    shared_ptr<ModifyClusterRequest::OperationPolicy> operationPolicy_ {};
    // Cluster resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Control plane security group ID.
    // 
    // - If you have configured blocking rules in the security group, ensure that the security group rules allow the protocols and ports required by the cluster. For recommended security group rules, see [Configure and Manage Cluster Security Groups](https://help.aliyun.com/document_detail/353191.html).
    // - For non-ACK dedicated clusters, during the change process, the cluster control plane and installed managed components (such as terway-controlplane) will briefly restart. We recommend performing this operation during off-peak hours. After the control plane security group is changed, the ENIs used by the cluster control plane and installed managed components will be automatically added to the new security group.
    // - For ACK dedicated clusters, after the control plane security group is changed, newly scaled-out Master nodes will automatically use the new control plane security group. Existing control plane nodes are not affected.
    shared_ptr<string> securityGroupId_ {};
    // System event storage configuration.
    shared_ptr<ModifyClusterRequest::SystemEventsLogging> systemEventsLogging_ {};
    // Cluster timezone. See [Supported Timezones](https://help.aliyun.com/document_detail/354879.html).
    // - After changing the timezone, cluster inspection configurations will use the new timezone settings.
    // 
    // - For managed clusters, during the change process, the cluster control plane and installed managed components (such as terway-controlplane) will briefly restart. We recommend performing this operation during off-peak hours. After changing the timezone, newly scaled-out nodes will automatically use the new timezone settings. Existing nodes are not affected. You can use the node pool node reset feature to apply the new settings to existing nodes.
    // 
    // - For dedicated clusters, after changing the timezone, newly scaled-out nodes (including control plane nodes) will automatically use the new timezone settings. Existing nodes (including control plane nodes) are not affected. You can use the node pool node reset feature to apply the new settings to existing nodes. For control plane nodes, you need to scale out first and then scale in to apply the settings to all control plane nodes.
    shared_ptr<string> timezone_ {};
    // Cluster control plane vSwitches. For dedicated clusters, this takes effect on newly scaled-out control plane nodes. When modifying control plane vSwitches for managed clusters, note the following:
    // - This parameter performs a full overwrite update. You must specify the complete list of target vSwitches.
    // - During the change, control plane components will briefly restart. Proceed with caution.
    // - Ensure that all security groups of the cluster (including the control plane security group, all node pool security groups, and container network security groups) allow inbound and outbound traffic for the IP ranges of the new vSwitches to prevent nodes and containers from being unable to connect to the API Server.
    // - If the new control plane vSwitches have ACL rules configured, ensure that the ACL rules allow communication with the cluster nodes, container network, and other IP ranges.
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
