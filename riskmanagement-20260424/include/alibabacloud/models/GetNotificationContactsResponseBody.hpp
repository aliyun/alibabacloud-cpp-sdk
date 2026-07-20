// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFICATIONCONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFICATIONCONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetNotificationContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotificationContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotificationContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNotificationContactsResponseBody() = default ;
    GetNotificationContactsResponseBody(const GetNotificationContactsResponseBody &) = default ;
    GetNotificationContactsResponseBody(GetNotificationContactsResponseBody &&) = default ;
    GetNotificationContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotificationContactsResponseBody() = default ;
    GetNotificationContactsResponseBody& operator=(const GetNotificationContactsResponseBody &) = default ;
    GetNotificationContactsResponseBody& operator=(GetNotificationContactsResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ChooseAllChannel, chooseAllChannel_);
        DARABONBA_PTR_TO_JSON(ContactInfoList, contactInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
        DARABONBA_PTR_FROM_JSON(CategoryDesc, categoryDesc_);
        DARABONBA_PTR_FROM_JSON(CategoryGroupCode, categoryGroupCode_);
        DARABONBA_PTR_FROM_JSON(CategoryGroupName, categoryGroupName_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(ChannelConfigs, channelConfigs_);
        DARABONBA_PTR_FROM_JSON(ChooseAllChannel, chooseAllChannel_);
        DARABONBA_PTR_FROM_JSON(ContactInfoList, contactInfoList_);
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
      class ContactInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(BindContact, bindContact_);
          DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactMobile, contactMobile_);
          DARABONBA_PTR_TO_JSON(ContactName, contactName_);
          DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
          DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
          DARABONBA_PTR_TO_JSON(Position, position_);
        };
        friend void from_json(const Darabonba::Json& j, ContactInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(BindContact, bindContact_);
          DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactMobile, contactMobile_);
          DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
          DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
          DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
        };
        ContactInfoList() = default ;
        ContactInfoList(const ContactInfoList &) = default ;
        ContactInfoList(ContactInfoList &&) = default ;
        ContactInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactInfoList() = default ;
        ContactInfoList& operator=(const ContactInfoList &) = default ;
        ContactInfoList& operator=(ContactInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bindContact_ == nullptr && this->contactEmail_ == nullptr && this->contactId_ == nullptr && this->contactMobile_ == nullptr && this->contactName_ == nullptr
        && this->emailConfirmed_ == nullptr && this->mobileConfirmed_ == nullptr && this->position_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline ContactInfoList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // bindContact Field Functions 
        bool hasBindContact() const { return this->bindContact_ != nullptr;};
        void deleteBindContact() { this->bindContact_ = nullptr;};
        inline bool getBindContact() const { DARABONBA_PTR_GET_DEFAULT(bindContact_, false) };
        inline ContactInfoList& setBindContact(bool bindContact) { DARABONBA_PTR_SET_VALUE(bindContact_, bindContact) };


        // contactEmail Field Functions 
        bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
        void deleteContactEmail() { this->contactEmail_ = nullptr;};
        inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
        inline ContactInfoList& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
        inline ContactInfoList& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactMobile Field Functions 
        bool hasContactMobile() const { return this->contactMobile_ != nullptr;};
        void deleteContactMobile() { this->contactMobile_ = nullptr;};
        inline string getContactMobile() const { DARABONBA_PTR_GET_DEFAULT(contactMobile_, "") };
        inline ContactInfoList& setContactMobile(string contactMobile) { DARABONBA_PTR_SET_VALUE(contactMobile_, contactMobile) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline ContactInfoList& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // emailConfirmed Field Functions 
        bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
        void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
        inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
        inline ContactInfoList& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


        // mobileConfirmed Field Functions 
        bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
        void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
        inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
        inline ContactInfoList& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline ContactInfoList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      protected:
        shared_ptr<int64_t> aliUid_ {};
        shared_ptr<bool> bindContact_ {};
        shared_ptr<string> contactEmail_ {};
        shared_ptr<int64_t> contactId_ {};
        shared_ptr<string> contactMobile_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<bool> emailConfirmed_ {};
        shared_ptr<bool> mobileConfirmed_ {};
        shared_ptr<string> position_ {};
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
        shared_ptr<string> channelType_ {};
        shared_ptr<string> checkedState_ {};
        shared_ptr<string> defaultChecked_ {};
        shared_ptr<int32_t> fatigueDayLimit_ {};
        shared_ptr<string> optional_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->categoryCode_ == nullptr && this->categoryDesc_ == nullptr && this->categoryGroupCode_ == nullptr && this->categoryGroupName_ == nullptr && this->categoryName_ == nullptr
        && this->channelConfigs_ == nullptr && this->chooseAllChannel_ == nullptr && this->contactInfoList_ == nullptr; };
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


      // chooseAllChannel Field Functions 
      bool hasChooseAllChannel() const { return this->chooseAllChannel_ != nullptr;};
      void deleteChooseAllChannel() { this->chooseAllChannel_ = nullptr;};
      inline bool getChooseAllChannel() const { DARABONBA_PTR_GET_DEFAULT(chooseAllChannel_, false) };
      inline Data& setChooseAllChannel(bool chooseAllChannel) { DARABONBA_PTR_SET_VALUE(chooseAllChannel_, chooseAllChannel) };


      // contactInfoList Field Functions 
      bool hasContactInfoList() const { return this->contactInfoList_ != nullptr;};
      void deleteContactInfoList() { this->contactInfoList_ = nullptr;};
      inline const vector<Data::ContactInfoList> & getContactInfoList() const { DARABONBA_PTR_GET_CONST(contactInfoList_, vector<Data::ContactInfoList>) };
      inline vector<Data::ContactInfoList> getContactInfoList() { DARABONBA_PTR_GET(contactInfoList_, vector<Data::ContactInfoList>) };
      inline Data& setContactInfoList(const vector<Data::ContactInfoList> & contactInfoList) { DARABONBA_PTR_SET_VALUE(contactInfoList_, contactInfoList) };
      inline Data& setContactInfoList(vector<Data::ContactInfoList> && contactInfoList) { DARABONBA_PTR_SET_RVALUE(contactInfoList_, contactInfoList) };


    protected:
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<string> categoryCode_ {};
      shared_ptr<string> categoryDesc_ {};
      shared_ptr<string> categoryGroupCode_ {};
      shared_ptr<string> categoryGroupName_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<vector<Data::ChannelConfigs>> channelConfigs_ {};
      shared_ptr<bool> chooseAllChannel_ {};
      shared_ptr<vector<Data::ContactInfoList>> contactInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNotificationContactsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetNotificationContactsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetNotificationContactsResponseBody::Data>) };
    inline vector<GetNotificationContactsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetNotificationContactsResponseBody::Data>) };
    inline GetNotificationContactsResponseBody& setData(const vector<GetNotificationContactsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNotificationContactsResponseBody& setData(vector<GetNotificationContactsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNotificationContactsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNotificationContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNotificationContactsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetNotificationContactsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
