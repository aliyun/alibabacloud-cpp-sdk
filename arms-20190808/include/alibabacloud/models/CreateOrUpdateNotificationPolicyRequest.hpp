// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATENOTIFICATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateNotificationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectedMode, directedMode_);
      DARABONBA_PTR_TO_JSON(EscalationPolicyId, escalationPolicyId_);
      DARABONBA_PTR_TO_JSON(GroupRule, groupRule_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_TO_JSON(NotifyTemplate, notifyTemplate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Repeat, repeat_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_TO_JSON(SendRecoverMessage, sendRecoverMessage_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectedMode, directedMode_);
      DARABONBA_PTR_FROM_JSON(EscalationPolicyId, escalationPolicyId_);
      DARABONBA_PTR_FROM_JSON(GroupRule, groupRule_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyRule, notifyRule_);
      DARABONBA_PTR_FROM_JSON(NotifyTemplate, notifyTemplate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Repeat, repeat_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
      DARABONBA_PTR_FROM_JSON(SendRecoverMessage, sendRecoverMessage_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateOrUpdateNotificationPolicyRequest() = default ;
    CreateOrUpdateNotificationPolicyRequest(const CreateOrUpdateNotificationPolicyRequest &) = default ;
    CreateOrUpdateNotificationPolicyRequest(CreateOrUpdateNotificationPolicyRequest &&) = default ;
    CreateOrUpdateNotificationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateNotificationPolicyRequest() = default ;
    CreateOrUpdateNotificationPolicyRequest& operator=(const CreateOrUpdateNotificationPolicyRequest &) = default ;
    CreateOrUpdateNotificationPolicyRequest& operator=(CreateOrUpdateNotificationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directedMode_ != nullptr
        && this->escalationPolicyId_ != nullptr && this->groupRule_ != nullptr && this->id_ != nullptr && this->integrationId_ != nullptr && this->matchingRules_ != nullptr
        && this->name_ != nullptr && this->notifyRule_ != nullptr && this->notifyTemplate_ != nullptr && this->regionId_ != nullptr && this->repeat_ != nullptr
        && this->repeatInterval_ != nullptr && this->sendRecoverMessage_ != nullptr && this->state_ != nullptr; };
    // directedMode Field Functions 
    bool hasDirectedMode() const { return this->directedMode_ != nullptr;};
    void deleteDirectedMode() { this->directedMode_ = nullptr;};
    inline bool directedMode() const { DARABONBA_PTR_GET_DEFAULT(directedMode_, false) };
    inline CreateOrUpdateNotificationPolicyRequest& setDirectedMode(bool directedMode) { DARABONBA_PTR_SET_VALUE(directedMode_, directedMode) };


    // escalationPolicyId Field Functions 
    bool hasEscalationPolicyId() const { return this->escalationPolicyId_ != nullptr;};
    void deleteEscalationPolicyId() { this->escalationPolicyId_ = nullptr;};
    inline int64_t escalationPolicyId() const { DARABONBA_PTR_GET_DEFAULT(escalationPolicyId_, 0L) };
    inline CreateOrUpdateNotificationPolicyRequest& setEscalationPolicyId(int64_t escalationPolicyId) { DARABONBA_PTR_SET_VALUE(escalationPolicyId_, escalationPolicyId) };


    // groupRule Field Functions 
    bool hasGroupRule() const { return this->groupRule_ != nullptr;};
    void deleteGroupRule() { this->groupRule_ = nullptr;};
    inline string groupRule() const { DARABONBA_PTR_GET_DEFAULT(groupRule_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setGroupRule(string groupRule) { DARABONBA_PTR_SET_VALUE(groupRule_, groupRule) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateNotificationPolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline CreateOrUpdateNotificationPolicyRequest& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // matchingRules Field Functions 
    bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
    void deleteMatchingRules() { this->matchingRules_ = nullptr;};
    inline string matchingRules() const { DARABONBA_PTR_GET_DEFAULT(matchingRules_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setMatchingRules(string matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyRule Field Functions 
    bool hasNotifyRule() const { return this->notifyRule_ != nullptr;};
    void deleteNotifyRule() { this->notifyRule_ = nullptr;};
    inline string notifyRule() const { DARABONBA_PTR_GET_DEFAULT(notifyRule_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setNotifyRule(string notifyRule) { DARABONBA_PTR_SET_VALUE(notifyRule_, notifyRule) };


    // notifyTemplate Field Functions 
    bool hasNotifyTemplate() const { return this->notifyTemplate_ != nullptr;};
    void deleteNotifyTemplate() { this->notifyTemplate_ = nullptr;};
    inline string notifyTemplate() const { DARABONBA_PTR_GET_DEFAULT(notifyTemplate_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setNotifyTemplate(string notifyTemplate) { DARABONBA_PTR_SET_VALUE(notifyTemplate_, notifyTemplate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeat Field Functions 
    bool hasRepeat() const { return this->repeat_ != nullptr;};
    void deleteRepeat() { this->repeat_ = nullptr;};
    inline bool repeat() const { DARABONBA_PTR_GET_DEFAULT(repeat_, false) };
    inline CreateOrUpdateNotificationPolicyRequest& setRepeat(bool repeat) { DARABONBA_PTR_SET_VALUE(repeat_, repeat) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline CreateOrUpdateNotificationPolicyRequest& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    // sendRecoverMessage Field Functions 
    bool hasSendRecoverMessage() const { return this->sendRecoverMessage_ != nullptr;};
    void deleteSendRecoverMessage() { this->sendRecoverMessage_ = nullptr;};
    inline bool sendRecoverMessage() const { DARABONBA_PTR_GET_DEFAULT(sendRecoverMessage_, false) };
    inline CreateOrUpdateNotificationPolicyRequest& setSendRecoverMessage(bool sendRecoverMessage) { DARABONBA_PTR_SET_VALUE(sendRecoverMessage_, sendRecoverMessage) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateOrUpdateNotificationPolicyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Specifies whether to enable simple mode.
    std::shared_ptr<bool> directedMode_ = nullptr;
    // The ID of the escalation policy.
    std::shared_ptr<int64_t> escalationPolicyId_ = nullptr;
    // An array of alert event group objects.
    // 
    // *   If you do not specify the groupingFields field, all alerts will be sent to contacts based on `alertname`.
    // *   If you specify the groupingFields field, alerts with the same field will be sent to contacts in one notification.
    // 
    // Sample statement:
    // 
    //     { 
    //     "groupWait":5,    // The waiting time for grouping. 
    //     "groupInterval":30,     // The time interval of grouping. 
    //     "groupingFields":["alertname"]       // The field that is used to group alert events. 
    //     }
    std::shared_ptr<string> groupRule_ = nullptr;
    // The ID of the notification policy.
    // 
    // *   If you do not specify this parameter, a new notification policy is created.
    // *   If you specify this parameter, the specified notification policy is modified.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The integration ID of the ticket system to which alerts are pushed.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
    // The matching rules. Format:
    // 
    //     [
    //      {
    //      "matchingConditions": [
    //      { 
    //      "value": "test",    // The value of the matching condition. 
    //      "key": "alertname",     // The key of the matching condition. 
    //      "operator": "eq"   // The logical operator of the matching condition, including eq (equal to), neq (not equal to), in (contains), nin (does not contain), re (regular expression match), and nre (regular expression mismatch).   
    //      }
    //      ]
    //      } 
    //      ]
    std::shared_ptr<string> matchingRules_ = nullptr;
    // The name of the notification policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // An array of notification rule objects. Format:
    // 
    //     { 
    //      "notifyStartTime":"00:00",      // The start time of the notification window. 
    //      "notifyEndTime":"23:59",       // The end time of the notification window. 
    //      "notifyChannels":["dingTalk", "email", "sms", "tts", "webhook"],       // The notification methods. Valid values: dingTalk, email, sms, tts, and webhook. 
    //      "notifyObjects":[{       // An array of notification objects. 
    //      "notifyObjectType":"CONTACT",       // The type of the notification object. Valid values: CONTACT (contact), CONTACT_GROUP (contact group), ARMS_CONTACT (ARMS contact), ARMS_CONTACT_GROUP (ARMS contact group), DING_ROBOT_GROUP (DingTalk, Lark, WeCom, or IM robot), and CONTACT_SCHEDULE (user on duty defined by a schedule). 
    //      "notifyObjectId":123,       // The ID of the notification object. 
    //      "notifyObjectName":"test"       // The name of the notification object. 
    //      }]
    // 
    // This parameter is required.
    std::shared_ptr<string> notifyRule_ = nullptr;
    // The notification template. The default notification template is provided below the table.
    std::shared_ptr<string> notifyTemplate_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to resend a notification for a long-lasting unresolved alert. Default value: true. Valid values:
    // 
    // *   `true`: If you set this parameter to `true`, you must set **RepeatInterval**.
    // *   `false`: If you set this parameter to `false`, you must set **EscalationPolicyId**.
    std::shared_ptr<bool> repeat_ = nullptr;
    // The time interval at which a notification is resent for a long-lasting unresolved alert. Unit: seconds.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
    // Specifies whether the status of an alert automatically changes to Resolved when all events related to the alert change to the Restored state. ARMS notifies contacts when the alert status changes to Resolved.
    // 
    // *   `true`: The system sends a notification.
    // *   `false`: The system does not send a notification.
    std::shared_ptr<bool> sendRecoverMessage_ = nullptr;
    // Specifies whether to enable the notification policy. Valid values: enable and disable.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
