// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class QueryNotifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNotifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNotifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryNotifyResponseBody() = default ;
    QueryNotifyResponseBody(const QueryNotifyResponseBody &) = default ;
    QueryNotifyResponseBody(QueryNotifyResponseBody &&) = default ;
    QueryNotifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNotifyResponseBody() = default ;
    QueryNotifyResponseBody& operator=(const QueryNotifyResponseBody &) = default ;
    QueryNotifyResponseBody& operator=(QueryNotifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NotifyItemList, notifyItemList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NotifyItemList, notifyItemList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotifyItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotifyItemList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(ConfirmFlag, confirmFlag_);
          DARABONBA_PTR_TO_JSON(Confirmor, confirmor_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdempotentCount, idempotentCount_);
          DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(NotifyElement, notifyElement_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NotifyItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(ConfirmFlag, confirmFlag_);
          DARABONBA_PTR_FROM_JSON(Confirmor, confirmor_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdempotentCount, idempotentCount_);
          DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(NotifyElement, notifyElement_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        NotifyItemList() = default ;
        NotifyItemList(const NotifyItemList &) = default ;
        NotifyItemList(NotifyItemList &&) = default ;
        NotifyItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotifyItemList() = default ;
        NotifyItemList& operator=(const NotifyItemList &) = default ;
        NotifyItemList& operator=(NotifyItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->confirmFlag_ == nullptr && this->confirmor_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->idempotentCount_ == nullptr && this->idempotentId_ == nullptr && this->level_ == nullptr && this->notifyElement_ == nullptr && this->templateName_ == nullptr
        && this->type_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline NotifyItemList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // confirmFlag Field Functions 
        bool hasConfirmFlag() const { return this->confirmFlag_ != nullptr;};
        void deleteConfirmFlag() { this->confirmFlag_ = nullptr;};
        inline bool getConfirmFlag() const { DARABONBA_PTR_GET_DEFAULT(confirmFlag_, false) };
        inline NotifyItemList& setConfirmFlag(bool confirmFlag) { DARABONBA_PTR_SET_VALUE(confirmFlag_, confirmFlag) };


        // confirmor Field Functions 
        bool hasConfirmor() const { return this->confirmor_ != nullptr;};
        void deleteConfirmor() { this->confirmor_ = nullptr;};
        inline int64_t getConfirmor() const { DARABONBA_PTR_GET_DEFAULT(confirmor_, 0L) };
        inline NotifyItemList& setConfirmor(int64_t confirmor) { DARABONBA_PTR_SET_VALUE(confirmor_, confirmor) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline NotifyItemList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline NotifyItemList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NotifyItemList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idempotentCount Field Functions 
        bool hasIdempotentCount() const { return this->idempotentCount_ != nullptr;};
        void deleteIdempotentCount() { this->idempotentCount_ = nullptr;};
        inline string getIdempotentCount() const { DARABONBA_PTR_GET_DEFAULT(idempotentCount_, "") };
        inline NotifyItemList& setIdempotentCount(string idempotentCount) { DARABONBA_PTR_SET_VALUE(idempotentCount_, idempotentCount) };


        // idempotentId Field Functions 
        bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
        void deleteIdempotentId() { this->idempotentId_ = nullptr;};
        inline string getIdempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
        inline NotifyItemList& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline NotifyItemList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // notifyElement Field Functions 
        bool hasNotifyElement() const { return this->notifyElement_ != nullptr;};
        void deleteNotifyElement() { this->notifyElement_ = nullptr;};
        inline string getNotifyElement() const { DARABONBA_PTR_GET_DEFAULT(notifyElement_, "") };
        inline NotifyItemList& setNotifyElement(string notifyElement) { DARABONBA_PTR_SET_VALUE(notifyElement_, notifyElement) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline NotifyItemList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NotifyItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<int64_t> aliUid_ {};
        // Indicates whether the notification has been confirmed. You can call the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notification as confirmed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> confirmFlag_ {};
        // The UID of the contact who called the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notification as confirmed. The contact belongs to the current Alibaba Cloud account.
        // 
        // The value **0** indicates that the notification is automatically confirmed by the system.
        shared_ptr<int64_t> confirmor_ {};
        // The time when the notification was created.
        shared_ptr<string> gmtCreated_ {};
        // The time when the notification was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the notification.
        shared_ptr<int64_t> id_ {};
        // The number of times that repeatedly sent notifications are blocked.
        shared_ptr<string> idempotentCount_ {};
        // This parameter ensures the idempotence of the notification and prevents the notification from being repeatedly sent.
        shared_ptr<string> idempotentId_ {};
        // The level of the notification. Valid values:
        // 
        // *   **help**
        // *   **success**
        // *   **warning**
        // *   **error**
        // *   **loading**
        // *   **notice**
        shared_ptr<string> level_ {};
        // The element in the notification template. This parameter is a JSON string. Fields in the JSON string vary based on the value of the **TemplateName** parameter.
        // 
        // *   If the **TemplateName** parameter is **RenewalRecommend**, the JSON string contains the following fields:
        // 
        //     *   **instanceName**: the ID of the instance that is about to expire
        //     *   **reservedTime**: the remaining validity period of the instance in days
        // 
        // *   If the **TemplateName** parameter is **InstanceCreateFailed**, the JSON string contains the following fields:
        // 
        //     *   **orderId**: the ID of the order to purchase the instance
        //     *   **reason**: the cause of the instance creation failure
        shared_ptr<string> notifyElement_ {};
        // The template of the notification. Valid values:
        // 
        // *   **RenewalRecommend**: The template that is used to notify of renewal suggestions.
        // *   **InstanceCreateFailed**: The template that is used to notify that an instance fails to be created and is refunded.
        shared_ptr<string> templateName_ {};
        // The type of the notification. Valid values:
        // 
        // *   **Sell**: sales notification
        // *   **Operation**: O\\&M notification
        // *   **Promotion**: promotion notification
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->notifyItemList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalRecordCount_ == nullptr; };
      // notifyItemList Field Functions 
      bool hasNotifyItemList() const { return this->notifyItemList_ != nullptr;};
      void deleteNotifyItemList() { this->notifyItemList_ = nullptr;};
      inline const vector<Data::NotifyItemList> & getNotifyItemList() const { DARABONBA_PTR_GET_CONST(notifyItemList_, vector<Data::NotifyItemList>) };
      inline vector<Data::NotifyItemList> getNotifyItemList() { DARABONBA_PTR_GET(notifyItemList_, vector<Data::NotifyItemList>) };
      inline Data& setNotifyItemList(const vector<Data::NotifyItemList> & notifyItemList) { DARABONBA_PTR_SET_VALUE(notifyItemList_, notifyItemList) };
      inline Data& setNotifyItemList(vector<Data::NotifyItemList> && notifyItemList) { DARABONBA_PTR_SET_RVALUE(notifyItemList_, notifyItemList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalRecordCount Field Functions 
      bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
      void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
      inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
      inline Data& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


    protected:
      // The details of notifications.
      shared_ptr<vector<Data::NotifyItemList>> notifyItemList_ {};
      // The page number of the page returned.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalRecordCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryNotifyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryNotifyResponseBody::Data) };
    inline QueryNotifyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryNotifyResponseBody::Data) };
    inline QueryNotifyResponseBody& setData(const QueryNotifyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryNotifyResponseBody& setData(QueryNotifyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryNotifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<QueryNotifyResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
