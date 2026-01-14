// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFLOWRULERESPONSEBODY_HPP_
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
  class ListGatewayFlowRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFlowRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGatewayFlowRuleResponseBody() = default ;
    ListGatewayFlowRuleResponseBody(const ListGatewayFlowRuleResponseBody &) = default ;
    ListGatewayFlowRuleResponseBody(ListGatewayFlowRuleResponseBody &&) = default ;
    ListGatewayFlowRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFlowRuleResponseBody() = default ;
    ListGatewayFlowRuleResponseBody& operator=(const ListGatewayFlowRuleResponseBody &) = default ;
    ListGatewayFlowRuleResponseBody& operator=(ListGatewayFlowRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
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
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->behaviorType_ == nullptr
        && this->bodyEncoding_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr
        && this->idList_ == nullptr && this->limitMode_ == nullptr && this->responseAdditionalHeaders_ == nullptr && this->responseContentBody_ == nullptr && this->responseRedirectUrl_ == nullptr
        && this->responseStatusCode_ == nullptr && this->routeId_ == nullptr && this->routeName_ == nullptr && this->statDurationMs_ == nullptr && this->threshold_ == nullptr; };
        // behaviorType Field Functions 
        bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
        void deleteBehaviorType() { this->behaviorType_ = nullptr;};
        inline int32_t getBehaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
        inline Results& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


        // bodyEncoding Field Functions 
        bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
        void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
        inline int32_t getBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
        inline Results& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
        inline Results& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Results& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Results& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Results& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idList Field Functions 
        bool hasIdList() const { return this->idList_ != nullptr;};
        void deleteIdList() { this->idList_ = nullptr;};
        inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
        inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
        inline Results& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
        inline Results& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


        // limitMode Field Functions 
        bool hasLimitMode() const { return this->limitMode_ != nullptr;};
        void deleteLimitMode() { this->limitMode_ = nullptr;};
        inline int32_t getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, 0) };
        inline Results& setLimitMode(int32_t limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


        // responseAdditionalHeaders Field Functions 
        bool hasResponseAdditionalHeaders() const { return this->responseAdditionalHeaders_ != nullptr;};
        void deleteResponseAdditionalHeaders() { this->responseAdditionalHeaders_ = nullptr;};
        inline string getResponseAdditionalHeaders() const { DARABONBA_PTR_GET_DEFAULT(responseAdditionalHeaders_, "") };
        inline Results& setResponseAdditionalHeaders(string responseAdditionalHeaders) { DARABONBA_PTR_SET_VALUE(responseAdditionalHeaders_, responseAdditionalHeaders) };


        // responseContentBody Field Functions 
        bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
        void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
        inline string getResponseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
        inline Results& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


        // responseRedirectUrl Field Functions 
        bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
        void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
        inline string getResponseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
        inline Results& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


        // responseStatusCode Field Functions 
        bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
        void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
        inline int32_t getResponseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
        inline Results& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
        inline Results& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        // routeName Field Functions 
        bool hasRouteName() const { return this->routeName_ != nullptr;};
        void deleteRouteName() { this->routeName_ = nullptr;};
        inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
        inline Results& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


        // statDurationMs Field Functions 
        bool hasStatDurationMs() const { return this->statDurationMs_ != nullptr;};
        void deleteStatDurationMs() { this->statDurationMs_ = nullptr;};
        inline int32_t getStatDurationMs() const { DARABONBA_PTR_GET_DEFAULT(statDurationMs_, 0) };
        inline Results& setStatDurationMs(int32_t statDurationMs) { DARABONBA_PTR_SET_VALUE(statDurationMs_, statDurationMs) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
        inline Results& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        shared_ptr<int32_t> behaviorType_ {};
        shared_ptr<int32_t> bodyEncoding_ {};
        shared_ptr<int32_t> enable_ {};
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<vector<int64_t>> idList_ {};
        shared_ptr<int32_t> limitMode_ {};
        shared_ptr<string> responseAdditionalHeaders_ {};
        shared_ptr<string> responseContentBody_ {};
        shared_ptr<string> responseRedirectUrl_ {};
        shared_ptr<int32_t> responseStatusCode_ {};
        shared_ptr<int64_t> routeId_ {};
        shared_ptr<string> routeName_ {};
        shared_ptr<int32_t> statDurationMs_ {};
        shared_ptr<int32_t> threshold_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(BehaviorType, behaviorType_);
          DARABONBA_PTR_TO_JSON(BodyEncoding, bodyEncoding_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ResponseContentBody, responseContentBody_);
          DARABONBA_PTR_TO_JSON(ResponseRedirectUrl, responseRedirectUrl_);
          DARABONBA_PTR_TO_JSON(ResponseStatusCode, responseStatusCode_);
          DARABONBA_PTR_TO_JSON(RouteId, routeId_);
          DARABONBA_PTR_TO_JSON(RouteName, routeName_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(BehaviorType, behaviorType_);
          DARABONBA_PTR_FROM_JSON(BodyEncoding, bodyEncoding_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ResponseContentBody, responseContentBody_);
          DARABONBA_PTR_FROM_JSON(ResponseRedirectUrl, responseRedirectUrl_);
          DARABONBA_PTR_FROM_JSON(ResponseStatusCode, responseStatusCode_);
          DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
          DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->behaviorType_ == nullptr
        && this->bodyEncoding_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr
        && this->responseContentBody_ == nullptr && this->responseRedirectUrl_ == nullptr && this->responseStatusCode_ == nullptr && this->routeId_ == nullptr && this->routeName_ == nullptr
        && this->threshold_ == nullptr; };
        // behaviorType Field Functions 
        bool hasBehaviorType() const { return this->behaviorType_ != nullptr;};
        void deleteBehaviorType() { this->behaviorType_ = nullptr;};
        inline int32_t getBehaviorType() const { DARABONBA_PTR_GET_DEFAULT(behaviorType_, 0) };
        inline Result& setBehaviorType(int32_t behaviorType) { DARABONBA_PTR_SET_VALUE(behaviorType_, behaviorType) };


        // bodyEncoding Field Functions 
        bool hasBodyEncoding() const { return this->bodyEncoding_ != nullptr;};
        void deleteBodyEncoding() { this->bodyEncoding_ = nullptr;};
        inline int32_t getBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(bodyEncoding_, 0) };
        inline Result& setBodyEncoding(int32_t bodyEncoding) { DARABONBA_PTR_SET_VALUE(bodyEncoding_, bodyEncoding) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
        inline Result& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Result& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // responseContentBody Field Functions 
        bool hasResponseContentBody() const { return this->responseContentBody_ != nullptr;};
        void deleteResponseContentBody() { this->responseContentBody_ = nullptr;};
        inline string getResponseContentBody() const { DARABONBA_PTR_GET_DEFAULT(responseContentBody_, "") };
        inline Result& setResponseContentBody(string responseContentBody) { DARABONBA_PTR_SET_VALUE(responseContentBody_, responseContentBody) };


        // responseRedirectUrl Field Functions 
        bool hasResponseRedirectUrl() const { return this->responseRedirectUrl_ != nullptr;};
        void deleteResponseRedirectUrl() { this->responseRedirectUrl_ = nullptr;};
        inline string getResponseRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(responseRedirectUrl_, "") };
        inline Result& setResponseRedirectUrl(string responseRedirectUrl) { DARABONBA_PTR_SET_VALUE(responseRedirectUrl_, responseRedirectUrl) };


        // responseStatusCode Field Functions 
        bool hasResponseStatusCode() const { return this->responseStatusCode_ != nullptr;};
        void deleteResponseStatusCode() { this->responseStatusCode_ = nullptr;};
        inline int32_t getResponseStatusCode() const { DARABONBA_PTR_GET_DEFAULT(responseStatusCode_, 0) };
        inline Result& setResponseStatusCode(int32_t responseStatusCode) { DARABONBA_PTR_SET_VALUE(responseStatusCode_, responseStatusCode) };


        // routeId Field Functions 
        bool hasRouteId() const { return this->routeId_ != nullptr;};
        void deleteRouteId() { this->routeId_ = nullptr;};
        inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
        inline Result& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        // routeName Field Functions 
        bool hasRouteName() const { return this->routeName_ != nullptr;};
        void deleteRouteName() { this->routeName_ = nullptr;};
        inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
        inline Result& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
        inline Result& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        shared_ptr<int32_t> behaviorType_ {};
        shared_ptr<int32_t> bodyEncoding_ {};
        shared_ptr<int32_t> enable_ {};
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> responseContentBody_ {};
        shared_ptr<string> responseRedirectUrl_ {};
        shared_ptr<int32_t> responseStatusCode_ {};
        shared_ptr<int64_t> routeId_ {};
        shared_ptr<string> routeName_ {};
        shared_ptr<int32_t> threshold_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->results_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<vector<Data::Results>> results_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayFlowRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayFlowRuleResponseBody::Data) };
    inline ListGatewayFlowRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayFlowRuleResponseBody::Data) };
    inline ListGatewayFlowRuleResponseBody& setData(const ListGatewayFlowRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayFlowRuleResponseBody& setData(ListGatewayFlowRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayFlowRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListGatewayFlowRuleResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
