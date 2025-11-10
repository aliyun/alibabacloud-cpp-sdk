// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODYCONTACT_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODYCONTACT_HPP_
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
  class GetMessageContactResponseBodyContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactResponseBodyContact& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(MessageTypes, messageTypes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactResponseBodyContact& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(EmailAddress, emailAddress_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(MessageTypes, messageTypes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetMessageContactResponseBodyContact() = default ;
    GetMessageContactResponseBodyContact(const GetMessageContactResponseBodyContact &) = default ;
    GetMessageContactResponseBodyContact(GetMessageContactResponseBodyContact &&) = default ;
    GetMessageContactResponseBodyContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactResponseBodyContact() = default ;
    GetMessageContactResponseBodyContact& operator=(const GetMessageContactResponseBodyContact &) = default ;
    GetMessageContactResponseBodyContact& operator=(GetMessageContactResponseBodyContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->createDate_ == nullptr && return this->emailAddress_ == nullptr && return this->members_ == nullptr && return this->messageTypes_ == nullptr && return this->name_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetMessageContactResponseBodyContact& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetMessageContactResponseBodyContact& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string emailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline GetMessageContactResponseBodyContact& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<string> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
    inline vector<string> members() { DARABONBA_PTR_GET(members_, vector<string>) };
    inline GetMessageContactResponseBodyContact& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline GetMessageContactResponseBodyContact& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // messageTypes Field Functions 
    bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
    void deleteMessageTypes() { this->messageTypes_ = nullptr;};
    inline const vector<string> & messageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
    inline vector<string> messageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
    inline GetMessageContactResponseBodyContact& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
    inline GetMessageContactResponseBodyContact& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMessageContactResponseBodyContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetMessageContactResponseBodyContact& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMessageContactResponseBodyContact& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetMessageContactResponseBodyContact& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The time when the contact was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The email address of the contact.
    std::shared_ptr<string> emailAddress_ = nullptr;
    // The IDs of objects to which the contact is bound.
    std::shared_ptr<vector<string>> members_ = nullptr;
    // The types of messages received by the contact.
    std::shared_ptr<vector<string>> messageTypes_ = nullptr;
    // The name of the contact.
    std::shared_ptr<string> name_ = nullptr;
    // The mobile phone number of the contact.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The status of the contact. Valid values:
    // 
    // *   Verifying
    // *   Active
    // *   Deleting
    std::shared_ptr<string> status_ = nullptr;
    // The job title of the contact.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
