// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYCIRCUITBREAKERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYCIRCUITBREAKERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayCircuitBreakerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxAllowedMs, maxAllowedMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(RecoveryTimeoutSec, recoveryTimeoutSec_);
      DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(StatDurationSec, statDurationSec_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(TriggerRatio, triggerRatio_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayCircuitBreakerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedMs, maxAllowedMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(RecoveryTimeoutSec, recoveryTimeoutSec_);
      DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(StatDurationSec, statDurationSec_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(TriggerRatio, triggerRatio_);
    };
    UpdateGatewayCircuitBreakerRuleRequest() = default ;
    UpdateGatewayCircuitBreakerRuleRequest(const UpdateGatewayCircuitBreakerRuleRequest &) = default ;
    UpdateGatewayCircuitBreakerRuleRequest(UpdateGatewayCircuitBreakerRuleRequest &&) = default ;
    UpdateGatewayCircuitBreakerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayCircuitBreakerRuleRequest() = default ;
    UpdateGatewayCircuitBreakerRuleRequest& operator=(const UpdateGatewayCircuitBreakerRuleRequest &) = default ;
    UpdateGatewayCircuitBreakerRuleRequest& operator=(UpdateGatewayCircuitBreakerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->behaviorType_ == nullptr && this->bodyEncoding_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->id_ == nullptr && this->maxAllowedMs_ == nullptr && this->minRequestAmount_ == nullptr && this->recoveryTimeoutSec_ == nullptr && this->responseContentBody_ == nullptr
        && this->responseRedirectUrl_ == nullptr && this->responseStatusCode_ == nullptr && this->routeId_ == nullptr && this->routeName_ == nullptr && this->statDurationSec_ == nullptr
        && this->strategy_ == nullptr && this->triggerRatio_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayCircuitBreakerRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // behaviorType Field Functions 
    bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
    void deleteBehaviorType() { this->behaviorType_ = nullptr;};
    inline int32_t getBehaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


    // bodyEncoding Field Functions 
    bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
    void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
    inline int32_t getBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayCircuitBreakerRuleRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxAllowedMs Field Functions 
    bool hasMaxAllowedMs() const { return this->maxAllowedMs_ != nullptr;};
    void deleteMaxAllowedMs() { this->maxAllowedMs_ = nullptr;};
    inline int32_t getMaxAllowedMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedMs_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setMaxAllowedMs(int32_t maxAllowedMs) { DARABONBA_PTR_SET_VALUE(maxAllowedMs_, maxAllowedMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t getMinRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // recoveryTimeoutSec Field Functions 
    bool hasRecoveryTimeoutSec() const { return this->recoveryTimeoutSec_ != nullptr;};
    void deleteRecoveryTimeoutSec() { this->recoveryTimeoutSec_ = nullptr;};
    inline int32_t getRecoveryTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(recoveryTimeoutSec_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setRecoveryTimeoutSec(int32_t recoveryTimeoutSec) { DARABONBA_PTR_SET_VALUE(recoveryTimeoutSec_, recoveryTimeoutSec) };


    // responseContentBody Field Functions 
    bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
    void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
    inline string getResponseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
    inline UpdateGatewayCircuitBreakerRuleRequest& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


    // responseRedirectUrl Field Functions 
    bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
    void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
    inline string getResponseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
    inline UpdateGatewayCircuitBreakerRuleRequest& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


    // responseStatusCode Field Functions 
    bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
    void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
    inline int32_t getResponseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline UpdateGatewayCircuitBreakerRuleRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // statDurationSec Field Functions 
    bool hasStatDurationSec() const { return this->statDurationSec_ != nullptr;};
    void deleteStatDurationSec() { this->statDurationSec_ = nullptr;};
    inline int32_t getStatDurationSec() const { DARABONBA_PTR_GET_DEFAULT(statDurationSec_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setStatDurationSec(int32_t statDurationSec) { DARABONBA_PTR_SET_VALUE(statDurationSec_, statDurationSec) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // triggerRatio Field Functions 
    bool hasTriggerRatio() const { return this->triggerRatio_ != nullptr;};
    void deleteTriggerRatio() { this->triggerRatio_ = nullptr;};
    inline int32_t getTriggerRatio() const { DARABONBA_PTR_GET_DEFAULT(triggerRatio_, 0) };
    inline UpdateGatewayCircuitBreakerRuleRequest& setTriggerRatio(int32_t triggerRatio) { DARABONBA_PTR_SET_VALUE(triggerRatio_, triggerRatio) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<int32_t> behaviorType_ {};
    shared_ptr<int32_t> bodyEncoding_ {};
    // This parameter is required.
    shared_ptr<int32_t> enable_ {};
    shared_ptr<int64_t> gatewayId_ {};
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> maxAllowedMs_ {};
    // This parameter is required.
    shared_ptr<int32_t> minRequestAmount_ {};
    // This parameter is required.
    shared_ptr<int32_t> recoveryTimeoutSec_ {};
    shared_ptr<string> responseContentBody_ {};
    shared_ptr<string> responseRedirectUrl_ {};
    shared_ptr<int32_t> responseStatusCode_ {};
    // This parameter is required.
    shared_ptr<int64_t> routeId_ {};
    // This parameter is required.
    shared_ptr<string> routeName_ {};
    // This parameter is required.
    shared_ptr<int32_t> statDurationSec_ {};
    // This parameter is required.
    shared_ptr<int32_t> strategy_ {};
    // This parameter is required.
    shared_ptr<int32_t> triggerRatio_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
