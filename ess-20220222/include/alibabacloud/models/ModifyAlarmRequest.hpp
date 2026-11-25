// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALARMREQUEST_HPP_
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
  class ModifyAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_TO_JSON(AlarmTaskId, alarmTaskId_);
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
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmActions, alarmActions_);
      DARABONBA_PTR_FROM_JSON(AlarmTaskId, alarmTaskId_);
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
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ModifyAlarmRequest() = default ;
    ModifyAlarmRequest(const ModifyAlarmRequest &) = default ;
    ModifyAlarmRequest(ModifyAlarmRequest &&) = default ;
    ModifyAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAlarmRequest() = default ;
    ModifyAlarmRequest& operator=(const ModifyAlarmRequest &) = default ;
    ModifyAlarmRequest& operator=(ModifyAlarmRequest &&) = default ;
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
      // The comparison operator between the statistical value and the threshold of the metric. The comparison operator indicates the relationship in which the statistical value and the threshold can satisfy the condition. Valid values:
      // 
      // - The statistical value is greater than or equal to the threshold. Value: `>=`.
      // - The statistical value is less than or equal to the threshold. Value: `<=`.
      // - The statistical value is greater than the threshold. Value: `>`.
      // - The statistical value is less than the threshold. Value: `<`.
      // 
      // Default value: >=.
      shared_ptr<string> comparisonOperator_ {};
      // The name of the monitoring metric in the multi-metric event-triggered node. Valid values vary based on the monitoring type of the event-triggered task: 
      // 
      // - If the event-triggered task is of the custom monitoring type (MetricType=custom), valid values are your custom monitoring metrics.
      // 
      // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values: 
      // 
      //     - CpuUtilization: (ECS) CPU utilization (%).
      // 
      //     - IntranetTx: (ECS) outbound traffic over the internal network (KByte/min).
      // 
      //     - IntranetRx: (ECS) inbound traffic over the internal network (KByte/min).
      // 
      //     - VpcInternetTx: (ECS) outbound traffic over the Internet (KByte/min).
      // 
      //     - VpcInternetRx: (ECS) inbound traffic over the Internet (KByte/min).
      // 
      //     - SystemDiskReadBps: (ECS) system cloud disk read BPS (Byte/s).
      // 
      //     - SystemDiskWriteBps: (ECS) system cloud disk write BPS (Byte/s).
      // 
      //     - SystemDiskReadOps: (ECS) system cloud disk read IOPS (count/s).
      // 
      //     - SystemDiskWriteOps: (ECS) system cloud disk write IOPS (count/s).
      // 
      //     - CpuUtilizationAgent: (Agent) CPU utilization (%).
      // 
      //     - GpuUtilizationAgent: (Agent) GPU utilization (%).
      // 
      //     - GpuMemoryFreeUtilizationAgent: (Agent) GPU memory idle rate (%).
      // 
      //     - GpuMemoryUtilizationAgent: (Agent) GPU memory utilization (%).
      // 
      //     - MemoryUtilization: (Agent) memory utilization (%).
      // 
      //     - LoadAverage: (Agent) average system load.
      // 
      //     - TcpConnection: (Agent) total number of TCP connections.
      // 
      //     - TcpConnection: (Agent) number of established TCP connections.
      // 
      //     - PackagesNetOut: (Agent) number of packets sent by the network interface controller (NIC).
      // 
      //     - PackagesNetIn: (Agent) number of packets received by the network interface controller (NIC).
      // 
      //     - EciPodCpuUtilization: CPU utilization (%).
      // 
      //     - EciPodMemoryUtilization: memory utilization (%).
      // 
      // For more information, see [Event-triggered tasks for system monitoring](https://help.aliyun.com/document_detail/74854.html).
      shared_ptr<string> metricName_ {};
      // The statistical period for the metric data in the multi-metric event-triggered task, in seconds. Valid values:
      // 
      // - 15.
      // - 60.
      // - 120.
      // - 300.
      // - 900.
      // 
      // > A statistical period of 15 seconds is applicable only to metrics collected by the CloudMonitor agent (metrics that start with Agent) when monitoring ECS-type scaling groups. For all other metrics, the statistical period can be set to 60, 120, 300, or 900 seconds.
      // 
      // Default value: 300.
      shared_ptr<int32_t> period_ {};
      // The method used to aggregate the metric data in the multi-metric event-triggered task. Valid values:
      // 
      // - Average: average value.
      // - Minimum: minimum value.
      // - Maximum: maximum value.
      shared_ptr<string> statistics_ {};
      // The threshold of the monitoring metrics in a multi-metric event-triggered task. The scaling rule is executed when the threshold expression is met the specified number of times.
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
      // The key of the dimension information associated with the metric. Valid values vary based on the monitoring type of the event-triggered node:
      // 
      // - If the event-triggered task is of the custom monitoring type (MetricType=custom), valid values are not restricted. You can specify custom values.
      // 
      // 
      // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values:
      // 
      //     - user_id: your account ID.
      //     - scaling_group: the scaling group to be monitored.
      //     - device: the type of the network interface controller (NIC) device.
      //     - state: the state of the TCP connection.
      //     - rulePool: the server group specified for the ALB QPS monitoring metrics.
      shared_ptr<string> dimensionKey_ {};
      // The value of the dimension information associated with the metric. Valid values are determined by Dimension.N.DimensionKey:
      // 
      // - If Dimension.N.DimensionKey is set to a custom value, which means the event-triggered task is of the custom monitoring type (MetricType=custom), valid values are not restricted. You can specify custom values.
      // 
      // - If Dimension.N.DimensionKey is set to a system-specified value, which means the event-triggered task is of the system monitoring type (MetricType=system), valid values:
      // 
      //     - user_id: automatically populated by the system.
      // 
      //     - scaling_group: automatically populated by the system.
      // 
      //     - device:
      // 
      //         - eth0: for classic network instances, eth0 represents the internal NIC. For VPC-connected instances, only the eth0 NIC exists.
      //         - eth1: for classic network instances, eth1 represents the public NIC.
      // 
      //     - state:
      // 
      //         - TCP_TOTAL: the total number of TCP connections.
      //         - ESTABLISHED: the number of established TCP connections.
      shared_ptr<string> dimensionValue_ {};
    };

    virtual bool empty() const override { return this->alarmActions_ == nullptr
        && this->alarmTaskId_ == nullptr && this->comparisonOperator_ == nullptr && this->description_ == nullptr && this->dimensions_ == nullptr && this->effective_ == nullptr
        && this->evaluationCount_ == nullptr && this->expressions_ == nullptr && this->expressionsLogicOperator_ == nullptr && this->groupId_ == nullptr && this->metricName_ == nullptr
        && this->metricType_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
    // alarmActions Field Functions 
    bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
    void deleteAlarmActions() { this->alarmActions_ = nullptr;};
    inline const vector<string> & getAlarmActions() const { DARABONBA_PTR_GET_CONST(alarmActions_, vector<string>) };
    inline vector<string> getAlarmActions() { DARABONBA_PTR_GET(alarmActions_, vector<string>) };
    inline ModifyAlarmRequest& setAlarmActions(const vector<string> & alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };
    inline ModifyAlarmRequest& setAlarmActions(vector<string> && alarmActions) { DARABONBA_PTR_SET_RVALUE(alarmActions_, alarmActions) };


    // alarmTaskId Field Functions 
    bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
    void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
    inline string getAlarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
    inline ModifyAlarmRequest& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline ModifyAlarmRequest& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAlarmRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ModifyAlarmRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ModifyAlarmRequest::Dimensions>) };
    inline vector<ModifyAlarmRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<ModifyAlarmRequest::Dimensions>) };
    inline ModifyAlarmRequest& setDimensions(const vector<ModifyAlarmRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ModifyAlarmRequest& setDimensions(vector<ModifyAlarmRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline ModifyAlarmRequest& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t getEvaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline ModifyAlarmRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<ModifyAlarmRequest::Expressions> & getExpressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<ModifyAlarmRequest::Expressions>) };
    inline vector<ModifyAlarmRequest::Expressions> getExpressions() { DARABONBA_PTR_GET(expressions_, vector<ModifyAlarmRequest::Expressions>) };
    inline ModifyAlarmRequest& setExpressions(const vector<ModifyAlarmRequest::Expressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline ModifyAlarmRequest& setExpressions(vector<ModifyAlarmRequest::Expressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // expressionsLogicOperator Field Functions 
    bool hasExpressionsLogicOperator() const { return this->expressionsLogicOperator_ != nullptr;};
    void deleteExpressionsLogicOperator() { this->expressionsLogicOperator_ = nullptr;};
    inline string getExpressionsLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(expressionsLogicOperator_, "") };
    inline ModifyAlarmRequest& setExpressionsLogicOperator(string expressionsLogicOperator) { DARABONBA_PTR_SET_VALUE(expressionsLogicOperator_, expressionsLogicOperator) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ModifyAlarmRequest& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyAlarmRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ModifyAlarmRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAlarmRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAlarmRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyAlarmRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAlarmRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAlarmRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ModifyAlarmRequest& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ModifyAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The list of unique identifiers of the scaling rules associated with the event-triggered task.
    shared_ptr<vector<string>> alarmActions_ {};
    // The ID of the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> alarmTaskId_ {};
    // The comparison operator between the statistical value and the threshold of the metric. The comparison operator indicates the relationship in which the statistical value and the threshold can satisfy the condition. Valid values:
    // 
    // - The statistical value is greater than or equal to the threshold. Value: `>=`.
    // - The statistical value is less than or equal to the threshold. Value: `<=`.
    // - The statistical value is greater than the threshold. Value: `>`.
    // - The statistical value is less than the threshold. Value: `<`.
    shared_ptr<string> comparisonOperator_ {};
    // The description of the event-triggered task.
    shared_ptr<string> description_ {};
    // The dimension information associated with the metric.
    shared_ptr<vector<ModifyAlarmRequest::Dimensions>> dimensions_ {};
    // Specifies the effective period of the event-triggered task.
    // 
    // This parameter follows cron expressions. The default format is `X X X X X ?`, where:
    // - X: a placeholder for a field, which sequentially represents seconds, minutes, hours, day, and month. X can be a specific value or a special character with logical meaning. For more information about the valid values of X, see [Cron expression](https://help.aliyun.com/document_detail/25907.html).
    // 
    // - ?: specifies no value.
    // 
    // > The value of this parameter is **in the UTC+8 time zone by default**. You can add time zone information `TZ=+yy` before the cron expression to specify a time zone, where y represents the numeric value of the time zone. For example, `TZ=+00 * * 1-2 * * ?` indicates that the event-triggered task takes effect between 01:00 and 02:59 every day in the UTC+0 time zone.
    // 
    // Examples and descriptions:
    // 
    // -  `* * * * * ?  `: takes effect at all times.
    // 
    // -  `* * 17-18 * * ? `: takes effect between 17:00 and 18:59 every day in the UTC+8 time zone.
    // 
    // - `TZ=+00 * * 1-2 * * ?`: takes effect between 01:00 and 02:59 every day in the UTC+0 time zone.
    shared_ptr<string> effective_ {};
    // The number of times that the threshold expression must be met before the scaling rule is triggered. For example, the average CPU utilization must be greater than or equal to 80% in three consecutive statistical results.
    shared_ptr<int32_t> evaluationCount_ {};
    // The monitoring metrics of the multi-metric event-triggered task.
    shared_ptr<vector<ModifyAlarmRequest::Expressions>> expressions_ {};
    // The relationship between multiple monitoring metrics conditions. Valid values:
    // 
    // - `&&`: An alert is triggered only when all monitoring metrics meet the alert conditions. An alert is triggered only when all expressions in the multi-metric event-triggered task evaluate to `true`.
    // - `||`: An alert is triggered when any monitoring metric meets the alert condition.
    // 
    // Default value: `&&`.
    shared_ptr<string> expressionsLogicOperator_ {};
    // The ID of the CloudMonitor application group to which the custom metric belongs. This parameter is required only when MetricType is set to custom.
    shared_ptr<int32_t> groupId_ {};
    // The name of the metric. Valid values vary based on the monitoring type of the event-triggered task: 
    // 
    // - If the event-triggered task is of the custom monitoring type (MetricType=custom), valid values are your custom metrics.
    // 
    // - If the event-triggered task is of the system monitoring type (MetricType=system), valid values: 
    // 
    //     - CpuUtilization: (ECS) CPU utilization (%).
    // 
    //     - IntranetTx: (ECS) outbound traffic over the internal network (KByte/min).
    // 
    //     - IntranetRx: (ECS) inbound traffic over the internal network (KByte/min).
    // 
    //     - VpcInternetTx: (ECS) outbound traffic over the Internet (KByte/min).
    // 
    //     - VpcInternetRx: (ECS) inbound traffic over the Internet (KByte/min).
    // 
    //     - SystemDiskReadBps: (ECS) system cloud disk read BPS (Byte/s).
    // 
    //     - SystemDiskWriteBps: (ECS) system cloud disk write BPS (Byte/s).
    // 
    //     - SystemDiskReadOps: (ECS) system cloud disk read IOPS (count/s).
    // 
    //     - SystemDiskWriteOps: (ECS) system cloud disk write IOPS (count/s).
    // 
    //     - CpuUtilizationAgent: (Agent) CPU utilization (%).
    // 
    //     - GpuMemoryFreeUtilizationAgent: (Agent) GPU memory idle rate (%).
    // 
    //     - GpuMemoryUtilizationAgent: (Agent) GPU memory utilization (%).
    // 
    //     - MemoryUtilization: (Agent) memory utilization (%).
    // 
    //     - LoadAverage: (Agent) average system load.
    // 
    //     - TcpConnection: (Agent) total number of TCP connections.
    // 
    //     - TcpConnection: (Agent) number of established TCP connections.
    // 
    //     - PackagesNetOut: (Agent) number of packets sent by the NIC.
    // 
    //     - PackagesNetIn: (Agent) number of packets received by the NIC.
    // 
    //     - EciPodCpuUtilization: CPU utilization (%).
    // 
    //     - EciPodMemoryUtilization: memory utilization (%).
    // 
    // For more information, see [Event-triggered tasks for system monitoring](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The type of the metric. Valid values:
    // - system: uses CloudMonitor system metrics.
    // - custom: uses custom metrics reported to CloudMonitor.
    shared_ptr<string> metricType_ {};
    // The name of the event-triggered task.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The statistical period for the metric data, in seconds. Valid values:
    // 
    // - 15.
    // - 60.
    // - 120.
    // - 300.
    // - 900.
    // 
    // > A statistical period of 15 seconds is applicable only to metrics collected by the CloudMonitor agent (metrics that start with Agent) when monitoring ECS-type scaling groups. For all other metrics, the statistical period can be set to 60, 120, 300, or 900 seconds.
    shared_ptr<int32_t> period_ {};
    // The region ID of the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The method used to aggregate the metric data. Valid values:
    // 
    // - Average: average value.
    // - Minimum: minimum value.
    // - Maximum: maximum value.
    shared_ptr<string> statistics_ {};
    // The threshold of the monitoring metrics in a multi-metric event-triggered task. The scaling rule is executed when the threshold expression is met the specified number of times.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
