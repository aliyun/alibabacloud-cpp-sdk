// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREWRITEURLRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREWRITEURLRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRewriteUrlRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRewriteUrlRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QueryString, queryString_);
      DARABONBA_PTR_TO_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_TO_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRewriteUrlRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
      DARABONBA_PTR_FROM_JSON(RewriteQueryStringType, rewriteQueryStringType_);
      DARABONBA_PTR_FROM_JSON(RewriteUriType, rewriteUriType_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateRewriteUrlRuleRequest() = default ;
    CreateRewriteUrlRuleRequest(const CreateRewriteUrlRuleRequest &) = default ;
    CreateRewriteUrlRuleRequest(CreateRewriteUrlRuleRequest &&) = default ;
    CreateRewriteUrlRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRewriteUrlRuleRequest() = default ;
    CreateRewriteUrlRuleRequest& operator=(const CreateRewriteUrlRuleRequest &) = default ;
    CreateRewriteUrlRuleRequest& operator=(CreateRewriteUrlRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryString_ == nullptr
        && return this->rewriteQueryStringType_ == nullptr && return this->rewriteUriType_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr
        && return this->sequence_ == nullptr && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr && return this->uri_ == nullptr; };
    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string queryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline CreateRewriteUrlRuleRequest& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // rewriteQueryStringType Field Functions 
    bool hasRewriteQueryStringType() const { return this->rewriteQueryStringType_ != nullptr;};
    void deleteRewriteQueryStringType() { this->rewriteQueryStringType_ = nullptr;};
    inline string rewriteQueryStringType() const { DARABONBA_PTR_GET_DEFAULT(rewriteQueryStringType_, "") };
    inline CreateRewriteUrlRuleRequest& setRewriteQueryStringType(string rewriteQueryStringType) { DARABONBA_PTR_SET_VALUE(rewriteQueryStringType_, rewriteQueryStringType) };


    // rewriteUriType Field Functions 
    bool hasRewriteUriType() const { return this->rewriteUriType_ != nullptr;};
    void deleteRewriteUriType() { this->rewriteUriType_ = nullptr;};
    inline string rewriteUriType() const { DARABONBA_PTR_GET_DEFAULT(rewriteUriType_, "") };
    inline CreateRewriteUrlRuleRequest& setRewriteUriType(string rewriteUriType) { DARABONBA_PTR_SET_VALUE(rewriteUriType_, rewriteUriType) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateRewriteUrlRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateRewriteUrlRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRewriteUrlRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateRewriteUrlRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRewriteUrlRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateRewriteUrlRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateRewriteUrlRuleRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The query string after rewriting.
    std::shared_ptr<string> queryString_ = nullptr;
    // Query string rewrite type. Value range:
    // 
    // - static: static mode.
    // - dynamic: dynamic mode.
    std::shared_ptr<string> rewriteQueryStringType_ = nullptr;
    // URI rewrite type. Value range:
    // 
    // - static: static mode.
    // - dynamic: dynamic mode.
    std::shared_ptr<string> rewriteUriType_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: set the value to true
    // - Match specific requests: set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: enable.
    // - off: disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the site configuration, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // The target URI after rewriting.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
