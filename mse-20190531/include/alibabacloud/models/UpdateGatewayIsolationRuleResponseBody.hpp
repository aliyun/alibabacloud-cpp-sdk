// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYISOLATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYISOLATIONRULERESPONSEBODY_HPP_
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
  class UpdateGatewayIsolationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayIsolationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayIsolationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateGatewayIsolationRuleResponseBody() = default ;
    UpdateGatewayIsolationRuleResponseBody(const UpdateGatewayIsolationRuleResponseBody &) = default ;
    UpdateGatewayIsolationRuleResponseBody(UpdateGatewayIsolationRuleResponseBody &&) = default ;
    UpdateGatewayIsolationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayIsolationRuleResponseBody() = default ;
    UpdateGatewayIsolationRuleResponseBody& operator=(const UpdateGatewayIsolationRuleResponseBody &) = default ;
    UpdateGatewayIsolationRuleResponseBody& operator=(UpdateGatewayIsolationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
        DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdList, idList_);
        DARABONBA_PTR_TO_JSON(LimitMode, limitMode_);
        DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_TO_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
        DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
        DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
        DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
        DARABONBA_PTR_TO_JSON(RouteId, routeId_);
        DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
        DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdList, idList_);
        DARABONBA_PTR_FROM_JSON(LimitMode, limitMode_);
        DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
        DARABONBA_PTR_FROM_JSON(ResponseAdditionalHeaders, responseAdditionalHeaders_);
        DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
        DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
        DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
        DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
        DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->behaviorType_ == nullptr
        && this->bodyEncoding_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr
        && this->idList_ == nullptr && this->limitMode_ == nullptr && this->maxConcurrency_ == nullptr && this->responseAdditionalHeaders_ == nullptr && this->responseContentBody_ == nullptr
        && this->responseRedirectUrl_ == nullptr && this->responseStatusCode_ == nullptr && this->routeId_ == nullptr && this->routeName_ == nullptr; };
      // behaviorType Field Functions 
      bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
      void deleteBehaviorType() { this->behaviorType_ = nullptr;};
      inline int32_t getBehaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
      inline Data& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


      // bodyEncoding Field Functions 
      bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
      void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
      inline int32_t getBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
      inline Data& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline Data& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idList Field Functions 
      bool hasIdList() const { return this->idList_ != nullptr;};
      void deleteIdList() { this->idList_ = nullptr;};
      inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
      inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
      inline Data& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
      inline Data& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


      // limitMode Field Functions 
      bool hasLimitMode() const { return this->limitMode_ != nullptr;};
      void deleteLimitMode() { this->limitMode_ = nullptr;};
      inline int32_t getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, 0) };
      inline Data& setLimitMode(int32_t limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


      // maxConcurrency Field Functions 
      bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
      void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
      inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
      inline Data& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


      // responseAdditionalHeaders Field Functions 
      bool hasResponseAdditionalHeaders() const { return this->responseAdditionalHeaders_ != nullptr;};
      void deleteResponseAdditionalHeaders() { this->responseAdditionalHeaders_ = nullptr;};
      inline string getResponseAdditionalHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseAdditionalHeaders_, "") };
      inline Data& setResponseAdditionalHeaders(string responseAdditionalHeaders) { DARABONBA_PTR_SET_VALUE(responseAdditionalHeaders_, responseAdditionalHeaders) };


      // responseContentBody Field Functions 
      bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
      void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
      inline string getResponseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
      inline Data& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


      // responseRedirectUrl Field Functions 
      bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
      void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
      inline string getResponseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
      inline Data& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


      // responseStatusCode Field Functions 
      bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
      void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
      inline int32_t getResponseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
      inline Data& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


      // routeId Field Functions 
      bool hasRouteId() const { return this->routeId_ != nullptr;};
      void deleteRouteId() { this->routeId_ = nullptr;};
      inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
      inline Data& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


      // routeName Field Functions 
      bool hasRouteName() const { return this->routeName_ != nullptr;};
      void deleteRouteName() { this->routeName_ = nullptr;};
      inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
      inline Data& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    protected:
      shared_ptr<int32_t> behaviorType_ {};
      shared_ptr<int32_t> bodyEncoding_ {};
      shared_ptr<int32_t> enable_ {};
      shared_ptr<int64_t> gatewayId_ {};
      shared_ptr<string> gatewayUniqueId_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<int64_t>> idList_ {};
      shared_ptr<int32_t> limitMode_ {};
      shared_ptr<int32_t> maxConcurrency_ {};
      shared_ptr<string> responseAdditionalHeaders_ {};
      shared_ptr<string> responseContentBody_ {};
      shared_ptr<string> responseRedirectUrl_ {};
      shared_ptr<int32_t> responseStatusCode_ {};
      shared_ptr<int64_t> routeId_ {};
      shared_ptr<string> routeName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateGatewayIsolationRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateGatewayIsolationRuleResponseBody::Data) };
    inline UpdateGatewayIsolationRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateGatewayIsolationRuleResponseBody::Data) };
    inline UpdateGatewayIsolationRuleResponseBody& setData(const UpdateGatewayIsolationRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateGatewayIsolationRuleResponseBody& setData(UpdateGatewayIsolationRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGatewayIsolationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<UpdateGatewayIsolationRuleResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
