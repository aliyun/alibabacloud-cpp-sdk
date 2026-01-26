// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSRESPONSEBODY_HPP_
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
  class DescribeContactGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContactGroupsResponseBody() = default ;
    DescribeContactGroupsResponseBody(const DescribeContactGroupsResponseBody &) = default ;
    DescribeContactGroupsResponseBody(DescribeContactGroupsResponseBody &&) = default ;
    DescribeContactGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupsResponseBody() = default ;
    DescribeContactGroupsResponseBody& operator=(const DescribeContactGroupsResponseBody &) = default ;
    DescribeContactGroupsResponseBody& operator=(DescribeContactGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(AlertContactGroups, alertContactGroups_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertContactGroups, alertContactGroups_);
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
      class AlertContactGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertContactGroups& obj) { 
          DARABONBA_PTR_TO_JSON(ArmsContactGroupId, armsContactGroupId_);
          DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
          DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        };
        friend void from_json(const Darabonba::Json& j, AlertContactGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(ArmsContactGroupId, armsContactGroupId_);
          DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
          DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        };
        AlertContactGroups() = default ;
        AlertContactGroups(const AlertContactGroups &) = default ;
        AlertContactGroups(AlertContactGroups &&) = default ;
        AlertContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertContactGroups() = default ;
        AlertContactGroups& operator=(const AlertContactGroups &) = default ;
        AlertContactGroups& operator=(AlertContactGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Contacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
            DARABONBA_PTR_TO_JSON(ArmsContactId, armsContactId_);
            DARABONBA_PTR_TO_JSON(ContactId, contactId_);
            DARABONBA_PTR_TO_JSON(ContactName, contactName_);
            DARABONBA_PTR_TO_JSON(Email, email_);
            DARABONBA_PTR_TO_JSON(Phone, phone_);
          };
          friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
            DARABONBA_PTR_FROM_JSON(ArmsContactId, armsContactId_);
            DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
            DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
            DARABONBA_PTR_FROM_JSON(Email, email_);
            DARABONBA_PTR_FROM_JSON(Phone, phone_);
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
          virtual bool empty() const override { return this->armsContactId_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->email_ == nullptr && this->phone_ == nullptr; };
          // armsContactId Field Functions 
          bool hasArmsContactId() const { return this->armsContactId_ != nullptr;};
          void deleteArmsContactId() { this->armsContactId_ = nullptr;};
          inline int64_t getArmsContactId() const { DARABONBA_PTR_GET_DEFAULT(armsContactId_, 0L) };
          inline Contacts& setArmsContactId(int64_t armsContactId) { DARABONBA_PTR_SET_VALUE(armsContactId_, armsContactId) };


          // contactId Field Functions 
          bool hasContactId() const { return this->contactId_ != nullptr;};
          void deleteContactId() { this->contactId_ = nullptr;};
          inline float getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0.0) };
          inline Contacts& setContactId(float contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


          // contactName Field Functions 
          bool hasContactName() const { return this->contactName_ != nullptr;};
          void deleteContactName() { this->contactName_ = nullptr;};
          inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
          inline Contacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


          // email Field Functions 
          bool hasEmail() const { return this->email_ != nullptr;};
          void deleteEmail() { this->email_ = nullptr;};
          inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
          inline Contacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


          // phone Field Functions 
          bool hasPhone() const { return this->phone_ != nullptr;};
          void deletePhone() { this->phone_ = nullptr;};
          inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
          inline Contacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        protected:
          // The ID of the alert contact.
          shared_ptr<int64_t> armsContactId_ {};
          // The ID of the alert contact.
          shared_ptr<float> contactId_ {};
          // The name of the alert contact.
          shared_ptr<string> contactName_ {};
          // The email address of the alert contact.
          shared_ptr<string> email_ {};
          // The mobile number of the alert contact.
          shared_ptr<string> phone_ {};
        };

        virtual bool empty() const override { return this->armsContactGroupId_ == nullptr
        && this->contactGroupId_ == nullptr && this->contactGroupName_ == nullptr && this->contacts_ == nullptr; };
        // armsContactGroupId Field Functions 
        bool hasArmsContactGroupId() const { return this->armsContactGroupId_ != nullptr;};
        void deleteArmsContactGroupId() { this->armsContactGroupId_ = nullptr;};
        inline int64_t getArmsContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(armsContactGroupId_, 0L) };
        inline AlertContactGroups& setArmsContactGroupId(int64_t armsContactGroupId) { DARABONBA_PTR_SET_VALUE(armsContactGroupId_, armsContactGroupId) };


        // contactGroupId Field Functions 
        bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
        void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
        inline float getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0.0) };
        inline AlertContactGroups& setContactGroupId(float contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


        // contactGroupName Field Functions 
        bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
        void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
        inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
        inline AlertContactGroups& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const vector<AlertContactGroups::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<AlertContactGroups::Contacts>) };
        inline vector<AlertContactGroups::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<AlertContactGroups::Contacts>) };
        inline AlertContactGroups& setContacts(const vector<AlertContactGroups::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline AlertContactGroups& setContacts(vector<AlertContactGroups::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      protected:
        // The ID of the alert contact group.
        shared_ptr<int64_t> armsContactGroupId_ {};
        // The ID of the alert contact group.
        shared_ptr<float> contactGroupId_ {};
        // The name of the alert contact group.
        shared_ptr<string> contactGroupName_ {};
        // The contact information. If the **IsDetail** parameter is set to `false`, no **contact** information is displayed.
        shared_ptr<vector<AlertContactGroups::Contacts>> contacts_ {};
      };

      virtual bool empty() const override { return this->alertContactGroups_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // alertContactGroups Field Functions 
      bool hasAlertContactGroups() const { return this->alertContactGroups_ != nullptr;};
      void deleteAlertContactGroups() { this->alertContactGroups_ = nullptr;};
      inline const vector<PageBean::AlertContactGroups> & getAlertContactGroups() const { DARABONBA_PTR_GET_CONST(alertContactGroups_, vector<PageBean::AlertContactGroups>) };
      inline vector<PageBean::AlertContactGroups> getAlertContactGroups() { DARABONBA_PTR_GET(alertContactGroups_, vector<PageBean::AlertContactGroups>) };
      inline PageBean& setAlertContactGroups(const vector<PageBean::AlertContactGroups> & alertContactGroups) { DARABONBA_PTR_SET_VALUE(alertContactGroups_, alertContactGroups) };
      inline PageBean& setAlertContactGroups(vector<PageBean::AlertContactGroups> && alertContactGroups) { DARABONBA_PTR_SET_RVALUE(alertContactGroups_, alertContactGroups) };


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
      // The name of the alert contact group.
      shared_ptr<vector<PageBean::AlertContactGroups>> alertContactGroups_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of alert contact groups displayed on each page.
      shared_ptr<int64_t> size_ {};
      // The total number of alert contact groups.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const DescribeContactGroupsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, DescribeContactGroupsResponseBody::PageBean) };
    inline DescribeContactGroupsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, DescribeContactGroupsResponseBody::PageBean) };
    inline DescribeContactGroupsResponseBody& setPageBean(const DescribeContactGroupsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline DescribeContactGroupsResponseBody& setPageBean(DescribeContactGroupsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContactGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that were returned.
    shared_ptr<DescribeContactGroupsResponseBody::PageBean> pageBean_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
