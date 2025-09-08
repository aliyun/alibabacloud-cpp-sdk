// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICSSTATUSCURRENTMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICSSTATUSCURRENTMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics(const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics(DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics &&) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& operator=(const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& operator=(DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentValue_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // currentValue Field Functions 
    bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
    void deleteCurrentValue() { this->currentValue_ = nullptr;};
    inline int64_t currentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& setCurrentValue(int64_t currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The current value of the metric.
    std::shared_ptr<int64_t> currentValue_ = nullptr;
    // The name of the metric.
    // 
    // *   **cpu**: the CPU utilization.
    // *   **memory**: the memory usage.
    // *   **tcpActiveConn**: the number of active TCP connections.
    // *   **slb_incall_qps**: the QPS of the Internet-facing SLB instance.
    // *   **slb_incall_rt**: the response time of the Internet-facing SLB instance.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the data. This parameter corresponds to the metric.
    // 
    // *   **Resource**: used when the metric is the **CPU utilization** or **memory usage**.
    // *   **Pods**: used when the metric is the **number of active TCP connections**.
    // *   **External**: used when the metric is about the **SLB** instance or from **Application Real-Time Monitoring Service (ARMS)**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
