// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATABANDWIDTH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATABANDWIDTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyDataBandwidth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyDataBandwidth& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
      DARABONBA_PTR_TO_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyDataBandwidth& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
      DARABONBA_PTR_FROM_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    DescribeAutoScalingConfigResponseBodyDataBandwidth() = default ;
    DescribeAutoScalingConfigResponseBodyDataBandwidth(const DescribeAutoScalingConfigResponseBodyDataBandwidth &) = default ;
    DescribeAutoScalingConfigResponseBodyDataBandwidth(DescribeAutoScalingConfigResponseBodyDataBandwidth &&) = default ;
    DescribeAutoScalingConfigResponseBodyDataBandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyDataBandwidth() = default ;
    DescribeAutoScalingConfigResponseBodyDataBandwidth& operator=(const DescribeAutoScalingConfigResponseBodyDataBandwidth &) = default ;
    DescribeAutoScalingConfigResponseBodyDataBandwidth& operator=(DescribeAutoScalingConfigResponseBodyDataBandwidth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthUsageLowerThreshold_ != nullptr
        && this->bandwidthUsageUpperThreshold_ != nullptr && this->downgrade_ != nullptr && this->observationWindowSize_ != nullptr && this->upgrade_ != nullptr; };
    // bandwidthUsageLowerThreshold Field Functions 
    bool hasBandwidthUsageLowerThreshold() const { return this->bandwidthUsageLowerThreshold_ != nullptr;};
    void deleteBandwidthUsageLowerThreshold() { this->bandwidthUsageLowerThreshold_ = nullptr;};
    inline int32_t bandwidthUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageLowerThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataBandwidth& setBandwidthUsageLowerThreshold(int32_t bandwidthUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageLowerThreshold_, bandwidthUsageLowerThreshold) };


    // bandwidthUsageUpperThreshold Field Functions 
    bool hasBandwidthUsageUpperThreshold() const { return this->bandwidthUsageUpperThreshold_ != nullptr;};
    void deleteBandwidthUsageUpperThreshold() { this->bandwidthUsageUpperThreshold_ = nullptr;};
    inline int32_t bandwidthUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataBandwidth& setBandwidthUsageUpperThreshold(int32_t bandwidthUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageUpperThreshold_, bandwidthUsageUpperThreshold) };


    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataBandwidth& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // observationWindowSize Field Functions 
    bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
    void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
    inline string observationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataBandwidth& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataBandwidth& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // The average bandwidth usage threshold that triggers automatic bandwidth downgrade. Unit: %.
    std::shared_ptr<int32_t> bandwidthUsageLowerThreshold_ = nullptr;
    // The average bandwidth usage threshold that triggers automatic bandwidth adjustment. Unit: %.
    std::shared_ptr<int32_t> bandwidthUsageUpperThreshold_ = nullptr;
    // Indicates whether the automatic bandwidth downgrade feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The observation window of the automatic bandwidth adjustment feature. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **5m** indicates 5 minutes.
    std::shared_ptr<string> observationWindowSize_ = nullptr;
    // Indicates whether the automatic bandwidth adjustment feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
