// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMESSAGECONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AddMessageContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMessageContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMessageContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddMessageContactResponseBody() = default ;
    AddMessageContactResponseBody(const AddMessageContactResponseBody &) = default ;
    AddMessageContactResponseBody(AddMessageContactResponseBody &&) = default ;
    AddMessageContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMessageContactResponseBody() = default ;
    AddMessageContactResponseBody& operator=(const AddMessageContactResponseBody &) = default ;
    AddMessageContactResponseBody& operator=(AddMessageContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      };
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
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
        && this->createDate_ == nullptr; };
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


    protected:
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The time when the contact was created.
      shared_ptr<string> createDate_ {};
    };

    virtual bool empty() const override { return this->contact_ == nullptr
        && this->requestId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const AddMessageContactResponseBody::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, AddMessageContactResponseBody::Contact) };
    inline AddMessageContactResponseBody::Contact getContact() { DARABONBA_PTR_GET(contact_, AddMessageContactResponseBody::Contact) };
    inline AddMessageContactResponseBody& setContact(const AddMessageContactResponseBody::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline AddMessageContactResponseBody& setContact(AddMessageContactResponseBody::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMessageContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the contact.
    shared_ptr<AddMessageContactResponseBody::Contact> contact_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
