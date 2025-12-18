// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULESMANAGEDRULELISTSCOPE_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULESMANAGEDRULELISTSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesResponseBodyManagedRulesManagedRuleListScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResourceTypes, complianceResourceTypes_);
    };
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope() = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope(const ListManagedRulesResponseBodyManagedRulesManagedRuleListScope &) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope(ListManagedRulesResponseBodyManagedRulesManagedRuleListScope &&) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesResponseBodyManagedRulesManagedRuleListScope() = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& operator=(const ListManagedRulesResponseBodyManagedRulesManagedRuleListScope &) = default ;
    ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& operator=(ListManagedRulesResponseBodyManagedRulesManagedRuleListScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResourceTypes_ == nullptr; };
    // complianceResourceTypes Field Functions 
    bool hasComplianceResourceTypes() const { return this->complianceResourceTypes_ != nullptr;};
    void deleteComplianceResourceTypes() { this->complianceResourceTypes_ = nullptr;};
    inline const vector<string> & complianceResourceTypes() const { DARABONBA_PTR_GET_CONST(complianceResourceTypes_, vector<string>) };
    inline vector<string> complianceResourceTypes() { DARABONBA_PTR_GET(complianceResourceTypes_, vector<string>) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& setComplianceResourceTypes(const vector<string> & complianceResourceTypes) { DARABONBA_PTR_SET_VALUE(complianceResourceTypes_, complianceResourceTypes) };
    inline ListManagedRulesResponseBodyManagedRulesManagedRuleListScope& setComplianceResourceTypes(vector<string> && complianceResourceTypes) { DARABONBA_PTR_SET_RVALUE(complianceResourceTypes_, complianceResourceTypes) };


  protected:
    // The types of resources to which the managed rule applies.
    std::shared_ptr<vector<string>> complianceResourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
