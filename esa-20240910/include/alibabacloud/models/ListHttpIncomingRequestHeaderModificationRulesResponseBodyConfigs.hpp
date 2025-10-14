// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs(const ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs(ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs &&) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& operator=(const ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& operator=(ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configType_ == nullptr && return this->requestHeaderModification_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr
        && return this->sequence_ == nullptr && return this->siteVersion_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // requestHeaderModification Field Functions 
    bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
    void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
    inline const vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification> & requestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification>) };
    inline vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification> requestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification>) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setRequestHeaderModification(const vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setRequestHeaderModification(vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The type of the configuration. Valid values:
    // 
    // *   global: global configurations.
    // *   rule: rule configurations.
    std::shared_ptr<string> configType_ = nullptr;
    // The configurations of modifying request headers. You can add, delete, or modify a request header.
    std::shared_ptr<vector<Models::ListHttpIncomingRequestHeaderModificationRulesResponseBodyConfigsRequestHeaderModification>> requestHeaderModification_ = nullptr;
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
    // The version number of the website configurations. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
