// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEventSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEventSubscriptionResponseBody() = default ;
    GetEventSubscriptionResponseBody(const GetEventSubscriptionResponseBody &) = default ;
    GetEventSubscriptionResponseBody(GetEventSubscriptionResponseBody &&) = default ;
    GetEventSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventSubscriptionResponseBody() = default ;
    GetEventSubscriptionResponseBody& operator=(const GetEventSubscriptionResponseBody &) = default ;
    GetEventSubscriptionResponseBody& operator=(GetEventSubscriptionResponseBody &&) = default ;
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      class Contacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
          DARABONBA_PTR_TO_JSON(dingtalkHook, dingtalkHook_);
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(groups, groups_);
          DARABONBA_PTR_TO_JSON(isCmsReduplicated, isCmsReduplicated_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
          DARABONBA_PTR_FROM_JSON(dingtalkHook, dingtalkHook_);
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(groups, groups_);
          DARABONBA_PTR_FROM_JSON(isCmsReduplicated, isCmsReduplicated_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        Contacts() = default ;
        Contacts(const Contacts &) = default ;
        Contacts(Contacts &&) = default ;
        Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contacts() = default ;
        Contacts& operator=(const Contacts &) = default ;
        Contacts& operator=(Contacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dingtalkHook_ == nullptr
        && this->email_ == nullptr && this->groups_ == nullptr && this->isCmsReduplicated_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr
        && this->userId_ == nullptr; };
        // dingtalkHook Field Functions 
        bool hasDingtalkHook() const { return this->dingtalkHook_ != nullptr;};
        void deleteDingtalkHook() { this->dingtalkHook_ = nullptr;};
        inline string getDingtalkHook() const { DARABONBA_PTR_GET_DEFAULT(dingtalkHook_, "") };
        inline Contacts& setDingtalkHook(string dingtalkHook) { DARABONBA_PTR_SET_VALUE(dingtalkHook_, dingtalkHook) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Contacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // groups Field Functions 
        bool hasGroups() const { return this->groups_ != nullptr;};
        void deleteGroups() { this->groups_ = nullptr;};
        inline const vector<string> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
        inline vector<string> getGroups() { DARABONBA_PTR_GET(groups_, vector<string>) };
        inline Contacts& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
        inline Contacts& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


        // isCmsReduplicated Field Functions 
        bool hasIsCmsReduplicated() const { return this->isCmsReduplicated_ != nullptr;};
        void deleteIsCmsReduplicated() { this->isCmsReduplicated_ = nullptr;};
        inline bool getIsCmsReduplicated() const { DARABONBA_PTR_GET_DEFAULT(isCmsReduplicated_, false) };
        inline Contacts& setIsCmsReduplicated(bool isCmsReduplicated) { DARABONBA_PTR_SET_VALUE(isCmsReduplicated_, isCmsReduplicated) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Contacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline Contacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Contacts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The webhook URL of the DingTalk chatbot.
        shared_ptr<string> dingtalkHook_ {};
        // The email address of the alert contact.
        shared_ptr<string> email_ {};
        // The contact groups to which the alert contact belongs.
        shared_ptr<vector<string>> groups_ {};
        // Indicates whether the alert contact name is the same as the contact name on CloudMonitor.
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> isCmsReduplicated_ {};
        // The name of the alert contact.
        shared_ptr<string> name_ {};
        // The mobile number of the alert contact.
        shared_ptr<string> phone_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      class ContactGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
          DARABONBA_PTR_TO_JSON(contacts, contacts_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
        };
        ContactGroups() = default ;
        ContactGroups(const ContactGroups &) = default ;
        ContactGroups(ContactGroups &&) = default ;
        ContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactGroups() = default ;
        ContactGroups& operator=(const ContactGroups &) = default ;
        ContactGroups& operator=(ContactGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contacts_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline string getContacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
        inline ContactGroups& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ContactGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ContactGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ContactGroups& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The members of the alert contact group.
        shared_ptr<string> contacts_ {};
        // The description of the alert contact group.
        shared_ptr<string> description_ {};
        // The name of the alert contact group.
        shared_ptr<string> name_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->active_ == nullptr
        && this->channelType_ == nullptr && this->contactGroupName_ == nullptr && this->contactGroups_ == nullptr && this->contactName_ == nullptr && this->contacts_ == nullptr
        && this->eventContext_ == nullptr && this->eventSendGroup_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->minInterval_ == nullptr && this->userId_ == nullptr; };
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


      // contactGroups Field Functions 
      bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
      void deleteContactGroups() { this->contactGroups_ = nullptr;};
      inline const vector<Data::ContactGroups> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<Data::ContactGroups>) };
      inline vector<Data::ContactGroups> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<Data::ContactGroups>) };
      inline Data& setContactGroups(const vector<Data::ContactGroups> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
      inline Data& setContactGroups(vector<Data::ContactGroups> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<Data::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Data::Contacts>) };
      inline vector<Data::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<Data::Contacts>) };
      inline Data& setContacts(const vector<Data::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline Data& setContacts(vector<Data::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // eventContext Field Functions 
      bool hasEventContext() const { return this->eventContext_ != nullptr;};
      void deleteEventContext() { this->eventContext_ = nullptr;};
      inline string getEventContext() const { DARABONBA_PTR_GET_DEFAULT(eventContext_, "") };
      inline Data& setEventContext(string eventContext) { DARABONBA_PTR_SET_VALUE(eventContext_, eventContext) };


      // eventSendGroup Field Functions 
      bool hasEventSendGroup() const { return this->eventSendGroup_ != nullptr;};
      void deleteEventSendGroup() { this->eventSendGroup_ = nullptr;};
      inline const vector<string> & getEventSendGroup() const { DARABONBA_PTR_GET_CONST(eventSendGroup_, vector<string>) };
      inline vector<string> getEventSendGroup() { DARABONBA_PTR_GET(eventSendGroup_, vector<string>) };
      inline Data& setEventSendGroup(const vector<string> & eventSendGroup) { DARABONBA_PTR_SET_VALUE(eventSendGroup_, eventSendGroup) };
      inline Data& setEventSendGroup(vector<string> && eventSendGroup) { DARABONBA_PTR_SET_RVALUE(eventSendGroup_, eventSendGroup) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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
      inline string getMinInterval() const { DARABONBA_PTR_GET_DEFAULT(minInterval_, "") };
      inline Data& setMinInterval(string minInterval) { DARABONBA_PTR_SET_VALUE(minInterval_, minInterval) };


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
      // The alert contact groups.
      shared_ptr<vector<Data::ContactGroups>> contactGroups_ {};
      // The name of the subscriber who receives alert notifications. Multiple names are separated by commas (,).
      shared_ptr<string> contactName_ {};
      // The user ID.
      shared_ptr<vector<Data::Contacts>> contacts_ {};
      // The supported event scenarios. Only **AllContext** may be returned, which indicates that all scenarios are supported.
      shared_ptr<string> eventContext_ {};
      // The supported event scenarios in which event subscription can be sent.
      shared_ptr<vector<string>> eventSendGroup_ {};
      // The time when event subscription was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the event subscription settings were most recently modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtModified_ {};
      // The primary key ID of the database.
      shared_ptr<int64_t> id_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The language of event notifications. Only **zh-CN** may be returned, which indicates that event notifications are sent in Chinese.
      shared_ptr<string> lang_ {};
      // The risk level of the events that trigger notifications. Valid values:
      // 
      // *   **Notice**
      // *   **Optimization**
      // *   **Warn**
      // *   **Critical**
      shared_ptr<string> level_ {};
      // The minimum interval between event notifications. Unit: seconds.
      shared_ptr<string> minInterval_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEventSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEventSubscriptionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEventSubscriptionResponseBody::Data) };
    inline GetEventSubscriptionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEventSubscriptionResponseBody::Data) };
    inline GetEventSubscriptionResponseBody& setData(const GetEventSubscriptionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEventSubscriptionResponseBody& setData(GetEventSubscriptionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEventSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEventSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetEventSubscriptionResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetEventSubscriptionResponseBody::Data> data_ {};
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
