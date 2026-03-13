// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGCANCELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGCANCELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingCancelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingCancelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingCancelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TicketChangingCancelResponseBody() = default ;
    TicketChangingCancelResponseBody(const TicketChangingCancelResponseBody &) = default ;
    TicketChangingCancelResponseBody(TicketChangingCancelResponseBody &&) = default ;
    TicketChangingCancelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingCancelResponseBody() = default ;
    TicketChangingCancelResponseBody& operator=(const TicketChangingCancelResponseBody &) = default ;
    TicketChangingCancelResponseBody& operator=(TicketChangingCancelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
        DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
        DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->cancelTime_ == nullptr
        && this->disSubOrderId_ == nullptr && this->status_ == nullptr; };
      // cancelTime Field Functions 
      bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
      void deleteCancelTime() { this->cancelTime_ = nullptr;};
      inline string getCancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
      inline Module& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


      // disSubOrderId Field Functions 
      bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
      void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
      inline string getDisSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
      inline Module& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> cancelTime_ {};
      shared_ptr<string> disSubOrderId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TicketChangingCancelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TicketChangingCancelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TicketChangingCancelResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TicketChangingCancelResponseBody::Module) };
    inline TicketChangingCancelResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TicketChangingCancelResponseBody::Module) };
    inline TicketChangingCancelResponseBody& setModule(const TicketChangingCancelResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TicketChangingCancelResponseBody& setModule(TicketChangingCancelResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketChangingCancelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketChangingCancelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TicketChangingCancelResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TicketChangingCancelResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
