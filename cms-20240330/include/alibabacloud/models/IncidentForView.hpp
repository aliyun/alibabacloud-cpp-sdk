// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncidentEscalationPolicyForView.hpp>
#include <map>
#include <alibabacloud/models/ContactForIncidentView.hpp>
#include <alibabacloud/models/IncidentResponsePlanForView.hpp>
#include <alibabacloud/models/EventResourceForIncidentView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentForView& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(groupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(groupingKeys, groupingKeys_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(owners, owners_);
      DARABONBA_PTR_TO_JSON(participants, participants_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(relatedResources, relatedResources_);
      DARABONBA_PTR_TO_JSON(rootCauseCategory, rootCauseCategory_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(solution, solution_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(subscriptionUuid, subscriptionUuid_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentForView& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(groupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(groupingKeys, groupingKeys_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(owners, owners_);
      DARABONBA_PTR_FROM_JSON(participants, participants_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(relatedResources, relatedResources_);
      DARABONBA_PTR_FROM_JSON(rootCauseCategory, rootCauseCategory_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(solution, solution_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(subscriptionUuid, subscriptionUuid_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentForView() = default ;
    IncidentForView(const IncidentForView &) = default ;
    IncidentForView(IncidentForView &&) = default ;
    IncidentForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentForView() = default ;
    IncidentForView& operator=(const IncidentForView &) = default ;
    IncidentForView& operator=(IncidentForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->escalations_ == nullptr && return this->groupUuid_ == nullptr && return this->groupingKeys_ == nullptr && return this->incidentId_ == nullptr && return this->notifyStrategyName_ == nullptr
        && return this->notifyStrategyUuid_ == nullptr && return this->operator_ == nullptr && return this->owners_ == nullptr && return this->participants_ == nullptr && return this->plan_ == nullptr
        && return this->relatedResources_ == nullptr && return this->rootCauseCategory_ == nullptr && return this->severity_ == nullptr && return this->solution_ == nullptr && return this->state_ == nullptr
        && return this->subscriptionName_ == nullptr && return this->subscriptionUuid_ == nullptr && return this->time_ == nullptr && return this->title_ == nullptr && return this->userId_ == nullptr
        && return this->workspace_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentForView& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<IncidentEscalationPolicyForView> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<IncidentEscalationPolicyForView>) };
    inline vector<IncidentEscalationPolicyForView> escalations() { DARABONBA_PTR_GET(escalations_, vector<IncidentEscalationPolicyForView>) };
    inline IncidentForView& setEscalations(const vector<IncidentEscalationPolicyForView> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline IncidentForView& setEscalations(vector<IncidentEscalationPolicyForView> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string groupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline IncidentForView& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // groupingKeys Field Functions 
    bool hasGroupingKeys() const { return this->groupingKeys_ != nullptr;};
    void deleteGroupingKeys() { this->groupingKeys_ = nullptr;};
    inline const map<string, string> & groupingKeys() const { DARABONBA_PTR_GET_CONST(groupingKeys_, map<string, string>) };
    inline map<string, string> groupingKeys() { DARABONBA_PTR_GET(groupingKeys_, map<string, string>) };
    inline IncidentForView& setGroupingKeys(const map<string, string> & groupingKeys) { DARABONBA_PTR_SET_VALUE(groupingKeys_, groupingKeys) };
    inline IncidentForView& setGroupingKeys(map<string, string> && groupingKeys) { DARABONBA_PTR_SET_RVALUE(groupingKeys_, groupingKeys) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentForView& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string notifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline IncidentForView& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // notifyStrategyUuid Field Functions 
    bool hasNotifyStrategyUuid() const { return this->notifyStrategyUuid_ != nullptr;};
    void deleteNotifyStrategyUuid() { this->notifyStrategyUuid_ = nullptr;};
    inline string notifyStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyUuid_, "") };
    inline IncidentForView& setNotifyStrategyUuid(string notifyStrategyUuid) { DARABONBA_PTR_SET_VALUE(notifyStrategyUuid_, notifyStrategyUuid) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const ContactForIncidentView & _operator() const { DARABONBA_PTR_GET_CONST(operator_, ContactForIncidentView) };
    inline ContactForIncidentView _operator() { DARABONBA_PTR_GET(operator_, ContactForIncidentView) };
    inline IncidentForView& setOperator(const ContactForIncidentView & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline IncidentForView& setOperator(ContactForIncidentView && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


    // owners Field Functions 
    bool hasOwners() const { return this->owners_ != nullptr;};
    void deleteOwners() { this->owners_ = nullptr;};
    inline const vector<ContactForIncidentView> & owners() const { DARABONBA_PTR_GET_CONST(owners_, vector<ContactForIncidentView>) };
    inline vector<ContactForIncidentView> owners() { DARABONBA_PTR_GET(owners_, vector<ContactForIncidentView>) };
    inline IncidentForView& setOwners(const vector<ContactForIncidentView> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
    inline IncidentForView& setOwners(vector<ContactForIncidentView> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


    // participants Field Functions 
    bool hasParticipants() const { return this->participants_ != nullptr;};
    void deleteParticipants() { this->participants_ = nullptr;};
    inline const vector<ContactForIncidentView> & participants() const { DARABONBA_PTR_GET_CONST(participants_, vector<ContactForIncidentView>) };
    inline vector<ContactForIncidentView> participants() { DARABONBA_PTR_GET(participants_, vector<ContactForIncidentView>) };
    inline IncidentForView& setParticipants(const vector<ContactForIncidentView> & participants) { DARABONBA_PTR_SET_VALUE(participants_, participants) };
    inline IncidentForView& setParticipants(vector<ContactForIncidentView> && participants) { DARABONBA_PTR_SET_RVALUE(participants_, participants) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline const IncidentResponsePlanForView & plan() const { DARABONBA_PTR_GET_CONST(plan_, IncidentResponsePlanForView) };
    inline IncidentResponsePlanForView plan() { DARABONBA_PTR_GET(plan_, IncidentResponsePlanForView) };
    inline IncidentForView& setPlan(const IncidentResponsePlanForView & plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };
    inline IncidentForView& setPlan(IncidentResponsePlanForView && plan) { DARABONBA_PTR_SET_RVALUE(plan_, plan) };


    // relatedResources Field Functions 
    bool hasRelatedResources() const { return this->relatedResources_ != nullptr;};
    void deleteRelatedResources() { this->relatedResources_ = nullptr;};
    inline const vector<EventResourceForIncidentView> & relatedResources() const { DARABONBA_PTR_GET_CONST(relatedResources_, vector<EventResourceForIncidentView>) };
    inline vector<EventResourceForIncidentView> relatedResources() { DARABONBA_PTR_GET(relatedResources_, vector<EventResourceForIncidentView>) };
    inline IncidentForView& setRelatedResources(const vector<EventResourceForIncidentView> & relatedResources) { DARABONBA_PTR_SET_VALUE(relatedResources_, relatedResources) };
    inline IncidentForView& setRelatedResources(vector<EventResourceForIncidentView> && relatedResources) { DARABONBA_PTR_SET_RVALUE(relatedResources_, relatedResources) };


    // rootCauseCategory Field Functions 
    bool hasRootCauseCategory() const { return this->rootCauseCategory_ != nullptr;};
    void deleteRootCauseCategory() { this->rootCauseCategory_ = nullptr;};
    inline string rootCauseCategory() const { DARABONBA_PTR_GET_DEFAULT(rootCauseCategory_, "") };
    inline IncidentForView& setRootCauseCategory(string rootCauseCategory) { DARABONBA_PTR_SET_VALUE(rootCauseCategory_, rootCauseCategory) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline IncidentForView& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline IncidentForView& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline IncidentForView& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline IncidentForView& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // subscriptionUuid Field Functions 
    bool hasSubscriptionUuid() const { return this->subscriptionUuid_ != nullptr;};
    void deleteSubscriptionUuid() { this->subscriptionUuid_ = nullptr;};
    inline string subscriptionUuid() const { DARABONBA_PTR_GET_DEFAULT(subscriptionUuid_, "") };
    inline IncidentForView& setSubscriptionUuid(string subscriptionUuid) { DARABONBA_PTR_SET_VALUE(subscriptionUuid_, subscriptionUuid) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentForView& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentForView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<IncidentEscalationPolicyForView>> escalations_ = nullptr;
    std::shared_ptr<string> groupUuid_ = nullptr;
    std::shared_ptr<map<string, string>> groupingKeys_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> notifyStrategyName_ = nullptr;
    std::shared_ptr<string> notifyStrategyUuid_ = nullptr;
    std::shared_ptr<ContactForIncidentView> operator_ = nullptr;
    std::shared_ptr<vector<ContactForIncidentView>> owners_ = nullptr;
    std::shared_ptr<vector<ContactForIncidentView>> participants_ = nullptr;
    std::shared_ptr<IncidentResponsePlanForView> plan_ = nullptr;
    std::shared_ptr<vector<EventResourceForIncidentView>> relatedResources_ = nullptr;
    std::shared_ptr<string> rootCauseCategory_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> solution_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> subscriptionName_ = nullptr;
    std::shared_ptr<string> subscriptionUuid_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
