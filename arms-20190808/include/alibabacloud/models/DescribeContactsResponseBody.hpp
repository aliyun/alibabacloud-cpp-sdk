// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContactsResponseBody() = default ;
    DescribeContactsResponseBody(const DescribeContactsResponseBody &) = default ;
    DescribeContactsResponseBody(DescribeContactsResponseBody &&) = default ;
    DescribeContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactsResponseBody() = default ;
    DescribeContactsResponseBody& operator=(const DescribeContactsResponseBody &) = default ;
    DescribeContactsResponseBody& operator=(DescribeContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(AlertContacts, alertContacts_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertContacts, alertContacts_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertContacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertContacts& obj) { 
          DARABONBA_PTR_TO_JSON(ArmsContactId, armsContactId_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactName, contactName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(IsEmailVerify, isEmailVerify_);
          DARABONBA_PTR_TO_JSON(IsVerify, isVerify_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(ReissueSendNotice, reissueSendNotice_);
        };
        friend void from_json(const Darabonba::Json& j, AlertContacts& obj) { 
          DARABONBA_PTR_FROM_JSON(ArmsContactId, armsContactId_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(IsEmailVerify, isEmailVerify_);
          DARABONBA_PTR_FROM_JSON(IsVerify, isVerify_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(ReissueSendNotice, reissueSendNotice_);
        };
        AlertContacts() = default ;
        AlertContacts(const AlertContacts &) = default ;
        AlertContacts(AlertContacts &&) = default ;
        AlertContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertContacts() = default ;
        AlertContacts& operator=(const AlertContacts &) = default ;
        AlertContacts& operator=(AlertContacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->armsContactId_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->email_ == nullptr && this->isEmailVerify_ == nullptr && this->isVerify_ == nullptr
        && this->phone_ == nullptr && this->reissueSendNotice_ == nullptr; };
        // armsContactId Field Functions 
        bool hasArmsContactId() const { return this->armsContactId_ != nullptr;};
        void deleteArmsContactId() { this->armsContactId_ = nullptr;};
        inline int64_t getArmsContactId() const { DARABONBA_PTR_GET_DEFAULT(armsContactId_, 0L) };
        inline AlertContacts& setArmsContactId(int64_t armsContactId) { DARABONBA_PTR_SET_VALUE(armsContactId_, armsContactId) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline float getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0.0) };
        inline AlertContacts& setContactId(float contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline AlertContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AlertContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // isEmailVerify Field Functions 
        bool hasIsEmailVerify() const { return this->isEmailVerify_ != nullptr;};
        void deleteIsEmailVerify() { this->isEmailVerify_ = nullptr;};
        inline bool getIsEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(isEmailVerify_, false) };
        inline AlertContacts& setIsEmailVerify(bool isEmailVerify) { DARABONBA_PTR_SET_VALUE(isEmailVerify_, isEmailVerify) };


        // isVerify Field Functions 
        bool hasIsVerify() const { return this->isVerify_ != nullptr;};
        void deleteIsVerify() { this->isVerify_ = nullptr;};
        inline bool getIsVerify() const { DARABONBA_PTR_GET_DEFAULT(isVerify_, false) };
        inline AlertContacts& setIsVerify(bool isVerify) { DARABONBA_PTR_SET_VALUE(isVerify_, isVerify) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline AlertContacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // reissueSendNotice Field Functions 
        bool hasReissueSendNotice() const { return this->reissueSendNotice_ != nullptr;};
        void deleteReissueSendNotice() { this->reissueSendNotice_ = nullptr;};
        inline int64_t getReissueSendNotice() const { DARABONBA_PTR_GET_DEFAULT(reissueSendNotice_, 0L) };
        inline AlertContacts& setReissueSendNotice(int64_t reissueSendNotice) { DARABONBA_PTR_SET_VALUE(reissueSendNotice_, reissueSendNotice) };


      protected:
        // The ID of the alert contact.
        shared_ptr<int64_t> armsContactId_ {};
        // The ID of the alert contact.
        shared_ptr<float> contactId_ {};
        // The name of the alert contact.
        shared_ptr<string> contactName_ {};
        // The email address of the alert contact.
        shared_ptr<string> email_ {};
        // Indicates whether the email address was verified.
        shared_ptr<bool> isEmailVerify_ {};
        // Indicates whether the mobile number was verified. Valid values:
        // 
        // *   `false`: no
        // *   `true`: yes
        shared_ptr<bool> isVerify_ {};
        // The mobile number of the alert contact.
        shared_ptr<string> phone_ {};
        // The operation that you want to perform if phone calls fail to be answered. Valid values:
        // 
        // *   0: No operation is performed.
        // *   1: A phone call is made again.
        // *   2: A text message is sent.
        // *   3 (default value): The global default value is used.
        shared_ptr<int64_t> reissueSendNotice_ {};
      };

      virtual bool empty() const override { return this->alertContacts_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // alertContacts Field Functions 
      bool hasAlertContacts() const { return this->alertContacts_ != nullptr;};
      void deleteAlertContacts() { this->alertContacts_ = nullptr;};
      inline const vector<PageBean::AlertContacts> & getAlertContacts() const { DARABONBA_PTR_GET_CONST(alertContacts_, vector<PageBean::AlertContacts>) };
      inline vector<PageBean::AlertContacts> getAlertContacts() { DARABONBA_PTR_GET(alertContacts_, vector<PageBean::AlertContacts>) };
      inline PageBean& setAlertContacts(const vector<PageBean::AlertContacts> & alertContacts) { DARABONBA_PTR_SET_VALUE(alertContacts_, alertContacts) };
      inline PageBean& setAlertContacts(vector<PageBean::AlertContacts> && alertContacts) { DARABONBA_PTR_SET_RVALUE(alertContacts_, alertContacts) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The alert contacts.
      shared_ptr<vector<PageBean::AlertContacts>> alertContacts_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of alert contacts returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of alert contacts.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const DescribeContactsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, DescribeContactsResponseBody::PageBean) };
    inline DescribeContactsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, DescribeContactsResponseBody::PageBean) };
    inline DescribeContactsResponseBody& setPageBean(const DescribeContactsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline DescribeContactsResponseBody& setPageBean(DescribeContactsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that were returned.
    shared_ptr<DescribeContactsResponseBody::PageBean> pageBean_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
