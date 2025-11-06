// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYFLOWRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYFLOWRULERESPONSEBODYDATA_HPP_
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
  class UpdateGatewayFlowRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(LimitMode, limitMode_);
      DARABONBA_PTR_TO_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
      DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(StatDurationMs, statDurationMs_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayFlowRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(LimitMode, limitMode_);
      DARABONBA_PTR_FROM_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
      DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(StatDurationMs, statDurationMs_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    UpdateGatewayFlowRuleResponseBodyData() = default ;
    UpdateGatewayFlowRuleResponseBodyData(const UpdateGatewayFlowRuleResponseBodyData &) = default ;
    UpdateGatewayFlowRuleResponseBodyData(UpdateGatewayFlowRuleResponseBodyData &&) = default ;
    UpdateGatewayFlowRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayFlowRuleResponseBodyData() = default ;
    UpdateGatewayFlowRuleResponseBodyData& operator=(const UpdateGatewayFlowRuleResponseBodyData &) = default ;
    UpdateGatewayFlowRuleResponseBodyData& operator=(UpdateGatewayFlowRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->behaviorType_ == nullptr
        && return this->bodyEncoding_ == nullptr && return this->enable_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr
        && return this->idList_ == nullptr && return this->limitMode_ == nullptr && return this->responseAdditionalHeaders_ == nullptr && return this->responseContentBody_ == nullptr && return this->responseRedirectUrl_ == nullptr
        && return this->responseStatusCode_ == nullptr && return this->routeId_ == nullptr && return this->routeName_ == nullptr && return this->statDurationMs_ == nullptr && return this->threshold_ == nullptr; };
    // behaviorType Field Functions 
    bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
    void deleteBehaviorType() { this->behaviorType_ = nullptr;};
    inline int32_t behaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


    // bodyEncoding Field Functions 
    bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
    void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
    inline int32_t bodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayFlowRuleResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayFlowRuleResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayFlowRuleResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & idList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> idList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline UpdateGatewayFlowRuleResponseBodyData& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline UpdateGatewayFlowRuleResponseBodyData& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // limitMode Field Functions 
    bool hasLimitMode() const { return this->limitMode_ != nullptr;};
    void deleteLimitMode() { this->limitMode_ = nullptr;};
    inline int32_t limitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setLimitMode(int32_t limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


    // responseAdditionalHeaders Field Functions 
    bool hasResponseAdditionalHeaders() const { return this->responseAdditionalHeaders_ != nullptr;};
    void deleteResponseAdditionalHeaders() { this->responseAdditionalHeaders_ = nullptr;};
    inline string responseAdditionalHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseAdditionalHeaders_, "") };
    inline UpdateGatewayFlowRuleResponseBodyData& setResponseAdditionalHeaders(string responseAdditionalHeaders) { DARABONBA_PTR_SET_VALUE(responseAdditionalHeaders_, responseAdditionalHeaders) };


    // responseContentBody Field Functions 
    bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
    void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
    inline string responseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
    inline UpdateGatewayFlowRuleResponseBodyData& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


    // responseRedirectUrl Field Functions 
    bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
    void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
    inline string responseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
    inline UpdateGatewayFlowRuleResponseBodyData& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


    // responseStatusCode Field Functions 
    bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
    void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
    inline int32_t responseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline UpdateGatewayFlowRuleResponseBodyData& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline UpdateGatewayFlowRuleResponseBodyData& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // statDurationMs Field Functions 
    bool hasStatDurationMs() const { return this->statDurationMs_ != nullptr;};
    void deleteStatDurationMs() { this->statDurationMs_ = nullptr;};
    inline int32_t statDurationMs() const { DARABONBA_PTR_GET_DEFAULT(statDurationMs_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setStatDurationMs(int32_t statDurationMs) { DARABONBA_PTR_SET_VALUE(statDurationMs_, statDurationMs) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline UpdateGatewayFlowRuleResponseBodyData& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<int32_t> behaviorType_ = nullptr;
    std::shared_ptr<int32_t> bodyEncoding_ = nullptr;
    std::shared_ptr<int32_t> enable_ = nullptr;
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<int64_t>> idList_ = nullptr;
    std::shared_ptr<int32_t> limitMode_ = nullptr;
    std::shared_ptr<string> responseAdditionalHeaders_ = nullptr;
    std::shared_ptr<string> responseContentBody_ = nullptr;
    std::shared_ptr<string> responseRedirectUrl_ = nullptr;
    std::shared_ptr<int32_t> responseStatusCode_ = nullptr;
    std::shared_ptr<int64_t> routeId_ = nullptr;
    std::shared_ptr<string> routeName_ = nullptr;
    std::shared_ptr<int32_t> statDurationMs_ = nullptr;
    std::shared_ptr<int32_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
