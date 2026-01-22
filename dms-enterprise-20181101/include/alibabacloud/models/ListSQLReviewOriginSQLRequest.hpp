// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderActionDetail, orderActionDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderActionDetail, orderActionDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSQLReviewOriginSQLRequest() = default ;
    ListSQLReviewOriginSQLRequest(const ListSQLReviewOriginSQLRequest &) = default ;
    ListSQLReviewOriginSQLRequest(ListSQLReviewOriginSQLRequest &&) = default ;
    ListSQLReviewOriginSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLRequest() = default ;
    ListSQLReviewOriginSQLRequest& operator=(const ListSQLReviewOriginSQLRequest &) = default ;
    ListSQLReviewOriginSQLRequest& operator=(ListSQLReviewOriginSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderActionDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderActionDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CheckStatusResult, checkStatusResult_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(SQLReviewResult, SQLReviewResult_);
      };
      friend void from_json(const Darabonba::Json& j, OrderActionDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckStatusResult, checkStatusResult_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(SQLReviewResult, SQLReviewResult_);
      };
      OrderActionDetail() = default ;
      OrderActionDetail(const OrderActionDetail &) = default ;
      OrderActionDetail(OrderActionDetail &&) = default ;
      OrderActionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderActionDetail() = default ;
      OrderActionDetail& operator=(const OrderActionDetail &) = default ;
      OrderActionDetail& operator=(OrderActionDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        };
        Page() = default ;
        Page(const Page &) = default ;
        Page(Page &&) = default ;
        Page(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Page() = default ;
        Page& operator=(const Page &) = default ;
        Page& operator=(Page &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
        // pageNumber Field Functions 
        bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
        void deletePageNumber() { this->pageNumber_ = nullptr;};
        inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
        inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      protected:
        // The page number.
        shared_ptr<int32_t> pageNumber_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
      };

      virtual bool empty() const override { return this->checkStatusResult_ == nullptr
        && this->fileId_ == nullptr && this->page_ == nullptr && this->SQLReviewResult_ == nullptr; };
      // checkStatusResult Field Functions 
      bool hasCheckStatusResult() const { return this->checkStatusResult_ != nullptr;};
      void deleteCheckStatusResult() { this->checkStatusResult_ = nullptr;};
      inline string getCheckStatusResult() const { DARABONBA_PTR_GET_DEFAULT(checkStatusResult_, "") };
      inline OrderActionDetail& setCheckStatusResult(string checkStatusResult) { DARABONBA_PTR_SET_VALUE(checkStatusResult_, checkStatusResult) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline OrderActionDetail& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const OrderActionDetail::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, OrderActionDetail::Page) };
      inline OrderActionDetail::Page getPage() { DARABONBA_PTR_GET(page_, OrderActionDetail::Page) };
      inline OrderActionDetail& setPage(const OrderActionDetail::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline OrderActionDetail& setPage(OrderActionDetail::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


      // SQLReviewResult Field Functions 
      bool hasSQLReviewResult() const { return this->SQLReviewResult_ != nullptr;};
      void deleteSQLReviewResult() { this->SQLReviewResult_ = nullptr;};
      inline string getSQLReviewResult() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewResult_, "") };
      inline OrderActionDetail& setSQLReviewResult(string SQLReviewResult) { DARABONBA_PTR_SET_VALUE(SQLReviewResult_, SQLReviewResult) };


    protected:
      // The review status of the SQL statement. Valid values:
      // 
      // *   **new**: The SQL statement was waiting to be reviewed.
      // *   **unknown**: The SQL statement cannot be parsed.
      // *   **check_not_pass**: The SQL statement failed to pass the review.
      // *   **check_pass**: The SQL statement passed the review.
      // *   **force_pass**: The SQL statement passed the manual review.
      // *   **force_not_pass**: The SQL statement failed to pass the manual review.
      shared_ptr<string> checkStatusResult_ {};
      // The ID of the file that contains the SQL statements to be reviewed.
      shared_ptr<int64_t> fileId_ {};
      // The pagination information.
      shared_ptr<OrderActionDetail::Page> page_ {};
      // The optimization suggestion for the SQL statement. Valid values:
      // 
      // *   **MUST_IMPROVE**: The SQL statement must be optimized.
      // *   **POTENTIAL_ISSUE**: The SQL statement contains potential issues.
      // *   **SUGGEST_IMPROVE**: We recommend that you optimize the SQL statement.
      // *   **USE_DMS_TOOLKIT**: We recommend that you change schemas without locking tables.
      // *   **USE_DMS_DML_UNLOCK**: We recommend that you change data without locking tables.
      // *   **TABLE_INDEX_SUGGEST**: We recommend that you optimize indexes for the SQL statement.
      shared_ptr<string> SQLReviewResult_ {};
    };

    virtual bool empty() const override { return this->orderActionDetail_ == nullptr
        && this->orderId_ == nullptr && this->tid_ == nullptr; };
    // orderActionDetail Field Functions 
    bool hasOrderActionDetail() const { return this->orderActionDetail_ != nullptr;};
    void deleteOrderActionDetail() { this->orderActionDetail_ = nullptr;};
    inline const ListSQLReviewOriginSQLRequest::OrderActionDetail & getOrderActionDetail() const { DARABONBA_PTR_GET_CONST(orderActionDetail_, ListSQLReviewOriginSQLRequest::OrderActionDetail) };
    inline ListSQLReviewOriginSQLRequest::OrderActionDetail getOrderActionDetail() { DARABONBA_PTR_GET(orderActionDetail_, ListSQLReviewOriginSQLRequest::OrderActionDetail) };
    inline ListSQLReviewOriginSQLRequest& setOrderActionDetail(const ListSQLReviewOriginSQLRequest::OrderActionDetail & orderActionDetail) { DARABONBA_PTR_SET_VALUE(orderActionDetail_, orderActionDetail) };
    inline ListSQLReviewOriginSQLRequest& setOrderActionDetail(ListSQLReviewOriginSQLRequest::OrderActionDetail && orderActionDetail) { DARABONBA_PTR_SET_RVALUE(orderActionDetail_, orderActionDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListSQLReviewOriginSQLRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSQLReviewOriginSQLRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are used to filter SQL statements involved in the ticket.
    shared_ptr<ListSQLReviewOriginSQLRequest::OrderActionDetail> orderActionDetail_ {};
    // The ID of the SQL review ticket. You can call the [CreateSQLReviewOrder](https://help.aliyun.com/document_detail/257777.html) operation to query the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
