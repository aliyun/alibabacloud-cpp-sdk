// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingApplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TicketChangingApplyResponseBody() = default ;
    TicketChangingApplyResponseBody(const TicketChangingApplyResponseBody &) = default ;
    TicketChangingApplyResponseBody(TicketChangingApplyResponseBody &&) = default ;
    TicketChangingApplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyResponseBody() = default ;
    TicketChangingApplyResponseBody& operator=(const TicketChangingApplyResponseBody &) = default ;
    TicketChangingApplyResponseBody& operator=(TicketChangingApplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(booking_changed_total_fee, bookingChangedTotalFee_);
        DARABONBA_PTR_TO_JSON(booking_origin_total_fee, bookingOriginTotalFee_);
        DARABONBA_PTR_TO_JSON(booking_price_changed, bookingPriceChanged_);
        DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_TO_JSON(btrip_sub_order_id, btripSubOrderId_);
        DARABONBA_PTR_TO_JSON(can_pay, canPay_);
        DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
        DARABONBA_PTR_TO_JSON(deadline_time, deadlineTime_);
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_TO_JSON(max_retry_times, maxRetryTimes_);
        DARABONBA_PTR_TO_JSON(next_retry_interval, nextRetryInterval_);
        DARABONBA_PTR_TO_JSON(retry, retry_);
        DARABONBA_PTR_TO_JSON(retry_client_tips, retryClientTips_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(booking_changed_total_fee, bookingChangedTotalFee_);
        DARABONBA_PTR_FROM_JSON(booking_origin_total_fee, bookingOriginTotalFee_);
        DARABONBA_PTR_FROM_JSON(booking_price_changed, bookingPriceChanged_);
        DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
        DARABONBA_PTR_FROM_JSON(btrip_sub_order_id, btripSubOrderId_);
        DARABONBA_PTR_FROM_JSON(can_pay, canPay_);
        DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
        DARABONBA_PTR_FROM_JSON(deadline_time, deadlineTime_);
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
        DARABONBA_PTR_FROM_JSON(max_retry_times, maxRetryTimes_);
        DARABONBA_PTR_FROM_JSON(next_retry_interval, nextRetryInterval_);
        DARABONBA_PTR_FROM_JSON(retry, retry_);
        DARABONBA_PTR_FROM_JSON(retry_client_tips, retryClientTips_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
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
      virtual bool empty() const override { return this->bookingChangedTotalFee_ == nullptr
        && this->bookingOriginTotalFee_ == nullptr && this->bookingPriceChanged_ == nullptr && this->btripOrderId_ == nullptr && this->btripSubOrderId_ == nullptr && this->canPay_ == nullptr
        && this->changeFee_ == nullptr && this->deadlineTime_ == nullptr && this->disOrderId_ == nullptr && this->disSubOrderId_ == nullptr && this->maxRetryTimes_ == nullptr
        && this->nextRetryInterval_ == nullptr && this->retry_ == nullptr && this->retryClientTips_ == nullptr && this->status_ == nullptr && this->upgradeFee_ == nullptr; };
      // bookingChangedTotalFee Field Functions 
      bool hasBookingChangedTotalFee() const { return this->bookingChangedTotalFee_ != nullptr;};
      void deleteBookingChangedTotalFee() { this->bookingChangedTotalFee_ = nullptr;};
      inline int32_t getBookingChangedTotalFee() const { DARABONBA_PTR_GET_DEFAULT(bookingChangedTotalFee_, 0) };
      inline Module& setBookingChangedTotalFee(int32_t bookingChangedTotalFee) { DARABONBA_PTR_SET_VALUE(bookingChangedTotalFee_, bookingChangedTotalFee) };


      // bookingOriginTotalFee Field Functions 
      bool hasBookingOriginTotalFee() const { return this->bookingOriginTotalFee_ != nullptr;};
      void deleteBookingOriginTotalFee() { this->bookingOriginTotalFee_ = nullptr;};
      inline int32_t getBookingOriginTotalFee() const { DARABONBA_PTR_GET_DEFAULT(bookingOriginTotalFee_, 0) };
      inline Module& setBookingOriginTotalFee(int32_t bookingOriginTotalFee) { DARABONBA_PTR_SET_VALUE(bookingOriginTotalFee_, bookingOriginTotalFee) };


      // bookingPriceChanged Field Functions 
      bool hasBookingPriceChanged() const { return this->bookingPriceChanged_ != nullptr;};
      void deleteBookingPriceChanged() { this->bookingPriceChanged_ = nullptr;};
      inline bool getBookingPriceChanged() const { DARABONBA_PTR_GET_DEFAULT(bookingPriceChanged_, false) };
      inline Module& setBookingPriceChanged(bool bookingPriceChanged) { DARABONBA_PTR_SET_VALUE(bookingPriceChanged_, bookingPriceChanged) };


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


      // canPay Field Functions 
      bool hasCanPay() const { return this->canPay_ != nullptr;};
      void deleteCanPay() { this->canPay_ = nullptr;};
      inline bool getCanPay() const { DARABONBA_PTR_GET_DEFAULT(canPay_, false) };
      inline Module& setCanPay(bool canPay) { DARABONBA_PTR_SET_VALUE(canPay_, canPay) };


      // changeFee Field Functions 
      bool hasChangeFee() const { return this->changeFee_ != nullptr;};
      void deleteChangeFee() { this->changeFee_ = nullptr;};
      inline int64_t getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
      inline Module& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


      // deadlineTime Field Functions 
      bool hasDeadlineTime() const { return this->deadlineTime_ != nullptr;};
      void deleteDeadlineTime() { this->deadlineTime_ = nullptr;};
      inline string getDeadlineTime() const { DARABONBA_PTR_GET_DEFAULT(deadlineTime_, "") };
      inline Module& setDeadlineTime(string deadlineTime) { DARABONBA_PTR_SET_VALUE(deadlineTime_, deadlineTime) };


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


      // maxRetryTimes Field Functions 
      bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
      void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
      inline int32_t getMaxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
      inline Module& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


      // nextRetryInterval Field Functions 
      bool hasNextRetryInterval() const { return this->nextRetryInterval_ != nullptr;};
      void deleteNextRetryInterval() { this->nextRetryInterval_ = nullptr;};
      inline int64_t getNextRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(nextRetryInterval_, 0L) };
      inline Module& setNextRetryInterval(int64_t nextRetryInterval) { DARABONBA_PTR_SET_VALUE(nextRetryInterval_, nextRetryInterval) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline bool getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
      inline Module& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


      // retryClientTips Field Functions 
      bool hasRetryClientTips() const { return this->retryClientTips_ != nullptr;};
      void deleteRetryClientTips() { this->retryClientTips_ = nullptr;};
      inline string getRetryClientTips() const { DARABONBA_PTR_GET_DEFAULT(retryClientTips_, "") };
      inline Module& setRetryClientTips(string retryClientTips) { DARABONBA_PTR_SET_VALUE(retryClientTips_, retryClientTips) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeFee Field Functions 
      bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
      void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
      inline int64_t getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0L) };
      inline Module& setUpgradeFee(int64_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


    protected:
      shared_ptr<int32_t> bookingChangedTotalFee_ {};
      shared_ptr<int32_t> bookingOriginTotalFee_ {};
      shared_ptr<bool> bookingPriceChanged_ {};
      shared_ptr<int64_t> btripOrderId_ {};
      shared_ptr<int64_t> btripSubOrderId_ {};
      shared_ptr<bool> canPay_ {};
      shared_ptr<int64_t> changeFee_ {};
      shared_ptr<string> deadlineTime_ {};
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> disSubOrderId_ {};
      shared_ptr<int32_t> maxRetryTimes_ {};
      shared_ptr<int64_t> nextRetryInterval_ {};
      shared_ptr<bool> retry_ {};
      shared_ptr<string> retryClientTips_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> upgradeFee_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TicketChangingApplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TicketChangingApplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TicketChangingApplyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TicketChangingApplyResponseBody::Module) };
    inline TicketChangingApplyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TicketChangingApplyResponseBody::Module) };
    inline TicketChangingApplyResponseBody& setModule(const TicketChangingApplyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TicketChangingApplyResponseBody& setModule(TicketChangingApplyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketChangingApplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketChangingApplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TicketChangingApplyResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TicketChangingApplyResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
