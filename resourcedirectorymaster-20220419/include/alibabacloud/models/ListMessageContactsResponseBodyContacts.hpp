// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSRESPONSEBODYCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSRESPONSEBODYCONTACTS_HPP_
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
  class ListMessageContactsResponseBodyContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactsResponseBodyContacts& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedDate, associatedDate_);
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
    friend void from_json(const Darabonba::Json& j, ListMessageContactsResponseBodyContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedDate, associatedDate_);
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
    ListMessageContactsResponseBodyContacts() = default ;
    ListMessageContactsResponseBodyContacts(const ListMessageContactsResponseBodyContacts &) = default ;
    ListMessageContactsResponseBodyContacts(ListMessageContactsResponseBodyContacts &&) = default ;
    ListMessageContactsResponseBodyContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactsResponseBodyContacts() = default ;
    ListMessageContactsResponseBodyContacts& operator=(const ListMessageContactsResponseBodyContacts &) = default ;
    ListMessageContactsResponseBodyContacts& operator=(ListMessageContactsResponseBodyContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedDate_ != nullptr
        && this->contactId_ != nullptr && this->createDate_ != nullptr && this->emailAddress_ != nullptr && this->members_ != nullptr && this->messageTypes_ != nullptr
        && this->name_ != nullptr && this->phoneNumber_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // associatedDate Field Functions 
    bool hasAssociatedDate() const { return this->associatedDate_ != nullptr;};
    void deleteAssociatedDate() { this->associatedDate_ = nullptr;};
    inline string associatedDate() const { DARABONBA_PTR_GET_DEFAULT(associatedDate_, "") };
    inline ListMessageContactsResponseBodyContacts& setAssociatedDate(string associatedDate) { DARABONBA_PTR_SET_VALUE(associatedDate_, associatedDate) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListMessageContactsResponseBodyContacts& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListMessageContactsResponseBodyContacts& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // emailAddress Field Functions 
    bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
    void deleteEmailAddress() { this->emailAddress_ = nullptr;};
    inline string emailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
    inline ListMessageContactsResponseBodyContacts& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<string> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
    inline vector<string> members() { DARABONBA_PTR_GET(members_, vector<string>) };
    inline ListMessageContactsResponseBodyContacts& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListMessageContactsResponseBodyContacts& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // messageTypes Field Functions 
    bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
    void deleteMessageTypes() { this->messageTypes_ = nullptr;};
    inline const vector<string> & messageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
    inline vector<string> messageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
    inline ListMessageContactsResponseBodyContacts& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
    inline ListMessageContactsResponseBodyContacts& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMessageContactsResponseBodyContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline ListMessageContactsResponseBodyContacts& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMessageContactsResponseBodyContacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListMessageContactsResponseBodyContacts& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The time when the contact was bound to the objects.
    std::shared_ptr<string> associatedDate_ = nullptr;
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The time when the contact was added.
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
    // - Verifying
    // - Active
    // - Deleting
    std::shared_ptr<string> status_ = nullptr;
    // The job title of the contact.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
