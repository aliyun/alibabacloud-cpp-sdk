// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYRESPONSEBODYNOTIFICATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules.hpp>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule.hpp>
#include <alibabacloud/models/CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DirectedMode, directedMode_);
      DARABONBA_PTR_TO_JSON(EscalationPolicyId, escalationPolicyId_);
      DARABONBA_PTR_TO_JSON(GroupRule, groupRule_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_TO_JSON(NotifyTemplate, notifyTemplate_);
      DARABONBA_PTR_TO_JSON(Repeat, repeat_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(SendRecoverMessage, sendRecoverMessage_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectedMode, directedMode_);
      DARABONBA_PTR_FROM_JSON(EscalationPolicyId, escalationPolicyId_);
      DARABONBA_PTR_FROM_JSON(GroupRule, groupRule_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_FROM_JSON(NotifyTemplate, notifyTemplate_);
      DARABONBA_PTR_FROM_JSON(Repeat, repeat_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(SendRecoverMessage, sendRecoverMessage_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy &&) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy() = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& operator=(const CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy &) = default ;
    CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& operator=(CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directedMode_ != nullptr
        && this->escalationPolicyId_ != nullptr && this->groupRule_ != nullptr && this->id_ != nullptr && this->integrationId_ != nullptr && this->matchingRules_ != nullptr
        && this->name_ != nullptr && this->notifyRule_ != nullptr && this->notifyTemplate_ != nullptr && this->repeat_ != nullptr && this->repeatInterval_ != nullptr
        && this->sendRecoverMessage_ != nullptr && this->state_ != nullptr; };
    // directedMode Field Functions 
    bool hasDirectedMode() const { return this->directedMode_ != nullptr;};
    void deleteDirectedMode() { this->directedMode_ = nullptr;};
    inline bool directedMode() const { DARABONBA_PTR_GET_DEFAULT(directedMode_, false) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setDirectedMode(bool directedMode) { DARABONBA_PTR_SET_VALUE(directedMode_, directedMode) };


    // escalationPolicyId Field Functions 
    bool hasEscalationPolicyId() const { return this->escalationPolicyId_ != nullptr;};
    void deleteEscalationPolicyId() { this->escalationPolicyId_ = nullptr;};
    inline int64_t escalationPolicyId() const { DARABONBA_PTR_GET_DEFAULT(escalationPolicyId_, 0L) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setEscalationPolicyId(int64_t escalationPolicyId) { DARABONBA_PTR_SET_VALUE(escalationPolicyId_, escalationPolicyId) };


    // groupRule Field Functions 
    bool hasGroupRule() const { return this->groupRule_ != nullptr;};
    void deleteGroupRule() { this->groupRule_ = nullptr;};
    inline const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule & groupRule() const { DARABONBA_PTR_GET_CONST(groupRule_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule) };
    inline Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule groupRule() { DARABONBA_PTR_GET(groupRule_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setGroupRule(const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule & groupRule) { DARABONBA_PTR_SET_VALUE(groupRule_, groupRule) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setGroupRule(Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule && groupRule) { DARABONBA_PTR_SET_RVALUE(groupRule_, groupRule) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // matchingRules Field Functions 
    bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
    void deleteMatchingRules() { this->matchingRules_ = nullptr;};
    inline const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules> & matchingRules() const { DARABONBA_PTR_GET_CONST(matchingRules_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules>) };
    inline vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules> matchingRules() { DARABONBA_PTR_GET(matchingRules_, vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules>) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setMatchingRules(const vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules> & matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setMatchingRules(vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules> && matchingRules) { DARABONBA_PTR_SET_RVALUE(matchingRules_, matchingRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyRule Field Functions 
    bool hasNotifyRule() const { return this->notifyRule_ != nullptr;};
    void deleteNotifyRule() { this->notifyRule_ = nullptr;};
    inline const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule & notifyRule() const { DARABONBA_PTR_GET_CONST(notifyRule_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule) };
    inline Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule notifyRule() { DARABONBA_PTR_GET(notifyRule_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setNotifyRule(const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule & notifyRule) { DARABONBA_PTR_SET_VALUE(notifyRule_, notifyRule) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setNotifyRule(Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule && notifyRule) { DARABONBA_PTR_SET_RVALUE(notifyRule_, notifyRule) };


    // notifyTemplate Field Functions 
    bool hasNotifyTemplate() const { return this->notifyTemplate_ != nullptr;};
    void deleteNotifyTemplate() { this->notifyTemplate_ = nullptr;};
    inline const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate & notifyTemplate() const { DARABONBA_PTR_GET_CONST(notifyTemplate_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate) };
    inline Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate notifyTemplate() { DARABONBA_PTR_GET(notifyTemplate_, Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setNotifyTemplate(const Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate & notifyTemplate) { DARABONBA_PTR_SET_VALUE(notifyTemplate_, notifyTemplate) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setNotifyTemplate(Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate && notifyTemplate) { DARABONBA_PTR_SET_RVALUE(notifyTemplate_, notifyTemplate) };


    // repeat Field Functions 
    bool hasRepeat() const { return this->repeat_ != nullptr;};
    void deleteRepeat() { this->repeat_ = nullptr;};
    inline bool repeat() const { DARABONBA_PTR_GET_DEFAULT(repeat_, false) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setRepeat(bool repeat) { DARABONBA_PTR_SET_VALUE(repeat_, repeat) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // sendRecoverMessage Field Functions 
    bool hasSendRecoverMessage() const { return this->sendRecoverMessage_ != nullptr;};
    void deleteSendRecoverMessage() { this->sendRecoverMessage_ = nullptr;};
    inline bool sendRecoverMessage() const { DARABONBA_PTR_GET_DEFAULT(sendRecoverMessage_, false) };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setSendRecoverMessage(bool sendRecoverMessage) { DARABONBA_PTR_SET_VALUE(sendRecoverMessage_, sendRecoverMessage) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicy& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Specifies whether to enable simple mode.
    std::shared_ptr<bool> directedMode_ = nullptr;
    // The ID of the escalation policy.
    std::shared_ptr<int64_t> escalationPolicyId_ = nullptr;
    // An array of alert event group objects.
    std::shared_ptr<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyGroupRule> groupRule_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The integration ID of the ticket system to which alerts are pushed.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
    // The matching rules.
    std::shared_ptr<vector<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyMatchingRules>> matchingRules_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> name_ = nullptr;
    // An array of notification rule objects.
    std::shared_ptr<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyRule> notifyRule_ = nullptr;
    // The notification template.
    std::shared_ptr<Models::CreateOrUpdateNotificationPolicyResponseBodyNotificationPolicyNotifyTemplate> notifyTemplate_ = nullptr;
    // Indicates whether a notification is resent for a long-lasting unresolved alert. Default value: true. Valid values:
    // 
    // *   `true`: The system resends a notification for a long-lasting unresolved alert at a specified time interval.
    // *   `false`: The system sends a notification for a long-lasting unresolved alert based on an escalation policy.
    std::shared_ptr<bool> repeat_ = nullptr;
    // The time interval at which a notification is resent for a long-lasting unresolved alert. Unit: seconds.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // Indicates whether the status of an alert automatically changes to Resolved when all events related to the alert change to the Restored state. ARMS notifies contacts when the alert status changes to Resolved.
    // 
    // *   `true`: The system sends a notification.
    // *   `false`: The system does not send a notification.
    std::shared_ptr<bool> sendRecoverMessage_ = nullptr;
    // Indicates whether the notification policy is enabled. Valid values: enable and disable.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
