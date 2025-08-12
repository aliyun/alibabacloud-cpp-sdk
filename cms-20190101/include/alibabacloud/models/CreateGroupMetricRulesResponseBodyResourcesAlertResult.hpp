// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODYRESOURCESALERTRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESRESPONSEBODYRESOURCESALERTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesResponseBodyResourcesAlertResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesResponseBodyResourcesAlertResult& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesResponseBodyResourcesAlertResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateGroupMetricRulesResponseBodyResourcesAlertResult() = default ;
    CreateGroupMetricRulesResponseBodyResourcesAlertResult(const CreateGroupMetricRulesResponseBodyResourcesAlertResult &) = default ;
    CreateGroupMetricRulesResponseBodyResourcesAlertResult(CreateGroupMetricRulesResponseBodyResourcesAlertResult &&) = default ;
    CreateGroupMetricRulesResponseBodyResourcesAlertResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesResponseBodyResourcesAlertResult() = default ;
    CreateGroupMetricRulesResponseBodyResourcesAlertResult& operator=(const CreateGroupMetricRulesResponseBodyResourcesAlertResult &) = default ;
    CreateGroupMetricRulesResponseBodyResourcesAlertResult& operator=(CreateGroupMetricRulesResponseBodyResourcesAlertResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateGroupMetricRulesResponseBodyResourcesAlertResult& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateGroupMetricRulesResponseBodyResourcesAlertResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateGroupMetricRulesResponseBodyResourcesAlertResult& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateGroupMetricRulesResponseBodyResourcesAlertResult& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateGroupMetricRulesResponseBodyResourcesAlertResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned for the alert rule.
    // 
    // >  The status code 200 indicates that the call is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The error message that is returned for the alert rule.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Indicates whether the alert rule was created. Valid value:
    // 
    // - true: The alert rule was created.
    // - false: The alert rule failed to be created.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
