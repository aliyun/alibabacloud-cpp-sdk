// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPREQUESTHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPREQUESTHEADERMODIFICATIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpRequestHeaderModificationRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpRequestHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModificationShrink_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpRequestHeaderModificationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModificationShrink_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateHttpRequestHeaderModificationRuleShrinkRequest() = default ;
    CreateHttpRequestHeaderModificationRuleShrinkRequest(const CreateHttpRequestHeaderModificationRuleShrinkRequest &) = default ;
    CreateHttpRequestHeaderModificationRuleShrinkRequest(CreateHttpRequestHeaderModificationRuleShrinkRequest &&) = default ;
    CreateHttpRequestHeaderModificationRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpRequestHeaderModificationRuleShrinkRequest() = default ;
    CreateHttpRequestHeaderModificationRuleShrinkRequest& operator=(const CreateHttpRequestHeaderModificationRuleShrinkRequest &) = default ;
    CreateHttpRequestHeaderModificationRuleShrinkRequest& operator=(CreateHttpRequestHeaderModificationRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestHeaderModificationShrink_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // requestHeaderModificationShrink Field Functions 
    bool hasRequestHeaderModificationShrink() const { return this->requestHeaderModificationShrink_ != nullptr;};
    void deleteRequestHeaderModificationShrink() { this->requestHeaderModificationShrink_ = nullptr;};
    inline string getRequestHeaderModificationShrink() const { DARABONBA_PTR_GET_DEFAULT(requestHeaderModificationShrink_, "") };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setRequestHeaderModificationShrink(string requestHeaderModificationShrink) { DARABONBA_PTR_SET_VALUE(requestHeaderModificationShrink_, requestHeaderModificationShrink) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateHttpRequestHeaderModificationRuleShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // An array of objects that define Request Header modifications. Supported operations include add, del, and modify.
    // 
    // This parameter is required.
    shared_ptr<string> requestHeaderModificationShrink_ {};
    // The content of the Rule, which uses a Conditional Expression to match user requests. This parameter is not required when you add a global configuration. Supports two Use Cases:
    // 
    // - To match all incoming requests, set the value to true.
    // 
    // - To match specific requests, set the value to a custom expression, for example, (http.host eq "video.example.com").
    shared_ptr<string> rule_ {};
    // Specifies whether to enable the Rule. This parameter is not required when you add a global configuration. Valid values are:
    // 
    // - on: Enables the Rule.
    // 
    // - off: Disables the Rule.
    shared_ptr<string> ruleEnable_ {};
    // The name of the Rule. This parameter is not required when you add a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution order of the Rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The ID of the Site. You can get this ID by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The Version of the Site configuration. For a Site with configuration versioning enabled, this parameter specifies the configuration\\"s target Version. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
