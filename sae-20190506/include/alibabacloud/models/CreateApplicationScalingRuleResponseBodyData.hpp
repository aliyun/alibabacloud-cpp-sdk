// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyDataMetric.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyDataTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_TO_JSON(Timer, timer_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_FROM_JSON(Timer, timer_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateApplicationScalingRuleResponseBodyData() = default ;
    CreateApplicationScalingRuleResponseBodyData(const CreateApplicationScalingRuleResponseBodyData &) = default ;
    CreateApplicationScalingRuleResponseBodyData(CreateApplicationScalingRuleResponseBodyData &&) = default ;
    CreateApplicationScalingRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyData() = default ;
    CreateApplicationScalingRuleResponseBodyData& operator=(const CreateApplicationScalingRuleResponseBodyData &) = default ;
    CreateApplicationScalingRuleResponseBodyData& operator=(CreateApplicationScalingRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->createTime_ == nullptr && return this->enableIdle_ == nullptr && return this->lastDisableTime_ == nullptr && return this->metric_ == nullptr && return this->scaleRuleEnabled_ == nullptr
        && return this->scaleRuleName_ == nullptr && return this->scaleRuleType_ == nullptr && return this->timer_ == nullptr && return this->updateTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateApplicationScalingRuleResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool enableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline CreateApplicationScalingRuleResponseBodyData& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // lastDisableTime Field Functions 
    bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
    void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
    inline int64_t lastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyData& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyDataMetric & metric() const { DARABONBA_PTR_GET_CONST(metric_, Models::CreateApplicationScalingRuleResponseBodyDataMetric) };
    inline Models::CreateApplicationScalingRuleResponseBodyDataMetric metric() { DARABONBA_PTR_GET(metric_, Models::CreateApplicationScalingRuleResponseBodyDataMetric) };
    inline CreateApplicationScalingRuleResponseBodyData& setMetric(const Models::CreateApplicationScalingRuleResponseBodyDataMetric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline CreateApplicationScalingRuleResponseBodyData& setMetric(Models::CreateApplicationScalingRuleResponseBodyDataMetric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline bool scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
    inline CreateApplicationScalingRuleResponseBodyData& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleName Field Functions 
    bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
    void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
    inline string scaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
    inline CreateApplicationScalingRuleResponseBodyData& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline CreateApplicationScalingRuleResponseBodyData& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyDataTimer & timer() const { DARABONBA_PTR_GET_CONST(timer_, Models::CreateApplicationScalingRuleResponseBodyDataTimer) };
    inline Models::CreateApplicationScalingRuleResponseBodyDataTimer timer() { DARABONBA_PTR_GET(timer_, Models::CreateApplicationScalingRuleResponseBodyDataTimer) };
    inline CreateApplicationScalingRuleResponseBodyData& setTimer(const Models::CreateApplicationScalingRuleResponseBodyDataTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline CreateApplicationScalingRuleResponseBodyData& setTimer(Models::CreateApplicationScalingRuleResponseBodyDataTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // null
    std::shared_ptr<string> appId_ = nullptr;
    // null null
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> enableIdle_ = nullptr;
    // null
    std::shared_ptr<int64_t> lastDisableTime_ = nullptr;
    // The details of the metric-based auto scaling policy.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyDataMetric> metric_ = nullptr;
    // null null
    // 
    // *   **null**
    // *   **null**
    std::shared_ptr<bool> scaleRuleEnabled_ = nullptr;
    // The name of the auto scaling policy.
    std::shared_ptr<string> scaleRuleName_ = nullptr;
    // null null
    // 
    // *   **null**
    // *   **metric**: a metric-based auto scaling policy.
    // *   **mix**: a hybrid auto scaling policy.
    std::shared_ptr<string> scaleRuleType_ = nullptr;
    // The details of the scheduled auto scaling policy.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyDataTimer> timer_ = nullptr;
    // null null
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
