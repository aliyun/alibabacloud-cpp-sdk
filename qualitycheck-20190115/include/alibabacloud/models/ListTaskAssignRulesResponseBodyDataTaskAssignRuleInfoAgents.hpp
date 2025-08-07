// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOAGENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOAGENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agent_ != nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent> & agent() const { DARABONBA_PTR_GET_CONST(agent_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent>) };
    inline vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent> agent() { DARABONBA_PTR_GET(agent_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent>) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& setAgent(const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent> & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgents& setAgent(vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent> && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


  protected:
    std::shared_ptr<vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent>> agent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
