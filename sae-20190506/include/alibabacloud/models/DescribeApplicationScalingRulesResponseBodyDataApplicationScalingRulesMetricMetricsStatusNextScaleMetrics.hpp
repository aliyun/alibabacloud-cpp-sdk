// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICMETRICSSTATUSNEXTSCALEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICMETRICSSTATUSNEXTSCALEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextScaleInAverageUtilization, nextScaleInAverageUtilization_);
      DARABONBA_PTR_TO_JSON(NextScaleOutAverageUtilization, nextScaleOutAverageUtilization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextScaleInAverageUtilization, nextScaleInAverageUtilization_);
      DARABONBA_PTR_FROM_JSON(NextScaleOutAverageUtilization, nextScaleOutAverageUtilization_);
    };
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->nextScaleInAverageUtilization_ == nullptr && return this->nextScaleOutAverageUtilization_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextScaleInAverageUtilization Field Functions 
    bool hasNextScaleInAverageUtilization() const { return this->nextScaleInAverageUtilization_ != nullptr;};
    void deleteNextScaleInAverageUtilization() { this->nextScaleInAverageUtilization_ = nullptr;};
    inline int32_t nextScaleInAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(nextScaleInAverageUtilization_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& setNextScaleInAverageUtilization(int32_t nextScaleInAverageUtilization) { DARABONBA_PTR_SET_VALUE(nextScaleInAverageUtilization_, nextScaleInAverageUtilization) };


    // nextScaleOutAverageUtilization Field Functions 
    bool hasNextScaleOutAverageUtilization() const { return this->nextScaleOutAverageUtilization_ != nullptr;};
    void deleteNextScaleOutAverageUtilization() { this->nextScaleOutAverageUtilization_ = nullptr;};
    inline int32_t nextScaleOutAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(nextScaleOutAverageUtilization_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics& setNextScaleOutAverageUtilization(int32_t nextScaleOutAverageUtilization) { DARABONBA_PTR_SET_VALUE(nextScaleOutAverageUtilization_, nextScaleOutAverageUtilization) };


  protected:
    // The name of the metric.
    // 
    // *   **cpu**: the CPU utilization.
    // *   **memory**: the memory usage.
    // *   **tcpActiveConn**: the number of active TCP connections.
    // *   **slb_incall_qps**: the QPS of the Internet-facing SLB instance.
    // *   **slb_incall_rt**: the response time of the Internet-facing SLB instance.
    std::shared_ptr<string> name_ = nullptr;
    // The metric value as a percentage that triggers the application scale-in next time.
    std::shared_ptr<int32_t> nextScaleInAverageUtilization_ = nullptr;
    // The metric value as a percentage that triggers the application scale-out next time.
    std::shared_ptr<int32_t> nextScaleOutAverageUtilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
