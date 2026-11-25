// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeAlarmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAlarmsResponseBody() = default ;
    DescribeAlarmsResponseBody(const DescribeAlarmsResponseBody &) = default ;
    DescribeAlarmsResponseBody(DescribeAlarmsResponseBody &&) = default ;
    DescribeAlarmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmsResponseBody() = default ;
    DescribeAlarmsResponseBody& operator=(const DescribeAlarmsResponseBody &) = default ;
    DescribeAlarmsResponseBody& operator=(DescribeAlarmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlarmList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AlarmList& obj) { 
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
      AlarmList() = default ;
      AlarmList(const AlarmList &) = default ;
      AlarmList(AlarmList &&) = default ;
      AlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmList() = default ;
      AlarmList& operator=(const AlarmList &) = default ;
      AlarmList& operator=(AlarmList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HybridMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HybridMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Statistic, statistic_);
        };
        friend void from_json(const Darabonba::Json& j, HybridMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
        };
        HybridMetrics() = default ;
        HybridMetrics(const HybridMetrics &) = default ;
        HybridMetrics(HybridMetrics &&) = default ;
        HybridMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HybridMetrics() = default ;
        HybridMetrics& operator=(const HybridMetrics &) = default ;
        HybridMetrics& operator=(HybridMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Dimensions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
            DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
            DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
          };
          friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
            DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
            DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
          };
          Dimensions() = default ;
          Dimensions(const Dimensions &) = default ;
          Dimensions(Dimensions &&) = default ;
          Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Dimensions() = default ;
          Dimensions& operator=(const Dimensions &) = default ;
          Dimensions& operator=(Dimensions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && this->dimensionValue_ == nullptr; };
          // dimensionKey Field Functions 
          bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
          void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
          inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
          inline Dimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


          // dimensionValue Field Functions 
          bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
          void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
          inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
          inline Dimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


        protected:
          // The key of the metric dimension.
          shared_ptr<string> dimensionKey_ {};
          // The value of the metric dimension.
          shared_ptr<string> dimensionValue_ {};
        };

        virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->expression_ == nullptr && this->id_ == nullptr && this->metricName_ == nullptr && this->statistic_ == nullptr; };
        // dimensions Field Functions 
        bool hasDimensions() const { return this->dimensions_ != nullptr;};
        void deleteDimensions() { this->dimensions_ = nullptr;};
        inline const vector<HybridMetrics::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<HybridMetrics::Dimensions>) };
        inline vector<HybridMetrics::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<HybridMetrics::Dimensions>) };
        inline HybridMetrics& setDimensions(const vector<HybridMetrics::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
        inline HybridMetrics& setDimensions(vector<HybridMetrics::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline HybridMetrics& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline HybridMetrics& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline HybridMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // statistic Field Functions 
        bool hasStatistic() const { return this->statistic_ != nullptr;};
        void deleteStatistic() { this->statistic_ = nullptr;};
        inline string getStatistic() const { DARABONBA_PTR_GET_DEFAULT(statistic_, "") };
        inline HybridMetrics& setStatistic(string statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };


      protected:
        // The dimensions of the metric. This is used to specify the resources monitored by the metric.
        shared_ptr<vector<HybridMetrics::Dimensions>> dimensions_ {};
        // The metric calculation expression for multiple Hybrid Cloud Monitoring metrics. The calculation result of the expression is used to trigger scaling activities. The calculation expression must comply with the Reverse Polish Notation (RPN) specification, and only the `+`, `-`, `*`, and `/` operators are supported.
        shared_ptr<string> expression_ {};
        // The reference ID of the metric in the metric calculation expression.
        shared_ptr<string> id_ {};
        // The name of the monitoring metrics in the Hybrid Cloud Monitoring metrics repository.
        shared_ptr<string> metricName_ {};
        // The statistical method of the metric. Valid values:
        // - Average: the average value of all data points in the specified period.
        // - Minimum: the minimum value of all data points in the specified period.
        // - Maximum: the maximum value of all data points in the specified period.
        shared_ptr<string> statistic_ {};
      };

      class Expressions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Expressions& obj) { 
          DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Expressions& obj) { 
          DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        Expressions() = default ;
        Expressions(const Expressions &) = default ;
        Expressions(Expressions &&) = default ;
        Expressions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Expressions() = default ;
        Expressions& operator=(const Expressions &) = default ;
        Expressions& operator=(Expressions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
        // comparisonOperator Field Functions 
        bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
        void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
        inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
        inline Expressions& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Expressions& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
        inline Expressions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
        inline Expressions& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline Expressions& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // The comparison operator used to compare the metric value with the threshold in the multi-metric alert rule. Valid values:
        // 
        // - >=: The metric value is greater than or equal to the threshold.
        // - <=: The metric value is less than or equal to the threshold.
        // - >: The metric value is greater than the threshold.
        // - <: The metric value is less than the threshold.
        shared_ptr<string> comparisonOperator_ {};
        // The name of the monitoring metrics in the multi-metric alert rule. Valid values: 
        // 
        // - CpuUtilization: the CPU utilization of an ECS instance. Unit: %.
        // - ConcurrentConnections: the number of concurrent connections to an ECS instance.
        // - IntranetTx: the outbound internal network traffic of an ECS instance. Unit: Kbit/min.
        // - IntranetRx: the inbound internal network traffic of an ECS instance. Unit: Kbit/min.
        // - VpcInternetTx: the outbound Internet traffic of an ECS instance. Unit: Kbit/min.
        // - VpcInternetRx: the inbound Internet traffic of an ECS instance. Unit: Kbit/min.
        // - SystemDiskReadBps: the number of bytes read from the system cloud disk per second. Unit: Byte/s.
        // - SystemDiskWriteBps: the number of bytes written to the system cloud disk per second. Unit: Byte/s.
        // - SystemDiskReadOps: the number of read operations on the system cloud disk per second. Unit: IOPS.
        // - SystemDiskWriteOps: the number of write operations on the system cloud disk per second. Unit: IOPS.
        // - CpuUtilizationAgent: the CPU utilization collected by the CloudMonitor agent. Unit: %.
        // - GpuUtilizationAgent: the GPU utilization collected by the CloudMonitor agent. Unit: %.
        // - GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory collected by the CloudMonitor agent. Unit: %.
        // - GpuMemoryUtilizationAgent: the GPU memory utilization collected by the CloudMonitor agent. Unit: %.
        // - MemoryUtilization: the memory utilization collected by the CloudMonitor agent. Unit: %.
        // - LoadAverage: the average system load collected by the CloudMonitor agent.
        // - TcpConnection: the total number of TCP connections collected by the CloudMonitor agent.
        // - TcpConnection: the number of established TCP connections collected by the CloudMonitor agent.
        // - PackagesNetOut: the number of packets sent by the internal network interface controller (NIC) per second collected by the CloudMonitor agent. Unit: packets/s.
        // - PackagesNetIn: the number of packets received by the internal network interface controller (NIC) per second collected by the CloudMonitor agent. Unit: packets/s.
        // - PackagesNetOut: the number of packets sent by the public network interface controller (NIC) per second collected by the CloudMonitor agent. Unit: packets/s.
        // - PackagesNetIn: the number of packets received by the public network interface controller (NIC) per second collected by the CloudMonitor agent. Unit: packets/s.
        // - EciPodCpuUtilization: the CPU utilization. Unit: %.
        // - EciPodMemoryUtilization: the memory utilization. Unit: %.
        // - LoadBalancerRealServerAverageQps: the average QPS per backend server in an ALB server group. Unit: queries/s.
        // 
        // For more information, see [Event-triggered nodes for system monitoring](https://help.aliyun.com/document_detail/74854.html).
        shared_ptr<string> metricName_ {};
        // The period at which metric data is collected in the multi-metric alert rule. Unit: seconds. Valid values:
        // 
        // - 15
        // - 60
        // - 120
        // - 300
        // - 900
        // 
        // > A statistical period of 15 seconds is supported only when you monitor a scaling group that contains ECS instances and use metrics collected by the CloudMonitor agent (metrics whose names start with Agent).
        shared_ptr<int32_t> period_ {};
        // The statistical method used for metric data in the multi-metric alert rule. Valid values:
        // - Average: the average value.
        // - Minimum: the minimum value.
        // - Maximum: the maximum value.
        shared_ptr<string> statistics_ {};
        // The threshold of the monitoring metrics in the multi-metric alert rule. The scaling rule is triggered when the threshold expression is met for the specified number of times.
        shared_ptr<float> threshold_ {};
      };

      class Dimensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
          DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
        };
        friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
          DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
          DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
        };
        Dimensions() = default ;
        Dimensions(const Dimensions &) = default ;
        Dimensions(Dimensions &&) = default ;
        Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dimensions() = default ;
        Dimensions& operator=(const Dimensions &) = default ;
        Dimensions& operator=(Dimensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dimensionKey_ == nullptr
        && this->dimensionValue_ == nullptr; };
        // dimensionKey Field Functions 
        bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
        void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
        inline string getDimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
        inline Dimensions& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


        // dimensionValue Field Functions 
        bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
        void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
        inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
        inline Dimensions& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


      protected:
        // The key of the dimension associated with the metric. Valid values:
        // 
        // - user_id: the ID of your account.
        // - scaling_group: the monitored scaling group.
        // - device: the type of the NIC device.
        // - state: the state of the TCP connection.
        shared_ptr<string> dimensionKey_ {};
        // The value of the dimension associated with the metric. The valid values vary based on the dimension key.
        // 
        // - `user_id`: automatically populated by the system.
        // 
        // - `scaling_group`: automatically populated by the system.
        // 
        // - Valid values for `device`:
        //     - eth0: For classic network instances, eth0 represents the internal NIC. For VPC-connected instances, only the eth0 NIC exists.
        //     - eth1: For classic network instances, eth1 represents the public NIC.
        // 
        // - Valid values for `state`:
        //     - TCP_TOTAL: the total number of TCP connections.
        //     - ESTABLISHED: the number of established TCP connections.
        shared_ptr<string> dimensionValue_ {};
      };

      virtual bool empty() const override { return this->alarmActions_ == nullptr
        && this->alarmTaskId_ == nullptr && this->comparisonOperator_ == nullptr && this->description_ == nullptr && this->dimensions_ == nullptr && this->effective_ == nullptr
        && this->enable_ == nullptr && this->evaluationCount_ == nullptr && this->expressions_ == nullptr && this->expressionsLogicOperator_ == nullptr && this->hybridMetrics_ == nullptr
        && this->hybridMonitorNamespace_ == nullptr && this->metricName_ == nullptr && this->metricType_ == nullptr && this->name_ == nullptr && this->period_ == nullptr
        && this->promQL_ == nullptr && this->scalingGroupId_ == nullptr && this->state_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
      // alarmActions Field Functions 
      bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
      void deleteAlarmActions() { this->alarmActions_ = nullptr;};
      inline const vector<string> & getAlarmActions() const { DARABONBA_PTR_GET_CONST(alarmActions_, vector<string>) };
      inline vector<string> getAlarmActions() { DARABONBA_PTR_GET(alarmActions_, vector<string>) };
      inline AlarmList& setAlarmActions(const vector<string> & alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };
      inline AlarmList& setAlarmActions(vector<string> && alarmActions) { DARABONBA_PTR_SET_RVALUE(alarmActions_, alarmActions) };


      // alarmTaskId Field Functions 
      bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
      void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
      inline string getAlarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
      inline AlarmList& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


      // comparisonOperator Field Functions 
      bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
      void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
      inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
      inline AlarmList& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dimensions Field Functions 
      bool hasDimensions() const { return this->dimensions_ != nullptr;};
      void deleteDimensions() { this->dimensions_ = nullptr;};
      inline const vector<AlarmList::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<AlarmList::Dimensions>) };
      inline vector<AlarmList::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<AlarmList::Dimensions>) };
      inline AlarmList& setDimensions(const vector<AlarmList::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
      inline AlarmList& setDimensions(vector<AlarmList::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


      // effective Field Functions 
      bool hasEffective() const { return this->effective_ != nullptr;};
      void deleteEffective() { this->effective_ = nullptr;};
      inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
      inline AlarmList& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AlarmList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // evaluationCount Field Functions 
      bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
      void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
      inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
      inline AlarmList& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


      // expressions Field Functions 
      bool hasExpressions() const { return this->expressions_ != nullptr;};
      void deleteExpressions() { this->expressions_ = nullptr;};
      inline const vector<AlarmList::Expressions> & getExpressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<AlarmList::Expressions>) };
      inline vector<AlarmList::Expressions> getExpressions() { DARABONBA_PTR_GET(expressions_, vector<AlarmList::Expressions>) };
      inline AlarmList& setExpressions(const vector<AlarmList::Expressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
      inline AlarmList& setExpressions(vector<AlarmList::Expressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


      // expressionsLogicOperator Field Functions 
      bool hasExpressionsLogicOperator() const { return this->expressionsLogicOperator_ != nullptr;};
      void deleteExpressionsLogicOperator() { this->expressionsLogicOperator_ = nullptr;};
      inline string getExpressionsLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(expressionsLogicOperator_, "") };
      inline AlarmList& setExpressionsLogicOperator(string expressionsLogicOperator) { DARABONBA_PTR_SET_VALUE(expressionsLogicOperator_, expressionsLogicOperator) };


      // hybridMetrics Field Functions 
      bool hasHybridMetrics() const { return this->hybridMetrics_ != nullptr;};
      void deleteHybridMetrics() { this->hybridMetrics_ = nullptr;};
      inline const vector<AlarmList::HybridMetrics> & getHybridMetrics() const { DARABONBA_PTR_GET_CONST(hybridMetrics_, vector<AlarmList::HybridMetrics>) };
      inline vector<AlarmList::HybridMetrics> getHybridMetrics() { DARABONBA_PTR_GET(hybridMetrics_, vector<AlarmList::HybridMetrics>) };
      inline AlarmList& setHybridMetrics(const vector<AlarmList::HybridMetrics> & hybridMetrics) { DARABONBA_PTR_SET_VALUE(hybridMetrics_, hybridMetrics) };
      inline AlarmList& setHybridMetrics(vector<AlarmList::HybridMetrics> && hybridMetrics) { DARABONBA_PTR_SET_RVALUE(hybridMetrics_, hybridMetrics) };


      // hybridMonitorNamespace Field Functions 
      bool hasHybridMonitorNamespace() const { return this->hybridMonitorNamespace_ != nullptr;};
      void deleteHybridMonitorNamespace() { this->hybridMonitorNamespace_ = nullptr;};
      inline string getHybridMonitorNamespace() const { DARABONBA_PTR_GET_DEFAULT(hybridMonitorNamespace_, "") };
      inline AlarmList& setHybridMonitorNamespace(string hybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(hybridMonitorNamespace_, hybridMonitorNamespace) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline AlarmList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // metricType Field Functions 
      bool hasMetricType() const { return this->metricType_ != nullptr;};
      void deleteMetricType() { this->metricType_ = nullptr;};
      inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
      inline AlarmList& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AlarmList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline AlarmList& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // promQL Field Functions 
      bool hasPromQL() const { return this->promQL_ != nullptr;};
      void deletePromQL() { this->promQL_ = nullptr;};
      inline string getPromQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
      inline AlarmList& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline AlarmList& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AlarmList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline AlarmList& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline AlarmList& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // The list of unique identifiers of the scaling rules associated with the event-triggered task.
      shared_ptr<vector<string>> alarmActions_ {};
      // The ID of the event-triggered task.
      shared_ptr<string> alarmTaskId_ {};
      // The comparison operator used to compare the metric value with the threshold. Valid values:
      // 
      // - >=: The metric value is greater than or equal to the threshold.
      // - <=: The metric value is less than or equal to the threshold.
      // - >: The metric value is greater than the threshold.
      // - <: The metric value is less than the threshold.
      shared_ptr<string> comparisonOperator_ {};
      // The description of the event-triggered task.
      shared_ptr<string> description_ {};
      // The dimension information associated with the metric.
      shared_ptr<vector<AlarmList::Dimensions>> dimensions_ {};
      // The effective period of the event-triggered node.
      shared_ptr<string> effective_ {};
      // Indicates whether the event-triggered task is enabled. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> enable_ {};
      // The number of times that the threshold condition must be met before the scaling rule is triggered. For example, if this parameter is set to 3, the scaling rule is triggered only when the average CPU utilization is greater than or equal to 80% for three consecutive times.
      shared_ptr<int32_t> evaluationCount_ {};
      // The information about the multi-metric alert rule.
      shared_ptr<vector<AlarmList::Expressions>> expressions_ {};
      // The logical operator that specifies the relationship among multiple monitoring alert conditions. Valid values:
      // - `&&`: An alert is triggered only when all monitoring metrics meet the alert conditions. That is, an alert is triggered only when all expressions in the multi-metric alert rule evaluate to `true`.
      // - `||`: An alert is triggered when any of the monitoring metrics meets the alert condition.
      shared_ptr<string> expressionsLogicOperator_ {};
      // The monitoring metrics settings of Hybrid Cloud Monitoring. For more information about how to configure the settings, see [Use formulas to customize target tracking scaling rules](https://help.aliyun.com/document_detail/2852162.html).
      shared_ptr<vector<AlarmList::HybridMetrics>> hybridMetrics_ {};
      // The ID of the Hybrid Cloud Monitoring metrics repository.
      // 
      // For more information about how to manage metrics repositories, see [Manage metrics repositories](https://help.aliyun.com/document_detail/217606.html).
      shared_ptr<string> hybridMonitorNamespace_ {};
      // The name of the metric. Valid values: 
      // 
      // - CpuUtilization: the CPU utilization of an ECS instance. Unit: %.
      // - ConcurrentConnections: the number of concurrent connections to an ECS instance.
      // - IntranetTx: the outbound internal traffic of an ECS instance. Unit: Kbit/min.
      // - IntranetRx: the inbound internal traffic of an ECS instance. Unit: Kbit/min.
      // - VpcInternetTx: the outbound Internet traffic of an ECS instance. Unit: Kbit/min.
      // - VpcInternetRx: the inbound Internet traffic of an ECS instance. Unit: Kbit/min.
      // - SystemDiskReadBps: the number of bytes read from the system cloud disk per second. Unit: Byte/s.
      // - SystemDiskWriteBps: the number of bytes written to the system cloud disk per second. Unit: Byte/s.
      // - SystemDiskReadOps: the number of read operations on the system cloud disk per second. Unit: IOPS.
      // - SystemDiskWriteOps: the number of write operations on the system cloud disk per second. Unit: IOPS.
      // - CpuUtilizationAgent: the CPU utilization collected by the CloudMonitor agent. Unit: %.
      // - GpuUtilizationAgent: the GPU utilization collected by the CloudMonitor agent. Unit: %.
      // - GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory collected by the CloudMonitor agent. Unit: %.
      // - GpuMemoryUtilizationAgent: the GPU memory utilization collected by the CloudMonitor agent. Unit: %.
      // - MemoryUtilization: the memory utilization collected by the CloudMonitor agent. Unit: %.
      // - LoadAverage: the average system load collected by the CloudMonitor agent.
      // - TcpConnection: the total number of TCP connections collected by the CloudMonitor agent.
      // - TcpConnection: the number of established TCP connections collected by the CloudMonitor agent.
      // - PackagesNetOut: the number of packets sent by the internal NIC per second collected by the CloudMonitor agent. Unit: packets/s.
      // - PackagesNetIn: the number of packets received by the internal NIC per second collected by the CloudMonitor agent. Unit: packets/s.
      // - PackagesNetOut: the number of packets sent by the public NIC per second collected by the CloudMonitor agent. Unit: packets/s.
      // - PackagesNetIn: the number of packets received by the public NIC per second collected by the CloudMonitor agent. Unit: packets/s.
      // - EciPodCpuUtilization: the CPU utilization. Unit: %.
      // - EciPodMemoryUtilization: the memory utilization. Unit: %.
      // - LoadBalancerRealServerAverageQps: the average QPS per backend server in an ALB server group. Unit: queries/s.
      // 
      // For more information, see [Event-triggered tasks for system monitoring](https://help.aliyun.com/document_detail/74854.html).
      shared_ptr<string> metricName_ {};
      // The type of the metric. Valid values:
      // 
      // - system: system metrics of CloudMonitor.
      // - custom: custom metrics reported to CloudMonitor.
      // - hybrid: metrics of Hybrid Cloud Monitoring.
      shared_ptr<string> metricType_ {};
      // The name of the event-triggered task.
      shared_ptr<string> name_ {};
      // The period at which metric data is collected. Unit: seconds. Valid values:
      // 
      // - 15
      // - 60
      // - 120
      // - 300
      // - 900
      // 
      // > A statistical period of 15 seconds is supported only for scaling groups that contain ECS instances.
      shared_ptr<int32_t> period_ {};
      // The PromQL query statement for Hybrid Cloud Monitoring.
      shared_ptr<string> promQL_ {};
      // The ID of the scaling group with which the event-triggered task is associated.
      shared_ptr<string> scalingGroupId_ {};
      // The state of the event-triggered task. Valid values:
      // 
      // - ALARM: Alerting. The alert condition is met.
      // - OK: Normal. The alert condition is not met.
      // - INSUFFICIENT_DATA: Insufficient data. The data is insufficient to determine whether the alert condition is met.
      shared_ptr<string> state_ {};
      // The statistical method used for metric data. Valid values:
      // 
      // - Average: the average value.
      // - Minimum: the minimum value.
      // - Maximum: the maximum value.
      shared_ptr<string> statistics_ {};
      // The threshold of the monitoring metrics. The scaling rule is triggered when the threshold expression is met for the specified number of times.
      shared_ptr<float> threshold_ {};
    };

    virtual bool empty() const override { return this->alarmList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // alarmList Field Functions 
    bool hasAlarmList() const { return this->alarmList_ != nullptr;};
    void deleteAlarmList() { this->alarmList_ = nullptr;};
    inline const vector<DescribeAlarmsResponseBody::AlarmList> & getAlarmList() const { DARABONBA_PTR_GET_CONST(alarmList_, vector<DescribeAlarmsResponseBody::AlarmList>) };
    inline vector<DescribeAlarmsResponseBody::AlarmList> getAlarmList() { DARABONBA_PTR_GET(alarmList_, vector<DescribeAlarmsResponseBody::AlarmList>) };
    inline DescribeAlarmsResponseBody& setAlarmList(const vector<DescribeAlarmsResponseBody::AlarmList> & alarmList) { DARABONBA_PTR_SET_VALUE(alarmList_, alarmList) };
    inline DescribeAlarmsResponseBody& setAlarmList(vector<DescribeAlarmsResponseBody::AlarmList> && alarmList) { DARABONBA_PTR_SET_RVALUE(alarmList_, alarmList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAlarmsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAlarmsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAlarmsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of event-triggered tasks.
    shared_ptr<vector<DescribeAlarmsResponseBody::AlarmList>> alarmList_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of event-triggered tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
