// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODYRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODYRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemClientRulesResponseBodyRuleListPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemClientRulesResponseBodyRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRulesResponseBodyRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationName, aggregationName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRulesResponseBodyRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationName, aggregationName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    ListSystemClientRulesResponseBodyRuleList() = default ;
    ListSystemClientRulesResponseBodyRuleList(const ListSystemClientRulesResponseBodyRuleList &) = default ;
    ListSystemClientRulesResponseBodyRuleList(ListSystemClientRulesResponseBodyRuleList &&) = default ;
    ListSystemClientRulesResponseBodyRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRulesResponseBodyRuleList() = default ;
    ListSystemClientRulesResponseBodyRuleList& operator=(const ListSystemClientRulesResponseBodyRuleList &) = default ;
    ListSystemClientRulesResponseBodyRuleList& operator=(ListSystemClientRulesResponseBodyRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationName_ != nullptr
        && this->description_ != nullptr && this->platform_ != nullptr && this->policies_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr
        && this->ruleType_ != nullptr && this->status_ != nullptr && this->switchEnable_ != nullptr && this->switchId_ != nullptr; };
    // aggregationName Field Functions 
    bool hasAggregationName() const { return this->aggregationName_ != nullptr;};
    void deleteAggregationName() { this->aggregationName_ = nullptr;};
    inline string aggregationName() const { DARABONBA_PTR_GET_DEFAULT(aggregationName_, "") };
    inline ListSystemClientRulesResponseBodyRuleList& setAggregationName(string aggregationName) { DARABONBA_PTR_SET_VALUE(aggregationName_, aggregationName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSystemClientRulesResponseBodyRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListSystemClientRulesResponseBodyRuleList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies>) };
    inline vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies>) };
    inline ListSystemClientRulesResponseBodyRuleList& setPolicies(const vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListSystemClientRulesResponseBodyRuleList& setPolicies(vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListSystemClientRulesResponseBodyRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListSystemClientRulesResponseBodyRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListSystemClientRulesResponseBodyRuleList& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListSystemClientRulesResponseBodyRuleList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchEnable Field Functions 
    bool hasSwitchEnable() const { return this->switchEnable_ != nullptr;};
    void deleteSwitchEnable() { this->switchEnable_ = nullptr;};
    inline bool switchEnable() const { DARABONBA_PTR_GET_DEFAULT(switchEnable_, false) };
    inline ListSystemClientRulesResponseBodyRuleList& setSwitchEnable(bool switchEnable) { DARABONBA_PTR_SET_VALUE(switchEnable_, switchEnable) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline ListSystemClientRulesResponseBodyRuleList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The name of the aggregation type for the system defense rule.
    std::shared_ptr<string> aggregationName_ = nullptr;
    // The description of the system defense rule.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the OS. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    // *   **all**: all types
    std::shared_ptr<string> platform_ = nullptr;
    // An array that consists of policies.
    std::shared_ptr<vector<Models::ListSystemClientRulesResponseBodyRuleListPolicies>> policies_ = nullptr;
    // The ID of the system defense rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the system defense rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the system defense rule. Valid values:
    // 
    // *   **1**: alihips, process-specific defense
    // *   **2**: alinet, network-specific defense
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The status of the system defense rule. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // Whether the current rule switch takes effect. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> switchEnable_ = nullptr;
    // The switch ID of the system defense rule.
    std::shared_ptr<string> switchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
