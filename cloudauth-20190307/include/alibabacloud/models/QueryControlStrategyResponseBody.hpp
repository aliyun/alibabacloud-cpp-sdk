// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTROLSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTROLSTRATEGYRESPONSEBODY_HPP_
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
  class QueryControlStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryControlStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, QueryControlStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    QueryControlStrategyResponseBody() = default ;
    QueryControlStrategyResponseBody(const QueryControlStrategyResponseBody &) = default ;
    QueryControlStrategyResponseBody(QueryControlStrategyResponseBody &&) = default ;
    QueryControlStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryControlStrategyResponseBody() = default ;
    QueryControlStrategyResponseBody& operator=(const QueryControlStrategyResponseBody &) = default ;
    QueryControlStrategyResponseBody& operator=(QueryControlStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      virtual bool empty() const override { return this->apiName_ == nullptr
        && this->bizType_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->threshold_ == nullptr && this->userId_ == nullptr; };
      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline ResultObject& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline ResultObject& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline ResultObject& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // API name, same as the **ProductCode** of the authentication interface.
      shared_ptr<string> apiName_ {};
      // Rule configuration type:
      // - **QPS**: QPS greater than
      // - **SUCCESS_RATE_5_MIN**: Success rate in the last 5 minutes less than
      // - **RESP_TIME_5_MIN**: Average response time in the last 5 minutes greater than
      // - **AMOUNT_RISE**: Call volume growth ratio greater than
      // - **AMOUNT_FALL**: Call volume decline ratio less than
      // - **PASSED_RATE_1_HOUR**: Verification consistency rate in the last hour less than
      // - **PARAM_ERROR_RATE_1_HOUR**: Parameter error rate in the last hour greater than
      shared_ptr<string> bizType_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // Status:
      // - **disabled**: Disabled
      // - **normal**: Enabled
      shared_ptr<string> status_ {};
      // Alarm threshold for rule configuration.
      shared_ptr<double> threshold_ {};
      // User ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryControlStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryControlStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryControlStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<QueryControlStrategyResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<QueryControlStrategyResponseBody::ResultObject>) };
    inline vector<QueryControlStrategyResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<QueryControlStrategyResponseBody::ResultObject>) };
    inline QueryControlStrategyResponseBody& setResultObject(const vector<QueryControlStrategyResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline QueryControlStrategyResponseBody& setResultObject(vector<QueryControlStrategyResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Processing result.
    shared_ptr<vector<QueryControlStrategyResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
