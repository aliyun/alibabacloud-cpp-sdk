// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICPROMETHEUSMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICPROMETHEUSMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusQuery, prometheusQuery_);
      DARABONBA_PTR_TO_JSON(TargetMetricValue, targetMetricValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusQuery, prometheusQuery_);
      DARABONBA_PTR_FROM_JSON(TargetMetricValue, targetMetricValue_);
    };
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusQuery_ == nullptr
        && return this->targetMetricValue_ == nullptr; };
    // prometheusQuery Field Functions 
    bool hasPrometheusQuery() const { return this->prometheusQuery_ != nullptr;};
    void deletePrometheusQuery() { this->prometheusQuery_ = nullptr;};
    inline string prometheusQuery() const { DARABONBA_PTR_GET_DEFAULT(prometheusQuery_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& setPrometheusQuery(string prometheusQuery) { DARABONBA_PTR_SET_VALUE(prometheusQuery_, prometheusQuery) };


    // targetMetricValue Field Functions 
    bool hasTargetMetricValue() const { return this->targetMetricValue_ != nullptr;};
    void deleteTargetMetricValue() { this->targetMetricValue_ = nullptr;};
    inline string targetMetricValue() const { DARABONBA_PTR_GET_DEFAULT(targetMetricValue_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricPrometheusMetrics& setTargetMetricValue(string targetMetricValue) { DARABONBA_PTR_SET_VALUE(targetMetricValue_, targetMetricValue) };


  protected:
    std::shared_ptr<string> prometheusQuery_ = nullptr;
    std::shared_ptr<string> targetMetricValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
