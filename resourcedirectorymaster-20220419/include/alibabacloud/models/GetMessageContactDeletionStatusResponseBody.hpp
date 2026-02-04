// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODY_HPP_
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
  class GetMessageContactDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactDeletionStatus, contactDeletionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactDeletionStatus, contactDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageContactDeletionStatusResponseBody() = default ;
    GetMessageContactDeletionStatusResponseBody(const GetMessageContactDeletionStatusResponseBody &) = default ;
    GetMessageContactDeletionStatusResponseBody(GetMessageContactDeletionStatusResponseBody &&) = default ;
    GetMessageContactDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactDeletionStatusResponseBody() = default ;
    GetMessageContactDeletionStatusResponseBody& operator=(const GetMessageContactDeletionStatusResponseBody &) = default ;
    GetMessageContactDeletionStatusResponseBody& operator=(GetMessageContactDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactDeletionStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactDeletionStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(FailReasonList, failReasonList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ContactDeletionStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(FailReasonList, failReasonList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ContactDeletionStatus() = default ;
      ContactDeletionStatus(const ContactDeletionStatus &) = default ;
      ContactDeletionStatus(ContactDeletionStatus &&) = default ;
      ContactDeletionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactDeletionStatus() = default ;
      ContactDeletionStatus& operator=(const ContactDeletionStatus &) = default ;
      ContactDeletionStatus& operator=(ContactDeletionStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailReasonList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailReasonList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(MessageTypes, messageTypes_);
        };
        friend void from_json(const Darabonba::Json& j, FailReasonList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(MessageTypes, messageTypes_);
        };
        FailReasonList() = default ;
        FailReasonList(const FailReasonList &) = default ;
        FailReasonList(FailReasonList &&) = default ;
        FailReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailReasonList() = default ;
        FailReasonList& operator=(const FailReasonList &) = default ;
        FailReasonList& operator=(FailReasonList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->messageTypes_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline FailReasonList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // messageTypes Field Functions 
        bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
        void deleteMessageTypes() { this->messageTypes_ = nullptr;};
        inline const vector<string> & getMessageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
        inline vector<string> getMessageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
        inline FailReasonList& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
        inline FailReasonList& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


      protected:
        // The Alibaba Cloud account ID of the member.
        shared_ptr<string> accountId_ {};
        // The types of messages received by the contact.
        shared_ptr<vector<string>> messageTypes_ {};
      };

      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->failReasonList_ == nullptr && this->status_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline ContactDeletionStatus& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // failReasonList Field Functions 
      bool hasFailReasonList() const { return this->failReasonList_ != nullptr;};
      void deleteFailReasonList() { this->failReasonList_ = nullptr;};
      inline const vector<ContactDeletionStatus::FailReasonList> & getFailReasonList() const { DARABONBA_PTR_GET_CONST(failReasonList_, vector<ContactDeletionStatus::FailReasonList>) };
      inline vector<ContactDeletionStatus::FailReasonList> getFailReasonList() { DARABONBA_PTR_GET(failReasonList_, vector<ContactDeletionStatus::FailReasonList>) };
      inline ContactDeletionStatus& setFailReasonList(const vector<ContactDeletionStatus::FailReasonList> & failReasonList) { DARABONBA_PTR_SET_VALUE(failReasonList_, failReasonList) };
      inline ContactDeletionStatus& setFailReasonList(vector<ContactDeletionStatus::FailReasonList> && failReasonList) { DARABONBA_PTR_SET_RVALUE(failReasonList_, failReasonList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ContactDeletionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The types of messages received by the contact.
      shared_ptr<vector<ContactDeletionStatus::FailReasonList>> failReasonList_ {};
      // The deletion status of the contact. Valid values:
      // 
      // *   Deleting
      // *   Failed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->contactDeletionStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // contactDeletionStatus Field Functions 
    bool hasContactDeletionStatus() const { return this->contactDeletionStatus_ != nullptr;};
    void deleteContactDeletionStatus() { this->contactDeletionStatus_ = nullptr;};
    inline const GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus & getContactDeletionStatus() const { DARABONBA_PTR_GET_CONST(contactDeletionStatus_, GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus getContactDeletionStatus() { DARABONBA_PTR_GET(contactDeletionStatus_, GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBody& setContactDeletionStatus(const GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus & contactDeletionStatus) { DARABONBA_PTR_SET_VALUE(contactDeletionStatus_, contactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBody& setContactDeletionStatus(GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus && contactDeletionStatus) { DARABONBA_PTR_SET_RVALUE(contactDeletionStatus_, contactDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageContactDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deletion information of the contact.
    shared_ptr<GetMessageContactDeletionStatusResponseBody::ContactDeletionStatus> contactDeletionStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
