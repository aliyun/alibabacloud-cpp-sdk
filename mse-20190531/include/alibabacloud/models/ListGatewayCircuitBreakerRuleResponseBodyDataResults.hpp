// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYCIRCUITBREAKERRULERESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYCIRCUITBREAKERRULERESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayCircuitBreakerRuleResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayCircuitBreakerRuleResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(LimitMode, limitMode_);
      DARABONBA_PTR_TO_JSON(MaxAllowedMs, maxAllowedMs_);
      DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_TO_JSON(RecoveryTimeoutSec, recoveryTimeoutSec_);
      DARABONBA_PTR_TO_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
      DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(StatDurationSec, statDurationSec_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(TriggerRatio, triggerRatio_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayCircuitBreakerRuleResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(LimitMode, limitMode_);
      DARABONBA_PTR_FROM_JSON(MaxAllowedMs, maxAllowedMs_);
      DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
      DARABONBA_PTR_FROM_JSON(RecoveryTimeoutSec, recoveryTimeoutSec_);
      DARABONBA_PTR_FROM_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
      DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(StatDurationSec, statDurationSec_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(TriggerRatio, triggerRatio_);
    };
    ListGatewayCircuitBreakerRuleResponseBodyDataResults() = default ;
    ListGatewayCircuitBreakerRuleResponseBodyDataResults(const ListGatewayCircuitBreakerRuleResponseBodyDataResults &) = default ;
    ListGatewayCircuitBreakerRuleResponseBodyDataResults(ListGatewayCircuitBreakerRuleResponseBodyDataResults &&) = default ;
    ListGatewayCircuitBreakerRuleResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayCircuitBreakerRuleResponseBodyDataResults() = default ;
    ListGatewayCircuitBreakerRuleResponseBodyDataResults& operator=(const ListGatewayCircuitBreakerRuleResponseBodyDataResults &) = default ;
    ListGatewayCircuitBreakerRuleResponseBodyDataResults& operator=(ListGatewayCircuitBreakerRuleResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->behaviorType_ == nullptr
        && return this->bodyEncoding_ == nullptr && return this->enable_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr
        && return this->idList_ == nullptr && return this->limitMode_ == nullptr && return this->maxAllowedMs_ == nullptr && return this->minRequestAmount_ == nullptr && return this->recoveryTimeoutSec_ == nullptr
        && return this->responseAdditionalHeaders_ == nullptr && return this->responseContentBody_ == nullptr && return this->responseRedirectUrl_ == nullptr && return this->responseStatusCode_ == nullptr && return this->routeId_ == nullptr
        && return this->routeName_ == nullptr && return this->statDurationSec_ == nullptr && return this->strategy_ == nullptr && return this->triggerRatio_ == nullptr; };
    // behaviorType Field Functions 
    bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
    void deleteBehaviorType() { this->behaviorType_ = nullptr;};
    inline int32_t behaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


    // bodyEncoding Field Functions 
    bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
    void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
    inline int32_t bodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & idList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> idList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // limitMode Field Functions 
    bool hasLimitMode() const { return this->limitMode_ != nullptr;};
    void deleteLimitMode() { this->limitMode_ = nullptr;};
    inline int32_t limitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setLimitMode(int32_t limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


    // maxAllowedMs Field Functions 
    bool hasMaxAllowedMs() const { return this->maxAllowedMs_ != nullptr;};
    void deleteMaxAllowedMs() { this->maxAllowedMs_ = nullptr;};
    inline int32_t maxAllowedMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedMs_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setMaxAllowedMs(int32_t maxAllowedMs) { DARABONBA_PTR_SET_VALUE(maxAllowedMs_, maxAllowedMs) };


    // minRequestAmount Field Functions 
    bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
    void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
    inline int32_t minRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


    // recoveryTimeoutSec Field Functions 
    bool hasRecoveryTimeoutSec() const { return this->recoveryTimeoutSec_ != nullptr;};
    void deleteRecoveryTimeoutSec() { this->recoveryTimeoutSec_ = nullptr;};
    inline int32_t recoveryTimeoutSec() const { DARABONBA_PTR_GET_DEFAULT(recoveryTimeoutSec_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setRecoveryTimeoutSec(int32_t recoveryTimeoutSec) { DARABONBA_PTR_SET_VALUE(recoveryTimeoutSec_, recoveryTimeoutSec) };


    // responseAdditionalHeaders Field Functions 
    bool hasResponseAdditionalHeaders() const { return this->responseAdditionalHeaders_ != nullptr;};
    void deleteResponseAdditionalHeaders() { this->responseAdditionalHeaders_ = nullptr;};
    inline string responseAdditionalHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseAdditionalHeaders_, "") };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setResponseAdditionalHeaders(string responseAdditionalHeaders) { DARABONBA_PTR_SET_VALUE(responseAdditionalHeaders_, responseAdditionalHeaders) };


    // responseContentBody Field Functions 
    bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
    void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
    inline string responseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


    // responseRedirectUrl Field Functions 
    bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
    void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
    inline string responseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


    // responseStatusCode Field Functions 
    bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
    void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
    inline int32_t responseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // statDurationSec Field Functions 
    bool hasStatDurationSec() const { return this->statDurationSec_ != nullptr;};
    void deleteStatDurationSec() { this->statDurationSec_ = nullptr;};
    inline int32_t statDurationSec() const { DARABONBA_PTR_GET_DEFAULT(statDurationSec_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setStatDurationSec(int32_t statDurationSec) { DARABONBA_PTR_SET_VALUE(statDurationSec_, statDurationSec) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline int32_t strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // triggerRatio Field Functions 
    bool hasTriggerRatio() const { return this->triggerRatio_ != nullptr;};
    void deleteTriggerRatio() { this->triggerRatio_ = nullptr;};
    inline int32_t triggerRatio() const { DARABONBA_PTR_GET_DEFAULT(triggerRatio_, 0) };
    inline ListGatewayCircuitBreakerRuleResponseBodyDataResults& setTriggerRatio(int32_t triggerRatio) { DARABONBA_PTR_SET_VALUE(triggerRatio_, triggerRatio) };


  protected:
    std::shared_ptr<int32_t> behaviorType_ = nullptr;
    std::shared_ptr<int32_t> bodyEncoding_ = nullptr;
    std::shared_ptr<int32_t> enable_ = nullptr;
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<int64_t>> idList_ = nullptr;
    std::shared_ptr<int32_t> limitMode_ = nullptr;
    std::shared_ptr<int32_t> maxAllowedMs_ = nullptr;
    std::shared_ptr<int32_t> minRequestAmount_ = nullptr;
    std::shared_ptr<int32_t> recoveryTimeoutSec_ = nullptr;
    std::shared_ptr<string> responseAdditionalHeaders_ = nullptr;
    std::shared_ptr<string> responseContentBody_ = nullptr;
    std::shared_ptr<string> responseRedirectUrl_ = nullptr;
    std::shared_ptr<int32_t> responseStatusCode_ = nullptr;
    std::shared_ptr<int64_t> routeId_ = nullptr;
    std::shared_ptr<string> routeName_ = nullptr;
    std::shared_ptr<int32_t> statDurationSec_ = nullptr;
    std::shared_ptr<int32_t> strategy_ = nullptr;
    std::shared_ptr<int32_t> triggerRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
