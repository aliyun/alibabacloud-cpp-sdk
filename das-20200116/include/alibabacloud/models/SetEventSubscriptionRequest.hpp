// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class SetEventSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEventSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_TO_JSON(EventContext, eventContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MinInterval, minInterval_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, SetEventSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_FROM_JSON(EventContext, eventContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MinInterval, minInterval_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    SetEventSubscriptionRequest() = default ;
    SetEventSubscriptionRequest(const SetEventSubscriptionRequest &) = default ;
    SetEventSubscriptionRequest(SetEventSubscriptionRequest &&) = default ;
    SetEventSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEventSubscriptionRequest() = default ;
    SetEventSubscriptionRequest& operator=(const SetEventSubscriptionRequest &) = default ;
    SetEventSubscriptionRequest& operator=(SetEventSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->channelType_ == nullptr && this->contactGroupName_ == nullptr && this->contactName_ == nullptr && this->dispatchRule_ == nullptr && this->eventContext_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->minInterval_ == nullptr && this->severity_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline string getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, "") };
    inline SetEventSubscriptionRequest& setActive(string active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SetEventSubscriptionRequest& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline SetEventSubscriptionRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline SetEventSubscriptionRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // dispatchRule Field Functions 
    bool hasDispatchRule() const { return this->dispatchRule_ != nullptr;};
    void deleteDispatchRule() { this->dispatchRule_ = nullptr;};
    inline string getDispatchRule() const { DARABONBA_PTR_GET_DEFAULT(dispatchRule_, "") };
    inline SetEventSubscriptionRequest& setDispatchRule(string dispatchRule) { DARABONBA_PTR_SET_VALUE(dispatchRule_, dispatchRule) };


    // eventContext Field Functions 
    bool hasEventContext() const { return this->eventContext_ != nullptr;};
    void deleteEventContext() { this->eventContext_ = nullptr;};
    inline string getEventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
    inline SetEventSubscriptionRequest& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetEventSubscriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetEventSubscriptionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SetEventSubscriptionRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // minInterval Field Functions 
    bool hasMinInterval() const { return this->minInterval_ != nullptr;};
    void deleteMinInterval() { this->minInterval_ = nullptr;};
    inline string getMinInterval() const { DARABONBA_PTR_GET_DEFAULT(minInterval_, "") };
    inline SetEventSubscriptionRequest& setMinInterval(string minInterval) { DARABONBA_PTR_SET_VALUE(minInterval_, minInterval) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline SetEventSubscriptionRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // Specifies whether to enable the event subscription feature. Valid values:
    // 
    // *   **0**: disables the event subscription feature.
    // *   **1**: enables the event subscription feature.
    shared_ptr<string> active_ {};
    // The notification method. Valid values:
    // 
    // *   **hdm_alarm_sms**: text message.
    // *   **dingtalk**: DingTalk chatbot.
    // *   **hdm_alarm_sms_and_email**: text message and email.
    // *   **hdm_alarm_sms,dingtalk**: text message and DingTalk chatbot.
    shared_ptr<string> channelType_ {};
    // The name of the contact group that receives alert notifications. Separate multiple names with commas (,).
    shared_ptr<string> contactGroupName_ {};
    // The name of the contact who receives alert notifications. Separate multiple names with commas (,).
    shared_ptr<string> contactName_ {};
    // The notification rules based on the event type. If you leave this parameter empty, the values of **MinInterval** and **ChannelType** prevail.
    // 
    // Specify this parameter in the following format: `{"silenced": {"Event type 1":Specifies whether to enable adaptive silence, "Event type 2":Specify whether to enable adaptive silence},"min_interval": {"Event type 1":Minimum interval between event notifications, "Event type 2":Minimum interval between event notifications},"alert_type": {"Event type 1":"Notification method", "Event type 2":"Notification method"}}`.
    // 
    // *   **silenced**: specifies whether to enable adaptive silence. After you enable adaptive silence, the interval between consecutive alert notifications for an event is the greater one of the minimum interval specified by **min_interval** and one third of the event duration. Valid values:
    // 
    //     *   1: enables adaptive silence.
    //     *   2: disables adaptive silence.
    // 
    // *   **min_interval**: the minimum interval between event notifications. Unit: seconds.
    // 
    // *   **alert_type**: the notification method. Valid values:
    // 
    //     *   **hdm_alarm_sms**: text message.
    //     *   **dingtalk**: DingTalk chatbot.
    //     *   **hdm_alarm_sms_and_email**: text message and email.
    //     *   **hdm_alarm_sms,dingtalk**: text message and DingTalk chatbot.
    shared_ptr<string> dispatchRule_ {};
    // The supported event scenarios. You can set the value to **AllContext**, which indicates that all scenarios are supported.
    shared_ptr<string> eventContext_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of event notifications. You can set the value to **zh-CN**, which indicates that event notifications are sent in Chinese.
    shared_ptr<string> lang_ {};
    // The risk level of the events. Valid values:
    // 
    // *   **Notice**: events that trigger notifications, including events at the **Notice**, **Optimization**, **Warn**, and **Critical** levels.
    // *   **Optimization**: events that trigger optimizations, including events at the **Optimization**, **Warn**, and **Critical** levels.
    // *   **Warn**: events that trigger warnings, including events at the **Warn** and **Critical** levels.
    // *   **Critical**: events that trigger critical warnings.
    // 
    // The following content describes the events at each level in detail:
    // 
    // *   Notice: events that are related to database exceptions for which no suggestions are generated.
    // *   Optimization: events for which optimization suggestions are generated based on the status of the database.
    // *   Warn: events that may affect the running of the database.
    // *   Critical: events that affect the running of the database.
    shared_ptr<string> level_ {};
    // The minimum interval between consecutive event notifications. Unit: seconds.
    shared_ptr<string> minInterval_ {};
    // The alert severity based on the event type.
    // 
    // Specify this parameter in the following format: `{"Event type 1":"Alert severity", "Event type 2":"Alert severity"}`.
    // 
    // Valid values of event types:
    // 
    // *   **AutoScale**: auto scaling event.
    // *   **SQLThrottle**: throttling event.
    // *   **TimeSeriesAbnormal**: event for detecting time series anomalies.
    // *   **SQLOptimize**: SQL optimization event.
    // *   **ResourceOptimize**: storage optimization event.
    // 
    // Valid values of alert severities:
    // 
    // *   **info**
    // *   **noticed**
    // *   **warning**
    // *   **critical**
    shared_ptr<string> severity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
