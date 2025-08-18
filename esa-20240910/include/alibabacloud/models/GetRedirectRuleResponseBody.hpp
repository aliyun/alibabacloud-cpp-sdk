// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDIRECTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREDIRECTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRedirectRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRedirectRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserveQueryString, reserveQueryString_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetRedirectRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserveQueryString, reserveQueryString_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetRedirectRuleResponseBody() = default ;
    GetRedirectRuleResponseBody(const GetRedirectRuleResponseBody &) = default ;
    GetRedirectRuleResponseBody(GetRedirectRuleResponseBody &&) = default ;
    GetRedirectRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRedirectRuleResponseBody() = default ;
    GetRedirectRuleResponseBody& operator=(const GetRedirectRuleResponseBody &) = default ;
    GetRedirectRuleResponseBody& operator=(GetRedirectRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->configType_ != nullptr && this->requestId_ != nullptr && this->reserveQueryString_ != nullptr && this->rule_ != nullptr && this->ruleEnable_ != nullptr
        && this->ruleName_ != nullptr && this->sequence_ != nullptr && this->siteVersion_ != nullptr && this->statusCode_ != nullptr && this->targetUrl_ != nullptr
        && this->type_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetRedirectRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetRedirectRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRedirectRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserveQueryString Field Functions 
    bool hasReserveQueryString() const { return this->reserveQueryString_ != nullptr;};
    void deleteReserveQueryString() { this->reserveQueryString_ = nullptr;};
    inline string reserveQueryString() const { DARABONBA_PTR_GET_DEFAULT(reserveQueryString_, "") };
    inline GetRedirectRuleResponseBody& setReserveQueryString(string reserveQueryString) { DARABONBA_PTR_SET_VALUE(reserveQueryString_, reserveQueryString) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetRedirectRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetRedirectRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetRedirectRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetRedirectRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetRedirectRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline GetRedirectRuleResponseBody& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline GetRedirectRuleResponseBody& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRedirectRuleResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type. Possible values:
    // - global: Global configuration.
    // - rule: Rule-based configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Preserve query string. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> reserveQueryString_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, this parameter can specify the effective version of the site, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Response status code used by the node to respond to the client with the redirect address. Possible values:
    // - 301
    // - 302
    // - 303
    // - 307
    // - 308
    std::shared_ptr<string> statusCode_ = nullptr;
    // Target URL after redirection.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // Redirect type. Possible values:
    // - static: Static mode.
    // - dynamic: Dynamic mode.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
