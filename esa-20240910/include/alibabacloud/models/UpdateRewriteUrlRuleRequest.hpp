// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREWRITEURLRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREWRITEURLRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRewriteUrlRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRewriteUrlRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(QueryString, queryString_);
      DARABONBA_PTR_TO_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_TO_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRewriteUrlRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
      DARABONBA_PTR_FROM_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_FROM_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    UpdateRewriteUrlRuleRequest() = default ;
    UpdateRewriteUrlRuleRequest(const UpdateRewriteUrlRuleRequest &) = default ;
    UpdateRewriteUrlRuleRequest(UpdateRewriteUrlRuleRequest &&) = default ;
    UpdateRewriteUrlRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRewriteUrlRuleRequest() = default ;
    UpdateRewriteUrlRuleRequest& operator=(const UpdateRewriteUrlRuleRequest &) = default ;
    UpdateRewriteUrlRuleRequest& operator=(UpdateRewriteUrlRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->queryString_ == nullptr && return this->rewriteQueryStringType_ == nullptr && return this->rewriteUriType_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr
        && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteId_ == nullptr && return this->uri_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateRewriteUrlRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string queryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline UpdateRewriteUrlRuleRequest& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // rewriteQueryStringType Field Functions 
    bool hasRewriteQueryStringType() const { return this->rewriteQueryStringType_ != nullptr;};
    void deleteRewriteQueryStringType() { this->rewriteQueryStringType_ = nullptr;};
    inline string rewriteQueryStringType() const { DARABONBA_PTR_GET_DEFAULT(rewriteQueryStringType_, "") };
    inline UpdateRewriteUrlRuleRequest& setRewriteQueryStringType(string rewriteQueryStringType) { DARABONBA_PTR_SET_VALUE(rewriteQueryStringType_, rewriteQueryStringType) };


    // rewriteUriType Field Functions 
    bool hasRewriteUriType() const { return this->rewriteUriType_ != nullptr;};
    void deleteRewriteUriType() { this->rewriteUriType_ = nullptr;};
    inline string rewriteUriType() const { DARABONBA_PTR_GET_DEFAULT(rewriteUriType_, "") };
    inline UpdateRewriteUrlRuleRequest& setRewriteUriType(string rewriteUriType) { DARABONBA_PTR_SET_VALUE(rewriteUriType_, rewriteUriType) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateRewriteUrlRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateRewriteUrlRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateRewriteUrlRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateRewriteUrlRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateRewriteUrlRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline UpdateRewriteUrlRuleRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // Configuration ID. It can be obtained by calling the [ListRewriteUrlRules](https://help.aliyun.com/document_detail/2867480.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The query string after rewriting.
    std::shared_ptr<string> queryString_ = nullptr;
    // Query string rewrite type. Value range:
    // - static: Static mode.
    // - dynamic: Dynamic mode.
    std::shared_ptr<string> rewriteQueryStringType_ = nullptr;
    // URI rewrite type. Value range:
    // - static: Static mode.
    // - dynamic: Dynamic mode.
    std::shared_ptr<string> rewriteUriType_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The target URI after rewriting.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
