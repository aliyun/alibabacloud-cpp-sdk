// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSKILLGROUPSSKILLGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSKILLGROUPSSKILLGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& obj) { 
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skillId_ != nullptr
        && this->skillName_ != nullptr; };
    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string skillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string skillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    std::shared_ptr<string> skillId_ = nullptr;
    std::shared_ptr<string> skillName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
