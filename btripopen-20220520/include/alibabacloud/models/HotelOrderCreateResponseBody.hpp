// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderCreateResponseBody() = default ;
    HotelOrderCreateResponseBody(const HotelOrderCreateResponseBody &) = default ;
    HotelOrderCreateResponseBody(HotelOrderCreateResponseBody &&) = default ;
    HotelOrderCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateResponseBody() = default ;
    HotelOrderCreateResponseBody& operator=(const HotelOrderCreateResponseBody &) = default ;
    HotelOrderCreateResponseBody& operator=(HotelOrderCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_TO_JSON(payment_no, paymentNo_);
        DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_FROM_JSON(payment_no, paymentNo_);
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
      virtual bool empty() const override { return this->btripOrderId_ == nullptr
        && this->paymentNo_ == nullptr && this->totalPrice_ == nullptr; };
      // btripOrderId Field Functions 
      bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
      void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
      inline int64_t getBtripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
      inline Module& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


      // paymentNo Field Functions 
      bool hasPaymentNo() const { return this->paymentNo_ != nullptr;};
      void deletePaymentNo() { this->paymentNo_ = nullptr;};
      inline string getPaymentNo() const { DARABONBA_PTR_GET_DEFAULT(paymentNo_, "") };
      inline Module& setPaymentNo(string paymentNo) { DARABONBA_PTR_SET_VALUE(paymentNo_, paymentNo) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline int64_t getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
      inline Module& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    protected:
      shared_ptr<int64_t> btripOrderId_ {};
      shared_ptr<string> paymentNo_ {};
      shared_ptr<int64_t> totalPrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderCreateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderCreateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderCreateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderCreateResponseBody::Module) };
    inline HotelOrderCreateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderCreateResponseBody::Module) };
    inline HotelOrderCreateResponseBody& setModule(const HotelOrderCreateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderCreateResponseBody& setModule(HotelOrderCreateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderCreateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderCreateResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelOrderCreateResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
