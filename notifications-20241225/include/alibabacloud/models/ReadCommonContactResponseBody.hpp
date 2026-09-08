// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READCOMMONCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READCOMMONCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadCommonContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadCommonContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadCommonContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadCommonContactResponseBody() = default ;
    ReadCommonContactResponseBody(const ReadCommonContactResponseBody &) = default ;
    ReadCommonContactResponseBody(ReadCommonContactResponseBody &&) = default ;
    ReadCommonContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadCommonContactResponseBody() = default ;
    ReadCommonContactResponseBody& operator=(const ReadCommonContactResponseBody &) = default ;
    ReadCommonContactResponseBody& operator=(ReadCommonContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactMobile, contactMobile_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(EmailConfirmed, emailConfirmed_);
        DARABONBA_PTR_TO_JSON(MobileConfirmed, mobileConfirmed_);
        DARABONBA_PTR_TO_JSON(Position, position_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactMobile, contactMobile_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(EmailConfirmed, emailConfirmed_);
        DARABONBA_PTR_FROM_JSON(MobileConfirmed, mobileConfirmed_);
        DARABONBA_PTR_FROM_JSON(Position, position_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->contactEmail_ == nullptr && this->contactId_ == nullptr && this->contactMobile_ == nullptr && this->contactName_ == nullptr && this->emailConfirmed_ == nullptr
        && this->mobileConfirmed_ == nullptr && this->position_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


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


      // emailConfirmed Field Functions 
      bool hasEmailConfirmed() const { return this->emailConfirmed_ != nullptr;};
      void deleteEmailConfirmed() { this->emailConfirmed_ = nullptr;};
      inline bool getEmailConfirmed() const { DARABONBA_PTR_GET_DEFAULT(emailConfirmed_, false) };
      inline Data& setEmailConfirmed(bool emailConfirmed) { DARABONBA_PTR_SET_VALUE(emailConfirmed_, emailConfirmed) };


      // mobileConfirmed Field Functions 
      bool hasMobileConfirmed() const { return this->mobileConfirmed_ != nullptr;};
      void deleteMobileConfirmed() { this->mobileConfirmed_ = nullptr;};
      inline bool getMobileConfirmed() const { DARABONBA_PTR_GET_DEFAULT(mobileConfirmed_, false) };
      inline Data& setMobileConfirmed(bool mobileConfirmed) { DARABONBA_PTR_SET_VALUE(mobileConfirmed_, mobileConfirmed) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
      inline Data& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<int64_t> aliUid_ {};
      // The email address of the contact.
      shared_ptr<string> contactEmail_ {};
      // The contact ID in Account Center. A value of 0 indicates the account contact.
      shared_ptr<int64_t> contactId_ {};
      // The mobile phone number of the contact in Account Center (masked).
      shared_ptr<string> contactMobile_ {};
      // The contact name in Account Center.
      shared_ptr<string> contactName_ {};
      // Indicates whether the email address of the contact is verified.
      shared_ptr<bool> emailConfirmed_ {};
      // Indicates whether the mobile phone number of the contact in Account Center is verified.
      shared_ptr<bool> mobileConfirmed_ {};
      // The position of the contact in Account Center.
      shared_ptr<string> position_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadCommonContactResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadCommonContactResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadCommonContactResponseBody::Data) };
    inline ReadCommonContactResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadCommonContactResponseBody::Data) };
    inline ReadCommonContactResponseBody& setData(const ReadCommonContactResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadCommonContactResponseBody& setData(ReadCommonContactResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadCommonContactResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadCommonContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadCommonContactResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call failed. For more information, see error codes.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<ReadCommonContactResponseBody::Data> data_ {};
    // The result message.
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
