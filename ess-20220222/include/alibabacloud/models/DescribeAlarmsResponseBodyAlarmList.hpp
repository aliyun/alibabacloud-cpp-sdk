// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODYALARMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmsResponseBodyAlarmListDimensions.hpp>
#include <alibabacloud/models/DescribeAlarmsResponseBodyAlarmListExpressions.hpp>
#include <alibabacloud/models/DescribeAlarmsResponseBodyAlarmListHybridMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBodyAlarmList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBodyAlarmList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_TO_JSON(AlarmTaskId, alarmTaskId_);
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Effective, effective_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(ExpressionsLogicOperator, expressionsLogicOperator_);
      DARABONBA_PTR_TO_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_TO_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBodyAlarmList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_FROM_JSON(AlarmTaskId, alarmTaskId_);
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Effective, effective_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(ExpressionsLogicOperator, expressionsLogicOperator_);
      DARABONBA_PTR_FROM_JSON(HybridMetrics, hybridMetrics_);
      DARABONBA_PTR_FROM_JSON(HybridMonitorNamespace, hybridMonitorNamespace_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeAlarmsResponseBodyAlarmList() = default ;
    DescribeAlarmsResponseBodyAlarmList(const DescribeAlarmsResponseBodyAlarmList &) = default ;
    DescribeAlarmsResponseBodyAlarmList(DescribeAlarmsResponseBodyAlarmList &&) = default ;
    DescribeAlarmsResponseBodyAlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBodyAlarmList() = default ;
    DescribeAlarmsResponseBodyAlarmList& operator=(const DescribeAlarmsResponseBodyAlarmList &) = default ;
    DescribeAlarmsResponseBodyAlarmList& operator=(DescribeAlarmsResponseBodyAlarmList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmActions_ != nullptr
        && this->alarmTaskId_ != nullptr && this->comparisonOperator_ != nullptr && this->description_ != nullptr && this->dimensions_ != nullptr && this->effective_ != nullptr
        && this->enable_ != nullptr && this->evaluationCount_ != nullptr && this->expressions_ != nullptr && this->expressionsLogicOperator_ != nullptr && this->hybridMetrics_ != nullptr
        && this->hybridMonitorNamespace_ != nullptr && this->metricName_ != nullptr && this->metricType_ != nullptr && this->name_ != nullptr && this->period_ != nullptr
        && this->promQL_ != nullptr && this->scalingGroupId_ != nullptr && this->state_ != nullptr && this->statistics_ != nullptr && this->threshold_ != nullptr; };
    // alarmActions Field Functions 
    bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
    void deleteAlarmActions() { this->alarmActions_ = nullptr;};
    inline const vector<string> & alarmActions() const { DARABONBA_PTR_GET_CONST(alarmActions_, vector<string>) };
    inline vector<string> alarmActions() { DARABONBA_PTR_GET(alarmActions_, vector<string>) };
    inline DescribeAlarmsResponseBodyAlarmList& setAlarmActions(const vector<string> & alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };
    inline DescribeAlarmsResponseBodyAlarmList& setAlarmActions(vector<string> && alarmActions) { DARABONBA_PTR_SET_RVALUE(alarmActions_, alarmActions) };


    // alarmTaskId Field Functions 
    bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
    void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
    inline string alarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions>) };
    inline vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions>) };
    inline DescribeAlarmsResponseBodyAlarmList& setDimensions(const vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline DescribeAlarmsResponseBodyAlarmList& setDimensions(vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string effective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeAlarmsResponseBodyAlarmList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline DescribeAlarmsResponseBodyAlarmList& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions>) };
    inline vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions>) };
    inline DescribeAlarmsResponseBodyAlarmList& setExpressions(const vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline DescribeAlarmsResponseBodyAlarmList& setExpressions(vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // expressionsLogicOperator Field Functions 
    bool hasExpressionsLogicOperator() const { return this->expressionsLogicOperator_ != nullptr;};
    void deleteExpressionsLogicOperator() { this->expressionsLogicOperator_ = nullptr;};
    inline string expressionsLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(expressionsLogicOperator_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setExpressionsLogicOperator(string expressionsLogicOperator) { DARABONBA_PTR_SET_VALUE(expressionsLogicOperator_, expressionsLogicOperator) };


    // hybridMetrics Field Functions 
    bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
    void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
    inline const vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics> & hybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics>) };
    inline vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics> hybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics>) };
    inline DescribeAlarmsResponseBodyAlarmList& setHybridMetrics(const vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
    inline DescribeAlarmsResponseBodyAlarmList& setHybridMetrics(vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


    // hybridMonitorNamespace Field Functions 
    bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
    void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
    inline string hybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeAlarmsResponseBodyAlarmList& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string promQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeAlarmsResponseBodyAlarmList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline DescribeAlarmsResponseBodyAlarmList& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The unique identifiers of the scaling rules that are associated with the event-triggered task.
    std::shared_ptr<vector<string>> alarmActions_ = nullptr;
    // The ID of the event-triggered task.
    std::shared_ptr<string> alarmTaskId_ = nullptr;
    // The operator that is used to compare the metric value and the metric threshold.
    // 
    // *   Valid value if the metric value is greater than or equal to the threshold: >=.
    // *   Valid value if the metric value is less than or equal to the threshold: <=.
    // *   Valid value if the metric value is greater than the threshold: >.
    // *   Valid value if the metric value is less than the threshold: <.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The description of the event-triggered task.
    std::shared_ptr<string> description_ = nullptr;
    // The metric dimensions.
    std::shared_ptr<vector<Models::DescribeAlarmsResponseBodyAlarmListDimensions>> dimensions_ = nullptr;
    // The effective period of the event-triggered task.
    std::shared_ptr<string> effective_ = nullptr;
    // Indicates whether the event-triggered task feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enable_ = nullptr;
    // The number of consecutive times that the threshold must be reached before a scaling rule is executed. For example, if you set this parameter to 3, the average CPU utilization must reach or exceed 80% three times in a row before a scaling rule is executed.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The alert conditions of the multi-metric alert rule.
    std::shared_ptr<vector<Models::DescribeAlarmsResponseBodyAlarmListExpressions>> expressions_ = nullptr;
    // The relationship between the trigger conditions that are specified in the multi-metric alert rule. Valid values:
    // 
    // *   `&&`: An alert is triggered only if all metrics in the multi-metric alert rule meet their trigger conditions. In this case, an alert is triggered only if the results of all trigger conditions that are specified in the multi-metric alert rule are `true`.
    // *   `||`: An alert is triggered only if one of the metrics in the multi-metric alert rule meets its trigger condition.
    std::shared_ptr<string> expressionsLogicOperator_ = nullptr;
    // The Hybrid Cloud Monitoring metrics.
    std::shared_ptr<vector<Models::DescribeAlarmsResponseBodyAlarmListHybridMetrics>> hybridMetrics_ = nullptr;
    // The ID of the Hybrid Cloud Monitoring namespace.
    // 
    // For information about how to manage Hybrid Cloud Monitoring namespaces, see [Manage namespaces](https://help.aliyun.com/document_detail/217606.html).
    std::shared_ptr<string> hybridMonitorNamespace_ = nullptr;
    // The metric name. Valid values:
    // 
    // *   CpuUtilization: the CPU utilization of an Elastic Compute Service (ECS) instance. Unit: %.
    // *   ConcurrentConnections: the number of current connections to an ECS instance.
    // *   IntranetTx: the outbound traffic over an internal network. Unit: KB/min.
    // *   IntranetRx: the inbound traffic over an internal network. Unit: KB/min.
    // *   VpcInternetTx: the outbound traffic over a virtual private cloud (VPC). Unit: KB/min.
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
    // *   LoadBalancerRealServerAverageQps: the queries per second (QPS) of an instance.
    // 
    // For more information, see [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The type of the metric. Valid values:
    // 
    // *   system: system metrics of CloudMonitor
    // *   custom: custom metrics that are reported to CloudMonitor.
    // *   hybrid: metrics of Hybrid Cloud Monitoring.
    std::shared_ptr<string> metricType_ = nullptr;
    // The name of the event-triggered task.
    std::shared_ptr<string> name_ = nullptr;
    // The statistical period of the metric data. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // >  You can set the value of this parameter to 15 Seconds only for scaling groups of the ECS type.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The PromQL statement of Hybrid Cloud Monitoring.
    std::shared_ptr<string> promQL_ = nullptr;
    // The ID of the scaling group to which the event-triggered task is associated.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The status of the event-triggered task. Valid values:
    // 
    // *   ALARM: The alert condition is met and an alert is triggered.
    // *   OK: The alert condition is not met.
    // *   INSUFFICIENT_DATA: Auto Scaling cannot determine whether the alert condition is met due to insufficient data.
    std::shared_ptr<string> state_ = nullptr;
    // The method that is used to aggregate the metric data. Valid values:
    // 
    // *   Average: the average value
    // *   Minimum: the minimum value
    // *   Maximum: the maximum value
    std::shared_ptr<string> statistics_ = nullptr;
    // The threshold of the metric. If the threshold is reached the specified number of times within the statistical period, a scaling rule is executed.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
