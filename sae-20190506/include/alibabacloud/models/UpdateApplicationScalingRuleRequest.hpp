// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleTimer, scalingRuleTimer_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleTimer, scalingRuleTimer_);
    };
    UpdateApplicationScalingRuleRequest() = default ;
    UpdateApplicationScalingRuleRequest(const UpdateApplicationScalingRuleRequest &) = default ;
    UpdateApplicationScalingRuleRequest(UpdateApplicationScalingRuleRequest &&) = default ;
    UpdateApplicationScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleRequest() = default ;
    UpdateApplicationScalingRuleRequest& operator=(const UpdateApplicationScalingRuleRequest &) = default ;
    UpdateApplicationScalingRuleRequest& operator=(UpdateApplicationScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->enableIdle_ != nullptr && this->minReadyInstanceRatio_ != nullptr && this->minReadyInstances_ != nullptr && this->scalingRuleMetric_ != nullptr && this->scalingRuleName_ != nullptr
        && this->scalingRuleTimer_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool enableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline UpdateApplicationScalingRuleRequest& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t minReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline UpdateApplicationScalingRuleRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t minReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline UpdateApplicationScalingRuleRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // scalingRuleMetric Field Functions 
    bool hasScalingRuleMetric() const { return this->scalingRuleMetric_ != nullptr;};
    void deleteScalingRuleMetric() { this->scalingRuleMetric_ = nullptr;};
    inline string scalingRuleMetric() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleMetric_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleMetric(string scalingRuleMetric) { DARABONBA_PTR_SET_VALUE(scalingRuleMetric_, scalingRuleMetric) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleTimer Field Functions 
    bool hasScalingRuleTimer() const { return this->scalingRuleTimer_ != nullptr;};
    void deleteScalingRuleTimer() { this->scalingRuleTimer_ = nullptr;};
    inline string scalingRuleTimer() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleTimer_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleTimer(string scalingRuleTimer) { DARABONBA_PTR_SET_VALUE(scalingRuleTimer_, scalingRuleTimer) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<bool> enableIdle_ = nullptr;
    // The percentage of the minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **-1**, the minimum number of available instances is not determined based on this parameter. This is the default value.
    // *   If you set the value to a number **from 0 to 100**, the minimum number of available instances is calculated by using the following formula: Current number of instances × (Value of MinReadyInstanceRatio × 100%). The value is the nearest integer rounded up from the calculated result. For example, if you set this parameter to **50**, and five instances are available, the minimum number of available instances is 3.
    // 
    // > When **MinReadyInstance** and **MinReadyInstanceRatio** are specified and **MinReadyInstanceRatio** is set to a number from 0 to 100, the value of \\*\\*MinReadyInstanceRatio** takes precedence.**** For example, if **MinReadyInstances** is set to **5\\*\\*, and **MinReadyInstanceRatio** is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Current number of instances × **50%**.
    std::shared_ptr<int32_t> minReadyInstanceRatio_ = nullptr;
    // The minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **0**, business interruptions occur when the auto-scaling policy is updated.
    // *   If you set the value to \\*\\*-1\\*\\*, the minimum number of available instances is automatically set to a system-recommended value. The value is the nearest integer to which the calculated result of the following formula is rounded up: Current number of instances × 25%. For example, if five instances are available, the minimum number of available instances is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // > Make sure that at least one instance is available during application deployment and rollback to prevent business interruptions.
    std::shared_ptr<int32_t> minReadyInstances_ = nullptr;
    // The configurations of the metric-based auto scaling policy. This parameter is required if you set the ScalingRuleType parameter to metric.
    // 
    // Parameter description:
    // 
    // *   **maxReplicas**: the maximum number of instances in the application.
    // 
    // *   **minReplicas**: the minimum number of instances in the application.
    // 
    // *   **metricType**: the metric that is used to trigger the auto scaling policy.
    // 
    //     *   **CPU**: the CPU utilization.
    //     *   **MEMORY**: the memory usage.
    //     *   **tcpActiveConn**: the average number of active TCP connections in an application instance within 30 seconds.
    //     *   **SLB_QPS**: the average queries per second (QPS) of the Internet-facing Server Load Balancer (SLB) instance associated with an application instance within 15 seconds.
    //     *   **SLB_RT**: the average response time of the Internet-facing SLB instance within 15 seconds.
    // 
    // *   **metricTargetAverageUtilization**: the limit on the metric specified by the **metricType** parameter.
    // 
    //     *   The limit on the CPU utilization. Unit: percentage.
    //     *   The limit on the memory usage. Unit: percentage.
    //     *   The limit on the average number of active TCP connections per second.
    //     *   The limit on the QPS of the Internet-facing SLB instance.
    //     *   The limit on the response time of the Internet-facing SLB instance. Unit: milliseconds.
    // 
    // *   **SlbProject**: the Log Service project.
    // 
    // *   **SlbLogstore**: the Log Service Logstore.
    // 
    // *   **Vport**: the listener port for the SLB instance. HTTP and HTTPS are supported.
    // 
    // *   **scaleUpRules**: the scale-out rule.
    // 
    // *   **scaleDownRules**: the scale-in rule.
    // 
    // *   **step**: the scale-out or scale-in step size. The maximum number of instances that can be added or removed per unit time.
    // 
    // *   **disabled**: specifies whether to disable the application scale-in. If you set this parameter to true, the application instances are never scaled in. This prevents business risks during peak hours.
    // 
    //     *   **true**: disables the application scale-in.
    //     *   **false**: enables the application scale-in. Default value: false.
    // 
    // *   **stabilizationWindowSeconds**: the cooldown period during which the system is stable and does not perform scale-out or scale-in operations. Valid values: 0 to 3600. Unit: seconds. Default value: 0.
    // 
    // > You can specify one or more metrics as the trigger conditions of the auto scaling policy. If you specify multiple metrics, the application is scaled out when the value of a metric is greater than or equal to the limit. The number of application instances after the scale-out cannot exceed the configured maximum number of application instances. If the values of all the metrics are less than the limits, the application is scaled in. The number of instances after the scale-in cannot be less than the configured minimum number of application instances.
    std::shared_ptr<string> scalingRuleMetric_ = nullptr;
    // The name of the auto scaling policy. The name must start with a lowercase letter and can contain only lowercase letters, digits, and hyphens (-). The name cannot exceed 32 characters in length.
    // 
    // > You cannot change the names of created policies.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // The configurations of the scheduled auto scaling policy. This parameter is required when you set the ScalingRuleType parameter to timing or when you want to create a scheduled auto scaling policy by using an SDK.
    // 
    // Parameter description:
    // 
    // *   **beginDate** and **endDate**: specify the validity period of the scheduled auto scaling policy. **beginDate** specifies the start date and **endDate** specifies the end date. Take note of the following rules:
    // 
    //     *   If you set the two parameters to **null**, the scheduled auto scaling policy is a long-term policy. Default values of the beginDate and endDate parameters: null.
    //     *   If you set the two parameters to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if you set **beginDate** to **2021-03-25** and **endDate** to **2021-04-25**, the auto scaling policy is valid for one month.
    // 
    // *   **period**: specifies the frequency at which the scheduled auto scaling policy is executed. Valid values:
    // 
    //     *   **\\* \\* \\***: The scheduled auto scaling policy is executed at a specified point in time every day.
    // 
    //     *   **\\* \\* Fri,Mon**: The scheduled auto scaling policy is executed at a specified point in time on one or more specified days of each week. GMT+8 is used. Valid values:
    // 
    //         *   **Sun**
    //         *   **Mon**
    //         *   **Tue**
    //         *   **Wed**
    //         *   **Thu**
    //         *   **Fri**
    //         *   **Sat**
    // 
    //     *   **1,2,3,28,31 \\* \\***: The scheduled auto scaling policy is executed at a specified point in time on one or more days of each month. Valid values: 1 to 31. If the month does not have a 31st day, the auto scaling policy is executed on the specified days other than the 31st day.
    // 
    // *   **schedules**: specifies the points in time at which the auto scaling policy is triggered and the number of application instances that are retained during the corresponding period of time. You can specify up to 20 points in time. Parameter description:
    // 
    //     *   **atTime**: the point in time at which the policy is triggered. Format: **Hour:Minute**. Example: **08:00**.
    // 
    //     *   **targetReplicas**: specifies the number of application instances that you want to maintain by using this policy. You can also set the value to the minimum number of available instances required for each application release. Valid values: 1 to 50.
    // 
    //         **
    // 
    //         **Note**Make sure that at least **one** instance is available during the application deployment and rollback to prevent your business from being interrupted. If you set the value to **0**, business interruptions occur when the application is updated.
    std::shared_ptr<string> scalingRuleTimer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
