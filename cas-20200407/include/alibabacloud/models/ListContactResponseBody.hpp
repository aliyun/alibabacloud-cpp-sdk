// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactList, contactList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactList, contactList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListContactResponseBody() = default ;
    ListContactResponseBody(const ListContactResponseBody &) = default ;
    ListContactResponseBody(ListContactResponseBody &&) = default ;
    ListContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContactResponseBody() = default ;
    ListContactResponseBody& operator=(const ListContactResponseBody &) = default ;
    ListContactResponseBody& operator=(ListContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactList& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EmailStatus, emailStatus_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(MobileStatus, mobileStatus_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
      };
      friend void from_json(const Darabonba::Json& j, ContactList& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EmailStatus, emailStatus_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(MobileStatus, mobileStatus_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
      };
      ContactList() = default ;
      ContactList(const ContactList &) = default ;
      ContactList(ContactList &&) = default ;
      ContactList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactList() = default ;
      ContactList& operator=(const ContactList &) = default ;
      ContactList& operator=(ContactList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->email_ == nullptr && this->emailStatus_ == nullptr && this->mobile_ == nullptr && this->mobileStatus_ == nullptr && this->name_ == nullptr
        && this->webhooks_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
      inline ContactList& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline ContactList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailStatus Field Functions 
      bool hasEmailStatus() const { return this->emailStatus_ != nullptr;};
      void deleteEmailStatus() { this->emailStatus_ = nullptr;};
      inline int32_t getEmailStatus() const { DARABONBA_PTR_GET_DEFAULT(emailStatus_, 0) };
      inline ContactList& setEmailStatus(int32_t emailStatus) { DARABONBA_PTR_SET_VALUE(emailStatus_, emailStatus) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline ContactList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // mobileStatus Field Functions 
      bool hasMobileStatus() const { return this->mobileStatus_ != nullptr;};
      void deleteMobileStatus() { this->mobileStatus_ = nullptr;};
      inline int32_t getMobileStatus() const { DARABONBA_PTR_GET_DEFAULT(mobileStatus_, 0) };
      inline ContactList& setMobileStatus(int32_t mobileStatus) { DARABONBA_PTR_SET_VALUE(mobileStatus_, mobileStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ContactList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // webhooks Field Functions 
      bool hasWebhooks() const { return this->webhooks_ != nullptr;};
      void deleteWebhooks() { this->webhooks_ = nullptr;};
      inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
      inline ContactList& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


    protected:
      // The ID of the contact.
      shared_ptr<int64_t> contactId_ {};
      // The email address of the contact.
      shared_ptr<string> email_ {};
      // Indicates whether the email address passed the verification.
      shared_ptr<int32_t> emailStatus_ {};
      // The phone number.
      shared_ptr<string> mobile_ {};
      // Indicates whether the phone number was verified.
      shared_ptr<int32_t> mobileStatus_ {};
      // The name of the contact.
      shared_ptr<string> name_ {};
      // The webhook URL of the chatbot.
      shared_ptr<string> webhooks_ {};
    };

    virtual bool empty() const override { return this->contactList_ == nullptr
        && this->currentPage_ == nullptr && this->keyword_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // contactList Field Functions 
    bool hasContactList() const { return this->contactList_ != nullptr;};
    void deleteContactList() { this->contactList_ = nullptr;};
    inline const vector<ListContactResponseBody::ContactList> & getContactList() const { DARABONBA_PTR_GET_CONST(contactList_, vector<ListContactResponseBody::ContactList>) };
    inline vector<ListContactResponseBody::ContactList> getContactList() { DARABONBA_PTR_GET(contactList_, vector<ListContactResponseBody::ContactList>) };
    inline ListContactResponseBody& setContactList(const vector<ListContactResponseBody::ContactList> & contactList) { DARABONBA_PTR_SET_VALUE(contactList_, contactList) };
    inline ListContactResponseBody& setContactList(vector<ListContactResponseBody::ContactList> && contactList) { DARABONBA_PTR_SET_RVALUE(contactList_, contactList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListContactResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListContactResponseBody& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListContactResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListContactResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The contacts.
    shared_ptr<vector<ListContactResponseBody::ContactList>> contactList_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The keyword used in the fuzzy search.
    shared_ptr<string> keyword_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of certificates per page. Default value: **20**.
    shared_ptr<int32_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
