// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAutoScalingConfigResponseBody() = default ;
    DescribeAutoScalingConfigResponseBody(const DescribeAutoScalingConfigResponseBody &) = default ;
    DescribeAutoScalingConfigResponseBody(DescribeAutoScalingConfigResponseBody &&) = default ;
    DescribeAutoScalingConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBody() = default ;
    DescribeAutoScalingConfigResponseBody& operator=(const DescribeAutoScalingConfigResponseBody &) = default ;
    DescribeAutoScalingConfigResponseBody& operator=(DescribeAutoScalingConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(Shard, shard_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(Shard, shard_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Storage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Storage& obj) { 
          DARABONBA_PTR_TO_JSON(DiskUsageUpperThreshold, diskUsageUpperThreshold_);
          DARABONBA_PTR_TO_JSON(MaxStorage, maxStorage_);
          DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
        };
        friend void from_json(const Darabonba::Json& j, Storage& obj) { 
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
        virtual bool empty() const override { return this->diskUsageUpperThreshold_ == nullptr
        && this->maxStorage_ == nullptr && this->upgrade_ == nullptr; };
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
        // The average storage usage threshold that triggers automatic storage expansion. Unit: %.
        shared_ptr<int32_t> diskUsageUpperThreshold_ {};
        // The maximum storage size. Unit: GB.
        shared_ptr<int32_t> maxStorage_ {};
        // Indicates whether the automatic storage expansion feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> upgrade_ {};
      };

      class Spec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Spec& obj) { 
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
        virtual bool empty() const override { return this->coolDownTime_ == nullptr
        && this->cpuUsageUpperThreshold_ == nullptr && this->downgrade_ == nullptr && this->maxReadOnlyNodes_ == nullptr && this->maxSpec_ == nullptr && this->memUsageUpperThreshold_ == nullptr
        && this->observationWindowSize_ == nullptr && this->upgrade_ == nullptr; };
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
        // The quiescent period. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> coolDownTime_ {};
        // The average CPU utilization threshold that triggers automatic specification scale-up. Unit: %.
        shared_ptr<int32_t> cpuUsageUpperThreshold_ {};
        // Indicates whether the automatic specification scale-down feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> downgrade_ {};
        // The maximum number of read-only nodes of the instance.
        shared_ptr<int32_t> maxReadOnlyNodes_ {};
        // The maximum specifications to which the cluster can be scaled up. For more information about the specifications of each type of supported database instances, see the following topics:
        // 
        // *   PolarDB for MySQL Cluster Edition instances: [Compute node specifications of PolarDB for MySQL Enterprise Edition](https://help.aliyun.com/document_detail/102542.html)
        // *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: [Specifications](https://help.aliyun.com/document_detail/276974.html)
        shared_ptr<string> maxSpec_ {};
        // The average memory usage threshold that triggers automatic specification scale-up. Unit: %.
        shared_ptr<int32_t> memUsageUpperThreshold_ {};
        // The observation window. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> observationWindowSize_ {};
        // Indicates whether the automatic specification scale-up feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> upgrade_ {};
      };

      class Shard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Shard& obj) { 
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
        virtual bool empty() const override { return this->downgrade_ == nullptr
        && this->downgradeObservationWindowSize_ == nullptr && this->maxShards_ == nullptr && this->memUsageLowerThreshold_ == nullptr && this->memUsageUpperThreshold_ == nullptr && this->minShards_ == nullptr
        && this->upgrade_ == nullptr && this->upgradeObservationWindowSize_ == nullptr; };
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
        // Indicates whether the feature of automatically removing shards is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> downgrade_ {};
        // The observation window of the feature of automatically removing shards. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **1d** indicates one day.
        shared_ptr<string> downgradeObservationWindowSize_ {};
        // The maximum number of shards in the instance.
        shared_ptr<int32_t> maxShards_ {};
        // The average memory usage threshold that triggers automatic removal of shards. Unit: %.
        shared_ptr<int32_t> memUsageLowerThreshold_ {};
        // The average memory usage threshold that triggers automatic adding of shards. Unit: %.
        shared_ptr<int32_t> memUsageUpperThreshold_ {};
        // The minimum number of shards in the instance.
        shared_ptr<int32_t> minShards_ {};
        // Indicates whether the feature of automatically adding shards is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> upgrade_ {};
        // The observation window of the feature of automatically adding shards. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> upgradeObservationWindowSize_ {};
      };

      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(CpuStep, cpuStep_);
          DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
          DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuStep, cpuStep_);
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
        virtual bool empty() const override { return this->cpuStep_ == nullptr
        && this->cpuUsageUpperThreshold_ == nullptr && this->downgradeObservationWindowSize_ == nullptr && this->enable_ == nullptr && this->upgradeObservationWindowSize_ == nullptr; };
        // cpuStep Field Functions 
        bool hasCpuStep() const { return this->cpuStep_ != nullptr;};
        void deleteCpuStep() { this->cpuStep_ = nullptr;};
        inline int32_t getCpuStep() const { DARABONBA_PTR_GET_DEFAULT(cpuStep_, 0) };
        inline Resource& setCpuStep(int32_t cpuStep) { DARABONBA_PTR_SET_VALUE(cpuStep_, cpuStep) };


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
        // The scale-out step size of CPU.
        shared_ptr<int32_t> cpuStep_ {};
        // The average CPU utilization threshold that triggers automatic scale-out of local resources. Unit: %.
        shared_ptr<int32_t> cpuUsageUpperThreshold_ {};
        // The observation window of the automatic scale-in feature for local resources. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> downgradeObservationWindowSize_ {};
        // Indicates whether the auto scaling feature is enabled for local resources. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enable_ {};
        // The observation window of the automatic scale-out feature for local resources. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> upgradeObservationWindowSize_ {};
      };

      class Bandwidth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bandwidth& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
          DARABONBA_PTR_TO_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
          DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
          DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
          DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
        };
        friend void from_json(const Darabonba::Json& j, Bandwidth& obj) { 
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
        virtual bool empty() const override { return this->bandwidthUsageLowerThreshold_ == nullptr
        && this->bandwidthUsageUpperThreshold_ == nullptr && this->downgrade_ == nullptr && this->observationWindowSize_ == nullptr && this->upgrade_ == nullptr; };
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
        // The average bandwidth usage threshold that triggers automatic bandwidth downgrade. Unit: %.
        shared_ptr<int32_t> bandwidthUsageLowerThreshold_ {};
        // The average bandwidth usage threshold that triggers automatic bandwidth adjustment. Unit: %.
        shared_ptr<int32_t> bandwidthUsageUpperThreshold_ {};
        // Indicates whether the automatic bandwidth downgrade feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> downgrade_ {};
        // The observation window of the automatic bandwidth adjustment feature. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
        // 
        // *   **s**: seconds.
        // *   **m**: minutes.
        // *   **h**: hours.
        // *   **d**: days.
        // 
        // >  A value of **5m** indicates 5 minutes.
        shared_ptr<string> observationWindowSize_ {};
        // Indicates whether the automatic bandwidth adjustment feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> upgrade_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->resource_ == nullptr && this->shard_ == nullptr && this->spec_ == nullptr && this->storage_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline const Data::Bandwidth & getBandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, Data::Bandwidth) };
      inline Data::Bandwidth getBandwidth() { DARABONBA_PTR_GET(bandwidth_, Data::Bandwidth) };
      inline Data& setBandwidth(const Data::Bandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
      inline Data& setBandwidth(Data::Bandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const Data::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, Data::Resource) };
      inline Data::Resource getResource() { DARABONBA_PTR_GET(resource_, Data::Resource) };
      inline Data& setResource(const Data::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(Data::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // shard Field Functions 
      bool hasShard() const { return this->shard_ != nullptr;};
      void deleteShard() { this->shard_ = nullptr;};
      inline const Data::Shard & getShard() const { DARABONBA_PTR_GET_CONST(shard_, Data::Shard) };
      inline Data::Shard getShard() { DARABONBA_PTR_GET(shard_, Data::Shard) };
      inline Data& setShard(const Data::Shard & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
      inline Data& setShard(Data::Shard && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline const Data::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, Data::Spec) };
      inline Data::Spec getSpec() { DARABONBA_PTR_GET(spec_, Data::Spec) };
      inline Data& setSpec(const Data::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
      inline Data& setSpec(Data::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline const Data::Storage & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, Data::Storage) };
      inline Data::Storage getStorage() { DARABONBA_PTR_GET(storage_, Data::Storage) };
      inline Data& setStorage(const Data::Storage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
      inline Data& setStorage(Data::Storage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    protected:
      // The configurations of the automatic bandwidth adjustment feature.
      shared_ptr<Data::Bandwidth> bandwidth_ {};
      // The configurations of the auto scaling feature for local resources.
      shared_ptr<Data::Resource> resource_ {};
      // The configurations of the auto scaling feature for shards.
      shared_ptr<Data::Shard> shard_ {};
      // The configurations of the auto scaling feature for specifications.
      shared_ptr<Data::Spec> spec_ {};
      // The configurations of the automatic storage expansion feature.
      shared_ptr<Data::Storage> storage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAutoScalingConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAutoScalingConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAutoScalingConfigResponseBody::Data) };
    inline DescribeAutoScalingConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAutoScalingConfigResponseBody::Data) };
    inline DescribeAutoScalingConfigResponseBody& setData(const DescribeAutoScalingConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAutoScalingConfigResponseBody& setData(DescribeAutoScalingConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAutoScalingConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoScalingConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeAutoScalingConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The configurations of the auto scaling feature for instances.
    shared_ptr<DescribeAutoScalingConfigResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
