// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMaskingRulesResponseBodyDataRulesRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMaskingRulesResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaskingRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaskingRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeMaskingRulesResponseBodyDataRules() = default ;
    DescribeMaskingRulesResponseBodyDataRules(const DescribeMaskingRulesResponseBodyDataRules &) = default ;
    DescribeMaskingRulesResponseBodyDataRules(DescribeMaskingRulesResponseBodyDataRules &&) = default ;
    DescribeMaskingRulesResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaskingRulesResponseBodyDataRules() = default ;
    DescribeMaskingRulesResponseBodyDataRules& operator=(const DescribeMaskingRulesResponseBodyDataRules &) = default ;
    DescribeMaskingRulesResponseBodyDataRules& operator=(DescribeMaskingRulesResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultAlgo_ == nullptr
        && return this->enabled_ == nullptr && return this->maskingAlgo_ == nullptr && return this->ruleConfig_ == nullptr && return this->ruleName_ == nullptr; };
    // defaultAlgo Field Functions 
    bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
    void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
    inline string defaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
    inline DescribeMaskingRulesResponseBodyDataRules& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline DescribeMaskingRulesResponseBodyDataRules& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maskingAlgo Field Functions 
    bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
    void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
    inline string maskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
    inline DescribeMaskingRulesResponseBodyDataRules& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline const Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig & ruleConfig() const { DARABONBA_PTR_GET_CONST(ruleConfig_, Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig) };
    inline Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig ruleConfig() { DARABONBA_PTR_GET(ruleConfig_, Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig) };
    inline DescribeMaskingRulesResponseBodyDataRules& setRuleConfig(const Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig & ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };
    inline DescribeMaskingRulesResponseBodyDataRules& setRuleConfig(Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig && ruleConfig) { DARABONBA_PTR_SET_RVALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeMaskingRulesResponseBodyDataRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> defaultAlgo_ = nullptr;
    std::shared_ptr<string> enabled_ = nullptr;
    std::shared_ptr<string> maskingAlgo_ = nullptr;
    std::shared_ptr<Models::DescribeMaskingRulesResponseBodyDataRulesRuleConfig> ruleConfig_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
