// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyResponseBodyModule& obj) { 
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
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyResponseBodyModule& obj) { 
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
    TicketChangingApplyResponseBodyModule() = default ;
    TicketChangingApplyResponseBodyModule(const TicketChangingApplyResponseBodyModule &) = default ;
    TicketChangingApplyResponseBodyModule(TicketChangingApplyResponseBodyModule &&) = default ;
    TicketChangingApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyResponseBodyModule() = default ;
    TicketChangingApplyResponseBodyModule& operator=(const TicketChangingApplyResponseBodyModule &) = default ;
    TicketChangingApplyResponseBodyModule& operator=(TicketChangingApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookingChangedTotalFee_ != nullptr
        && this->bookingOriginTotalFee_ != nullptr && this->bookingPriceChanged_ != nullptr && this->btripOrderId_ != nullptr && this->btripSubOrderId_ != nullptr && this->canPay_ != nullptr
        && this->changeFee_ != nullptr && this->deadlineTime_ != nullptr && this->disOrderId_ != nullptr && this->disSubOrderId_ != nullptr && this->maxRetryTimes_ != nullptr
        && this->nextRetryInterval_ != nullptr && this->retry_ != nullptr && this->retryClientTips_ != nullptr && this->status_ != nullptr && this->upgradeFee_ != nullptr; };
    // bookingChangedTotalFee Field Functions 
    bool hasBookingChangedTotalFee() const { return this->bookingChangedTotalFee_ != nullptr;};
    void deleteBookingChangedTotalFee() { this->bookingChangedTotalFee_ = nullptr;};
    inline int32_t bookingChangedTotalFee() const { DARABONBA_PTR_GET_DEFAULT(bookingChangedTotalFee_, 0) };
    inline TicketChangingApplyResponseBodyModule& setBookingChangedTotalFee(int32_t bookingChangedTotalFee) { DARABONBA_PTR_SET_VALUE(bookingChangedTotalFee_, bookingChangedTotalFee) };


    // bookingOriginTotalFee Field Functions 
    bool hasBookingOriginTotalFee() const { return this->bookingOriginTotalFee_ != nullptr;};
    void deleteBookingOriginTotalFee() { this->bookingOriginTotalFee_ = nullptr;};
    inline int32_t bookingOriginTotalFee() const { DARABONBA_PTR_GET_DEFAULT(bookingOriginTotalFee_, 0) };
    inline TicketChangingApplyResponseBodyModule& setBookingOriginTotalFee(int32_t bookingOriginTotalFee) { DARABONBA_PTR_SET_VALUE(bookingOriginTotalFee_, bookingOriginTotalFee) };


    // bookingPriceChanged Field Functions 
    bool hasBookingPriceChanged() const { return this->bookingPriceChanged_ != nullptr;};
    void deleteBookingPriceChanged() { this->bookingPriceChanged_ = nullptr;};
    inline bool bookingPriceChanged() const { DARABONBA_PTR_GET_DEFAULT(bookingPriceChanged_, false) };
    inline TicketChangingApplyResponseBodyModule& setBookingPriceChanged(bool bookingPriceChanged) { DARABONBA_PTR_SET_VALUE(bookingPriceChanged_, bookingPriceChanged) };


    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline TicketChangingApplyResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // btripSubOrderId Field Functions 
    bool hasBtripSubOrderId() const { return this->btripSubOrderId_ != nullptr;};
    void deleteBtripSubOrderId() { this->btripSubOrderId_ = nullptr;};
    inline int64_t btripSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripSubOrderId_, 0L) };
    inline TicketChangingApplyResponseBodyModule& setBtripSubOrderId(int64_t btripSubOrderId) { DARABONBA_PTR_SET_VALUE(btripSubOrderId_, btripSubOrderId) };


    // canPay Field Functions 
    bool hasCanPay() const { return this->canPay_ != nullptr;};
    void deleteCanPay() { this->canPay_ = nullptr;};
    inline bool canPay() const { DARABONBA_PTR_GET_DEFAULT(canPay_, false) };
    inline TicketChangingApplyResponseBodyModule& setCanPay(bool canPay) { DARABONBA_PTR_SET_VALUE(canPay_, canPay) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline int64_t changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
    inline TicketChangingApplyResponseBodyModule& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    // deadlineTime Field Functions 
    bool hasDeadlineTime() const { return this->deadlineTime_ != nullptr;};
    void deleteDeadlineTime() { this->deadlineTime_ = nullptr;};
    inline string deadlineTime() const { DARABONBA_PTR_GET_DEFAULT(deadlineTime_, "") };
    inline TicketChangingApplyResponseBodyModule& setDeadlineTime(string deadlineTime) { DARABONBA_PTR_SET_VALUE(deadlineTime_, deadlineTime) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingApplyResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline TicketChangingApplyResponseBodyModule& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // maxRetryTimes Field Functions 
    bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
    void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
    inline int32_t maxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
    inline TicketChangingApplyResponseBodyModule& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


    // nextRetryInterval Field Functions 
    bool hasNextRetryInterval() const { return this->nextRetryInterval_ != nullptr;};
    void deleteNextRetryInterval() { this->nextRetryInterval_ = nullptr;};
    inline int64_t nextRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(nextRetryInterval_, 0L) };
    inline TicketChangingApplyResponseBodyModule& setNextRetryInterval(int64_t nextRetryInterval) { DARABONBA_PTR_SET_VALUE(nextRetryInterval_, nextRetryInterval) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline TicketChangingApplyResponseBodyModule& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // retryClientTips Field Functions 
    bool hasRetryClientTips() const { return this->retryClientTips_ != nullptr;};
    void deleteRetryClientTips() { this->retryClientTips_ = nullptr;};
    inline string retryClientTips() const { DARABONBA_PTR_GET_DEFAULT(retryClientTips_, "") };
    inline TicketChangingApplyResponseBodyModule& setRetryClientTips(string retryClientTips) { DARABONBA_PTR_SET_VALUE(retryClientTips_, retryClientTips) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TicketChangingApplyResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline int64_t upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0L) };
    inline TicketChangingApplyResponseBodyModule& setUpgradeFee(int64_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


  protected:
    std::shared_ptr<int32_t> bookingChangedTotalFee_ = nullptr;
    std::shared_ptr<int32_t> bookingOriginTotalFee_ = nullptr;
    std::shared_ptr<bool> bookingPriceChanged_ = nullptr;
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<int64_t> btripSubOrderId_ = nullptr;
    std::shared_ptr<bool> canPay_ = nullptr;
    std::shared_ptr<int64_t> changeFee_ = nullptr;
    std::shared_ptr<string> deadlineTime_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<int32_t> maxRetryTimes_ = nullptr;
    std::shared_ptr<int64_t> nextRetryInterval_ = nullptr;
    std::shared_ptr<bool> retry_ = nullptr;
    std::shared_ptr<string> retryClientTips_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> upgradeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
