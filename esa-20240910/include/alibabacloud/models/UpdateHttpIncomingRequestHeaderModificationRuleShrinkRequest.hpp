// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModificationShrink_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModificationShrink_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest() = default ;
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest(const UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest &) = default ;
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest(UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest &&) = default ;
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest() = default ;
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& operator=(const UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest &) = default ;
    UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& operator=(UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->requestHeaderModificationShrink_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // requestHeaderModificationShrink Field Functions 
    bool hasRequestHeaderModificationShrink() const { return this->requestHeaderModificationShrink_ != nullptr;};
    void deleteRequestHeaderModificationShrink() { this->requestHeaderModificationShrink_ = nullptr;};
    inline string getRequestHeaderModificationShrink() const { DARABONBA_PTR_GET_DEFAULT(requestHeaderModificationShrink_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRequestHeaderModificationShrink(string requestHeaderModificationShrink) { DARABONBA_PTR_SET_VALUE(requestHeaderModificationShrink_, requestHeaderModificationShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Configuration ID. Can be obtained by calling the ListHttpIncomingRequestHeaderModificationRules API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // Modify request headers. Three operation types are supported: add, delete, and modify.
    shared_ptr<string> requestHeaderModificationShrink_ {};
    // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true.
    // - Match specified requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter does not need to be set when adding a global configuration. Valid values:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter does not need to be set when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // Rule execution order. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
