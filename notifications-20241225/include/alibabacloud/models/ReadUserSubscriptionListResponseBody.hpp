// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READUSERSUBSCRIPTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READUSERSUBSCRIPTIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadUserSubscriptionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadUserSubscriptionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadUserSubscriptionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadUserSubscriptionListResponseBody() = default ;
    ReadUserSubscriptionListResponseBody(const ReadUserSubscriptionListResponseBody &) = default ;
    ReadUserSubscriptionListResponseBody(ReadUserSubscriptionListResponseBody &&) = default ;
    ReadUserSubscriptionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadUserSubscriptionListResponseBody() = default ;
    ReadUserSubscriptionListResponseBody& operator=(const ReadUserSubscriptionListResponseBody &) = default ;
    ReadUserSubscriptionListResponseBody& operator=(ReadUserSubscriptionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
        DARABONBA_PTR_TO_JSON(CategoryDesc, categoryDesc_);
        DARABONBA_PTR_TO_JSON(CategoryGroupCode, categoryGroupCode_);
        DARABONBA_PTR_TO_JSON(CategoryGroupName, categoryGroupName_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(ChannelConfigs, channelConfigs_);
        DARABONBA_PTR_TO_JSON(Contact, contact_);
        DARABONBA_PTR_TO_JSON(ReceiveTimeList, receiveTimeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
        DARABONBA_PTR_FROM_JSON(CategoryDesc, categoryDesc_);
        DARABONBA_PTR_FROM_JSON(CategoryGroupCode, categoryGroupCode_);
        DARABONBA_PTR_FROM_JSON(CategoryGroupName, categoryGroupName_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(ChannelConfigs, channelConfigs_);
        DARABONBA_PTR_FROM_JSON(Contact, contact_);
        DARABONBA_PTR_FROM_JSON(ReceiveTimeList, receiveTimeList_);
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
      class Contact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contact& obj) { 
          DARABONBA_PTR_TO_JSON(CommonContacts, commonContacts_);
          DARABONBA_PTR_TO_JSON(WebhookContacts, webhookContacts_);
        };
        friend void from_json(const Darabonba::Json& j, Contact& obj) { 
          DARABONBA_PTR_FROM_JSON(CommonContacts, commonContacts_);
          DARABONBA_PTR_FROM_JSON(WebhookContacts, webhookContacts_);
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
        class WebhookContacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WebhookContacts& obj) { 
            DARABONBA_PTR_TO_JSON(ContactId, contactId_);
            DARABONBA_PTR_TO_JSON(ContactName, contactName_);
            DARABONBA_PTR_TO_JSON(MessageSource, messageSource_);
            DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
            DARABONBA_PTR_TO_JSON(ServerUrl, serverUrl_);
            DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
          };
          friend void from_json(const Darabonba::Json& j, WebhookContacts& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
            DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
            DARABONBA_PTR_FROM_JSON(MessageSource, messageSource_);
            DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
            DARABONBA_PTR_FROM_JSON(ServerUrl, serverUrl_);
            DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
          };
          WebhookContacts() = default ;
          WebhookContacts(const WebhookContacts &) = default ;
          WebhookContacts(WebhookContacts &&) = default ;
          WebhookContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WebhookContacts() = default ;
          WebhookContacts& operator=(const WebhookContacts &) = default ;
          WebhookContacts& operator=(WebhookContacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MessageSource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MessageSource& obj) { 
              DARABONBA_PTR_TO_JSON(KeywordBlacklist, keywordBlacklist_);
              DARABONBA_PTR_TO_JSON(KeywordWhitelist, keywordWhitelist_);
            };
            friend void from_json(const Darabonba::Json& j, MessageSource& obj) { 
              DARABONBA_PTR_FROM_JSON(KeywordBlacklist, keywordBlacklist_);
              DARABONBA_PTR_FROM_JSON(KeywordWhitelist, keywordWhitelist_);
            };
            MessageSource() = default ;
            MessageSource(const MessageSource &) = default ;
            MessageSource(MessageSource &&) = default ;
            MessageSource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MessageSource() = default ;
            MessageSource& operator=(const MessageSource &) = default ;
            MessageSource& operator=(MessageSource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keywordBlacklist_ == nullptr
        && this->keywordWhitelist_ == nullptr; };
            // keywordBlacklist Field Functions 
            bool hasKeywordBlacklist() const { return this->keywordBlacklist_ != nullptr;};
            void deleteKeywordBlacklist() { this->keywordBlacklist_ = nullptr;};
            inline const vector<string> & getKeywordBlacklist() const { DARABONBA_PTR_GET_CONST(keywordBlacklist_, vector<string>) };
            inline vector<string> getKeywordBlacklist() { DARABONBA_PTR_GET(keywordBlacklist_, vector<string>) };
            inline MessageSource& setKeywordBlacklist(const vector<string> & keywordBlacklist) { DARABONBA_PTR_SET_VALUE(keywordBlacklist_, keywordBlacklist) };
            inline MessageSource& setKeywordBlacklist(vector<string> && keywordBlacklist) { DARABONBA_PTR_SET_RVALUE(keywordBlacklist_, keywordBlacklist) };


            // keywordWhitelist Field Functions 
            bool hasKeywordWhitelist() const { return this->keywordWhitelist_ != nullptr;};
            void deleteKeywordWhitelist() { this->keywordWhitelist_ = nullptr;};
            inline const vector<string> & getKeywordWhitelist() const { DARABONBA_PTR_GET_CONST(keywordWhitelist_, vector<string>) };
            inline vector<string> getKeywordWhitelist() { DARABONBA_PTR_GET(keywordWhitelist_, vector<string>) };
            inline MessageSource& setKeywordWhitelist(const vector<string> & keywordWhitelist) { DARABONBA_PTR_SET_VALUE(keywordWhitelist_, keywordWhitelist) };
            inline MessageSource& setKeywordWhitelist(vector<string> && keywordWhitelist) { DARABONBA_PTR_SET_RVALUE(keywordWhitelist_, keywordWhitelist) };


          protected:
            // The blacklist.
            shared_ptr<vector<string>> keywordBlacklist_ {};
            // The whitelist.
            shared_ptr<vector<string>> keywordWhitelist_ {};
          };

          virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->messageSource_ == nullptr && this->securityToken_ == nullptr && this->serverUrl_ == nullptr && this->webhookType_ == nullptr; };
          // contactId Field Functions 
          bool hasContactId() const { return this->contactId_ != nullptr;};
          void deleteContactId() { this->contactId_ = nullptr;};
          inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
          inline WebhookContacts& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


          // contactName Field Functions 
          bool hasContactName() const { return this->contactName_ != nullptr;};
          void deleteContactName() { this->contactName_ = nullptr;};
          inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
          inline WebhookContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


          // messageSource Field Functions 
          bool hasMessageSource() const { return this->messageSource_ != nullptr;};
          void deleteMessageSource() { this->messageSource_ = nullptr;};
          inline const WebhookContacts::MessageSource & getMessageSource() const { DARABONBA_PTR_GET_CONST(messageSource_, WebhookContacts::MessageSource) };
          inline WebhookContacts::MessageSource getMessageSource() { DARABONBA_PTR_GET(messageSource_, WebhookContacts::MessageSource) };
          inline WebhookContacts& setMessageSource(const WebhookContacts::MessageSource & messageSource) { DARABONBA_PTR_SET_VALUE(messageSource_, messageSource) };
          inline WebhookContacts& setMessageSource(WebhookContacts::MessageSource && messageSource) { DARABONBA_PTR_SET_RVALUE(messageSource_, messageSource) };


          // securityToken Field Functions 
          bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
          void deleteSecurityToken() { this->securityToken_ = nullptr;};
          inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
          inline WebhookContacts& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


          // serverUrl Field Functions 
          bool hasServerUrl() const { return this->serverUrl_ != nullptr;};
          void deleteServerUrl() { this->serverUrl_ = nullptr;};
          inline string getServerUrl() const { DARABONBA_PTR_GET_DEFAULT(serverUrl_, "") };
          inline WebhookContacts& setServerUrl(string serverUrl) { DARABONBA_PTR_SET_VALUE(serverUrl_, serverUrl) };


          // webhookType Field Functions 
          bool hasWebhookType() const { return this->webhookType_ != nullptr;};
          void deleteWebhookType() { this->webhookType_ = nullptr;};
          inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
          inline WebhookContacts& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


        protected:
          // The contact ID.
          shared_ptr<int64_t> contactId_ {};
          // The name of the Account Center contact.
          shared_ptr<string> contactName_ {};
          // The message source.
          shared_ptr<WebhookContacts::MessageSource> messageSource_ {};
          // The security token.
          shared_ptr<string> securityToken_ {};
          // The webhook URL.
          shared_ptr<string> serverUrl_ {};
          // The webhook type.
          shared_ptr<string> webhookType_ {};
        };

        class CommonContacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonContacts& obj) { 
            DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
            DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
            DARABONBA_PTR_TO_JSON(ContactId, contactId_);
            DARABONBA_PTR_TO_JSON(ContactMobile, contactMobile_);
            DARABONBA_PTR_TO_JSON(ContactName, contactName_);
            DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
            DARABONBA_PTR_TO_JSON(MessageSource, messageSource_);
            DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
            DARABONBA_PTR_TO_JSON(Position, position_);
          };
          friend void from_json(const Darabonba::Json& j, CommonContacts& obj) { 
            DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
            DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
            DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
            DARABONBA_PTR_FROM_JSON(ContactMobile, contactMobile_);
            DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
            DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
            DARABONBA_PTR_FROM_JSON(MessageSource, messageSource_);
            DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
          };
          CommonContacts() = default ;
          CommonContacts(const CommonContacts &) = default ;
          CommonContacts(CommonContacts &&) = default ;
          CommonContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommonContacts() = default ;
          CommonContacts& operator=(const CommonContacts &) = default ;
          CommonContacts& operator=(CommonContacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MessageSource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MessageSource& obj) { 
              DARABONBA_PTR_TO_JSON(KeywordBlacklist, keywordBlacklist_);
              DARABONBA_PTR_TO_JSON(KeywordWhitelist, keywordWhitelist_);
            };
            friend void from_json(const Darabonba::Json& j, MessageSource& obj) { 
              DARABONBA_PTR_FROM_JSON(KeywordBlacklist, keywordBlacklist_);
              DARABONBA_PTR_FROM_JSON(KeywordWhitelist, keywordWhitelist_);
            };
            MessageSource() = default ;
            MessageSource(const MessageSource &) = default ;
            MessageSource(MessageSource &&) = default ;
            MessageSource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MessageSource() = default ;
            MessageSource& operator=(const MessageSource &) = default ;
            MessageSource& operator=(MessageSource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->keywordBlacklist_ == nullptr
        && this->keywordWhitelist_ == nullptr; };
            // keywordBlacklist Field Functions 
            bool hasKeywordBlacklist() const { return this->keywordBlacklist_ != nullptr;};
            void deleteKeywordBlacklist() { this->keywordBlacklist_ = nullptr;};
            inline const vector<string> & getKeywordBlacklist() const { DARABONBA_PTR_GET_CONST(keywordBlacklist_, vector<string>) };
            inline vector<string> getKeywordBlacklist() { DARABONBA_PTR_GET(keywordBlacklist_, vector<string>) };
            inline MessageSource& setKeywordBlacklist(const vector<string> & keywordBlacklist) { DARABONBA_PTR_SET_VALUE(keywordBlacklist_, keywordBlacklist) };
            inline MessageSource& setKeywordBlacklist(vector<string> && keywordBlacklist) { DARABONBA_PTR_SET_RVALUE(keywordBlacklist_, keywordBlacklist) };


            // keywordWhitelist Field Functions 
            bool hasKeywordWhitelist() const { return this->keywordWhitelist_ != nullptr;};
            void deleteKeywordWhitelist() { this->keywordWhitelist_ = nullptr;};
            inline const vector<string> & getKeywordWhitelist() const { DARABONBA_PTR_GET_CONST(keywordWhitelist_, vector<string>) };
            inline vector<string> getKeywordWhitelist() { DARABONBA_PTR_GET(keywordWhitelist_, vector<string>) };
            inline MessageSource& setKeywordWhitelist(const vector<string> & keywordWhitelist) { DARABONBA_PTR_SET_VALUE(keywordWhitelist_, keywordWhitelist) };
            inline MessageSource& setKeywordWhitelist(vector<string> && keywordWhitelist) { DARABONBA_PTR_SET_RVALUE(keywordWhitelist_, keywordWhitelist) };


          protected:
            // The blacklist.
            shared_ptr<vector<string>> keywordBlacklist_ {};
            // The whitelist.
            shared_ptr<vector<string>> keywordWhitelist_ {};
          };

          virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->contactEmail_ == nullptr && this->contactId_ == nullptr && this->contactMobile_ == nullptr && this->contactName_ == nullptr && this->emailConfirmed_ == nullptr
        && this->messageSource_ == nullptr && this->mobileConfirmed_ == nullptr && this->position_ == nullptr; };
          // aliUid Field Functions 
          bool hasAliUid() const { return this->aliUid_ != nullptr;};
          void deleteAliUid() { this->aliUid_ = nullptr;};
          inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
          inline CommonContacts& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


          // contactEmail Field Functions 
          bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
          void deleteContactEmail() { this->contactEmail_ = nullptr;};
          inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
          inline CommonContacts& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


          // contactId Field Functions 
          bool hasContactId() const { return this->contactId_ != nullptr;};
          void deleteContactId() { this->contactId_ = nullptr;};
          inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
          inline CommonContacts& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


          // contactMobile Field Functions 
          bool hasContactMobile() const { return this->contactMobile_ != nullptr;};
          void deleteContactMobile() { this->contactMobile_ = nullptr;};
          inline string getContactMobile() const { DARABONBA_PTR_GET_DEFAULT(contactMobile_, "") };
          inline CommonContacts& setContactMobile(string contactMobile) { DARABONBA_PTR_SET_VALUE(contactMobile_, contactMobile) };


          // contactName Field Functions 
          bool hasContactName() const { return this->contactName_ != nullptr;};
          void deleteContactName() { this->contactName_ = nullptr;};
          inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
          inline CommonContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


          // emailConfirmed Field Functions 
          bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
          void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
          inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
          inline CommonContacts& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


          // messageSource Field Functions 
          bool hasMessageSource() const { return this->messageSource_ != nullptr;};
          void deleteMessageSource() { this->messageSource_ = nullptr;};
          inline const CommonContacts::MessageSource & getMessageSource() const { DARABONBA_PTR_GET_CONST(messageSource_, CommonContacts::MessageSource) };
          inline CommonContacts::MessageSource getMessageSource() { DARABONBA_PTR_GET(messageSource_, CommonContacts::MessageSource) };
          inline CommonContacts& setMessageSource(const CommonContacts::MessageSource & messageSource) { DARABONBA_PTR_SET_VALUE(messageSource_, messageSource) };
          inline CommonContacts& setMessageSource(CommonContacts::MessageSource && messageSource) { DARABONBA_PTR_SET_RVALUE(messageSource_, messageSource) };


          // mobileConfirmed Field Functions 
          bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
          void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
          inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
          inline CommonContacts& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
          inline CommonContacts& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        protected:
          // The Alibaba Cloud account ID.
          shared_ptr<int64_t> aliUid_ {};
          // The email address of the contact.
          shared_ptr<string> contactEmail_ {};
          // The contact ID.
          shared_ptr<int64_t> contactId_ {};
          // The masked mobile phone number of the Account Center contact.
          shared_ptr<string> contactMobile_ {};
          // The name of the Account Center contact.
          shared_ptr<string> contactName_ {};
          // Indicates whether the email address is verified.
          shared_ptr<bool> emailConfirmed_ {};
          // The message source.
          shared_ptr<CommonContacts::MessageSource> messageSource_ {};
          // Indicates whether the mobile phone number of the Account Center contact is verified.
          shared_ptr<bool> mobileConfirmed_ {};
          // The position of the Account Center contact.
          shared_ptr<string> position_ {};
        };

        virtual bool empty() const override { return this->commonContacts_ == nullptr
        && this->webhookContacts_ == nullptr; };
        // commonContacts Field Functions 
        bool hasCommonContacts() const { return this->commonContacts_ != nullptr;};
        void deleteCommonContacts() { this->commonContacts_ = nullptr;};
        inline const vector<Contact::CommonContacts> & getCommonContacts() const { DARABONBA_PTR_GET_CONST(commonContacts_, vector<Contact::CommonContacts>) };
        inline vector<Contact::CommonContacts> getCommonContacts() { DARABONBA_PTR_GET(commonContacts_, vector<Contact::CommonContacts>) };
        inline Contact& setCommonContacts(const vector<Contact::CommonContacts> & commonContacts) { DARABONBA_PTR_SET_VALUE(commonContacts_, commonContacts) };
        inline Contact& setCommonContacts(vector<Contact::CommonContacts> && commonContacts) { DARABONBA_PTR_SET_RVALUE(commonContacts_, commonContacts) };


        // webhookContacts Field Functions 
        bool hasWebhookContacts() const { return this->webhookContacts_ != nullptr;};
        void deleteWebhookContacts() { this->webhookContacts_ = nullptr;};
        inline const vector<Contact::WebhookContacts> & getWebhookContacts() const { DARABONBA_PTR_GET_CONST(webhookContacts_, vector<Contact::WebhookContacts>) };
        inline vector<Contact::WebhookContacts> getWebhookContacts() { DARABONBA_PTR_GET(webhookContacts_, vector<Contact::WebhookContacts>) };
        inline Contact& setWebhookContacts(const vector<Contact::WebhookContacts> & webhookContacts) { DARABONBA_PTR_SET_VALUE(webhookContacts_, webhookContacts) };
        inline Contact& setWebhookContacts(vector<Contact::WebhookContacts> && webhookContacts) { DARABONBA_PTR_SET_RVALUE(webhookContacts_, webhookContacts) };


      protected:
        // The Account Center contact list.
        shared_ptr<vector<Contact::CommonContacts>> commonContacts_ {};
        // The webhook contact list.
        shared_ptr<vector<Contact::WebhookContacts>> webhookContacts_ {};
      };

      class ChannelConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(CheckedState, checkedState_);
          DARABONBA_PTR_TO_JSON(DefaultChecked, defaultChecked_);
          DARABONBA_PTR_TO_JSON(FatigueDayLimit, fatigueDayLimit_);
          DARABONBA_PTR_TO_JSON(Optional, optional_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(CheckedState, checkedState_);
          DARABONBA_PTR_FROM_JSON(DefaultChecked, defaultChecked_);
          DARABONBA_PTR_FROM_JSON(FatigueDayLimit, fatigueDayLimit_);
          DARABONBA_PTR_FROM_JSON(Optional, optional_);
        };
        ChannelConfigs() = default ;
        ChannelConfigs(const ChannelConfigs &) = default ;
        ChannelConfigs(ChannelConfigs &&) = default ;
        ChannelConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelConfigs() = default ;
        ChannelConfigs& operator=(const ChannelConfigs &) = default ;
        ChannelConfigs& operator=(ChannelConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelType_ == nullptr
        && this->checkedState_ == nullptr && this->defaultChecked_ == nullptr && this->fatigueDayLimit_ == nullptr && this->optional_ == nullptr; };
        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline ChannelConfigs& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // checkedState Field Functions 
        bool hasCheckedState() const { return this->checkedState_ != nullptr;};
        void deleteCheckedState() { this->checkedState_ = nullptr;};
        inline string getCheckedState() const { DARABONBA_PTR_GET_DEFAULT(checkedState_, "") };
        inline ChannelConfigs& setCheckedState(string checkedState) { DARABONBA_PTR_SET_VALUE(checkedState_, checkedState) };


        // defaultChecked Field Functions 
        bool hasDefaultChecked() const { return this->defaultChecked_ != nullptr;};
        void deleteDefaultChecked() { this->defaultChecked_ = nullptr;};
        inline string getDefaultChecked() const { DARABONBA_PTR_GET_DEFAULT(defaultChecked_, "") };
        inline ChannelConfigs& setDefaultChecked(string defaultChecked) { DARABONBA_PTR_SET_VALUE(defaultChecked_, defaultChecked) };


        // fatigueDayLimit Field Functions 
        bool hasFatigueDayLimit() const { return this->fatigueDayLimit_ != nullptr;};
        void deleteFatigueDayLimit() { this->fatigueDayLimit_ = nullptr;};
        inline int32_t getFatigueDayLimit() const { DARABONBA_PTR_GET_DEFAULT(fatigueDayLimit_, 0) };
        inline ChannelConfigs& setFatigueDayLimit(int32_t fatigueDayLimit) { DARABONBA_PTR_SET_VALUE(fatigueDayLimit_, fatigueDayLimit) };


        // optional Field Functions 
        bool hasOptional() const { return this->optional_ != nullptr;};
        void deleteOptional() { this->optional_ = nullptr;};
        inline string getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, "") };
        inline ChannelConfigs& setOptional(string optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


      protected:
        // The channel type.
        shared_ptr<string> channelType_ {};
        // Indicates whether the subscription is configured.
        shared_ptr<string> checkedState_ {};
        // Indicates whether the option is selected by default.
        shared_ptr<string> defaultChecked_ {};
        // The fatigue limit.
        shared_ptr<int32_t> fatigueDayLimit_ {};
        // Indicates whether the option can be modified.
        shared_ptr<string> optional_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->categoryCode_ == nullptr && this->categoryDesc_ == nullptr && this->categoryGroupCode_ == nullptr && this->categoryGroupName_ == nullptr && this->categoryName_ == nullptr
        && this->channelConfigs_ == nullptr && this->contact_ == nullptr && this->receiveTimeList_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // categoryCode Field Functions 
      bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
      void deleteCategoryCode() { this->categoryCode_ = nullptr;};
      inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
      inline Data& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


      // categoryDesc Field Functions 
      bool hasCategoryDesc() const { return this->categoryDesc_ != nullptr;};
      void deleteCategoryDesc() { this->categoryDesc_ = nullptr;};
      inline string getCategoryDesc() const { DARABONBA_PTR_GET_DEFAULT(categoryDesc_, "") };
      inline Data& setCategoryDesc(string categoryDesc) { DARABONBA_PTR_SET_VALUE(categoryDesc_, categoryDesc) };


      // categoryGroupCode Field Functions 
      bool hasCategoryGroupCode() const { return this->categoryGroupCode_ != nullptr;};
      void deleteCategoryGroupCode() { this->categoryGroupCode_ = nullptr;};
      inline string getCategoryGroupCode() const { DARABONBA_PTR_GET_DEFAULT(categoryGroupCode_, "") };
      inline Data& setCategoryGroupCode(string categoryGroupCode) { DARABONBA_PTR_SET_VALUE(categoryGroupCode_, categoryGroupCode) };


      // categoryGroupName Field Functions 
      bool hasCategoryGroupName() const { return this->categoryGroupName_ != nullptr;};
      void deleteCategoryGroupName() { this->categoryGroupName_ = nullptr;};
      inline string getCategoryGroupName() const { DARABONBA_PTR_GET_DEFAULT(categoryGroupName_, "") };
      inline Data& setCategoryGroupName(string categoryGroupName) { DARABONBA_PTR_SET_VALUE(categoryGroupName_, categoryGroupName) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Data& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // channelConfigs Field Functions 
      bool hasChannelConfigs() const { return this->channelConfigs_ != nullptr;};
      void deleteChannelConfigs() { this->channelConfigs_ = nullptr;};
      inline const vector<Data::ChannelConfigs> & getChannelConfigs() const { DARABONBA_PTR_GET_CONST(channelConfigs_, vector<Data::ChannelConfigs>) };
      inline vector<Data::ChannelConfigs> getChannelConfigs() { DARABONBA_PTR_GET(channelConfigs_, vector<Data::ChannelConfigs>) };
      inline Data& setChannelConfigs(const vector<Data::ChannelConfigs> & channelConfigs) { DARABONBA_PTR_SET_VALUE(channelConfigs_, channelConfigs) };
      inline Data& setChannelConfigs(vector<Data::ChannelConfigs> && channelConfigs) { DARABONBA_PTR_SET_RVALUE(channelConfigs_, channelConfigs) };


      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline const Data::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, Data::Contact) };
      inline Data::Contact getContact() { DARABONBA_PTR_GET(contact_, Data::Contact) };
      inline Data& setContact(const Data::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
      inline Data& setContact(Data::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


      // receiveTimeList Field Functions 
      bool hasReceiveTimeList() const { return this->receiveTimeList_ != nullptr;};
      void deleteReceiveTimeList() { this->receiveTimeList_ = nullptr;};
      inline const vector<int32_t> & getReceiveTimeList() const { DARABONBA_PTR_GET_CONST(receiveTimeList_, vector<int32_t>) };
      inline vector<int32_t> getReceiveTimeList() { DARABONBA_PTR_GET(receiveTimeList_, vector<int32_t>) };
      inline Data& setReceiveTimeList(const vector<int32_t> & receiveTimeList) { DARABONBA_PTR_SET_VALUE(receiveTimeList_, receiveTimeList) };
      inline Data& setReceiveTimeList(vector<int32_t> && receiveTimeList) { DARABONBA_PTR_SET_RVALUE(receiveTimeList_, receiveTimeList) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<int64_t> aliUid_ {};
      // The message category code.
      shared_ptr<string> categoryCode_ {};
      // The description of the message category.
      shared_ptr<string> categoryDesc_ {};
      // The category group code.
      shared_ptr<string> categoryGroupCode_ {};
      // The category group name.
      shared_ptr<string> categoryGroupName_ {};
      // The message category name.
      shared_ptr<string> categoryName_ {};
      // The channel list.
      shared_ptr<vector<Data::ChannelConfigs>> channelConfigs_ {};
      // The contact.
      shared_ptr<Data::Contact> contact_ {};
      // The receiving time list.
      shared_ptr<vector<int32_t>> receiveTimeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadUserSubscriptionListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ReadUserSubscriptionListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ReadUserSubscriptionListResponseBody::Data>) };
    inline vector<ReadUserSubscriptionListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ReadUserSubscriptionListResponseBody::Data>) };
    inline ReadUserSubscriptionListResponseBody& setData(const vector<ReadUserSubscriptionListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadUserSubscriptionListResponseBody& setData(vector<ReadUserSubscriptionListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadUserSubscriptionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadUserSubscriptionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadUserSubscriptionListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code of the operation.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<vector<ReadUserSubscriptionListResponseBody::Data>> data_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
