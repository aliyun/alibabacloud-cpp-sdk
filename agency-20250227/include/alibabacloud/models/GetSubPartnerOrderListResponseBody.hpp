// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBPARTNERORDERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBPARTNERORDERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetSubPartnerOrderListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubPartnerOrderListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubPartnerOrderListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSubPartnerOrderListResponseBody() = default ;
    GetSubPartnerOrderListResponseBody(const GetSubPartnerOrderListResponseBody &) = default ;
    GetSubPartnerOrderListResponseBody(GetSubPartnerOrderListResponseBody &&) = default ;
    GetSubPartnerOrderListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubPartnerOrderListResponseBody() = default ;
    GetSubPartnerOrderListResponseBody& operator=(const GetSubPartnerOrderListResponseBody &) = default ;
    GetSubPartnerOrderListResponseBody& operator=(GetSubPartnerOrderListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AmountDiscount, amountDiscount_);
        DARABONBA_PTR_TO_JSON(AmountDue, amountDue_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(CustomerClassification, customerClassification_);
        DARABONBA_PTR_TO_JSON(DeductedAmountByCoupons, deductedAmountByCoupons_);
        DARABONBA_PTR_TO_JSON(DiscountedPrice, discountedPrice_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(PaidAt, paidAt_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(SubPartnerName, subPartnerName_);
        DARABONBA_PTR_TO_JSON(SubPartnerUid, subPartnerUid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AmountDiscount, amountDiscount_);
        DARABONBA_PTR_FROM_JSON(AmountDue, amountDue_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CustomerClassification, customerClassification_);
        DARABONBA_PTR_FROM_JSON(DeductedAmountByCoupons, deductedAmountByCoupons_);
        DARABONBA_PTR_FROM_JSON(DiscountedPrice, discountedPrice_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(PaidAt, paidAt_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(SubPartnerName, subPartnerName_);
        DARABONBA_PTR_FROM_JSON(SubPartnerUid, subPartnerUid_);
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
      virtual bool empty() const override { return this->amountDiscount_ == nullptr
        && this->amountDue_ == nullptr && this->createdAt_ == nullptr && this->customerClassification_ == nullptr && this->deductedAmountByCoupons_ == nullptr && this->discountedPrice_ == nullptr
        && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderType_ == nullptr && this->paidAt_ == nullptr && this->payType_ == nullptr
        && this->price_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->projectId_ == nullptr && this->subPartnerName_ == nullptr
        && this->subPartnerUid_ == nullptr; };
      // amountDiscount Field Functions 
      bool hasAmountDiscount() const { return this->amountDiscount_ != nullptr;};
      void deleteAmountDiscount() { this->amountDiscount_ = nullptr;};
      inline double getAmountDiscount() const { DARABONBA_PTR_GET_DEFAULT(amountDiscount_, 0.0) };
      inline Data& setAmountDiscount(double amountDiscount) { DARABONBA_PTR_SET_VALUE(amountDiscount_, amountDiscount) };


      // amountDue Field Functions 
      bool hasAmountDue() const { return this->amountDue_ != nullptr;};
      void deleteAmountDue() { this->amountDue_ = nullptr;};
      inline double getAmountDue() const { DARABONBA_PTR_GET_DEFAULT(amountDue_, 0.0) };
      inline Data& setAmountDue(double amountDue) { DARABONBA_PTR_SET_VALUE(amountDue_, amountDue) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // customerClassification Field Functions 
      bool hasCustomerClassification() const { return this->customerClassification_ != nullptr;};
      void deleteCustomerClassification() { this->customerClassification_ = nullptr;};
      inline string getCustomerClassification() const { DARABONBA_PTR_GET_DEFAULT(customerClassification_, "") };
      inline Data& setCustomerClassification(string customerClassification) { DARABONBA_PTR_SET_VALUE(customerClassification_, customerClassification) };


      // deductedAmountByCoupons Field Functions 
      bool hasDeductedAmountByCoupons() const { return this->deductedAmountByCoupons_ != nullptr;};
      void deleteDeductedAmountByCoupons() { this->deductedAmountByCoupons_ = nullptr;};
      inline double getDeductedAmountByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedAmountByCoupons_, 0.0) };
      inline Data& setDeductedAmountByCoupons(double deductedAmountByCoupons) { DARABONBA_PTR_SET_VALUE(deductedAmountByCoupons_, deductedAmountByCoupons) };


      // discountedPrice Field Functions 
      bool hasDiscountedPrice() const { return this->discountedPrice_ != nullptr;};
      void deleteDiscountedPrice() { this->discountedPrice_ = nullptr;};
      inline double getDiscountedPrice() const { DARABONBA_PTR_GET_DEFAULT(discountedPrice_, 0.0) };
      inline Data& setDiscountedPrice(double discountedPrice) { DARABONBA_PTR_SET_VALUE(discountedPrice_, discountedPrice) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Data& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Data& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // paidAt Field Functions 
      bool hasPaidAt() const { return this->paidAt_ != nullptr;};
      void deletePaidAt() { this->paidAt_ = nullptr;};
      inline string getPaidAt() const { DARABONBA_PTR_GET_DEFAULT(paidAt_, "") };
      inline Data& setPaidAt(string paidAt) { DARABONBA_PTR_SET_VALUE(paidAt_, paidAt) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
      inline Data& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline Data& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // subPartnerName Field Functions 
      bool hasSubPartnerName() const { return this->subPartnerName_ != nullptr;};
      void deleteSubPartnerName() { this->subPartnerName_ = nullptr;};
      inline string getSubPartnerName() const { DARABONBA_PTR_GET_DEFAULT(subPartnerName_, "") };
      inline Data& setSubPartnerName(string subPartnerName) { DARABONBA_PTR_SET_VALUE(subPartnerName_, subPartnerName) };


      // subPartnerUid Field Functions 
      bool hasSubPartnerUid() const { return this->subPartnerUid_ != nullptr;};
      void deleteSubPartnerUid() { this->subPartnerUid_ = nullptr;};
      inline int64_t getSubPartnerUid() const { DARABONBA_PTR_GET_DEFAULT(subPartnerUid_, 0L) };
      inline Data& setSubPartnerUid(int64_t subPartnerUid) { DARABONBA_PTR_SET_VALUE(subPartnerUid_, subPartnerUid) };


    protected:
      // Order discount
      shared_ptr<double> amountDiscount_ {};
      // Actual payment amount
      shared_ptr<double> amountDue_ {};
      // Creation Time
      shared_ptr<string> createdAt_ {};
      // Customer classification
      shared_ptr<string> customerClassification_ {};
      // Coupon amount
      shared_ptr<double> deductedAmountByCoupons_ {};
      // Discounted price
      shared_ptr<double> discountedPrice_ {};
      // Order ID
      shared_ptr<int64_t> orderId_ {};
      // Order status:  
      // - 1 Unpaid  
      // - 2 Abandoned  
      // - 3 Paid
      shared_ptr<int32_t> orderStatus_ {};
      // Order type:  
      // - BUY: New purchase  
      // - UPGRADE: Upgrade  
      // - DOWNGRADE: Downgrade  
      // - RENEW: Renewal  
      // - REFUND: Refund  
      // - OTHERS: Others
      shared_ptr<string> orderType_ {};
      // Payment Time
      shared_ptr<string> paidAt_ {};
      // Payment type:  
      // 1: Non-agent payment  
      // 2: Agent payment
      shared_ptr<int32_t> payType_ {};
      // Original price/List price
      shared_ptr<double> price_ {};
      // Product code
      shared_ptr<string> productCode_ {};
      // Product name.
      shared_ptr<string> productName_ {};
      // Opportunity ID
      shared_ptr<int64_t> projectId_ {};
      // Sub-partner Name
      shared_ptr<string> subPartnerName_ {};
      // Secondary partner UID
      shared_ptr<int64_t> subPartnerUid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSubPartnerOrderListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSubPartnerOrderListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSubPartnerOrderListResponseBody::Data>) };
    inline vector<GetSubPartnerOrderListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSubPartnerOrderListResponseBody::Data>) };
    inline GetSubPartnerOrderListResponseBody& setData(const vector<GetSubPartnerOrderListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSubPartnerOrderListResponseBody& setData(vector<GetSubPartnerOrderListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubPartnerOrderListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetSubPartnerOrderListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSubPartnerOrderListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubPartnerOrderListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubPartnerOrderListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetSubPartnerOrderListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Status code
    shared_ptr<string> code_ {};
    // Returned data
    shared_ptr<vector<GetSubPartnerOrderListResponseBody::Data>> data_ {};
    // Message
    shared_ptr<string> message_ {};
    // Page number
    shared_ptr<int32_t> pageNo_ {};
    // Paging size
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded
    shared_ptr<bool> success_ {};
    // TotalCount indicates the total amount of data under the current request conditions. This parameter is optional and is not returned by default.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
