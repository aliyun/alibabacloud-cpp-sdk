// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleContactInfo.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyList.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleOrderItemList.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModulePassengerList.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModulePassengerTicketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(booker_user_id, bookerUserId_);
      DARABONBA_PTR_TO_JSON(booker_user_name, bookerUserName_);
      DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
      DARABONBA_PTR_TO_JSON(close_time, closeTime_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_item_list, orderItemList_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(passenger_ticket_list, passengerTicketList_);
      DARABONBA_PTR_TO_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(success_time, successTime_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(total_tax_price, totalTaxPrice_);
      DARABONBA_PTR_TO_JSON(total_ticket_price, totalTicketPrice_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(booker_user_id, bookerUserId_);
      DARABONBA_PTR_FROM_JSON(booker_user_name, bookerUserName_);
      DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
      DARABONBA_PTR_FROM_JSON(close_time, closeTime_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_item_list, orderItemList_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(passenger_ticket_list, passengerTicketList_);
      DARABONBA_PTR_FROM_JSON(pay_latest_time, payLatestTime_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(success_time, successTime_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(total_tax_price, totalTaxPrice_);
      DARABONBA_PTR_FROM_JSON(total_ticket_price, totalTicketPrice_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightOrderDetailResponseBodyModule() = default ;
    IntlFlightOrderDetailResponseBodyModule(const IntlFlightOrderDetailResponseBodyModule &) = default ;
    IntlFlightOrderDetailResponseBodyModule(IntlFlightOrderDetailResponseBodyModule &&) = default ;
    IntlFlightOrderDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModule() = default ;
    IntlFlightOrderDetailResponseBodyModule& operator=(const IntlFlightOrderDetailResponseBodyModule &) = default ;
    IntlFlightOrderDetailResponseBodyModule& operator=(IntlFlightOrderDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookerUserId_ != nullptr
        && this->bookerUserName_ != nullptr && this->closeReason_ != nullptr && this->closeTime_ != nullptr && this->contactInfo_ != nullptr && this->journeyList_ != nullptr
        && this->orderId_ != nullptr && this->orderItemList_ != nullptr && this->orderStatus_ != nullptr && this->outOrderId_ != nullptr && this->passengerList_ != nullptr
        && this->passengerTicketList_ != nullptr && this->payLatestTime_ != nullptr && this->payStatus_ != nullptr && this->payTime_ != nullptr && this->payType_ != nullptr
        && this->successTime_ != nullptr && this->totalPrice_ != nullptr && this->totalTaxPrice_ != nullptr && this->totalTicketPrice_ != nullptr && this->tripType_ != nullptr; };
    // bookerUserId Field Functions 
    bool hasBookerUserId() const { return this->bookerUserId_ != nullptr;};
    void deleteBookerUserId() { this->bookerUserId_ = nullptr;};
    inline string bookerUserId() const { DARABONBA_PTR_GET_DEFAULT(bookerUserId_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setBookerUserId(string bookerUserId) { DARABONBA_PTR_SET_VALUE(bookerUserId_, bookerUserId) };


    // bookerUserName Field Functions 
    bool hasBookerUserName() const { return this->bookerUserName_ != nullptr;};
    void deleteBookerUserName() { this->bookerUserName_ = nullptr;};
    inline string bookerUserName() const { DARABONBA_PTR_GET_DEFAULT(bookerUserName_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setBookerUserName(string bookerUserName) { DARABONBA_PTR_SET_VALUE(bookerUserName_, bookerUserName) };


    // closeReason Field Functions 
    bool hasCloseReason() const { return this->closeReason_ != nullptr;};
    void deleteCloseReason() { this->closeReason_ = nullptr;};
    inline string closeReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


    // closeTime Field Functions 
    bool hasCloseTime() const { return this->closeTime_ != nullptr;};
    void deleteCloseTime() { this->closeTime_ = nullptr;};
    inline string closeTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setCloseTime(string closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleContactInfo & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, Models::IntlFlightOrderDetailResponseBodyModuleContactInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleContactInfo contactInfo() { DARABONBA_PTR_GET(contactInfo_, Models::IntlFlightOrderDetailResponseBodyModuleContactInfo) };
    inline IntlFlightOrderDetailResponseBodyModule& setContactInfo(const Models::IntlFlightOrderDetailResponseBodyModuleContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline IntlFlightOrderDetailResponseBodyModule& setContactInfo(Models::IntlFlightOrderDetailResponseBodyModuleContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList>) };
    inline IntlFlightOrderDetailResponseBodyModule& setJourneyList(const vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline IntlFlightOrderDetailResponseBodyModule& setJourneyList(vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderItemList Field Functions 
    bool hasOrderItemList() const { return this->orderItemList_ != nullptr;};
    void deleteOrderItemList() { this->orderItemList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList> & orderItemList() const { DARABONBA_PTR_GET_CONST(orderItemList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList> orderItemList() { DARABONBA_PTR_GET(orderItemList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList>) };
    inline IntlFlightOrderDetailResponseBodyModule& setOrderItemList(const vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList> & orderItemList) { DARABONBA_PTR_SET_VALUE(orderItemList_, orderItemList) };
    inline IntlFlightOrderDetailResponseBodyModule& setOrderItemList(vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList> && orderItemList) { DARABONBA_PTR_SET_RVALUE(orderItemList_, orderItemList) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline IntlFlightOrderDetailResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList>) };
    inline IntlFlightOrderDetailResponseBodyModule& setPassengerList(const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightOrderDetailResponseBodyModule& setPassengerList(vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // passengerTicketList Field Functions 
    bool hasPassengerTicketList() const { return this->passengerTicketList_ != nullptr;};
    void deletePassengerTicketList() { this->passengerTicketList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList> & passengerTicketList() const { DARABONBA_PTR_GET_CONST(passengerTicketList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList> passengerTicketList() { DARABONBA_PTR_GET(passengerTicketList_, vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList>) };
    inline IntlFlightOrderDetailResponseBodyModule& setPassengerTicketList(const vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList> & passengerTicketList) { DARABONBA_PTR_SET_VALUE(passengerTicketList_, passengerTicketList) };
    inline IntlFlightOrderDetailResponseBodyModule& setPassengerTicketList(vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList> && passengerTicketList) { DARABONBA_PTR_SET_RVALUE(passengerTicketList_, passengerTicketList) };


    // payLatestTime Field Functions 
    bool hasPayLatestTime() const { return this->payLatestTime_ != nullptr;};
    void deletePayLatestTime() { this->payLatestTime_ = nullptr;};
    inline string payLatestTime() const { DARABONBA_PTR_GET_DEFAULT(payLatestTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setPayLatestTime(string payLatestTime) { DARABONBA_PTR_SET_VALUE(payLatestTime_, payLatestTime) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline IntlFlightOrderDetailResponseBodyModule& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline IntlFlightOrderDetailResponseBodyModule& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // successTime Field Functions 
    bool hasSuccessTime() const { return this->successTime_ != nullptr;};
    void deleteSuccessTime() { this->successTime_ = nullptr;};
    inline string successTime() const { DARABONBA_PTR_GET_DEFAULT(successTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModule& setSuccessTime(string successTime) { DARABONBA_PTR_SET_VALUE(successTime_, successTime) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline IntlFlightOrderDetailResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // totalTaxPrice Field Functions 
    bool hasTotalTaxPrice() const { return this->totalTaxPrice_ != nullptr;};
    void deleteTotalTaxPrice() { this->totalTaxPrice_ = nullptr;};
    inline int64_t totalTaxPrice() const { DARABONBA_PTR_GET_DEFAULT(totalTaxPrice_, 0L) };
    inline IntlFlightOrderDetailResponseBodyModule& setTotalTaxPrice(int64_t totalTaxPrice) { DARABONBA_PTR_SET_VALUE(totalTaxPrice_, totalTaxPrice) };


    // totalTicketPrice Field Functions 
    bool hasTotalTicketPrice() const { return this->totalTicketPrice_ != nullptr;};
    void deleteTotalTicketPrice() { this->totalTicketPrice_ = nullptr;};
    inline int64_t totalTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(totalTicketPrice_, 0L) };
    inline IntlFlightOrderDetailResponseBodyModule& setTotalTicketPrice(int64_t totalTicketPrice) { DARABONBA_PTR_SET_VALUE(totalTicketPrice_, totalTicketPrice) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightOrderDetailResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> bookerUserId_ = nullptr;
    std::shared_ptr<string> bookerUserName_ = nullptr;
    std::shared_ptr<string> closeReason_ = nullptr;
    std::shared_ptr<string> closeTime_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleContactInfo> contactInfo_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyList>> journeyList_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemList>> orderItemList_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerList>> passengerList_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModulePassengerTicketList>> passengerTicketList_ = nullptr;
    std::shared_ptr<string> payLatestTime_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<string> successTime_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
    std::shared_ptr<int64_t> totalTaxPrice_ = nullptr;
    std::shared_ptr<int64_t> totalTicketPrice_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
