// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERORDERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERORDERLISTRESPONSEBODY_HPP_
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
  class GetCustomerOrderListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerOrderListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerOrderListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetCustomerOrderListResponseBody() = default ;
    GetCustomerOrderListResponseBody(const GetCustomerOrderListResponseBody &) = default ;
    GetCustomerOrderListResponseBody(GetCustomerOrderListResponseBody &&) = default ;
    GetCustomerOrderListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerOrderListResponseBody() = default ;
    GetCustomerOrderListResponseBody& operator=(const GetCustomerOrderListResponseBody &) = default ;
    GetCustomerOrderListResponseBody& operator=(GetCustomerOrderListResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(CustomerAccount, customerAccount_);
        DARABONBA_PTR_TO_JSON(CustomerClassification, customerClassification_);
        DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
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
        DARABONBA_PTR_TO_JSON(RamAccountForCustomerManagers, ramAccountForCustomerManagers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AmountDiscount, amountDiscount_);
        DARABONBA_PTR_FROM_JSON(AmountDue, amountDue_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(CustomerAccount, customerAccount_);
        DARABONBA_PTR_FROM_JSON(CustomerClassification, customerClassification_);
        DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
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
        DARABONBA_PTR_FROM_JSON(RamAccountForCustomerManagers, ramAccountForCustomerManagers_);
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
        && this->amountDue_ == nullptr && this->createdAt_ == nullptr && this->customerAccount_ == nullptr && this->customerClassification_ == nullptr && this->customerUid_ == nullptr
        && this->deductedAmountByCoupons_ == nullptr && this->discountedPrice_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderType_ == nullptr
        && this->paidAt_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->projectId_ == nullptr && this->ramAccountForCustomerManagers_ == nullptr; };
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


      // customerAccount Field Functions 
      bool hasCustomerAccount() const { return this->customerAccount_ != nullptr;};
      void deleteCustomerAccount() { this->customerAccount_ = nullptr;};
      inline string getCustomerAccount() const { DARABONBA_PTR_GET_DEFAULT(customerAccount_, "") };
      inline Data& setCustomerAccount(string customerAccount) { DARABONBA_PTR_SET_VALUE(customerAccount_, customerAccount) };


      // customerClassification Field Functions 
      bool hasCustomerClassification() const { return this->customerClassification_ != nullptr;};
      void deleteCustomerClassification() { this->customerClassification_ = nullptr;};
      inline string getCustomerClassification() const { DARABONBA_PTR_GET_DEFAULT(customerClassification_, "") };
      inline Data& setCustomerClassification(string customerClassification) { DARABONBA_PTR_SET_VALUE(customerClassification_, customerClassification) };


      // customerUid Field Functions 
      bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
      void deleteCustomerUid() { this->customerUid_ = nullptr;};
      inline int64_t getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, 0L) };
      inline Data& setCustomerUid(int64_t customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


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


      // ramAccountForCustomerManagers Field Functions 
      bool hasRamAccountForCustomerManagers() const { return this->ramAccountForCustomerManagers_ != nullptr;};
      void deleteRamAccountForCustomerManagers() { this->ramAccountForCustomerManagers_ = nullptr;};
      inline const vector<string> & getRamAccountForCustomerManagers() const { DARABONBA_PTR_GET_CONST(ramAccountForCustomerManagers_, vector<string>) };
      inline vector<string> getRamAccountForCustomerManagers() { DARABONBA_PTR_GET(ramAccountForCustomerManagers_, vector<string>) };
      inline Data& setRamAccountForCustomerManagers(const vector<string> & ramAccountForCustomerManagers) { DARABONBA_PTR_SET_VALUE(ramAccountForCustomerManagers_, ramAccountForCustomerManagers) };
      inline Data& setRamAccountForCustomerManagers(vector<string> && ramAccountForCustomerManagers) { DARABONBA_PTR_SET_RVALUE(ramAccountForCustomerManagers_, ramAccountForCustomerManagers) };


    protected:
      // Order discount
      shared_ptr<double> amountDiscount_ {};
      // Actual payment amount
      shared_ptr<double> amountDue_ {};
      // Creation Time
      shared_ptr<string> createdAt_ {};
      // Customer Account
      shared_ptr<string> customerAccount_ {};
      // Customer categorization
      shared_ptr<string> customerClassification_ {};
      // Customer UID
      shared_ptr<int64_t> customerUid_ {};
      // Coupon amount
      shared_ptr<double> deductedAmountByCoupons_ {};
      // Discounted price
      shared_ptr<double> discountedPrice_ {};
      // Order ID
      shared_ptr<int64_t> orderId_ {};
      // Order status. Values include:  
      // 1: Unpaid  
      // 2: Paid  
      // 3: Voided
      shared_ptr<int32_t> orderStatus_ {};
      // Order type. Values include: BUY, UPGRADE, DOWNGRADE, RENEW, REFUND, OTHERS
      shared_ptr<string> orderType_ {};
      // Payment Time
      shared_ptr<string> paidAt_ {};
      // Payment type:  
      // 1: Non-agent payment  
      // 2: Agent payment
      shared_ptr<int32_t> payType_ {};
      // Original Price/List Price
      shared_ptr<double> price_ {};
      // Product code
      shared_ptr<string> productCode_ {};
      // Product name
      shared_ptr<string> productName_ {};
      // Opportunity ID
      shared_ptr<int64_t> projectId_ {};
      // Customer-facing staff
      shared_ptr<vector<string>> ramAccountForCustomerManagers_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetCustomerOrderListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomerOrderListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCustomerOrderListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCustomerOrderListResponseBody::Data>) };
    inline vector<GetCustomerOrderListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCustomerOrderListResponseBody::Data>) };
    inline GetCustomerOrderListResponseBody& setData(const vector<GetCustomerOrderListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomerOrderListResponseBody& setData(vector<GetCustomerOrderListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCustomerOrderListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomerOrderListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCustomerOrderListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCustomerOrderListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerOrderListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomerOrderListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetCustomerOrderListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Access denied details
    shared_ptr<string> accessDeniedDetail_ {};
    // Status Code
    shared_ptr<string> code_ {};
    // Returned data
    shared_ptr<vector<GetCustomerOrderListResponseBody::Data>> data_ {};
    // HTTP status code
    shared_ptr<int32_t> httpStatusCode_ {};
    // Message
    shared_ptr<string> message_ {};
    // Page number
    shared_ptr<int32_t> pageNo_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded
    shared_ptr<bool> success_ {};
    // Total number of entries
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
