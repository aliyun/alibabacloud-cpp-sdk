// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODYRULELISTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODYRULELISTPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSystemClientRulesResponseBodyRuleListPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRulesResponseBodyRuleListPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyKey, policyKey_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRulesResponseBodyRuleListPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyKey, policyKey_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    ListSystemClientRulesResponseBodyRuleListPolicies() = default ;
    ListSystemClientRulesResponseBodyRuleListPolicies(const ListSystemClientRulesResponseBodyRuleListPolicies &) = default ;
    ListSystemClientRulesResponseBodyRuleListPolicies(ListSystemClientRulesResponseBodyRuleListPolicies &&) = default ;
    ListSystemClientRulesResponseBodyRuleListPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRulesResponseBodyRuleListPolicies() = default ;
    ListSystemClientRulesResponseBodyRuleListPolicies& operator=(const ListSystemClientRulesResponseBodyRuleListPolicies &) = default ;
    ListSystemClientRulesResponseBodyRuleListPolicies& operator=(ListSystemClientRulesResponseBodyRuleListPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyKey_ == nullptr
        && return this->policyName_ == nullptr; };
    // policyKey Field Functions 
    bool hasPolicyKey() const { return this->policyKey_ != nullptr;};
    void deletePolicyKey() { this->policyKey_ = nullptr;};
    inline string policyKey() const { DARABONBA_PTR_GET_DEFAULT(policyKey_, "") };
    inline ListSystemClientRulesResponseBodyRuleListPolicies& setPolicyKey(string policyKey) { DARABONBA_PTR_SET_VALUE(policyKey_, policyKey) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListSystemClientRulesResponseBodyRuleListPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The policy key.
    std::shared_ptr<string> policyKey_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
