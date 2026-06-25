// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(ScalingRuleEnable, scalingRuleEnable_);
      DARABONBA_PTR_TO_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleTimer, scalingRuleTimer_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleEnable, scalingRuleEnable_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleTimer, scalingRuleTimer_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
    };
    CreateApplicationScalingRuleRequest() = default ;
    CreateApplicationScalingRuleRequest(const CreateApplicationScalingRuleRequest &) = default ;
    CreateApplicationScalingRuleRequest(CreateApplicationScalingRuleRequest &&) = default ;
    CreateApplicationScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleRequest() = default ;
    CreateApplicationScalingRuleRequest& operator=(const CreateApplicationScalingRuleRequest &) = default ;
    CreateApplicationScalingRuleRequest& operator=(CreateApplicationScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->enableIdle_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr && this->scalingRuleEnable_ == nullptr && this->scalingRuleMetric_ == nullptr
        && this->scalingRuleName_ == nullptr && this->scalingRuleTimer_ == nullptr && this->scalingRuleType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline CreateApplicationScalingRuleRequest& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline CreateApplicationScalingRuleRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline CreateApplicationScalingRuleRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // scalingRuleEnable Field Functions 
    bool hasScalingRuleEnable() const { return this->scalingRuleEnable_ != nullptr;};
    void deleteScalingRuleEnable() { this->scalingRuleEnable_ = nullptr;};
    inline bool getScalingRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleEnable_, false) };
    inline CreateApplicationScalingRuleRequest& setScalingRuleEnable(bool scalingRuleEnable) { DARABONBA_PTR_SET_VALUE(scalingRuleEnable_, scalingRuleEnable) };


    // scalingRuleMetric Field Functions 
    bool hasScalingRuleMetric() const { return this->scalingRuleMetric_ != nullptr;};
    void deleteScalingRuleMetric() { this->scalingRuleMetric_ = nullptr;};
    inline string getScalingRuleMetric() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleMetric_, "") };
    inline CreateApplicationScalingRuleRequest& setScalingRuleMetric(string scalingRuleMetric) { DARABONBA_PTR_SET_VALUE(scalingRuleMetric_, scalingRuleMetric) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline CreateApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleTimer Field Functions 
    bool hasScalingRuleTimer() const { return this->scalingRuleTimer_ != nullptr;};
    void deleteScalingRuleTimer() { this->scalingRuleTimer_ = nullptr;};
    inline string getScalingRuleTimer() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleTimer_, "") };
    inline CreateApplicationScalingRuleRequest& setScalingRuleTimer(string scalingRuleTimer) { DARABONBA_PTR_SET_VALUE(scalingRuleTimer_, scalingRuleTimer) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string getScalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline CreateApplicationScalingRuleRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to enable idle mode for the application.
    shared_ptr<bool> enableIdle_ {};
    // The minimum number of ready instances, specified as a percentage of the total number of instances. Valid values:
    // 
    // - **-1**: Indicates that a percentage is not used. In this case, the value of `MinReadyInstances` is used.
    // 
    // - **0\\~100**: A percentage. The result is rounded up. For example, if you set this parameter to 50 (%) and the application has 5 instances, the minimum number of ready instances is 3.
    // 
    // > If you specify both `MinReadyInstances` and a `MinReadyInstanceRatio` other than `-1`, `MinReadyInstanceRatio` takes precedence. For example, if `MinReadyInstances` is set to `5` and `MinReadyInstanceRatio` is set to `50`, the system uses `50` (%) to calculate the minimum number of ready instances.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of ready instances. Valid values:
    // 
    // - If you set this parameter to `0`, the application is interrupted during an update.
    // 
    // - If you set this parameter to `-1`, the system sets the value to 25% of the current number of instances, rounded up. For example, if the application has 5 instances, the minimum number of ready instances is 2 (5 × 25% = 1.25, rounded up to 2).
    // 
    // > To ensure service continuity during a rolling deployment, we recommend setting the minimum number of ready instances to 1 or more.
    shared_ptr<int32_t> minReadyInstances_ {};
    // Specifies whether to enable the auto scaling policy. Valid values:
    // 
    // - **true**: Enabled.
    // 
    // - **false**: Disabled.
    shared_ptr<bool> scalingRuleEnable_ {};
    // Configurations for the metric-based auto scaling policy. This parameter is required if `ScalingRuleType` is set to `metric` or `mix`.
    // 
    // The parameter is a JSON string that contains the following fields:
    // 
    // - **maxReplicas**: The maximum number of application instances.
    // 
    // - **minReplicas**: The minimum number of application instances.
    // 
    // - **metricType**: The metric that triggers the auto scaling policy. Valid values:
    // 
    //   - **CPU**: CPU utilization.
    // 
    //   - **MEMORY**: Memory utilization.
    // 
    //   - **QPS**: The average queries per second (QPS) per instance for a Java application over a 1-minute period.
    // 
    //   - **RT**: The average response time (RT) of all service interfaces for a Java application over a 1-minute period.
    // 
    //   - **tcpActiveConn**: The average number of active TCP connections per instance over a 30-second period.
    // 
    //   - **SLB_QPS**: The average QPS per instance for a public-facing SLB instance over a 15-second period.
    // 
    //   - **SLB_RT**: The average RT of a public-facing SLB instance over a 15-second period.
    // 
    //   - **INTRANET_SLB_QPS**: The average QPS per instance for an internal-facing SLB instance over a 15-second period.
    // 
    //   - **INTRANET_SLB_RT**: The average RT of an internal-facing SLB instance over a 15-second period.
    // 
    // - **metricTargetAverageUtilization**: The target value for the metric specified by `metricType`. The unit of this value depends on `metricType`.
    // 
    //   - Target CPU utilization, in percentage.
    // 
    //   - Target memory utilization, in percentage.
    // 
    //   - Target QPS, in requests per second.
    // 
    //   - Target response time, in milliseconds.
    // 
    //   - Average number of active TCP connections.
    // 
    //   - Target public-facing SLB QPS, in requests per second.
    // 
    //   - Target public-facing SLB response time, in milliseconds.
    // 
    //   - Target internal-facing SLB QPS, in requests per second.
    // 
    //   - Target internal-facing SLB response time, in milliseconds.
    // 
    // - **slbId**: The SLB instance ID.
    // 
    // - **slbProject**: The Log Service project.
    // 
    // - **slbLogstore**: The Log Service Logstore.
    // 
    // - **vport**: The SLB listener port. The HTTP and HTTPS protocols are supported.
    // 
    // - **scaleUpRules**: The rules to scale out the application.
    // 
    // - **scaleDownRules**: The rules to scale in the application.
    // 
    // - **step**: The step size for scaling out or scaling in. This is the maximum number of instances that can be added or removed in a single scaling activity.
    // 
    // - **disabled**: Specifies whether to prevent the application from scaling in. If set to `true`, the number of application instances is never reduced. This can prevent business risks caused by scaling in during peak hours.
    // 
    //   - **true**: Scale-in is disabled.
    // 
    //   - **false**: Scale-in is enabled. This is the default value.
    // 
    // - **stabilizationWindowSeconds**: The cooldown period for scaling out or scaling in, in seconds. Valid values: 0 to 3600. The default value is 0.
    // 
    // > You can configure one or more metrics. If you configure multiple metrics, the application scales out when any of the metrics meets or exceeds its target value, up to the specified maximum number of instances. The application scales in only when all metrics are below their target values, down to the specified minimum number of instances.
    shared_ptr<string> scalingRuleMetric_ {};
    // The name of the auto scaling policy. The name must be unique within an application, start with a lowercase letter, and contain only lowercase letters, digits, and hyphens (-). The name can be up to 32 characters long.
    // 
    // > The policy name cannot be changed after creation.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleName_ {};
    // Configurations for the scheduled auto scaling policy. This parameter is required if `ScalingRuleType` is set to `timing` or if you use an SDK.
    // 
    // The parameter is a JSON string that contains the following fields:
    // 
    // - **beginDate** and **endDate**: The start and end dates of the policy\\"s effective period.
    // 
    //   - If both fields are set to `null` (default), the policy is effective indefinitely.
    // 
    //   - If you specify a date range, for example, `beginDate` is `2021-03-25` and `endDate` is `2021-04-25`, the policy is effective for one month.
    // 
    // - **period**: The recurrence rule for the scheduled auto scaling policy.
    // 
    //   - **\\* \\* \\***: The policy is executed at a specified time every day.
    // 
    //   - **\\* \\* Fri,Mon**: The policy is executed at a specified time on specific days of the week. You can select multiple days. The time is in the GMT+8 time zone. Valid values:
    // 
    //     - **Sun**: Sunday
    // 
    //     - **Mon**: Monday
    // 
    //     - **Tue**: Tuesday
    // 
    //     - **Wed**: Wednesday
    // 
    //     - **Thu**: Thursday
    // 
    //     - **Fri**: Friday
    // 
    //     - **Sat**: Saturday
    // 
    //   - **1,2,3,28,31 \\* \\***: The policy is executed at a specified time on specific days of a month. You can select multiple days. The value can be from 1 to 31. If a month does not have the specified day, for example, the 31st, the policy is not executed on that day for that month.
    // 
    // - **schedules**: The trigger times and the corresponding target number of instances. You can specify a maximum of 20 schedules. The parameter includes the following fields:
    // 
    //   - **atTime**: The trigger time in `HH:mm` format. For example, `08:00`.
    // 
    //   - **targetReplicas**: The target number of application instances. Valid values: 1 to 50.
    // 
    //     > During a rolling deployment, we recommend that you set the minimum number of ready instances to 1 or more to prevent service interruptions. If you set the minimum number of ready instances to `0`, your application will be interrupted during an update.
    shared_ptr<string> scalingRuleTimer_ {};
    // The type of the auto scaling policy. Valid values:
    // 
    // - **timing**: scheduled auto scaling.
    // 
    // - **metric**: metric-based auto scaling.
    // 
    // - **mix**: mixed auto scaling.
    // 
    // > * If you set this parameter to `timing`, the `ScalingRuleTimer` parameter is required.
    // >
    // > * If you set this parameter to `metric`, the `ScalingRuleMetric` parameter is required.
    // >
    // > * If you set this parameter to `mix`, the `ScalingRuleMetric` parameter is required. You can also configure the `ScalingRuleTimer` parameter as needed.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
