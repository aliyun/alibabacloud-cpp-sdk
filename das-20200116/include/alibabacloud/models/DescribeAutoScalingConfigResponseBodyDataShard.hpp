// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASHARD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASHARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyDataShard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyDataShard& obj) { 
      DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_TO_JSON(MaxShards, maxShards_);
      DARABONBA_PTR_TO_JSON(MemUsageLowerThreshold, memUsageLowerThreshold_);
      DARABONBA_PTR_TO_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(MinShards, minShards_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
      DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyDataShard& obj) { 
      DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_FROM_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_FROM_JSON(MaxShards, maxShards_);
      DARABONBA_PTR_FROM_JSON(MemUsageLowerThreshold, memUsageLowerThreshold_);
      DARABONBA_PTR_FROM_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(MinShards, minShards_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
      DARABONBA_PTR_FROM_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    DescribeAutoScalingConfigResponseBodyDataShard() = default ;
    DescribeAutoScalingConfigResponseBodyDataShard(const DescribeAutoScalingConfigResponseBodyDataShard &) = default ;
    DescribeAutoScalingConfigResponseBodyDataShard(DescribeAutoScalingConfigResponseBodyDataShard &&) = default ;
    DescribeAutoScalingConfigResponseBodyDataShard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyDataShard() = default ;
    DescribeAutoScalingConfigResponseBodyDataShard& operator=(const DescribeAutoScalingConfigResponseBodyDataShard &) = default ;
    DescribeAutoScalingConfigResponseBodyDataShard& operator=(DescribeAutoScalingConfigResponseBodyDataShard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downgrade_ != nullptr
        && this->downgradeObservationWindowSize_ != nullptr && this->maxShards_ != nullptr && this->memUsageLowerThreshold_ != nullptr && this->memUsageUpperThreshold_ != nullptr && this->minShards_ != nullptr
        && this->upgrade_ != nullptr && this->upgradeObservationWindowSize_ != nullptr; };
    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // downgradeObservationWindowSize Field Functions 
    bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
    void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
    inline string downgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


    // maxShards Field Functions 
    bool hasMaxShards() const { return this->maxShards_ != nullptr;};
    void deleteMaxShards() { this->maxShards_ = nullptr;};
    inline int32_t maxShards() const { DARABONBA_PTR_GET_DEFAULT(maxShards_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setMaxShards(int32_t maxShards) { DARABONBA_PTR_SET_VALUE(maxShards_, maxShards) };


    // memUsageLowerThreshold Field Functions 
    bool hasMemUsageLowerThreshold() const { return this->memUsageLowerThreshold_ != nullptr;};
    void deleteMemUsageLowerThreshold() { this->memUsageLowerThreshold_ = nullptr;};
    inline int32_t memUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageLowerThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setMemUsageLowerThreshold(int32_t memUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(memUsageLowerThreshold_, memUsageLowerThreshold) };


    // memUsageUpperThreshold Field Functions 
    bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
    void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
    inline int32_t memUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


    // minShards Field Functions 
    bool hasMinShards() const { return this->minShards_ != nullptr;};
    void deleteMinShards() { this->minShards_ = nullptr;};
    inline int32_t minShards() const { DARABONBA_PTR_GET_DEFAULT(minShards_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setMinShards(int32_t minShards) { DARABONBA_PTR_SET_VALUE(minShards_, minShards) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


    // upgradeObservationWindowSize Field Functions 
    bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
    void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
    inline string upgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataShard& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


  protected:
    // Indicates whether the feature of automatically removing shards is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The observation window of the feature of automatically removing shards. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **1d** indicates one day.
    std::shared_ptr<string> downgradeObservationWindowSize_ = nullptr;
    // The maximum number of shards in the instance.
    std::shared_ptr<int32_t> maxShards_ = nullptr;
    // The average memory usage threshold that triggers automatic removal of shards. Unit: %.
    std::shared_ptr<int32_t> memUsageLowerThreshold_ = nullptr;
    // The average memory usage threshold that triggers automatic adding of shards. Unit: %.
    std::shared_ptr<int32_t> memUsageUpperThreshold_ = nullptr;
    // The minimum number of shards in the instance.
    std::shared_ptr<int32_t> minShards_ = nullptr;
    // Indicates whether the feature of automatically adding shards is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
    // The observation window of the feature of automatically adding shards. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **5m** indicates 5 minutes.
    std::shared_ptr<string> upgradeObservationWindowSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
