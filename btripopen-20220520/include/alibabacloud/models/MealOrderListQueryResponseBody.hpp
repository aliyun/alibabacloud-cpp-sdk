// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERLISTQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    MealOrderListQueryResponseBody() = default ;
    MealOrderListQueryResponseBody(const MealOrderListQueryResponseBody &) = default ;
    MealOrderListQueryResponseBody(MealOrderListQueryResponseBody &&) = default ;
    MealOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderListQueryResponseBody() = default ;
    MealOrderListQueryResponseBody& operator=(const MealOrderListQueryResponseBody &) = default ;
    MealOrderListQueryResponseBody& operator=(MealOrderListQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(order_list, orderList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(order_list, orderList_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(corp_pay_amount, corpPayAmount_);
          DARABONBA_PTR_TO_JSON(merchant_name, merchantName_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(order_type, orderType_);
          DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
          DARABONBA_PTR_TO_JSON(person_pay_amount, personPayAmount_);
          DARABONBA_PTR_TO_JSON(settle_time, settleTime_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_pay_amount, corpPayAmount_);
          DARABONBA_PTR_FROM_JSON(merchant_name, merchantName_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(order_type, orderType_);
          DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
          DARABONBA_PTR_FROM_JSON(person_pay_amount, personPayAmount_);
          DARABONBA_PTR_FROM_JSON(settle_time, settleTime_);
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
        virtual bool empty() const override { return this->corpPayAmount_ == nullptr
        && this->merchantName_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderType_ == nullptr && this->payAmount_ == nullptr
        && this->personPayAmount_ == nullptr && this->settleTime_ == nullptr; };
        // corpPayAmount Field Functions 
        bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
        void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
        inline int64_t getCorpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0L) };
        inline OrderList& setCorpPayAmount(int64_t corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


        // merchantName Field Functions 
        bool hasMerchantName() const { return this->merchantName_ != nullptr;};
        void deleteMerchantName() { this->merchantName_ = nullptr;};
        inline string getMerchantName() const { DARABONBA_PTR_GET_DEFAULT(merchantName_, "") };
        inline OrderList& setMerchantName(string merchantName) { DARABONBA_PTR_SET_VALUE(merchantName_, merchantName) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline OrderList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline OrderList& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline OrderList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // payAmount Field Functions 
        bool hasPayAmount() const { return this->payAmount_ != nullptr;};
        void deletePayAmount() { this->payAmount_ = nullptr;};
        inline int64_t getPayAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
        inline OrderList& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


        // personPayAmount Field Functions 
        bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
        void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
        inline int64_t getPersonPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0L) };
        inline OrderList& setPersonPayAmount(int64_t personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


        // settleTime Field Functions 
        bool hasSettleTime() const { return this->settleTime_ != nullptr;};
        void deleteSettleTime() { this->settleTime_ = nullptr;};
        inline string getSettleTime() const { DARABONBA_PTR_GET_DEFAULT(settleTime_, "") };
        inline OrderList& setSettleTime(string settleTime) { DARABONBA_PTR_SET_VALUE(settleTime_, settleTime) };


      protected:
        shared_ptr<int64_t> corpPayAmount_ {};
        shared_ptr<string> merchantName_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<int64_t> payAmount_ {};
        shared_ptr<int64_t> personPayAmount_ {};
        shared_ptr<string> settleTime_ {};
      };

      virtual bool empty() const override { return this->orderList_ == nullptr; };
      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const vector<Module::OrderList> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<Module::OrderList>) };
      inline vector<Module::OrderList> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<Module::OrderList>) };
      inline Module& setOrderList(const vector<Module::OrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline Module& setOrderList(vector<Module::OrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    protected:
      shared_ptr<vector<Module::OrderList>> orderList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MealOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MealOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const MealOrderListQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, MealOrderListQueryResponseBody::Module) };
    inline MealOrderListQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, MealOrderListQueryResponseBody::Module) };
    inline MealOrderListQueryResponseBody& setModule(const MealOrderListQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline MealOrderListQueryResponseBody& setModule(MealOrderListQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MealOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MealOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline MealOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<MealOrderListQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
