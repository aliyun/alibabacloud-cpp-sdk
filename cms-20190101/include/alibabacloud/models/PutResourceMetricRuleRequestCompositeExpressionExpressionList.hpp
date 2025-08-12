// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTCOMPOSITEEXPRESSIONEXPRESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTCOMPOSITEEXPRESSIONEXPRESSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequestCompositeExpressionExpressionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequestCompositeExpressionExpressionList& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequestCompositeExpressionExpressionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    PutResourceMetricRuleRequestCompositeExpressionExpressionList() = default ;
    PutResourceMetricRuleRequestCompositeExpressionExpressionList(const PutResourceMetricRuleRequestCompositeExpressionExpressionList &) = default ;
    PutResourceMetricRuleRequestCompositeExpressionExpressionList(PutResourceMetricRuleRequestCompositeExpressionExpressionList &&) = default ;
    PutResourceMetricRuleRequestCompositeExpressionExpressionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequestCompositeExpressionExpressionList() = default ;
    PutResourceMetricRuleRequestCompositeExpressionExpressionList& operator=(const PutResourceMetricRuleRequestCompositeExpressionExpressionList &) = default ;
    PutResourceMetricRuleRequestCompositeExpressionExpressionList& operator=(PutResourceMetricRuleRequestCompositeExpressionExpressionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->metricName_ != nullptr && this->period_ != nullptr && this->statistics_ != nullptr && this->threshold_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline PutResourceMetricRuleRequestCompositeExpressionExpressionList& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutResourceMetricRuleRequestCompositeExpressionExpressionList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline PutResourceMetricRuleRequestCompositeExpressionExpressionList& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline PutResourceMetricRuleRequestCompositeExpressionExpressionList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline PutResourceMetricRuleRequestCompositeExpressionExpressionList& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The operator that is used to compare the metric value with the threshold. Valid value:
    // 
    // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
    // *   GreaterThanThreshold: greater than the threshold
    // *   LessThanOrEqualToThreshold: less than or equal to the threshold
    // *   LessThanThreshold: less than the threshold
    // *   NotEqualToThreshold: not equal to the threshold
    // *   EqualToThreshold: equal to the threshold
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The metric that is used to monitor the cloud service.
    std::shared_ptr<string> metricName_ = nullptr;
    // The aggregation period of the metric.
    // 
    // Unit: seconds.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The statistical method of the metric. Valid value:
    // 
    // *   $Maximum: the maximum value
    // *   $Minimum: the minimum value
    // *   $Average: the average value
    // *   $Availability: the availability rate (usually used for site monitoring)
    // 
    // >  `$` is the prefix of the metric. For information about the Alibaba Cloud services that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
