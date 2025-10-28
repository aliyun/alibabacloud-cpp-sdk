// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTBANDWIDTH_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTBANDWIDTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequestBandwidth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequestBandwidth& obj) { 
      DARABONBA_PTR_TO_JSON(Apply, apply_);
      DARABONBA_PTR_TO_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
      DARABONBA_PTR_TO_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequestBandwidth& obj) { 
      DARABONBA_PTR_FROM_JSON(Apply, apply_);
      DARABONBA_PTR_FROM_JSON(BandwidthUsageLowerThreshold, bandwidthUsageLowerThreshold_);
      DARABONBA_PTR_FROM_JSON(BandwidthUsageUpperThreshold, bandwidthUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    ModifyAutoScalingConfigRequestBandwidth() = default ;
    ModifyAutoScalingConfigRequestBandwidth(const ModifyAutoScalingConfigRequestBandwidth &) = default ;
    ModifyAutoScalingConfigRequestBandwidth(ModifyAutoScalingConfigRequestBandwidth &&) = default ;
    ModifyAutoScalingConfigRequestBandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequestBandwidth() = default ;
    ModifyAutoScalingConfigRequestBandwidth& operator=(const ModifyAutoScalingConfigRequestBandwidth &) = default ;
    ModifyAutoScalingConfigRequestBandwidth& operator=(ModifyAutoScalingConfigRequestBandwidth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apply_ == nullptr
        && return this->bandwidthUsageLowerThreshold_ == nullptr && return this->bandwidthUsageUpperThreshold_ == nullptr && return this->downgrade_ == nullptr && return this->observationWindowSize_ == nullptr && return this->upgrade_ == nullptr; };
    // apply Field Functions 
    bool hasApply() const { return this->apply_ != nullptr;};
    void deleteApply() { this->apply_ = nullptr;};
    inline bool apply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
    inline ModifyAutoScalingConfigRequestBandwidth& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


    // bandwidthUsageLowerThreshold Field Functions 
    bool hasBandwidthUsageLowerThreshold() const { return this->bandwidthUsageLowerThreshold_ != nullptr;};
    void deleteBandwidthUsageLowerThreshold() { this->bandwidthUsageLowerThreshold_ = nullptr;};
    inline int32_t bandwidthUsageLowerThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageLowerThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestBandwidth& setBandwidthUsageLowerThreshold(int32_t bandwidthUsageLowerThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageLowerThreshold_, bandwidthUsageLowerThreshold) };


    // bandwidthUsageUpperThreshold Field Functions 
    bool hasBandwidthUsageUpperThreshold() const { return this->bandwidthUsageUpperThreshold_ != nullptr;};
    void deleteBandwidthUsageUpperThreshold() { this->bandwidthUsageUpperThreshold_ = nullptr;};
    inline int32_t bandwidthUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(bandwidthUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestBandwidth& setBandwidthUsageUpperThreshold(int32_t bandwidthUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(bandwidthUsageUpperThreshold_, bandwidthUsageUpperThreshold) };


    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline ModifyAutoScalingConfigRequestBandwidth& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // observationWindowSize Field Functions 
    bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
    void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
    inline string observationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestBandwidth& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline ModifyAutoScalingConfigRequestBandwidth& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // Specifies whether to apply the **Bandwidth** configuration of the bandwidth auto scaling feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> apply_ = nullptr;
    // The average bandwidth usage threshold that triggers automatic bandwidth downgrade. Unit: %. Valid values:
    // 
    // *   **10**
    // *   **20**
    // *   **30**
    std::shared_ptr<int32_t> bandwidthUsageLowerThreshold_ = nullptr;
    // The average bandwidth usage threshold that triggers automatic bandwidth upgrade. Unit: %. Valid values:
    // 
    // *   **50**
    // *   **60**
    // *   **70**
    // *   **80**
    // *   **90**
    // *   **95**
    std::shared_ptr<int32_t> bandwidthUsageUpperThreshold_ = nullptr;
    // Specifies whether to enable automatic bandwidth downgrade. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The observation window of the bandwidth auto scaling feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
    // 
    // *   **1m**
    // *   **5m**
    // *   **10m**
    // *   **15m**
    // *   **30m**
    std::shared_ptr<string> observationWindowSize_ = nullptr;
    // Specifies whether to enable automatic bandwidth upgrade. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
