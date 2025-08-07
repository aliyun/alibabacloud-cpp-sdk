// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOAGENTSAGENT_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFOAGENTSAGENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentName_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoAgentsAgent& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
