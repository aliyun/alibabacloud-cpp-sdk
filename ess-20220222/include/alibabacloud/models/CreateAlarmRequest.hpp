// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
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
  class CreateAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Effective, effective_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(ExpressionsLogicOperator, expressionsLogicOperator_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Effective, effective_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(ExpressionsLogicOperator, expressionsLogicOperator_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateAlarmRequest() = default ;
    CreateAlarmRequest(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest(CreateAlarmRequest &&) = default ;
    CreateAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequest() = default ;
    CreateAlarmRequest& operator=(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest& operator=(CreateAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The comparison operator used to compare the aggregated metric value with the threshold for the multi-metric alert rule. This operator specifies the condition under which the threshold is met. Valid values:
      // 
      // - >=: The aggregated metric value is greater than or equal to the threshold.
      // - <=: The aggregated metric value is less than or equal to the threshold.
      // - >: The aggregated metric value is greater than the threshold.
      // - <: The aggregated metric value is less than the threshold.
      // 
      // Default value: >=.
      shared_ptr<string> comparisonOperator_ {};
      // The name of the monitoring metrics for the multi-metric alert rule. Valid values vary based on the monitoring type of the event-triggered task:
      // 
      // - If the event-triggered task is of the custom monitoring type (MetricType=custom), the valid values are your custom metrics.
      // 
      // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values: 
      //     
      //     - CpuUtilization: the CPU utilization of an ECS instance (%).
      // 
      //     - ConcurrentConnections: the number of concurrent connections to an ECS instance.
      // 
      //     - IntranetTx: the outbound internal network traffic of an ECS instance (Kb/min).
      // 
      //     - IntranetRx: the inbound internal network traffic of an ECS instance (Kb/min).
      // 
      //     - VpcInternetTx: the outbound Internet traffic of an ECS instance (Kb/min).
      // 
      //     - VpcInternetRx: the inbound Internet traffic of an ECS instance (Kb/min).
      // 
      //     - SystemDiskReadBps: the read BPS of the system cloud disk (Byte/s).
      // 
      //     - SystemDiskWriteBps: the write BPS of the system cloud disk (Byte/s).
      // 
      //     - SystemDiskReadOps: the read IOPS of the system cloud disk (operations/s).
      // 
      //     - SystemDiskWriteOps: the write IOPS of the system cloud disk (operations/s).
      // 
      //     - CpuUtilizationAgent: the CPU utilization monitored by the agent (%).
      // 
      //     - GpuUtilizationAgent: the GPU utilization monitored by the agent (%).
      // 
      //     - GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory monitored by the agent (%).
      // 
      //     - GpuMemoryUtilizationAgent: the GPU memory utilization monitored by the agent (%).
      // 
      //     - MemoryUtilization: the memory utilization monitored by the agent (%).
      // 
      //     - LoadAverage: the average system load monitored by the agent.
      // 
      //     - TcpConnection: the total number of TCP connections monitored by the agent.
      //     
      //     - TcpConnection: the number of established TCP connections monitored by the agent.
      // 
      //     - PackagesNetOut: the number of packets sent by the internal network interface controller (NIC) per second monitored by the agent (packets/s).
      // 
      //     - PackagesNetIn: the number of packets received by the internal network interface controller (NIC) per second monitored by the agent (packets/s).
      // 
      //     - PackagesNetOut: the number of packets sent by the public network interface controller (NIC) per second monitored by the agent (packets/s).
      // 
      //     - PackagesNetIn: the number of packets received by the public network interface controller (NIC) per second monitored by the agent (packets/s).
      //    
      //     - EciPodCpuUtilization: the CPU utilization (%).
      // 
      //     - EciPodMemoryUtilization: the memory utilization (%).
      // 
      //     - LoadBalancerRealServerAverageQps: the average QPS per backend server in an ALB server group (queries/s).
      // 
      // For more information, see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
      shared_ptr<string> metricName_ {};
      // The epoch for aggregating monitoring metric data in the multi-metric alert rule. Unit: seconds. Valid values:
      // 
      // - 15
      // - 60
      // - 120
      // - 300
      // - 900
      // 
      // > Only scaling groups of the ECS instance type support a 15-second statistical period.
      // 
      // Default value: 300.
      shared_ptr<int32_t> period_ {};
      // The method for aggregating metric data in the multi-metric alert rule. Valid values:
      // 
      // - Average: the average value.
      // - Minimum: the minimum value.
      // - Maximum: the maximum value.
      // 
      // Default value: Average.
      shared_ptr<string> statistics_ {};
      // The threshold of the monitoring metrics in the multi-metric alert rule. When the monitoring threshold expression is met for a specified number of times, it triggers the execution of a scaling rule.
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
      // The key of the dimension information associated with the metric. Valid values vary based on the monitoring type of the event-triggered task:
      // - If the event-triggered task is of the custom monitoring type (MetricType=custom), the valid values are not limited and can be specified by you.
      // 
      // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values:
      // 
      //     - user_id: the ID of your account.
      //     - scaling_group: the monitored scaling group.
      //     - device: the type of the network interface controller (NIC) device.
      //     - state: the state of the TCP connection.
      //     - rulePool: the ALB server group specified for the QPS monitoring metrics.
      shared_ptr<string> dimensionKey_ {};
      // The value of the dimension information associated with the metric. Valid values vary based on Dimensions.DimensionKey:
      // - If Dimensions.DimensionKey is custom, which means the event-triggered task is of the custom monitoring type (MetricType=custom), the valid values are not limited and can be specified by you.
      // 
      // - If Dimensions.DimensionKey is within the system-specified range, which means the event-triggered task is of the system monitoring type (MetricType=system), valid values:
      // 
      //     - user_id: automatically populated by the system.
      // 
      //     - scaling_group: automatically populated by the system.
      // 
      //     - device:
      // 
      //         - eth0: For classic network instances, eth0 represents the internal NIC. For VPC-connected instances, only the eth0 NIC exists.
      // 
      //         - eth1: For classic network instances, eth1 represents the public NIC.
      // 
      //     - state:
      // 
      //         - TCP_TOTAL: the total number of TCP connections.
      // 
      //         - ESTABLISHED: the number of established TCP connections.
      // 
      //     - rulePool: the ID of the ALB server group. Example: sgp-xxxxx.
      shared_ptr<string> dimensionValue_ {};
    };

    virtual bool empty() const override { return this->alarmActions_ == nullptr
        && this->comparisonOperator_ == nullptr && this->description_ == nullptr && this->dimensions_ == nullptr && this->effective_ == nullptr && this->evaluationCount_ == nullptr
        && this->expressions_ == nullptr && this->expressionsLogicOperator_ == nullptr && this->groupId_ == nullptr && this->metricName_ == nullptr && this->metricType_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
    // alarmActions Field Functions 
    bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
    void deleteAlarmActions() { this->alarmActions_ = nullptr;};
    inline const vector<string> & getAlarmActions() const { DARABONBA_PTR_GET_CONST(alarmActions_, vector<string>) };
    inline vector<string> getAlarmActions() { DARABONBA_PTR_GET(alarmActions_, vector<string>) };
    inline CreateAlarmRequest& setAlarmActions(const vector<string> & alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };
    inline CreateAlarmRequest& setAlarmActions(vector<string> && alarmActions) { DARABONBA_PTR_SET_RVALUE(alarmActions_, alarmActions) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CreateAlarmRequest& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAlarmRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<CreateAlarmRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<CreateAlarmRequest::Dimensions>) };
    inline vector<CreateAlarmRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<CreateAlarmRequest::Dimensions>) };
    inline CreateAlarmRequest& setDimensions(const vector<CreateAlarmRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline CreateAlarmRequest& setDimensions(vector<CreateAlarmRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline CreateAlarmRequest& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline CreateAlarmRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<CreateAlarmRequest::Expressions> & getExpressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<CreateAlarmRequest::Expressions>) };
    inline vector<CreateAlarmRequest::Expressions> getExpressions() { DARABONBA_PTR_GET(expressions_, vector<CreateAlarmRequest::Expressions>) };
    inline CreateAlarmRequest& setExpressions(const vector<CreateAlarmRequest::Expressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline CreateAlarmRequest& setExpressions(vector<CreateAlarmRequest::Expressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // expressionsLogicOperator Field Functions 
    bool hasExpressionsLogicOperator() const { return this->expressionsLogicOperator_ != nullptr;};
    void deleteExpressionsLogicOperator() { this->expressionsLogicOperator_ = nullptr;};
    inline string getExpressionsLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(expressionsLogicOperator_, "") };
    inline CreateAlarmRequest& setExpressionsLogicOperator(string expressionsLogicOperator) { DARABONBA_PTR_SET_VALUE(expressionsLogicOperator_, expressionsLogicOperator) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline CreateAlarmRequest& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateAlarmRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateAlarmRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlarmRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAlarmRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAlarmRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAlarmRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAlarmRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateAlarmRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CreateAlarmRequest& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The list of unique identifiers of the scaling rules associated with the event-triggered task.
    shared_ptr<vector<string>> alarmActions_ {};
    // The comparison operator used to compare the aggregated metric value with the threshold. This operator specifies the condition under which the threshold is met. Valid values:
    // 
    // - >=: The aggregated metric value is greater than or equal to the threshold.
    // - <=: The aggregated metric value is less than or equal to the threshold.
    // - >: The aggregated metric value is greater than the threshold.
    // - <: The aggregated metric value is less than the threshold.
    // 
    // Default value: >=.
    shared_ptr<string> comparisonOperator_ {};
    // The description of the event-triggered task.
    shared_ptr<string> description_ {};
    // The dimension information associated with the metric.
    shared_ptr<vector<CreateAlarmRequest::Dimensions>> dimensions_ {};
    // Specifies the effective period of the event-triggered task. By default, the task takes effect at all times.
    // 
    // This parameter follows the cron expression format. The default format is `X X X X X ?`, which is described as follows:
    // - X: a placeholder for a field, representing seconds, minutes, hours, day of month, and month in sequence. X can be a specific value or a special character with logical meaning. For more information about the valid values of X, see [Cron expressions](https://help.aliyun.com/document_detail/25907.html).
    // 
    // - ?: indicates that no value is specified.
    // 
    // > The specified value of this parameter **defaults to the UTC+8 time zone**. You can add the time zone information `TZ=+yy` before the cron expression to specify a time zone, where y represents the time zone offset. For example, `TZ=+00 * * 1-2 * * ?` indicates that the event-triggered task takes effect between 01:00 and 02:59 every day in the UTC+0 time zone.
    // 
    // Examples and their meanings:
    // 
    // - `* * * * * ?`: takes effect at all times.
    // 
    // - `* * 17-18 * * ?`: takes effect between 17:00 and 18:59 every day in the UTC+8 time zone.
    // 
    // - `TZ=+00 * * 1-2 * * ?`: takes effect between 01:00 and 02:59 every day in the UTC+0 time zone.
    shared_ptr<string> effective_ {};
    // The number of times that the threshold expression must be met to trigger a scaling rule. For example, if this parameter is set to 3, the scaling rule is triggered when the average CPU utilization is greater than or equal to 80% for three consecutive times.
    // 
    // Default value: 3.
    shared_ptr<int32_t> evaluationCount_ {};
    // The information about the multi-metric alert rule.
    shared_ptr<vector<CreateAlarmRequest::Expressions>> expressions_ {};
    // The logical operator between multiple metric alert conditions. Valid values:
    // 
    // - `&&`: An alert is triggered only when all monitoring metrics meet the alert conditions. That is, an alert is triggered only when all expressions in the multi-metric alert rule evaluate to `true`.
    // - `||`: An alert is triggered if any one of the metrics meets the alert condition.
    // 
    // Default value: `&&`.
    shared_ptr<string> expressionsLogicOperator_ {};
    // The ID of the CloudMonitor application group to which the custom metric belongs. This parameter is required only when the metric type is custom.
    shared_ptr<int32_t> groupId_ {};
    // The name of the metric. The valid values vary based on the monitoring type of the event-triggered task:
    // 
    // - If the event-triggered task is of the custom monitoring type (MetricType=custom), the valid values are your custom metrics.
    // 
    // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values: 
    //     - CpuUtilization: the CPU utilization of an ECS instance (%).
    // 
    //     - ConcurrentConnections: the number of concurrent connections to an ECS instance.
    // 
    //     - IntranetTx: the outbound internal network traffic of an ECS instance (Kb/min).
    // 
    //     - IntranetRx: the inbound internal network traffic of an ECS instance (Kb/min).
    // 
    //     - VpcInternetTx: the outbound Internet traffic of an ECS instance (Kb/min).
    // 
    //     - VpcInternetRx: the inbound Internet traffic of an ECS instance (Kb/min).
    // 
    //     - SystemDiskReadBps: the read BPS of the system cloud disk (Byte/s).
    // 
    //     - SystemDiskWriteBps: the write BPS of the system cloud disk (Byte/s).
    // 
    //     - SystemDiskReadOps: the read IOPS of the system cloud disk (operations/s).
    // 
    //     - SystemDiskWriteOps: the write IOPS of the system cloud disk (operations/s).
    // 
    //     - CpuUtilizationAgent: the CPU utilization monitored by the agent (%).
    // 
    //     - GpuUtilizationAgent: the GPU utilization monitored by the agent (%).
    // 
    //     - GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory monitored by the agent (%).
    // 
    //     - GpuMemoryUtilizationAgent: the GPU memory utilization monitored by the agent (%).
    // 
    //     - MemoryUtilization: the memory utilization monitored by the agent (%).
    // 
    //     - LoadAverage: the average system load monitored by the agent.
    // 
    //     - TcpConnection: the total number of TCP connections monitored by the agent.
    //     
    //     - TcpConnection: the number of established TCP connections monitored by the agent.
    // 
    //     - PackagesNetOut: the number of packets sent by the internal NIC per second monitored by the agent (packets/s).
    // 
    //     - PackagesNetIn: the number of packets received by the internal NIC per second monitored by the agent (packets/s).
    //    
    //     - PackagesNetOut: the number of packets sent by the public NIC per second monitored by the agent (packets/s).
    // 
    //     - PackagesNetIn: the number of packets received by the public NIC per second monitored by the agent (packets/s).
    // 
    //     - EciPodCpuUtilization: the CPU utilization (%).
    // 
    //     - EciPodMemoryUtilization: the memory utilization (%).
    // 
    //     - LoadBalancerRealServerAverageQps: the average QPS per backend server in an ALB server group (queries/s).
    // 
    // For more information, see [System monitoring event-triggered tasks](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The type of the metric. Valid values:
    // - system: uses system metrics of CloudMonitor.
    // - custom: uses custom metrics reported to CloudMonitor.
    shared_ptr<string> metricType_ {};
    // The name of the event-triggered task.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The epoch for aggregating monitoring metric data. Unit: seconds. Valid values:
    // 
    // - 15
    // - 60
    // - 120
    // - 300
    // - 900
    // 
    // > Only scaling groups of the ECS instance type support a 15-second statistical period.
    // 
    // Default value: 300.
    shared_ptr<int32_t> period_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group associated with the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The method for aggregating metric data. Valid values:
    // 
    // - Average: the average value.
    // - Minimum: the minimum value.
    // - Maximum: the maximum value.
    // 
    // Default value: Average.
    shared_ptr<string> statistics_ {};
    // The threshold of the monitoring metrics. When the monitoring threshold expression is met for a specified number of times, it triggers the execution of a scaling rule.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
