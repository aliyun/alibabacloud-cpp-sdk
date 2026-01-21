// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODY_HPP_
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
  class ApplyMetricRuleTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyMetricRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyMetricRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ApplyMetricRuleTemplateResponseBody() = default ;
    ApplyMetricRuleTemplateResponseBody(const ApplyMetricRuleTemplateResponseBody &) = default ;
    ApplyMetricRuleTemplateResponseBody(ApplyMetricRuleTemplateResponseBody &&) = default ;
    ApplyMetricRuleTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyMetricRuleTemplateResponseBody() = default ;
    ApplyMetricRuleTemplateResponseBody& operator=(const ApplyMetricRuleTemplateResponseBody &) = default ;
    ApplyMetricRuleTemplateResponseBody& operator=(ApplyMetricRuleTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(AlertResults, alertResults_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertResults, alertResults_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertResults& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, AlertResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        AlertResults() = default ;
        AlertResults(const AlertResults &) = default ;
        AlertResults(AlertResults &&) = default ;
        AlertResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertResults() = default ;
        AlertResults& operator=(const AlertResults &) = default ;
        AlertResults& operator=(AlertResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AlertResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AlertResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline AlertResults& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline AlertResults& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline AlertResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The responses code.
        // 
        // >  The status code 200 indicates that the request was successful.
        shared_ptr<string> code_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // The ID of the alert rule.
        shared_ptr<string> ruleId_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
        // Indicates whether the request was successful. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->alertResults_ == nullptr
        && this->groupId_ == nullptr; };
      // alertResults Field Functions 
      bool hasAlertResults() const { return this->alertResults_ != nullptr;};
      void deleteAlertResults() { this->alertResults_ = nullptr;};
      inline const vector<Resource::AlertResults> & getAlertResults() const { DARABONBA_PTR_GET_CONST(alertResults_, vector<Resource::AlertResults>) };
      inline vector<Resource::AlertResults> getAlertResults() { DARABONBA_PTR_GET(alertResults_, vector<Resource::AlertResults>) };
      inline Resource& setAlertResults(const vector<Resource::AlertResults> & alertResults) { DARABONBA_PTR_SET_VALUE(alertResults_, alertResults) };
      inline Resource& setAlertResults(vector<Resource::AlertResults> && alertResults) { DARABONBA_PTR_SET_RVALUE(alertResults_, alertResults) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Resource& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    protected:
      // The details of the generated alert rule.
      shared_ptr<vector<Resource::AlertResults>> alertResults_ {};
      // The ID of the application group.
      shared_ptr<int64_t> groupId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ApplyMetricRuleTemplateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyMetricRuleTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyMetricRuleTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ApplyMetricRuleTemplateResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ApplyMetricRuleTemplateResponseBody::Resource) };
    inline ApplyMetricRuleTemplateResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, ApplyMetricRuleTemplateResponseBody::Resource) };
    inline ApplyMetricRuleTemplateResponseBody& setResource(const ApplyMetricRuleTemplateResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ApplyMetricRuleTemplateResponseBody& setResource(ApplyMetricRuleTemplateResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyMetricRuleTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources that are affected by the alert rule.
    shared_ptr<ApplyMetricRuleTemplateResponseBody::Resource> resource_ {};
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
