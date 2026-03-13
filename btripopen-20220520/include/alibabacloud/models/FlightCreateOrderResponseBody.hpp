// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightCreateOrderResponseBody() = default ;
    FlightCreateOrderResponseBody(const FlightCreateOrderResponseBody &) = default ;
    FlightCreateOrderResponseBody(FlightCreateOrderResponseBody &&) = default ;
    FlightCreateOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderResponseBody() = default ;
    FlightCreateOrderResponseBody& operator=(const FlightCreateOrderResponseBody &) = default ;
    FlightCreateOrderResponseBody& operator=(FlightCreateOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(payment_price, paymentPrice_);
        DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(payment_price, paymentPrice_);
        DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
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
      virtual bool empty() const override { return this->alipayTradeNo_ == nullptr
        && this->btripOrderId_ == nullptr && this->disOrderId_ == nullptr && this->lastPayTime_ == nullptr && this->orderStatus_ == nullptr && this->payStatus_ == nullptr
        && this->paymentPrice_ == nullptr && this->totalPrice_ == nullptr; };
      // alipayTradeNo Field Functions 
      bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
      void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
      inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
      inline Module& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


      // btripOrderId Field Functions 
      bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
      void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
      inline int64_t getBtripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
      inline Module& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


      // disOrderId Field Functions 
      bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
      void deleteDisOrderId() { this->disOrderId_ = nullptr;};
      inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
      inline Module& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


      // lastPayTime Field Functions 
      bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
      void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
      inline string getLastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
      inline Module& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Module& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Module& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // paymentPrice Field Functions 
      bool hasPaymentPrice() const { return this->paymentPrice_ != nullptr;};
      void deletePaymentPrice() { this->paymentPrice_ = nullptr;};
      inline int64_t getPaymentPrice() const { DARABONBA_PTR_GET_DEFAULT(paymentPrice_, 0L) };
      inline Module& setPaymentPrice(int64_t paymentPrice) { DARABONBA_PTR_SET_VALUE(paymentPrice_, paymentPrice) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline int64_t getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
      inline Module& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    protected:
      shared_ptr<string> alipayTradeNo_ {};
      shared_ptr<int64_t> btripOrderId_ {};
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> lastPayTime_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<int32_t> payStatus_ {};
      shared_ptr<int64_t> paymentPrice_ {};
      shared_ptr<int64_t> totalPrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightCreateOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightCreateOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightCreateOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightCreateOrderResponseBody::Module) };
    inline FlightCreateOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightCreateOrderResponseBody::Module) };
    inline FlightCreateOrderResponseBody& setModule(const FlightCreateOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightCreateOrderResponseBody& setModule(FlightCreateOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightCreateOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightCreateOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightCreateOrderResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightCreateOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
