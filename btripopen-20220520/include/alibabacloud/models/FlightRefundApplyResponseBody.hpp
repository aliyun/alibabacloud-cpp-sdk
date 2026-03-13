// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDAPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightRefundApplyResponseBody() = default ;
    FlightRefundApplyResponseBody(const FlightRefundApplyResponseBody &) = default ;
    FlightRefundApplyResponseBody(FlightRefundApplyResponseBody &&) = default ;
    FlightRefundApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundApplyResponseBody() = default ;
    FlightRefundApplyResponseBody& operator=(const FlightRefundApplyResponseBody &) = default ;
    FlightRefundApplyResponseBody& operator=(FlightRefundApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
        DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_TO_JSON(refund_money, refundMoney_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
        DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_FROM_JSON(refund_money, refundMoney_);
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
      virtual bool empty() const override { return this->disOrderId_ == nullptr
        && this->disSubOrderId_ == nullptr && this->refundApplyId_ == nullptr && this->refundFee_ == nullptr && this->refundMoney_ == nullptr; };
      // disOrderId Field Functions 
      bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
      void deleteDisOrderId() { this->disOrderId_ = nullptr;};
      inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
      inline Module& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


      // disSubOrderId Field Functions 
      bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
      void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
      inline string getDisSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
      inline Module& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


      // refundApplyId Field Functions 
      bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
      void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
      inline int64_t getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
      inline Module& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
      inline Module& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


      // refundMoney Field Functions 
      bool hasRefundMoney() const { return this->refundMoney_ != nullptr;};
      void deleteRefundMoney() { this->refundMoney_ = nullptr;};
      inline int64_t getRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(refundMoney_, 0L) };
      inline Module& setRefundMoney(int64_t refundMoney) { DARABONBA_PTR_SET_VALUE(refundMoney_, refundMoney) };


    protected:
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> disSubOrderId_ {};
      shared_ptr<int64_t> refundApplyId_ {};
      shared_ptr<int64_t> refundFee_ {};
      shared_ptr<int64_t> refundMoney_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightRefundApplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightRefundApplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightRefundApplyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightRefundApplyResponseBody::Module) };
    inline FlightRefundApplyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightRefundApplyResponseBody::Module) };
    inline FlightRefundApplyResponseBody& setModule(const FlightRefundApplyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightRefundApplyResponseBody& setModule(FlightRefundApplyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightRefundApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightRefundApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightRefundApplyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightRefundApplyResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
