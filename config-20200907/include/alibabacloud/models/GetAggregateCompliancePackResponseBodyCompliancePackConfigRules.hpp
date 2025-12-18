// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKCONFIGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKCONFIGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackResponseBodyCompliancePackConfigRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleParameters, configRuleParameters_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleParameters, configRuleParameters_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules(const GetAggregateCompliancePackResponseBodyCompliancePackConfigRules &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules(GetAggregateCompliancePackResponseBodyCompliancePackConfigRules &&) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackResponseBodyCompliancePackConfigRules() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& operator=(const GetAggregateCompliancePackResponseBodyCompliancePackConfigRules &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& operator=(GetAggregateCompliancePackResponseBodyCompliancePackConfigRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->configRuleName_ == nullptr && return this->configRuleParameters_ == nullptr && return this->description_ == nullptr && return this->managedRuleIdentifier_ == nullptr && return this->resourceTypesScope_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleParameters Field Functions 
    bool hasConfigRuleParameters() const { return this->configRuleParameters_ != nullptr;};
    void deleteConfigRuleParameters() { this->configRuleParameters_ = nullptr;};
    inline const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> & configRuleParameters() const { DARABONBA_PTR_GET_CONST(configRuleParameters_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>) };
    inline vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> configRuleParameters() { DARABONBA_PTR_GET(configRuleParameters_, vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>) };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setConfigRuleParameters(const vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> & configRuleParameters) { DARABONBA_PTR_SET_VALUE(configRuleParameters_, configRuleParameters) };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setConfigRuleParameters(vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters> && configRuleParameters) { DARABONBA_PTR_SET_RVALUE(configRuleParameters_, configRuleParameters) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // managedRuleIdentifier Field Functions 
    bool hasManagedRuleIdentifier() const { return this->managedRuleIdentifier_ != nullptr;};
    void deleteManagedRuleIdentifier() { this->managedRuleIdentifier_ = nullptr;};
    inline string managedRuleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(managedRuleIdentifier_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setManagedRuleIdentifier(string managedRuleIdentifier) { DARABONBA_PTR_SET_VALUE(managedRuleIdentifier_, managedRuleIdentifier) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline string resourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The rule ID.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The details of the input parameter of the rule.
    std::shared_ptr<vector<Models::GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters>> configRuleParameters_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the rule template.
    std::shared_ptr<string> managedRuleIdentifier_ = nullptr;
    // The type of the resource evaluated based on the rule. Multiple resource types are separated with commas (,).
    std::shared_ptr<string> resourceTypesScope_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
