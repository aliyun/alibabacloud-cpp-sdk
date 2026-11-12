// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEERRORPAGESREDIRECTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEERRORPAGESREDIRECTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateErrorPagesRedirectRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateErrorPagesRedirectRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ErrorPagesRedirect, errorPagesRedirectShrink_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateErrorPagesRedirectRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ErrorPagesRedirect, errorPagesRedirectShrink_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateErrorPagesRedirectRuleShrinkRequest() = default ;
    UpdateErrorPagesRedirectRuleShrinkRequest(const UpdateErrorPagesRedirectRuleShrinkRequest &) = default ;
    UpdateErrorPagesRedirectRuleShrinkRequest(UpdateErrorPagesRedirectRuleShrinkRequest &&) = default ;
    UpdateErrorPagesRedirectRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateErrorPagesRedirectRuleShrinkRequest() = default ;
    UpdateErrorPagesRedirectRuleShrinkRequest& operator=(const UpdateErrorPagesRedirectRuleShrinkRequest &) = default ;
    UpdateErrorPagesRedirectRuleShrinkRequest& operator=(UpdateErrorPagesRedirectRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->errorPagesRedirectShrink_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // errorPagesRedirectShrink Field Functions 
    bool hasErrorPagesRedirectShrink() const { return this->errorPagesRedirectShrink_ != nullptr;};
    void deleteErrorPagesRedirectShrink() { this->errorPagesRedirectShrink_ = nullptr;};
    inline string getErrorPagesRedirectShrink() const { DARABONBA_PTR_GET_DEFAULT(errorPagesRedirectShrink_, "") };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setErrorPagesRedirectShrink(string errorPagesRedirectShrink) { DARABONBA_PTR_SET_VALUE(errorPagesRedirectShrink_, errorPagesRedirectShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateErrorPagesRedirectRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The error code redirect.
    shared_ptr<string> errorPagesRedirectShrink_ {};
    // The rule content, which uses conditional expressions to match user requests. You do not need to specify this parameter when adding a global configuration. This parameter applies to the following scenarios:
    // - Match all incoming requests: Set the value to true.
    // - Match specific requests: Set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
    shared_ptr<string> rule_ {};
    // Specifies whether to enable the rule. You do not need to specify this parameter when adding a global configuration. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> ruleEnable_ {};
    // The rule name. You do not need to specify this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution sequence of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The site ID. You can obtain the site ID by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
