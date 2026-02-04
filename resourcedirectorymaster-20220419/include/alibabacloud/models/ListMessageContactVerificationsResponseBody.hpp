// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECONTACTVERIFICATIONSRESPONSEBODY_HPP_
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
  class ListMessageContactVerificationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageContactVerificationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactVerifications, contactVerifications_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageContactVerificationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactVerifications, contactVerifications_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMessageContactVerificationsResponseBody() = default ;
    ListMessageContactVerificationsResponseBody(const ListMessageContactVerificationsResponseBody &) = default ;
    ListMessageContactVerificationsResponseBody(ListMessageContactVerificationsResponseBody &&) = default ;
    ListMessageContactVerificationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageContactVerificationsResponseBody() = default ;
    ListMessageContactVerificationsResponseBody& operator=(const ListMessageContactVerificationsResponseBody &) = default ;
    ListMessageContactVerificationsResponseBody& operator=(ListMessageContactVerificationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactVerifications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactVerifications& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, ContactVerifications& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
      };
      ContactVerifications() = default ;
      ContactVerifications(const ContactVerifications &) = default ;
      ContactVerifications(ContactVerifications &&) = default ;
      ContactVerifications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactVerifications() = default ;
      ContactVerifications& operator=(const ContactVerifications &) = default ;
      ContactVerifications& operator=(ContactVerifications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->target_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline ContactVerifications& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline ContactVerifications& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    protected:
      // The ID of the contact.
      shared_ptr<string> contactId_ {};
      // The object that is used for verification. Valid values:
      // 
      // - Mobile phone number
      // - Email address
      shared_ptr<string> target_ {};
    };

    virtual bool empty() const override { return this->contactVerifications_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // contactVerifications Field Functions 
    bool hasContactVerifications() const { return this->contactVerifications_ != nullptr;};
    void deleteContactVerifications() { this->contactVerifications_ = nullptr;};
    inline const vector<ListMessageContactVerificationsResponseBody::ContactVerifications> & getContactVerifications() const { DARABONBA_PTR_GET_CONST(contactVerifications_, vector<ListMessageContactVerificationsResponseBody::ContactVerifications>) };
    inline vector<ListMessageContactVerificationsResponseBody::ContactVerifications> getContactVerifications() { DARABONBA_PTR_GET(contactVerifications_, vector<ListMessageContactVerificationsResponseBody::ContactVerifications>) };
    inline ListMessageContactVerificationsResponseBody& setContactVerifications(const vector<ListMessageContactVerificationsResponseBody::ContactVerifications> & contactVerifications) { DARABONBA_PTR_SET_VALUE(contactVerifications_, contactVerifications) };
    inline ListMessageContactVerificationsResponseBody& setContactVerifications(vector<ListMessageContactVerificationsResponseBody::ContactVerifications> && contactVerifications) { DARABONBA_PTR_SET_RVALUE(contactVerifications_, contactVerifications) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMessageContactVerificationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMessageContactVerificationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageContactVerificationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMessageContactVerificationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The record for the contact to be verified.
    shared_ptr<vector<ListMessageContactVerificationsResponseBody::ContactVerifications>> contactVerifications_ {};
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
