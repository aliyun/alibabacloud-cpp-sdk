// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODY_HPP_
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
  class AccountFlowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountFlowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_ANY_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AccountFlowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_ANY_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AccountFlowListResponseBody() = default ;
    AccountFlowListResponseBody(const AccountFlowListResponseBody &) = default ;
    AccountFlowListResponseBody(AccountFlowListResponseBody &&) = default ;
    AccountFlowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountFlowListResponseBody() = default ;
    AccountFlowListResponseBody& operator=(const AccountFlowListResponseBody &) = default ;
    AccountFlowListResponseBody& operator=(AccountFlowListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(after_available_amount, afterAvailableAmount_);
          DARABONBA_PTR_TO_JSON(before_available_amount, beforeAvailableAmount_);
          DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
          DARABONBA_PTR_TO_JSON(flow_id, flowId_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_TO_JSON(op_amount, opAmount_);
          DARABONBA_PTR_TO_JSON(op_type, opType_);
          DARABONBA_PTR_TO_JSON(order_num, orderNum_);
          DARABONBA_PTR_TO_JSON(order_type, orderType_);
          DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
          DARABONBA_PTR_TO_JSON(refund_order_num, refundOrderNum_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(after_available_amount, afterAvailableAmount_);
          DARABONBA_PTR_FROM_JSON(before_available_amount, beforeAvailableAmount_);
          DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
          DARABONBA_PTR_FROM_JSON(flow_id, flowId_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(op_amount, opAmount_);
          DARABONBA_PTR_FROM_JSON(op_type, opType_);
          DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
          DARABONBA_PTR_FROM_JSON(order_type, orderType_);
          DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
          DARABONBA_PTR_FROM_JSON(refund_order_num, refundOrderNum_);
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
        virtual bool empty() const override { return this->afterAvailableAmount_ == nullptr
        && this->beforeAvailableAmount_ == nullptr && this->changeOrderNum_ == nullptr && this->flowId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->opAmount_ == nullptr && this->opType_ == nullptr && this->orderNum_ == nullptr && this->orderType_ == nullptr && this->outOrderNum_ == nullptr
        && this->refundOrderNum_ == nullptr; };
        // afterAvailableAmount Field Functions 
        bool hasAfterAvailableAmount() const { return this->afterAvailableAmount_ != nullptr;};
        void deleteAfterAvailableAmount() { this->afterAvailableAmount_ = nullptr;};
        inline double getAfterAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(afterAvailableAmount_, 0.0) };
        inline List& setAfterAvailableAmount(double afterAvailableAmount) { DARABONBA_PTR_SET_VALUE(afterAvailableAmount_, afterAvailableAmount) };


        // beforeAvailableAmount Field Functions 
        bool hasBeforeAvailableAmount() const { return this->beforeAvailableAmount_ != nullptr;};
        void deleteBeforeAvailableAmount() { this->beforeAvailableAmount_ = nullptr;};
        inline double getBeforeAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(beforeAvailableAmount_, 0.0) };
        inline List& setBeforeAvailableAmount(double beforeAvailableAmount) { DARABONBA_PTR_SET_VALUE(beforeAvailableAmount_, beforeAvailableAmount) };


        // changeOrderNum Field Functions 
        bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
        void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
        inline int64_t getChangeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
        inline List& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline int64_t getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
        inline List& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline List& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // opAmount Field Functions 
        bool hasOpAmount() const { return this->opAmount_ != nullptr;};
        void deleteOpAmount() { this->opAmount_ = nullptr;};
        inline double getOpAmount() const { DARABONBA_PTR_GET_DEFAULT(opAmount_, 0.0) };
        inline List& setOpAmount(double opAmount) { DARABONBA_PTR_SET_VALUE(opAmount_, opAmount) };


        // opType Field Functions 
        bool hasOpType() const { return this->opType_ != nullptr;};
        void deleteOpType() { this->opType_ = nullptr;};
        inline int32_t getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, 0) };
        inline List& setOpType(int32_t opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
        inline List& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
        inline List& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // outOrderNum Field Functions 
        bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
        void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
        inline string getOutOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
        inline List& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


        // refundOrderNum Field Functions 
        bool hasRefundOrderNum() const { return this->refundOrderNum_ != nullptr;};
        void deleteRefundOrderNum() { this->refundOrderNum_ = nullptr;};
        inline int64_t getRefundOrderNum() const { DARABONBA_PTR_GET_DEFAULT(refundOrderNum_, 0L) };
        inline List& setRefundOrderNum(int64_t refundOrderNum) { DARABONBA_PTR_SET_VALUE(refundOrderNum_, refundOrderNum) };


      protected:
        // The available balance after the operation, in CNY.
        shared_ptr<double> afterAvailableAmount_ {};
        // The available balance before the operation, in CNY.
        shared_ptr<double> beforeAvailableAmount_ {};
        // The change order number. This value is not empty if the flow is related to a ticket change.
        shared_ptr<int64_t> changeOrderNum_ {};
        // The flow ID.
        shared_ptr<int64_t> flowId_ {};
        // The creation time.
        shared_ptr<int64_t> gmtCreate_ {};
        // The modification time.
        shared_ptr<int64_t> gmtModified_ {};
        // The operation amount, in CNY.
        shared_ptr<double> opAmount_ {};
        // The operation type. Valid values:
        // - 1: payment
        // - 2: refund
        // - 3: top-up.
        shared_ptr<int32_t> opType_ {};
        // The original order number.
        shared_ptr<int64_t> orderNum_ {};
        // The order type. Valid values:
        // - 0: original transaction
        // - 1: change order payment
        // - 2: refund.
        shared_ptr<int32_t> orderType_ {};
        // The external order number of the original order.
        shared_ptr<string> outOrderNum_ {};
        // The refund order number. This value is not empty if the flow is related to a refund.
        shared_ptr<int64_t> refundOrderNum_ {};
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
    inline AccountFlowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AccountFlowListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AccountFlowListResponseBody::Data) };
    inline AccountFlowListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AccountFlowListResponseBody::Data) };
    inline AccountFlowListResponseBody& setData(const AccountFlowListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AccountFlowListResponseBody& setData(AccountFlowListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AccountFlowListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline     const Darabonba::Json & getErrorData() const { DARABONBA_GET(errorData_) };
    Darabonba::Json & getErrorData() { DARABONBA_GET(errorData_) };
    inline AccountFlowListResponseBody& setErrorData(const Darabonba::Json & errorData) { DARABONBA_SET_VALUE(errorData_, errorData) };
    inline AccountFlowListResponseBody& setErrorData(Darabonba::Json && errorData) { DARABONBA_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline AccountFlowListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline AccountFlowListResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AccountFlowListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The data returned for a successful request.
    shared_ptr<AccountFlowListResponseBody::Data> data_ {};
    // The business error code.
    shared_ptr<string> errorCode_ {};
    // The data returned with the error.
    Darabonba::Json errorData_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code. The value is always 200 for successful HTTP requests.
    shared_ptr<int32_t> status_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
