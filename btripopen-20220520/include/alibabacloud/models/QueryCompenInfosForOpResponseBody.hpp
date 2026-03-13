// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMPENINFOSFOROPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMPENINFOSFOROPRESPONSEBODY_HPP_
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
  class QueryCompenInfosForOpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCompenInfosForOpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCompenInfosForOpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    QueryCompenInfosForOpResponseBody() = default ;
    QueryCompenInfosForOpResponseBody(const QueryCompenInfosForOpResponseBody &) = default ;
    QueryCompenInfosForOpResponseBody(QueryCompenInfosForOpResponseBody &&) = default ;
    QueryCompenInfosForOpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCompenInfosForOpResponseBody() = default ;
    QueryCompenInfosForOpResponseBody& operator=(const QueryCompenInfosForOpResponseBody &) = default ;
    QueryCompenInfosForOpResponseBody& operator=(QueryCompenInfosForOpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(amount, amount_);
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(compen_id, compenId_);
        DARABONBA_PTR_TO_JSON(compensation_type, compensationType_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(settle_time, settleTime_);
        DARABONBA_PTR_TO_JSON(settle_type, settleType_);
        DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(amount, amount_);
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(compen_id, compenId_);
        DARABONBA_PTR_FROM_JSON(compensation_type, compensationType_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(settle_time, settleTime_);
        DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
        DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
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
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->category_ == nullptr && this->compenId_ == nullptr && this->compensationType_ == nullptr && this->orderId_ == nullptr && this->settleTime_ == nullptr
        && this->settleType_ == nullptr && this->ticketNo_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
      inline Module& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Module& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // compenId Field Functions 
      bool hasCompenId() const { return this->compenId_ != nullptr;};
      void deleteCompenId() { this->compenId_ = nullptr;};
      inline string getCompenId() const { DARABONBA_PTR_GET_DEFAULT(compenId_, "") };
      inline Module& setCompenId(string compenId) { DARABONBA_PTR_SET_VALUE(compenId_, compenId) };


      // compensationType Field Functions 
      bool hasCompensationType() const { return this->compensationType_ != nullptr;};
      void deleteCompensationType() { this->compensationType_ = nullptr;};
      inline string getCompensationType() const { DARABONBA_PTR_GET_DEFAULT(compensationType_, "") };
      inline Module& setCompensationType(string compensationType) { DARABONBA_PTR_SET_VALUE(compensationType_, compensationType) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // settleTime Field Functions 
      bool hasSettleTime() const { return this->settleTime_ != nullptr;};
      void deleteSettleTime() { this->settleTime_ = nullptr;};
      inline string getSettleTime() const { DARABONBA_PTR_GET_DEFAULT(settleTime_, "") };
      inline Module& setSettleTime(string settleTime) { DARABONBA_PTR_SET_VALUE(settleTime_, settleTime) };


      // settleType Field Functions 
      bool hasSettleType() const { return this->settleType_ != nullptr;};
      void deleteSettleType() { this->settleType_ = nullptr;};
      inline int32_t getSettleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
      inline Module& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


      // ticketNo Field Functions 
      bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
      void deleteTicketNo() { this->ticketNo_ = nullptr;};
      inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
      inline Module& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    protected:
      shared_ptr<int64_t> amount_ {};
      shared_ptr<int32_t> category_ {};
      shared_ptr<string> compenId_ {};
      shared_ptr<string> compensationType_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> settleTime_ {};
      shared_ptr<int32_t> settleType_ {};
      shared_ptr<string> ticketNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCompenInfosForOpResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCompenInfosForOpResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<QueryCompenInfosForOpResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<QueryCompenInfosForOpResponseBody::Module>) };
    inline vector<QueryCompenInfosForOpResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<QueryCompenInfosForOpResponseBody::Module>) };
    inline QueryCompenInfosForOpResponseBody& setModule(const vector<QueryCompenInfosForOpResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryCompenInfosForOpResponseBody& setModule(vector<QueryCompenInfosForOpResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCompenInfosForOpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCompenInfosForOpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryCompenInfosForOpResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<QueryCompenInfosForOpResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
