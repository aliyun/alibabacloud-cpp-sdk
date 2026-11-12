// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERRORPAGESREDIRECTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEERRORPAGESREDIRECTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateErrorPagesRedirectRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErrorPagesRedirectRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorPagesRedirect, errorPagesRedirectShrink_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErrorPagesRedirectRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorPagesRedirect, errorPagesRedirectShrink_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateErrorPagesRedirectRuleShrinkRequest() = default ;
    CreateErrorPagesRedirectRuleShrinkRequest(const CreateErrorPagesRedirectRuleShrinkRequest &) = default ;
    CreateErrorPagesRedirectRuleShrinkRequest(CreateErrorPagesRedirectRuleShrinkRequest &&) = default ;
    CreateErrorPagesRedirectRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErrorPagesRedirectRuleShrinkRequest() = default ;
    CreateErrorPagesRedirectRuleShrinkRequest& operator=(const CreateErrorPagesRedirectRuleShrinkRequest &) = default ;
    CreateErrorPagesRedirectRuleShrinkRequest& operator=(CreateErrorPagesRedirectRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorPagesRedirectShrink_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // errorPagesRedirectShrink Field Functions 
    bool hasErrorPagesRedirectShrink() const { return this->errorPagesRedirectShrink_ != nullptr;};
    void deleteErrorPagesRedirectShrink() { this->errorPagesRedirectShrink_ = nullptr;};
    inline string getErrorPagesRedirectShrink() const { DARABONBA_PTR_GET_DEFAULT(errorPagesRedirectShrink_, "") };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setErrorPagesRedirectShrink(string errorPagesRedirectShrink) { DARABONBA_PTR_SET_VALUE(errorPagesRedirectShrink_, errorPagesRedirectShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateErrorPagesRedirectRuleShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The error code redirect configuration.
    // 
    // This parameter is required.
    shared_ptr<string> errorPagesRedirectShrink_ {};
    // The rule content, which uses conditional expressions to match user requests. You do not need to specify this parameter when adding a global configuration. Two scenarios are supported:
    // - Match all incoming requests: Set the value to true.
    // - Match specific requests: Set the value to a custom expression, such as (http.host eq "video.example.com").
    shared_ptr<string> rule_ {};
    // Specifies whether to enable the rule. You do not need to specify this parameter when adding a global configuration. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> ruleEnable_ {};
    // The name of the rule. You do not need to specify this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution sequence of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The ID of the site. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version to which the configuration applies. Default value: 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
