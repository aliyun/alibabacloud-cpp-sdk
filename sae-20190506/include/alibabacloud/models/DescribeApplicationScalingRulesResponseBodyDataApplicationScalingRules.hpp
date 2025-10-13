// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& obj) { 
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
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->createTime_ == nullptr && return this->lastDisableTime_ == nullptr && return this->metric_ == nullptr && return this->minReadyInstanceRatio_ == nullptr && return this->minReadyInstances_ == nullptr
        && return this->scaleRuleEnabled_ == nullptr && return this->scaleRuleName_ == nullptr && return this->scaleRuleType_ == nullptr && return this->timer_ == nullptr && return this->updateTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastDisableTime Field Functions 
    bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
    void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
    inline int64_t lastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric & metric() const { DARABONBA_PTR_GET_CONST(metric_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric) };
    inline Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric metric() { DARABONBA_PTR_GET(metric_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setMetric(const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setMetric(Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t minReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t minReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline bool scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleName Field Functions 
    bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
    void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
    inline string scaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer & timer() const { DARABONBA_PTR_GET_CONST(timer_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer) };
    inline Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer timer() { DARABONBA_PTR_GET(timer_, Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setTimer(const Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setTimer(Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the auto scaling policy was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the auto scaling policy was last disabled.
    std::shared_ptr<int64_t> lastDisableTime_ = nullptr;
    // The details of the metric-based auto scaling policy.
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetric> metric_ = nullptr;
    std::shared_ptr<int32_t> minReadyInstanceRatio_ = nullptr;
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
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesTimer> timer_ = nullptr;
    // The time when the auto scaling policy was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
