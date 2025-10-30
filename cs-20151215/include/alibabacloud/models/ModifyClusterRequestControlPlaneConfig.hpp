// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequestControlPlaneConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequestControlPlaneConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequestControlPlaneConfig& obj) { 
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
    ModifyClusterRequestControlPlaneConfig() = default ;
    ModifyClusterRequestControlPlaneConfig(const ModifyClusterRequestControlPlaneConfig &) = default ;
    ModifyClusterRequestControlPlaneConfig(ModifyClusterRequestControlPlaneConfig &&) = default ;
    ModifyClusterRequestControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequestControlPlaneConfig() = default ;
    ModifyClusterRequestControlPlaneConfig& operator=(const ModifyClusterRequestControlPlaneConfig &) = default ;
    ModifyClusterRequestControlPlaneConfig& operator=(ModifyClusterRequestControlPlaneConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoRenewPeriod_ == nullptr && return this->chargeType_ == nullptr && return this->cloudMonitorFlags_ == nullptr && return this->cpuPolicy_ == nullptr && return this->deploymentsetId_ == nullptr
        && return this->imageId_ == nullptr && return this->imageType_ == nullptr && return this->instanceTypes_ == nullptr && return this->keyPair_ == nullptr && return this->loginPassword_ == nullptr
        && return this->nodePortRange_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->runtime_ == nullptr && return this->securityHardeningOs_ == nullptr
        && return this->size_ == nullptr && return this->socEnabled_ == nullptr && return this->systemDiskBurstingEnabled_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->systemDiskPerformanceLevel_ == nullptr
        && return this->systemDiskProvisionedIops_ == nullptr && return this->systemDiskSize_ == nullptr && return this->systemDiskSnapshotPolicyId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyClusterRequestControlPlaneConfig& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline ModifyClusterRequestControlPlaneConfig& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool cloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline ModifyClusterRequestControlPlaneConfig& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ModifyClusterRequestControlPlaneConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ModifyClusterRequestControlPlaneConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodePortRange Field Functions 
    bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
    void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
    inline string nodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline ModifyClusterRequestControlPlaneConfig& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline ModifyClusterRequestControlPlaneConfig& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ModifyClusterRequestControlPlaneConfig& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline ModifyClusterRequestControlPlaneConfig& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // systemDiskSnapshotPolicyId Field Functions 
    bool hasSystemDiskSnapshotPolicyId() const { return this->systemDiskSnapshotPolicyId_ != nullptr;};
    void deleteSystemDiskSnapshotPolicyId() { this->systemDiskSnapshotPolicyId_ = nullptr;};
    inline string systemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSnapshotPolicyId_, "") };
    inline ModifyClusterRequestControlPlaneConfig& setSystemDiskSnapshotPolicyId(string systemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskSnapshotPolicyId_, systemDiskSnapshotPolicyId) };


  protected:
    // Specifies whether to enable auto-renewal for control plane nodes. This parameter takes effect only when `charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: disables auto-renewal.
    // 
    // Default value: `false`
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period of control plane nodes. Valid values: 1, 2, 3, 6, and 12.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // The billing method of control plane nodes. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    // 
    // Default value: `PostPaid`.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Specifies whether to install the CloudMonitor agent. Valid values:
    // 
    // *   `true`: installs the CloudMonitor agent.
    // *   `false`: does not install the CloudMonitor agent.
    std::shared_ptr<bool> cloudMonitorFlags_ = nullptr;
    // The CPU management policy of nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted with enhanced CPU affinity and exclusivity.
    // *   `none`: specifies that the default CPU affinity is used.
    // 
    // Default value: `none`.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    // The custom image ID. You must configure this parameter if you use a custom image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the OS image. Valid values:
    // 
    // *   `AliyunLinux3`: Alibaba Cloud Linux 3.
    // *   `Custom`: the custom image.
    std::shared_ptr<string> imageType_ = nullptr;
    // The type of instance. For more information, see [Overview of ECS instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The name of the key pair. You must configure either this parameter or the `login_password` parameter.
    std::shared_ptr<string> keyPair_ = nullptr;
    // The password for SSH logon. You must configure either this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. To log on with a password, you must specify this parameter during the scale-out.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The node port range.
    std::shared_ptr<string> nodePortRange_ = nullptr;
    // The subscription duration of the instance. This parameter takes effect and is required only when `charge_type` is set to `PrePaid`.
    // 
    // If `PeriodUnit=Month` is specified, the valid values are 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The billing cycle of control plane nodes. This parameter takes effect only when `instance_charge_type` is set to `PrePaid`.
    // 
    // Set the value to `Month`.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The type of the container runtime. Valid values:
    // 
    // *   `containerd`: supports all Kubernetes versions. We recommend that you set the parameter to this value.
    // 
    // Default value: containerd.
    std::shared_ptr<string> runtime_ = nullptr;
    // Specifies whether to enable Alibaba Cloud Linux Security Hardening. Valid values:
    // 
    // *   `true`: enables Alibaba Cloud Linux Security Hardening.
    // *   `false`: disables Alibaba Cloud Linux Security Hardening.
    // 
    // Default value: `false`
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // The number of control plane nodes. If you want to scale out the control plane in an ACK dedicated cluster, set this parameter to the desired number of nodes. This parameter must be greater than the current number of nodes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // Specifies whether to enable Multi-Level Protection Scheme (MLPS) security hardening. For more information, see [ACK security hardening based on MLPS](https://help.aliyun.com/document_detail/196148.html).
    // 
    // Valid values:
    // 
    // *   `true`: enables MLPS security hardening.
    // *   `false`: disables MLPS security hardening.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk. Valid values:
    // 
    // *   `true`: enables the burst feature.
    // *   `false`: disables the burst feature.
    // 
    // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The category of the system disk for nodes. Valid values:
    // 
    // *   `cloud`: basic disk.
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: Enterprise ESSD (ESSD).
    // *   `cloud_auto`: ESSD AutoPL disk.
    // *   `cloud_essd_entry`: ESSD Entry disk.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The performance level (PL) of the system disk that you want to use for the node. This parameter is effective only for ESSDs. This parameter is related to the disk size. For more information, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The preset read/write input/output operations per second (IOPS) of the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}. Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // This parameter is effective only when `system_disk_category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The type of the system disk. Valid values: [40,500]. Unit: GiB.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    // The ID of the automatic snapshot policy applied to the node system disk.
    std::shared_ptr<string> systemDiskSnapshotPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
