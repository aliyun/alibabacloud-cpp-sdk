// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Shard, shard_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Shard, shard_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    ModifyAutoScalingConfigRequest() = default ;
    ModifyAutoScalingConfigRequest(const ModifyAutoScalingConfigRequest &) = default ;
    ModifyAutoScalingConfigRequest(ModifyAutoScalingConfigRequest &&) = default ;
    ModifyAutoScalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequest() = default ;
    ModifyAutoScalingConfigRequest& operator=(const ModifyAutoScalingConfigRequest &) = default ;
    ModifyAutoScalingConfigRequest& operator=(ModifyAutoScalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Storage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Storage& obj) { 
        DARABONBA_PTR_TO_JSON(Apply, apply_);
        DARABONBA_PTR_TO_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(MaxStorage, maxStorage_);
        DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
      };
      friend void from_json(const Darabonba::Json& j, Storage& obj) { 
        DARABONBA_PTR_FROM_JSON(Apply, apply_);
        DARABONBA_PTR_FROM_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(MaxStorage, maxStorage_);
        DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
      };
      Storage() = default ;
      Storage(const Storage &) = default ;
      Storage(Storage &&) = default ;
      Storage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Storage() = default ;
      Storage& operator=(const Storage &) = default ;
      Storage& operator=(Storage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apply_ == nullptr
        && this->diskUsageUpperThreshold_ == nullptr && this->maxStorage_ == nullptr && this->upgrade_ == nullptr; };
      // apply Field Functions 
      bool hasApply() const { return this->apply_ != nullptr;};
      void deleteApply() { this->apply_ = nullptr;};
      inline bool getApply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
      inline Storage& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


      // diskUsageUpperThreshold Field Functions 
      bool hasDiskUsageUpperThreshold() const { return this->diskUsageUpperThreshold_ != nullptr;};
      void deleteDiskUsageUpperThreshold() { this->diskUsageUpperThreshold_ = nullptr;};
      inline int32_t getDiskUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskUsageUpperThreshold_, 0) };
      inline Storage& setDiskUsageUpperThreshold(int32_t diskUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(diskUsageUpperThreshold_, diskUsageUpperThreshold) };


      // maxStorage Field Functions 
      bool hasMaxStorage() const { return this->maxStorage_ != nullptr;};
      void deleteMaxStorage() { this->maxStorage_ = nullptr;};
      inline int32_t getMaxStorage() const { DARABONBA_PTR_GET_DEFAULT(maxStorage_, 0) };
      inline Storage& setMaxStorage(int32_t maxStorage) { DARABONBA_PTR_SET_VALUE(maxStorage_, maxStorage) };


      // upgrade Field Functions 
      bool hasUpgrade() const { return this->upgrade_ != nullptr;};
      void deleteUpgrade() { this->upgrade_ = nullptr;};
      inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
      inline Storage& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    protected:
      // Specifies whether to apply the **Storage** configuration of the automatic storage expansion feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> apply_ {};
      // The average storage usage threshold that triggers automatic storage expansion. Unit: %. Valid values:
      // 
      // *   **50**
      // *   **60**
      // *   **70**
      // *   **80**
      // *   **90**
      shared_ptr<int32_t> diskUsageUpperThreshold_ {};
      // The maximum storage size of the database instance. Unit: GB. The value must be greater than or equal to the total storage size of the instance.
      // 
      // *   If the instance uses ESSDs, the maximum value of this parameter can be 32000.
      // *   If the instance uses standard SSDs, the maximum value of this parameter can be 6000.
      // 
      // >  The standard SSD storage type is phased out. We recommend that you [upgrade the storage type of your instance from standard SSDs to ESSDs](https://help.aliyun.com/document_detail/314678.html).
      shared_ptr<int32_t> maxStorage_ {};
      // Specifies whether to enable automatic storage expansion. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upgrade_ {};
    };

    class Spec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Spec& obj) { 
        DARABONBA_PTR_TO_JSON(Apply, apply_);
        DARABONBA_PTR_TO_JSON(CoolDownTime, coolDownTime_);
        DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_TO_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
        DARABONBA_PTR_TO_JSON(MaxSpec, maxSpec_);
        DARABONBA_PTR_TO_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
        DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
      };
      friend void from_json(const Darabonba::Json& j, Spec& obj) { 
        DARABONBA_PTR_FROM_JSON(Apply, apply_);
        DARABONBA_PTR_FROM_JSON(CoolDownTime, coolDownTime_);
        DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_FROM_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
        DARABONBA_PTR_FROM_JSON(MaxSpec, maxSpec_);
        DARABONBA_PTR_FROM_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
        DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
      };
      Spec() = default ;
      Spec(const Spec &) = default ;
      Spec(Spec &&) = default ;
      Spec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Spec() = default ;
      Spec& operator=(const Spec &) = default ;
      Spec& operator=(Spec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apply_ == nullptr
        && this->coolDownTime_ == nullptr && this->cpuUsageUpperThreshold_ == nullptr && this->downgrade_ == nullptr && this->maxReadOnlyNodes_ == nullptr && this->maxSpec_ == nullptr
        && this->memUsageUpperThreshold_ == nullptr && this->observationWindowSize_ == nullptr && this->upgrade_ == nullptr; };
      // apply Field Functions 
      bool hasApply() const { return this->apply_ != nullptr;};
      void deleteApply() { this->apply_ = nullptr;};
      inline bool getApply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
      inline Spec& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


      // coolDownTime Field Functions 
      bool hasCoolDownTime() const { return this->coolDownTime_ != nullptr;};
      void deleteCoolDownTime() { this->coolDownTime_ = nullptr;};
      inline string getCoolDownTime() const { DARABONBA_PTR_GET_DEFAULT(coolDownTime_, "") };
      inline Spec& setCoolDownTime(string coolDownTime) { DARABONBA_PTR_SET_VALUE(coolDownTime_, coolDownTime) };


      // cpuUsageUpperThreshold Field Functions 
      bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
      void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
      inline int32_t getCpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
      inline Spec& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


      // downgrade Field Functions 
      bool hasDowngrade() const { return this->downgrade_ != nullptr;};
      void deleteDowngrade() { this->downgrade_ = nullptr;};
      inline bool getDowngrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
      inline Spec& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


      // maxReadOnlyNodes Field Functions 
      bool hasMaxReadOnlyNodes() const { return this->maxReadOnlyNodes_ != nullptr;};
      void deleteMaxReadOnlyNodes() { this->maxReadOnlyNodes_ = nullptr;};
      inline int32_t getMaxReadOnlyNodes() const { DARABONBA_PTR_GET_DEFAULT(maxReadOnlyNodes_, 0) };
      inline Spec& setMaxReadOnlyNodes(int32_t maxReadOnlyNodes) { DARABONBA_PTR_SET_VALUE(maxReadOnlyNodes_, maxReadOnlyNodes) };


      // maxSpec Field Functions 
      bool hasMaxSpec() const { return this->maxSpec_ != nullptr;};
      void deleteMaxSpec() { this->maxSpec_ = nullptr;};
      inline string getMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(maxSpec_, "") };
      inline Spec& setMaxSpec(string maxSpec) { DARABONBA_PTR_SET_VALUE(maxSpec_, maxSpec) };


      // memUsageUpperThreshold Field Functions 
      bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
      void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
      inline int32_t getMemUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
      inline Spec& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


      // observationWindowSize Field Functions 
      bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
      void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
      inline string getObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
      inline Spec& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


      // upgrade Field Functions 
      bool hasUpgrade() const { return this->upgrade_ != nullptr;};
      void deleteUpgrade() { this->upgrade_ = nullptr;};
      inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
      inline Spec& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    protected:
      // Specifies whether to apply the **Spec** configuration of the specification auto scaling feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> apply_ {};
      // The quiescent period. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute, the **h** time unit suffix specifies the hour, and the **d** time unit suffix specifies the day.
      // 
      // *   Valid values for PolarDB for MySQL Cluster Edition instances: **5m**, **10m**, **30m**, **1h**, **2h**, **3h**, **1d**, and **7d**.
      // *   Valid values for ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or Enterprise SSDs (ESSDs): **5m**, **10m**, **30m**, **1h**, **2h**, **3h**, **1d**, and **7d**.
      shared_ptr<string> coolDownTime_ {};
      // The average CPU utilization threshold that triggers automatic specification scale-up. Unit: %. Valid values:
      // 
      // *   **50**
      // *   **60**
      // *   **70**
      // *   **80**
      // *   **90**
      // 
      // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance or an ApsaraDB RDS for MySQL High-availability Edition instance that uses standard SSDs or ESSDs.
      shared_ptr<int32_t> cpuUsageUpperThreshold_ {};
      // Specifies whether to enable automatic specification scale-down. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance or an ApsaraDB RDS for MySQL High-availability Edition instance that uses standard SSDs or ESSDs.
      shared_ptr<bool> downgrade_ {};
      // The maximum number of read-only nodes of the instance.
      // 
      // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance.
      shared_ptr<int32_t> maxReadOnlyNodes_ {};
      // The maximum specifications to which the database instance can be scaled up. The database instance can be upgraded only to a database instance of the same edition with higher specifications. For information about the specifications of different database instances, see the following topics:
      // 
      // *   PolarDB for MySQL Cluster Edition instances: [Specifications of compute nodes](https://help.aliyun.com/document_detail/102542.html)
      // *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: [Specifications](https://help.aliyun.com/document_detail/276974.html)
      shared_ptr<string> maxSpec_ {};
      // The average memory usage threshold that triggers automatic specification scale-up. Unit: %. Valid values:
      // 
      // *   **50**
      // *   **60**
      // *   **70**
      // *   **80**
      // *   **90**
      // 
      // >  This parameter must be specified if the database instance is a Tair (Redis OSS-compatible) Community Edition cloud-native instance on the China site (aliyun.com).
      shared_ptr<int32_t> memUsageUpperThreshold_ {};
      // The observation window. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute and the **h** time unit suffix specifies the hour.
      // 
      // *   Valid values for PolarDB for MySQL Cluster Edition instances: **5m**, **10m**, **15m**, and **30m**.
      // *   Valid values for ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: **5m**, **20m**, **30m**, **40m**, and **1h**.
      // *   Valid values for Tair (Redis OSS-compatible) Community Edition cloud-native instances: **5m**, **10m**, **15m**, and **30m**.
      shared_ptr<string> observationWindowSize_ {};
      // Specifies whether to enable automatic specification scale-up. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upgrade_ {};
    };

    class Shard : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Shard& obj) { 
        DARABONBA_PTR_TO_JSON(Apply, apply_);
        DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
        DARABONBA_PTR_TO_JSON(MaxShards, maxShards_);
        DARABONBA_PTR_TO_JSON(MemUsageLowerThreshold, memUsageLowerThreshold_);
        DARABONBA_PTR_TO_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(MinShards, minShards_);
        DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
        DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
      };
      friend void from_json(const Darabonba::Json& j, Shard& obj) { 
        DARABONBA_PTR_FROM_JSON(Apply, apply_);
        DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_FROM_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
        DARABONBA_PTR_FROM_JSON(MaxShards, maxShards_);
        DARABONBA_PTR_FROM_JSON(MemUsageLowerThreshold, memUsageLowerThreshold_);
        DARABONBA_PTR_FROM_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(MinShards, minShards_);
        DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
        DARABONBA_PTR_FROM_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
      };
      Shard() = default ;
      Shard(const Shard &) = default ;
      Shard(Shard &&) = default ;
      Shard(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Shard() = default ;
      Shard& operator=(const Shard &) = default ;
      Shard& operator=(Shard &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apply_ == nullptr
        && this->downgrade_ == nullptr && this->downgradeObservationWindowSize_ == nullptr && this->maxShards_ == nullptr && this->memUsageLowerThreshold_ == nullptr && this->memUsageUpperThreshold_ == nullptr
        && this->minShards_ == nullptr && this->upgrade_ == nullptr && this->upgradeObservationWindowSize_ == nullptr; };
      // apply Field Functions 
      bool hasApply() const { return this->apply_ != nullptr;};
      void deleteApply() { this->apply_ = nullptr;};
      inline bool getApply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
      inline Shard& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


      // downgrade Field Functions 
      bool hasDowngrade() const { return this->downgrade_ != nullptr;};
      void deleteDowngrade() { this->downgrade_ = nullptr;};
      inline bool getDowngrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
      inline Shard& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


      // downgradeObservationWindowSize Field Functions 
      bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
      void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
      inline string getDowngradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
      inline Shard& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


      // maxShards Field Functions 
      bool hasMaxShards() const { return this->maxShards_ != nullptr;};
      void deleteMaxShards() { this->maxShards_ = nullptr;};
      inline int32_t getMaxShards() const { DARABONBA_PTR_GET_DEFAULT(maxShards_, 0) };
      inline Shard& setMaxShards(int32_t maxShards) { DARABONBA_PTR_SET_VALUE(maxShards_, maxShards) };


      // memUsageLowerThreshold Field Functions 
      bool hasMemUsageLowerThreshold() const { return this->memUsageLowerThreshold_ != nullptr;};
      void deleteMemUsageLowerThreshold() { this->memUsageLowerThreshold_ = nullptr;};
      inline int32_t getMemUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageLowerThreshold_, 0) };
      inline Shard& setMemUsageLowerThreshold(int32_t memUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(memUsageLowerThreshold_, memUsageLowerThreshold) };


      // memUsageUpperThreshold Field Functions 
      bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
      void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
      inline int32_t getMemUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
      inline Shard& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


      // minShards Field Functions 
      bool hasMinShards() const { return this->minShards_ != nullptr;};
      void deleteMinShards() { this->minShards_ = nullptr;};
      inline int32_t getMinShards() const { DARABONBA_PTR_GET_DEFAULT(minShards_, 0) };
      inline Shard& setMinShards(int32_t minShards) { DARABONBA_PTR_SET_VALUE(minShards_, minShards) };


      // upgrade Field Functions 
      bool hasUpgrade() const { return this->upgrade_ != nullptr;};
      void deleteUpgrade() { this->upgrade_ = nullptr;};
      inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
      inline Shard& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


      // upgradeObservationWindowSize Field Functions 
      bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
      void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
      inline string getUpgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
      inline Shard& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


    protected:
      // Specifies whether to apply the **Shard** configuration of the shard auto scaling feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  The shard auto scaling feature is available only for Tair (Redis OSS-compatible) cloud-native cluster instances on the China site (aliyun.com).
      shared_ptr<bool> apply_ {};
      // Specifies whether to enable automatic shard removal. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  The automatic shard removal feature is in a canary release.
      shared_ptr<bool> downgrade_ {};
      // The observation window of the automatic shard removal feature. The value of this parameter consists of a numeric value and a time unit suffix. The **h** time unit suffix specifies the hour. The **d** time unit suffix specifies the day. Valid values:
      // 
      // *   **1h**
      // *   **2h**
      // *   **3h**
      // *   **1d**
      // *   **7d**
      shared_ptr<string> downgradeObservationWindowSize_ {};
      // The maximum number of shards in the instance. The value must be a positive integer. Valid values: 4 to 32.
      shared_ptr<int32_t> maxShards_ {};
      // The average memory usage threshold that triggers automatic shard removal. Unit: %. Valid values:
      // 
      // *   **10**
      // *   **20**
      // *   **30**
      shared_ptr<int32_t> memUsageLowerThreshold_ {};
      // The average memory usage threshold that triggers automatic shard addition. Unit: %. Valid values:
      // 
      // *   **50**
      // *   **60**
      // *   **70**
      // *   **80**
      // *   **90**
      shared_ptr<int32_t> memUsageUpperThreshold_ {};
      // The minimum number of shards in the instance. The value must be a positive integer. Valid values: 4 to 32.
      shared_ptr<int32_t> minShards_ {};
      // Specifies whether to enable automatic shard addition. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upgrade_ {};
      // The observation window of the automatic shard addition feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
      // 
      // *   **5m**
      // *   **10m**
      // *   **15m**
      // *   **30m**
      shared_ptr<string> upgradeObservationWindowSize_ {};
    };

    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(Apply, apply_);
        DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(Apply, apply_);
        DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apply_ == nullptr
        && this->cpuUsageUpperThreshold_ == nullptr && this->downgradeObservationWindowSize_ == nullptr && this->enable_ == nullptr && this->upgradeObservationWindowSize_ == nullptr; };
      // apply Field Functions 
      bool hasApply() const { return this->apply_ != nullptr;};
      void deleteApply() { this->apply_ = nullptr;};
      inline bool getApply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
      inline Resource& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


      // cpuUsageUpperThreshold Field Functions 
      bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
      void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
      inline int32_t getCpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
      inline Resource& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


      // downgradeObservationWindowSize Field Functions 
      bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
      void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
      inline string getDowngradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
      inline Resource& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Resource& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // upgradeObservationWindowSize Field Functions 
      bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
      void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
      inline string getUpgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
      inline Resource& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


    protected:
      // Specifies whether to apply the **Resource** configuration of the resource auto scaling feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> apply_ {};
      // The average CPU utilization threshold that triggers automatic resource scale-out. Unit: %. Valid values:
      // 
      // *   **70**
      // *   **80**
      // *   **90**
      shared_ptr<int32_t> cpuUsageUpperThreshold_ {};
      // The observation window of the automatic resource scale-in feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
      // 
      // *   **1m**
      // *   **3m**
      // *   **5m**
      // *   **10m**
      // *   **20m**
      // *   **30m**
      shared_ptr<string> downgradeObservationWindowSize_ {};
      // Specifies whether to enable resource auto scaling. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enable_ {};
      // The observation window of the automatic resource scale-out feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
      // 
      // *   **1m**
      // *   **3m**
      // *   **5m**
      // *   **10m**
      // *   **20m**
      // *   **30m**
      shared_ptr<string> upgradeObservationWindowSize_ {};
    };

    class Bandwidth : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bandwidth& obj) { 
        DARABONBA_PTR_TO_JSON(Apply, apply_);
        DARABONBA_PTR_TO_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
        DARABONBA_PTR_TO_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
        DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
        DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
      };
      friend void from_json(const Darabonba::Json& j, Bandwidth& obj) { 
        DARABONBA_PTR_FROM_JSON(Apply, apply_);
        DARABONBA_PTR_FROM_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
        DARABONBA_PTR_FROM_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
        DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
        DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
        DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
      };
      Bandwidth() = default ;
      Bandwidth(const Bandwidth &) = default ;
      Bandwidth(Bandwidth &&) = default ;
      Bandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bandwidth() = default ;
      Bandwidth& operator=(const Bandwidth &) = default ;
      Bandwidth& operator=(Bandwidth &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apply_ == nullptr
        && this->bandwidthUsageLowerThreshold_ == nullptr && this->bandwidthUsageUpperThreshold_ == nullptr && this->downgrade_ == nullptr && this->observationWindowSize_ == nullptr && this->upgrade_ == nullptr; };
      // apply Field Functions 
      bool hasApply() const { return this->apply_ != nullptr;};
      void deleteApply() { this->apply_ = nullptr;};
      inline bool getApply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
      inline Bandwidth& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


      // bandwidthUsageLowerThreshold Field Functions 
      bool hasBandwidthUsageLowerThreshold() const { return this->bandwidthUsageLowerThreshold_ != nullptr;};
      void deleteBandwidthUsageLowerThreshold() { this->bandwidthUsageLowerThreshold_ = nullptr;};
      inline int32_t getBandwidthUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageLowerThreshold_, 0) };
      inline Bandwidth& setBandwidthUsageLowerThreshold(int32_t bandwidthUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageLowerThreshold_, bandwidthUsageLowerThreshold) };


      // bandwidthUsageUpperThreshold Field Functions 
      bool hasBandwidthUsageUpperThreshold() const { return this->bandwidthUsageUpperThreshold_ != nullptr;};
      void deleteBandwidthUsageUpperThreshold() { this->bandwidthUsageUpperThreshold_ = nullptr;};
      inline int32_t getBandwidthUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageUpperThreshold_, 0) };
      inline Bandwidth& setBandwidthUsageUpperThreshold(int32_t bandwidthUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageUpperThreshold_, bandwidthUsageUpperThreshold) };


      // downgrade Field Functions 
      bool hasDowngrade() const { return this->downgrade_ != nullptr;};
      void deleteDowngrade() { this->downgrade_ = nullptr;};
      inline bool getDowngrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
      inline Bandwidth& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


      // observationWindowSize Field Functions 
      bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
      void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
      inline string getObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
      inline Bandwidth& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


      // upgrade Field Functions 
      bool hasUpgrade() const { return this->upgrade_ != nullptr;};
      void deleteUpgrade() { this->upgrade_ = nullptr;};
      inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
      inline Bandwidth& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    protected:
      // Specifies whether to apply the **Bandwidth** configuration of the bandwidth auto scaling feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> apply_ {};
      // The average bandwidth usage threshold that triggers automatic bandwidth downgrade. Unit: %. Valid values:
      // 
      // *   **10**
      // *   **20**
      // *   **30**
      shared_ptr<int32_t> bandwidthUsageLowerThreshold_ {};
      // The average bandwidth usage threshold that triggers automatic bandwidth upgrade. Unit: %. Valid values:
      // 
      // *   **50**
      // *   **60**
      // *   **70**
      // *   **80**
      // *   **90**
      // *   **95**
      shared_ptr<int32_t> bandwidthUsageUpperThreshold_ {};
      // Specifies whether to enable automatic bandwidth downgrade. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> downgrade_ {};
      // The observation window of the bandwidth auto scaling feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
      // 
      // *   **1m**
      // *   **5m**
      // *   **10m**
      // *   **15m**
      // *   **30m**
      shared_ptr<string> observationWindowSize_ {};
      // Specifies whether to enable automatic bandwidth upgrade. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upgrade_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->instanceId_ == nullptr && this->resource_ == nullptr && this->shard_ == nullptr && this->spec_ == nullptr && this->storage_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const ModifyAutoScalingConfigRequest::Bandwidth & getBandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, ModifyAutoScalingConfigRequest::Bandwidth) };
    inline ModifyAutoScalingConfigRequest::Bandwidth getBandwidth() { DARABONBA_PTR_GET(bandwidth_, ModifyAutoScalingConfigRequest::Bandwidth) };
    inline ModifyAutoScalingConfigRequest& setBandwidth(const ModifyAutoScalingConfigRequest::Bandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline ModifyAutoScalingConfigRequest& setBandwidth(ModifyAutoScalingConfigRequest::Bandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAutoScalingConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ModifyAutoScalingConfigRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ModifyAutoScalingConfigRequest::Resource) };
    inline ModifyAutoScalingConfigRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, ModifyAutoScalingConfigRequest::Resource) };
    inline ModifyAutoScalingConfigRequest& setResource(const ModifyAutoScalingConfigRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ModifyAutoScalingConfigRequest& setResource(ModifyAutoScalingConfigRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline const ModifyAutoScalingConfigRequest::Shard & getShard() const { DARABONBA_PTR_GET_CONST(shard_, ModifyAutoScalingConfigRequest::Shard) };
    inline ModifyAutoScalingConfigRequest::Shard getShard() { DARABONBA_PTR_GET(shard_, ModifyAutoScalingConfigRequest::Shard) };
    inline ModifyAutoScalingConfigRequest& setShard(const ModifyAutoScalingConfigRequest::Shard & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
    inline ModifyAutoScalingConfigRequest& setShard(ModifyAutoScalingConfigRequest::Shard && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const ModifyAutoScalingConfigRequest::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, ModifyAutoScalingConfigRequest::Spec) };
    inline ModifyAutoScalingConfigRequest::Spec getSpec() { DARABONBA_PTR_GET(spec_, ModifyAutoScalingConfigRequest::Spec) };
    inline ModifyAutoScalingConfigRequest& setSpec(const ModifyAutoScalingConfigRequest::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ModifyAutoScalingConfigRequest& setSpec(ModifyAutoScalingConfigRequest::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const ModifyAutoScalingConfigRequest::Storage & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, ModifyAutoScalingConfigRequest::Storage) };
    inline ModifyAutoScalingConfigRequest::Storage getStorage() { DARABONBA_PTR_GET(storage_, ModifyAutoScalingConfigRequest::Storage) };
    inline ModifyAutoScalingConfigRequest& setStorage(const ModifyAutoScalingConfigRequest::Storage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline ModifyAutoScalingConfigRequest& setStorage(ModifyAutoScalingConfigRequest::Storage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


  protected:
    // The configuration item of the bandwidth auto scaling feature.
    shared_ptr<ModifyAutoScalingConfigRequest::Bandwidth> bandwidth_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The configuration item of the resource auto scaling feature.
    shared_ptr<ModifyAutoScalingConfigRequest::Resource> resource_ {};
    // The configuration item of the shard auto scaling feature.
    shared_ptr<ModifyAutoScalingConfigRequest::Shard> shard_ {};
    // The configuration item of the specification auto scaling feature.
    shared_ptr<ModifyAutoScalingConfigRequest::Spec> spec_ {};
    // The configuration item of the automatic storage expansion feature.
    shared_ptr<ModifyAutoScalingConfigRequest::Storage> storage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
