// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDPHONEVERIFICATIONFORMESSAGECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDPHONEVERIFICATIONFORMESSAGECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SendPhoneVerificationForMessageContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendPhoneVerificationForMessageContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, SendPhoneVerificationForMessageContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
    };
    SendPhoneVerificationForMessageContactRequest() = default ;
    SendPhoneVerificationForMessageContactRequest(const SendPhoneVerificationForMessageContactRequest &) = default ;
    SendPhoneVerificationForMessageContactRequest(SendPhoneVerificationForMessageContactRequest &&) = default ;
    SendPhoneVerificationForMessageContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendPhoneVerificationForMessageContactRequest() = default ;
    SendPhoneVerificationForMessageContactRequest& operator=(const SendPhoneVerificationForMessageContactRequest &) = default ;
    SendPhoneVerificationForMessageContactRequest& operator=(SendPhoneVerificationForMessageContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->phoneNumber_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline SendPhoneVerificationForMessageContactRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline SendPhoneVerificationForMessageContactRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The mobile phone number of the contact.
    // 
    // The value must be in the `<Country code>-<Mobile phone number>` format.
    // 
    // The specified mobile phone number must be the one you specify when you call the [AddMessageContact](~~AddMessageContact~~) operation.
    std::shared_ptr<string> phoneNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
