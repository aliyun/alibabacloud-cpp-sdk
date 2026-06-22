// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BYLOADSCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_BYLOADSCALINGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ByLoadScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ByLoadScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(TimeWindow, timeWindow_);
    };
    friend void from_json(const Darabonba::Json& j, ByLoadScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(TimeWindow, timeWindow_);
    };
    ByLoadScalingRule() = default ;
    ByLoadScalingRule(const ByLoadScalingRule &) = default ;
    ByLoadScalingRule(ByLoadScalingRule &&) = default ;
    ByLoadScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ByLoadScalingRule() = default ;
    ByLoadScalingRule& operator=(const ByLoadScalingRule &) = default ;
    ByLoadScalingRule& operator=(ByLoadScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->coolDownInterval_ == nullptr && this->evaluationCount_ == nullptr && this->metricName_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr
        && this->timeWindow_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline ByLoadScalingRule& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // coolDownInterval Field Functions 
    bool hasCoolDownInterval() const { return this->coolDownInterval_ != nullptr;};
    void deleteCoolDownInterval() { this->coolDownInterval_ = nullptr;};
    inline int32_t getCoolDownInterval() const { DARABONBA_PTR_GET_DEFAULT(coolDownInterval_, 0) };
    inline ByLoadScalingRule& setCoolDownInterval(int32_t coolDownInterval) { DARABONBA_PTR_SET_VALUE(coolDownInterval_, coolDownInterval) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline ByLoadScalingRule& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ByLoadScalingRule& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ByLoadScalingRule& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ByLoadScalingRule& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // timeWindow Field Functions 
    bool hasTimeWindow() const { return this->timeWindow_ != nullptr;};
    void deleteTimeWindow() { this->timeWindow_ = nullptr;};
    inline int32_t getTimeWindow() const { DARABONBA_PTR_GET_DEFAULT(timeWindow_, 0) };
    inline ByLoadScalingRule& setTimeWindow(int32_t timeWindow) { DARABONBA_PTR_SET_VALUE(timeWindow_, timeWindow) };


  protected:
    // 比较符。
    // 
    // This parameter is required.
    shared_ptr<string> comparisonOperator_ {};
    shared_ptr<int32_t> coolDownInterval_ {};
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
