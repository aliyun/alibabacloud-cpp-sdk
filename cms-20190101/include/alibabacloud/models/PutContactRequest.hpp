// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, PutContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    PutContactRequest() = default ;
    PutContactRequest(const PutContactRequest &) = default ;
    PutContactRequest(PutContactRequest &&) = default ;
    PutContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutContactRequest() = default ;
    PutContactRequest& operator=(const PutContactRequest &) = default ;
    PutContactRequest& operator=(PutContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // 
      // Specify at least one of the following alert notification methods: email address and DingTalk chatbot.
      shared_ptr<string> aliIM_ {};
      // The webhook URL of the DingTalk chatbot.
      // 
      // Specify at least one of the following alert notification methods: email address and DingTalk chatbot.
      shared_ptr<string> dingWebHook_ {};
      // The email address. After you add or modify an email address, the recipient receives an email that contains an activation link. The system adds the recipient to the list of alert contacts only after the recipient activates the email address.
      // 
      // Specify at least one of the following alert notification methods: email address and DingTalk chatbot.
      shared_ptr<string> mail_ {};
      // The phone number of the alert contact. After you add or modify a phone number, the recipient receives a text message that contains an activation link. The system adds the recipient to the list of alert contacts only after the recipient activates the phone number.
      // 
      // Specify at least one of the following alert notification methods: email address and DingTalk chatbot.
      shared_ptr<string> SMS_ {};
    };

    virtual bool empty() const override { return this->channels_ == nullptr
        && this->contactName_ == nullptr && this->describe_ == nullptr && this->lang_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const PutContactRequest::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, PutContactRequest::Channels) };
    inline PutContactRequest::Channels getChannels() { DARABONBA_PTR_GET(channels_, PutContactRequest::Channels) };
    inline PutContactRequest& setChannels(const PutContactRequest::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline PutContactRequest& setChannels(PutContactRequest::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline PutContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline PutContactRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PutContactRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<PutContactRequest::Channels> channels_ {};
    // The name of the alert contact.
    // 
    // This parameter is required.
    shared_ptr<string> contactName_ {};
    // The description of the alert contact.
    // 
    // This parameter is required.
    shared_ptr<string> describe_ {};
    // The language in which the alert information is displayed. Valid values:
    // 
    // *   zh-cn: simplified Chinese
    // *   en: English
    // 
    // >  If you do not specify this parameter, CloudMonitor identifies the language of the alert information based on the region of your Alibaba Cloud account.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
