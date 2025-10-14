// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModificationShrink_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModificationShrink_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest() = default ;
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest(const UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest &) = default ;
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest(UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest &&) = default ;
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest() = default ;
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& operator=(const UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest &) = default ;
    UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& operator=(UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->responseHeaderModificationShrink_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // responseHeaderModificationShrink Field Functions 
    bool hasResponseHeaderModificationShrink() const { return this->responseHeaderModificationShrink_ != nullptr;};
    void deleteResponseHeaderModificationShrink() { this->responseHeaderModificationShrink_ = nullptr;};
    inline string responseHeaderModificationShrink() const { DARABONBA_PTR_GET_DEFAULT(responseHeaderModificationShrink_, "") };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setResponseHeaderModificationShrink(string responseHeaderModificationShrink) { DARABONBA_PTR_SET_VALUE(responseHeaderModificationShrink_, responseHeaderModificationShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the configuration. You can call the ListHttpIncomingResponseHeaderModificationRules operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Modifies a response header. You can add, delete, or modify a request header.
    std::shared_ptr<string> responseHeaderModificationShrink_ = nullptr;
    // The content of the rule. A conditional expression is used to match a user request. You do not need to set this parameter when you add global configuration. Use cases:
    // 
    // *   true: Match all incoming requests.
    // *   Set the value to a custom expression, for example, (http.host eq "video.example.com"): Match the specified request.
    std::shared_ptr<string> rule_ = nullptr;
    // Specifies whether to enable the rule. Valid values: You do not need to set this parameter when you add global configuration. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // The rule name. You do not need to set this parameter when you add global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The order in which the rule is executed. A smaller value gives priority to the rule.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
