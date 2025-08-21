// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATARESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATARESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyDataResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyDataResource& obj) { 
      DARABONBA_PTR_TO_JSON(CpuStep, cpuStep_);
      DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyDataResource& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuStep, cpuStep_);
      DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(DowngradeObservationWindowSize, downgradeObservationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(UpgradeObservationWindowSize, upgradeObservationWindowSize_);
    };
    DescribeAutoScalingConfigResponseBodyDataResource() = default ;
    DescribeAutoScalingConfigResponseBodyDataResource(const DescribeAutoScalingConfigResponseBodyDataResource &) = default ;
    DescribeAutoScalingConfigResponseBodyDataResource(DescribeAutoScalingConfigResponseBodyDataResource &&) = default ;
    DescribeAutoScalingConfigResponseBodyDataResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyDataResource() = default ;
    DescribeAutoScalingConfigResponseBodyDataResource& operator=(const DescribeAutoScalingConfigResponseBodyDataResource &) = default ;
    DescribeAutoScalingConfigResponseBodyDataResource& operator=(DescribeAutoScalingConfigResponseBodyDataResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuStep_ != nullptr
        && this->cpuUsageUpperThreshold_ != nullptr && this->downgradeObservationWindowSize_ != nullptr && this->enable_ != nullptr && this->upgradeObservationWindowSize_ != nullptr; };
    // cpuStep Field Functions 
    bool hasCpuStep() const { return this->cpuStep_ != nullptr;};
    void deleteCpuStep() { this->cpuStep_ = nullptr;};
    inline int32_t cpuStep() const { DARABONBA_PTR_GET_DEFAULT(cpuStep_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataResource& setCpuStep(int32_t cpuStep) { DARABONBA_PTR_SET_VALUE(cpuStep_, cpuStep) };


    // cpuUsageUpperThreshold Field Functions 
    bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
    void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
    inline int32_t cpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataResource& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


    // downgradeObservationWindowSize Field Functions 
    bool hasDowngradeObservationWindowSize() const { return this->downgradeObservationWindowSize_ != nullptr;};
    void deleteDowngradeObservationWindowSize() { this->downgradeObservationWindowSize_ = nullptr;};
    inline string downgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(downgradeObservationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataResource& setDowngradeObservationWindowSize(string downgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(downgradeObservationWindowSize_, downgradeObservationWindowSize) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataResource& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // upgradeObservationWindowSize Field Functions 
    bool hasUpgradeObservationWindowSize() const { return this->upgradeObservationWindowSize_ != nullptr;};
    void deleteUpgradeObservationWindowSize() { this->upgradeObservationWindowSize_ = nullptr;};
    inline string upgradeObservationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeObservationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataResource& setUpgradeObservationWindowSize(string upgradeObservationWindowSize) { DARABONBA_PTR_SET_VALUE(upgradeObservationWindowSize_, upgradeObservationWindowSize) };


  protected:
    // The scale-out step size of CPU.
    std::shared_ptr<int32_t> cpuStep_ = nullptr;
    // The average CPU utilization threshold that triggers automatic scale-out of local resources. Unit: %.
    std::shared_ptr<int32_t> cpuUsageUpperThreshold_ = nullptr;
    // The observation window of the automatic scale-in feature for local resources. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **5m** indicates 5 minutes.
    std::shared_ptr<string> downgradeObservationWindowSize_ = nullptr;
    // Indicates whether the auto scaling feature is enabled for local resources. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enable_ = nullptr;
    // The observation window of the automatic scale-out feature for local resources. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
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
