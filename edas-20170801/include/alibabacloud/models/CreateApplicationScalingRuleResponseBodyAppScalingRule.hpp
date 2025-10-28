// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyAppScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyAppScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Behaviour, behaviour_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_TO_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyAppScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Behaviour, behaviour_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastDisableTime, lastDisableTime_);
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleName, scaleRuleName_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateApplicationScalingRuleResponseBodyAppScalingRule() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRule(const CreateApplicationScalingRuleResponseBodyAppScalingRule &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRule(CreateApplicationScalingRuleResponseBodyAppScalingRule &&) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyAppScalingRule() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRule& operator=(const CreateApplicationScalingRuleResponseBodyAppScalingRule &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRule& operator=(CreateApplicationScalingRuleResponseBodyAppScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->behaviour_ == nullptr && return this->createTime_ == nullptr && return this->lastDisableTime_ == nullptr && return this->maxReplicas_ == nullptr && return this->metric_ == nullptr
        && return this->minReplicas_ == nullptr && return this->scaleRuleEnabled_ == nullptr && return this->scaleRuleName_ == nullptr && return this->scaleRuleType_ == nullptr && return this->trigger_ == nullptr
        && return this->updateTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // behaviour Field Functions 
    bool hasBehaviour() const { return this->behaviour_ != nullptr;};
    void deleteBehaviour() { this->behaviour_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour & behaviour() const { DARABONBA_PTR_GET_CONST(behaviour_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour) };
    inline Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour behaviour() { DARABONBA_PTR_GET(behaviour_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setBehaviour(const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour & behaviour) { DARABONBA_PTR_SET_VALUE(behaviour_, behaviour) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setBehaviour(Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour && behaviour) { DARABONBA_PTR_SET_RVALUE(behaviour_, behaviour) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastDisableTime Field Functions 
    bool hasLastDisableTime() const { return this->lastDisableTime_ != nullptr;};
    void deleteLastDisableTime() { this->lastDisableTime_ = nullptr;};
    inline int64_t lastDisableTime() const { DARABONBA_PTR_GET_DEFAULT(lastDisableTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setLastDisableTime(int64_t lastDisableTime) { DARABONBA_PTR_SET_VALUE(lastDisableTime_, lastDisableTime) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric & metric() const { DARABONBA_PTR_GET_CONST(metric_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric) };
    inline Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric metric() { DARABONBA_PTR_GET(metric_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setMetric(const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setMetric(Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline bool scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, false) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setScaleRuleEnabled(bool scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleName Field Functions 
    bool hasScaleRuleName() const { return this->scaleRuleName_ != nullptr;};
    void deleteScaleRuleName() { this->scaleRuleName_ = nullptr;};
    inline string scaleRuleName() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleName_, "") };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setScaleRuleName(string scaleRuleName) { DARABONBA_PTR_SET_VALUE(scaleRuleName_, scaleRuleName) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger) };
    inline Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setTrigger(const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setTrigger(Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the application to which the auto scaling policy belongs.
    std::shared_ptr<string> appId_ = nullptr;
    // The scaling behavior.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour> behaviour_ = nullptr;
    // The timestamp when the auto scaling policy was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The timestamp when the auto scaling policy was last disabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastDisableTime_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleMetric> metric_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    // Indicates whether the auto scaling policy is enabled. Valid values:
    // 
    // *   **true**: The auto scaling policy is enabled.
    // *   **false**: The auto scaling policy is disabled.
    std::shared_ptr<bool> scaleRuleEnabled_ = nullptr;
    // The name of the auto scaling policy.
    std::shared_ptr<string> scaleRuleName_ = nullptr;
    // The type of the rule. Only trigger is supported.
    std::shared_ptr<string> scaleRuleType_ = nullptr;
    // The configurations of the trigger.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleTrigger> trigger_ = nullptr;
    // The timestamp when the auto scaling policy was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
