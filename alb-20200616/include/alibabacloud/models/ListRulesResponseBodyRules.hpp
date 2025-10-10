// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActions.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleConditions.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListRulesResponseBodyRules() = default ;
    ListRulesResponseBodyRules(const ListRulesResponseBodyRules &) = default ;
    ListRulesResponseBodyRules(ListRulesResponseBodyRules &&) = default ;
    ListRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRules() = default ;
    ListRulesResponseBodyRules& operator=(const ListRulesResponseBodyRules &) = default ;
    ListRulesResponseBodyRules& operator=(ListRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->direction_ != nullptr
        && this->listenerId_ != nullptr && this->loadBalancerId_ != nullptr && this->priority_ != nullptr && this->ruleActions_ != nullptr && this->ruleConditions_ != nullptr
        && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleStatus_ != nullptr && this->tags_ != nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListRulesResponseBodyRules& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListRulesResponseBodyRules& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListRulesResponseBodyRules& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListRulesResponseBodyRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesRuleActions> & ruleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Models::ListRulesResponseBodyRulesRuleActions>) };
    inline vector<Models::ListRulesResponseBodyRulesRuleActions> ruleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Models::ListRulesResponseBodyRulesRuleActions>) };
    inline ListRulesResponseBodyRules& setRuleActions(const vector<Models::ListRulesResponseBodyRulesRuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
    inline ListRulesResponseBodyRules& setRuleActions(vector<Models::ListRulesResponseBodyRulesRuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesRuleConditions> & ruleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<Models::ListRulesResponseBodyRulesRuleConditions>) };
    inline vector<Models::ListRulesResponseBodyRulesRuleConditions> ruleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<Models::ListRulesResponseBodyRulesRuleConditions>) };
    inline ListRulesResponseBodyRules& setRuleConditions(const vector<Models::ListRulesResponseBodyRulesRuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline ListRulesResponseBodyRules& setRuleConditions(vector<Models::ListRulesResponseBodyRulesRuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListRulesResponseBodyRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListRulesResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline ListRulesResponseBodyRules& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListRulesResponseBodyRulesTags>) };
    inline vector<Models::ListRulesResponseBodyRulesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListRulesResponseBodyRulesTags>) };
    inline ListRulesResponseBodyRules& setTags(const vector<Models::ListRulesResponseBodyRulesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListRulesResponseBodyRules& setTags(vector<Models::ListRulesResponseBodyRulesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The direction to which the forwarding rule is applied. Valid values:
    // 
    // *   Request (default): The forwarding rule is applied to requests. The forwarding action is performed on packets that are forwarded from clients to ALB.
    // *   Responses: The forwarding rule is applied to responses. The forwarding action is performed on packets that are returned from backend servers to ALB.
    // 
    // >  Basic ALB instances support only the Response direction.
    std::shared_ptr<string> direction_ = nullptr;
    // The ID of the listener that is associated with the forwarding rule.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The ID of the Application Load Balancer (ALB) instance that is associated with the forwarding rule.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The priority of the forwarding rule. Valid values: **1 to 10000**. A smaller value indicates a higher priority.
    // 
    // >  The priority of each forwarding rule added to a listener must be unique.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The action of the forwarding rule.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesRuleActions>> ruleActions_ = nullptr;
    // The conditions of the forwarding rule.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesRuleConditions>> ruleConditions_ = nullptr;
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule. The name must be 2 to 128 letters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the forwarding rule. Valid values:
    // 
    // *   **Provisioning**: The forwarding rule is being created.
    // *   **Configuring**: The forwarding rule is being modified.
    // *   **Available**: The forwarding rule is available.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
