// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTSRESPONSEBODY_HPP_
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
  class ListMessageContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMessageContactsResponseBody() = default ;
    ListMessageContactsResponseBody(const ListMessageContactsResponseBody &) = default ;
    ListMessageContactsResponseBody(ListMessageContactsResponseBody &&) = default ;
    ListMessageContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactsResponseBody() = default ;
    ListMessageContactsResponseBody& operator=(const ListMessageContactsResponseBody &) = default ;
    ListMessageContactsResponseBody& operator=(ListMessageContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
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
      Contacts() = default ;
      Contacts(const Contacts &) = default ;
      Contacts(Contacts &&) = default ;
      Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contacts() = default ;
      Contacts& operator=(const Contacts &) = default ;
      Contacts& operator=(Contacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associatedDate_ == nullptr
        && this->contactId_ == nullptr && this->createDate_ == nullptr && this->emailAddress_ == nullptr && this->members_ == nullptr && this->messageTypes_ == nullptr
        && this->name_ == nullptr && this->phoneNumber_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
      // associatedDate Field Functions 
      bool hasAssociatedDate() const { return this->associatedDate_ != nullptr;};
      void deleteAssociatedDate() { this->associatedDate_ = nullptr;};
      inline string getAssociatedDate() const { DARABONBA_PTR_GET_DEFAULT(associatedDate_, "") };
      inline Contacts& setAssociatedDate(string associatedDate) { DARABONBA_PTR_SET_VALUE(associatedDate_, associatedDate) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Contacts& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Contacts& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // emailAddress Field Functions 
      bool hasEmailAddress() const { return this->emailAddress_ != nullptr;};
      void deleteEmailAddress() { this->emailAddress_ = nullptr;};
      inline string getEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(emailAddress_, "") };
      inline Contacts& setEmailAddress(string emailAddress) { DARABONBA_PTR_SET_VALUE(emailAddress_, emailAddress) };


      // members Field Functions 
      bool hasMembers() const { return this->members_ != nullptr;};
      void deleteMembers() { this->members_ = nullptr;};
      inline const vector<string> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<string>) };
      inline vector<string> getMembers() { DARABONBA_PTR_GET(members_, vector<string>) };
      inline Contacts& setMembers(const vector<string> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
      inline Contacts& setMembers(vector<string> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


      // messageTypes Field Functions 
      bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
      void deleteMessageTypes() { this->messageTypes_ = nullptr;};
      inline const vector<string> & getMessageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
      inline vector<string> getMessageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
      inline Contacts& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
      inline Contacts& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Contacts& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Contacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Contacts& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The time when the contact was bound to the objects.
      shared_ptr<string> associatedDate_ {};
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The time when the contact was added.
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
      // - Verifying
      // - Active
      // - Deleting
      shared_ptr<string> status_ {};
      // The job title of the contact.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->contacts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<ListMessageContactsResponseBody::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<ListMessageContactsResponseBody::Contacts>) };
    inline vector<ListMessageContactsResponseBody::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<ListMessageContactsResponseBody::Contacts>) };
    inline ListMessageContactsResponseBody& setContacts(const vector<ListMessageContactsResponseBody::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline ListMessageContactsResponseBody& setContacts(vector<ListMessageContactsResponseBody::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMessageContactsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageContactsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMessageContactsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the contact was bound to the objects.
    shared_ptr<vector<ListMessageContactsResponseBody::Contacts>> contacts_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
