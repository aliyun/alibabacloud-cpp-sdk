// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMESSAGECONTACTUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELMESSAGECONTACTUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CancelMessageContactUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMessageContactUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMessageContactUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
    };
    CancelMessageContactUpdateRequest() = default ;
    CancelMessageContactUpdateRequest(const CancelMessageContactUpdateRequest &) = default ;
    CancelMessageContactUpdateRequest(CancelMessageContactUpdateRequest &&) = default ;
    CancelMessageContactUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMessageContactUpdateRequest() = default ;
    CancelMessageContactUpdateRequest& operator=(const CancelMessageContactUpdateRequest &) = default ;
    CancelMessageContactUpdateRequest& operator=(CancelMessageContactUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->emailAddress_ != nullptr && this->phoneNumber_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CancelMessageContactUpdateRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string emailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline CancelMessageContactUpdateRequest& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CancelMessageContactUpdateRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The email address of the contact.
    std::shared_ptr<string> emailAddress_ = nullptr;
    // The mobile phone number of the contact.
    // 
    // Specify the mobile phone number in the `<Country code>-<Mobile phone number>` format.
    std::shared_ptr<string> phoneNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
