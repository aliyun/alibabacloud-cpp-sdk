// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEOUTCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEOUTCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Runtime.hpp>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Taint.hpp>
#include <alibabacloud/models/ScaleOutClusterRequestWorkerDataDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleOutClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleOutClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(image_id, imageId_);
      DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
      DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
      DARABONBA_PTR_TO_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taints, taints_);
      DARABONBA_PTR_TO_JSON(user_data, userData_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_TO_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_TO_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_TO_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_TO_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_size, workerSystemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleOutClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(image_id, imageId_);
      DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
      DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
      DARABONBA_PTR_FROM_JSON(rds_instances, rdsInstances_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taints, taints_);
      DARABONBA_PTR_FROM_JSON(user_data, userData_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_FROM_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_FROM_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_size, workerSystemDiskSize_);
    };
    ScaleOutClusterRequest() = default ;
    ScaleOutClusterRequest(const ScaleOutClusterRequest &) = default ;
    ScaleOutClusterRequest(ScaleOutClusterRequest &&) = default ;
    ScaleOutClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleOutClusterRequest() = default ;
    ScaleOutClusterRequest& operator=(const ScaleOutClusterRequest &) = default ;
    ScaleOutClusterRequest& operator=(ScaleOutClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudMonitorFlags_ != nullptr
        && this->count_ != nullptr && this->cpuPolicy_ != nullptr && this->imageId_ != nullptr && this->keyPair_ != nullptr && this->loginPassword_ != nullptr
        && this->rdsInstances_ != nullptr && this->runtime_ != nullptr && this->tags_ != nullptr && this->taints_ != nullptr && this->userData_ != nullptr
        && this->vswitchIds_ != nullptr && this->workerAutoRenew_ != nullptr && this->workerAutoRenewPeriod_ != nullptr && this->workerDataDisks_ != nullptr && this->workerInstanceChargeType_ != nullptr
        && this->workerInstanceTypes_ != nullptr && this->workerPeriod_ != nullptr && this->workerPeriodUnit_ != nullptr && this->workerSystemDiskCategory_ != nullptr && this->workerSystemDiskSize_ != nullptr; };
    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool cloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline ScaleOutClusterRequest& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ScaleOutClusterRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline ScaleOutClusterRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ScaleOutClusterRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline ScaleOutClusterRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ScaleOutClusterRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // rdsInstances Field Functions 
    bool hasRdsInstances() const { return this->rdsInstances_ != nullptr;};
    void deleteRdsInstances() { this->rdsInstances_ = nullptr;};
    inline const vector<string> & rdsInstances() const { DARABONBA_PTR_GET_CONST(rdsInstances_, vector<string>) };
    inline vector<string> rdsInstances() { DARABONBA_PTR_GET(rdsInstances_, vector<string>) };
    inline ScaleOutClusterRequest& setRdsInstances(const vector<string> & rdsInstances) { DARABONBA_PTR_SET_VALUE(rdsInstances_, rdsInstances) };
    inline ScaleOutClusterRequest& setRdsInstances(vector<string> && rdsInstances) { DARABONBA_PTR_SET_RVALUE(rdsInstances_, rdsInstances) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Runtime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Runtime) };
    inline Runtime runtime() { DARABONBA_PTR_GET(runtime_, Runtime) };
    inline ScaleOutClusterRequest& setRuntime(const Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ScaleOutClusterRequest& setRuntime(Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline ScaleOutClusterRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ScaleOutClusterRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Taint>) };
    inline vector<Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Taint>) };
    inline ScaleOutClusterRequest& setTaints(const vector<Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline ScaleOutClusterRequest& setTaints(vector<Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ScaleOutClusterRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline ScaleOutClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline ScaleOutClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerAutoRenew Field Functions 
    bool hasWorkerAutoRenew() const { return this->workerAutoRenew_ != nullptr;};
    void deleteWorkerAutoRenew() { this->workerAutoRenew_ = nullptr;};
    inline bool workerAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenew_, false) };
    inline ScaleOutClusterRequest& setWorkerAutoRenew(bool workerAutoRenew) { DARABONBA_PTR_SET_VALUE(workerAutoRenew_, workerAutoRenew) };


    // workerAutoRenewPeriod Field Functions 
    bool hasWorkerAutoRenewPeriod() const { return this->workerAutoRenewPeriod_ != nullptr;};
    void deleteWorkerAutoRenewPeriod() { this->workerAutoRenewPeriod_ = nullptr;};
    inline int64_t workerAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenewPeriod_, 0L) };
    inline ScaleOutClusterRequest& setWorkerAutoRenewPeriod(int64_t workerAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(workerAutoRenewPeriod_, workerAutoRenewPeriod) };


    // workerDataDisks Field Functions 
    bool hasWorkerDataDisks() const { return this->workerDataDisks_ != nullptr;};
    void deleteWorkerDataDisks() { this->workerDataDisks_ = nullptr;};
    inline const vector<ScaleOutClusterRequestWorkerDataDisks> & workerDataDisks() const { DARABONBA_PTR_GET_CONST(workerDataDisks_, vector<ScaleOutClusterRequestWorkerDataDisks>) };
    inline vector<ScaleOutClusterRequestWorkerDataDisks> workerDataDisks() { DARABONBA_PTR_GET(workerDataDisks_, vector<ScaleOutClusterRequestWorkerDataDisks>) };
    inline ScaleOutClusterRequest& setWorkerDataDisks(const vector<ScaleOutClusterRequestWorkerDataDisks> & workerDataDisks) { DARABONBA_PTR_SET_VALUE(workerDataDisks_, workerDataDisks) };
    inline ScaleOutClusterRequest& setWorkerDataDisks(vector<ScaleOutClusterRequestWorkerDataDisks> && workerDataDisks) { DARABONBA_PTR_SET_RVALUE(workerDataDisks_, workerDataDisks) };


    // workerInstanceChargeType Field Functions 
    bool hasWorkerInstanceChargeType() const { return this->workerInstanceChargeType_ != nullptr;};
    void deleteWorkerInstanceChargeType() { this->workerInstanceChargeType_ = nullptr;};
    inline string workerInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(workerInstanceChargeType_, "") };
    inline ScaleOutClusterRequest& setWorkerInstanceChargeType(string workerInstanceChargeType) { DARABONBA_PTR_SET_VALUE(workerInstanceChargeType_, workerInstanceChargeType) };


    // workerInstanceTypes Field Functions 
    bool hasWorkerInstanceTypes() const { return this->workerInstanceTypes_ != nullptr;};
    void deleteWorkerInstanceTypes() { this->workerInstanceTypes_ = nullptr;};
    inline const vector<string> & workerInstanceTypes() const { DARABONBA_PTR_GET_CONST(workerInstanceTypes_, vector<string>) };
    inline vector<string> workerInstanceTypes() { DARABONBA_PTR_GET(workerInstanceTypes_, vector<string>) };
    inline ScaleOutClusterRequest& setWorkerInstanceTypes(const vector<string> & workerInstanceTypes) { DARABONBA_PTR_SET_VALUE(workerInstanceTypes_, workerInstanceTypes) };
    inline ScaleOutClusterRequest& setWorkerInstanceTypes(vector<string> && workerInstanceTypes) { DARABONBA_PTR_SET_RVALUE(workerInstanceTypes_, workerInstanceTypes) };


    // workerPeriod Field Functions 
    bool hasWorkerPeriod() const { return this->workerPeriod_ != nullptr;};
    void deleteWorkerPeriod() { this->workerPeriod_ = nullptr;};
    inline int64_t workerPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerPeriod_, 0L) };
    inline ScaleOutClusterRequest& setWorkerPeriod(int64_t workerPeriod) { DARABONBA_PTR_SET_VALUE(workerPeriod_, workerPeriod) };


    // workerPeriodUnit Field Functions 
    bool hasWorkerPeriodUnit() const { return this->workerPeriodUnit_ != nullptr;};
    void deleteWorkerPeriodUnit() { this->workerPeriodUnit_ = nullptr;};
    inline string workerPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(workerPeriodUnit_, "") };
    inline ScaleOutClusterRequest& setWorkerPeriodUnit(string workerPeriodUnit) { DARABONBA_PTR_SET_VALUE(workerPeriodUnit_, workerPeriodUnit) };


    // workerSystemDiskCategory Field Functions 
    bool hasWorkerSystemDiskCategory() const { return this->workerSystemDiskCategory_ != nullptr;};
    void deleteWorkerSystemDiskCategory() { this->workerSystemDiskCategory_ = nullptr;};
    inline string workerSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskCategory_, "") };
    inline ScaleOutClusterRequest& setWorkerSystemDiskCategory(string workerSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(workerSystemDiskCategory_, workerSystemDiskCategory) };


    // workerSystemDiskSize Field Functions 
    bool hasWorkerSystemDiskSize() const { return this->workerSystemDiskSize_ != nullptr;};
    void deleteWorkerSystemDiskSize() { this->workerSystemDiskSize_ = nullptr;};
    inline int64_t workerSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSize_, 0L) };
    inline ScaleOutClusterRequest& setWorkerSystemDiskSize(int64_t workerSystemDiskSize) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSize_, workerSystemDiskSize) };


  protected:
    // Specifies whether to install the CloudMonitor agent. Valid values:
    // 
    // *   `true`: installs the CloudMonitor agent.
    // *   `false`: does not install the CloudMonitor agent.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> cloudMonitorFlags_ = nullptr;
    // The number of worker nodes that you want to add.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The CPU management policy of nodes in the node pool. The following policies are supported if the Kubernetes version of the cluster is 1.12.6 or later:
    // 
    // *   `static`: allows pods with specific resource characteristics on the node to be granted with enhanced CPU affinity and exclusivity.
    // *   `none`: specifies that the default CPU affinity is used.
    // 
    // Default value: `none`.
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    // Specifies a custom image for nodes. By default, the image provided by ACK is used. You can select a custom image to replace the default image. For more information, see [Custom images](https://help.aliyun.com/document_detail/146647.html).
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the key pair. You must configure this parameter or the `login_password` parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyPair_ = nullptr;
    // The password for SSH logon. You must configure this parameter or the `key_pair` parameter. The password must be 8 to 30 characters in length, and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> loginPassword_ = nullptr;
    // The ApsaraDB RDS instances. If you specify a list of ApsaraDB RDS instances, ECS instances in the cluster are automatically added to the whitelist of the ApsaraDB RDS instances.
    std::shared_ptr<vector<string>> rdsInstances_ = nullptr;
    // The container runtime.
    std::shared_ptr<Runtime> runtime_ = nullptr;
    // The labels that you want to add to the node. When you add labels to a node, the following rules apply:
    // 
    // *   A label is a case-sensitive key-value pair. You can add up to 20 labels.
    // *   The key must be unique and cannot exceed 64 characters in length. The value can be empty and cannot exceed 128 characters in length. Keys and values cannot start with aliyun, acs:, https://, or http://. For more information, see [Labels and Selectors](https://kubernetes.io/docs/concepts/overview/working-with-objects/labels/#syntax-and-character-set).
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // The taints that you want to add to nodes. Taints can be used together with tolerations to avoid scheduling pods to specified nodes. For more information, see [taint-and-toleration](https://kubernetes.io/zh/docs/concepts/scheduling-eviction/taint-and-toleration/).
    std::shared_ptr<vector<Taint>> taints_ = nullptr;
    // The user-defined data of the node pool. For more information, see [Generate user-defined data](https://help.aliyun.com/document_detail/49121.html).
    std::shared_ptr<string> userData_ = nullptr;
    // The vSwitch IDs. You can select one to three vSwitches when you create a cluster. To ensure the high availability of the cluster, we recommend that you select vSwitches in different zones.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    // Specifies whether to enable auto-renewal for worker nodes. This parameter takes effect and is required only if `worker_instance_charge_type` is set to `PrePaid`. Valid values:
    // 
    // *   `true`: enables auto-renewal.
    // *   `false`: does not enable auto-renewal.
    // 
    // Default value: `true`
    std::shared_ptr<bool> workerAutoRenew_ = nullptr;
    // The auto-renewal duration of worker nodes. This parameter takes effect and is required only if the subscription billing method is selected for worker nodes.
    // 
    // Valid values: 1, 2, 3, 6, and 12.
    // 
    // Default value: `1`.
    std::shared_ptr<int64_t> workerAutoRenewPeriod_ = nullptr;
    // The configurations of the data disks that you want to mount to worker nodes. The configurations include the disk type and disk size.
    std::shared_ptr<vector<ScaleOutClusterRequestWorkerDataDisks>> workerDataDisks_ = nullptr;
    // The billing method of worker nodes. Valid values:
    // 
    // *   `PrePaid`: subscription.
    // *   `PostPaid`: pay-as-you-go.
    // 
    // Default value: `PostPaid`.
    std::shared_ptr<string> workerInstanceChargeType_ = nullptr;
    // The instance configurations of worker nodes.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> workerInstanceTypes_ = nullptr;
    // The subscription duration of worker nodes. This parameter takes effect and is required only if `worker_instance_charge_type` is set to `PrePaid`.
    // 
    // Valid values: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> workerPeriod_ = nullptr;
    // The billing cycle of worker nodes. This parameter is required only if worker_instance_charge_type is set to `PrePaid`.
    // 
    // Set the value to `Month`.
    std::shared_ptr<string> workerPeriodUnit_ = nullptr;
    // The system disk category of worker nodes. Valid values:
    // 
    // *   `cloud_efficiency`: ultra disk.
    // *   `cloud_ssd`: standard SSD.
    // *   `cloud_essd`: Enterprise SSD (ESSD).
    // 
    // Default value: `cloud_ssd`.
    // 
    // This parameter is required.
    std::shared_ptr<string> workerSystemDiskCategory_ = nullptr;
    // The system disk size of worker nodes. Unit: GiB.
    // 
    // Valid values: 40 to 500.
    // 
    // Default value: `120`.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workerSystemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
