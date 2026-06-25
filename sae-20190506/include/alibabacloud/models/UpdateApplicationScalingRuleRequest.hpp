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
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EnableIdle, enableIdle_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleTimer, scalingRuleTimer_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->enableIdle_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr && this->scalingRuleMetric_ == nullptr && this->scalingRuleName_ == nullptr
        && this->scalingRuleTimer_ == nullptr && this->scalingRuleType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // enableIdle Field Functions 
    bool hasEnableIdle() const { return this->enableIdle_ != nullptr;};
    void deleteEnableIdle() { this->enableIdle_ = nullptr;};
    inline bool getEnableIdle() const { DARABONBA_PTR_GET_DEFAULT(enableIdle_, false) };
    inline UpdateApplicationScalingRuleRequest& setEnableIdle(bool enableIdle) { DARABONBA_PTR_SET_VALUE(enableIdle_, enableIdle) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline UpdateApplicationScalingRuleRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline UpdateApplicationScalingRuleRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // scalingRuleMetric Field Functions 
    bool hasScalingRuleMetric() const { return this->scalingRuleMetric_ != nullptr;};
    void deleteScalingRuleMetric() { this->scalingRuleMetric_ = nullptr;};
    inline string getScalingRuleMetric() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleMetric_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleMetric(string scalingRuleMetric) { DARABONBA_PTR_SET_VALUE(scalingRuleMetric_, scalingRuleMetric) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleTimer Field Functions 
    bool hasScalingRuleTimer() const { return this->scalingRuleTimer_ != nullptr;};
    void deleteScalingRuleTimer() { this->scalingRuleTimer_ = nullptr;};
    inline string getScalingRuleTimer() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleTimer_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleTimer(string scalingRuleTimer) { DARABONBA_PTR_SET_VALUE(scalingRuleTimer_, scalingRuleTimer) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string getScalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to enable or disable the idle mode.
    shared_ptr<bool> enableIdle_ {};
    // The minimum percentage of instances that must remain available during a rolling deployment. Valid values:
    // 
    // - **-1**: An initial value that indicates that a percentage is not used.
    // 
    // - **0 to 100**: A percentage that is rounded up. For example, if you have 5 instances and set this parameter to **50**, the minimum number of surviving instances is 3.
    // 
    // > If you specify both **MinReadyInstances** and **MinReadyInstanceRatio**, and **MinReadyInstanceRatio** is not **-1**, **MinReadyInstanceRatio** takes precedence. For example, if **MinReadyInstances** is set to **5** and **MinReadyInstanceRatio** is set to **50**, the system uses **50%** to calculate the minimum number of surviving instances.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of instances that must remain available during a rolling deployment. Valid values:
    // 
    // - If you set this parameter to **0**, your application experiences service interruptions during a rolling deployment.
    // 
    // - If you set this parameter to **-1**, the system uses a recommended value, which is 25% of the current number of instances. For example, if you have 5 instances, the minimum number of surviving instances is 2 (5 × 25% = 1.25, rounded up).
    // 
    // > To ensure business continuity, we recommend that you set the minimum number of surviving instances for each rolling deployment to 1 or higher.
    shared_ptr<int32_t> minReadyInstances_ {};
    // The configuration for the metric-based scaling policy. This parameter is required for metric-based scaling policies.
    // 
    // The parameter includes the following fields:
    // 
    // - **maxReplicas**: The maximum number of application instances.
    // 
    // - **minReplicas**: The minimum number of application instances.
    // 
    // - **metricType**: The metric that triggers the policy. Valid values:
    // 
    //   - **CPU**: The CPU usage.
    // 
    //   - **MEMORY**: The memory usage.
    // 
    //   - **QPS**: The average QPS of a single instance of a Java application over a 1-minute period.
    // 
    //   - **RT**: The average RT of all service interfaces of a Java application over a 1-minute period.
    // 
    //   - **tcpActiveConn**: The average number of active TCP connections per instance over a 30-second period.
    // 
    //   - **SLB_QPS**: The average QPS of an internet-facing SLB, measured per instance over a 15-second period.
    // 
    //   - **SLB_RT**: The average RT of an internet-facing SLB over a 15-second period.
    // 
    //   - **INTRANET_SLB_QPS**: The average QPS of an internal-facing SLB, measured per instance over a 15-second period.
    // 
    //   - **INTRANET_SLB_RT**: The average RT of an internal-facing SLB over a 15-second period.
    // 
    // - **metricTargetAverageUtilization**: The target value for the specified **metricType**.
    // 
    //   - Target CPU usage, in percent.
    // 
    //   - Target memory usage, in percent.
    // 
    //   - Target QPS.
    // 
    //   - Target RT, in milliseconds.
    // 
    //   - Average number of active TCP connections, in connections/second.
    // 
    //   - Target internet-facing SLB QPS.
    // 
    //   - Target internet-facing SLB RT, in milliseconds.
    // 
    //   - Target internal-facing SLB QPS.
    // 
    //   - Target internal-facing SLB RT, in milliseconds.
    // 
    // - **slbId**: The SLB ID.
    // 
    // - **slbProject**: The Simple Log Service project.
    // 
    // - **slbLogstore**: The Simple Log Service Logstore.
    // 
    // - **vport**: The listening port of the SLB. Both HTTP and HTTPS are supported.
    // 
    // - **scaleUpRules**: The scale-out rules.
    // 
    // - **scaleDownRules**: The scale-in rules.
    // 
    // - **step**: The step size for a scale-out or scale-in action. It defines the maximum number of instances that can be added or removed at a time.
    // 
    // - **disabled**: Specifies whether to disable scale-in. Disabling scale-in prevents the application from scaling in, which can mitigate risks during peak traffic.
    // 
    //   - **true**: Disables scale-in.
    // 
    //   - **false**: Enables scale-in. This is the default value.
    // 
    // - **stabilizationWindowSeconds**: The cooldown time, in seconds, for a scaling action. The value must be an integer from 0 to 3,600. The default is 0.
    // 
    // > If you specify multiple metrics, a scale-out is triggered when any metric meets its target. The number of instances will not exceed maxReplicas. A scale-in is triggered only when all metrics are below their targets. The number of instances will not drop below minReplicas.
    shared_ptr<string> scalingRuleMetric_ {};
    // The name of the auto scaling policy. The name must start with a lowercase letter, contain only lowercase letters, digits, and hyphens (-), and be no more than 32 characters long.
    // 
    // > You cannot change the name of an auto scaling policy after it is created.
    // 
    // This parameter is required.
    shared_ptr<string> scalingRuleName_ {};
    // The configuration of the scheduled scaling policy. This parameter is required for scheduled scaling policies.
    // 
    // The parameter includes the following fields:
    // 
    // - **beginDate** and **endDate**: The start and end dates for the policy\\"s effective period.
    // 
    //   - If both parameters are set to **null**, the policy is always active. This is the default.
    // 
    //   - If you set **beginDate** to **2021-03-25** and **endDate** to **2021-04-25**, the policy is effective for one month.
    // 
    // - **period**: The execution schedule for the policy. Valid values:
    // 
    //   - **\\* \\* \\***: Executes the policy at a specified time every day.
    // 
    //   - **\\* \\* Fri,Mon**: Executes the policy at a specified time on specified days of the week. You can select multiple days. The time is in the UTC+8 time zone. Valid values:
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
    //   - **1,2,3,28,31 \\* \\***: Executes the policy at a specified time on specified days of a month. The value ranges from 1 to 31. If a specified day does not exist in a given month (for example, the 31st), the policy skips it.
    // 
    // - **schedules**: The trigger times and the corresponding target number of instances. You can specify up to 20 time points. This field includes the following parameters:
    // 
    //   - **atTime**: The trigger time. The format is **HH:mm**, for example, **08:00**.
    // 
    //   - **targetReplicas**: The target number of application instances. The value ranges from 1 to 50.
    // 
    //     > To ensure business continuity, we recommend that you set the minimum number of surviving instances for each rolling deployment to **1** or higher. If you set this parameter to **0**, your application is interrupted during an upgrade.
    shared_ptr<string> scalingRuleTimer_ {};
    shared_ptr<string> scalingRuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
