// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPREQUESTHEADERMODIFICATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPREQUESTHEADERMODIFICATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetHttpRequestHeaderModificationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpRequestHeaderModificationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpRequestHeaderModificationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetHttpRequestHeaderModificationRuleResponseBody() = default ;
    GetHttpRequestHeaderModificationRuleResponseBody(const GetHttpRequestHeaderModificationRuleResponseBody &) = default ;
    GetHttpRequestHeaderModificationRuleResponseBody(GetHttpRequestHeaderModificationRuleResponseBody &&) = default ;
    GetHttpRequestHeaderModificationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpRequestHeaderModificationRuleResponseBody() = default ;
    GetHttpRequestHeaderModificationRuleResponseBody& operator=(const GetHttpRequestHeaderModificationRuleResponseBody &) = default ;
    GetHttpRequestHeaderModificationRuleResponseBody& operator=(GetHttpRequestHeaderModificationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configType_ == nullptr && return this->requestHeaderModification_ == nullptr && return this->requestId_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr
        && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->siteVersion_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // requestHeaderModification Field Functions 
    bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
    void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
    inline const vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification> & requestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification>) };
    inline vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification> requestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification>) };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRequestHeaderModification(const vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRequestHeaderModification(vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetHttpRequestHeaderModificationRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type. Possible values:
    // - global: Global configuration.
    // - rule: Rule-based configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Modify request headers, supporting add, delete, and modify operations.
    std::shared_ptr<vector<GetHttpRequestHeaderModificationRuleResponseBodyRequestHeaderModification>> requestHeaderModification_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq "video.example.com")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the site, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
