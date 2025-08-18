// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPRESPONSEHEADERMODIFICATIONRULESRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPRESPONSEHEADERMODIFICATIONRULESRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpResponseHeaderModificationRulesResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpResponseHeaderModificationRulesResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpResponseHeaderModificationRulesResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs() = default ;
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs(const ListHttpResponseHeaderModificationRulesResponseBodyConfigs &) = default ;
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs(ListHttpResponseHeaderModificationRulesResponseBodyConfigs &&) = default ;
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpResponseHeaderModificationRulesResponseBodyConfigs() = default ;
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs& operator=(const ListHttpResponseHeaderModificationRulesResponseBodyConfigs &) = default ;
    ListHttpResponseHeaderModificationRulesResponseBodyConfigs& operator=(ListHttpResponseHeaderModificationRulesResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->configType_ != nullptr && this->responseHeaderModification_ != nullptr && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr
        && this->sequence_ != nullptr && this->siteVersion_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // responseHeaderModification Field Functions 
    bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
    void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
    inline const vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification> & responseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification>) };
    inline vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification> responseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification>) };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setResponseHeaderModification(const vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setResponseHeaderModification(vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListHttpResponseHeaderModificationRulesResponseBodyConfigs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type. Possible values:
    // - global: Global configuration.
    // - rule: Rule configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Modify response headers, supporting add, delete, and modify operations.
    std::shared_ptr<vector<Models::ListHttpResponseHeaderModificationRulesResponseBodyConfigsResponseHeaderModification>> responseHeaderModification_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the configuration, with the default being version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
