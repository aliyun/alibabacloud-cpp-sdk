// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULESPEC_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingRuleSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRuleSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_TO_JSON(ByLoadScalingRuleSpec, byLoadScalingRuleSpec_);
      DARABONBA_PTR_TO_JSON(ByTimeScalingRuleSpec, byTimeScalingRuleSpec_);
      DARABONBA_PTR_TO_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_TO_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRuleSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustmentValue, adjustmentValue_);
      DARABONBA_PTR_FROM_JSON(ByLoadScalingRuleSpec, byLoadScalingRuleSpec_);
      DARABONBA_PTR_FROM_JSON(ByTimeScalingRuleSpec, byTimeScalingRuleSpec_);
      DARABONBA_PTR_FROM_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
    };
    ScalingRuleSpec() = default ;
    ScalingRuleSpec(const ScalingRuleSpec &) = default ;
    ScalingRuleSpec(ScalingRuleSpec &&) = default ;
    ScalingRuleSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRuleSpec() = default ;
    ScalingRuleSpec& operator=(const ScalingRuleSpec &) = default ;
    ScalingRuleSpec& operator=(ScalingRuleSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ByTimeScalingRuleSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ByTimeScalingRuleSpec& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      };
      friend void from_json(const Darabonba::Json& j, ByTimeScalingRuleSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      };
      ByTimeScalingRuleSpec() = default ;
      ByTimeScalingRuleSpec(const ByTimeScalingRuleSpec &) = default ;
      ByTimeScalingRuleSpec(ByTimeScalingRuleSpec &&) = default ;
      ByTimeScalingRuleSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ByTimeScalingRuleSpec() = default ;
      ByTimeScalingRuleSpec& operator=(const ByTimeScalingRuleSpec &) = default ;
      ByTimeScalingRuleSpec& operator=(ByTimeScalingRuleSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->launchTime_ == nullptr && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ByTimeScalingRuleSpec& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // launchTime Field Functions 
      bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
      void deleteLaunchTime() { this->launchTime_ = nullptr;};
      inline int64_t getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
      inline ByTimeScalingRuleSpec& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


      // recurrenceType Field Functions 
      bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
      void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
      inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
      inline ByTimeScalingRuleSpec& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


      // recurrenceValue Field Functions 
      bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
      void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
      inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
      inline ByTimeScalingRuleSpec& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    protected:
      // 重复执行定时任务的结束时间戳。单位为毫秒。
      shared_ptr<int64_t> endTime_ {};
      // 启动时间戳。单位为毫秒。
      // 
      // This parameter is required.
      shared_ptr<int64_t> launchTime_ {};
      // 指定时间规则的执行类型。
      shared_ptr<string> recurrenceType_ {};
      // 重复执行定时任务的数值。具体取值取决于 recurrenceType 设置。
      shared_ptr<string> recurrenceValue_ {};
    };

    class ByLoadScalingRuleSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ByLoadScalingRuleSpec& obj) { 
        DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
        DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(TimeWindow, timeWindow_);
      };
      friend void from_json(const Darabonba::Json& j, ByLoadScalingRuleSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
        DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(TimeWindow, timeWindow_);
      };
      ByLoadScalingRuleSpec() = default ;
      ByLoadScalingRuleSpec(const ByLoadScalingRuleSpec &) = default ;
      ByLoadScalingRuleSpec(ByLoadScalingRuleSpec &&) = default ;
      ByLoadScalingRuleSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ByLoadScalingRuleSpec() = default ;
      ByLoadScalingRuleSpec& operator=(const ByLoadScalingRuleSpec &) = default ;
      ByLoadScalingRuleSpec& operator=(ByLoadScalingRuleSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->evaluationCount_ == nullptr && this->metricName_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->timeWindow_ == nullptr; };
      // comparisonOperator Field Functions 
      bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
      void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
      inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
      inline ByLoadScalingRuleSpec& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


      // evaluationCount Field Functions 
      bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
      void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
      inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
      inline ByLoadScalingRuleSpec& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline ByLoadScalingRuleSpec& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline ByLoadScalingRuleSpec& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline ByLoadScalingRuleSpec& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // timeWindow Field Functions 
      bool hasTimeWindow() const { return this->timeWindow_ != nullptr;};
      void deleteTimeWindow() { this->timeWindow_ = nullptr;};
      inline int32_t getTimeWindow() const { DARABONBA_PTR_GET_DEFAULT(timeWindow_, 0) };
      inline ByLoadScalingRuleSpec& setTimeWindow(int32_t timeWindow) { DARABONBA_PTR_SET_VALUE(timeWindow_, timeWindow) };


    protected:
      // 比较符。
      // 
      // This parameter is required.
      shared_ptr<string> comparisonOperator_ {};
      // 统计次数。
      // 
      // This parameter is required.
      shared_ptr<int32_t> evaluationCount_ {};
      // 指标名称。指标名称需要在 ListAutoScalingMetrics 接口返回的指标名称列表中。
      // 
      // This parameter is required.
      shared_ptr<string> metricName_ {};
      // 统计量名称。
      // 
      // This parameter is required.
      shared_ptr<string> statistics_ {};
      // 阈值。
      // 
      // This parameter is required.
      shared_ptr<double> threshold_ {};
      // 统计窗口。单位为秒。
      // 
      // This parameter is required.
      shared_ptr<int32_t> timeWindow_ {};
    };

    virtual bool empty() const override { return this->adjustmentValue_ == nullptr
        && this->byLoadScalingRuleSpec_ == nullptr && this->byTimeScalingRuleSpec_ == nullptr && this->coolDownInterval_ == nullptr && this->scalingActivityType_ == nullptr && this->scalingRuleName_ == nullptr
        && this->scalingRuleType_ == nullptr; };
    // adjustmentValue Field Functions 
    bool hasAdjustmentValue() const { return this->adjustmentValue_ != nullptr;};
    void deleteAdjustmentValue() { this->adjustmentValue_ = nullptr;};
    inline int32_t getAdjustmentValue() const { DARABONBA_PTR_GET_DEFAULT(adjustmentValue_, 0) };
    inline ScalingRuleSpec& setAdjustmentValue(int32_t adjustmentValue) { DARABONBA_PTR_SET_VALUE(adjustmentValue_, adjustmentValue) };


    // byLoadScalingRuleSpec Field Functions 
    bool hasByLoadScalingRuleSpec() const { return this->byLoadScalingRuleSpec_ != nullptr;};
    void deleteByLoadScalingRuleSpec() { this->byLoadScalingRuleSpec_ = nullptr;};
    inline const ScalingRuleSpec::ByLoadScalingRuleSpec & getByLoadScalingRuleSpec() const { DARABONBA_PTR_GET_CONST(byLoadScalingRuleSpec_, ScalingRuleSpec::ByLoadScalingRuleSpec) };
    inline ScalingRuleSpec::ByLoadScalingRuleSpec getByLoadScalingRuleSpec() { DARABONBA_PTR_GET(byLoadScalingRuleSpec_, ScalingRuleSpec::ByLoadScalingRuleSpec) };
    inline ScalingRuleSpec& setByLoadScalingRuleSpec(const ScalingRuleSpec::ByLoadScalingRuleSpec & byLoadScalingRuleSpec) { DARABONBA_PTR_SET_VALUE(byLoadScalingRuleSpec_, byLoadScalingRuleSpec) };
    inline ScalingRuleSpec& setByLoadScalingRuleSpec(ScalingRuleSpec::ByLoadScalingRuleSpec && byLoadScalingRuleSpec) { DARABONBA_PTR_SET_RVALUE(byLoadScalingRuleSpec_, byLoadScalingRuleSpec) };


    // byTimeScalingRuleSpec Field Functions 
    bool hasByTimeScalingRuleSpec() const { return this->byTimeScalingRuleSpec_ != nullptr;};
    void deleteByTimeScalingRuleSpec() { this->byTimeScalingRuleSpec_ = nullptr;};
    inline const ScalingRuleSpec::ByTimeScalingRuleSpec & getByTimeScalingRuleSpec() const { DARABONBA_PTR_GET_CONST(byTimeScalingRuleSpec_, ScalingRuleSpec::ByTimeScalingRuleSpec) };
    inline ScalingRuleSpec::ByTimeScalingRuleSpec getByTimeScalingRuleSpec() { DARABONBA_PTR_GET(byTimeScalingRuleSpec_, ScalingRuleSpec::ByTimeScalingRuleSpec) };
    inline ScalingRuleSpec& setByTimeScalingRuleSpec(const ScalingRuleSpec::ByTimeScalingRuleSpec & byTimeScalingRuleSpec) { DARABONBA_PTR_SET_VALUE(byTimeScalingRuleSpec_, byTimeScalingRuleSpec) };
    inline ScalingRuleSpec& setByTimeScalingRuleSpec(ScalingRuleSpec::ByTimeScalingRuleSpec && byTimeScalingRuleSpec) { DARABONBA_PTR_SET_RVALUE(byTimeScalingRuleSpec_, byTimeScalingRuleSpec) };


    // coolDownInterval Field Functions 
    bool hasCoolDownInterval() const { return this->coolDownInterval_ != nullptr;};
    void deleteCoolDownInterval() { this->coolDownInterval_ = nullptr;};
    inline int32_t getCoolDownInterval() const { DARABONBA_PTR_GET_DEFAULT(coolDownInterval_, 0) };
    inline ScalingRuleSpec& setCoolDownInterval(int32_t coolDownInterval) { DARABONBA_PTR_SET_VALUE(coolDownInterval_, coolDownInterval) };


    // scalingActivityType Field Functions 
    bool hasScalingActivityType() const { return this->scalingActivityType_ != nullptr;};
    void deleteScalingActivityType() { this->scalingActivityType_ = nullptr;};
    inline string getScalingActivityType() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityType_, "") };
    inline ScalingRuleSpec& setScalingActivityType(string scalingActivityType) { DARABONBA_PTR_SET_VALUE(scalingActivityType_, scalingActivityType) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ScalingRuleSpec& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string getScalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline ScalingRuleSpec& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


  protected:
    // 调整值。需要为正数，代表需要扩容或者缩容的实例数量。
    // 
    // This parameter is required.
    shared_ptr<int32_t> adjustmentValue_ {};
    // 按照负载伸缩描述。
    shared_ptr<ScalingRuleSpec::ByLoadScalingRuleSpec> byLoadScalingRuleSpec_ {};
    // 按照时间伸缩描述。
    shared_ptr<ScalingRuleSpec::ByTimeScalingRuleSpec> byTimeScalingRuleSpec_ {};
    // 冷却时间。单位为秒，取值范围在30~10800秒之间。
    // 
    // This parameter is required.
    shared_ptr<int32_t> coolDownInterval_ {};
    // 伸缩活动类型。
    // 
    // This parameter is required.
    shared_ptr<string> scalingActivityType_ {};
    // 规则名称。
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleName_ {};
    // 伸缩规则类型。
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
