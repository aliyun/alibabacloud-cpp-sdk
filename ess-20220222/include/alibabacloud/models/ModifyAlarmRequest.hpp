// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAlarmRequestDimensions.hpp>
#include <alibabacloud/models/ModifyAlarmRequestExpressions.hpp>
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
    virtual bool empty() const override { return this->alarmActions_ == nullptr
        && return this->alarmTaskId_ == nullptr && return this->comparisonOperator_ == nullptr && return this->description_ == nullptr && return this->dimensions_ == nullptr && return this->effective_ == nullptr
        && return this->evaluationCount_ == nullptr && return this->expressions_ == nullptr && return this->expressionsLogicOperator_ == nullptr && return this->groupId_ == nullptr && return this->metricName_ == nullptr
        && return this->metricType_ == nullptr && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr; };
    // alarmActions Field Functions 
    bool hasAlarmActions() const { return this->alarmActions_ != nullptr;};
    void deleteAlarmActions() { this->alarmActions_ = nullptr;};
    inline const vector<string> & alarmActions() const { DARABONBA_PTR_GET_CONST(alarmActions_, vector<string>) };
    inline vector<string> alarmActions() { DARABONBA_PTR_GET(alarmActions_, vector<string>) };
    inline ModifyAlarmRequest& setAlarmActions(const vector<string> & alarmActions) { DARABONBA_PTR_SET_VALUE(alarmActions_, alarmActions) };
    inline ModifyAlarmRequest& setAlarmActions(vector<string> && alarmActions) { DARABONBA_PTR_SET_RVALUE(alarmActions_, alarmActions) };


    // alarmTaskId Field Functions 
    bool hasAlarmTaskId() const { return this->alarmTaskId_ != nullptr;};
    void deleteAlarmTaskId() { this->alarmTaskId_ = nullptr;};
    inline string alarmTaskId() const { DARABONBA_PTR_GET_DEFAULT(alarmTaskId_, "") };
    inline ModifyAlarmRequest& setAlarmTaskId(string alarmTaskId) { DARABONBA_PTR_SET_VALUE(alarmTaskId_, alarmTaskId) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline ModifyAlarmRequest& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAlarmRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ModifyAlarmRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ModifyAlarmRequestDimensions>) };
    inline vector<ModifyAlarmRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<ModifyAlarmRequestDimensions>) };
    inline ModifyAlarmRequest& setDimensions(const vector<ModifyAlarmRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ModifyAlarmRequest& setDimensions(vector<ModifyAlarmRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string effective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline ModifyAlarmRequest& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline ModifyAlarmRequest& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<ModifyAlarmRequestExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<ModifyAlarmRequestExpressions>) };
    inline vector<ModifyAlarmRequestExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<ModifyAlarmRequestExpressions>) };
    inline ModifyAlarmRequest& setExpressions(const vector<ModifyAlarmRequestExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline ModifyAlarmRequest& setExpressions(vector<ModifyAlarmRequestExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // expressionsLogicOperator Field Functions 
    bool hasExpressionsLogicOperator() const { return this->expressionsLogicOperator_ != nullptr;};
    void deleteExpressionsLogicOperator() { this->expressionsLogicOperator_ = nullptr;};
    inline string expressionsLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(expressionsLogicOperator_, "") };
    inline ModifyAlarmRequest& setExpressionsLogicOperator(string expressionsLogicOperator) { DARABONBA_PTR_SET_VALUE(expressionsLogicOperator_, expressionsLogicOperator) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ModifyAlarmRequest& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyAlarmRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ModifyAlarmRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAlarmRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAlarmRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyAlarmRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAlarmRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAlarmRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline ModifyAlarmRequest& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ModifyAlarmRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The list of unique identifiers of the scaling rules that are associated with the event-triggered task.
    std::shared_ptr<vector<string>> alarmActions_ = nullptr;
    // The ID of the event-triggered task.
    // 
    // This parameter is required.
    std::shared_ptr<string> alarmTaskId_ = nullptr;
    // The operator that is used to compare the metric value and the threshold. Valid values:
    // 
    // *   If the metric value is greater than or equal to the threshold, set the value to `>=`.
    // *   If the metric value is less than or equal to the threshold, set the value to `<=`.
    // *   If the metric value is greater than the threshold, set the value to `>`.
    // *   If the metric value is less than the threshold, set the value to `<`.
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The description of the event-triggered task.
    std::shared_ptr<string> description_ = nullptr;
    // Details of the dimensions.
    std::shared_ptr<vector<ModifyAlarmRequestDimensions>> dimensions_ = nullptr;
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
    std::shared_ptr<string> effective_ = nullptr;
    // The number of times that the threshold must be reached before a scaling rule can be executed. For example, if you set this parameter to 3, the average CPU utilization must reach or exceed 80% three times in a row before a scaling rule is triggered.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // The expressions that are specified in the multi-metric alert rule.
    std::shared_ptr<vector<ModifyAlarmRequestExpressions>> expressions_ = nullptr;
    // The relationship between the trigger conditions in the multi-metric alert rule. Valid values:
    // 
    // *   `&&`: An alert is triggered only if all metrics in the multi-metric alert rule meet the trigger conditions. In this case, an alert is triggered only if the results of all trigger conditions that are specified in the multi-metric alert rule are `true`.
    // *   `||`: An alert is triggered if one of the metrics in the multi-metric alert rule meets the trigger condition.
    // 
    // Default value: `&&`.
    std::shared_ptr<string> expressionsLogicOperator_ = nullptr;
    // The ID of the application group to which the custom metric belongs. If you set the MetricType parameter to custom, you must specify this parameter.
    std::shared_ptr<int32_t> groupId_ = nullptr;
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
    std::shared_ptr<string> metricName_ = nullptr;
    // The metric type. Valid values:
    // 
    // *   system: a system metric of CloudMonitor
    // *   custom: a custom metric that is reported to CloudMonitor.
    std::shared_ptr<string> metricType_ = nullptr;
    // The name of the event-triggered task.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The period of time during which statistics about the metric is collected. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // > If your scaling group is of the ECS type and uses CloudMonitor metrics, you can set the Period parameter to 15. In other cases, you can set the Period parameter to 60, 120, 300, or 900. In most cases, the name of a CloudMonitor metric contains Agent.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The region ID of the event-triggered task.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The method that is used to aggregate statistics for the metric. Valid values:
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
