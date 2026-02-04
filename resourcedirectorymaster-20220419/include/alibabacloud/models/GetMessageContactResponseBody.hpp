// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTRESPONSEBODY_HPP_
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
  class GetMessageContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageContactResponseBody() = default ;
    GetMessageContactResponseBody(const GetMessageContactResponseBody &) = default ;
    GetMessageContactResponseBody(GetMessageContactResponseBody &&) = default ;
    GetMessageContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactResponseBody() = default ;
    GetMessageContactResponseBody& operator=(const GetMessageContactResponseBody &) = default ;
    GetMessageContactResponseBody& operator=(GetMessageContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
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
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->createDate_ == nullptr && this->emailAddress_ == nullptr && this->members_ == nullptr && this->messageTypes_ == nullptr && this->name_ == nullptr
        && this->phoneNumber_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Contact& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Contact& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // emailAddress Field Functions 
      bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
      void deleteEmailAddress() { this->emailAddress_ = nullptr;};
      inline string getEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
      inline Contact& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


      // members Field Functions 
      bool hasMembers() const { return this->members_ != nullptr;};
      void deleteMembers() { this->members_ = nullptr;};
      inline const vector<string> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
      inline vector<string> getMembers() { DARABONBA_PTR_GET(members_, vector<string>) };
      inline Contact& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
      inline Contact& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


      // messageTypes Field Functions 
      bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
      void deleteMessageTypes() { this->messageTypes_ = nullptr;};
      inline const vector<string> & getMessageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
      inline vector<string> getMessageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
      inline Contact& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
      inline Contact& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Contact& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Contact& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Contact& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The time when the contact was created.
      shared_ptr<string> createDate_ {};
      // The email address of the contact.
      shared_ptr<string> emailAddress_ {};
      // The IDs of objects to which the contact is bound.
      shared_ptr<vector<string>> members_ {};
      // The types of messages received by the contact.
      shared_ptr<vector<string>> messageTypes_ {};
      // The name of the contact.
      shared_ptr<string> name_ {};
      // The mobile phone number of the contact.
      shared_ptr<string> phoneNumber_ {};
      // The status of the contact. Valid values:
      // 
      // *   Verifying
      // *   Active
      // *   Deleting
      shared_ptr<string> status_ {};
      // The job title of the contact.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->contact_ == nullptr
        && this->requestId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const GetMessageContactResponseBody::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, GetMessageContactResponseBody::Contact) };
    inline GetMessageContactResponseBody::Contact getContact() { DARABONBA_PTR_GET(contact_, GetMessageContactResponseBody::Contact) };
    inline GetMessageContactResponseBody& setContact(const GetMessageContactResponseBody::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline GetMessageContactResponseBody& setContact(GetMessageContactResponseBody::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the contact.
    shared_ptr<GetMessageContactResponseBody::Contact> contact_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
