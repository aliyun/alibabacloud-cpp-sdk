// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUESTMANAGEDRULESET_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUESTMANAGEDRULESET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafManagedRulesRequestManagedRulesetManagedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafManagedRulesRequestManagedRuleset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafManagedRulesRequestManagedRuleset& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafManagedRulesRequestManagedRuleset& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
    };
    ListWafManagedRulesRequestManagedRuleset() = default ;
    ListWafManagedRulesRequestManagedRuleset(const ListWafManagedRulesRequestManagedRuleset &) = default ;
    ListWafManagedRulesRequestManagedRuleset(ListWafManagedRulesRequestManagedRuleset &&) = default ;
    ListWafManagedRulesRequestManagedRuleset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafManagedRulesRequestManagedRuleset() = default ;
    ListWafManagedRulesRequestManagedRuleset& operator=(const ListWafManagedRulesRequestManagedRuleset &) = default ;
    ListWafManagedRulesRequestManagedRuleset& operator=(ListWafManagedRulesRequestManagedRuleset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->attackType_ == nullptr && return this->managedRules_ == nullptr && return this->protectionLevel_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListWafManagedRulesRequestManagedRuleset& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline ListWafManagedRulesRequestManagedRuleset& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules> & managedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules>) };
    inline vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules> managedRules() { DARABONBA_PTR_GET(managedRules_, vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules>) };
    inline ListWafManagedRulesRequestManagedRuleset& setManagedRules(const vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline ListWafManagedRulesRequestManagedRuleset& setManagedRules(vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline int32_t protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
    inline ListWafManagedRulesRequestManagedRuleset& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int32_t> attackType_ = nullptr;
    std::shared_ptr<vector<Models::ListWafManagedRulesRequestManagedRulesetManagedRules>> managedRules_ = nullptr;
    std::shared_ptr<int32_t> protectionLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
