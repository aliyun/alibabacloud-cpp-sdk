// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequestResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequestResource& obj) { 
      DARABONBA_PTR_TO_JSON(Apply, apply_);
      DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequestResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Apply, apply_);
      DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    ModifyAutoScalingConfigRequestResource() = default ;
    ModifyAutoScalingConfigRequestResource(const ModifyAutoScalingConfigRequestResource &) = default ;
    ModifyAutoScalingConfigRequestResource(ModifyAutoScalingConfigRequestResource &&) = default ;
    ModifyAutoScalingConfigRequestResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequestResource() = default ;
    ModifyAutoScalingConfigRequestResource& operator=(const ModifyAutoScalingConfigRequestResource &) = default ;
    ModifyAutoScalingConfigRequestResource& operator=(ModifyAutoScalingConfigRequestResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apply_ == nullptr
        && return this->cpuUsageUpperThreshold_ == nullptr && return this->downgradeObservationWindowSize_ == nullptr && return this->enable_ == nullptr && return this->upgradeObservationWindowSize_ == nullptr; };
    // apply Field Functions 
    bool hasApply() const { return this->apply_ != nullptr;};
    void deleteApply() { this->apply_ = nullptr;};
    inline bool apply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
    inline ModifyAutoScalingConfigRequestResource& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


    // cpuUsageUpperThreshold Field Functions 
    bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
    void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
    inline int32_t cpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestResource& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


    // downgradeObservationWindowSize Field Functions 
    bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
    void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
    inline string downgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestResource& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyAutoScalingConfigRequestResource& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeObservationWindowSize Field Functions 
    bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
    void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
    inline string upgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestResource& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


  protected:
    // Specifies whether to apply the **Resource** configuration of the resource auto scaling feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> apply_ = nullptr;
    // The average CPU utilization threshold that triggers automatic resource scale-out. Unit: %. Valid values:
    // 
    // *   **70**
    // *   **80**
    // *   **90**
    std::shared_ptr<int32_t> cpuUsageUpperThreshold_ = nullptr;
    // The observation window of the automatic resource scale-in feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
    // 
    // *   **1m**
    // *   **3m**
    // *   **5m**
    // *   **10m**
    // *   **20m**
    // *   **30m**
    std::shared_ptr<string> downgradeObservationWindowSize_ = nullptr;
    // Specifies whether to enable resource auto scaling. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enable_ = nullptr;
    // The observation window of the automatic resource scale-out feature. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute. Valid values:
    // 
    // *   **1m**
    // *   **3m**
    // *   **5m**
    // *   **10m**
    // *   **20m**
    // *   **30m**
    std::shared_ptr<string> upgradeObservationWindowSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
