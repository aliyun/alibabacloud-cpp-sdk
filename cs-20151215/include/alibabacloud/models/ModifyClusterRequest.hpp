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
      // Specifies whether to enable system event logging.
      // 
      // - true: Enables system event logging.
      // 
      // - false: Disables system event logging.
      shared_ptr<bool> enabled_ {};
      // The LogProject name for system event logging.
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
        // The frequency of automatic cluster upgrades. For more information, see [Upgrade frequency](https://help.aliyun.com/document_detail/2712866.html).
        // 
        // Valid values:
        // 
        // - patch: Latest patch version.
        // 
        // - stable: Second latest minor version.
        // 
        // - rapid: Latest minor version.
        shared_ptr<string> channel_ {};
        // Specifies whether to enable automatic cluster upgrades.
        // 
        // - true: Enables automatic upgrades.
        // 
        // - false: Disables automatic upgrades.
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
      // Automatic cluster upgrade.
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
        // The VPCs where cluster internal domain name resolution takes effect.
        shared_ptr<vector<string>> bindVpcs_ {};
        // Specifies whether to enable cluster internal domain name access. Valid values:
        // 
        // - true: Enables cluster internal domain name access. Node-side components (kubelet, kube-proxy) access the API server through the cluster internal domain name.
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
      // Internal domain name configuration for the cluster. This feature is available for ACK managed clusters. Cluster internal domain names allow node-side system components such as kubelet and kube-proxy to access the API server. If this feature is disabled, node-side system components access the API server through the CLB IP address.
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
      // Specifies whether to enable auto-renewal for control plane node instances. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
      // 
      // - `true`: Enables auto-renewal.
      // 
      // - `false`: Disables auto-renewal.
      // 
      // Default value: `false`.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal duration for each renewal of control plane node instances.
      // 
      // Valid values: {1, 2, 3, 6, 12}. Unit: months.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // The billing method for control plane node instances. Valid values:
      // 
      // - `PrePaid`: Subscription.
      // 
      // - `PostPaid`: Pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      shared_ptr<string> chargeType_ {};
      // Specifies whether to install the CloudMonitor agent on control plane nodes. Valid values:
      // 
      // - `true`: Installs the CloudMonitor agent.
      // 
      // - `false`: Does not install the CloudMonitor agent.
      shared_ptr<bool> cloudMonitorFlags_ {};
      // The CPU management policy for nodes. Clusters of version 1.12.6 or later support the following policies:
      // 
      // - `static`: Enhances CPU affinity and exclusivity for pods with specific resource characteristics on nodes.
      // 
      // - `none`: Uses the default CPU affinity scheme.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // The deployment set ID.
      shared_ptr<string> deploymentsetId_ {};
      // The custom image ID. Specify this parameter when you use a custom image.
      shared_ptr<string> imageId_ {};
      // The operating system image type. Valid values:
      // 
      // - `AliyunLinux3`: Alinux3 image.
      // 
      // - `Custom`: Custom image.
      shared_ptr<string> imageType_ {};
      // The instance types. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<vector<string>> instanceTypes_ {};
      // The key pair name. Specify either this parameter or `login_password`.
      shared_ptr<string> keyPair_ {};
      // The SSH logon password. Specify either this parameter or `key_pair`. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. To use password-based logon, specify this parameter during scale-out.
      shared_ptr<string> loginPassword_ {};
      // Valid port range: [30000,65535].
      // 
      // Default value: 30000-32767.
      shared_ptr<string> nodePortRange_ {};
      // The subscription duration for control plane node instances. This parameter is required and takes effect only when `charge_type` is set to `PrePaid`.
      // 
      // When `period_unit=Month`, valid values are {1, 2, 3, 6, 12, 24, 36, 48, 60}.
      shared_ptr<int64_t> period_ {};
      // The billing cycle for control plane node instances. This parameter takes effect only when `charge_type` is set to `PrePaid`.
      // 
      // `Month`: Billing by month. Only monthly billing is supported.
      shared_ptr<string> periodUnit_ {};
      // The container runtime. Valid values:
      // 
      // - `containerd`: Recommended. Supported by all cluster versions.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // Alibaba Cloud OS security hardening. Valid values:
      // 
      // - `true`: Enables Alibaba Cloud OS security hardening.
      // 
      // - `false`: Disables Alibaba Cloud OS security hardening.
      // 
      // Default value: `false`.
      shared_ptr<bool> securityHardeningOs_ {};
      // The number of control plane nodes. To scale out the control plane of a dedicated cluster, set this parameter to the target number of control plane nodes, which must be greater than the current number.
      shared_ptr<int64_t> size_ {};
      // MLPS 2.0 security hardening. For more information, see [Use MLPS 2.0 security hardening for ACK](https://help.aliyun.com/document_detail/196148.html).
      // 
      // Valid values:
      // 
      // - `true`: Enables MLPS 2.0 security hardening.
      // 
      // - `false`: Disables MLPS 2.0 security hardening.
      // 
      // Default value: `false`.
      shared_ptr<bool> socEnabled_ {};
      // Specifies whether to enable performance burst for node system disks. Valid values:
      // 
      // - `true`: Enables performance burst.
      // 
      // - `false`: Disables performance burst.
      // 
      // You can set this parameter only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The system disk category for nodes. Valid values:
      // 
      // - `cloud_efficiency`: Ultra disk.
      // 
      // - `cloud_ssd`: Standard SSD.
      // 
      // - `cloud_essd`: ESSD.
      // 
      // - `cloud_auto`: ESSD AutoPL.
      // 
      // - `cloud_essd_entry`: ESSD Entry.
      shared_ptr<string> systemDiskCategory_ {};
      // The performance level of node system disks. This parameter applies only to ESSDs. The performance level depends on the disk size. For more information, see [ESSD](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The provisioned read/write IOPS for node system disks. Valid values: 0 to min{50,000, 1000 × capacity - baseline performance}. Baseline performance = min{1,800 + 50 × capacity, 50,000}.
      // 
      // You can set this parameter only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The system disk size for nodes. Valid values: [40,500]. Unit: GiB.
      shared_ptr<int64_t> systemDiskSize_ {};
      // The automatic snapshot policy ID for node system disks.
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
      // Specifies whether to overwrite or append the SAN configuration. Valid values:
      // 
      // - overwrite: Overwrites the existing configuration.
      // 
      // - append: Appends to the existing configuration.
      shared_ptr<string> action_ {};
      // The list of SANs.
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
    // The access control list for the API server SLB of registered clusters.
    shared_ptr<vector<string>> accessControlList_ {};
    // This parameter adds custom IP addresses or domain names to the SAN field of the API server certificate to control client access.
    // 
    // Only managed clusters support this parameter.
    shared_ptr<ModifyClusterRequest::ApiServerCustomCertSans> apiServerCustomCertSans_ {};
    // Specifies whether to bind an EIP to the cluster for public network access to the API server. Valid values:
    // 
    // - `true`: Binds an EIP to the cluster.
    // 
    // - `false`: Does not bind an EIP to the cluster.
    shared_ptr<bool> apiServerEip_ {};
    // The EIP instance ID bound to the cluster API server. This parameter takes effect only when `api_server_eip` is set to `true`.
    shared_ptr<string> apiServerEipId_ {};
    // The custom cluster name. The name can contain digits, letters, Chinese characters, and hyphens (-). It must be 1 to 63 characters in length and cannot start with a hyphen (-).
    shared_ptr<string> clusterName_ {};
    // The cluster specification when you set `cluster_type` to `ManagedKubernetes` and configure `profile`. Valid values:
    // 
    // - `ack.pro.small`: Pro
    // 
    // - `ack.pro.xlarge`: Pro XL
    // 
    // - `ack.pro.2xlarge`: Pro 2XL
    // 
    // - `ack.pro.4xlarge`: Pro 4XL (requires approval from customer service to enable)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers provided by <props="china">[ACK Pro provisioned control plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro provisioned control plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). These tiers pre-allocate and dedicate control plane resources to ensure consistent high performance for API concurrency and pod scheduling. They are suitable for AI training and inference, ultra-large-scale clusters, and mission-critical workloads.
    // 
    // For cluster management fees for Pro and provisioned control plane clusters, see <props="china">[Cluster management fees](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster management fees](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // Control plane configuration for dedicated clusters.
    shared_ptr<ModifyClusterRequest::ControlPlaneConfig> controlPlaneConfig_ {};
    // Cluster connection configuration.
    shared_ptr<ModifyClusterRequest::ControlPlaneEndpointsConfig> controlPlaneEndpointsConfig_ {};
    // Enables or disables cluster deletion protection to prevent accidental cluster deletion from the console or using APIs. Valid values:
    // 
    // - `true`: Enables cluster deletion protection. You cannot delete the cluster from the console or using APIs.
    // 
    // - `false`: Disables cluster deletion protection. You can delete the cluster from the console or using APIs.
    // 
    // Default value: `false`.
    shared_ptr<bool> deletionProtection_ {};
    // Enables or disables the RRSA feature. Only managed clusters support this parameter. Valid values:
    // 
    // - `true`: Enables RRSA.
    // 
    // - `false`: Disables RRSA.
    shared_ptr<bool> enableRrsa_ {};
    // Specifies whether to rebind the cluster test domain name. Valid values:
    // 
    // - `true`: Rebinds the cluster test domain name.
    // 
    // - `false`: Does not rebind the cluster test domain name.
    // 
    // Default value: `false`.
    shared_ptr<bool> ingressDomainRebinding_ {};
    // The SLB instance ID of the cluster to be modified.
    shared_ptr<string> ingressLoadbalancerId_ {};
    // Enables or disables instance deletion protection to prevent accidental release of nodes from the console or using APIs. Valid values:
    // 
    // - `true`: Prevents accidental node deletion from the console or using APIs.
    // 
    // - `false`: Allows accidental node deletion from the console or using APIs.
    // 
    // Default value: `false`.
    shared_ptr<bool> instanceDeletionProtection_ {};
    // The maintenance window of the cluster. This feature is available only for ACK managed clusters Pro.
    shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
    // Automatic O\\&M policy for the cluster.
    shared_ptr<ModifyClusterRequest::OperationPolicy> operationPolicy_ {};
    // The resource group ID of the cluster.
    shared_ptr<string> resourceGroupId_ {};
    // The security group ID for the control plane.
    // 
    // - If you configure blocking rules in the security group, ensure that the security group rules allow the protocols and ports required by the cluster. For recommended security group rules, see [Configure and manage cluster security groups](https://help.aliyun.com/document_detail/353191.html).
    // 
    // - For non-dedicated ACK clusters, the control plane and installed managed components (such as terway-controlplane) restart briefly during the update. Perform this operation during off-peak hours. After you change the control plane security group, the ENIs used by the control plane and managed components are automatically added to the new security group.
    // 
    // - For ACK dedicated clusters, newly scaled-out master nodes automatically apply the new control plane security group. Existing control plane nodes are unaffected.
    shared_ptr<string> securityGroupId_ {};
    // System event logging configuration.
    shared_ptr<ModifyClusterRequest::SystemEventsLogging> systemEventsLogging_ {};
    // The cluster time zone. For more information, see [Supported time zones](https://help.aliyun.com/document_detail/354879.html).
    // 
    // - After you change the time zone, cluster inspection configurations use the new time zone.
    // 
    // - For managed clusters, the control plane and installed managed components (such as terway-controlplane) restart briefly during the update. Perform this operation during off-peak hours. Newly scaled-out nodes automatically apply the new time zone. Existing nodes are unaffected. You can reset nodes in node pools to apply the new time zone to existing nodes.
    // 
    // - For dedicated clusters, newly scaled-out nodes (including control plane nodes) automatically apply the new time zone. Existing nodes (including control plane nodes) are unaffected. You can reset nodes in node pools to apply the new time zone to existing nodes. For control plane nodes, scale out and then scale in to apply the new time zone to all control plane nodes.
    shared_ptr<string> timezone_ {};
    // The vSwitches for the cluster control plane. For dedicated clusters, the change applies only to newly scaled-out control plane nodes. When you change the control plane vSwitches for managed clusters, note the following:
    // 
    // - This parameter performs an overwrite update. You must specify the complete target vSwitch list.
    // 
    // - Control plane components restart briefly during the update. Proceed with caution.
    // 
    // - Ensure that all security groups (including those for the control plane, all node pools, and container networking) allow inbound and outbound traffic for the IP CIDR blocks of the new vSwitches. Otherwise, nodes and containers cannot connect to the API server.
    // 
    // - If the new control plane vSwitches have ACL rules configured, ensure that these rules allow communication between the vSwitches and the IP CIDR blocks of cluster nodes and container networks.
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
