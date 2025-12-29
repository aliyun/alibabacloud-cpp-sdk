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
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
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
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
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
      // Specifies whether to enable system event storage.
      shared_ptr<bool> enabled_ {};
      // The name of the Simple Log Service project that stores system events.
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
        // The frequency of auto cluster update. For more information, see [Update frequency](https://help.aliyun.com/document_detail/2712866.html).
        // 
        // Valid values:
        // 
        // *   patch: the latest patch version.
        // *   stables: the second-latest minor version.
        // *   rapid: the latest minor version.
        shared_ptr<string> channel_ {};
        // Specifies whether to enable automatic update.
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
      // The configurations of automatic update.
      shared_ptr<OperationPolicy::ClusterAutoUpgrade> clusterAutoUpgrade_ {};
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
      // Specifies whether to enable auto-renewal for control plane nodes. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
      // 
      // *   `true`: enables auto-renewal.
      // *   `false`: disables auto-renewal.
      // 
      // Default value: `false`
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period of control plane nodes. Valid values: 1, 2, 3, 6, and 12.
      // 
      // Default value: 1.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // The billing method of control plane nodes. Valid values:
      // 
      // *   `PrePaid`: subscription.
      // *   `PostPaid`: pay-as-you-go.
      // 
      // Default value: `PostPaid`.
      shared_ptr<string> chargeType_ {};
      // Specifies whether to install the CloudMonitor agent. Valid values:
      // 
      // *   `true`: installs the CloudMonitor agent.
      // *   `false`: does not install the CloudMonitor agent.
      shared_ptr<bool> cloudMonitorFlags_ {};
      // The CPU management policy of nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
      // 
      // *   `static`: allows pods with specific resource characteristics on the node to be granted with enhanced CPU affinity and exclusivity.
      // *   `none`: specifies that the default CPU affinity is used.
      // 
      // Default value: `none`.
      shared_ptr<string> cpuPolicy_ {};
      // The ID of the deployment set.
      shared_ptr<string> deploymentsetId_ {};
      // The custom image ID. You must configure this parameter if you use a custom image.
      shared_ptr<string> imageId_ {};
      // The type of the OS image. Valid values:
      // 
      // *   `AliyunLinux3`: Alibaba Cloud Linux 3.
      // *   `Custom`: the custom image.
      shared_ptr<string> imageType_ {};
      // The type of instance. For more information, see [Overview of ECS instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<vector<string>> instanceTypes_ {};
      // The name of the key pair. You must configure either this parameter or the `login_password` parameter.
      shared_ptr<string> keyPair_ {};
      // The password for SSH logon. You must configure either this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. To log on with a password, you must specify this parameter during the scale-out.
      shared_ptr<string> loginPassword_ {};
      // The node port range.
      shared_ptr<string> nodePortRange_ {};
      // The subscription duration of the instance. This parameter takes effect and is required only when `charge_type` is set to `PrePaid`.
      // 
      // If `PeriodUnit=Month` is specified, the valid values are 1, 2, 3, 6, 12, 24, 36, 48, and 60.
      shared_ptr<int64_t> period_ {};
      // The billing cycle of control plane nodes. This parameter takes effect only when `instance_charge_type` is set to `PrePaid`.
      // 
      // Set the value to `Month`.
      shared_ptr<string> periodUnit_ {};
      // The type of the container runtime. Valid values:
      // 
      // *   `containerd`: supports all Kubernetes versions. We recommend that you set the parameter to this value.
      // 
      // Default value: containerd.
      shared_ptr<string> runtime_ {};
      // Specifies whether to enable Alibaba Cloud Linux Security Hardening. Valid values:
      // 
      // *   `true`: enables Alibaba Cloud Linux Security Hardening.
      // *   `false`: disables Alibaba Cloud Linux Security Hardening.
      // 
      // Default value: `false`
      shared_ptr<bool> securityHardeningOs_ {};
      // The number of control plane nodes. If you want to scale out the control plane in an ACK dedicated cluster, set this parameter to the desired number of nodes. This parameter must be greater than the current number of nodes.
      shared_ptr<int64_t> size_ {};
      // Specifies whether to enable Multi-Level Protection Scheme (MLPS) security hardening. For more information, see [ACK security hardening based on MLPS](https://help.aliyun.com/document_detail/196148.html).
      // 
      // Valid values:
      // 
      // *   `true`: enables MLPS security hardening.
      // *   `false`: disables MLPS security hardening.
      // 
      // Default value: `false`.
      shared_ptr<bool> socEnabled_ {};
      // Specifies whether to enable the burst feature for the system disk. Valid values:
      // 
      // *   `true`: enables the burst feature.
      // *   `false`: disables the burst feature.
      // 
      // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The category of the system disk for nodes. Valid values:
      // 
      // *   `cloud`: basic disk.
      // *   `cloud_efficiency`: ultra disk.
      // *   `cloud_ssd`: standard SSD.
      // *   `cloud_essd`: Enterprise ESSD (ESSD).
      // *   `cloud_auto`: ESSD AutoPL disk.
      // *   `cloud_essd_entry`: ESSD Entry disk.
      shared_ptr<string> systemDiskCategory_ {};
      // The performance level (PL) of the system disk that you want to use for the node. This parameter is effective only for ESSDs. This parameter is related to the disk size. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The preset read/write input/output operations per second (IOPS) of the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The type of the system disk. Valid values: [40,500]. Unit: GiB.
      shared_ptr<int64_t> systemDiskSize_ {};
      // The ID of the automatic snapshot policy applied to the node system disk.
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
      // Specifies whether to overwrite or add SANs. Valid values:
      // 
      // *   overwrite: overwrites SANs.
      // *   append: adds SANs.
      shared_ptr<string> action_ {};
      // The list of SANs.
      shared_ptr<vector<string>> subjectAlternativeNames_ {};
    };

    virtual bool empty() const override { return this->accessControlList_ == nullptr
        && this->apiServerCustomCertSans_ == nullptr && this->apiServerEip_ == nullptr && this->apiServerEipId_ == nullptr && this->clusterName_ == nullptr && this->controlPlaneConfig_ == nullptr
        && this->deletionProtection_ == nullptr && this->enableRrsa_ == nullptr && this->ingressDomainRebinding_ == nullptr && this->ingressLoadbalancerId_ == nullptr && this->instanceDeletionProtection_ == nullptr
        && this->maintenanceWindow_ == nullptr && this->operationPolicy_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->systemEventsLogging_ == nullptr
        && this->timezone_ == nullptr && this->vswitchIds_ == nullptr; };
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


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const ModifyClusterRequest::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, ModifyClusterRequest::ControlPlaneConfig) };
    inline ModifyClusterRequest::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, ModifyClusterRequest::ControlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(const ModifyClusterRequest::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(ModifyClusterRequest::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


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
    // The network access control list (ACL) of the SLB instance associated with the API server if the cluster is a registered cluster.
    shared_ptr<vector<string>> accessControlList_ {};
    // The custom subject alternative names (SANs) for the API server certificate to accept requests from specified IP addresses or domain names. This parameter is available only for ACK managed clusters.
    shared_ptr<ModifyClusterRequest::ApiServerCustomCertSans> apiServerCustomCertSans_ {};
    // Specifies whether to associate an elastic IP address (EIP) with the cluster. This EIP is used to enable access to the API server over the Internet. Valid values:
    // 
    // *   `true`: associates an EIP with the cluster.
    // *   `false`: does not associate an EIP with the cluster.
    shared_ptr<bool> apiServerEip_ {};
    // The ID of the EIP that you want to associate with the API server of the cluster. This parameter takes effect when `api_server_eip` is set to `true`.
    shared_ptr<string> apiServerEipId_ {};
    // The cluster name.
    // 
    // The cluster name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). The cluster name cannot start with a hyphen (-).
    shared_ptr<string> clusterName_ {};
    // The control plane configurations of an ACK dedicated cluster.
    shared_ptr<ModifyClusterRequest::ControlPlaneConfig> controlPlaneConfig_ {};
    // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables cluster deletion protection.
    // *   `false`: disables cluster deletion protection.
    // 
    // Default value: `false`
    shared_ptr<bool> deletionProtection_ {};
    // Specifies whether to enable the RAM Roles for Service Accounts (RRSA) feature. This parameter is available only for ACK managed clusters. Valid values:
    // 
    // *   `true`: enables the RRSA feature.
    // *   `false`: disables the RRSA feature.
    shared_ptr<bool> enableRrsa_ {};
    // Specifies whether to remap the test domain name of the cluster. Valid values:
    // 
    // *   `true`: remaps the test domain name of the cluster.
    // *   `false`: does not remap the test domain name of the cluster.
    // 
    // Default value: `false`
    shared_ptr<bool> ingressDomainRebinding_ {};
    // The ID of the Server Load Balancer (SLB) instance of the cluster to be modified.
    shared_ptr<string> ingressLoadbalancerId_ {};
    // Specifies whether to enable instance deletion protection. If you enable this option, the instance cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables instance deletion protection.
    // *   `false`: disables instance deletion protection.
    // 
    // Default value: `false`
    shared_ptr<bool> instanceDeletionProtection_ {};
    // The cluster maintenance window. This feature takes effect only for ACK Pro clusters.
    shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
    // The automatic O\\&M policy of the cluster.
    shared_ptr<ModifyClusterRequest::OperationPolicy> operationPolicy_ {};
    // The resource group ID of the cluster.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the security group for the control plane. 
    // 
    // - If block rules are configured in the security group, ensure the security group rules allow traffic for protocols and ports required by the cluster. For recommended security group rules, see [Configure and manage security groups for an ACK cluster](https://www.alibabacloud.com/help/en/ack/ack-managed-and-ack-dedicated/user-guide/configure-security-group-rules-to-enforce-access-control-on-ack-clusters?spm=a2c63.p38356.help-menu-85222.d_2_0_4_3.43e35d09s8oSlR).
    // 
    // - For non-ACK dedicated clusters: 
    //   - During security group updates, the cluster control plane and managed components (e.g., terway-controlplane) will restart briefly. Perform this operation during off-peak hours.
    //   - After updating the control plane security group, the Elastic Network Interfaces (ENIs) used by the control plane and managed components will automatically join the new security group.
    // 
    // - For ACK dedicated clusters:
    //    - After updating the control plane security group, newly scaled-out master nodes will automatically apply the new security group. Existing control plane nodes remain unaffected.
    shared_ptr<string> securityGroupId_ {};
    // The storage configurations of system events.
    shared_ptr<ModifyClusterRequest::SystemEventsLogging> systemEventsLogging_ {};
    // The time zone configuration for the cluster.
    // 
    // - After modifying the time zone, cluster inspection configurations will adopt the new time zone.
    // 
    // - For ACK managed clusters:
    //    - During time zone updates, the cluster control plane and managed components (e.g., terway-controlplane) will restart briefly. Perform this operation during off-peak hours.
    //    - After updating the time zone:
    //       - Newly scaled-out nodes will automatically apply the new time zone.
    //       - Existing nodes remain unaffected. Reset the node to apply changes to existing nodes.
    // 
    // - For ACK dedicated clusters:
    //    - After updating the time zone:
    //       - Newly scaled-out nodes (including control plane nodes) automatically apply the new time zone.
    //       - Existing nodes (including control plane nodes) remain unaffected. Reset the node to apply changes to existing nodes.
    //       - For control plane nodes, perform a scale-out followed by a scale-in to apply the new time zone to all control plane nodes.
    shared_ptr<string> timezone_ {};
    // The vSwitches of the control plane. This parameter can be used to change the vSwitches of the control plane in an ACK managed cluster. Take note of the following items:
    // 
    // *   This parameter overwrites the existing configuration. You must specify all vSwitches of the control plane.
    // *   The control plane components restarts during the change process. Exercise caution when you perform this operation.
    // *   Ensure that all security groups of the cluster, including the security groups of the control plane, all node pools, and container network, are allowed to access the CIDR blocks of the new vSwitches. This ensures that the nodes and containers can connect to the API server.
    // *   If the new vSwitches of the control plane are configured with an ACL, ensure that the ACL allows communication between the new vSwitches and CIDR blocks such as those of the cluster nodes and the container network.
    shared_ptr<vector<string>> vswitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
