// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class SetEventSubscriptionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEventSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(channelType, channelType_);
      DARABONBA_PTR_TO_JSON(contactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(contactName, contactName_);
      DARABONBA_PTR_TO_JSON(eventContext, eventContext_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(minInterval, minInterval_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SetEventSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(channelType, channelType_);
      DARABONBA_PTR_FROM_JSON(contactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(contactName, contactName_);
      DARABONBA_PTR_FROM_JSON(eventContext, eventContext_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(minInterval, minInterval_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    SetEventSubscriptionResponseBodyData() = default ;
    SetEventSubscriptionResponseBodyData(const SetEventSubscriptionResponseBodyData &) = default ;
    SetEventSubscriptionResponseBodyData(SetEventSubscriptionResponseBodyData &&) = default ;
    SetEventSubscriptionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEventSubscriptionResponseBodyData() = default ;
    SetEventSubscriptionResponseBodyData& operator=(const SetEventSubscriptionResponseBodyData &) = default ;
    SetEventSubscriptionResponseBodyData& operator=(SetEventSubscriptionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->channelType_ != nullptr && this->contactGroupName_ != nullptr && this->contactName_ != nullptr && this->eventContext_ != nullptr && this->instanceId_ != nullptr
        && this->lang_ != nullptr && this->level_ != nullptr && this->minInterval_ != nullptr && this->userId_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline SetEventSubscriptionResponseBodyData& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline string channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
    inline SetEventSubscriptionResponseBodyData& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline SetEventSubscriptionResponseBodyData& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline SetEventSubscriptionResponseBodyData& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // eventContext Field Functions 
    bool hasEventContext() const { return this->eventContext_ != nullptr;};
    void deleteEventContext() { this->eventContext_ = nullptr;};
    inline string eventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
    inline SetEventSubscriptionResponseBodyData& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetEventSubscriptionResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SetEventSubscriptionResponseBodyData& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline SetEventSubscriptionResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // minInterval Field Functions 
    bool hasMinInterval() const { return this->minInterval_ != nullptr;};
    void deleteMinInterval() { this->minInterval_ = nullptr;};
    inline int32_t minInterval() const { DARABONBA_PTR_GET_DEFAULT(minInterval_, 0) };
    inline SetEventSubscriptionResponseBodyData& setMinInterval(int32_t minInterval) { DARABONBA_PTR_SET_VALUE(minInterval_, minInterval) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SetEventSubscriptionResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
    // The name of the contact who receives alert notifications. Multiple names are separated by commas (,).
    std::shared_ptr<string> contactName_ = nullptr;
    // The supported event scenarios. Only **AllContext** is returned for this parameter, which indicates that all scenarios are supported.
    std::shared_ptr<string> eventContext_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of event notifications. Only **zh-CN** is returned for this parameter, which indicates that event notifications are sent in Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The risk level of the events. Valid values:
    // 
    // *   **Notice**
    // *   **Optimization**
    // *   **Warn**
    // *   **Critical**
    std::shared_ptr<string> level_ = nullptr;
    // The minimum interval between consecutive event notifications. Unit: seconds.
    std::shared_ptr<int32_t> minInterval_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
