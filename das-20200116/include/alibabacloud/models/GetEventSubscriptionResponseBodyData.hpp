// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEventSubscriptionResponseBodyDataContactGroups.hpp>
#include <alibabacloud/models/GetEventSubscriptionResponseBodyDataContacts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEventSubscriptionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(contactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(contacts, contacts_);
      DARABONBA_PTR_TO_JSON(eventContext, eventContext_);
      DARABONBA_PTR_TO_JSON(eventSendGroup, eventSendGroup_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(minInterval, minInterval_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(contactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(contactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(eventContext, eventContext_);
      DARABONBA_PTR_FROM_JSON(eventSendGroup, eventSendGroup_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(minInterval, minInterval_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetEventSubscriptionResponseBodyData() = default ;
    GetEventSubscriptionResponseBodyData(const GetEventSubscriptionResponseBodyData &) = default ;
    GetEventSubscriptionResponseBodyData(GetEventSubscriptionResponseBodyData &&) = default ;
    GetEventSubscriptionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventSubscriptionResponseBodyData() = default ;
    GetEventSubscriptionResponseBodyData& operator=(const GetEventSubscriptionResponseBodyData &) = default ;
    GetEventSubscriptionResponseBodyData& operator=(GetEventSubscriptionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->channelType_ != nullptr && this->contactGroupName_ != nullptr && this->contactGroups_ != nullptr && this->contactName_ != nullptr && this->contacts_ != nullptr
        && this->eventContext_ != nullptr && this->eventSendGroup_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->instanceId_ != nullptr && this->lang_ != nullptr && this->level_ != nullptr && this->minInterval_ != nullptr && this->userId_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline GetEventSubscriptionResponseBodyData& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline GetEventSubscriptionResponseBodyData& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline GetEventSubscriptionResponseBodyData& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<Models::GetEventSubscriptionResponseBodyDataContactGroups> & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<Models::GetEventSubscriptionResponseBodyDataContactGroups>) };
    inline vector<Models::GetEventSubscriptionResponseBodyDataContactGroups> contactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<Models::GetEventSubscriptionResponseBodyDataContactGroups>) };
    inline GetEventSubscriptionResponseBodyData& setContactGroups(const vector<Models::GetEventSubscriptionResponseBodyDataContactGroups> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline GetEventSubscriptionResponseBodyData& setContactGroups(vector<Models::GetEventSubscriptionResponseBodyDataContactGroups> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline GetEventSubscriptionResponseBodyData& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<Models::GetEventSubscriptionResponseBodyDataContacts> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Models::GetEventSubscriptionResponseBodyDataContacts>) };
    inline vector<Models::GetEventSubscriptionResponseBodyDataContacts> contacts() { DARABONBA_PTR_GET(contacts_, vector<Models::GetEventSubscriptionResponseBodyDataContacts>) };
    inline GetEventSubscriptionResponseBodyData& setContacts(const vector<Models::GetEventSubscriptionResponseBodyDataContacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline GetEventSubscriptionResponseBodyData& setContacts(vector<Models::GetEventSubscriptionResponseBodyDataContacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // eventContext Field Functions 
    bool hasEventContext() const { return this->eventContext_ != nullptr;};
    void deleteEventContext() { this->eventContext_ = nullptr;};
    inline string eventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
    inline GetEventSubscriptionResponseBodyData& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


    // eventSendGroup Field Functions 
    bool hasEventSendGroup() const { return this->eventSendGroup_ != nullptr;};
    void deleteEventSendGroup() { this->eventSendGroup_ = nullptr;};
    inline const vector<string> & eventSendGroup() const { DARABONBA_PTR_GET_CONST(eventSendGroup_, vector<string>) };
    inline vector<string> eventSendGroup() { DARABONBA_PTR_GET(eventSendGroup_, vector<string>) };
    inline GetEventSubscriptionResponseBodyData& setEventSendGroup(const vector<string> & eventSendGroup) { DARABONBA_PTR_SET_VALUE(eventSendGroup_, eventSendGroup) };
    inline GetEventSubscriptionResponseBodyData& setEventSendGroup(vector<string> && eventSendGroup) { DARABONBA_PTR_SET_RVALUE(eventSendGroup_, eventSendGroup) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetEventSubscriptionResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetEventSubscriptionResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetEventSubscriptionResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEventSubscriptionResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetEventSubscriptionResponseBodyData& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetEventSubscriptionResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // minInterval Field Functions 
    bool hasMinInterval() const { return this->minInterval_ != nullptr;};
    void deleteMinInterval() { this->minInterval_ = nullptr;};
    inline string minInterval() const { DARABONBA_PTR_GET_DEFAULT(minInterval_, "") };
    inline GetEventSubscriptionResponseBodyData& setMinInterval(string minInterval) { DARABONBA_PTR_SET_VALUE(minInterval_, minInterval) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetEventSubscriptionResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Indicates whether the event subscription feature is enabled. Valid values:
    // 
    // *   **0**: The event subscription feature is disabled.
    // *   **1**: The event subscription feature is enabled.
    std::shared_ptr<int32_t> active_ = nullptr;
    // The notification method. Valid values:
    // 
    // *   **hdm_alarm_sms**: text message.
    // *   **dingtalk**: DingTalk chatbot.
    // *   **hdm_alarm_sms_and_email**: text message and email.
    // *   **hdm_alarm_sms,dingtalk**: text message and DingTalk chatbot.
    std::shared_ptr<string> channelType_ = nullptr;
    // The name of the contact group that receives alert notifications. Multiple names are separated by commas (,).
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<vector<Models::GetEventSubscriptionResponseBodyDataContactGroups>> contactGroups_ = nullptr;
    // The name of the subscriber who receives alert notifications. Multiple names are separated by commas (,).
    std::shared_ptr<string> contactName_ = nullptr;
    // The user ID.
    std::shared_ptr<vector<Models::GetEventSubscriptionResponseBodyDataContacts>> contacts_ = nullptr;
    // The supported event scenarios. Only **AllContext** may be returned, which indicates that all scenarios are supported.
    std::shared_ptr<string> eventContext_ = nullptr;
    // The supported event scenarios in which event subscription can be sent.
    std::shared_ptr<vector<string>> eventSendGroup_ = nullptr;
    // The time when event subscription was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The time when the event subscription settings were most recently modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The primary key ID of the database.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of event notifications. Only **zh-CN** may be returned, which indicates that event notifications are sent in Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The risk level of the events that trigger notifications. Valid values:
    // 
    // *   **Notice**
    // *   **Optimization**
    // *   **Warn**
    // *   **Critical**
    std::shared_ptr<string> level_ = nullptr;
    // The minimum interval between event notifications. Unit: seconds.
    std::shared_ptr<string> minInterval_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
