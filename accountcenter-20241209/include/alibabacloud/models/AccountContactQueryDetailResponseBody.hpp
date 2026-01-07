// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTCONTACTQUERYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTCONTACTQUERYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class AccountContactQueryDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountContactQueryDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AccountContactQueryDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AccountContactQueryDetailResponseBody() = default ;
    AccountContactQueryDetailResponseBody(const AccountContactQueryDetailResponseBody &) = default ;
    AccountContactQueryDetailResponseBody(AccountContactQueryDetailResponseBody &&) = default ;
    AccountContactQueryDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountContactQueryDetailResponseBody() = default ;
    AccountContactQueryDetailResponseBody& operator=(const AccountContactQueryDetailResponseBody &) = default ;
    AccountContactQueryDetailResponseBody& operator=(AccountContactQueryDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactMobile, contactMobile_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(ContactPosition, contactPosition_);
        DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
        DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(HasSubscription, hasSubscription_);
        DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
        DARABONBA_PTR_TO_JSON(SharedContact, sharedContact_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactMobile, contactMobile_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(ContactPosition, contactPosition_);
        DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
        DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(HasSubscription, hasSubscription_);
        DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
        DARABONBA_PTR_FROM_JSON(SharedContact, sharedContact_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
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
      virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactId_ == nullptr && this->contactMobile_ == nullptr && this->contactName_ == nullptr && this->contactPosition_ == nullptr && this->customerId_ == nullptr
        && this->emailConfirmed_ == nullptr && this->entityId_ == nullptr && this->entityType_ == nullptr && this->hasSubscription_ == nullptr && this->mobileConfirmed_ == nullptr
        && this->sharedContact_ == nullptr && this->uid_ == nullptr && this->updateDate_ == nullptr && this->updateUser_ == nullptr; };
      // contactEmail Field Functions 
      bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
      void deleteContactEmail() { this->contactEmail_ = nullptr;};
      inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
      inline Data& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
      inline Data& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // contactMobile Field Functions 
      bool hasContactMobile() const { return this->contactMobile_ != nullptr;};
      void deleteContactMobile() { this->contactMobile_ = nullptr;};
      inline string getContactMobile() const { DARABONBA_PTR_GET_DEFAULT(contactMobile_, "") };
      inline Data& setContactMobile(string contactMobile) { DARABONBA_PTR_SET_VALUE(contactMobile_, contactMobile) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // contactPosition Field Functions 
      bool hasContactPosition() const { return this->contactPosition_ != nullptr;};
      void deleteContactPosition() { this->contactPosition_ = nullptr;};
      inline string getContactPosition() const { DARABONBA_PTR_GET_DEFAULT(contactPosition_, "") };
      inline Data& setContactPosition(string contactPosition) { DARABONBA_PTR_SET_VALUE(contactPosition_, contactPosition) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
      inline Data& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // emailConfirmed Field Functions 
      bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
      void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
      inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
      inline Data& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline Data& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Data& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // hasSubscription Field Functions 
      bool hasHasSubscription() const { return this->hasSubscription_ != nullptr;};
      void deleteHasSubscription() { this->hasSubscription_ = nullptr;};
      inline bool getHasSubscription() const { DARABONBA_PTR_GET_DEFAULT(hasSubscription_, false) };
      inline Data& setHasSubscription(bool hasSubscription) { DARABONBA_PTR_SET_VALUE(hasSubscription_, hasSubscription) };


      // mobileConfirmed Field Functions 
      bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
      void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
      inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
      inline Data& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


      // sharedContact Field Functions 
      bool hasSharedContact() const { return this->sharedContact_ != nullptr;};
      void deleteSharedContact() { this->sharedContact_ = nullptr;};
      inline bool getSharedContact() const { DARABONBA_PTR_GET_DEFAULT(sharedContact_, false) };
      inline Data& setSharedContact(bool sharedContact) { DARABONBA_PTR_SET_VALUE(sharedContact_, sharedContact) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline int64_t getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, 0L) };
      inline Data& setUpdateDate(int64_t updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      // updateUser Field Functions 
      bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
      void deleteUpdateUser() { this->updateUser_ = nullptr;};
      inline string getUpdateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
      inline Data& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    protected:
      shared_ptr<string> contactEmail_ {};
      shared_ptr<int64_t> contactId_ {};
      shared_ptr<string> contactMobile_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> contactPosition_ {};
      shared_ptr<string> customerId_ {};
      shared_ptr<bool> emailConfirmed_ {};
      shared_ptr<string> entityId_ {};
      // leId/customerId
      shared_ptr<string> entityType_ {};
      shared_ptr<bool> hasSubscription_ {};
      shared_ptr<bool> mobileConfirmed_ {};
      shared_ptr<bool> sharedContact_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<int64_t> updateDate_ {};
      shared_ptr<string> updateUser_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AccountContactQueryDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AccountContactQueryDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AccountContactQueryDetailResponseBody::Data) };
    inline AccountContactQueryDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AccountContactQueryDetailResponseBody::Data) };
    inline AccountContactQueryDetailResponseBody& setData(const AccountContactQueryDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AccountContactQueryDetailResponseBody& setData(AccountContactQueryDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AccountContactQueryDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AccountContactQueryDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AccountContactQueryDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AccountContactQueryDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
