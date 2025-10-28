// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSHARD_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSHARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequestShard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequestShard& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequestShard& obj) { 
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
    ModifyAutoScalingConfigRequestShard() = default ;
    ModifyAutoScalingConfigRequestShard(const ModifyAutoScalingConfigRequestShard &) = default ;
    ModifyAutoScalingConfigRequestShard(ModifyAutoScalingConfigRequestShard &&) = default ;
    ModifyAutoScalingConfigRequestShard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequestShard() = default ;
    ModifyAutoScalingConfigRequestShard& operator=(const ModifyAutoScalingConfigRequestShard &) = default ;
    ModifyAutoScalingConfigRequestShard& operator=(ModifyAutoScalingConfigRequestShard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apply_ == nullptr
        && return this->downgrade_ == nullptr && return this->downgradeObservationWindowSize_ == nullptr && return this->maxShards_ == nullptr && return this->memUsageLowerThreshold_ == nullptr && return this->memUsageUpperThreshold_ == nullptr
        && return this->minShards_ == nullptr && return this->upgrade_ == nullptr && return this->upgradeObservationWindowSize_ == nullptr; };
    // apply Field Functions 
    bool hasApply() const { return this->apply_ != nullptr;};
    void deleteApply() { this->apply_ = nullptr;};
    inline bool apply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
    inline ModifyAutoScalingConfigRequestShard& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline ModifyAutoScalingConfigRequestShard& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // downgradeObservationWindowSize Field Functions 
    bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
    void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
    inline string downgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestShard& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


    // maxShards Field Functions 
    bool hasMaxShards() const { return this->maxShards_ != nullptr;};
    void deleteMaxShards() { this->maxShards_ = nullptr;};
    inline int32_t maxShards() const { DARABONBA_PTR_GET_DEFAULT(maxShards_, 0) };
    inline ModifyAutoScalingConfigRequestShard& setMaxShards(int32_t maxShards) { DARABONBA_PTR_SET_VALUE(maxShards_, maxShards) };


    // memUsageLowerThreshold Field Functions 
    bool hasMemUsageLowerThreshold() const { return this->memUsageLowerThreshold_ != nullptr;};
    void deleteMemUsageLowerThreshold() { this->memUsageLowerThreshold_ = nullptr;};
    inline int32_t memUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageLowerThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestShard& setMemUsageLowerThreshold(int32_t memUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(memUsageLowerThreshold_, memUsageLowerThreshold) };


    // memUsageUpperThreshold Field Functions 
    bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
    void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
    inline int32_t memUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestShard& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


    // minShards Field Functions 
    bool hasMinShards() const { return this->minShards_ != nullptr;};
    void deleteMinShards() { this->minShards_ = nullptr;};
    inline int32_t minShards() const { DARABONBA_PTR_GET_DEFAULT(minShards_, 0) };
    inline ModifyAutoScalingConfigRequestShard& setMinShards(int32_t minShards) { DARABONBA_PTR_SET_VALUE(minShards_, minShards) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline ModifyAutoScalingConfigRequestShard& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    // upgradeObservationWindowSize Field Functions 
    bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
    void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
    inline string upgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestShard& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


  protected:
    // Specifies whether to apply the **Shard** configuration of the shard auto scaling feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  The shard auto scaling feature is available only for Tair (Redis OSS-compatible) cloud-native cluster instances on the China site (aliyun.com).
    std::shared_ptr<bool> apply_ = nullptr;
    // Specifies whether to enable automatic shard removal. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  The automatic shard removal feature is in a canary release.
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The observation window of the automatic shard removal feature. The value of this parameter consists of a numeric value and a time unit suffix. The **h** time unit suffix specifies the hour. The **d** time unit suffix specifies the day. Valid values:
    // 
    // *   **1h**
    // *   **2h**
    // *   **3h**
    // *   **1d**
    // *   **7d**
    std::shared_ptr<string> downgradeObservationWindowSize_ = nullptr;
    // The maximum number of shards in the instance. The value must be a positive integer. Valid values: 4 to 32.
    std::shared_ptr<int32_t> maxShards_ = nullptr;
    // The average memory usage threshold that triggers automatic shard removal. Unit: %. Valid values:
    // 
    // *   **10**
    // *   **20**
    // *   **30**
    std::shared_ptr<int32_t> memUsageLowerThreshold_ = nullptr;
    // The average memory usage threshold that triggers automatic shard addition. Unit: %. Valid values:
    // 
    // *   **50**
    // *   **60**
    // *   **70**
    // *   **80**
    // *   **90**
    std::shared_ptr<int32_t> memUsageUpperThreshold_ = nullptr;
    // The minimum number of shards in the instance. The value must be a positive integer. Valid values: 4 to 32.
    std::shared_ptr<int32_t> minShards_ = nullptr;
    // Specifies whether to enable automatic shard addition. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
    // The observation window of the automatic shard addition feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
    // 
    // *   **5m**
    // *   **10m**
    // *   **15m**
    // *   **30m**
    std::shared_ptr<string> upgradeObservationWindowSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
