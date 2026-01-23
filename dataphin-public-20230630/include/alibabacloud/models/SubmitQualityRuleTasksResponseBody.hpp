// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITQUALITYRULETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITQUALITYRULETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitQualityRuleTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitQualityRuleTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubmitResult, submitResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitQualityRuleTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubmitResult, submitResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitQualityRuleTasksResponseBody() = default ;
    SubmitQualityRuleTasksResponseBody(const SubmitQualityRuleTasksResponseBody &) = default ;
    SubmitQualityRuleTasksResponseBody(SubmitQualityRuleTasksResponseBody &&) = default ;
    SubmitQualityRuleTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitQualityRuleTasksResponseBody() = default ;
    SubmitQualityRuleTasksResponseBody& operator=(const SubmitQualityRuleTasksResponseBody &) = default ;
    SubmitQualityRuleTasksResponseBody& operator=(SubmitQualityRuleTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitResult& obj) { 
        DARABONBA_PTR_TO_JSON(RuleTaskIdList, ruleTaskIdList_);
        DARABONBA_PTR_TO_JSON(WatchTaskIdList, watchTaskIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitResult& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleTaskIdList, ruleTaskIdList_);
        DARABONBA_PTR_FROM_JSON(WatchTaskIdList, watchTaskIdList_);
      };
      SubmitResult() = default ;
      SubmitResult(const SubmitResult &) = default ;
      SubmitResult(SubmitResult &&) = default ;
      SubmitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitResult() = default ;
      SubmitResult& operator=(const SubmitResult &) = default ;
      SubmitResult& operator=(SubmitResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleTaskIdList_ == nullptr
        && this->watchTaskIdList_ == nullptr; };
      // ruleTaskIdList Field Functions 
      bool hasRuleTaskIdList() const { return this->ruleTaskIdList_ != nullptr;};
      void deleteRuleTaskIdList() { this->ruleTaskIdList_ = nullptr;};
      inline const vector<int64_t> & getRuleTaskIdList() const { DARABONBA_PTR_GET_CONST(ruleTaskIdList_, vector<int64_t>) };
      inline vector<int64_t> getRuleTaskIdList() { DARABONBA_PTR_GET(ruleTaskIdList_, vector<int64_t>) };
      inline SubmitResult& setRuleTaskIdList(const vector<int64_t> & ruleTaskIdList) { DARABONBA_PTR_SET_VALUE(ruleTaskIdList_, ruleTaskIdList) };
      inline SubmitResult& setRuleTaskIdList(vector<int64_t> && ruleTaskIdList) { DARABONBA_PTR_SET_RVALUE(ruleTaskIdList_, ruleTaskIdList) };


      // watchTaskIdList Field Functions 
      bool hasWatchTaskIdList() const { return this->watchTaskIdList_ != nullptr;};
      void deleteWatchTaskIdList() { this->watchTaskIdList_ = nullptr;};
      inline const vector<int64_t> & getWatchTaskIdList() const { DARABONBA_PTR_GET_CONST(watchTaskIdList_, vector<int64_t>) };
      inline vector<int64_t> getWatchTaskIdList() { DARABONBA_PTR_GET(watchTaskIdList_, vector<int64_t>) };
      inline SubmitResult& setWatchTaskIdList(const vector<int64_t> & watchTaskIdList) { DARABONBA_PTR_SET_VALUE(watchTaskIdList_, watchTaskIdList) };
      inline SubmitResult& setWatchTaskIdList(vector<int64_t> && watchTaskIdList) { DARABONBA_PTR_SET_RVALUE(watchTaskIdList_, watchTaskIdList) };


    protected:
      shared_ptr<vector<int64_t>> ruleTaskIdList_ {};
      shared_ptr<vector<int64_t>> watchTaskIdList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->submitResult_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitQualityRuleTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SubmitQualityRuleTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitQualityRuleTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitQualityRuleTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submitResult Field Functions 
    bool hasSubmitResult() const { return this->submitResult_ != nullptr;};
    void deleteSubmitResult() { this->submitResult_ = nullptr;};
    inline const SubmitQualityRuleTasksResponseBody::SubmitResult & getSubmitResult() const { DARABONBA_PTR_GET_CONST(submitResult_, SubmitQualityRuleTasksResponseBody::SubmitResult) };
    inline SubmitQualityRuleTasksResponseBody::SubmitResult getSubmitResult() { DARABONBA_PTR_GET(submitResult_, SubmitQualityRuleTasksResponseBody::SubmitResult) };
    inline SubmitQualityRuleTasksResponseBody& setSubmitResult(const SubmitQualityRuleTasksResponseBody::SubmitResult & submitResult) { DARABONBA_PTR_SET_VALUE(submitResult_, submitResult) };
    inline SubmitQualityRuleTasksResponseBody& setSubmitResult(SubmitQualityRuleTasksResponseBody::SubmitResult && submitResult) { DARABONBA_PTR_SET_RVALUE(submitResult_, submitResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitQualityRuleTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<SubmitQualityRuleTasksResponseBody::SubmitResult> submitResult_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
