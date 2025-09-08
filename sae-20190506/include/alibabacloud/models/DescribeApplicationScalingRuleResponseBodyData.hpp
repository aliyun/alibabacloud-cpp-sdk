// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetric.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_TO_JSON(Timer, timer_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_FROM_JSON(Timer, timer_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeApplicationScalingRuleResponseBodyData() = default ;
    DescribeApplicationScalingRuleResponseBodyData(const DescribeApplicationScalingRuleResponseBodyData &) = default ;
    DescribeApplicationScalingRuleResponseBodyData(DescribeApplicationScalingRuleResponseBodyData &&) = default ;
    DescribeApplicationScalingRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBodyData() = default ;
    DescribeApplicationScalingRuleResponseBodyData& operator=(const DescribeApplicationScalingRuleResponseBodyData &) = default ;
    DescribeApplicationScalingRuleResponseBodyData& operator=(DescribeApplicationScalingRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->createTime_ != nullptr && this->lastDisableTime_ != nullptr && this->metric_ != nullptr && this->minReadyInstanceRatio_ != nullptr && this->minReadyInstances_ != nullptr
        && this->scaleRuleEnabled_ != nullptr && this->scaleRuleName_ != nullptr && this->scaleRuleType_ != nullptr && this->timer_ != nullptr && this->updateTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationScalingRuleResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastDisableTime Field Functions 
    bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
    void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
    inline int64_t lastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyData& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const Models::DescribeApplicationScalingRuleResponseBodyDataMetric & metric() const { DARABONBA_PTR_GET_CONST(metric_, Models::DescribeApplicationScalingRuleResponseBodyDataMetric) };
    inline Models::DescribeApplicationScalingRuleResponseBodyDataMetric metric() { DARABONBA_PTR_GET(metric_, Models::DescribeApplicationScalingRuleResponseBodyDataMetric) };
    inline DescribeApplicationScalingRuleResponseBodyData& setMetric(const Models::DescribeApplicationScalingRuleResponseBodyDataMetric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline DescribeApplicationScalingRuleResponseBodyData& setMetric(Models::DescribeApplicationScalingRuleResponseBodyDataMetric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t minReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline DescribeApplicationScalingRuleResponseBodyData& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t minReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline DescribeApplicationScalingRuleResponseBodyData& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline bool scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
    inline DescribeApplicationScalingRuleResponseBodyData& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleName Field Functions 
    bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
    void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
    inline string scaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
    inline DescribeApplicationScalingRuleResponseBodyData& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline DescribeApplicationScalingRuleResponseBodyData& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const Models::DescribeApplicationScalingRuleResponseBodyDataTimer & timer() const { DARABONBA_PTR_GET_CONST(timer_, Models::DescribeApplicationScalingRuleResponseBodyDataTimer) };
    inline Models::DescribeApplicationScalingRuleResponseBodyDataTimer timer() { DARABONBA_PTR_GET(timer_, Models::DescribeApplicationScalingRuleResponseBodyDataTimer) };
    inline DescribeApplicationScalingRuleResponseBodyData& setTimer(const Models::DescribeApplicationScalingRuleResponseBodyDataTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline DescribeApplicationScalingRuleResponseBodyData& setTimer(Models::DescribeApplicationScalingRuleResponseBodyDataTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the auto scaling policy was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the auto scaling policy was last disabled.
    std::shared_ptr<int64_t> lastDisableTime_ = nullptr;
    // The details of the metric-based auto scaling policy.
    std::shared_ptr<Models::DescribeApplicationScalingRuleResponseBodyDataMetric> metric_ = nullptr;
    // The ratio of the minimum number of available instances to the current number of instances. Valid values:
    // 
    // *   **-1** (default value): The minimum number of available instances is not determined based on this parameter.
    // *   **0 to 100**: The minimum number of available instances is calculated by using the following formula: Number of existing instances × Value of MinReadyInstanceRatio × 100%. The calculation result is rounded up to the nearest integer. For example, if the number of existing instances is 5 and MinReadyInstanceRatio is set to 50, the minimum number of available instances is 3.
    // 
    // >  If the **MinReadyInstanceRatio** and **MinReadyInstanceRatio** parameters are configured and the **MinReadyInstanceRatio** parameter is set to a number from 0 to 100, the value of the MinReadyInstanceRatio parameter takes precedence. For example, if the **MinReadyInstances** parameter is set to **5**, and the **MinReadyInstanceRatio** parameter is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Nmber of existing instances × **50**.
    std::shared_ptr<int32_t> minReadyInstanceRatio_ = nullptr;
    // The minimum number of available instances. Valid values:
    // 
    // *   If you set the value to **0**, business is interrupted when the application is updated.
    // *   If you set this property to -1, the system calculates a recommended value as the minimum number of available instances by using the following formula: Recommended value = Number of existing instances × 25%. The calculation result is rounded up to the nearest integer. For example, if the number of existing instances is 5, the recommended value is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // >  To ensure business continuity, make sure that at least one instance is available during application deployment and rollback.
    std::shared_ptr<int32_t> minReadyInstances_ = nullptr;
    // Indicates whether the auto scaling policy is enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> scaleRuleEnabled_ = nullptr;
    // The name of the auto scaling policy.
    std::shared_ptr<string> scaleRuleName_ = nullptr;
    // The type of the auto scaling policy. Valid values:
    // 
    // *   **timing**: the scheduled auto scaling policy.
    // *   **metric**: the metric-based auto scaling policy.
    // *   **mix**: the hybrid auto scaling policy.
    std::shared_ptr<string> scaleRuleType_ = nullptr;
    // The details of the scheduled auto scaling policy.
    std::shared_ptr<Models::DescribeApplicationScalingRuleResponseBodyDataTimer> timer_ = nullptr;
    // The time when the auto scaling policy was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
