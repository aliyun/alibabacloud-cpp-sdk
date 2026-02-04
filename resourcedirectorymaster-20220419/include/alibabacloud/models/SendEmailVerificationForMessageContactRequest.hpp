// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDEMAILVERIFICATIONFORMESSAGECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDEMAILVERIFICATIONFORMESSAGECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SendEmailVerificationForMessageContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendEmailVerificationForMessageContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
    };
    friend void from_json(const Darabonba::Json& j, SendEmailVerificationForMessageContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
    };
    SendEmailVerificationForMessageContactRequest() = default ;
    SendEmailVerificationForMessageContactRequest(const SendEmailVerificationForMessageContactRequest &) = default ;
    SendEmailVerificationForMessageContactRequest(SendEmailVerificationForMessageContactRequest &&) = default ;
    SendEmailVerificationForMessageContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendEmailVerificationForMessageContactRequest() = default ;
    SendEmailVerificationForMessageContactRequest& operator=(const SendEmailVerificationForMessageContactRequest &) = default ;
    SendEmailVerificationForMessageContactRequest& operator=(SendEmailVerificationForMessageContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->emailAddress_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline SendEmailVerificationForMessageContactRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string getEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline SendEmailVerificationForMessageContactRequest& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


  protected:
    // The ID of the contact.
    shared_ptr<string> contactId_ {};
    // The email address of the contact.
    // 
    // The specified email address must be the one you specify when you call [AddMessageContact](~~AddMessageContact~~).
    shared_ptr<string> emailAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
