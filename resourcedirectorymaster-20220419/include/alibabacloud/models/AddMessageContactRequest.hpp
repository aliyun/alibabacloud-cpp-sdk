// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMESSAGECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMESSAGECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AddMessageContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMessageContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_TO_JSON(MessageTypes, messageTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, AddMessageContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_FROM_JSON(MessageTypes, messageTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    AddMessageContactRequest() = default ;
    AddMessageContactRequest(const AddMessageContactRequest &) = default ;
    AddMessageContactRequest(AddMessageContactRequest &&) = default ;
    AddMessageContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMessageContactRequest() = default ;
    AddMessageContactRequest& operator=(const AddMessageContactRequest &) = default ;
    AddMessageContactRequest& operator=(AddMessageContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emailAddress_ == nullptr
        && return this->messageTypes_ == nullptr && return this->name_ == nullptr && return this->phoneNumber_ == nullptr && return this->title_ == nullptr; };
    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string emailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline AddMessageContactRequest& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


    // messageTypes Field Functions 
    bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
    void deleteMessageTypes() { this->messageTypes_ = nullptr;};
    inline const vector<string> & messageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
    inline vector<string> messageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
    inline AddMessageContactRequest& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
    inline AddMessageContactRequest& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMessageContactRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline AddMessageContactRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AddMessageContactRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The email address of the contact.
    // 
    // After you specify an email address, you need to call [SendEmailVerificationForMessageContact](~~SendEmailVerificationForMessageContact~~) to send verification information to the email address. After the verification is passed, the email address takes effect.
    // 
    // This parameter is required.
    std::shared_ptr<string> emailAddress_ = nullptr;
    // The types of messages received by the contact.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> messageTypes_ = nullptr;
    // The name of the contact.
    // 
    // The name must be unique in your resource directory.
    // 
    // The name must be 2 to 12 characters in length and can contain only letters.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The mobile phone number of the contact.
    // 
    // Specify the mobile phone number in the `<Country code>-<Mobile phone number>` format.
    // 
    // > Only mobile phone numbers in the `86-<Mobile phone number>` format in the Chinese mainland are supported.
    // 
    // After you specify a mobile phone number, you need to call [SendPhoneVerificationForMessageContact](~~SendPhoneVerificationForMessageContact~~) to send verification information to the mobile phone number. After the verification is passed, the mobile phone number takes effect.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The job title of the contact.
    // 
    // Valid values:
    // 
    // *   FinanceDirector
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TechnicalDirector
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MaintenanceDirector
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CEO
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ProjectDirector
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Other
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
