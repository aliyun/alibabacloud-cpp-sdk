// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGPAYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGPAYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingPayResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingPayResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(can_retry, canRetry_);
      DARABONBA_PTR_TO_JSON(pay_price, payPrice_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(trade_no, tradeNo_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingPayResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(can_retry, canRetry_);
      DARABONBA_PTR_FROM_JSON(pay_price, payPrice_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(trade_no, tradeNo_);
    };
    TicketChangingPayResponseBodyModule() = default ;
    TicketChangingPayResponseBodyModule(const TicketChangingPayResponseBodyModule &) = default ;
    TicketChangingPayResponseBodyModule(TicketChangingPayResponseBodyModule &&) = default ;
    TicketChangingPayResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingPayResponseBodyModule() = default ;
    TicketChangingPayResponseBodyModule& operator=(const TicketChangingPayResponseBodyModule &) = default ;
    TicketChangingPayResponseBodyModule& operator=(TicketChangingPayResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canRetry_ != nullptr
        && this->payPrice_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr && this->tradeNo_ != nullptr; };
    // canRetry Field Functions 
    bool hasCanRetry() const { return this->canRetry_ != nullptr;};
    void deleteCanRetry() { this->canRetry_ = nullptr;};
    inline bool canRetry() const { DARABONBA_PTR_GET_DEFAULT(canRetry_, false) };
    inline TicketChangingPayResponseBodyModule& setCanRetry(bool canRetry) { DARABONBA_PTR_SET_VALUE(canRetry_, canRetry) };


    // payPrice Field Functions 
    bool hasPayPrice() const { return this->payPrice_ != nullptr;};
    void deletePayPrice() { this->payPrice_ = nullptr;};
    inline int64_t payPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0L) };
    inline TicketChangingPayResponseBodyModule& setPayPrice(int64_t payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline TicketChangingPayResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline TicketChangingPayResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // tradeNo Field Functions 
    bool hasTradeNo() const { return this->tradeNo_ != nullptr;};
    void deleteTradeNo() { this->tradeNo_ = nullptr;};
    inline string tradeNo() const { DARABONBA_PTR_GET_DEFAULT(tradeNo_, "") };
    inline TicketChangingPayResponseBodyModule& setTradeNo(string tradeNo) { DARABONBA_PTR_SET_VALUE(tradeNo_, tradeNo) };


  protected:
    std::shared_ptr<bool> canRetry_ = nullptr;
    std::shared_ptr<int64_t> payPrice_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<string> tradeNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
