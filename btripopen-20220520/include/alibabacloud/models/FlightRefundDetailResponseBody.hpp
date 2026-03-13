// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILRESPONSEBODY_HPP_
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
  class FlightRefundDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightRefundDetailResponseBody() = default ;
    FlightRefundDetailResponseBody(const FlightRefundDetailResponseBody &) = default ;
    FlightRefundDetailResponseBody(FlightRefundDetailResponseBody &&) = default ;
    FlightRefundDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailResponseBody() = default ;
    FlightRefundDetailResponseBody& operator=(const FlightRefundDetailResponseBody &) = default ;
    FlightRefundDetailResponseBody& operator=(FlightRefundDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_TO_JSON(btrip_sub_order_id, btripSubOrderId_);
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_TO_JSON(refund_fee_list, refundFeeList_);
        DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_FROM_JSON(btrip_sub_order_id, btripSubOrderId_);
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_FROM_JSON(refund_fee_list, refundFeeList_);
        DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
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
      class RefundFeeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundFeeList& obj) { 
          DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RefundFeeList& obj) { 
          DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        RefundFeeList() = default ;
        RefundFeeList(const RefundFeeList &) = default ;
        RefundFeeList(RefundFeeList &&) = default ;
        RefundFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundFeeList() = default ;
        RefundFeeList& operator=(const RefundFeeList &) = default ;
        RefundFeeList& operator=(RefundFeeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alipayTradeNo_ == nullptr
        && this->refundFee_ == nullptr && this->refundPrice_ == nullptr && this->status_ == nullptr; };
        // alipayTradeNo Field Functions 
        bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
        void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
        inline string getAlipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
        inline RefundFeeList& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
        inline RefundFeeList& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // refundPrice Field Functions 
        bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
        void deleteRefundPrice() { this->refundPrice_ = nullptr;};
        inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
        inline RefundFeeList& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RefundFeeList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> alipayTradeNo_ {};
        shared_ptr<int64_t> refundFee_ {};
        shared_ptr<int64_t> refundPrice_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->btripOrderId_ == nullptr
        && this->btripSubOrderId_ == nullptr && this->disOrderId_ == nullptr && this->disSubOrderId_ == nullptr && this->isVoluntary_ == nullptr && this->reason_ == nullptr
        && this->refundFee_ == nullptr && this->refundFeeList_ == nullptr && this->refundPrice_ == nullptr && this->status_ == nullptr; };
      // btripOrderId Field Functions 
      bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
      void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
      inline int64_t getBtripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
      inline Module& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


      // btripSubOrderId Field Functions 
      bool hasBtripSubOrderId() const { return this->btripSubOrderId_ != nullptr;};
      void deleteBtripSubOrderId() { this->btripSubOrderId_ = nullptr;};
      inline int64_t getBtripSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripSubOrderId_, 0L) };
      inline Module& setBtripSubOrderId(int64_t btripSubOrderId) { DARABONBA_PTR_SET_VALUE(btripSubOrderId_, btripSubOrderId) };


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


      // isVoluntary Field Functions 
      bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
      void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
      inline int32_t getIsVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
      inline Module& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Module& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
      inline Module& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


      // refundFeeList Field Functions 
      bool hasRefundFeeList() const { return this->refundFeeList_ != nullptr;};
      void deleteRefundFeeList() { this->refundFeeList_ = nullptr;};
      inline const vector<Module::RefundFeeList> & getRefundFeeList() const { DARABONBA_PTR_GET_CONST(refundFeeList_, vector<Module::RefundFeeList>) };
      inline vector<Module::RefundFeeList> getRefundFeeList() { DARABONBA_PTR_GET(refundFeeList_, vector<Module::RefundFeeList>) };
      inline Module& setRefundFeeList(const vector<Module::RefundFeeList> & refundFeeList) { DARABONBA_PTR_SET_VALUE(refundFeeList_, refundFeeList) };
      inline Module& setRefundFeeList(vector<Module::RefundFeeList> && refundFeeList) { DARABONBA_PTR_SET_RVALUE(refundFeeList_, refundFeeList) };


      // refundPrice Field Functions 
      bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
      void deleteRefundPrice() { this->refundPrice_ = nullptr;};
      inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
      inline Module& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> btripOrderId_ {};
      shared_ptr<int64_t> btripSubOrderId_ {};
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> disSubOrderId_ {};
      shared_ptr<int32_t> isVoluntary_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<int64_t> refundFee_ {};
      shared_ptr<vector<Module::RefundFeeList>> refundFeeList_ {};
      shared_ptr<int64_t> refundPrice_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightRefundDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightRefundDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightRefundDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightRefundDetailResponseBody::Module) };
    inline FlightRefundDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightRefundDetailResponseBody::Module) };
    inline FlightRefundDetailResponseBody& setModule(const FlightRefundDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightRefundDetailResponseBody& setModule(FlightRefundDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightRefundDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightRefundDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightRefundDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightRefundDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
