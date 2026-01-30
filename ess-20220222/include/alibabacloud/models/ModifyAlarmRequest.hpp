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
      // The operator that is used to compare the metric value and the threshold. Valid values:
      // 
      // *   If the metric value is greater than or equal to the threshold, set the value to `>=`.
      // *   If the metric value is less than or equal to the threshold, set the value to `<=`.
      // *   If the metric value is greater than the threshold, set the value to `>`.
      // *   If the metric value is less than the threshold, set the value to `<`.
      // 
      // Default value: >=.
      shared_ptr<string> comparisonOperator_ {};
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
      shared_ptr<string> metricName_ {};
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
      shared_ptr<int32_t> period_ {};
      // The method that is used to aggregate statistics about the metrics that are specified in the multi-metric alert rule. Valid values:
      // 
      // *   Average
      // *   Minimum
      // *   Maximum
      shared_ptr<string> statistics_ {};
      // The thresholds of the metric values in the multi-metric alert rule. If the thresholds are reached the specified number of times within the specified period, a scaling rule is executed.
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
      // The key of dimension N that you want to associate with the metric. The valid values of Dimension.N.DimensionKey vary based on the value of MetricType.
      // 
      // *   If you set MetricType to custom, you can specify this parameter based on your business requirements.
      // 
      // *   If you set MetricType to system, this parameter has the following valid values:
      // 
      //     *   user_id: the ID of your Alibaba Cloud account.
      //     *   scaling_group: the scaling group that is monitored by the event-triggered task.
      //     *   device: the NIC type.
      //     *   state: the status of the TCP connection.
      //     *   rulePool: the specified server group for the ALB qps metric.
      shared_ptr<string> dimensionKey_ {};
      // The dimension value of the metric. The valid values of this parameter vary based on the value of Dimensions.DimensionKey.
      // 
      // *   If you set MetricType to custom, you can specify this parameter based on your business requirements.
      // 
      // *   If you set MetricType to system, Dimension.N.DimensionValue has the following valid values:
      // 
      //     *   user_id: The system specifies the value.
      // 
      //     *   scaling_group: The system specifies the value.
      // 
      //     *   device:
      // 
      //         *   eth0: For classic network instances, eth0 indicates the internal network network interface controller. Only one eth0 NIC exists on each instance that resides in VPCs.
      //         *   eth1: For classic network instances, eth1 represents the Internet network interface controller.
      // 
      //     *   state:
      // 
      //         *   TCP_TOTAL specifies the total number of TCP connections.
      //         *   ESTABLISHED specifies the number of TCP connections that are established.
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
    // The list of unique identifiers of the scaling rules that are associated with the event-triggered task.
    shared_ptr<vector<string>> alarmActions_ {};
    // The ID of the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> alarmTaskId_ {};
    // The operator that is used to compare the metric value and the threshold. Valid values:
    // 
    // *   If the metric value is greater than or equal to the threshold, set the value to `>=`.
    // *   If the metric value is less than or equal to the threshold, set the value to `<=`.
    // *   If the metric value is greater than the threshold, set the value to `>`.
    // *   If the metric value is less than the threshold, set the value to `<`.
    shared_ptr<string> comparisonOperator_ {};
    // The description of the event-triggered task.
    shared_ptr<string> description_ {};
    // The metric dimensions.
    shared_ptr<vector<ModifyAlarmRequest::Dimensions>> dimensions_ {};
    // The effective period of the event-triggered task.
    // 
    // This parameter follows the cron expression format. The default format is `X X X X X ?`, in which:
    // 
    // *   X: a placeholder for a field, which represents seconds, minutes, hours, days, and months in sequence. X can be a definite value or a special character that has logical meaning. For information about the valid values of X, see [Cron expression](https://help.aliyun.com/document_detail/25907.html).
    // *   ?: No value is specified.
    // 
    // > By default, the value of this parameter is specified in **UTC+8**. You can specify the time zone in the `TZ=+yy` format before a cron expression. y indicates the time zone. For example, `TZ=+00 * * 1-2 * * ?` specifies that the event-triggered task is in effect between 01:00 and 02:59 (UTC+0) every day.
    // 
    // Examples:
    // 
    // *   ` * * * * * ?  `: The event-triggered task is in effect all the time.
    // *   ` * * 17-18 * * ?  `: The event-triggered task is in effect between 17:00 and 18:59 (UTC+8) every day.
    // *   `TZ=+00 * * 1-2 * * ?`: The event-triggered task is in effect between 01:00 and 02:59 (UTC+0) every day.
    shared_ptr<string> effective_ {};
    // The number of times that the threshold must be reached before a scaling rule can be executed. For example, if you set this parameter to 3, the average CPU utilization must reach or exceed 80% three times in a row before a scaling rule is triggered.
    shared_ptr<int32_t> evaluationCount_ {};
    // The expressions that are specified in the multi-metric alert rule.
    shared_ptr<vector<ModifyAlarmRequest::Expressions>> expressions_ {};
    // The relationship between the trigger conditions in the multi-metric alert rule. Valid values:
    // 
    // *   `&&`: An alert is triggered only if all metrics in the multi-metric alert rule meet the trigger conditions. In this case, an alert is triggered only if the results of all trigger conditions that are specified in the multi-metric alert rule are `true`.
    // *   `||`: An alert is triggered if one of the metrics in the multi-metric alert rule meets the trigger condition.
    // 
    // Default value: `&&`.
    shared_ptr<string> expressionsLogicOperator_ {};
    // The ID of the application group to which the custom metric belongs. If you set the MetricType parameter to custom, you must specify this parameter.
    shared_ptr<int32_t> groupId_ {};
    // The name of the metric. The valid values vary based on the metric type.
    // 
    // *   If you set the MetricType parameter to custom, the valid values are your custom metrics.
    // 
    // *   If you set the MetricType parameter to system, the MetricName parameter has the following valid values:
    // 
    //     *   CpuUtilization: the CPU utilization of an ECS instance. Unit: %.
    //     *   IntranetTx: the outbound traffic over the internal network from an ECS instance. Unit: KB/min.
    //     *   IntranetRx: the inbound traffic over the Internet to an ECS instance that resides in a virtual private cloud (VPC). Unit: KB/min.
    //     *   VpcInternetTx: the outbound traffic over the Internet from an ECS instance that resides in a VPC. Unit: KB/min.
    //     *   VpcInternetRx: the inbound traffic over the Internet to an ECS instance that resides in a VPC. Unit: KB/min.
    //     *   SystemDiskReadBps: the number of bytes read from the system disk used by an ECS instance per second.
    //     *   SystemDiskWriteBps: the number of bytes written to the system disk used by an ECS instance per second.
    //     *   SystemDiskReadOps: the number of read operations on the system disk used by an ECS instance per second.
    //     *   SystemDiskWriteOps: the number of write operations on the system disk used by an ECS instance per second.
    //     *   CpuUtilizationAgent: the CPU utilization of an agent. Unit: %.
    //     *   GpuMemoryFreeUtilizationAgent: the percentage of idle GPU memory of an agent.
    //     *   GpuMemoryUtilizationAgent: the GPU memory usage of an agent. Unit: %.
    //     *   MemoryUtilization: the memory usage of an agent. Unit: %.
    //     *   LoadAverage: the average system load of an agent.
    //     *   TcpConnection: the total number of TCP connections of an agent.
    //     *   TcpConnection: the number of established TCP connections of an agent.
    //     *   PackagesNetOut: the number of packets that are sent by the internal network interface controller (NIC) used by an agent.
    //     *   PackagesNetIn: the number of packets that are received by the internal NIC used by an agent.
    //     *   EciPodCpuUtilization: the CPU utilization of an elastic container instance. Unit: %.
    //     *   EciPodMemoryUtilization: the memory usage of an elastic container instance. Unit: %.
    // 
    // For more information, see [Event-triggered task for system monitoring](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The metric type. Valid Values:
    // 
    // *   system: a system metric of CloudMonitor.
    // *   custom: a custom metric that is reported to CloudMonitor.
    shared_ptr<string> metricType_ {};
    // The name of the event-triggered task.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The period of time during which statistics about the metric is collected. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // > If your scaling group is of the ECS type and uses CloudMonitor metrics, you can set the Period parameter to 15. In other cases, you can set the Period parameter to 60, 120, 300, or 900. In most cases, the name of a CloudMonitor metric contains Agent.
    shared_ptr<int32_t> period_ {};
    // The region ID of the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The method that is used to aggregate statistics for the metric. Valid values:
    // 
    // *   Average
    // *   Minimum
    // *   Maximum
    shared_ptr<string> statistics_ {};
    // The thresholds of the metric values in the multi-metric alert rule. If the thresholds are reached the specified number of times within the specified period, a scaling rule is executed.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
