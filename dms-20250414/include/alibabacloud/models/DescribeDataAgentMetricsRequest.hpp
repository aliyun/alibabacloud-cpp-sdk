// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricNames, metricNames_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricNames, metricNames_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDataAgentMetricsRequest() = default ;
    DescribeDataAgentMetricsRequest(const DescribeDataAgentMetricsRequest &) = default ;
    DescribeDataAgentMetricsRequest(DescribeDataAgentMetricsRequest &&) = default ;
    DescribeDataAgentMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentMetricsRequest() = default ;
    DescribeDataAgentMetricsRequest& operator=(const DescribeDataAgentMetricsRequest &) = default ;
    DescribeDataAgentMetricsRequest& operator=(DescribeDataAgentMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->metricNames_ == nullptr && this->metricType_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDataAgentMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricNames Field Functions 
    bool hasMetricNames() const { return this->metricNames_ != nullptr;};
    void deleteMetricNames() { this->metricNames_ = nullptr;};
    inline string getMetricNames() const { DARABONBA_PTR_GET_DEFAULT(metricNames_, "") };
    inline DescribeDataAgentMetricsRequest& setMetricNames(string metricNames) { DARABONBA_PTR_SET_VALUE(metricNames_, metricNames) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeDataAgentMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDataAgentMetricsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the query range.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The metric names. Separate multiple names with commas (,).
    shared_ptr<string> metricNames_ {};
    // The metric type. Valid values:
    // - **basic**: basic metrics.
    // - **high_level**: advanced metrics.
    // 
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // The start time of the query range.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
