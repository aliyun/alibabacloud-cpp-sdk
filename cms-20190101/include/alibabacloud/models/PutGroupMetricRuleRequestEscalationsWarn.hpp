// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUESTESCALATIONSWARN_HPP_
#define ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUESTESCALATIONSWARN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutGroupMetricRuleRequestEscalationsWarn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutGroupMetricRuleRequestEscalationsWarn& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PutGroupMetricRuleRequestEscalationsWarn& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PutGroupMetricRuleRequestEscalationsWarn() = default ;
    PutGroupMetricRuleRequestEscalationsWarn(const PutGroupMetricRuleRequestEscalationsWarn &) = default ;
    PutGroupMetricRuleRequestEscalationsWarn(PutGroupMetricRuleRequestEscalationsWarn &&) = default ;
    PutGroupMetricRuleRequestEscalationsWarn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutGroupMetricRuleRequestEscalationsWarn() = default ;
    PutGroupMetricRuleRequestEscalationsWarn& operator=(const PutGroupMetricRuleRequestEscalationsWarn &) = default ;
    PutGroupMetricRuleRequestEscalationsWarn& operator=(PutGroupMetricRuleRequestEscalationsWarn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->statistics_ == nullptr && return this->threshold_ == nullptr && return this->times_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline PutGroupMetricRuleRequestEscalationsWarn& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline PutGroupMetricRuleRequestEscalationsWarn& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline PutGroupMetricRuleRequestEscalationsWarn& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline PutGroupMetricRuleRequestEscalationsWarn& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The operator that is used to compare the metric value with the threshold for Warn-level alerts. Valid values:
    // 
    // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
    // *   GreaterThanThreshold: greater than the threshold
    // *   LessThanOrEqualToThreshold: less than or equal to the threshold
    // *   LessThanThreshold: less than the threshold
    // *   NotEqualToThreshold: not equal to the threshold
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The statistical methods for Warn-level alerts. Separate multiple statistical methods with commas (,).
    // 
    // The value of this parameter is determined by the `Statistics` column corresponding to the `MetricName` parameter of the specified cloud service. The value of this parameter can be Maximum, Minimum, or Average. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> statistics_ = nullptr;
    // The threshold for Warn-level alerts.
    std::shared_ptr<string> threshold_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before a Warn-level alert is triggered.
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
