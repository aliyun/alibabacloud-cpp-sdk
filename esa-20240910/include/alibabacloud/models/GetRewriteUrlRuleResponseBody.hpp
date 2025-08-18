// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREWRITEURLRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREWRITEURLRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRewriteUrlRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRewriteUrlRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(QueryString, queryString_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_TO_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GetRewriteUrlRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_FROM_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    GetRewriteUrlRuleResponseBody() = default ;
    GetRewriteUrlRuleResponseBody(const GetRewriteUrlRuleResponseBody &) = default ;
    GetRewriteUrlRuleResponseBody(GetRewriteUrlRuleResponseBody &&) = default ;
    GetRewriteUrlRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRewriteUrlRuleResponseBody() = default ;
    GetRewriteUrlRuleResponseBody& operator=(const GetRewriteUrlRuleResponseBody &) = default ;
    GetRewriteUrlRuleResponseBody& operator=(GetRewriteUrlRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->configType_ != nullptr && this->queryString_ != nullptr && this->requestId_ != nullptr && this->rewriteQueryStringType_ != nullptr && this->rewriteUriType_ != nullptr
        && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr && this->siteVersion_ != nullptr
        && this->uri_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetRewriteUrlRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetRewriteUrlRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string queryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline GetRewriteUrlRuleResponseBody& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRewriteUrlRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rewriteQueryStringType Field Functions 
    bool hasRewriteQueryStringType() const { return this->rewriteQueryStringType_ != nullptr;};
    void deleteRewriteQueryStringType() { this->rewriteQueryStringType_ = nullptr;};
    inline string rewriteQueryStringType() const { DARABONBA_PTR_GET_DEFAULT(rewriteQueryStringType_, "") };
    inline GetRewriteUrlRuleResponseBody& setRewriteQueryStringType(string rewriteQueryStringType) { DARABONBA_PTR_SET_VALUE(rewriteQueryStringType_, rewriteQueryStringType) };


    // rewriteUriType Field Functions 
    bool hasRewriteUriType() const { return this->rewriteUriType_ != nullptr;};
    void deleteRewriteUriType() { this->rewriteUriType_ = nullptr;};
    inline string rewriteUriType() const { DARABONBA_PTR_GET_DEFAULT(rewriteUriType_, "") };
    inline GetRewriteUrlRuleResponseBody& setRewriteUriType(string rewriteUriType) { DARABONBA_PTR_SET_VALUE(rewriteUriType_, rewriteUriType) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetRewriteUrlRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetRewriteUrlRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetRewriteUrlRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetRewriteUrlRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetRewriteUrlRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetRewriteUrlRuleResponseBody& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type. Possible values:
    // - global: Global configuration;
    // - rule: Rule-based configuration;
    std::shared_ptr<string> configType_ = nullptr;
    // The rewritten query string.
    std::shared_ptr<string> queryString_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Query string rewrite type. Possible values:
    // 
    // - static: Static mode.
    // - dynamic: Dynamic mode.
    std::shared_ptr<string> rewriteQueryStringType_ = nullptr;
    // URI rewrite type. Possible values:
    // 
    // - static: Static mode.
    // - dynamic: Dynamic mode.
    std::shared_ptr<string> rewriteUriType_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter does not need to be set when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter does not need to be set when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority for execution.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the site, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // The target URI after rewriting.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
