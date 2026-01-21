// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailedListResult, failedListResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailedListResult, failedListResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutResourceMetricRulesResponseBody() = default ;
    PutResourceMetricRulesResponseBody(const PutResourceMetricRulesResponseBody &) = default ;
    PutResourceMetricRulesResponseBody(PutResourceMetricRulesResponseBody &&) = default ;
    PutResourceMetricRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesResponseBody() = default ;
    PutResourceMetricRulesResponseBody& operator=(const PutResourceMetricRulesResponseBody &) = default ;
    PutResourceMetricRulesResponseBody& operator=(PutResourceMetricRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedListResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedListResult& obj) { 
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, FailedListResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Target, target_);
      };
      FailedListResult() = default ;
      FailedListResult(const FailedListResult &) = default ;
      FailedListResult(FailedListResult &&) = default ;
      FailedListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedListResult() = default ;
      FailedListResult& operator=(const FailedListResult &) = default ;
      FailedListResult& operator=(FailedListResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Success, success_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Success, success_);
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
          virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Result& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // success Field Functions 
          bool hasSuccess() const { return this->success_ != nullptr;};
          void deleteSuccess() { this->success_ = nullptr;};
          inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
          inline Result& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        protected:
          // The response code.
          shared_ptr<string> code_ {};
          // The error message returned.
          shared_ptr<string> message_ {};
          // Indicates whether the request was successful. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> success_ {};
        };

        virtual bool empty() const override { return this->result_ == nullptr
        && this->ruleId_ == nullptr; };
        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const Target::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Target::Result) };
        inline Target::Result getResult() { DARABONBA_PTR_GET(result_, Target::Result) };
        inline Target& setResult(const Target::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Target& setResult(Target::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Target& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      protected:
        // The alert rule that failed to be created.
        shared_ptr<Target::Result> result_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
      };

      virtual bool empty() const override { return this->target_ == nullptr; };
      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const vector<FailedListResult::Target> & getTarget() const { DARABONBA_PTR_GET_CONST(target_, vector<FailedListResult::Target>) };
      inline vector<FailedListResult::Target> getTarget() { DARABONBA_PTR_GET(target_, vector<FailedListResult::Target>) };
      inline FailedListResult& setTarget(const vector<FailedListResult::Target> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline FailedListResult& setTarget(vector<FailedListResult::Target> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    protected:
      shared_ptr<vector<FailedListResult::Target>> target_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->failedListResult_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutResourceMetricRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failedListResult Field Functions 
    bool hasFailedListResult() const { return this->failedListResult_ != nullptr;};
    void deleteFailedListResult() { this->failedListResult_ = nullptr;};
    inline const PutResourceMetricRulesResponseBody::FailedListResult & getFailedListResult() const { DARABONBA_PTR_GET_CONST(failedListResult_, PutResourceMetricRulesResponseBody::FailedListResult) };
    inline PutResourceMetricRulesResponseBody::FailedListResult getFailedListResult() { DARABONBA_PTR_GET(failedListResult_, PutResourceMetricRulesResponseBody::FailedListResult) };
    inline PutResourceMetricRulesResponseBody& setFailedListResult(const PutResourceMetricRulesResponseBody::FailedListResult & failedListResult) { DARABONBA_PTR_SET_VALUE(failedListResult_, failedListResult) };
    inline PutResourceMetricRulesResponseBody& setFailedListResult(PutResourceMetricRulesResponseBody::FailedListResult && failedListResult) { DARABONBA_PTR_SET_RVALUE(failedListResult_, failedListResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutResourceMetricRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutResourceMetricRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutResourceMetricRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The alert rules that failed to be created for the resource.
    shared_ptr<PutResourceMetricRulesResponseBody::FailedListResult> failedListResult_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
