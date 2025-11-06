// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateCircuitBreakerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_TO_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_TO_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_FROM_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateCircuitBreakerRuleRequest() = default ;
    UpdateCircuitBreakerRuleRequest(const UpdateCircuitBreakerRuleRequest &) = default ;
    UpdateCircuitBreakerRuleRequest(UpdateCircuitBreakerRuleRequest &&) = default ;
    UpdateCircuitBreakerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCircuitBreakerRuleRequest() = default ;
    UpdateCircuitBreakerRuleRequest& operator=(const UpdateCircuitBreakerRuleRequest &) = default ;
    UpdateCircuitBreakerRuleRequest& operator=(UpdateCircuitBreakerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->halfOpenBaseAmountPerStep_ == nullptr && return this->halfOpenRecoveryStepNum_ == nullptr
        && return this->maxAllowedRtMs_ == nullptr && return this->minRequestAmount_ == nullptr && return this->namespace_ == nullptr && return this->retryTimeoutMs_ == nullptr && return this->ruleId_ == nullptr
        && return this->statIntervalMs_ == nullptr && return this->strategy_ == nullptr && return this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCircuitBreakerRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCircuitBreakerRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateCircuitBreakerRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateCircuitBreakerRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // halfOpenBaseAmountPerStep Field Functions 
    bool hasHalfOpenBaseAmountPerStep() const { return this->halfOpenBaseAmountPerStep_ != nullptr;};
    void deleteHalfOpenBaseAmountPerStep() { this->halfOpenBaseAmountPerStep_ = nullptr;};
    inline int32_t halfOpenBaseAmountPerStep() const { DARABONBA_PTR_GET_DEFAULT(halfOpenBaseAmountPerStep_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setHalfOpenBaseAmountPerStep(int32_t halfOpenBaseAmountPerStep) { DARABONBA_PTR_SET_VALUE(halfOpenBaseAmountPerStep_, halfOpenBaseAmountPerStep) };


    // halfOpenRecoveryStepNum Field Functions 
    bool hasHalfOpenRecoveryStepNum() const { return this->halfOpenRecoveryStepNum_ != nullptr;};
    void deleteHalfOpenRecoveryStepNum() { this->halfOpenRecoveryStepNum_ = nullptr;};
    inline int32_t halfOpenRecoveryStepNum() const { DARABONBA_PTR_GET_DEFAULT(halfOpenRecoveryStepNum_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setHalfOpenRecoveryStepNum(int32_t halfOpenRecoveryStepNum) { DARABONBA_PTR_SET_VALUE(halfOpenRecoveryStepNum_, halfOpenRecoveryStepNum) };


    // maxAllowedRtMs Field Functions 
    bool hasMaxAllowedRtMs() const { return this->maxAllowedRtMs_ != nullptr;};
    void deleteMaxAllowedRtMs() { this->maxAllowedRtMs_ = nullptr;};
    inline int32_t maxAllowedRtMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedRtMs_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setMaxAllowedRtMs(int32_t maxAllowedRtMs) { DARABONBA_PTR_SET_VALUE(maxAllowedRtMs_, maxAllowedRtMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t minRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateCircuitBreakerRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // retryTimeoutMs Field Functions 
    bool hasRetryTimeoutMs() const { return this->retryTimeoutMs_ != nullptr;};
    void deleteRetryTimeoutMs() { this->retryTimeoutMs_ = nullptr;};
    inline int32_t retryTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(retryTimeoutMs_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setRetryTimeoutMs(int32_t retryTimeoutMs) { DARABONBA_PTR_SET_VALUE(retryTimeoutMs_, retryTimeoutMs) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline UpdateCircuitBreakerRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t statIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline UpdateCircuitBreakerRuleRequest& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateCircuitBreakerRuleRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The language of the response. Valid values: zh-CN and en-US. Default value: zh-CN. The value zh-CN indicates Chinese, and the value en-US indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // Specifies whether to enable the rule.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enable_ = nullptr;
    // The minimum number of requests that can be passed in each step after circuit breaking recovers. Default value: 1.
    std::shared_ptr<int32_t> halfOpenBaseAmountPerStep_ = nullptr;
    // The number of circuit breaking recovery steps. Default value: 1.
    std::shared_ptr<int32_t> halfOpenRecoveryStepNum_ = nullptr;
    // The maximum response time (RT). Unit: milliseconds. If the RT of a request is greater than the value of this parameter, a slow call is counted. If you set Strategy to 0, you must specify this parameter.
    std::shared_ptr<int32_t> maxAllowedRtMs_ = nullptr;
    // The minimum number of requests to trigger circuit breaking. If the number of requests in the current time window is less than the value of this parameter, circuit breaking is not triggered even if the circuit breaking rule is met. Default value: 10.
    std::shared_ptr<int32_t> minRequestAmount_ = nullptr;
    // The microservice namespace to which the application belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The period in which circuit breaking is implemented. Unit: milliseconds. If circuit breaking is implemented on the requests for the route, the calls to all the requests for the route fail in the configured circuit breaking period. The value must be an integral multiple of 1,000. Default value: 10000. This value indicates 10 seconds.
    std::shared_ptr<int32_t> retryTimeoutMs_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The length of the time window. Unit: milliseconds. The valid range is from 1 second to 120 minutes. The default value is 20000. This value indicates 20 seconds.
    std::shared_ptr<int32_t> statIntervalMs_ = nullptr;
    // The threshold type.
    // 
    // Valid values:
    // 
    // *   0
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     slow call proportion
    // 
    //     <!-- -->
    // 
    // *   1
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     abnormal proportion
    // 
    //     <!-- -->
    std::shared_ptr<int32_t> strategy_ = nullptr;
    // A percentage threshold for triggering circuit breaking. Valid values: 0-1. These values represent 0% to 100%.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
