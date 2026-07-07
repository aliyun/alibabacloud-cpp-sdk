// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERWAFRULESETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERWAFRULESETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateUserWafRulesetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserWafRulesetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_TO_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserWafRulesetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Rules, rulesShrink_);
      DARABONBA_PTR_FROM_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateUserWafRulesetShrinkRequest() = default ;
    CreateUserWafRulesetShrinkRequest(const CreateUserWafRulesetShrinkRequest &) = default ;
    CreateUserWafRulesetShrinkRequest(CreateUserWafRulesetShrinkRequest &&) = default ;
    CreateUserWafRulesetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserWafRulesetShrinkRequest() = default ;
    CreateUserWafRulesetShrinkRequest& operator=(const CreateUserWafRulesetShrinkRequest &) = default ;
    CreateUserWafRulesetShrinkRequest& operator=(CreateUserWafRulesetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->expression_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->phase_ == nullptr && this->rulesShrink_ == nullptr
        && this->sharedShrink_ == nullptr && this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserWafRulesetShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreateUserWafRulesetShrinkRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserWafRulesetShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUserWafRulesetShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline CreateUserWafRulesetShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesShrink Field Functions 
    bool hasRulesShrink() const { return this->rulesShrink_ != nullptr;};
    void deleteRulesShrink() { this->rulesShrink_ = nullptr;};
    inline string getRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(rulesShrink_, "") };
    inline CreateUserWafRulesetShrinkRequest& setRulesShrink(string rulesShrink) { DARABONBA_PTR_SET_VALUE(rulesShrink_, rulesShrink) };


    // sharedShrink Field Functions 
    bool hasSharedShrink() const { return this->sharedShrink_ != nullptr;};
    void deleteSharedShrink() { this->sharedShrink_ = nullptr;};
    inline string getSharedShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedShrink_, "") };
    inline CreateUserWafRulesetShrinkRequest& setSharedShrink(string sharedShrink) { DARABONBA_PTR_SET_VALUE(sharedShrink_, sharedShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateUserWafRulesetShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the WAF ruleset.
    shared_ptr<string> description_ {};
    // The match expression of the WAF ruleset. Rules in this ruleset are evaluated only when a request matches this expression.
    // 
    // Examples:
    // - `http.host eq "example.com"` — Only requests with the host example.com enter this ruleset.
    // - `starts_with(http.uri.path, "/api/")` — Only requests with the /api/ prefix enter this ruleset.
    // 
    // > The complete expression syntax and available field set are subject to the server-side wirefilter dialect.
    // 
    // This parameter is required.
    shared_ptr<string> expression_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the WAF ruleset.
    // 
    // **Naming suggestion**: Use a combination of letters, digits, and underscores for easy reference. The specific character set, maximum length, and uniqueness constraints are subject to the WAF ruleset service naming conventions.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The phase to which the WAF ruleset belongs. Valid values:
    // 
    // - http_whitelist: whitelist rules
    // - http_custom: custom rules
    // - http_managed: managed rules
    // - http_anti_scan: scan protection rules
    // - http_ratelimit: rate limiting rules
    // 
    // > Note: The supported fields (Expression match fields, Action values, and others) vary by phase. For more information, refer to the rule configuration documentation for the corresponding phase.
    // 
    // This parameter is required.
    shared_ptr<string> phase_ {};
    // The list of rule configurations in the WAF ruleset. Each element corresponds to a rule.
    // 
    // - The field structure of each rule is subject to the `WafRuleConfig` data structure, which includes Expression, Action, Name, and other fields.
    shared_ptr<string> rulesShrink_ {};
    // The shared fields across multiple rules in this ruleset, such as a unified Action or Name prefix.
    // 
    // > The field structure is subject to the `WafBatchRuleShared` data structure. If you do not need to share properties, you can leave this parameter empty.
    shared_ptr<string> sharedShrink_ {};
    // The status of the WAF ruleset. Valid values:
    // 
    // - on: Enabled. The rules in the ruleset participate in matching and blocking.
    // - off: Disabled. The ruleset is retained but does not participate in matching.
    // 
    // > The complete set of valid values is subject to the server-side enum.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
