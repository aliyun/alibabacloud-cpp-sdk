// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateApplicationCustomRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateApplicationCustomRulesRequest() = default ;
    CreateApplicationCustomRulesRequest(const CreateApplicationCustomRulesRequest &) = default ;
    CreateApplicationCustomRulesRequest(CreateApplicationCustomRulesRequest &&) = default ;
    CreateApplicationCustomRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationCustomRulesRequest() = default ;
    CreateApplicationCustomRulesRequest& operator=(const CreateApplicationCustomRulesRequest &) = default ;
    CreateApplicationCustomRulesRequest& operator=(CreateApplicationCustomRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
        DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationCustomRuleName_ == nullptr
        && this->applicationIds_ == nullptr && this->priority_ == nullptr && this->ruleAction_ == nullptr; };
      // applicationCustomRuleName Field Functions 
      bool hasApplicationCustomRuleName() const { return this->applicationCustomRuleName_ != nullptr;};
      void deleteApplicationCustomRuleName() { this->applicationCustomRuleName_ = nullptr;};
      inline string getApplicationCustomRuleName() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleName_, "") };
      inline Rules& setApplicationCustomRuleName(string applicationCustomRuleName) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleName_, applicationCustomRuleName) };


      // applicationIds Field Functions 
      bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
      void deleteApplicationIds() { this->applicationIds_ = nullptr;};
      inline const vector<int64_t> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<int64_t>) };
      inline vector<int64_t> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<int64_t>) };
      inline Rules& setApplicationIds(const vector<int64_t> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
      inline Rules& setApplicationIds(vector<int64_t> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline Rules& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Rules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    protected:
      // The name of the custom rule. It cannot be empty and can be up to 64 characters in length. It supports Chinese characters, English letters, digits, hyphens (-), underscores (_), and half-width periods (.).
      shared_ptr<string> applicationCustomRuleName_ {};
      // The list of application IDs associated with the rule. A single rule can be associated with 1 to 200 applications. The IDs cannot be 0, must be unique, and must exist in the built-in application signature library. You can call the ListApplications operation to query the IDs.
      shared_ptr<vector<int64_t>> applicationIds_ {};
      // The priority of the rule. Valid values: integers from 1 to 200. A smaller value indicates a higher priority. Priorities must be unique within the same batch and the same template.
      shared_ptr<int64_t> priority_ {};
      // The action to perform when the rule is triggered. Valid values:
      // - **Allow**: allows the traffic.
      // - **Alert**: monitors the traffic.
      // - **Deny**: blocks the traffic.
      shared_ptr<string> ruleAction_ {};
    };

    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->rules_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline CreateApplicationCustomRulesRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreateApplicationCustomRulesRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreateApplicationCustomRulesRequest::Rules>) };
    inline vector<CreateApplicationCustomRulesRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreateApplicationCustomRulesRequest::Rules>) };
    inline CreateApplicationCustomRulesRequest& setRules(const vector<CreateApplicationCustomRulesRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreateApplicationCustomRulesRequest& setRules(vector<CreateApplicationCustomRulesRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The ID of the application template to which the custom rules belong. The template must exist within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
    // The list of custom rules for the application. You can pass up to 100 rules at a time, and the total number of rules in the template after creation cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateApplicationCustomRulesRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
