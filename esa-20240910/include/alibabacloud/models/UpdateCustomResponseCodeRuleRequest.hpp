// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMRESPONSECODERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMRESPONSECODERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCustomResponseCodeRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomResponseCodeRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(ReturnCode, returnCode_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomResponseCodeRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(ReturnCode, returnCode_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateCustomResponseCodeRuleRequest() = default ;
    UpdateCustomResponseCodeRuleRequest(const UpdateCustomResponseCodeRuleRequest &) = default ;
    UpdateCustomResponseCodeRuleRequest(UpdateCustomResponseCodeRuleRequest &&) = default ;
    UpdateCustomResponseCodeRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomResponseCodeRuleRequest() = default ;
    UpdateCustomResponseCodeRuleRequest& operator=(const UpdateCustomResponseCodeRuleRequest &) = default ;
    UpdateCustomResponseCodeRuleRequest& operator=(UpdateCustomResponseCodeRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->pageId_ == nullptr && this->returnCode_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateCustomResponseCodeRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline UpdateCustomResponseCodeRuleRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // returnCode Field Functions 
    bool hasReturnCode() const { return this->returnCode_ != nullptr;};
    void deleteReturnCode() { this->returnCode_ = nullptr;};
    inline string getReturnCode() const { DARABONBA_PTR_GET_DEFAULT(returnCode_, "") };
    inline UpdateCustomResponseCodeRuleRequest& setReturnCode(string returnCode) { DARABONBA_PTR_SET_VALUE(returnCode_, returnCode) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateCustomResponseCodeRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateCustomResponseCodeRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateCustomResponseCodeRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateCustomResponseCodeRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCustomResponseCodeRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The response page.
    shared_ptr<string> pageId_ {};
    // The response code.
    shared_ptr<string> returnCode_ {};
    // The rule content. Use a conditional expression to match user requests. Do not set this parameter when adding a global configuration. There are two scenarios:
    // 
    // - Match all incoming requests: Set the value to \\`true\\`.
    // 
    // - Match specific requests: Set the value to a custom expression, such as: \\`(http.host eq "video.example.com")\\`.
    shared_ptr<string> rule_ {};
    // The rule switch. Do not set this parameter when adding a global configuration. Valid values:
    // 
    // - on: Enable the rule.
    // 
    // - off: Disable the rule.
    shared_ptr<string> ruleEnable_ {};
    // The rule name. Do not set this parameter when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // The rule execution order. A smaller value indicates higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The site ID. Get it by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
