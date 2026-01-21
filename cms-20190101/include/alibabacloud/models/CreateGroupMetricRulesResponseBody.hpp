// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODY_HPP_
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
  class CreateGroupMetricRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateGroupMetricRulesResponseBody() = default ;
    CreateGroupMetricRulesResponseBody(const CreateGroupMetricRulesResponseBody &) = default ;
    CreateGroupMetricRulesResponseBody(CreateGroupMetricRulesResponseBody &&) = default ;
    CreateGroupMetricRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesResponseBody() = default ;
    CreateGroupMetricRulesResponseBody& operator=(const CreateGroupMetricRulesResponseBody &) = default ;
    CreateGroupMetricRulesResponseBody& operator=(CreateGroupMetricRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(AlertResult, alertResult_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertResult, alertResult_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertResult& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, AlertResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        AlertResult() = default ;
        AlertResult(const AlertResult &) = default ;
        AlertResult(AlertResult &&) = default ;
        AlertResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertResult() = default ;
        AlertResult& operator=(const AlertResult &) = default ;
        AlertResult& operator=(AlertResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline AlertResult& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AlertResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline AlertResult& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline AlertResult& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline AlertResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The status code that is returned for the alert rule.
        // 
        // >  The status code 200 indicates that the call is successful.
        shared_ptr<int32_t> code_ {};
        // The error message that is returned for the alert rule.
        shared_ptr<string> message_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // Indicates whether the alert rule was created. Valid value:
        // 
        // - true: The alert rule was created.
        // - false: The alert rule failed to be created.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->alertResult_ == nullptr; };
      // alertResult Field Functions 
      bool hasAlertResult() const { return this->alertResult_ != nullptr;};
      void deleteAlertResult() { this->alertResult_ = nullptr;};
      inline const vector<Resources::AlertResult> & getAlertResult() const { DARABONBA_PTR_GET_CONST(alertResult_, vector<Resources::AlertResult>) };
      inline vector<Resources::AlertResult> getAlertResult() { DARABONBA_PTR_GET(alertResult_, vector<Resources::AlertResult>) };
      inline Resources& setAlertResult(const vector<Resources::AlertResult> & alertResult) { DARABONBA_PTR_SET_VALUE(alertResult_, alertResult) };
      inline Resources& setAlertResult(vector<Resources::AlertResult> && alertResult) { DARABONBA_PTR_SET_RVALUE(alertResult_, alertResult) };


    protected:
      shared_ptr<vector<Resources::AlertResult>> alertResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateGroupMetricRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateGroupMetricRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGroupMetricRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const CreateGroupMetricRulesResponseBody::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, CreateGroupMetricRulesResponseBody::Resources) };
    inline CreateGroupMetricRulesResponseBody::Resources getResources() { DARABONBA_PTR_GET(resources_, CreateGroupMetricRulesResponseBody::Resources) };
    inline CreateGroupMetricRulesResponseBody& setResources(const CreateGroupMetricRulesResponseBody::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateGroupMetricRulesResponseBody& setResources(CreateGroupMetricRulesResponseBody::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateGroupMetricRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call is successful.
    shared_ptr<int32_t> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the alert rules.
    shared_ptr<CreateGroupMetricRulesResponseBody::Resources> resources_ {};
    // Indicates whether the call is successful. Valid value:
    // 
    // - true: The call is successful.
    // - false: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
