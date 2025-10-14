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
        && return this->requestHeaderModificationShrink_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // requestHeaderModificationShrink Field Functions 
    bool hasRequestHeaderModificationShrink() const { return this->requestHeaderModificationShrink_ != nullptr;};
    void deleteRequestHeaderModificationShrink() { this->requestHeaderModificationShrink_ = nullptr;};
    inline string requestHeaderModificationShrink() const { DARABONBA_PTR_GET_DEFAULT(requestHeaderModificationShrink_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRequestHeaderModificationShrink(string requestHeaderModificationShrink) { DARABONBA_PTR_SET_VALUE(requestHeaderModificationShrink_, requestHeaderModificationShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID. You can call the ListHttpIncomingRequestHeaderModificationRules operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The configurations of modifying request headers. You can add, delete, or modify a request header.
    std::shared_ptr<string> requestHeaderModificationShrink_ = nullptr;
    // The content of the rule. A conditional expression is used to match a user request. You do not need to set this parameter when you add global configurations. Use cases:
    // 
    // *   true: Match all incoming requests.
    // *   Set the value to a custom expression, for example, (http.host eq "video.example.com"): Match the specified request.
    std::shared_ptr<string> rule_ = nullptr;
    // Specifies whether to enable the rule. Valid values: You do not need to set this parameter when you add global configurations. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // The rule name. You do not need to set this parameter when you add global configurations.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The order in which the rule is executed. A smaller value gives priority to the rule.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
