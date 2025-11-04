// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUESTEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUESTEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateAlarmRequestExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequestExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequestExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateAlarmRequestExpressions() = default ;
    CreateAlarmRequestExpressions(const CreateAlarmRequestExpressions &) = default ;
    CreateAlarmRequestExpressions(CreateAlarmRequestExpressions &&) = default ;
    CreateAlarmRequestExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequestExpressions() = default ;
    CreateAlarmRequestExpressions& operator=(const CreateAlarmRequestExpressions &) = default ;
    CreateAlarmRequestExpressions& operator=(CreateAlarmRequestExpressions &&) = default ;
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
    inline CreateAlarmRequestExpressions& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateAlarmRequestExpressions& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAlarmRequestExpressions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CreateAlarmRequestExpressions& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateAlarmRequestExpressions& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The operator that you want to use to compare the metric value and the threshold in the multi-metric alert rule. Valid values:
    // 
    // *   If the metric value is greater than or equal to the threshold, set the value to >=.
    // *   If the metric value is less than or equal to the metric threshold, set the value to <=.
    // *   If the metric value is greater than the metric threshold, set the value to >.
    // *   If the metric value is less than the metric threshold, set the value to <.
    // 
    // Default value: >=.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The names of the metrics in the multi-metric alert rule. The valid values of this parameter vary based on the metric type.
    // 
    // *   If you set MetricType to custom, the valid values are the metrics that you have.
    // 
    // *   If you set MetricType to system, this parameter has the following valid values:
    // 
    //     *   CpuUtilization: the CPU utilization. Unit: %.
    //     *   ConcurrentConnections: the number of concurrent connections.
    //     *   IntranetTx: the outbound traffic over an internal network. Unit: KB/min.
    //     *   IntranetRx: the inbound traffic over an internal network. Unit: KB/min.
    //     *   VpcInternetTx: the outbound traffic over a VPC. Unit: KB/min.
    //     *   VpcInternetRx: the inbound traffic over a VPC. Unit: KB/min.
    //     *   SystemDiskReadBps: the number of bytes read from the system disk per second.
    //     *   SystemDiskWriteBps: the number of bytes written to the system disk per second.
    //     *   SystemDiskReadOps: the read IOPS of the system disk. Unit: counts/s.
    //     *   SystemDiskWriteOps: the write IOPS of the system disk. Unit: counts/s.
    //     *   CpuUtilizationAgent: the CPU utilization. Unit: %.
    //     *   GpuUtilizationAgent: the GPU utilization. Unit: %.
    //     *   GpuMemoryFreeUtilizationAgent: the idle GPU memory usage. Unit: %.
    //     *   GpuMemoryUtilizationAgent: the GPU memory usage. Unit: %.
    //     *   MemoryUtilization: the memory usage. Unit: %.
    //     *   LoadAverage: the average system load.
    //     *   TcpConnection: the total number of TCP connections.
    //     *   TcpConnection: the number of established TCP connections.
    //     *   PackagesNetOut: the number of packets sent by the internal NIC. Unit: counts/s.
    //     *   PackagesNetIn: the number of packets received by the internal NIC. Unit: counts/s.
    //     *   PackagesNetOut: the number of packets sent by the public NIC. Unit: counts/s.
    //     *   PackagesNetIn: the number of packets received by the public NIC. Unit: counts/s.
    //     *   EciPodCpuUtilization: the CPU utilization. Unit: %.
    //     *   EciPodMemoryUtilization: the memory usage. Unit: %.
    //     *   LoadBalancerRealServerAverageQps: the QPS of an instance.
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
    // >  You can set this parameter to 15 seconds only for scaling groups of the ECS type.
    // 
    // Default value: 300.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The method that you want to use to aggregate the metric data in the multi-metric alert rule. Valid values:
    // 
    // *   Average: the average value.
    // *   Minimum: the minimum value
    // *   Maximum: the maximum value
    // 
    // Default value: Average.
    std::shared_ptr<string> statistics_ = nullptr;
    // The threshold of the metric value in the multi-metric alert rule. If the threshold is reached the specified number of times within the statistical period, a scaling rule is executed.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
