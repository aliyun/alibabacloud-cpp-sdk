// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMRESPONSECODERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMRESPONSECODERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCustomResponseCodeRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomResponseCodeRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(ReturnCode, returnCode_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomResponseCodeRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(ReturnCode, returnCode_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateCustomResponseCodeRuleRequest() = default ;
    CreateCustomResponseCodeRuleRequest(const CreateCustomResponseCodeRuleRequest &) = default ;
    CreateCustomResponseCodeRuleRequest(CreateCustomResponseCodeRuleRequest &&) = default ;
    CreateCustomResponseCodeRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomResponseCodeRuleRequest() = default ;
    CreateCustomResponseCodeRuleRequest& operator=(const CreateCustomResponseCodeRuleRequest &) = default ;
    CreateCustomResponseCodeRuleRequest& operator=(CreateCustomResponseCodeRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageId_ == nullptr
        && this->returnCode_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline CreateCustomResponseCodeRuleRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // returnCode Field Functions 
    bool hasReturnCode() const { return this->returnCode_ != nullptr;};
    void deleteReturnCode() { this->returnCode_ = nullptr;};
    inline string getReturnCode() const { DARABONBA_PTR_GET_DEFAULT(returnCode_, "") };
    inline CreateCustomResponseCodeRuleRequest& setReturnCode(string returnCode) { DARABONBA_PTR_SET_VALUE(returnCode_, returnCode) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateCustomResponseCodeRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateCustomResponseCodeRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateCustomResponseCodeRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateCustomResponseCodeRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateCustomResponseCodeRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateCustomResponseCodeRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The response page.
    // 
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    // The response code.
    // 
    // This parameter is required.
    shared_ptr<string> returnCode_ {};
    // The rule content. Conditional expressions are used to match user requests. You do not need to set this parameter when adding a global configuration. Two scenarios are supported:
    // - Match all incoming requests: Set the value to true.
    // - Match specified requests: Set the value to a custom expression, such as (http.host eq "video.example.com").
    shared_ptr<string> rule_ {};
    // The rule switch. You do not need to set this parameter when adding a global configuration. Valid values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> ruleEnable_ {};
    // The rule name. You do not need to set this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution order of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The site ID. You can call [ListSites](https://help.aliyun.com/document_detail/2850189.html) to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the site version on which the configuration takes effect. Default value: 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
