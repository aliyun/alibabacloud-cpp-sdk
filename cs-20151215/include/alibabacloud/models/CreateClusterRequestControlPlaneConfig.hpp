// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCONTROLPLANECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestControlPlaneConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestControlPlaneConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestControlPlaneConfig& obj) { 
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
    CreateClusterRequestControlPlaneConfig() = default ;
    CreateClusterRequestControlPlaneConfig(const CreateClusterRequestControlPlaneConfig &) = default ;
    CreateClusterRequestControlPlaneConfig(CreateClusterRequestControlPlaneConfig &&) = default ;
    CreateClusterRequestControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestControlPlaneConfig() = default ;
    CreateClusterRequestControlPlaneConfig& operator=(const CreateClusterRequestControlPlaneConfig &) = default ;
    CreateClusterRequestControlPlaneConfig& operator=(CreateClusterRequestControlPlaneConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->chargeType_ != nullptr && this->cloudMonitorFlags_ != nullptr && this->cpuPolicy_ != nullptr && this->deploymentsetId_ != nullptr
        && this->imageId_ != nullptr && this->imageType_ != nullptr && this->instanceMetadataOptions_ != nullptr && this->instanceTypes_ != nullptr && this->keyPair_ != nullptr
        && this->loginPassword_ != nullptr && this->nodePortRange_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr && this->runtime_ != nullptr
        && this->securityHardeningOs_ != nullptr && this->size_ != nullptr && this->socEnabled_ != nullptr && this->systemDiskBurstingEnabled_ != nullptr && this->systemDiskCategory_ != nullptr
        && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskProvisionedIops_ != nullptr && this->systemDiskSize_ != nullptr && this->systemDiskSnapshotPolicyId_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateClusterRequestControlPlaneConfig& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterRequestControlPlaneConfig& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool cloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline CreateClusterRequestControlPlaneConfig& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline CreateClusterRequestControlPlaneConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // deploymentsetId Field Functions 
    bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
    void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
    inline string deploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
    inline CreateClusterRequestControlPlaneConfig& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateClusterRequestControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline CreateClusterRequestControlPlaneConfig& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // instanceMetadataOptions Field Functions 
    bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
    void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
    inline const Models::InstanceMetadataOptions & instanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline Models::InstanceMetadataOptions instanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, Models::InstanceMetadataOptions) };
    inline CreateClusterRequestControlPlaneConfig& setInstanceMetadataOptions(const Models::InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
    inline CreateClusterRequestControlPlaneConfig& setInstanceMetadataOptions(Models::InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateClusterRequestControlPlaneConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateClusterRequestControlPlaneConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline CreateClusterRequestControlPlaneConfig& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline CreateClusterRequestControlPlaneConfig& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // nodePortRange Field Functions 
    bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
    void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
    inline string nodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
    inline CreateClusterRequestControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateClusterRequestControlPlaneConfig& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline CreateClusterRequestControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // securityHardeningOs Field Functions 
    bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
    void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
    inline bool securityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
    inline CreateClusterRequestControlPlaneConfig& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // socEnabled Field Functions 
    bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
    void deleteSocEnabled() { this->socEnabled_ = nullptr;};
    inline bool socEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
    inline CreateClusterRequestControlPlaneConfig& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


    // systemDiskBurstingEnabled Field Functions 
    bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
    void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
    inline bool systemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskProvisionedIops Field Functions 
    bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
    void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
    inline int64_t systemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int64_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // systemDiskSnapshotPolicyId Field Functions 
    bool hasSystemDiskSnapshotPolicyId() const { return this->systemDiskSnapshotPolicyId_ != nullptr;};
    void deleteSystemDiskSnapshotPolicyId() { this->systemDiskSnapshotPolicyId_ = nullptr;};
    inline string systemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSnapshotPolicyId_, "") };
    inline CreateClusterRequestControlPlaneConfig& setSystemDiskSnapshotPolicyId(string systemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskSnapshotPolicyId_, systemDiskSnapshotPolicyId) };


  protected:
    // Specifies whether to enable auto-renewal for the node.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal duration for the node.
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    // The billing method of the node.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Specifies whether to install CloudMonitor on the node.
    std::shared_ptr<bool> cloudMonitorFlags_ = nullptr;
    // The CPU management policy of the node.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentsetId_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the OS image.
    std::shared_ptr<string> imageType_ = nullptr;
    std::shared_ptr<Models::InstanceMetadataOptions> instanceMetadataOptions_ = nullptr;
    // The instance types of the nodes.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The name of the key pair. You must set this parameter or login_password.
    std::shared_ptr<string> keyPair_ = nullptr;
    // The SSH logon password. The password must be 8 to 30 characters in length and contain a minimum of three of the following character types: uppercase letters, lowercase letters, digits, and special characters. You must set this parameter or key_pair.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The node port range.
    std::shared_ptr<string> nodePortRange_ = nullptr;
    // The subscription duration of the node.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The unit of the subscription duration of the node.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The container runtime.
    std::shared_ptr<string> runtime_ = nullptr;
    // Specifies whether to enable Alibaba Cloud Linux Security Hardening.
    std::shared_ptr<bool> securityHardeningOs_ = nullptr;
    // The number of control plane nodes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // Specifies whether to enable MLPS security hardening.
    std::shared_ptr<bool> socEnabled_ = nullptr;
    // Specifies whether to enable the burst feature for the system disk.
    std::shared_ptr<bool> systemDiskBurstingEnabled_ = nullptr;
    // The system disk category for the node.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The PL of the system disk that you want to use for the node. This parameter takes effect only for ESSDs.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The preset read/write IOPS of the system disk.
    std::shared_ptr<int64_t> systemDiskProvisionedIops_ = nullptr;
    // The system disk size of the node. The value must be at least 40 GB.
    std::shared_ptr<int64_t> systemDiskSize_ = nullptr;
    // The automatic snapshot policy of the node.
    std::shared_ptr<string> systemDiskSnapshotPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
