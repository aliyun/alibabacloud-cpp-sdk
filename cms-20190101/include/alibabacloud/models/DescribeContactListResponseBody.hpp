// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeContactListResponseBody() = default ;
    DescribeContactListResponseBody(const DescribeContactListResponseBody &) = default ;
    DescribeContactListResponseBody(DescribeContactListResponseBody &&) = default ;
    DescribeContactListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListResponseBody() = default ;
    DescribeContactListResponseBody& operator=(const DescribeContactListResponseBody &) = default ;
    DescribeContactListResponseBody& operator=(DescribeContactListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
        DARABONBA_PTR_TO_JSON(Contact, contact_);
      };
      friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
        DARABONBA_PTR_FROM_JSON(Contact, contact_);
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
      class Contact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contact& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(ChannelsState, channelsState_);
          DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Lang, lang_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Contact& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(ChannelsState, channelsState_);
          DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Lang, lang_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Contact() = default ;
        Contact(const Contact &) = default ;
        Contact(Contact &&) = default ;
        Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contact() = default ;
        Contact& operator=(const Contact &) = default ;
        Contact& operator=(Contact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ContactGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
            DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
          };
          friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
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
          virtual bool empty() const override { return this->contactGroup_ == nullptr; };
          // contactGroup Field Functions 
          bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
          void deleteContactGroup() { this->contactGroup_ = nullptr;};
          inline const vector<string> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<string>) };
          inline vector<string> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<string>) };
          inline ContactGroups& setContactGroup(const vector<string> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
          inline ContactGroups& setContactGroup(vector<string> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


        protected:
          shared_ptr<vector<string>> contactGroup_ {};
        };

        class ChannelsState : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChannelsState& obj) { 
            DARABONBA_PTR_TO_JSON(AliIM, aliIM_);
            DARABONBA_PTR_TO_JSON(DingWebHook, dingWebHook_);
            DARABONBA_PTR_TO_JSON(Mail, mail_);
            DARABONBA_PTR_TO_JSON(SMS, SMS_);
          };
          friend void from_json(const Darabonba::Json& j, ChannelsState& obj) { 
            DARABONBA_PTR_FROM_JSON(AliIM, aliIM_);
            DARABONBA_PTR_FROM_JSON(DingWebHook, dingWebHook_);
            DARABONBA_PTR_FROM_JSON(Mail, mail_);
            DARABONBA_PTR_FROM_JSON(SMS, SMS_);
          };
          ChannelsState() = default ;
          ChannelsState(const ChannelsState &) = default ;
          ChannelsState(ChannelsState &&) = default ;
          ChannelsState(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChannelsState() = default ;
          ChannelsState& operator=(const ChannelsState &) = default ;
          ChannelsState& operator=(ChannelsState &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliIM_ == nullptr
        && this->dingWebHook_ == nullptr && this->mail_ == nullptr && this->SMS_ == nullptr; };
          // aliIM Field Functions 
          bool hasAliIM() const { return this->aliIM_ != nullptr;};
          void deleteAliIM() { this->aliIM_ = nullptr;};
          inline string getAliIM() const { DARABONBA_PTR_GET_DEFAULT(aliIM_, "") };
          inline ChannelsState& setAliIM(string aliIM) { DARABONBA_PTR_SET_VALUE(aliIM_, aliIM) };


          // dingWebHook Field Functions 
          bool hasDingWebHook() const { return this->dingWebHook_ != nullptr;};
          void deleteDingWebHook() { this->dingWebHook_ = nullptr;};
          inline string getDingWebHook() const { DARABONBA_PTR_GET_DEFAULT(dingWebHook_, "") };
          inline ChannelsState& setDingWebHook(string dingWebHook) { DARABONBA_PTR_SET_VALUE(dingWebHook_, dingWebHook) };


          // mail Field Functions 
          bool hasMail() const { return this->mail_ != nullptr;};
          void deleteMail() { this->mail_ = nullptr;};
          inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
          inline ChannelsState& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


          // SMS Field Functions 
          bool hasSMS() const { return this->SMS_ != nullptr;};
          void deleteSMS() { this->SMS_ = nullptr;};
          inline string getSMS() const { DARABONBA_PTR_GET_DEFAULT(SMS_, "") };
          inline ChannelsState& setSMS(string SMS) { DARABONBA_PTR_SET_VALUE(SMS_, SMS) };


        protected:
          // The status of the TradeManager ID.
          // 
          // Valid value: OK. The value OK indicates that the TradeManager ID is valid and can receive alert notifications.
          // 
          // >  This parameter applies only to the Alibaba Cloud China site (aliyun.com).
          shared_ptr<string> aliIM_ {};
          // The status of the DingTalk chatbot.
          // 
          // Valid value: OK. The value OK indicates that the DingTalk chatbot is normal and alert notifications can be received in a DingTalk group.
          shared_ptr<string> dingWebHook_ {};
          // The status of the email address. Valid values:
          // 
          // *   PENDING: The phone number is not activated. Alert notifications can be sent to the phone number by using text messages only after the phone number is activated.
          // *   OK: The phone number is activated and can receive alert notifications.
          shared_ptr<string> mail_ {};
          // The status of the phone number. Valid values:
          // 
          // *   PENDING: The phone number is not activated. Alert notifications can be sent to the phone number by using text messages only after the phone number is activated.
          // *   OK: The phone number is activated and can receive alert notifications.
          // 
          // >  This parameter applies only to the Alibaba Cloud China site (aliyun.com).
          shared_ptr<string> SMS_ {};
        };

        class Channels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Channels& obj) { 
            DARABONBA_PTR_TO_JSON(AliIM, aliIM_);
            DARABONBA_PTR_TO_JSON(DingWebHook, dingWebHook_);
            DARABONBA_PTR_TO_JSON(Mail, mail_);
            DARABONBA_PTR_TO_JSON(SMS, SMS_);
          };
          friend void from_json(const Darabonba::Json& j, Channels& obj) { 
            DARABONBA_PTR_FROM_JSON(AliIM, aliIM_);
            DARABONBA_PTR_FROM_JSON(DingWebHook, dingWebHook_);
            DARABONBA_PTR_FROM_JSON(Mail, mail_);
            DARABONBA_PTR_FROM_JSON(SMS, SMS_);
          };
          Channels() = default ;
          Channels(const Channels &) = default ;
          Channels(Channels &&) = default ;
          Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Channels() = default ;
          Channels& operator=(const Channels &) = default ;
          Channels& operator=(Channels &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliIM_ == nullptr
        && this->dingWebHook_ == nullptr && this->mail_ == nullptr && this->SMS_ == nullptr; };
          // aliIM Field Functions 
          bool hasAliIM() const { return this->aliIM_ != nullptr;};
          void deleteAliIM() { this->aliIM_ = nullptr;};
          inline string getAliIM() const { DARABONBA_PTR_GET_DEFAULT(aliIM_, "") };
          inline Channels& setAliIM(string aliIM) { DARABONBA_PTR_SET_VALUE(aliIM_, aliIM) };


          // dingWebHook Field Functions 
          bool hasDingWebHook() const { return this->dingWebHook_ != nullptr;};
          void deleteDingWebHook() { this->dingWebHook_ = nullptr;};
          inline string getDingWebHook() const { DARABONBA_PTR_GET_DEFAULT(dingWebHook_, "") };
          inline Channels& setDingWebHook(string dingWebHook) { DARABONBA_PTR_SET_VALUE(dingWebHook_, dingWebHook) };


          // mail Field Functions 
          bool hasMail() const { return this->mail_ != nullptr;};
          void deleteMail() { this->mail_ = nullptr;};
          inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
          inline Channels& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


          // SMS Field Functions 
          bool hasSMS() const { return this->SMS_ != nullptr;};
          void deleteSMS() { this->SMS_ = nullptr;};
          inline string getSMS() const { DARABONBA_PTR_GET_DEFAULT(SMS_, "") };
          inline Channels& setSMS(string SMS) { DARABONBA_PTR_SET_VALUE(SMS_, SMS) };


        protected:
          // The TradeManager ID of the alert contact.
          shared_ptr<string> aliIM_ {};
          // The webhook URL of the DingTalk chatbot.
          shared_ptr<string> dingWebHook_ {};
          // The email address of the alert contact.
          shared_ptr<string> mail_ {};
          // The phone number of the alert contac.
          shared_ptr<string> SMS_ {};
        };

        virtual bool empty() const override { return this->channels_ == nullptr
        && this->channelsState_ == nullptr && this->contactGroups_ == nullptr && this->createTime_ == nullptr && this->desc_ == nullptr && this->lang_ == nullptr
        && this->name_ == nullptr && this->updateTime_ == nullptr; };
        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline const Contact::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, Contact::Channels) };
        inline Contact::Channels getChannels() { DARABONBA_PTR_GET(channels_, Contact::Channels) };
        inline Contact& setChannels(const Contact::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline Contact& setChannels(Contact::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // channelsState Field Functions 
        bool hasChannelsState() const { return this->channelsState_ != nullptr;};
        void deleteChannelsState() { this->channelsState_ = nullptr;};
        inline const Contact::ChannelsState & getChannelsState() const { DARABONBA_PTR_GET_CONST(channelsState_, Contact::ChannelsState) };
        inline Contact::ChannelsState getChannelsState() { DARABONBA_PTR_GET(channelsState_, Contact::ChannelsState) };
        inline Contact& setChannelsState(const Contact::ChannelsState & channelsState) { DARABONBA_PTR_SET_VALUE(channelsState_, channelsState) };
        inline Contact& setChannelsState(Contact::ChannelsState && channelsState) { DARABONBA_PTR_SET_RVALUE(channelsState_, channelsState) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline const Contact::ContactGroups & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Contact::ContactGroups) };
        inline Contact::ContactGroups getContactGroups() { DARABONBA_PTR_GET(contactGroups_, Contact::ContactGroups) };
        inline Contact& setContactGroups(const Contact::ContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
        inline Contact& setContactGroups(Contact::ContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Contact& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Contact& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // lang Field Functions 
        bool hasLang() const { return this->lang_ != nullptr;};
        void deleteLang() { this->lang_ = nullptr;};
        inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
        inline Contact& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Contact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Contact& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The alert notification method.
        shared_ptr<Contact::Channels> channels_ {};
        // The status of the alert notification method. Valid values: PENDING and OK.
        // 
        // The email address must be activated after it is added as the value specified for the alert notification method. The value PENDING indicates that the email address is not activated. The value OK indicates that the email address is activated.
        shared_ptr<Contact::ChannelsState> channelsState_ {};
        // None.
        shared_ptr<Contact::ContactGroups> contactGroups_ {};
        // The timestamp when the alert contact was created.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The description.
        shared_ptr<string> desc_ {};
        // The language in which the alert information is displayed. Valid values:
        // 
        // *   zh-cn: simplified Chinese
        // *   en: English
        shared_ptr<string> lang_ {};
        // The name of the alert contact.
        shared_ptr<string> name_ {};
        // The timestamp when the alert contact was updated.
        // 
        // Unit: milliseconds.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->contact_ == nullptr; };
      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline const vector<Contacts::Contact> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Contacts::Contact>) };
      inline vector<Contacts::Contact> getContact() { DARABONBA_PTR_GET(contact_, vector<Contacts::Contact>) };
      inline Contacts& setContact(const vector<Contacts::Contact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
      inline Contacts& setContact(vector<Contacts::Contact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    protected:
      shared_ptr<vector<Contacts::Contact>> contact_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->contacts_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeContactListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const DescribeContactListResponseBody::Contacts & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, DescribeContactListResponseBody::Contacts) };
    inline DescribeContactListResponseBody::Contacts getContacts() { DARABONBA_PTR_GET(contacts_, DescribeContactListResponseBody::Contacts) };
    inline DescribeContactListResponseBody& setContacts(const DescribeContactListResponseBody::Contacts & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline DescribeContactListResponseBody& setContacts(DescribeContactListResponseBody::Contacts && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeContactListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContactListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeContactListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeContactListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The alert contacts.
    shared_ptr<DescribeContactListResponseBody::Contacts> contacts_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
