// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTHYBRIDMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTHYBRIDMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBodyAlarmListHybridMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBodyAlarmListHybridMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBodyAlarmListHybridMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeAlarmsResponseBodyAlarmListHybridMetrics() = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetrics(const DescribeAlarmsResponseBodyAlarmListHybridMetrics &) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetrics(DescribeAlarmsResponseBodyAlarmListHybridMetrics &&) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBodyAlarmListHybridMetrics() = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetrics& operator=(const DescribeAlarmsResponseBodyAlarmListHybridMetrics &) = default ;
    DescribeAlarmsResponseBodyAlarmListHybridMetrics& operator=(DescribeAlarmsResponseBodyAlarmListHybridMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->expression_ != nullptr && this->id_ != nullptr && this->metricName_ != nullptr && this->statistic_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions>) };
    inline vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions>) };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setDimensions(const vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setDimensions(vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline string statistic() const { DARABONBA_PTR_GET_DEFAULT(statistic_, "") };
    inline DescribeAlarmsResponseBodyAlarmListHybridMetrics& setStatistic(string statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };


  protected:
    // The metric dimensions. This parameter is used to specify the monitored resources.
    std::shared_ptr<vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetricsDimensions>> dimensions_ = nullptr;
    // The metric expression that consists of multiple Hybrid Cloud Monitoring metrics. It calculates a result used to trigger scaling events.
    // 
    // The expression is written in Reverse Polish Notation (RPN) format and supports only the following operators: `+, -, *, /`.
    std::shared_ptr<string> expression_ = nullptr;
    // The reference ID of the metric in the metric expression.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the Hybrid Cloud Monitoring metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The statistical method of the metric value. Valid values:
    // 
    // *   Average: The average value of all metric values within a specified interval is calculated.
    // *   Minimum: The minimum value of all metric values within a specified interval is calculated.
    // *   Maximum: The maximum value of all metric values within a specified interval is calculated.
    std::shared_ptr<string> statistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
