// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYFLOWRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYFLOWRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateGatewayFlowRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayFlowRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayFlowRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
      DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
      DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
      DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateGatewayFlowRuleRequest() = default ;
    CreateGatewayFlowRuleRequest(const CreateGatewayFlowRuleRequest &) = default ;
    CreateGatewayFlowRuleRequest(CreateGatewayFlowRuleRequest &&) = default ;
    CreateGatewayFlowRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayFlowRuleRequest() = default ;
    CreateGatewayFlowRuleRequest& operator=(const CreateGatewayFlowRuleRequest &) = default ;
    CreateGatewayFlowRuleRequest& operator=(CreateGatewayFlowRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->behaviorType_ == nullptr && this->bodyEncoding_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->responseContentBody_ == nullptr && this->responseRedirectUrl_ == nullptr && this->responseStatusCode_ == nullptr && this->routeId_ == nullptr && this->routeName_ == nullptr
        && this->threshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateGatewayFlowRuleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // behaviorType Field Functions 
    bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
    void deleteBehaviorType() { this->behaviorType_ = nullptr;};
    inline int32_t getBehaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
    inline CreateGatewayFlowRuleRequest& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


    // bodyEncoding Field Functions 
    bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
    void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
    inline int32_t getBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
    inline CreateGatewayFlowRuleRequest& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline CreateGatewayFlowRuleRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline CreateGatewayFlowRuleRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline CreateGatewayFlowRuleRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // responseContentBody Field Functions 
    bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
    void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
    inline string getResponseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
    inline CreateGatewayFlowRuleRequest& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


    // responseRedirectUrl Field Functions 
    bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
    void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
    inline string getResponseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
    inline CreateGatewayFlowRuleRequest& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


    // responseStatusCode Field Functions 
    bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
    void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
    inline int32_t getResponseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
    inline CreateGatewayFlowRuleRequest& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline CreateGatewayFlowRuleRequest& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline CreateGatewayFlowRuleRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline CreateGatewayFlowRuleRequest& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // The type of the web fallback behavior.
    // 
    // 0: returns the specified content.
    // 
    // 1: redirects to the specified page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> behaviorType_ {};
    // The encoding format.
    // 
    // 0: normal text
    // 
    // 1: JSON
    shared_ptr<int32_t> bodyEncoding_ {};
    // Specifies whether to enable the throttling rule.
    // 
    // 0: disables the throttling rule.
    // 
    // 1: enables the throttling rule.
    // 
    // This parameter is required.
    shared_ptr<int32_t> enable_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // The HTTP text to be returned.
    shared_ptr<string> responseContentBody_ {};
    // The address to be redirected to.
    shared_ptr<string> responseRedirectUrl_ {};
    // The HTTP status code.
    shared_ptr<int32_t> responseStatusCode_ {};
    // The ID of the route.
    // 
    // This parameter is required.
    shared_ptr<int64_t> routeId_ {};
    // The name of the routing rule.
    // 
    // This parameter is required.
    shared_ptr<string> routeName_ {};
    // The overall queries per second (QPS) threshold.
    // 
    // This parameter is required.
    shared_ptr<int32_t> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
