// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSKILLGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOSKILLGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& obj) { 
      DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skillGroup_ != nullptr; };
    // skillGroup Field Functions 
    bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
    void deleteSkillGroup() { this->skillGroup_ = nullptr;};
    inline const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup> & skillGroup() const { DARABONBA_PTR_GET_CONST(skillGroup_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup>) };
    inline vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup> skillGroup() { DARABONBA_PTR_GET(skillGroup_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup>) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& setSkillGroup(const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup> & skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroups& setSkillGroup(vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup> && skillGroup) { DARABONBA_PTR_SET_RVALUE(skillGroup_, skillGroup) };


  protected:
    std::shared_ptr<vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoSkillGroupsSkillGroup>> skillGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
