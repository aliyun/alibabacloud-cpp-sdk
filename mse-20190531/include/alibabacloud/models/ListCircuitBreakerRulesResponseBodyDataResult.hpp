// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCIRCUITBREAKERRULESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCIRCUITBREAKERRULESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListCircuitBreakerRulesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCircuitBreakerRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_TO_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_TO_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_TO_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListCircuitBreakerRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FallbackObject, fallbackObject_);
      DARABONBA_PTR_FROM_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_FROM_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ListCircuitBreakerRulesResponseBodyDataResult() = default ;
    ListCircuitBreakerRulesResponseBodyDataResult(const ListCircuitBreakerRulesResponseBodyDataResult &) = default ;
    ListCircuitBreakerRulesResponseBodyDataResult(ListCircuitBreakerRulesResponseBodyDataResult &&) = default ;
    ListCircuitBreakerRulesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCircuitBreakerRulesResponseBodyDataResult() = default ;
    ListCircuitBreakerRulesResponseBodyDataResult& operator=(const ListCircuitBreakerRulesResponseBodyDataResult &) = default ;
    ListCircuitBreakerRulesResponseBodyDataResult& operator=(ListCircuitBreakerRulesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->enable_ == nullptr && return this->fallbackObject_ == nullptr && return this->halfOpenBaseAmountPerStep_ == nullptr && return this->halfOpenRecoveryStepNum_ == nullptr
        && return this->maxAllowedRtMs_ == nullptr && return this->minRequestAmount_ == nullptr && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->resource_ == nullptr
        && return this->resourceType_ == nullptr && return this->retryTimeoutMs_ == nullptr && return this->ruleId_ == nullptr && return this->statIntervalMs_ == nullptr && return this->strategy_ == nullptr
        && return this->threshold_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // fallbackObject Field Functions 
    bool hasFallbackObject() const { return this->fallbackObject_ != nullptr;};
    void deleteFallbackObject() { this->fallbackObject_ = nullptr;};
    inline string fallbackObject() const { DARABONBA_PTR_GET_DEFAULT(fallbackObject_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setFallbackObject(string fallbackObject) { DARABONBA_PTR_SET_VALUE(fallbackObject_, fallbackObject) };


    // halfOpenBaseAmountPerStep Field Functions 
    bool hasHalfOpenBaseAmountPerStep() const { return this->halfOpenBaseAmountPerStep_ != nullptr;};
    void deleteHalfOpenBaseAmountPerStep() { this->halfOpenBaseAmountPerStep_ = nullptr;};
    inline int32_t halfOpenBaseAmountPerStep() const { DARABONBA_PTR_GET_DEFAULT(halfOpenBaseAmountPerStep_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setHalfOpenBaseAmountPerStep(int32_t halfOpenBaseAmountPerStep) { DARABONBA_PTR_SET_VALUE(halfOpenBaseAmountPerStep_, halfOpenBaseAmountPerStep) };


    // halfOpenRecoveryStepNum Field Functions 
    bool hasHalfOpenRecoveryStepNum() const { return this->halfOpenRecoveryStepNum_ != nullptr;};
    void deleteHalfOpenRecoveryStepNum() { this->halfOpenRecoveryStepNum_ = nullptr;};
    inline int32_t halfOpenRecoveryStepNum() const { DARABONBA_PTR_GET_DEFAULT(halfOpenRecoveryStepNum_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setHalfOpenRecoveryStepNum(int32_t halfOpenRecoveryStepNum) { DARABONBA_PTR_SET_VALUE(halfOpenRecoveryStepNum_, halfOpenRecoveryStepNum) };


    // maxAllowedRtMs Field Functions 
    bool hasMaxAllowedRtMs() const { return this->maxAllowedRtMs_ != nullptr;};
    void deleteMaxAllowedRtMs() { this->maxAllowedRtMs_ = nullptr;};
    inline int32_t maxAllowedRtMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedRtMs_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setMaxAllowedRtMs(int32_t maxAllowedRtMs) { DARABONBA_PTR_SET_VALUE(maxAllowedRtMs_, maxAllowedRtMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t minRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // retryTimeoutMs Field Functions 
    bool hasRetryTimeoutMs() const { return this->retryTimeoutMs_ != nullptr;};
    void deleteRetryTimeoutMs() { this->retryTimeoutMs_ = nullptr;};
    inline int32_t retryTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(retryTimeoutMs_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setRetryTimeoutMs(int32_t retryTimeoutMs) { DARABONBA_PTR_SET_VALUE(retryTimeoutMs_, retryTimeoutMs) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t statIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListCircuitBreakerRulesResponseBodyDataResult& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // Indicates whether the rule was enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The behavior that was bound to the rule.
    std::shared_ptr<string> fallbackObject_ = nullptr;
    // The minimum number of requests that can be passed in each step after circuit breaking recovers.
    std::shared_ptr<int32_t> halfOpenBaseAmountPerStep_ = nullptr;
    // The number of circuit breaking recovery steps.
    std::shared_ptr<int32_t> halfOpenRecoveryStepNum_ = nullptr;
    // The maximum RT. Unit: milliseconds. If the RT of a request is greater than the value of this parameter, a slow call is counted. If you set Strategy to 0, you must specify this parameter.
    std::shared_ptr<int32_t> maxAllowedRtMs_ = nullptr;
    // The minimum number of requests to trigger circuit breaking. If the number of requests in the current time window is less than the value of this parameter, circuit breaking is not triggered even if the circuit breaking rule is met.
    std::shared_ptr<int32_t> minRequestAmount_ = nullptr;
    // The microservice namespace to which the application belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the interface to which the rule is applicable. The interface name must be the same as the name on the interface details page in the console.
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    // The period in which circuit breaking is implemented. Unit: milliseconds. If circuit breaking is implemented on the requests for the route, the calls to all the requests for the route fail in the configured circuit breaking period.
    std::shared_ptr<int32_t> retryTimeoutMs_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
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
