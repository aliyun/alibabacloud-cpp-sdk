// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETEVENTSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class SetEventSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEventSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SetEventSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SetEventSubscriptionResponseBody() = default ;
    SetEventSubscriptionResponseBody(const SetEventSubscriptionResponseBody &) = default ;
    SetEventSubscriptionResponseBody(SetEventSubscriptionResponseBody &&) = default ;
    SetEventSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEventSubscriptionResponseBody() = default ;
    SetEventSubscriptionResponseBody& operator=(const SetEventSubscriptionResponseBody &) = default ;
    SetEventSubscriptionResponseBody& operator=(SetEventSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->channelType_ == nullptr && this->contactGroupName_ == nullptr && this->contactName_ == nullptr && this->eventContext_ == nullptr && this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->level_ == nullptr && this->minInterval_ == nullptr && this->userId_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
      inline Data& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Data& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // contactGroupName Field Functions 
      bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
      void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
      inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
      inline Data& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // eventContext Field Functions 
      bool hasEventContext() const { return this->eventContext_ != nullptr;};
      void deleteEventContext() { this->eventContext_ = nullptr;};
      inline string getEventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
      inline Data& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline Data& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // minInterval Field Functions 
      bool hasMinInterval() const { return this->minInterval_ != nullptr;};
      void deleteMinInterval() { this->minInterval_ = nullptr;};
      inline int32_t getMinInterval() const { DARABONBA_PTR_GET_DEFAULT(minInterval_, 0) };
      inline Data& setMinInterval(int32_t minInterval) { DARABONBA_PTR_SET_VALUE(minInterval_, minInterval) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Indicates whether the event subscription feature is enabled. Valid values:
      // 
      // *   **0**: The event subscription feature is disabled.
      // *   **1**: The event subscription feature is enabled.
      shared_ptr<int32_t> active_ {};
      // The notification method. Valid values:
      // 
      // *   **hdm_alarm_sms**: text message.
      // *   **dingtalk**: DingTalk chatbot.
      // *   **hdm_alarm_sms_and_email**: text message and email.
      // *   **hdm_alarm_sms,dingtalk**: text message and DingTalk chatbot.
      shared_ptr<string> channelType_ {};
      // The name of the contact group that receives alert notifications. Multiple names are separated by commas (,).
      shared_ptr<string> contactGroupName_ {};
      // The name of the contact who receives alert notifications. Multiple names are separated by commas (,).
      shared_ptr<string> contactName_ {};
      // The supported event scenarios. Only **AllContext** is returned for this parameter, which indicates that all scenarios are supported.
      shared_ptr<string> eventContext_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The language of event notifications. Only **zh-CN** is returned for this parameter, which indicates that event notifications are sent in Chinese.
      shared_ptr<string> lang_ {};
      // The risk level of the events. Valid values:
      // 
      // *   **Notice**
      // *   **Optimization**
      // *   **Warn**
      // *   **Critical**
      shared_ptr<string> level_ {};
      // The minimum interval between consecutive event notifications. Unit: seconds.
      shared_ptr<int32_t> minInterval_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SetEventSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SetEventSubscriptionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SetEventSubscriptionResponseBody::Data) };
    inline SetEventSubscriptionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SetEventSubscriptionResponseBody::Data) };
    inline SetEventSubscriptionResponseBody& setData(const SetEventSubscriptionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SetEventSubscriptionResponseBody& setData(SetEventSubscriptionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SetEventSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetEventSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SetEventSubscriptionResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information.
    shared_ptr<SetEventSubscriptionResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
