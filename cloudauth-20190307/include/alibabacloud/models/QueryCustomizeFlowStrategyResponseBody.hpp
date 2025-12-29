// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMIZEFLOWSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMIZEFLOWSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryCustomizeFlowStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomizeFlowStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomizeFlowStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomizeFlowStrategyResponseBody() = default ;
    QueryCustomizeFlowStrategyResponseBody(const QueryCustomizeFlowStrategyResponseBody &) = default ;
    QueryCustomizeFlowStrategyResponseBody(QueryCustomizeFlowStrategyResponseBody &&) = default ;
    QueryCustomizeFlowStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomizeFlowStrategyResponseBody() = default ;
    QueryCustomizeFlowStrategyResponseBody& operator=(const QueryCustomizeFlowStrategyResponseBody &) = default ;
    QueryCustomizeFlowStrategyResponseBody& operator=(QueryCustomizeFlowStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AccumulateKey, accumulateKey_);
        DARABONBA_PTR_TO_JSON(AccumulateWindow, accumulateWindow_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(FlowType, flowType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AccumulateKey, accumulateKey_);
        DARABONBA_PTR_FROM_JSON(AccumulateWindow, accumulateWindow_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accumulateKey_ == nullptr
        && this->accumulateWindow_ == nullptr && this->apiName_ == nullptr && this->flowType_ == nullptr && this->id_ == nullptr && this->operation_ == nullptr
        && this->status_ == nullptr && this->threshold_ == nullptr && this->userId_ == nullptr; };
      // accumulateKey Field Functions 
      bool hasAccumulateKey() const { return this->accumulateKey_ != nullptr;};
      void deleteAccumulateKey() { this->accumulateKey_ = nullptr;};
      inline string getAccumulateKey() const { DARABONBA_PTR_GET_DEFAULT(accumulateKey_, "") };
      inline ResultObject& setAccumulateKey(string accumulateKey) { DARABONBA_PTR_SET_VALUE(accumulateKey_, accumulateKey) };


      // accumulateWindow Field Functions 
      bool hasAccumulateWindow() const { return this->accumulateWindow_ != nullptr;};
      void deleteAccumulateWindow() { this->accumulateWindow_ = nullptr;};
      inline string getAccumulateWindow() const { DARABONBA_PTR_GET_DEFAULT(accumulateWindow_, "") };
      inline ResultObject& setAccumulateWindow(string accumulateWindow) { DARABONBA_PTR_SET_VALUE(accumulateWindow_, accumulateWindow) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline ResultObject& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // flowType Field Functions 
      bool hasFlowType() const { return this->flowType_ != nullptr;};
      void deleteFlowType() { this->flowType_ = nullptr;};
      inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
      inline ResultObject& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResultObject& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline ResultObject& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
      inline ResultObject& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ResultObject& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // AccumulateKey
      shared_ptr<string> accumulateKey_ {};
      // Flow control statistical window, unit: **minutes**.
      shared_ptr<string> accumulateWindow_ {};
      // API name, same as **ProductCode**.
      shared_ptr<string> apiName_ {};
      // Flow type:
      // - **ACCUMULATE**: ID card reappears
      // - **PASSED_RATE**: Pass rate less than
      // - **SUB_CODE_205**: Authentication failed and liveness attack 205 ratio greater than
      // - **SUB_CODE_206**: Authentication failed and liveness attack 206 ratio greater than
      shared_ptr<string> flowType_ {};
      // Rule ID.
      shared_ptr<string> id_ {};
      // Operation.
      shared_ptr<string> operation_ {};
      // Status:
      // - **disabled**: Disabled
      // - **normal**: Enabled
      shared_ptr<string> status_ {};
      // Threshold.
      shared_ptr<string> threshold_ {};
      // User ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCustomizeFlowStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryCustomizeFlowStrategyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomizeFlowStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomizeFlowStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<QueryCustomizeFlowStrategyResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<QueryCustomizeFlowStrategyResponseBody::ResultObject>) };
    inline vector<QueryCustomizeFlowStrategyResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<QueryCustomizeFlowStrategyResponseBody::ResultObject>) };
    inline QueryCustomizeFlowStrategyResponseBody& setResultObject(const vector<QueryCustomizeFlowStrategyResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline QueryCustomizeFlowStrategyResponseBody& setResultObject(vector<QueryCustomizeFlowStrategyResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomizeFlowStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Processing result.
    shared_ptr<vector<QueryCustomizeFlowStrategyResponseBody::ResultObject>> resultObject_ {};
    // Whether the response was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
