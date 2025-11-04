// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLISTEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBodyAlarmListExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBodyAlarmListExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBodyAlarmListExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeAlarmsResponseBodyAlarmListExpressions() = default ;
    DescribeAlarmsResponseBodyAlarmListExpressions(const DescribeAlarmsResponseBodyAlarmListExpressions &) = default ;
    DescribeAlarmsResponseBodyAlarmListExpressions(DescribeAlarmsResponseBodyAlarmListExpressions &&) = default ;
    DescribeAlarmsResponseBodyAlarmListExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBodyAlarmListExpressions() = default ;
    DescribeAlarmsResponseBodyAlarmListExpressions& operator=(const DescribeAlarmsResponseBodyAlarmListExpressions &) = default ;
    DescribeAlarmsResponseBodyAlarmListExpressions& operator=(DescribeAlarmsResponseBodyAlarmListExpressions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->metricName_ == nullptr && return this->period_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeAlarmsResponseBodyAlarmListExpressions& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlarmsResponseBodyAlarmListExpressions& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeAlarmsResponseBodyAlarmListExpressions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeAlarmsResponseBodyAlarmListExpressions& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline DescribeAlarmsResponseBodyAlarmListExpressions& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The operator that is used to compare the metric value and the threshold.
    // 
    // *   Valid value if the metric value is greater than or equal to the threshold: >=.
    // *   Valid value if the metric value is less than or equal to the threshold: <=.
    // *   Valid value if the metric value is greater than the threshold: >.
    // *   Valid value if the metric value is less than the threshold: <.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The name of the metric that is specified in the multi-metric alert rule. Valid values:
    // 
    // *   CpuUtilization: the CPU utilization of an ECS instance. Unit: %.
    // *   ConcurrentConnections: the number of current connections to an ECS instance.
    // *   IntranetTx: the outbound traffic over an internal network. Unit: KB/min.
    // *   IntranetRx: the inbound traffic over an internal network. Unit: KB/min.
    // *   VpcInternetTx: the outbound traffic over a VPC. Unit: KB/min.
    // *   VpcInternetRx: the inbound traffic over a VPC. Unit: KB/min.
    // *   SystemDiskReadBps: the number of bytes read from the system disk per second.
    // *   SystemDiskWriteBps: the number of bytes written to the system disk per second.
    // *   SystemDiskReadOps: the read IOPS of the system disk. Unit: counts/s.
    // *   SystemDiskWriteOps: the write IOPS of the system disk. Unit: counts/s.
    // *   CpuUtilizationAgent: the CPU utilization. Unit: %.
    // *   GpuUtilizationAgent: the GPU utilization. Unit: %.
    // *   GpuMemoryFreeUtilizationAgent: the idle GPU memory usage. Unit: %.
    // *   GpuMemoryUtilizationAgent: the GPU memory usage. Unit: %.
    // *   MemoryUtilization: the memory usage. Unit: %.
    // *   LoadAverage: the average system load.
    // *   TcpConnection: the total number of TCP connections.
    // *   TcpConnection: the number of established TCP connections.
    // *   PackagesNetOut: the number of packets sent by the internal NIC. Unit: counts/s.
    // *   PackagesNetIn: the number of packets received by the internal NIC. Unit: counts/s.
    // *   PackagesNetOut: the number of packets sent by the public NIC. Unit: counts/s.
    // *   PackagesNetIn: the number of packets received by the public NIC. Unit: counts/s.
    // *   EciPodCpuUtilization: the CPU utilization. Unit: %.
    // *   EciPodMemoryUtilization: the memory usage. Unit: %.
    // *   LoadBalancerRealServerAverageQps: the QPS of an instance.
    // 
    // For more information, see [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The statistical period of the metric data in the multi-metric alert rule. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // >  If your scaling group is of the ECS type and the event-triggered task that is associated with your scaling group monitors CloudMonitor metrics, you can set Period to 15. In most cases, the name of a CloudMonitor metric contains Agent.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The method that is used to aggregate statistics about the metrics in the multi-metric alert rule. Valid values:
    // 
    // *   Average: the average value
    // *   Minimum: the minimum value
    // *   Maximum: the maximum value
    std::shared_ptr<string> statistics_ = nullptr;
    // The threshold of the metric value. If the threshold is reached the specified number of times within the specified period, a scaling rule is executed.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
