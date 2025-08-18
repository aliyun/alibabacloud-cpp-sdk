// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESGROUPSRESPONSEBODYMANAGEDRULESGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESGROUPSRESPONSEBODYMANAGEDRULESGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListManagedRulesGroupsResponseBodyManagedRulesGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesGroupsResponseBodyManagedRulesGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesGroupsResponseBodyManagedRulesGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    ListManagedRulesGroupsResponseBodyManagedRulesGroups() = default ;
    ListManagedRulesGroupsResponseBodyManagedRulesGroups(const ListManagedRulesGroupsResponseBodyManagedRulesGroups &) = default ;
    ListManagedRulesGroupsResponseBodyManagedRulesGroups(ListManagedRulesGroupsResponseBodyManagedRulesGroups &&) = default ;
    ListManagedRulesGroupsResponseBodyManagedRulesGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesGroupsResponseBodyManagedRulesGroups() = default ;
    ListManagedRulesGroupsResponseBodyManagedRulesGroups& operator=(const ListManagedRulesGroupsResponseBodyManagedRulesGroups &) = default ;
    ListManagedRulesGroupsResponseBodyManagedRulesGroups& operator=(ListManagedRulesGroupsResponseBodyManagedRulesGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ruleCount_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListManagedRulesGroupsResponseBodyManagedRulesGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int64_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
    inline ListManagedRulesGroupsResponseBodyManagedRulesGroups& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // Name of the managed rule group.
    std::shared_ptr<string> name_ = nullptr;
    // Number of rules within the managed rule group.
    std::shared_ptr<int64_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
