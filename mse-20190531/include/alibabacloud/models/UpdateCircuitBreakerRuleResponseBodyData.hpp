// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateCircuitBreakerRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCircuitBreakerRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_TO_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCircuitBreakerRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_FROM_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateCircuitBreakerRuleResponseBodyData() = default ;
    UpdateCircuitBreakerRuleResponseBodyData(const UpdateCircuitBreakerRuleResponseBodyData &) = default ;
    UpdateCircuitBreakerRuleResponseBodyData(UpdateCircuitBreakerRuleResponseBodyData &&) = default ;
    UpdateCircuitBreakerRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCircuitBreakerRuleResponseBodyData() = default ;
    UpdateCircuitBreakerRuleResponseBodyData& operator=(const UpdateCircuitBreakerRuleResponseBodyData &) = default ;
    UpdateCircuitBreakerRuleResponseBodyData& operator=(UpdateCircuitBreakerRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->enable_ != nullptr && this->halfOpenBaseAmountPerStep_ != nullptr && this->halfOpenRecoveryStepNum_ != nullptr && this->id_ != nullptr
        && this->maxAllowedRtMs_ != nullptr && this->minRequestAmount_ != nullptr && this->namespace_ != nullptr && this->resource_ != nullptr && this->retryTimeoutMs_ != nullptr
        && this->statIntervalMs_ != nullptr && this->strategy_ != nullptr && this->threshold_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCircuitBreakerRuleResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateCircuitBreakerRuleResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // halfOpenBaseAmountPerStep Field Functions 
    bool hasHalfOpenBaseAmountPerStep() const { return this->halfOpenBaseAmountPerStep_ != nullptr;};
    void deleteHalfOpenBaseAmountPerStep() { this->halfOpenBaseAmountPerStep_ = nullptr;};
    inline int32_t halfOpenBaseAmountPerStep() const { DARABONBA_PTR_GET_DEFAULT(halfOpenBaseAmountPerStep_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setHalfOpenBaseAmountPerStep(int32_t halfOpenBaseAmountPerStep) { DARABONBA_PTR_SET_VALUE(halfOpenBaseAmountPerStep_, halfOpenBaseAmountPerStep) };


    // halfOpenRecoveryStepNum Field Functions 
    bool hasHalfOpenRecoveryStepNum() const { return this->halfOpenRecoveryStepNum_ != nullptr;};
    void deleteHalfOpenRecoveryStepNum() { this->halfOpenRecoveryStepNum_ = nullptr;};
    inline int32_t halfOpenRecoveryStepNum() const { DARABONBA_PTR_GET_DEFAULT(halfOpenRecoveryStepNum_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setHalfOpenRecoveryStepNum(int32_t halfOpenRecoveryStepNum) { DARABONBA_PTR_SET_VALUE(halfOpenRecoveryStepNum_, halfOpenRecoveryStepNum) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxAllowedRtMs Field Functions 
    bool hasMaxAllowedRtMs() const { return this->maxAllowedRtMs_ != nullptr;};
    void deleteMaxAllowedRtMs() { this->maxAllowedRtMs_ = nullptr;};
    inline int32_t maxAllowedRtMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedRtMs_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setMaxAllowedRtMs(int32_t maxAllowedRtMs) { DARABONBA_PTR_SET_VALUE(maxAllowedRtMs_, maxAllowedRtMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t minRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateCircuitBreakerRuleResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline UpdateCircuitBreakerRuleResponseBodyData& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // retryTimeoutMs Field Functions 
    bool hasRetryTimeoutMs() const { return this->retryTimeoutMs_ != nullptr;};
    void deleteRetryTimeoutMs() { this->retryTimeoutMs_ = nullptr;};
    inline int32_t retryTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(retryTimeoutMs_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setRetryTimeoutMs(int32_t retryTimeoutMs) { DARABONBA_PTR_SET_VALUE(retryTimeoutMs_, retryTimeoutMs) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t statIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateCircuitBreakerRuleResponseBodyData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // Indicates whether the rule is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The minimum number of requests that can be passed in each step after circuit breaking recovers.
    std::shared_ptr<int32_t> halfOpenBaseAmountPerStep_ = nullptr;
    // The number of circuit breaking recovery steps.
    std::shared_ptr<int32_t> halfOpenRecoveryStepNum_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The maximum RT. Unit: milliseconds. If the RT of a request is greater than the value of this parameter, a slow call is counted. If you set Strategy to 0, you must specify this parameter.
    std::shared_ptr<int32_t> maxAllowedRtMs_ = nullptr;
    // The minimum number of requests to trigger circuit breaking. If the number of requests in the current time window is less than the value of this parameter, circuit breaking is not triggered even if the circuit breaking rule is met.
    std::shared_ptr<int32_t> minRequestAmount_ = nullptr;
    // The microservice namespace to which the application belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the interface to which the rule is applicable. The interface name must be the same as the name on the interface details page in the console.
    std::shared_ptr<string> resource_ = nullptr;
    // The period in which circuit breaking is implemented. Unit: milliseconds. If circuit breaking is implemented on the requests for the route, the calls to all the requests for the route fail in the configured circuit breaking period.
    std::shared_ptr<int32_t> retryTimeoutMs_ = nullptr;
    // The length of the time window. Unit: milliseconds. The valid range is from 1 second to 120 minutes.
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
