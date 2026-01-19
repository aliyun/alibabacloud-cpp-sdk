// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleFluctuationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleFluctuationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleFluctuationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DescribeHitRuleFluctuationResponseBody() = default ;
    DescribeHitRuleFluctuationResponseBody(const DescribeHitRuleFluctuationResponseBody &) = default ;
    DescribeHitRuleFluctuationResponseBody(DescribeHitRuleFluctuationResponseBody &&) = default ;
    DescribeHitRuleFluctuationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleFluctuationResponseBody() = default ;
    DescribeHitRuleFluctuationResponseBody& operator=(const DescribeHitRuleFluctuationResponseBody &) = default ;
    DescribeHitRuleFluctuationResponseBody& operator=(DescribeHitRuleFluctuationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(todayNum, todayNum_);
        DARABONBA_PTR_TO_JSON(withinSevenDayNum, withinSevenDayNum_);
        DARABONBA_PTR_TO_JSON(withinThirtyDayNum, withinThirtyDayNum_);
        DARABONBA_PTR_TO_JSON(withinThreeDayNum, withinThreeDayNum_);
        DARABONBA_PTR_TO_JSON(yesterdayNum, yesterdayNum_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(todayNum, todayNum_);
        DARABONBA_PTR_FROM_JSON(withinSevenDayNum, withinSevenDayNum_);
        DARABONBA_PTR_FROM_JSON(withinThirtyDayNum, withinThirtyDayNum_);
        DARABONBA_PTR_FROM_JSON(withinThreeDayNum, withinThreeDayNum_);
        DARABONBA_PTR_FROM_JSON(yesterdayNum, yesterdayNum_);
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
      virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->todayNum_ == nullptr && this->withinSevenDayNum_ == nullptr && this->withinThirtyDayNum_ == nullptr && this->withinThreeDayNum_ == nullptr
        && this->yesterdayNum_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // todayNum Field Functions 
      bool hasTodayNum() const { return this->todayNum_ != nullptr;};
      void deleteTodayNum() { this->todayNum_ = nullptr;};
      inline int64_t getTodayNum() const { DARABONBA_PTR_GET_DEFAULT(todayNum_, 0L) };
      inline ResultObject& setTodayNum(int64_t todayNum) { DARABONBA_PTR_SET_VALUE(todayNum_, todayNum) };


      // withinSevenDayNum Field Functions 
      bool hasWithinSevenDayNum() const { return this->withinSevenDayNum_ != nullptr;};
      void deleteWithinSevenDayNum() { this->withinSevenDayNum_ = nullptr;};
      inline string getWithinSevenDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinSevenDayNum_, "") };
      inline ResultObject& setWithinSevenDayNum(string withinSevenDayNum) { DARABONBA_PTR_SET_VALUE(withinSevenDayNum_, withinSevenDayNum) };


      // withinThirtyDayNum Field Functions 
      bool hasWithinThirtyDayNum() const { return this->withinThirtyDayNum_ != nullptr;};
      void deleteWithinThirtyDayNum() { this->withinThirtyDayNum_ = nullptr;};
      inline string getWithinThirtyDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThirtyDayNum_, "") };
      inline ResultObject& setWithinThirtyDayNum(string withinThirtyDayNum) { DARABONBA_PTR_SET_VALUE(withinThirtyDayNum_, withinThirtyDayNum) };


      // withinThreeDayNum Field Functions 
      bool hasWithinThreeDayNum() const { return this->withinThreeDayNum_ != nullptr;};
      void deleteWithinThreeDayNum() { this->withinThreeDayNum_ = nullptr;};
      inline string getWithinThreeDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThreeDayNum_, "") };
      inline ResultObject& setWithinThreeDayNum(string withinThreeDayNum) { DARABONBA_PTR_SET_VALUE(withinThreeDayNum_, withinThreeDayNum) };


      // yesterdayNum Field Functions 
      bool hasYesterdayNum() const { return this->yesterdayNum_ != nullptr;};
      void deleteYesterdayNum() { this->yesterdayNum_ = nullptr;};
      inline int64_t getYesterdayNum() const { DARABONBA_PTR_GET_DEFAULT(yesterdayNum_, 0L) };
      inline ResultObject& setYesterdayNum(int64_t yesterdayNum) { DARABONBA_PTR_SET_VALUE(yesterdayNum_, yesterdayNum) };


    protected:
      // Policy ID
      shared_ptr<string> ruleId_ {};
      // Policy name
      shared_ptr<string> ruleName_ {};
      // Today\\"s count
      shared_ptr<int64_t> todayNum_ {};
      // Count within seven days
      shared_ptr<string> withinSevenDayNum_ {};
      // Count within thirty days
      shared_ptr<string> withinThirtyDayNum_ {};
      // Count within three days
      shared_ptr<string> withinThreeDayNum_ {};
      // Yesterday\\"s count
      shared_ptr<int64_t> yesterdayNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHitRuleFluctuationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeHitRuleFluctuationResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHitRuleFluctuationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHitRuleFluctuationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeHitRuleFluctuationResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeHitRuleFluctuationResponseBody::ResultObject>) };
    inline vector<DescribeHitRuleFluctuationResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeHitRuleFluctuationResponseBody::ResultObject>) };
    inline DescribeHitRuleFluctuationResponseBody& setResultObject(const vector<DescribeHitRuleFluctuationResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeHitRuleFluctuationResponseBody& setResultObject(vector<DescribeHitRuleFluctuationResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHitRuleFluctuationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code.
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeHitRuleFluctuationResponseBody::ResultObject>> resultObject_ {};
    // Whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
