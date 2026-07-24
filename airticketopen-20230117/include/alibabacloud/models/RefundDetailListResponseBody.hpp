// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RefundDetailListResponseBody() = default ;
    RefundDetailListResponseBody(const RefundDetailListResponseBody &) = default ;
    RefundDetailListResponseBody(RefundDetailListResponseBody &&) = default ;
    RefundDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailListResponseBody() = default ;
    RefundDetailListResponseBody& operator=(const RefundDetailListResponseBody &) = default ;
    RefundDetailListResponseBody& operator=(RefundDetailListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pagination, pagination_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pagination, pagination_);
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
      class Pagination : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pagination& obj) { 
          DARABONBA_PTR_TO_JSON(current_page, currentPage_);
          DARABONBA_PTR_TO_JSON(page_size, pageSize_);
          DARABONBA_PTR_TO_JSON(total_count, totalCount_);
          DARABONBA_PTR_TO_JSON(total_page, totalPage_);
        };
        friend void from_json(const Darabonba::Json& j, Pagination& obj) { 
          DARABONBA_PTR_FROM_JSON(current_page, currentPage_);
          DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
          DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
          DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
        };
        Pagination() = default ;
        Pagination(const Pagination &) = default ;
        Pagination(Pagination &&) = default ;
        Pagination(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pagination() = default ;
        Pagination& operator=(const Pagination &) = default ;
        Pagination& operator=(Pagination &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline Pagination& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline Pagination& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline Pagination& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // totalPage Field Functions 
        bool hasTotalPage() const { return this->totalPage_ != nullptr;};
        void deleteTotalPage() { this->totalPage_ = nullptr;};
        inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
        inline Pagination& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of records per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of records.
        shared_ptr<int32_t> totalCount_ {};
        // The total number of pages.
        shared_ptr<int32_t> totalPage_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(is_multi_refund, isMultiRefund_);
          DARABONBA_PTR_TO_JSON(order_num, orderNum_);
          DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
          DARABONBA_PTR_TO_JSON(refund_order_status, refundOrderStatus_);
          DARABONBA_PTR_TO_JSON(related_refund_order_num, relatedRefundOrderNum_);
          DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
          DARABONBA_PTR_TO_JSON(utc_create_time, utcCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(is_multi_refund, isMultiRefund_);
          DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
          DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
          DARABONBA_PTR_FROM_JSON(refund_order_status, refundOrderStatus_);
          DARABONBA_PTR_FROM_JSON(related_refund_order_num, relatedRefundOrderNum_);
          DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
          DARABONBA_PTR_FROM_JSON(utc_create_time, utcCreateTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isMultiRefund_ == nullptr
        && this->orderNum_ == nullptr && this->refundOrderNum_ == nullptr && this->refundOrderStatus_ == nullptr && this->relatedRefundOrderNum_ == nullptr && this->transactionNo_ == nullptr
        && this->utcCreateTime_ == nullptr; };
        // isMultiRefund Field Functions 
        bool hasIsMultiRefund() const { return this->isMultiRefund_ != nullptr;};
        void deleteIsMultiRefund() { this->isMultiRefund_ = nullptr;};
        inline bool getIsMultiRefund() const { DARABONBA_PTR_GET_DEFAULT(isMultiRefund_, false) };
        inline List& setIsMultiRefund(bool isMultiRefund) { DARABONBA_PTR_SET_VALUE(isMultiRefund_, isMultiRefund) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
        inline List& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // refundOrderNum Field Functions 
        bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
        void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
        inline int64_t getRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
        inline List& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


        // refundOrderStatus Field Functions 
        bool hasRefundOrderStatus() const { return this->refundOrderStatus_ != nullptr;};
        void deleteRefundOrderStatus() { this->refundOrderStatus_ = nullptr;};
        inline int32_t getRefundOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(refundOrderStatus_, 0) };
        inline List& setRefundOrderStatus(int32_t refundOrderStatus) { DARABONBA_PTR_SET_VALUE(refundOrderStatus_, refundOrderStatus) };


        // relatedRefundOrderNum Field Functions 
        bool hasRelatedRefundOrderNum() const { return this->relatedRefundOrderNum_ != nullptr;};
        void deleteRelatedRefundOrderNum() { this->relatedRefundOrderNum_ = nullptr;};
        inline string getRelatedRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(relatedRefundOrderNum_, "") };
        inline List& setRelatedRefundOrderNum(string relatedRefundOrderNum) { DARABONBA_PTR_SET_VALUE(relatedRefundOrderNum_, relatedRefundOrderNum) };


        // transactionNo Field Functions 
        bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
        void deleteTransactionNo() { this->transactionNo_ = nullptr;};
        inline string getTransactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
        inline List& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


        // utcCreateTime Field Functions 
        bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
        void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
        inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
        inline List& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


      protected:
        // Indicates whether this is a supplementary refund order.
        shared_ptr<bool> isMultiRefund_ {};
        // The order number.
        shared_ptr<int64_t> orderNum_ {};
        // The refund order number.
        shared_ptr<int64_t> refundOrderNum_ {};
        // The refund order status. Valid values:
        // - 0: refund requested.
        // - 1: refund being processed.
        // - 2: refund failed.
        // - 3: refund succeeded.
        shared_ptr<int32_t> refundOrderStatus_ {};
        // The refund order number of the original order associated with this supplementary refund order. This field is returned only for supplementary refund orders and indicates the refund order ID of the associated original order.
        shared_ptr<string> relatedRefundOrderNum_ {};
        // The transaction number.
        shared_ptr<string> transactionNo_ {};
        // The creation time. The value is a UTC timestamp.
        shared_ptr<int64_t> utcCreateTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pagination_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pagination Field Functions 
      bool hasPagination() const { return this->pagination_ != nullptr;};
      void deletePagination() { this->pagination_ = nullptr;};
      inline const Data::Pagination & getPagination() const { DARABONBA_PTR_GET_CONST(pagination_, Data::Pagination) };
      inline Data::Pagination getPagination() { DARABONBA_PTR_GET(pagination_, Data::Pagination) };
      inline Data& setPagination(const Data::Pagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
      inline Data& setPagination(Data::Pagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


    protected:
      // The data list.
      shared_ptr<vector<Data::List>> list_ {};
      // The pagination information.
      shared_ptr<Data::Pagination> pagination_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->errorData_ == nullptr && this->errorMsg_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefundDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RefundDetailListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RefundDetailListResponseBody::Data) };
    inline RefundDetailListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RefundDetailListResponseBody::Data) };
    inline RefundDetailListResponseBody& setData(const RefundDetailListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RefundDetailListResponseBody& setData(RefundDetailListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RefundDetailListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline RefundDetailListResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline RefundDetailListResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline RefundDetailListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RefundDetailListResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RefundDetailListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<RefundDetailListResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
