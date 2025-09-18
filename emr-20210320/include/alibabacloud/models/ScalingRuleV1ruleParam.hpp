// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULEV1RULEPARAM_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULEV1RULEPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingRuleV1RuleParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRuleV1RuleParam& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ScalingRuleV1RuleParam& obj) { 
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
    ScalingRuleV1RuleParam() = default ;
    ScalingRuleV1RuleParam(const ScalingRuleV1RuleParam &) = default ;
    ScalingRuleV1RuleParam(ScalingRuleV1RuleParam &&) = default ;
    ScalingRuleV1RuleParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRuleV1RuleParam() = default ;
    ScalingRuleV1RuleParam& operator=(const ScalingRuleV1RuleParam &) = default ;
    ScalingRuleV1RuleParam& operator=(ScalingRuleV1RuleParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->evaluationCount_ != nullptr && this->launchExpirationTime_ != nullptr && this->launchTime_ != nullptr && this->metricName_ != nullptr && this->period_ != nullptr
        && this->recurrenceEndTime_ != nullptr && this->recurrenceType_ != nullptr && this->recurrenceValue_ != nullptr && this->statistics_ != nullptr && this->threshold_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline ScalingRuleV1RuleParam& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline ScalingRuleV1RuleParam& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // launchExpirationTime Field Functions 
    bool hasLaunchExpirationTime() const { return this->launchExpirationTime_ != nullptr;};
    void deleteLaunchExpirationTime() { this->launchExpirationTime_ = nullptr;};
    inline int32_t launchExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(launchExpirationTime_, 0) };
    inline ScalingRuleV1RuleParam& setLaunchExpirationTime(int32_t launchExpirationTime) { DARABONBA_PTR_SET_VALUE(launchExpirationTime_, launchExpirationTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline string launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, "") };
    inline ScalingRuleV1RuleParam& setLaunchTime(string launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ScalingRuleV1RuleParam& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ScalingRuleV1RuleParam& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // recurrenceEndTime Field Functions 
    bool hasRecurrenceEndTime() const { return this->recurrenceEndTime_ != nullptr;};
    void deleteRecurrenceEndTime() { this->recurrenceEndTime_ = nullptr;};
    inline string recurrenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(recurrenceEndTime_, "") };
    inline ScalingRuleV1RuleParam& setRecurrenceEndTime(string recurrenceEndTime) { DARABONBA_PTR_SET_VALUE(recurrenceEndTime_, recurrenceEndTime) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ScalingRuleV1RuleParam& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline ScalingRuleV1RuleParam& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ScalingRuleV1RuleParam& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline ScalingRuleV1RuleParam& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // [负载触发参数] 比较符。
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // [负载触发参数] 统计次数。
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // [时间调度参数] 周期类型周期过期时间。
    std::shared_ptr<int32_t> launchExpirationTime_ = nullptr;
    // [时间调度参数] 周期类型周期开始时间。
    std::shared_ptr<string> launchTime_ = nullptr;
    // [负载触发参数] 度量名称。
    std::shared_ptr<string> metricName_ = nullptr;
    // [负载触发参数] 统计时长,单位分钟。
    std::shared_ptr<int32_t> period_ = nullptr;
    // [时间调度参数] 周期类型周期结束时间。
    std::shared_ptr<string> recurrenceEndTime_ = nullptr;
    // [时间调度参数] 周期类型。
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // [时间调度参数] 周期类型周期值。
    std::shared_ptr<string> recurrenceValue_ = nullptr;
    // [负载触发参数] 统计方式。
    std::shared_ptr<string> statistics_ = nullptr;
    // [负载触发参数] 阈值。
    std::shared_ptr<int32_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
