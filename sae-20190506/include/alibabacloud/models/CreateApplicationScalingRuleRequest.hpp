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
    // Specifies whether to enable the idle mode.
    shared_ptr<bool> enableIdle_ {};
    // The percentage of the minimum number of surviving instances. Valid values:
    // 
    // - **-1**: the initial value, which indicates that the percentage is not used.
    // - **0~100**: the percentage, rounded up. For example, if you set this parameter to 50 and the current number of instances is 5, the minimum number of surviving instances is 3.
    // 
    // > When both **MinReadyInstances** and **MinReadyInstanceRatio** are specified and the value of **MinReadyInstanceRatio** is not **-1**, the **MinReadyInstanceRatio** parameter prevails. For example, if **MinReadyInstances** is set to **5** and **MinReadyInstanceRatio** is set to **50**, the value **50** is used to calculate the minimum number of surviving instances.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of surviving instances. Valid values:
    // 
    // - If you set this parameter to **0**, services are interrupted during the application upgrade.
    // - If you set this parameter to **-1**, the system recommended value is used, which is 25% of the current number of instances. For example, if the current number of instances is 5, 5 × 25% = 1.25. After rounding up, the minimum number of surviving instances is 2.
    // 
    // > We recommend that you set the minimum number of surviving instances for each rolling deployment to a value greater than or equal to 1 to ensure service continuity.
    shared_ptr<int32_t> minReadyInstances_ {};
    // Specifies whether to enable the elastic scaling policy. Valid values:
    // 
    // - **true**: enabled.
    // - **false**: disabled.
    shared_ptr<bool> scalingRuleEnable_ {};
    // The configuration of the monitoring metric-based elastic policy. This parameter is required when you select the monitoring metric-based elastic policy settings.
    // 
    // Metric description:
    // 
    // - **maxReplicas**: the maximum number of instances for the application.
    // - **minReplicas**: the minimum number of instances for the application.
    // - **metricType**: the trigger condition for the monitoring metric. Valid values:
    //     - **CPU**: CPU utilization.
    //     - **MEMORY**: memory utilization.
    //     - **QPS**: the average queries per second (QPS) of a single instance of a Java application within 1 minute.
    //     - **RT**: the average response time (RT) of all service interfaces of a Java application within 1 minute.
    //     - **tcpActiveConn**: the average number of active TCP connections of a single instance within 30 seconds.
    //     - **SLB_QPS**: the average public-facing Server Load Balancer (SLB) QPS of a single instance within 15 seconds.
    //     - **SLB_RT**: the average public-Internet-facing SLB response time within 15 seconds.
    //     - **INTRANET_SLB_QPS**: the average private network SLB QPS of a single instance within 15 seconds.
    //     - **INTRANET_SLB_RT**: the average private network SLB response time within 15 seconds.
    // - **metricTargetAverageUtilization**: the target value of the monitoring metric based on the **metricType**.
    //     - Target CPU utilization, in percentage.
    //     - Target memory utilization, in percentage.
    //     - QPS.
    //     - Response time, in milliseconds.
    //     - Average number of active TCP connections, in connections per second.
    //     - Public-Internet-facing SLB QPS.
    //     - Public-Internet-facing SLB response time, in milliseconds.
    //     - Private network SLB QPS.
    //     - Private network SLB response time, in milliseconds.
    // - **slbId**: the SLB instance ID.
    // - **slbProject**: the Simple Log Service project.
    // - **slbLogstore**: the Simple Log Service Logstore.
    // - **vport**: the SLB listener port. HTTP and HTTPS protocols are supported.
    // - **scaleUpRules**: the scale-out rules for the application.
    // - **scaleDownRules**: the scale-in rules for the application.
    // - **step**: the step size for scaling out or scaling in. The maximum number of instances that can be scaled out or in per unit of time.
    // - **disabled**: specifies whether to disable scale-in. If enabled, the application instances are never scaled in, which effectively prevents service risks caused by scale-in during traffic peaks. Valid values:
    //     - **true**: enabled.
    //     - **false**: disabled. This is the default value.
    // - **stabilizationWindowSeconds**: the cooldown period for scaling out or scaling in. Valid values: [0, 3600\\]. Unit: seconds. Default value: 0.
    // 
    // > You can configure one or more monitoring metrics. If multiple monitoring metrics are configured, the application scales out as long as any metric is greater than or equal to the target value. The number of instances after scale-out does not exceed the maximum number of instances for the application. If all metrics are less than the target value, the application scales in. The number of instances after scale-in is not less than the minimum number of instances for the application.
    shared_ptr<string> scalingRuleMetric_ {};
    // The custom name of the elastic scaling policy. The policy name must be unique within the application, start with a lowercase letter, and contain only lowercase letters, digits, and hyphens (-). It can be up to 32 characters in length.
    // > After the elastic scaling policy is created, the policy name cannot be modified.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleName_ {};
    // The configuration of the scheduled elastic policy. This parameter is required when you select a scheduled elastic policy or use an SDK for configuration.
    // 
    // Metric description:
    // - **beginDate** and **endDate**: **beginDate** specifies the start date, and **endDate** specifies the end date. These parameters are used to configure the validity period of the scheduled elastic scaling policy. Valid values:
    // 
    //     - If both values are **null**, the policy is executed on a long-term basis. This is the default value.
    //     - If specific dates are specified, for example, **beginDate** is **2021-03-25** and **endDate** is **2021-04-25**, the validity period is one month.
    // 
    // - **period**: the epoch for executing the scheduled elastic scaling policy. Valid values:
    //     - **\\* \\* \\***: executes the scheduled policy at the specified time every day.
    //     - **\\* \\* Fri,Mon**: executes the scheduled policy at the specified time on the specified days of every week. Multiple days are supported. The time zone is GMT+8. Valid values: 
    //         - **Sun**: Sunday
    //         - **Mon**: Monday
    //         - **Tue**: Tuesday
    //         - **Wed**: Wednesday
    //         - **Thu**: Thursday
    //         - **Fri**: Friday
    //         - **Sat**: Saturday
    //     - **1,2,3,28,31 \\* \\***: executes the scheduled policy at the specified time on the specified days of every month. Multiple days are supported. Valid values: [1,31\\]. If the current month does not have the 31st day, the scheduled policy is skipped on that day.
    // - **schedules**: the trigger time of the elastic scaling policy and the number of application instances to maintain during the time period. Up to 20 time points are supported. Metric description:
    //     - **atTime**: the trigger time point. The format is **HH:mm**, for example, **08:00**.
    //     - **targetReplicas**: the number of instances for the application, or the minimum number of surviving instances for each deployment. Valid values: [1,50\\].
    //         > We recommend that you set the minimum number of surviving instances for each rolling deployment to a value greater than or equal to **1** to ensure that business is not interrupted. If you set this parameter to **0**, business will be interrupted during the application upgrade procedure.
    shared_ptr<string> scalingRuleTimer_ {};
    // The type of the elastic scaling policy. Valid values:
    // 
    // - **timing**: scheduled elastic scaling.
    // - **metric**: monitoring metric-based elastic scaling.
    // 
    // - **mix**: hybrid elastic scaling.
    // 
    // >
    // > - If you select scheduled elastic scaling, the ScalingRuleTimer parameter is required.
    // > - If you select monitoring metric-based elastic scaling, the ScalingRuleMetric parameter is required.
    // > - If you select hybrid elastic scaling, the ScalingRuleMetric parameter is required. You can also specify the ScalingRuleTimer and ScalingRuleMetric parameters as needed.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
