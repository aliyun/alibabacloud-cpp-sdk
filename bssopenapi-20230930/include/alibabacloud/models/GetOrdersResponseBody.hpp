// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOrdersResponseBody() = default ;
    GetOrdersResponseBody(const GetOrdersResponseBody &) = default ;
    GetOrdersResponseBody(GetOrdersResponseBody &&) = default ;
    GetOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrdersResponseBody() = default ;
    GetOrdersResponseBody& operator=(const GetOrdersResponseBody &) = default ;
    GetOrdersResponseBody& operator=(GetOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(OrderList, orderList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(Order, order_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(Order, order_);
        };
        OrderList() = default ;
        OrderList(const OrderList &) = default ;
        OrderList(OrderList &&) = default ;
        OrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderList() = default ;
        OrderList& operator=(const OrderList &) = default ;
        OrderList& operator=(OrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Order : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Order& obj) { 
            DARABONBA_PTR_TO_JSON(AfterTaxAmount, afterTaxAmount_);
            DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(OrderId, orderId_);
            DARABONBA_PTR_TO_JSON(OrderType, orderType_);
            DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
            DARABONBA_PTR_TO_JSON(PaymentStatus, paymentStatus_);
            DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
            DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
            DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
            DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
            DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
            DARABONBA_PTR_TO_JSON(ProductType, productType_);
            DARABONBA_PTR_TO_JSON(RelatedOrderId, relatedOrderId_);
            DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
            DARABONBA_PTR_TO_JSON(Tax, tax_);
          };
          friend void from_json(const Darabonba::Json& j, Order& obj) { 
            DARABONBA_PTR_FROM_JSON(AfterTaxAmount, afterTaxAmount_);
            DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
            DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
            DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
            DARABONBA_PTR_FROM_JSON(PaymentStatus, paymentStatus_);
            DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
            DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
            DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
            DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
            DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
            DARABONBA_PTR_FROM_JSON(ProductType, productType_);
            DARABONBA_PTR_FROM_JSON(RelatedOrderId, relatedOrderId_);
            DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
            DARABONBA_PTR_FROM_JSON(Tax, tax_);
          };
          Order() = default ;
          Order(const Order &) = default ;
          Order(Order &&) = default ;
          Order(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Order() = default ;
          Order& operator=(const Order &) = default ;
          Order& operator=(Order &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->afterTaxAmount_ == nullptr
        && this->commodityCode_ == nullptr && this->createTime_ == nullptr && this->currency_ == nullptr && this->orderId_ == nullptr && this->orderType_ == nullptr
        && this->paymentCurrency_ == nullptr && this->paymentStatus_ == nullptr && this->paymentTime_ == nullptr && this->pretaxAmount_ == nullptr && this->pretaxAmountLocal_ == nullptr
        && this->pretaxGrossAmount_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr && this->relatedOrderId_ == nullptr && this->subscriptionType_ == nullptr
        && this->tax_ == nullptr; };
          // afterTaxAmount Field Functions 
          bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
          void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
          inline string getAfterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, "") };
          inline Order& setAfterTaxAmount(string afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline Order& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline Order& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Order& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline Order& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // orderType Field Functions 
          bool hasOrderType() const { return this->orderType_ != nullptr;};
          void deleteOrderType() { this->orderType_ = nullptr;};
          inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
          inline Order& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


          // paymentCurrency Field Functions 
          bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
          void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
          inline string getPaymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
          inline Order& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


          // paymentStatus Field Functions 
          bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
          void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
          inline string getPaymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
          inline Order& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


          // paymentTime Field Functions 
          bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
          void deletePaymentTime() { this->paymentTime_ = nullptr;};
          inline string getPaymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
          inline Order& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
          inline Order& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // pretaxAmountLocal Field Functions 
          bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
          void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
          inline string getPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
          inline Order& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


          // pretaxGrossAmount Field Functions 
          bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
          void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
          inline string getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
          inline Order& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline Order& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline Order& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // relatedOrderId Field Functions 
          bool hasRelatedOrderId() const { return this->relatedOrderId_ != nullptr;};
          void deleteRelatedOrderId() { this->relatedOrderId_ = nullptr;};
          inline string getRelatedOrderId() const { DARABONBA_PTR_GET_DEFAULT(relatedOrderId_, "") };
          inline Order& setRelatedOrderId(string relatedOrderId) { DARABONBA_PTR_SET_VALUE(relatedOrderId_, relatedOrderId) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Order& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
          inline Order& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


        protected:
          shared_ptr<string> afterTaxAmount_ {};
          shared_ptr<string> commodityCode_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<string> orderType_ {};
          shared_ptr<string> paymentCurrency_ {};
          shared_ptr<string> paymentStatus_ {};
          shared_ptr<string> paymentTime_ {};
          shared_ptr<string> pretaxAmount_ {};
          shared_ptr<string> pretaxAmountLocal_ {};
          shared_ptr<string> pretaxGrossAmount_ {};
          shared_ptr<string> productCode_ {};
          shared_ptr<string> productType_ {};
          shared_ptr<string> relatedOrderId_ {};
          shared_ptr<string> subscriptionType_ {};
          shared_ptr<string> tax_ {};
        };

        virtual bool empty() const override { return this->order_ == nullptr; };
        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline const vector<OrderList::Order> & getOrder() const { DARABONBA_PTR_GET_CONST(order_, vector<OrderList::Order>) };
        inline vector<OrderList::Order> getOrder() { DARABONBA_PTR_GET(order_, vector<OrderList::Order>) };
        inline OrderList& setOrder(const vector<OrderList::Order> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
        inline OrderList& setOrder(vector<OrderList::Order> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


      protected:
        shared_ptr<vector<OrderList::Order>> order_ {};
      };

      virtual bool empty() const override { return this->hostName_ == nullptr
        && this->orderList_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Data& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const Data::OrderList & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, Data::OrderList) };
      inline Data::OrderList getOrderList() { DARABONBA_PTR_GET(orderList_, Data::OrderList) };
      inline Data& setOrderList(const Data::OrderList & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline Data& setOrderList(Data::OrderList && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> hostName_ {};
      shared_ptr<Data::OrderList> orderList_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOrdersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOrdersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOrdersResponseBody::Data) };
    inline GetOrdersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOrdersResponseBody::Data) };
    inline GetOrdersResponseBody& setData(const GetOrdersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOrdersResponseBody& setData(GetOrdersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOrdersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetOrdersResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
