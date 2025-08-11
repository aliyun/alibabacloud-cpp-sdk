// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALARMREQUESTEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALARMREQUESTEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyAlarmRequestExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAlarmRequestExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAlarmRequestExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ModifyAlarmRequestExpressions() = default ;
    ModifyAlarmRequestExpressions(const ModifyAlarmRequestExpressions &) = default ;
    ModifyAlarmRequestExpressions(ModifyAlarmRequestExpressions &&) = default ;
    ModifyAlarmRequestExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAlarmRequestExpressions() = default ;
    ModifyAlarmRequestExpressions& operator=(const ModifyAlarmRequestExpressions &) = default ;
    ModifyAlarmRequestExpressions& operator=(ModifyAlarmRequestExpressions &&) = default ;
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
    inline ModifyAlarmRequestExpressions& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyAlarmRequestExpressions& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyAlarmRequestExpressions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ModifyAlarmRequestExpressions& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ModifyAlarmRequestExpressions& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The operator that is used to compare the metric value and the threshold. Valid values:
    // 
    // *   If the metric value is greater than or equal to the threshold, set the value to `>=`.
    // *   If the metric value is less than or equal to the threshold, set the value to `<=`.
    // *   If the metric value is greater than the threshold, set the value to `>`.
    // *   If the metric value is less than the threshold, set the value to `<`.
    // 
    // Default value: >=.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The name of the metric that is specified in the multi-metric alert rule. The valid values vary based on the metric type.
    // 
    // *   If you set the MetricType parameter to custom, the valid values are your custom metrics.
    // 
    // *   If you set the MetricType parameter to system, the MetricName parameter has the following valid values:
    // 
    //     *   CpuUtilization: the CPU utilization of an ECS instance. Unit: %.
    //     *   IntranetTx: the outbound traffic over the internal network from an ECS instance. Unit: KB/min.
    //     *   IntranetRx: the inbound traffic over the Internet to an ECS instance that resides in a VPC. Unit: KB/min.
    //     *   VpcInternetTx: the outbound traffic over the Internet from an ECS instance that resides in a VPC. Unit: KB/min.
    //     *   VpcInternetRx: the inbound traffic over the Internet to an ECS instance that resides in a VPC. Unit: KB/min.
    //     *   SystemDiskReadBps: the number of bytes read from the system disk used by an ECS instance per second.
    //     *   SystemDiskWriteBps: the number of bytes written to the system disk used by an ECS instance per second.
    //     *   SystemDiskReadOps: the number of read operations on the system disk used by an ECS instance per second.
    //     *   SystemDiskWriteOps: the number of write operations on the system disk used by an ECS instance per second.
    //     *   CpuUtilizationAgent: the CPU utilization of an agent. Unit: %.
    //     *   GpuUtilizationAgent: the GPU utilization of an agent. Unit: %.
    //     *   GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory of an agent.
    //     *   GpuMemoryUtilizationAgent: the GPU memory usage of an agent. Unit: %.
    //     *   MemoryUtilization: the memory usage of an agent. Unit: %.
    //     *   LoadAverage: the average system load of an agent.
    //     *   TcpConnection: the total number of TCP connections of an agent.
    //     *   TcpConnection: the number of established TCP connections of an agent.
    //     *   PackagesNetOut: the number of packets that are sent by the internal NIC used by an agent.
    //     *   PackagesNetIn: the number of packets that are received by the internal NIC used by an agent.
    //     *   EciPodCpuUtilization: the CPU utilization of an elastic container instance. Unit: %.
    //     *   EciPodMemoryUtilization: the memory usage of an elastic container instance. Unit: %.
    // 
    // For more information, see [Event-triggered task for system monitoring](https://help.aliyun.com/document_detail/74854.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The period of time during which statistics about the metrics in the multi-metric alert rule is collected. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // > If your scaling group is of the ECS type and the event-triggered task associated with your scaling group monitors CloudMonitor metrics, you can set the Period parameter to 15. In other cases, you can set the Period parameter to 60, 120, 300, or 900. In most cases, the name of a CloudMonitor metric contains Agent.
    // 
    // Default value: 300.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The method that is used to aggregate statistics about the metrics that are specified in the multi-metric alert rule. Valid values:
    // 
    // *   Average
    // *   Minimum
    // *   Maximum
    std::shared_ptr<string> statistics_ = nullptr;
    // The thresholds of the metric values in the multi-metric alert rule. If the thresholds are reached the specified number of times within the specified period, a scaling rule is executed.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
