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
      // The operator that you want to use to compare the metric value and the threshold in the multi-metric alert rule. Valid values:
      // 
      // *   If the metric value is greater than or equal to the threshold, set the value to >=.
      // *   If the metric value is less than or equal to the metric threshold, set the value to <=.
      // *   If the metric value is greater than the metric threshold, set the value to >.
      // *   If the metric value is less than the metric threshold, set the value to <.
      // 
      // Default value: >=.
      shared_ptr<string> comparisonOperator_ {};
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
      shared_ptr<string> metricName_ {};
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
      shared_ptr<int32_t> period_ {};
      // The method that you want to use to aggregate the metric data in the multi-metric alert rule. Valid values:
      // 
      // *   Average: the average value.
      // *   Minimum: the minimum value
      // *   Maximum: the maximum value
      // 
      // Default value: Average.
      shared_ptr<string> statistics_ {};
      // The threshold of the metric value in the multi-metric alert rule. If the threshold is reached the specified number of times within the statistical period, a scaling rule is executed.
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
      // The dimension key of the metric. The valid values vary based on the metric type.
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
      // *   If you set MetricType to system, this parameter has the following valid values:
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
      //         *   ESTABLISHED indicates the number of TCP connections that are established.
      // 
      //     *   rulePool: the ID of the ALB server group. Example: sgp-xxxxx.
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
    // The list of unique identifiers of the scaling rules that are associated with the event-triggered task.
    shared_ptr<vector<string>> alarmActions_ {};
    // The operator that you want to use to compare the metric value and the threshold. Valid Values:
    // 
    // *   If the metric value is greater than or equal to the threshold, set the value to >=.
    // *   If the metric value is less than or equal to the metric threshold, set the value to <=.
    // *   If the metric value is greater than the metric threshold, set the value to >.
    // *   If the metric value is less than the metric threshold, set the value to <.
    // 
    // Default value: >=.
    shared_ptr<string> comparisonOperator_ {};
    // The description of the event-triggered task.
    shared_ptr<string> description_ {};
    // The metric dimensions.
    shared_ptr<vector<CreateAlarmRequest::Dimensions>> dimensions_ {};
    // The effective period of the event-triggered task. By default, the event-triggered task is in effect all the time.
    // 
    // This parameter follows the cron expression format. The default format is `X X X X X ?`. In the format:
    // 
    // *   X: a placeholder for a field, which represents seconds, minutes, hours, days, and months in sequence. X can be a definite value or a special character that has logical meaning. For information about the valid values of X, see [Cron expression](https://help.aliyun.com/document_detail/25907.html).
    // *   ?: No value is specified.
    // 
    // > By default, this parameter value is specified in **UTC+8**. You can specify the time zone in the `TZ=+yy` format before a cron expression. y indicates the time zone. For example, `TZ=+00 * * 1-2 * * ?` specifies that the event-triggered task is in effect between 01:00 and 02:59 (UTC+0) every day.
    // 
    // Sample values:
    // 
    // *   ` * * * * * ?  `: The event-triggered task is in effect all the time.
    // *   ` * * 17-18 * * ?  `: The event-triggered task is in effect between 17:00 and 18:59 (UTC+8) every day.
    // *   `TZ=+00 * * 1-2 * * ?`: The event-triggered task is in effect between 01:00 and 02:59 (UTC+0) every day.
    shared_ptr<string> effective_ {};
    // The number of consecutive times that the threshold must be reached before a scaling rule is executed. For example, if you set this parameter to 3, the average CPU utilization must reach or exceed 80% three times in a row before the scaling rule is executed.
    // 
    // Default value: 3
    shared_ptr<int32_t> evaluationCount_ {};
    // The information about the multi-metric alert rules.
    shared_ptr<vector<CreateAlarmRequest::Expressions>> expressions_ {};
    // The relationship between the trigger conditions in the multi-metric alert rule. Valid values:
    // 
    // *   `&&`: An alert is triggered only if all metrics in the multi-metric alert rule meet the trigger conditions. In this case, an alert is triggered only if the results of all trigger conditions that are specified in the multi-metric alert rule are `true`.
    // *   `||`: An alert is triggered if one of the metrics in the multi-metric alert rule meets the trigger conditions.
    // 
    // Default value: `&&`.
    shared_ptr<string> expressionsLogicOperator_ {};
    // The ID of the application group to which the custom metric belongs. If you set the MetricType parameter to custom, you must specify this parameter.
    shared_ptr<int32_t> groupId_ {};
    // The metric name. The valid values of this parameter vary based on the metric type.
    // 
    // *   If you set MetricType to custom, the valid values are the metrics that you have.
    // 
    // *   If you set MetricType to system, this parameter has the following valid values:
    // 
    //     *   CpuUtilization: the CPU utilization. Unit: %.
    //     *   ConcurrentConnections: the number of concurrent connections.
    //     *   IntranetTx: the outbound traffic over an internal network. Unit: KB/min.
    //     *   IntranetRx: the inbound traffic over an internal network. Unit: KB/min.
    //     *   VpcInternetTx: the outbound traffic over a virtual private cloud (VPC). Unit: KB/min.
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
    //     *   PackagesNetOut: the number of packets sent by the internal network interface controller (NIC). Unit: counts/s.
    //     *   PackagesNetIn: the number of packets received by the internal NIC. Unit: counts/s.
    //     *   PackagesNetOut: the number of packets sent by the public NIC. Unit: counts/s.
    //     *   PackagesNetIn: the number of packets received by the public NIC. Unit: counts/s.
    //     *   EciPodCpuUtilization: the CPU utilization. Unit: %.
    //     *   EciPodMemoryUtilization: the memory usage. Unit: %.
    //     *   LoadBalancerRealServerAverageQps: the queries per second (QPS) of an instance.
    // 
    // For more information, see [Event-triggered tasks of the system monitoring type](https://help.aliyun.com/document_detail/74854.html).
    shared_ptr<string> metricName_ {};
    // The metric type. Valid Values:
    // 
    // *   system: a system metric of CloudMonitor.
    // *   custom: a custom metric that is reported to CloudMonitor.
    shared_ptr<string> metricType_ {};
    // The name of the event-triggered task.
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The statistical period of the metric data. Unit: seconds. Valid Values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // > You can set this parameter to 15 seconds only for scaling groups of the ECS type.
    // 
    // Default value: 300.
    shared_ptr<int32_t> period_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The scaling group ID of the event-triggered task.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The statistical method of the metric data. Valid Values:
    // 
    // *   Average: calculates the average value of the metric data.
    // *   Minimum: calculates the minimum value of the metric data.
    // *   Maximum: calculates the maximum value of the metric data.
    // 
    // Default value: Average.
    shared_ptr<string> statistics_ {};
    // The threshold of the metric value. If the threshold is reached the specified number of times within the specified period, a scaling rule is executed.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
