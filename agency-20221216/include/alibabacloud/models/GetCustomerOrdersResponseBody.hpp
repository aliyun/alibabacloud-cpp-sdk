// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCustomerOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetCustomerOrdersResponseBody() = default ;
    GetCustomerOrdersResponseBody(const GetCustomerOrdersResponseBody &) = default ;
    GetCustomerOrdersResponseBody(GetCustomerOrdersResponseBody &&) = default ;
    GetCustomerOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerOrdersResponseBody() = default ;
    GetCustomerOrdersResponseBody& operator=(const GetCustomerOrdersResponseBody &) = default ;
    GetCustomerOrdersResponseBody& operator=(GetCustomerOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerAccount, customerAccount_);
        DARABONBA_PTR_TO_JSON(CustomerManager, customerManager_);
        DARABONBA_PTR_TO_JSON(CustomerNo, customerNo_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrderSource, orderSource_);
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(OriginalCost, originalCost_);
        DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
        DARABONBA_PTR_TO_JSON(PretaxCost, pretaxCost_);
        DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(TimeToOrder, timeToOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerAccount, customerAccount_);
        DARABONBA_PTR_FROM_JSON(CustomerManager, customerManager_);
        DARABONBA_PTR_FROM_JSON(CustomerNo, customerNo_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrderSource, orderSource_);
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(OriginalCost, originalCost_);
        DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
        DARABONBA_PTR_FROM_JSON(PretaxCost, pretaxCost_);
        DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(TimeToOrder, timeToOrder_);
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
      virtual bool empty() const override { return this->customerAccount_ == nullptr
        && this->customerManager_ == nullptr && this->customerNo_ == nullptr && this->orderId_ == nullptr && this->orderSource_ == nullptr && this->orderStatus_ == nullptr
        && this->orderType_ == nullptr && this->originalCost_ == nullptr && this->paymentMethod_ == nullptr && this->paymentTime_ == nullptr && this->pretaxCost_ == nullptr
        && this->productDetail_ == nullptr && this->productType_ == nullptr && this->timeToOrder_ == nullptr; };
      // customerAccount Field Functions 
      bool hasCustomerAccount() const { return this->customerAccount_ != nullptr;};
      void deleteCustomerAccount() { this->customerAccount_ = nullptr;};
      inline string getCustomerAccount() const { DARABONBA_PTR_GET_DEFAULT(customerAccount_, "") };
      inline Data& setCustomerAccount(string customerAccount) { DARABONBA_PTR_SET_VALUE(customerAccount_, customerAccount) };


      // customerManager Field Functions 
      bool hasCustomerManager() const { return this->customerManager_ != nullptr;};
      void deleteCustomerManager() { this->customerManager_ = nullptr;};
      inline string getCustomerManager() const { DARABONBA_PTR_GET_DEFAULT(customerManager_, "") };
      inline Data& setCustomerManager(string customerManager) { DARABONBA_PTR_SET_VALUE(customerManager_, customerManager) };


      // customerNo Field Functions 
      bool hasCustomerNo() const { return this->customerNo_ != nullptr;};
      void deleteCustomerNo() { this->customerNo_ = nullptr;};
      inline int64_t getCustomerNo() const { DARABONBA_PTR_GET_DEFAULT(customerNo_, 0L) };
      inline Data& setCustomerNo(int64_t customerNo) { DARABONBA_PTR_SET_VALUE(customerNo_, customerNo) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderSource Field Functions 
      bool hasOrderSource() const { return this->orderSource_ != nullptr;};
      void deleteOrderSource() { this->orderSource_ = nullptr;};
      inline string getOrderSource() const { DARABONBA_PTR_GET_DEFAULT(orderSource_, "") };
      inline Data& setOrderSource(string orderSource) { DARABONBA_PTR_SET_VALUE(orderSource_, orderSource) };


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


      // originalCost Field Functions 
      bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
      void deleteOriginalCost() { this->originalCost_ = nullptr;};
      inline double getOriginalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
      inline Data& setOriginalCost(double originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


      // paymentMethod Field Functions 
      bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
      void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
      inline string getPaymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
      inline Data& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


      // paymentTime Field Functions 
      bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
      void deletePaymentTime() { this->paymentTime_ = nullptr;};
      inline string getPaymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
      inline Data& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


      // pretaxCost Field Functions 
      bool hasPretaxCost() const { return this->pretaxCost_ != nullptr;};
      void deletePretaxCost() { this->pretaxCost_ = nullptr;};
      inline double getPretaxCost() const { DARABONBA_PTR_GET_DEFAULT(pretaxCost_, 0.0) };
      inline Data& setPretaxCost(double pretaxCost) { DARABONBA_PTR_SET_VALUE(pretaxCost_, pretaxCost) };


      // productDetail Field Functions 
      bool hasProductDetail() const { return this->productDetail_ != nullptr;};
      void deleteProductDetail() { this->productDetail_ = nullptr;};
      inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
      inline Data& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // timeToOrder Field Functions 
      bool hasTimeToOrder() const { return this->timeToOrder_ != nullptr;};
      void deleteTimeToOrder() { this->timeToOrder_ = nullptr;};
      inline string getTimeToOrder() const { DARABONBA_PTR_GET_DEFAULT(timeToOrder_, "") };
      inline Data& setTimeToOrder(string timeToOrder) { DARABONBA_PTR_SET_VALUE(timeToOrder_, timeToOrder) };


    protected:
      shared_ptr<string> customerAccount_ {};
      shared_ptr<string> customerManager_ {};
      shared_ptr<int64_t> customerNo_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> orderSource_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<string> orderType_ {};
      shared_ptr<double> originalCost_ {};
      shared_ptr<string> paymentMethod_ {};
      shared_ptr<string> paymentTime_ {};
      shared_ptr<double> pretaxCost_ {};
      shared_ptr<string> productDetail_ {};
      shared_ptr<string> productType_ {};
      shared_ptr<string> timeToOrder_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->msg_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomerOrdersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCustomerOrdersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCustomerOrdersResponseBody::Data>) };
    inline vector<GetCustomerOrdersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCustomerOrdersResponseBody::Data>) };
    inline GetCustomerOrdersResponseBody& setData(const vector<GetCustomerOrdersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomerOrdersResponseBody& setData(vector<GetCustomerOrdersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomerOrdersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetCustomerOrdersResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCustomerOrdersResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCustomerOrdersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomerOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetCustomerOrdersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetCustomerOrdersResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
