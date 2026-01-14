// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECIRCUITBREAKERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECIRCUITBREAKERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateCircuitBreakerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_TO_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_TO_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
      DARABONBA_PTR_FROM_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RetryTimeoutMs, retryTimeoutMs_);
      DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateCircuitBreakerRuleRequest() = default ;
    CreateCircuitBreakerRuleRequest(const CreateCircuitBreakerRuleRequest &) = default ;
    CreateCircuitBreakerRuleRequest(CreateCircuitBreakerRuleRequest &&) = default ;
    CreateCircuitBreakerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCircuitBreakerRuleRequest() = default ;
    CreateCircuitBreakerRuleRequest& operator=(const CreateCircuitBreakerRuleRequest &) = default ;
    CreateCircuitBreakerRuleRequest& operator=(CreateCircuitBreakerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->enable_ == nullptr && this->halfOpenBaseAmountPerStep_ == nullptr && this->halfOpenRecoveryStepNum_ == nullptr
        && this->maxAllowedRtMs_ == nullptr && this->minRequestAmount_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->resource_ == nullptr
        && this->resourceType_ == nullptr && this->retryTimeoutMs_ == nullptr && this->statIntervalMs_ == nullptr && this->strategy_ == nullptr && this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateCircuitBreakerRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateCircuitBreakerRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateCircuitBreakerRuleRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateCircuitBreakerRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // halfOpenBaseAmountPerStep Field Functions 
    bool hasHalfOpenBaseAmountPerStep() const { return this->halfOpenBaseAmountPerStep_ != nullptr;};
    void deleteHalfOpenBaseAmountPerStep() { this->halfOpenBaseAmountPerStep_ = nullptr;};
    inline int32_t getHalfOpenBaseAmountPerStep() const { DARABONBA_PTR_GET_DEFAULT(halfOpenBaseAmountPerStep_, 0) };
    inline CreateCircuitBreakerRuleRequest& setHalfOpenBaseAmountPerStep(int32_t halfOpenBaseAmountPerStep) { DARABONBA_PTR_SET_VALUE(halfOpenBaseAmountPerStep_, halfOpenBaseAmountPerStep) };


    // halfOpenRecoveryStepNum Field Functions 
    bool hasHalfOpenRecoveryStepNum() const { return this->halfOpenRecoveryStepNum_ != nullptr;};
    void deleteHalfOpenRecoveryStepNum() { this->halfOpenRecoveryStepNum_ = nullptr;};
    inline int32_t getHalfOpenRecoveryStepNum() const { DARABONBA_PTR_GET_DEFAULT(halfOpenRecoveryStepNum_, 0) };
    inline CreateCircuitBreakerRuleRequest& setHalfOpenRecoveryStepNum(int32_t halfOpenRecoveryStepNum) { DARABONBA_PTR_SET_VALUE(halfOpenRecoveryStepNum_, halfOpenRecoveryStepNum) };


    // maxAllowedRtMs Field Functions 
    bool hasMaxAllowedRtMs() const { return this->maxAllowedRtMs_ != nullptr;};
    void deleteMaxAllowedRtMs() { this->maxAllowedRtMs_ = nullptr;};
    inline int32_t getMaxAllowedRtMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedRtMs_, 0) };
    inline CreateCircuitBreakerRuleRequest& setMaxAllowedRtMs(int32_t maxAllowedRtMs) { DARABONBA_PTR_SET_VALUE(maxAllowedRtMs_, maxAllowedRtMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t getMinRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline CreateCircuitBreakerRuleRequest& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateCircuitBreakerRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCircuitBreakerRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateCircuitBreakerRuleRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline CreateCircuitBreakerRuleRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // retryTimeoutMs Field Functions 
    bool hasRetryTimeoutMs() const { return this->retryTimeoutMs_ != nullptr;};
    void deleteRetryTimeoutMs() { this->retryTimeoutMs_ = nullptr;};
    inline int32_t getRetryTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(retryTimeoutMs_, 0) };
    inline CreateCircuitBreakerRuleRequest& setRetryTimeoutMs(int32_t retryTimeoutMs) { DARABONBA_PTR_SET_VALUE(retryTimeoutMs_, retryTimeoutMs) };


    // statIntervalMs Field Functions 
    bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
    void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
    inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
    inline CreateCircuitBreakerRuleRequest& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline CreateCircuitBreakerRuleRequest& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateCircuitBreakerRuleRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the application.
    shared_ptr<string> appId_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
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
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The minimum number of requests that can be passed in each step after circuit breaking recovers. Default value: 1.
    shared_ptr<int32_t> halfOpenBaseAmountPerStep_ {};
    // The number of circuit breaking recovery steps. Default value: 1.
    shared_ptr<int32_t> halfOpenRecoveryStepNum_ {};
    // The maximum response time (RT). Unit: milliseconds. If the RT of a request is greater than the value of this parameter, a slow call is counted. If you set Strategy to 0, you must specify this parameter.
    shared_ptr<int32_t> maxAllowedRtMs_ {};
    // The minimum number of requests to trigger circuit breaking. If the number of requests in the current time window is less than the value of this parameter, circuit breaking is not triggered even if the circuit breaking rule is met. Default value: 10.
    shared_ptr<int32_t> minRequestAmount_ {};
    // The microservice namespace to which the application belongs.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The region in which the instance resides.
    shared_ptr<string> regionId_ {};
    // The name of the interface to which the rule applies. The interface name must be the same as the name on the interface details page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> resource_ {};
    // The resource type.
    // 
    // Valid values:
    // 
    // *   0: custom interface
    // *   1: web
    // *   2: RPC
    // *   3: route
    // *   4: SQL
    shared_ptr<int32_t> resourceType_ {};
    // The period in which circuit breaking is implemented. Unit: milliseconds. If circuit breaking is implemented on the requests for the route, the calls to all the requests for the route fail in the configured circuit breaking period. The value must be an integral multiple of 1,000. Default value: 10000. This value indicates 10 seconds.
    shared_ptr<int32_t> retryTimeoutMs_ {};
    // The length of the time window. Unit: milliseconds. The valid range is from 1 second to 120 minutes. The default value is 20000. This value indicates 20 seconds.
    shared_ptr<int32_t> statIntervalMs_ {};
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
    // 
    // This parameter is required.
    shared_ptr<int32_t> strategy_ {};
    // A percentage threshold for triggering circuit breaking. Valid values: 0-1. These values represent 0% to 100%.
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
