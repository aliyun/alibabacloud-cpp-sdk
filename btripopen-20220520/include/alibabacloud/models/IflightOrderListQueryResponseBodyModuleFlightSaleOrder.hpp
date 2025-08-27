// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDER_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList.hpp>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightSaleOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(book_type, bookType_);
      DARABONBA_PTR_TO_JSON(booker_info, bookerInfo_);
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(exceed_apply_id, exceedApplyId_);
      DARABONBA_PTR_TO_JSON(flight_order_insure_list, flightOrderInsureList_);
      DARABONBA_PTR_TO_JSON(flight_order_ticket_list, flightOrderTicketList_);
      DARABONBA_PTR_TO_JSON(flight_segment_list, flightSegmentList_);
      DARABONBA_PTR_TO_JSON(mix_pay, mixPay_);
      DARABONBA_PTR_TO_JSON(order_create_time, orderCreateTime_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_pay_time, orderPayTime_);
      DARABONBA_PTR_TO_JSON(order_reserve_price, orderReservePrice_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(book_type, bookType_);
      DARABONBA_PTR_FROM_JSON(booker_info, bookerInfo_);
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(exceed_apply_id, exceedApplyId_);
      DARABONBA_PTR_FROM_JSON(flight_order_insure_list, flightOrderInsureList_);
      DARABONBA_PTR_FROM_JSON(flight_order_ticket_list, flightOrderTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_segment_list, flightSegmentList_);
      DARABONBA_PTR_FROM_JSON(mix_pay, mixPay_);
      DARABONBA_PTR_FROM_JSON(order_create_time, orderCreateTime_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_pay_time, orderPayTime_);
      DARABONBA_PTR_FROM_JSON(order_reserve_price, orderReservePrice_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrder &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder(IFlightOrderListQueryResponseBodyModuleFlightSaleOrder &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightSaleOrder() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& operator=(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrder &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& operator=(IFlightOrderListQueryResponseBodyModuleFlightSaleOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->bookType_ != nullptr && this->bookerInfo_ != nullptr && this->corpPayPrice_ != nullptr && this->exceedApplyId_ != nullptr && this->flightOrderInsureList_ != nullptr
        && this->flightOrderTicketList_ != nullptr && this->flightSegmentList_ != nullptr && this->mixPay_ != nullptr && this->orderCreateTime_ != nullptr && this->orderId_ != nullptr
        && this->orderPayTime_ != nullptr && this->orderReservePrice_ != nullptr && this->orderStatus_ != nullptr && this->orderStatusDesc_ != nullptr && this->orderType_ != nullptr
        && this->passengerList_ != nullptr && this->payType_ != nullptr && this->personPayPrice_ != nullptr && this->serviceFee_ != nullptr && this->thirdPartApplyId_ != nullptr
        && this->tripType_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // bookType Field Functions 
    bool hasBookType() const { return this->bookType_ != nullptr;};
    void deleteBookType() { this->bookType_ = nullptr;};
    inline int32_t bookType() const { DARABONBA_PTR_GET_DEFAULT(bookType_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setBookType(int32_t bookType) { DARABONBA_PTR_SET_VALUE(bookType_, bookType) };


    // bookerInfo Field Functions 
    bool hasBookerInfo() const { return this->bookerInfo_ != nullptr;};
    void deleteBookerInfo() { this->bookerInfo_ = nullptr;};
    inline const Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo & bookerInfo() const { DARABONBA_PTR_GET_CONST(bookerInfo_, Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo) };
    inline Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo bookerInfo() { DARABONBA_PTR_GET(bookerInfo_, Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setBookerInfo(const Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo & bookerInfo) { DARABONBA_PTR_SET_VALUE(bookerInfo_, bookerInfo) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setBookerInfo(Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo && bookerInfo) { DARABONBA_PTR_SET_RVALUE(bookerInfo_, bookerInfo) };


    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int64_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // exceedApplyId Field Functions 
    bool hasExceedApplyId() const { return this->exceedApplyId_ != nullptr;};
    void deleteExceedApplyId() { this->exceedApplyId_ = nullptr;};
    inline string exceedApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedApplyId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setExceedApplyId(string exceedApplyId) { DARABONBA_PTR_SET_VALUE(exceedApplyId_, exceedApplyId) };


    // flightOrderInsureList Field Functions 
    bool hasFlightOrderInsureList() const { return this->flightOrderInsureList_ != nullptr;};
    void deleteFlightOrderInsureList() { this->flightOrderInsureList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList> & flightOrderInsureList() const { DARABONBA_PTR_GET_CONST(flightOrderInsureList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList> flightOrderInsureList() { DARABONBA_PTR_GET(flightOrderInsureList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightOrderInsureList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList> & flightOrderInsureList) { DARABONBA_PTR_SET_VALUE(flightOrderInsureList_, flightOrderInsureList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightOrderInsureList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList> && flightOrderInsureList) { DARABONBA_PTR_SET_RVALUE(flightOrderInsureList_, flightOrderInsureList) };


    // flightOrderTicketList Field Functions 
    bool hasFlightOrderTicketList() const { return this->flightOrderTicketList_ != nullptr;};
    void deleteFlightOrderTicketList() { this->flightOrderTicketList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList> & flightOrderTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList> flightOrderTicketList() { DARABONBA_PTR_GET(flightOrderTicketList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightOrderTicketList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList> & flightOrderTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderTicketList_, flightOrderTicketList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightOrderTicketList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList> && flightOrderTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderTicketList_, flightOrderTicketList) };


    // flightSegmentList Field Functions 
    bool hasFlightSegmentList() const { return this->flightSegmentList_ != nullptr;};
    void deleteFlightSegmentList() { this->flightSegmentList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList> & flightSegmentList() const { DARABONBA_PTR_GET_CONST(flightSegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList> flightSegmentList() { DARABONBA_PTR_GET(flightSegmentList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightSegmentList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList> & flightSegmentList) { DARABONBA_PTR_SET_VALUE(flightSegmentList_, flightSegmentList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setFlightSegmentList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList> && flightSegmentList) { DARABONBA_PTR_SET_RVALUE(flightSegmentList_, flightSegmentList) };


    // mixPay Field Functions 
    bool hasMixPay() const { return this->mixPay_ != nullptr;};
    void deleteMixPay() { this->mixPay_ = nullptr;};
    inline bool mixPay() const { DARABONBA_PTR_GET_DEFAULT(mixPay_, false) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setMixPay(bool mixPay) { DARABONBA_PTR_SET_VALUE(mixPay_, mixPay) };


    // orderCreateTime Field Functions 
    bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
    void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
    inline string orderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderCreateTime(string orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderPayTime Field Functions 
    bool hasOrderPayTime() const { return this->orderPayTime_ != nullptr;};
    void deleteOrderPayTime() { this->orderPayTime_ = nullptr;};
    inline string orderPayTime() const { DARABONBA_PTR_GET_DEFAULT(orderPayTime_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderPayTime(string orderPayTime) { DARABONBA_PTR_SET_VALUE(orderPayTime_, orderPayTime) };


    // orderReservePrice Field Functions 
    bool hasOrderReservePrice() const { return this->orderReservePrice_ != nullptr;};
    void deleteOrderReservePrice() { this->orderReservePrice_ = nullptr;};
    inline int64_t orderReservePrice() const { DARABONBA_PTR_GET_DEFAULT(orderReservePrice_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderReservePrice(int64_t orderReservePrice) { DARABONBA_PTR_SET_VALUE(orderReservePrice_, orderReservePrice) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setPassengerList(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setPassengerList(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // personPayPrice Field Functions 
    bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
    void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
    inline int64_t personPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setPersonPayPrice(int64_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrder& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<int32_t> bookType_ = nullptr;
    std::shared_ptr<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo> bookerInfo_ = nullptr;
    std::shared_ptr<int64_t> corpPayPrice_ = nullptr;
    std::shared_ptr<string> exceedApplyId_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderInsureList>> flightOrderInsureList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList>> flightOrderTicketList_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightSegmentList>> flightSegmentList_ = nullptr;
    std::shared_ptr<bool> mixPay_ = nullptr;
    std::shared_ptr<string> orderCreateTime_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> orderPayTime_ = nullptr;
    std::shared_ptr<int64_t> orderReservePrice_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderPassengerList>> passengerList_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<int64_t> personPayPrice_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
