// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingDetailResponseBodyModuleFlightInfoList.hpp>
#include <alibabacloud/models/TicketChangingDetailResponseBodyModuleTravelerInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(btrip_sub_order_id, btripSubOrderId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(settle_price, settlePrice_);
      DARABONBA_PTR_TO_JSON(settle_type, settleType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(total_change_price, totalChangePrice_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(total_upgrade_price, totalUpgradePrice_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(btrip_sub_order_id, btripSubOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(settle_price, settlePrice_);
      DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(total_change_price, totalChangePrice_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(total_upgrade_price, totalUpgradePrice_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoList_);
    };
    TicketChangingDetailResponseBodyModule() = default ;
    TicketChangingDetailResponseBodyModule(const TicketChangingDetailResponseBodyModule &) = default ;
    TicketChangingDetailResponseBodyModule(TicketChangingDetailResponseBodyModule &&) = default ;
    TicketChangingDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingDetailResponseBodyModule() = default ;
    TicketChangingDetailResponseBodyModule& operator=(const TicketChangingDetailResponseBodyModule &) = default ;
    TicketChangingDetailResponseBodyModule& operator=(TicketChangingDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayTradeNo_ != nullptr
        && this->btripOrderId_ != nullptr && this->btripSubOrderId_ != nullptr && this->disOrderId_ != nullptr && this->disSubOrderId_ != nullptr && this->extra_ != nullptr
        && this->flightInfoList_ != nullptr && this->lastPayTime_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr && this->settlePrice_ != nullptr
        && this->settleType_ != nullptr && this->status_ != nullptr && this->totalChangePrice_ != nullptr && this->totalPrice_ != nullptr && this->totalUpgradePrice_ != nullptr
        && this->travelerInfoList_ != nullptr; };
    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline TicketChangingDetailResponseBodyModule& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // btripSubOrderId Field Functions 
    bool hasBtripSubOrderId() const { return this->btripSubOrderId_ != nullptr;};
    void deleteBtripSubOrderId() { this->btripSubOrderId_ = nullptr;};
    inline int64_t btripSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripSubOrderId_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setBtripSubOrderId(int64_t btripSubOrderId) { DARABONBA_PTR_SET_VALUE(btripSubOrderId_, btripSubOrderId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingDetailResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline TicketChangingDetailResponseBodyModule& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline TicketChangingDetailResponseBodyModule& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // flightInfoList Field Functions 
    bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
    void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
    inline const vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList> & flightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList>) };
    inline vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList> flightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList>) };
    inline TicketChangingDetailResponseBodyModule& setFlightInfoList(const vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
    inline TicketChangingDetailResponseBodyModule& setFlightInfoList(vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline TicketChangingDetailResponseBodyModule& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline TicketChangingDetailResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline TicketChangingDetailResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // settlePrice Field Functions 
    bool hasSettlePrice() const { return this->settlePrice_ != nullptr;};
    void deleteSettlePrice() { this->settlePrice_ = nullptr;};
    inline int64_t settlePrice() const { DARABONBA_PTR_GET_DEFAULT(settlePrice_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setSettlePrice(int64_t settlePrice) { DARABONBA_PTR_SET_VALUE(settlePrice_, settlePrice) };


    // settleType Field Functions 
    bool hasSettleType() const { return this->settleType_ != nullptr;};
    void deleteSettleType() { this->settleType_ = nullptr;};
    inline int32_t settleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
    inline TicketChangingDetailResponseBodyModule& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TicketChangingDetailResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalChangePrice Field Functions 
    bool hasTotalChangePrice() const { return this->totalChangePrice_ != nullptr;};
    void deleteTotalChangePrice() { this->totalChangePrice_ = nullptr;};
    inline int64_t totalChangePrice() const { DARABONBA_PTR_GET_DEFAULT(totalChangePrice_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setTotalChangePrice(int64_t totalChangePrice) { DARABONBA_PTR_SET_VALUE(totalChangePrice_, totalChangePrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // totalUpgradePrice Field Functions 
    bool hasTotalUpgradePrice() const { return this->totalUpgradePrice_ != nullptr;};
    void deleteTotalUpgradePrice() { this->totalUpgradePrice_ = nullptr;};
    inline int64_t totalUpgradePrice() const { DARABONBA_PTR_GET_DEFAULT(totalUpgradePrice_, 0L) };
    inline TicketChangingDetailResponseBodyModule& setTotalUpgradePrice(int64_t totalUpgradePrice) { DARABONBA_PTR_SET_VALUE(totalUpgradePrice_, totalUpgradePrice) };


    // travelerInfoList Field Functions 
    bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
    void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
    inline const vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList> & travelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList>) };
    inline vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList> travelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList>) };
    inline TicketChangingDetailResponseBodyModule& setTravelerInfoList(const vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
    inline TicketChangingDetailResponseBodyModule& setTravelerInfoList(vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


  protected:
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<int64_t> btripSubOrderId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingDetailResponseBodyModuleFlightInfoList>> flightInfoList_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int64_t> settlePrice_ = nullptr;
    std::shared_ptr<int32_t> settleType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> totalChangePrice_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
    std::shared_ptr<int64_t> totalUpgradePrice_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingDetailResponseBodyModuleTravelerInfoList>> travelerInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
