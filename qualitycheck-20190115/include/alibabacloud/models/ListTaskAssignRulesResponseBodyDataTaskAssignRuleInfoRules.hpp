// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleBasicInfo, ruleBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleBasicInfo, ruleBasicInfo_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleBasicInfo_ != nullptr; };
    // ruleBasicInfo Field Functions 
    bool hasRuleBasicInfo() const { return this->ruleBasicInfo_ != nullptr;};
    void deleteRuleBasicInfo() { this->ruleBasicInfo_ = nullptr;};
    inline const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo> & ruleBasicInfo() const { DARABONBA_PTR_GET_CONST(ruleBasicInfo_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo>) };
    inline vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo> ruleBasicInfo() { DARABONBA_PTR_GET(ruleBasicInfo_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo>) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& setRuleBasicInfo(const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo> & ruleBasicInfo) { DARABONBA_PTR_SET_VALUE(ruleBasicInfo_, ruleBasicInfo) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRules& setRuleBasicInfo(vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo> && ruleBasicInfo) { DARABONBA_PTR_SET_RVALUE(ruleBasicInfo_, ruleBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo>> ruleBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
