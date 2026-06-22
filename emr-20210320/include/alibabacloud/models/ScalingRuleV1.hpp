// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULEV1_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULEV1_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingRuleV1 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRuleV1& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleParam, ruleParam_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScalingConfigBizId, scalingConfigBizId_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRuleV1& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentType, adjustmentType_);
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleParam, ruleParam_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigBizId, scalingConfigBizId_);
    };
    ScalingRuleV1() = default ;
    ScalingRuleV1(const ScalingRuleV1 &) = default ;
    ScalingRuleV1(ScalingRuleV1 &&) = default ;
    ScalingRuleV1(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRuleV1() = default ;
    ScalingRuleV1& operator=(const ScalingRuleV1 &) = default ;
    ScalingRuleV1& operator=(ScalingRuleV1 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleParam& obj) { 
        DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
        DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
        DARABONBA_PTR_TO_JSON(LaunchExpirationTime, launchExpirationTime_);
        DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(RecurrenceEndTime, recurrenceEndTime_);
        DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, RuleParam& obj) { 
        DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
        DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
        DARABONBA_PTR_FROM_JSON(LaunchExpirationTime, launchExpirationTime_);
        DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(RecurrenceEndTime, recurrenceEndTime_);
        DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      RuleParam() = default ;
      RuleParam(const RuleParam &) = default ;
      RuleParam(RuleParam &&) = default ;
      RuleParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleParam() = default ;
      RuleParam& operator=(const RuleParam &) = default ;
      RuleParam& operator=(RuleParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->evaluationCount_ == nullptr && this->launchExpirationTime_ == nullptr && this->launchTime_ == nullptr && this->metricName_ == nullptr && this->period_ == nullptr
        && this->recurrenceEndTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
      // comparisonOperator Field Functions 
      bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
      void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
      inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
      inline RuleParam& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


      // evaluationCount Field Functions 
      bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
      void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
      inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
      inline RuleParam& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


      // launchExpirationTime Field Functions 
      bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
      void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
      inline int32_t getLaunchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
      inline RuleParam& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


      // launchTime Field Functions 
      bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
      void deleteLaunchTime() { this->launchTime_ = nullptr;};
      inline string getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
      inline RuleParam& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline RuleParam& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline RuleParam& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // recurrenceEndTime Field Functions 
      bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
      void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
      inline string getRecurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
      inline RuleParam& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


      // recurrenceType Field Functions 
      bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
      void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
      inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
      inline RuleParam& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


      // recurrenceValue Field Functions 
      bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
      void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
      inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
      inline RuleParam& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline RuleParam& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline RuleParam& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // [负载触发参数] 比较符。
      shared_ptr<string> comparisonOperator_ {};
      // [负载触发参数] 统计次数。
      shared_ptr<int32_t> evaluationCount_ {};
      // [时间调度参数] 周期类型周期过期时间。
      shared_ptr<int32_t> launchExpirationTime_ {};
      // [时间调度参数] 周期类型周期开始时间。
      shared_ptr<string> launchTime_ {};
      // [负载触发参数] 度量名称。
      shared_ptr<string> metricName_ {};
      // [负载触发参数] 统计时长,单位分钟。
      shared_ptr<int32_t> period_ {};
      // [时间调度参数] 周期类型周期结束时间。
      shared_ptr<string> recurrenceEndTime_ {};
      // [时间调度参数] 周期类型。
      shared_ptr<string> recurrenceType_ {};
      // [时间调度参数] 周期类型周期值。
      shared_ptr<string> recurrenceValue_ {};
      // [负载触发参数] 统计方式。
      shared_ptr<string> statistics_ {};
      // [负载触发参数] 阈值。
      shared_ptr<int32_t> threshold_ {};
    };

    virtual bool empty() const override { return this->adjustmentType_ == nullptr
        && this->adjustmentValue_ == nullptr && this->coolDownTime_ == nullptr && this->ruleName_ == nullptr && this->ruleParam_ == nullptr && this->ruleType_ == nullptr
        && this->scalingConfigBizId_ == nullptr; };
    // adjustmentType Field Functions 
    bool hasAdjustmentType() const { return this->adjustmentType_ != nullptr;};
    void deleteAdjustmentType() { this->adjustmentType_ = nullptr;};
    inline string getAdjustmentType() const { DARABONBA_PTR_GET_DEFAULT(adjustmentType_, "") };
    inline ScalingRuleV1& setAdjustmentType(string adjustmentType) { DARABONBA_PTR_SET_VALUE(adjustmentType_, adjustmentType) };


    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRuleV1& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // coolDownTime Field Functions 
    bool hasCoolDownTime() const { return this->coolDownTime_ != nullptr;};
    void deleteCoolDownTime() { this->coolDownTime_ = nullptr;};
    inline int32_t getCoolDownTime() const { DARABONBA_PTR_GET_DEFAULT(coolDownTime_, 0) };
    inline ScalingRuleV1& setCoolDownTime(int32_t coolDownTime) { DARABONBA_PTR_SET_VALUE(coolDownTime_, coolDownTime) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ScalingRuleV1& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleParam Field Functions 
    bool hasRuleParam() const { return this->ruleParam_ != nullptr;};
    void deleteRuleParam() { this->ruleParam_ = nullptr;};
    inline const ScalingRuleV1::RuleParam & getRuleParam() const { DARABONBA_PTR_GET_CONST(ruleParam_, ScalingRuleV1::RuleParam) };
    inline ScalingRuleV1::RuleParam getRuleParam() { DARABONBA_PTR_GET(ruleParam_, ScalingRuleV1::RuleParam) };
    inline ScalingRuleV1& setRuleParam(const ScalingRuleV1::RuleParam & ruleParam) { DARABONBA_PTR_SET_VALUE(ruleParam_, ruleParam) };
    inline ScalingRuleV1& setRuleParam(ScalingRuleV1::RuleParam && ruleParam) { DARABONBA_PTR_SET_RVALUE(ruleParam_, ruleParam) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ScalingRuleV1& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scalingConfigBizId Field Functions 
    bool hasScalingConfigBizId() const { return this->scalingConfigBizId_ != nullptr;};
    void deleteScalingConfigBizId() { this->scalingConfigBizId_ = nullptr;};
    inline string getScalingConfigBizId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigBizId_, "") };
    inline ScalingRuleV1& setScalingConfigBizId(string scalingConfigBizId) { DARABONBA_PTR_SET_VALUE(scalingConfigBizId_, scalingConfigBizId) };


  protected:
    // 调整类型。
    shared_ptr<string> adjustmentType_ {};
    // 调整值,正数为扩容,负数为缩容。
    shared_ptr<int32_t> adjustmentValue_ {};
    // 冷却时间,单位秒。
    shared_ptr<int32_t> coolDownTime_ {};
    // 规则名称。
    shared_ptr<string> ruleName_ {};
    // 规则参数。
    shared_ptr<ScalingRuleV1::RuleParam> ruleParam_ {};
    // 规则类型。
    shared_ptr<string> ruleType_ {};
    // 弹性规则配置ID。
    shared_ptr<string> scalingConfigBizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
