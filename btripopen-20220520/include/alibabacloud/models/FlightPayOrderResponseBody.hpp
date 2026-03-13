// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTPAYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTPAYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightPayOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightPayOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightPayOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightPayOrderResponseBody() = default ;
    FlightPayOrderResponseBody(const FlightPayOrderResponseBody &) = default ;
    FlightPayOrderResponseBody(FlightPayOrderResponseBody &&) = default ;
    FlightPayOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightPayOrderResponseBody() = default ;
    FlightPayOrderResponseBody& operator=(const FlightPayOrderResponseBody &) = default ;
    FlightPayOrderResponseBody& operator=(FlightPayOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(actual_pay_price, actualPayPrice_);
        DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(actual_pay_price, actualPayPrice_);
        DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
        DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
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
      virtual bool empty() const override { return this->actualPayPrice_ == nullptr
        && this->alipayTradeNo_ == nullptr && this->lastPayTime_ == nullptr && this->payStatus_ == nullptr; };
      // actualPayPrice Field Functions 
      bool hasActualPayPrice() const { return this->actualPayPrice_ != nullptr;};
      void deleteActualPayPrice() { this->actualPayPrice_ = nullptr;};
      inline int64_t getActualPayPrice() const { DARABONBA_PTR_GET_DEFAULT(actualPayPrice_, 0L) };
      inline Module& setActualPayPrice(int64_t actualPayPrice) { DARABONBA_PTR_SET_VALUE(actualPayPrice_, actualPayPrice) };


      // alipayTradeNo Field Functions 
      bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
      void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
      inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
      inline Module& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


      // lastPayTime Field Functions 
      bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
      void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
      inline string getLastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
      inline Module& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Module& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    protected:
      shared_ptr<int64_t> actualPayPrice_ {};
      shared_ptr<string> alipayTradeNo_ {};
      shared_ptr<string> lastPayTime_ {};
      shared_ptr<int32_t> payStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightPayOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightPayOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightPayOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightPayOrderResponseBody::Module) };
    inline FlightPayOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightPayOrderResponseBody::Module) };
    inline FlightPayOrderResponseBody& setModule(const FlightPayOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightPayOrderResponseBody& setModule(FlightPayOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightPayOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightPayOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightPayOrderResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightPayOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
