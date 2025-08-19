// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScaleClusterRequestTags.hpp>
#include <alibabacloud/models/ScaleClusterRequestTaints.hpp>
#include <alibabacloud/models/ScaleClusterRequestWorkerDataDisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ScaleClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(disable_rollback, disableRollback_);
      DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
      DARABONBA_PTR_TO_JSON(login_password, loginPassword_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taints, taints_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_TO_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(worker_data_disk, workerDataDisk_);
      DARABONBA_PTR_TO_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_TO_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_TO_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_TO_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_TO_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_TO_JSON(worker_system_disk_size, workerSystemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(disable_rollback, disableRollback_);
      DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
      DARABONBA_PTR_FROM_JSON(login_password, loginPassword_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taints, taints_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew, workerAutoRenew_);
      DARABONBA_PTR_FROM_JSON(worker_auto_renew_period, workerAutoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_data_disk, workerDataDisk_);
      DARABONBA_PTR_FROM_JSON(worker_data_disks, workerDataDisks_);
      DARABONBA_PTR_FROM_JSON(worker_instance_charge_type, workerInstanceChargeType_);
      DARABONBA_PTR_FROM_JSON(worker_instance_types, workerInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(worker_period, workerPeriod_);
      DARABONBA_PTR_FROM_JSON(worker_period_unit, workerPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_category, workerSystemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(worker_system_disk_size, workerSystemDiskSize_);
    };
    ScaleClusterRequest() = default ;
    ScaleClusterRequest(const ScaleClusterRequest &) = default ;
    ScaleClusterRequest(ScaleClusterRequest &&) = default ;
    ScaleClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterRequest() = default ;
    ScaleClusterRequest& operator=(const ScaleClusterRequest &) = default ;
    ScaleClusterRequest& operator=(ScaleClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudMonitorFlags_ != nullptr
        && this->count_ != nullptr && this->cpuPolicy_ != nullptr && this->disableRollback_ != nullptr && this->keyPair_ != nullptr && this->loginPassword_ != nullptr
        && this->tags_ != nullptr && this->taints_ != nullptr && this->vswitchIds_ != nullptr && this->workerAutoRenew_ != nullptr && this->workerAutoRenewPeriod_ != nullptr
        && this->workerDataDisk_ != nullptr && this->workerDataDisks_ != nullptr && this->workerInstanceChargeType_ != nullptr && this->workerInstanceTypes_ != nullptr && this->workerPeriod_ != nullptr
        && this->workerPeriodUnit_ != nullptr && this->workerSystemDiskCategory_ != nullptr && this->workerSystemDiskSize_ != nullptr; };
    // cloudMonitorFlags Field Functions 
    bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
    void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
    inline bool cloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
    inline ScaleClusterRequest& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ScaleClusterRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline ScaleClusterRequest& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // disableRollback Field Functions 
    bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
    void deleteDisableRollback() { this->disableRollback_ = nullptr;};
    inline bool disableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
    inline ScaleClusterRequest& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


    // keyPair Field Functions 
    bool hasKeyPair() const { return this->keyPair_ != nullptr;};
    void deleteKeyPair() { this->keyPair_ = nullptr;};
    inline string keyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
    inline ScaleClusterRequest& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


    // loginPassword Field Functions 
    bool hasLoginPassword() const { return this->loginPassword_ != nullptr;};
    void deleteLoginPassword() { this->loginPassword_ = nullptr;};
    inline string loginPassword() const { DARABONBA_PTR_GET_DEFAULT(loginPassword_, "") };
    inline ScaleClusterRequest& setLoginPassword(string loginPassword) { DARABONBA_PTR_SET_VALUE(loginPassword_, loginPassword) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ScaleClusterRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScaleClusterRequestTags>) };
    inline vector<ScaleClusterRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ScaleClusterRequestTags>) };
    inline ScaleClusterRequest& setTags(const vector<ScaleClusterRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ScaleClusterRequest& setTags(vector<ScaleClusterRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<ScaleClusterRequestTaints> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<ScaleClusterRequestTaints>) };
    inline vector<ScaleClusterRequestTaints> taints() { DARABONBA_PTR_GET(taints_, vector<ScaleClusterRequestTaints>) };
    inline ScaleClusterRequest& setTaints(const vector<ScaleClusterRequestTaints> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline ScaleClusterRequest& setTaints(vector<ScaleClusterRequestTaints> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline ScaleClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline ScaleClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerAutoRenew Field Functions 
    bool hasWorkerAutoRenew() const { return this->workerAutoRenew_ != nullptr;};
    void deleteWorkerAutoRenew() { this->workerAutoRenew_ = nullptr;};
    inline bool workerAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenew_, false) };
    inline ScaleClusterRequest& setWorkerAutoRenew(bool workerAutoRenew) { DARABONBA_PTR_SET_VALUE(workerAutoRenew_, workerAutoRenew) };


    // workerAutoRenewPeriod Field Functions 
    bool hasWorkerAutoRenewPeriod() const { return this->workerAutoRenewPeriod_ != nullptr;};
    void deleteWorkerAutoRenewPeriod() { this->workerAutoRenewPeriod_ = nullptr;};
    inline int64_t workerAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerAutoRenewPeriod_, 0L) };
    inline ScaleClusterRequest& setWorkerAutoRenewPeriod(int64_t workerAutoRenewPeriod) { DARABONBA_PTR_SET_VALUE(workerAutoRenewPeriod_, workerAutoRenewPeriod) };


    // workerDataDisk Field Functions 
    bool hasWorkerDataDisk() const { return this->workerDataDisk_ != nullptr;};
    void deleteWorkerDataDisk() { this->workerDataDisk_ = nullptr;};
    inline bool workerDataDisk() const { DARABONBA_PTR_GET_DEFAULT(workerDataDisk_, false) };
    inline ScaleClusterRequest& setWorkerDataDisk(bool workerDataDisk) { DARABONBA_PTR_SET_VALUE(workerDataDisk_, workerDataDisk) };


    // workerDataDisks Field Functions 
    bool hasWorkerDataDisks() const { return this->workerDataDisks_ != nullptr;};
    void deleteWorkerDataDisks() { this->workerDataDisks_ = nullptr;};
    inline const vector<ScaleClusterRequestWorkerDataDisks> & workerDataDisks() const { DARABONBA_PTR_GET_CONST(workerDataDisks_, vector<ScaleClusterRequestWorkerDataDisks>) };
    inline vector<ScaleClusterRequestWorkerDataDisks> workerDataDisks() { DARABONBA_PTR_GET(workerDataDisks_, vector<ScaleClusterRequestWorkerDataDisks>) };
    inline ScaleClusterRequest& setWorkerDataDisks(const vector<ScaleClusterRequestWorkerDataDisks> & workerDataDisks) { DARABONBA_PTR_SET_VALUE(workerDataDisks_, workerDataDisks) };
    inline ScaleClusterRequest& setWorkerDataDisks(vector<ScaleClusterRequestWorkerDataDisks> && workerDataDisks) { DARABONBA_PTR_SET_RVALUE(workerDataDisks_, workerDataDisks) };


    // workerInstanceChargeType Field Functions 
    bool hasWorkerInstanceChargeType() const { return this->workerInstanceChargeType_ != nullptr;};
    void deleteWorkerInstanceChargeType() { this->workerInstanceChargeType_ = nullptr;};
    inline string workerInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(workerInstanceChargeType_, "") };
    inline ScaleClusterRequest& setWorkerInstanceChargeType(string workerInstanceChargeType) { DARABONBA_PTR_SET_VALUE(workerInstanceChargeType_, workerInstanceChargeType) };


    // workerInstanceTypes Field Functions 
    bool hasWorkerInstanceTypes() const { return this->workerInstanceTypes_ != nullptr;};
    void deleteWorkerInstanceTypes() { this->workerInstanceTypes_ = nullptr;};
    inline const vector<string> & workerInstanceTypes() const { DARABONBA_PTR_GET_CONST(workerInstanceTypes_, vector<string>) };
    inline vector<string> workerInstanceTypes() { DARABONBA_PTR_GET(workerInstanceTypes_, vector<string>) };
    inline ScaleClusterRequest& setWorkerInstanceTypes(const vector<string> & workerInstanceTypes) { DARABONBA_PTR_SET_VALUE(workerInstanceTypes_, workerInstanceTypes) };
    inline ScaleClusterRequest& setWorkerInstanceTypes(vector<string> && workerInstanceTypes) { DARABONBA_PTR_SET_RVALUE(workerInstanceTypes_, workerInstanceTypes) };


    // workerPeriod Field Functions 
    bool hasWorkerPeriod() const { return this->workerPeriod_ != nullptr;};
    void deleteWorkerPeriod() { this->workerPeriod_ = nullptr;};
    inline int64_t workerPeriod() const { DARABONBA_PTR_GET_DEFAULT(workerPeriod_, 0L) };
    inline ScaleClusterRequest& setWorkerPeriod(int64_t workerPeriod) { DARABONBA_PTR_SET_VALUE(workerPeriod_, workerPeriod) };


    // workerPeriodUnit Field Functions 
    bool hasWorkerPeriodUnit() const { return this->workerPeriodUnit_ != nullptr;};
    void deleteWorkerPeriodUnit() { this->workerPeriodUnit_ = nullptr;};
    inline string workerPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(workerPeriodUnit_, "") };
    inline ScaleClusterRequest& setWorkerPeriodUnit(string workerPeriodUnit) { DARABONBA_PTR_SET_VALUE(workerPeriodUnit_, workerPeriodUnit) };


    // workerSystemDiskCategory Field Functions 
    bool hasWorkerSystemDiskCategory() const { return this->workerSystemDiskCategory_ != nullptr;};
    void deleteWorkerSystemDiskCategory() { this->workerSystemDiskCategory_ = nullptr;};
    inline string workerSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskCategory_, "") };
    inline ScaleClusterRequest& setWorkerSystemDiskCategory(string workerSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(workerSystemDiskCategory_, workerSystemDiskCategory) };


    // workerSystemDiskSize Field Functions 
    bool hasWorkerSystemDiskSize() const { return this->workerSystemDiskSize_ != nullptr;};
    void deleteWorkerSystemDiskSize() { this->workerSystemDiskSize_ = nullptr;};
    inline int64_t workerSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(workerSystemDiskSize_, 0L) };
    inline ScaleClusterRequest& setWorkerSystemDiskSize(int64_t workerSystemDiskSize) { DARABONBA_PTR_SET_VALUE(workerSystemDiskSize_, workerSystemDiskSize) };


  protected:
    std::shared_ptr<bool> cloudMonitorFlags_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    std::shared_ptr<bool> disableRollback_ = nullptr;
    std::shared_ptr<string> keyPair_ = nullptr;
    std::shared_ptr<string> loginPassword_ = nullptr;
    std::shared_ptr<vector<ScaleClusterRequestTags>> tags_ = nullptr;
    std::shared_ptr<vector<ScaleClusterRequestTaints>> taints_ = nullptr;
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
    std::shared_ptr<bool> workerAutoRenew_ = nullptr;
    std::shared_ptr<int64_t> workerAutoRenewPeriod_ = nullptr;
    std::shared_ptr<bool> workerDataDisk_ = nullptr;
    std::shared_ptr<vector<ScaleClusterRequestWorkerDataDisks>> workerDataDisks_ = nullptr;
    std::shared_ptr<string> workerInstanceChargeType_ = nullptr;
    std::shared_ptr<vector<string>> workerInstanceTypes_ = nullptr;
    std::shared_ptr<int64_t> workerPeriod_ = nullptr;
    std::shared_ptr<string> workerPeriodUnit_ = nullptr;
    std::shared_ptr<string> workerSystemDiskCategory_ = nullptr;
    std::shared_ptr<int64_t> workerSystemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
