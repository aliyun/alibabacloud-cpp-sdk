// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGPAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGPAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingPayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingPayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingPayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TicketChangingPayResponseBody() = default ;
    TicketChangingPayResponseBody(const TicketChangingPayResponseBody &) = default ;
    TicketChangingPayResponseBody(TicketChangingPayResponseBody &&) = default ;
    TicketChangingPayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingPayResponseBody() = default ;
    TicketChangingPayResponseBody& operator=(const TicketChangingPayResponseBody &) = default ;
    TicketChangingPayResponseBody& operator=(TicketChangingPayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(can_retry, canRetry_);
        DARABONBA_PTR_TO_JSON(pay_price, payPrice_);
        DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(trade_no, tradeNo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(can_retry, canRetry_);
        DARABONBA_PTR_FROM_JSON(pay_price, payPrice_);
        DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(trade_no, tradeNo_);
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
      virtual bool empty() const override { return this->canRetry_ == nullptr
        && this->payPrice_ == nullptr && this->payStatus_ == nullptr && this->payTime_ == nullptr && this->tradeNo_ == nullptr; };
      // canRetry Field Functions 
      bool hasCanRetry() const { return this->canRetry_ != nullptr;};
      void deleteCanRetry() { this->canRetry_ = nullptr;};
      inline bool getCanRetry() const { DARABONBA_PTR_GET_DEFAULT(canRetry_, false) };
      inline Module& setCanRetry(bool canRetry) { DARABONBA_PTR_SET_VALUE(canRetry_, canRetry) };


      // payPrice Field Functions 
      bool hasPayPrice() const { return this->payPrice_ != nullptr;};
      void deletePayPrice() { this->payPrice_ = nullptr;};
      inline int64_t getPayPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0L) };
      inline Module& setPayPrice(int64_t payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Module& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // tradeNo Field Functions 
      bool hasTradeNo() const { return this->tradeNo_ != nullptr;};
      void deleteTradeNo() { this->tradeNo_ = nullptr;};
      inline string getTradeNo() const { DARABONBA_PTR_GET_DEFAULT(tradeNo_, "") };
      inline Module& setTradeNo(string tradeNo) { DARABONBA_PTR_SET_VALUE(tradeNo_, tradeNo) };


    protected:
      shared_ptr<bool> canRetry_ {};
      shared_ptr<int64_t> payPrice_ {};
      shared_ptr<int32_t> payStatus_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<string> tradeNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TicketChangingPayResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TicketChangingPayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TicketChangingPayResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TicketChangingPayResponseBody::Module) };
    inline TicketChangingPayResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TicketChangingPayResponseBody::Module) };
    inline TicketChangingPayResponseBody& setModule(const TicketChangingPayResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TicketChangingPayResponseBody& setModule(TicketChangingPayResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketChangingPayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketChangingPayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TicketChangingPayResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TicketChangingPayResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
