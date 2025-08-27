// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailInfoResponseBodyModuleFlightInfoList.hpp>
#include <alibabacloud/models/FlightOrderDetailInfoResponseBodyModuleTicketInfoList.hpp>
#include <alibabacloud/models/FlightOrderDetailInfoResponseBodyModuleTravelerInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailInfoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_TO_JSON(book_user_id, bookUserId_);
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(contact_name, contactName_);
      DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(settle_amount, settleAmount_);
      DARABONBA_PTR_TO_JSON(settle_type, settleType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(ticket_info_list, ticketInfoList_);
      DARABONBA_PTR_TO_JSON(total_build_price, totalBuildPrice_);
      DARABONBA_PTR_TO_JSON(total_oil_price, totalOilPrice_);
      DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_trade_no, alipayTradeNo_);
      DARABONBA_PTR_FROM_JSON(book_user_id, bookUserId_);
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
      DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(settle_amount, settleAmount_);
      DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(ticket_info_list, ticketInfoList_);
      DARABONBA_PTR_FROM_JSON(total_build_price, totalBuildPrice_);
      DARABONBA_PTR_FROM_JSON(total_oil_price, totalOilPrice_);
      DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoList_);
    };
    FlightOrderDetailInfoResponseBodyModule() = default ;
    FlightOrderDetailInfoResponseBodyModule(const FlightOrderDetailInfoResponseBodyModule &) = default ;
    FlightOrderDetailInfoResponseBodyModule(FlightOrderDetailInfoResponseBodyModule &&) = default ;
    FlightOrderDetailInfoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailInfoResponseBodyModule() = default ;
    FlightOrderDetailInfoResponseBodyModule& operator=(const FlightOrderDetailInfoResponseBodyModule &) = default ;
    FlightOrderDetailInfoResponseBodyModule& operator=(FlightOrderDetailInfoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayTradeNo_ != nullptr
        && this->bookUserId_ != nullptr && this->btripOrderId_ != nullptr && this->contactName_ != nullptr && this->contactPhone_ != nullptr && this->disOrderId_ != nullptr
        && this->extra_ != nullptr && this->flightInfoList_ != nullptr && this->lastPayTime_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr
        && this->promotionPrice_ != nullptr && this->settleAmount_ != nullptr && this->settleType_ != nullptr && this->status_ != nullptr && this->ticketInfoList_ != nullptr
        && this->totalBuildPrice_ != nullptr && this->totalOilPrice_ != nullptr && this->totalOrderPrice_ != nullptr && this->travelerInfoList_ != nullptr; };
    // alipayTradeNo Field Functions 
    bool hasAlipayTradeNo() const { return this->alipayTradeNo_ != nullptr;};
    void deleteAlipayTradeNo() { this->alipayTradeNo_ = nullptr;};
    inline string alipayTradeNo() const { DARABONBA_PTR_GET_DEFAULT(alipayTradeNo_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setAlipayTradeNo(string alipayTradeNo) { DARABONBA_PTR_SET_VALUE(alipayTradeNo_, alipayTradeNo) };


    // bookUserId Field Functions 
    bool hasBookUserId() const { return this->bookUserId_ != nullptr;};
    void deleteBookUserId() { this->bookUserId_ = nullptr;};
    inline string bookUserId() const { DARABONBA_PTR_GET_DEFAULT(bookUserId_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setBookUserId(string bookUserId) { DARABONBA_PTR_SET_VALUE(bookUserId_, bookUserId) };


    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string contactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // flightInfoList Field Functions 
    bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
    void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList> & flightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList>) };
    inline vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList> flightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList>) };
    inline FlightOrderDetailInfoResponseBodyModule& setFlightInfoList(const vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
    inline FlightOrderDetailInfoResponseBodyModule& setFlightInfoList(vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline FlightOrderDetailInfoResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline FlightOrderDetailInfoResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline int64_t promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setPromotionPrice(int64_t promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // settleAmount Field Functions 
    bool hasSettleAmount() const { return this->settleAmount_ != nullptr;};
    void deleteSettleAmount() { this->settleAmount_ = nullptr;};
    inline int64_t settleAmount() const { DARABONBA_PTR_GET_DEFAULT(settleAmount_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setSettleAmount(int64_t settleAmount) { DARABONBA_PTR_SET_VALUE(settleAmount_, settleAmount) };


    // settleType Field Functions 
    bool hasSettleType() const { return this->settleType_ != nullptr;};
    void deleteSettleType() { this->settleType_ = nullptr;};
    inline int32_t settleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
    inline FlightOrderDetailInfoResponseBodyModule& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderDetailInfoResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ticketInfoList Field Functions 
    bool hasTicketInfoList() const { return this->ticketInfoList_ != nullptr;};
    void deleteTicketInfoList() { this->ticketInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList> & ticketInfoList() const { DARABONBA_PTR_GET_CONST(ticketInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList>) };
    inline vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList> ticketInfoList() { DARABONBA_PTR_GET(ticketInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList>) };
    inline FlightOrderDetailInfoResponseBodyModule& setTicketInfoList(const vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList> & ticketInfoList) { DARABONBA_PTR_SET_VALUE(ticketInfoList_, ticketInfoList) };
    inline FlightOrderDetailInfoResponseBodyModule& setTicketInfoList(vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList> && ticketInfoList) { DARABONBA_PTR_SET_RVALUE(ticketInfoList_, ticketInfoList) };


    // totalBuildPrice Field Functions 
    bool hasTotalBuildPrice() const { return this->totalBuildPrice_ != nullptr;};
    void deleteTotalBuildPrice() { this->totalBuildPrice_ = nullptr;};
    inline int64_t totalBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(totalBuildPrice_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setTotalBuildPrice(int64_t totalBuildPrice) { DARABONBA_PTR_SET_VALUE(totalBuildPrice_, totalBuildPrice) };


    // totalOilPrice Field Functions 
    bool hasTotalOilPrice() const { return this->totalOilPrice_ != nullptr;};
    void deleteTotalOilPrice() { this->totalOilPrice_ = nullptr;};
    inline int64_t totalOilPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOilPrice_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setTotalOilPrice(int64_t totalOilPrice) { DARABONBA_PTR_SET_VALUE(totalOilPrice_, totalOilPrice) };


    // totalOrderPrice Field Functions 
    bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
    void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
    inline int64_t totalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
    inline FlightOrderDetailInfoResponseBodyModule& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


    // travelerInfoList Field Functions 
    bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
    void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList> & travelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList>) };
    inline vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList> travelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList>) };
    inline FlightOrderDetailInfoResponseBodyModule& setTravelerInfoList(const vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
    inline FlightOrderDetailInfoResponseBodyModule& setTravelerInfoList(vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


  protected:
    std::shared_ptr<string> alipayTradeNo_ = nullptr;
    std::shared_ptr<string> bookUserId_ = nullptr;
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> contactPhone_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailInfoResponseBodyModuleFlightInfoList>> flightInfoList_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int64_t> promotionPrice_ = nullptr;
    std::shared_ptr<int64_t> settleAmount_ = nullptr;
    std::shared_ptr<int32_t> settleType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailInfoResponseBodyModuleTicketInfoList>> ticketInfoList_ = nullptr;
    std::shared_ptr<int64_t> totalBuildPrice_ = nullptr;
    std::shared_ptr<int64_t> totalOilPrice_ = nullptr;
    std::shared_ptr<int64_t> totalOrderPrice_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailInfoResponseBodyModuleTravelerInfoList>> travelerInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
