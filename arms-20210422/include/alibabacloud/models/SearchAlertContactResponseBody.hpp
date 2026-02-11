// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchAlertContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchAlertContactResponseBody() = default ;
    SearchAlertContactResponseBody(const SearchAlertContactResponseBody &) = default ;
    SearchAlertContactResponseBody(SearchAlertContactResponseBody &&) = default ;
    SearchAlertContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactResponseBody() = default ;
    SearchAlertContactResponseBody& operator=(const SearchAlertContactResponseBody &) = default ;
    SearchAlertContactResponseBody& operator=(SearchAlertContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Contacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactName, contactName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(SystemNoc, systemNoc_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        };
        friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(SystemNoc, systemNoc_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
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
        virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->createTime_ == nullptr && this->dingRobot_ == nullptr && this->email_ == nullptr && this->phone_ == nullptr
        && this->systemNoc_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->webhook_ == nullptr; };
        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
        inline Contacts& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline Contacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Contacts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dingRobot Field Functions 
        bool hasDingRobot() const { return this->dingRobot_ != nullptr;};
        void deleteDingRobot() { this->dingRobot_ = nullptr;};
        inline string getDingRobot() const { DARABONBA_PTR_GET_DEFAULT(dingRobot_, "") };
        inline Contacts& setDingRobot(string dingRobot) { DARABONBA_PTR_SET_VALUE(dingRobot_, dingRobot) };


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


        // systemNoc Field Functions 
        bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
        void deleteSystemNoc() { this->systemNoc_ = nullptr;};
        inline bool getSystemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
        inline Contacts& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Contacts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Contacts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
        inline Contacts& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


      protected:
        shared_ptr<int64_t> contactId_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dingRobot_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<bool> systemNoc_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> webhook_ {};
      };

      virtual bool empty() const override { return this->contacts_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<PageBean::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<PageBean::Contacts>) };
      inline vector<PageBean::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<PageBean::Contacts>) };
      inline PageBean& setContacts(const vector<PageBean::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline PageBean& setContacts(vector<PageBean::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageBean::Contacts>> contacts_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchAlertContactResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchAlertContactResponseBody::PageBean) };
    inline SearchAlertContactResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchAlertContactResponseBody::PageBean) };
    inline SearchAlertContactResponseBody& setPageBean(const SearchAlertContactResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchAlertContactResponseBody& setPageBean(SearchAlertContactResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAlertContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchAlertContactResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
