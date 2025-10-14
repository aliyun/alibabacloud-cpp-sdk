// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLAN_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobPlanContacts.hpp>
#include <alibabacloud/models/MigrationJobPlanEscalations.hpp>
#include <alibabacloud/models/MigrationJobPlanGroups.hpp>
#include <alibabacloud/models/MigrationJobPlanStrategies.hpp>
#include <alibabacloud/models/MigrationJobPlanSubscriptions.hpp>
#include <alibabacloud/models/MigrationJobPlanTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlan& obj) { 
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
      DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
      DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    MigrationJobPlan() = default ;
    MigrationJobPlan(const MigrationJobPlan &) = default ;
    MigrationJobPlan(MigrationJobPlan &&) = default ;
    MigrationJobPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlan() = default ;
    MigrationJobPlan& operator=(const MigrationJobPlan &) = default ;
    MigrationJobPlan& operator=(MigrationJobPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && return this->escalations_ == nullptr && return this->groups_ == nullptr && return this->ruleNames_ == nullptr && return this->strategies_ == nullptr && return this->subscriptions_ == nullptr
        && return this->targets_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::MigrationJobPlanContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::MigrationJobPlanContacts>) };
    inline vector<Models::MigrationJobPlanContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::MigrationJobPlanContacts>) };
    inline MigrationJobPlan& setContacts(const vector<Models::MigrationJobPlanContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MigrationJobPlan& setContacts(vector<Models::MigrationJobPlanContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<Models::MigrationJobPlanEscalations> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Models::MigrationJobPlanEscalations>) };
    inline vector<Models::MigrationJobPlanEscalations> escalations() { DARABONBA_PTR_GET(escalations_, vector<Models::MigrationJobPlanEscalations>) };
    inline MigrationJobPlan& setEscalations(const vector<Models::MigrationJobPlanEscalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline MigrationJobPlan& setEscalations(vector<Models::MigrationJobPlanEscalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<Models::MigrationJobPlanGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Models::MigrationJobPlanGroups>) };
    inline vector<Models::MigrationJobPlanGroups> groups() { DARABONBA_PTR_GET(groups_, vector<Models::MigrationJobPlanGroups>) };
    inline MigrationJobPlan& setGroups(const vector<Models::MigrationJobPlanGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline MigrationJobPlan& setGroups(vector<Models::MigrationJobPlanGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & ruleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> ruleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline MigrationJobPlan& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline MigrationJobPlan& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const vector<Models::MigrationJobPlanStrategies> & strategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<Models::MigrationJobPlanStrategies>) };
    inline vector<Models::MigrationJobPlanStrategies> strategies() { DARABONBA_PTR_GET(strategies_, vector<Models::MigrationJobPlanStrategies>) };
    inline MigrationJobPlan& setStrategies(const vector<Models::MigrationJobPlanStrategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline MigrationJobPlan& setStrategies(vector<Models::MigrationJobPlanStrategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


    // subscriptions Field Functions 
    bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
    void deleteSubscriptions() { this->subscriptions_ = nullptr;};
    inline const vector<Models::MigrationJobPlanSubscriptions> & subscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<Models::MigrationJobPlanSubscriptions>) };
    inline vector<Models::MigrationJobPlanSubscriptions> subscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<Models::MigrationJobPlanSubscriptions>) };
    inline MigrationJobPlan& setSubscriptions(const vector<Models::MigrationJobPlanSubscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
    inline MigrationJobPlan& setSubscriptions(vector<Models::MigrationJobPlanSubscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::MigrationJobPlanTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::MigrationJobPlanTargets>) };
    inline vector<Models::MigrationJobPlanTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::MigrationJobPlanTargets>) };
    inline MigrationJobPlan& setTargets(const vector<Models::MigrationJobPlanTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline MigrationJobPlan& setTargets(vector<Models::MigrationJobPlanTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    std::shared_ptr<vector<Models::MigrationJobPlanContacts>> contacts_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobPlanEscalations>> escalations_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobPlanGroups>> groups_ = nullptr;
    std::shared_ptr<vector<string>> ruleNames_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobPlanStrategies>> strategies_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobPlanSubscriptions>> subscriptions_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobPlanTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
