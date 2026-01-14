// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFLOWRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFLOWRULESRESPONSEBODY_HPP_
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
  class ListWebFlowRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFlowRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFlowRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWebFlowRulesResponseBody() = default ;
    ListWebFlowRulesResponseBody(const ListWebFlowRulesResponseBody &) = default ;
    ListWebFlowRulesResponseBody(ListWebFlowRulesResponseBody &&) = default ;
    ListWebFlowRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFlowRulesResponseBody() = default ;
    ListWebFlowRulesResponseBody& operator=(const ListWebFlowRulesResponseBody &) = default ;
    ListWebFlowRulesResponseBody& operator=(ListWebFlowRulesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Burst, burst_);
          DARABONBA_PTR_TO_JSON(ControlBehavior, controlBehavior_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(FallbackObject, fallbackObject_);
          DARABONBA_PTR_TO_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
          DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(ParamItem, paramItem_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(ResourceMode, resourceMode_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Burst, burst_);
          DARABONBA_PTR_FROM_JSON(ControlBehavior, controlBehavior_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(FallbackObject, fallbackObject_);
          DARABONBA_PTR_FROM_JSON(MaxQueueingTimeMs, maxQueueingTimeMs_);
          DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(ParamItem, paramItem_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(ResourceMode, resourceMode_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
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
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->burst_ == nullptr && this->controlBehavior_ == nullptr && this->enable_ == nullptr && this->fallbackObject_ == nullptr
        && this->maxQueueingTimeMs_ == nullptr && this->metricType_ == nullptr && this->namespace_ == nullptr && this->paramItem_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceMode_ == nullptr && this->resourceType_ == nullptr && this->ruleId_ == nullptr && this->statIntervalMs_ == nullptr
        && this->threshold_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // burst Field Functions 
        bool hasBurst() const { return this->burst_ != nullptr;};
        void deleteBurst() { this->burst_ = nullptr;};
        inline int32_t getBurst() const { DARABONBA_PTR_GET_DEFAULT(burst_, 0) };
        inline Result& setBurst(int32_t burst) { DARABONBA_PTR_SET_VALUE(burst_, burst) };


        // controlBehavior Field Functions 
        bool hasControlBehavior() const { return this->controlBehavior_ != nullptr;};
        void deleteControlBehavior() { this->controlBehavior_ = nullptr;};
        inline int32_t getControlBehavior() const { DARABONBA_PTR_GET_DEFAULT(controlBehavior_, 0) };
        inline Result& setControlBehavior(int32_t controlBehavior) { DARABONBA_PTR_SET_VALUE(controlBehavior_, controlBehavior) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Result& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // fallbackObject Field Functions 
        bool hasFallbackObject() const { return this->fallbackObject_ != nullptr;};
        void deleteFallbackObject() { this->fallbackObject_ = nullptr;};
        inline string getFallbackObject() const { DARABONBA_PTR_GET_DEFAULT(fallbackObject_, "") };
        inline Result& setFallbackObject(string fallbackObject) { DARABONBA_PTR_SET_VALUE(fallbackObject_, fallbackObject) };


        // maxQueueingTimeMs Field Functions 
        bool hasMaxQueueingTimeMs() const { return this->maxQueueingTimeMs_ != nullptr;};
        void deleteMaxQueueingTimeMs() { this->maxQueueingTimeMs_ = nullptr;};
        inline int32_t getMaxQueueingTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxQueueingTimeMs_, 0) };
        inline Result& setMaxQueueingTimeMs(int32_t maxQueueingTimeMs) { DARABONBA_PTR_SET_VALUE(maxQueueingTimeMs_, maxQueueingTimeMs) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline int32_t getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, 0) };
        inline Result& setMetricType(int32_t metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Result& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // paramItem Field Functions 
        bool hasParamItem() const { return this->paramItem_ != nullptr;};
        void deleteParamItem() { this->paramItem_ = nullptr;};
        inline string getParamItem() const { DARABONBA_PTR_GET_DEFAULT(paramItem_, "") };
        inline Result& setParamItem(string paramItem) { DARABONBA_PTR_SET_VALUE(paramItem_, paramItem) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline Result& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


        // resourceMode Field Functions 
        bool hasResourceMode() const { return this->resourceMode_ != nullptr;};
        void deleteResourceMode() { this->resourceMode_ = nullptr;};
        inline int32_t getResourceMode() const { DARABONBA_PTR_GET_DEFAULT(resourceMode_, 0) };
        inline Result& setResourceMode(int32_t resourceMode) { DARABONBA_PTR_SET_VALUE(resourceMode_, resourceMode) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
        inline Result& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Result& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // statIntervalMs Field Functions 
        bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
        void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
        inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
        inline Result& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline Result& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int32_t> burst_ {};
        shared_ptr<int32_t> controlBehavior_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> fallbackObject_ {};
        shared_ptr<int32_t> maxQueueingTimeMs_ {};
        shared_ptr<int32_t> metricType_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<string> paramItem_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resource_ {};
        shared_ptr<int32_t> resourceMode_ {};
        shared_ptr<int32_t> resourceType_ {};
        shared_ptr<string> ruleId_ {};
        shared_ptr<int32_t> statIntervalMs_ {};
        shared_ptr<float> threshold_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
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


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListWebFlowRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWebFlowRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWebFlowRulesResponseBody::Data) };
    inline ListWebFlowRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWebFlowRulesResponseBody::Data) };
    inline ListWebFlowRulesResponseBody& setData(const ListWebFlowRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWebFlowRulesResponseBody& setData(ListWebFlowRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListWebFlowRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWebFlowRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWebFlowRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWebFlowRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListWebFlowRulesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
