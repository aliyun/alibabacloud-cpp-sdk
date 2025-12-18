// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKREQUESTCONFIGRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKREQUESTCONFIGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateCompliancePackRequestConfigRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateCompliancePackRequestConfigRules& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleParameters, configRuleParameters_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateCompliancePackRequestConfigRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleParameters, configRuleParameters_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    UpdateAggregateCompliancePackRequestConfigRules() = default ;
    UpdateAggregateCompliancePackRequestConfigRules(const UpdateAggregateCompliancePackRequestConfigRules &) = default ;
    UpdateAggregateCompliancePackRequestConfigRules(UpdateAggregateCompliancePackRequestConfigRules &&) = default ;
    UpdateAggregateCompliancePackRequestConfigRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateCompliancePackRequestConfigRules() = default ;
    UpdateAggregateCompliancePackRequestConfigRules& operator=(const UpdateAggregateCompliancePackRequestConfigRules &) = default ;
    UpdateAggregateCompliancePackRequestConfigRules& operator=(UpdateAggregateCompliancePackRequestConfigRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->configRuleName_ == nullptr && return this->configRuleParameters_ == nullptr && return this->description_ == nullptr && return this->managedRuleIdentifier_ == nullptr && return this->riskLevel_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline UpdateAggregateCompliancePackRequestConfigRules& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline UpdateAggregateCompliancePackRequestConfigRules& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleParameters Field Functions 
    bool hasConfigRuleParameters() const { return this->configRuleParameters_ != nullptr;};
    void deleteConfigRuleParameters() { this->configRuleParameters_ = nullptr;};
    inline const vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> & configRuleParameters() const { DARABONBA_PTR_GET_CONST(configRuleParameters_, vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>) };
    inline vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> configRuleParameters() { DARABONBA_PTR_GET(configRuleParameters_, vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>) };
    inline UpdateAggregateCompliancePackRequestConfigRules& setConfigRuleParameters(const vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> & configRuleParameters) { DARABONBA_PTR_SET_VALUE(configRuleParameters_, configRuleParameters) };
    inline UpdateAggregateCompliancePackRequestConfigRules& setConfigRuleParameters(vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters> && configRuleParameters) { DARABONBA_PTR_SET_RVALUE(configRuleParameters_, configRuleParameters) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregateCompliancePackRequestConfigRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managedRuleIdentifier Field Functions 
    bool hasManagedRuleIdentifier() const { return this->managedRuleIdentifier_ != nullptr;};
    void deleteManagedRuleIdentifier() { this->managedRuleIdentifier_ = nullptr;};
    inline string managedRuleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(managedRuleIdentifier_, "") };
    inline UpdateAggregateCompliancePackRequestConfigRules& setManagedRuleIdentifier(string managedRuleIdentifier) { DARABONBA_PTR_SET_VALUE(managedRuleIdentifier_, managedRuleIdentifier) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline UpdateAggregateCompliancePackRequestConfigRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The rule ID. If you specify this parameter, Cloud Config adds the rule that has the specified ID to the compliance package.
    // 
    // You only need to configure the `ManagedRuleIdentifier` or `ConfigRuleId` parameter. If you configure both parameters, the value of the `ConfigRuleId` parameter takes precedence. For more information about how to obtain the ID of a rule, see [ListAggregateConfigRules](https://help.aliyun.com/document_detail/264148.html).
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The rule name.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The details of the input parameter of the rule.
    std::shared_ptr<vector<Models::UpdateAggregateCompliancePackRequestConfigRulesConfigRuleParameters>> configRuleParameters_ = nullptr;
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The identifier of the managed rule. Cloud Config automatically creates a rule based on the identifier of the managed rule and adds the rule to the current compliance package.
    // 
    // You need to only configure the `ManagedRuleIdentifier` or `ConfigRuleId` parameter. If you configure both parameters, the value of the `ConfigRuleId` parameter takes precedence. You can call the [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html) operation to obtain the identifier of the managed rule.
    std::shared_ptr<string> managedRuleIdentifier_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high risk level
    // *   2: medium risk level
    // *   3: low risk level
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
