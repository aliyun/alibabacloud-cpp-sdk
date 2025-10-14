// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODYRESOURCEALERTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_APPLYMETRICRULETEMPLATERESPONSEBODYRESOURCEALERTRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ApplyMetricRuleTemplateResponseBodyResourceAlertResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyMetricRuleTemplateResponseBodyResourceAlertResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyMetricRuleTemplateResponseBodyResourceAlertResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults() = default ;
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults(const ApplyMetricRuleTemplateResponseBodyResourceAlertResults &) = default ;
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults(ApplyMetricRuleTemplateResponseBodyResourceAlertResults &&) = default ;
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyMetricRuleTemplateResponseBodyResourceAlertResults() = default ;
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults& operator=(const ApplyMetricRuleTemplateResponseBodyResourceAlertResults &) = default ;
    ApplyMetricRuleTemplateResponseBodyResourceAlertResults& operator=(ApplyMetricRuleTemplateResponseBodyResourceAlertResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyMetricRuleTemplateResponseBodyResourceAlertResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyMetricRuleTemplateResponseBodyResourceAlertResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ApplyMetricRuleTemplateResponseBodyResourceAlertResults& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ApplyMetricRuleTemplateResponseBodyResourceAlertResults& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyMetricRuleTemplateResponseBodyResourceAlertResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
