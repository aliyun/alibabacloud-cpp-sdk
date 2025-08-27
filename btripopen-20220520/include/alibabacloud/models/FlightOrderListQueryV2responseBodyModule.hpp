// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleApprove.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleInsureInfoList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModulePriceInfoList.hpp>
#include <alibabacloud/models/FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(approve, approve_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(flight_order_ticket_list, flightOrderTicketList_);
      DARABONBA_PTR_TO_JSON(flight_order_user_fee_list, flightOrderUserFeeList_);
      DARABONBA_PTR_TO_JSON(flight_refund_apply_list, flightRefundApplyList_);
      DARABONBA_PTR_TO_JSON(flight_reshop_apply_list, flightReshopApplyList_);
      DARABONBA_PTR_TO_JSON(flight_segment_list, flightSegmentList_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(insure_info_list, insureInfoList_);
      DARABONBA_PTR_TO_JSON(mix_pay, mixPay_);
      DARABONBA_PTR_TO_JSON(order_reserve_amount, orderReserveAmount_);
      DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supplier, supplier_);
      DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_TO_JSON(ticket_corp_reserve_amount, ticketCorpReserveAmount_);
      DARABONBA_PTR_TO_JSON(ticket_person_reserve_amount, ticketPersonReserveAmount_);
      DARABONBA_PTR_TO_JSON(trip_mode, tripMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
      DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(approve, approve_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(flight_order_ticket_list, flightOrderTicketList_);
      DARABONBA_PTR_FROM_JSON(flight_order_user_fee_list, flightOrderUserFeeList_);
      DARABONBA_PTR_FROM_JSON(flight_refund_apply_list, flightRefundApplyList_);
      DARABONBA_PTR_FROM_JSON(flight_reshop_apply_list, flightReshopApplyList_);
      DARABONBA_PTR_FROM_JSON(flight_segment_list, flightSegmentList_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(insure_info_list, insureInfoList_);
      DARABONBA_PTR_FROM_JSON(mix_pay, mixPay_);
      DARABONBA_PTR_FROM_JSON(order_reserve_amount, orderReserveAmount_);
      DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supplier, supplier_);
      DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
      DARABONBA_PTR_FROM_JSON(ticket_corp_reserve_amount, ticketCorpReserveAmount_);
      DARABONBA_PTR_FROM_JSON(ticket_person_reserve_amount, ticketPersonReserveAmount_);
      DARABONBA_PTR_FROM_JSON(trip_mode, tripMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
      DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    FlightOrderListQueryV2ResponseBodyModule() = default ;
    FlightOrderListQueryV2ResponseBodyModule(const FlightOrderListQueryV2ResponseBodyModule &) = default ;
    FlightOrderListQueryV2ResponseBodyModule(FlightOrderListQueryV2ResponseBodyModule &&) = default ;
    FlightOrderListQueryV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModule() = default ;
    FlightOrderListQueryV2ResponseBodyModule& operator=(const FlightOrderListQueryV2ResponseBodyModule &) = default ;
    FlightOrderListQueryV2ResponseBodyModule& operator=(FlightOrderListQueryV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approve_ != nullptr
        && this->corpId_ != nullptr && this->corpName_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr && this->flightOrderTicketList_ != nullptr
        && this->flightOrderUserFeeList_ != nullptr && this->flightRefundApplyList_ != nullptr && this->flightReshopApplyList_ != nullptr && this->flightSegmentList_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->insureInfoList_ != nullptr && this->mixPay_ != nullptr && this->orderReserveAmount_ != nullptr
        && this->passengerCount_ != nullptr && this->payTime_ != nullptr && this->priceInfoList_ != nullptr && this->status_ != nullptr && this->supplier_ != nullptr
        && this->thirdpartItineraryId_ != nullptr && this->ticketCorpReserveAmount_ != nullptr && this->ticketPersonReserveAmount_ != nullptr && this->tripMode_ != nullptr && this->tripType_ != nullptr
        && this->userAffiliateList_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // approve Field Functions 
    bool hasApprove() const { return this->approve_ != nullptr;};
    void deleteApprove() { this->approve_ = nullptr;};
    inline const Models::FlightOrderListQueryV2ResponseBodyModuleApprove & approve() const { DARABONBA_PTR_GET_CONST(approve_, Models::FlightOrderListQueryV2ResponseBodyModuleApprove) };
    inline Models::FlightOrderListQueryV2ResponseBodyModuleApprove approve() { DARABONBA_PTR_GET(approve_, Models::FlightOrderListQueryV2ResponseBodyModuleApprove) };
    inline FlightOrderListQueryV2ResponseBodyModule& setApprove(const Models::FlightOrderListQueryV2ResponseBodyModuleApprove & approve) { DARABONBA_PTR_SET_VALUE(approve_, approve) };
    inline FlightOrderListQueryV2ResponseBodyModule& setApprove(Models::FlightOrderListQueryV2ResponseBodyModuleApprove && approve) { DARABONBA_PTR_SET_RVALUE(approve_, approve) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // flightOrderTicketList Field Functions 
    bool hasFlightOrderTicketList() const { return this->flightOrderTicketList_ != nullptr;};
    void deleteFlightOrderTicketList() { this->flightOrderTicketList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList> & flightOrderTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList> flightOrderTicketList() { DARABONBA_PTR_GET(flightOrderTicketList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightOrderTicketList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList> & flightOrderTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderTicketList_, flightOrderTicketList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightOrderTicketList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList> && flightOrderTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderTicketList_, flightOrderTicketList) };


    // flightOrderUserFeeList Field Functions 
    bool hasFlightOrderUserFeeList() const { return this->flightOrderUserFeeList_ != nullptr;};
    void deleteFlightOrderUserFeeList() { this->flightOrderUserFeeList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList> & flightOrderUserFeeList() const { DARABONBA_PTR_GET_CONST(flightOrderUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList> flightOrderUserFeeList() { DARABONBA_PTR_GET(flightOrderUserFeeList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightOrderUserFeeList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList> & flightOrderUserFeeList) { DARABONBA_PTR_SET_VALUE(flightOrderUserFeeList_, flightOrderUserFeeList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightOrderUserFeeList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList> && flightOrderUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightOrderUserFeeList_, flightOrderUserFeeList) };


    // flightRefundApplyList Field Functions 
    bool hasFlightRefundApplyList() const { return this->flightRefundApplyList_ != nullptr;};
    void deleteFlightRefundApplyList() { this->flightRefundApplyList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList> & flightRefundApplyList() const { DARABONBA_PTR_GET_CONST(flightRefundApplyList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList> flightRefundApplyList() { DARABONBA_PTR_GET(flightRefundApplyList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightRefundApplyList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList> & flightRefundApplyList) { DARABONBA_PTR_SET_VALUE(flightRefundApplyList_, flightRefundApplyList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightRefundApplyList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList> && flightRefundApplyList) { DARABONBA_PTR_SET_RVALUE(flightRefundApplyList_, flightRefundApplyList) };


    // flightReshopApplyList Field Functions 
    bool hasFlightReshopApplyList() const { return this->flightReshopApplyList_ != nullptr;};
    void deleteFlightReshopApplyList() { this->flightReshopApplyList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList> & flightReshopApplyList() const { DARABONBA_PTR_GET_CONST(flightReshopApplyList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList> flightReshopApplyList() { DARABONBA_PTR_GET(flightReshopApplyList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightReshopApplyList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList> & flightReshopApplyList) { DARABONBA_PTR_SET_VALUE(flightReshopApplyList_, flightReshopApplyList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightReshopApplyList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList> && flightReshopApplyList) { DARABONBA_PTR_SET_RVALUE(flightReshopApplyList_, flightReshopApplyList) };


    // flightSegmentList Field Functions 
    bool hasFlightSegmentList() const { return this->flightSegmentList_ != nullptr;};
    void deleteFlightSegmentList() { this->flightSegmentList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList> & flightSegmentList() const { DARABONBA_PTR_GET_CONST(flightSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList> flightSegmentList() { DARABONBA_PTR_GET(flightSegmentList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightSegmentList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList> & flightSegmentList) { DARABONBA_PTR_SET_VALUE(flightSegmentList_, flightSegmentList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setFlightSegmentList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList> && flightSegmentList) { DARABONBA_PTR_SET_RVALUE(flightSegmentList_, flightSegmentList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // insureInfoList Field Functions 
    bool hasInsureInfoList() const { return this->insureInfoList_ != nullptr;};
    void deleteInsureInfoList() { this->insureInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList> & insureInfoList() const { DARABONBA_PTR_GET_CONST(insureInfoList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList> insureInfoList() { DARABONBA_PTR_GET(insureInfoList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setInsureInfoList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList> & insureInfoList) { DARABONBA_PTR_SET_VALUE(insureInfoList_, insureInfoList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setInsureInfoList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList> && insureInfoList) { DARABONBA_PTR_SET_RVALUE(insureInfoList_, insureInfoList) };


    // mixPay Field Functions 
    bool hasMixPay() const { return this->mixPay_ != nullptr;};
    void deleteMixPay() { this->mixPay_ = nullptr;};
    inline bool mixPay() const { DARABONBA_PTR_GET_DEFAULT(mixPay_, false) };
    inline FlightOrderListQueryV2ResponseBodyModule& setMixPay(bool mixPay) { DARABONBA_PTR_SET_VALUE(mixPay_, mixPay) };


    // orderReserveAmount Field Functions 
    bool hasOrderReserveAmount() const { return this->orderReserveAmount_ != nullptr;};
    void deleteOrderReserveAmount() { this->orderReserveAmount_ = nullptr;};
    inline double orderReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(orderReserveAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setOrderReserveAmount(double orderReserveAmount) { DARABONBA_PTR_SET_VALUE(orderReserveAmount_, orderReserveAmount) };


    // passengerCount Field Functions 
    bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
    void deletePassengerCount() { this->passengerCount_ = nullptr;};
    inline int32_t passengerCount() const { DARABONBA_PTR_GET_DEFAULT(passengerCount_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setPassengerCount(int32_t passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // priceInfoList Field Functions 
    bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
    void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList> & priceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList> priceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setPriceInfoList(const vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setPriceInfoList(vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplier Field Functions 
    bool hasSupplier() const { return this->supplier_ != nullptr;};
    void deleteSupplier() { this->supplier_ = nullptr;};
    inline string supplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


    // thirdpartItineraryId Field Functions 
    bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
    void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
    inline const vector<string> & thirdpartItineraryId() const { DARABONBA_PTR_GET_CONST(thirdpartItineraryId_, vector<string>) };
    inline vector<string> thirdpartItineraryId() { DARABONBA_PTR_GET(thirdpartItineraryId_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setThirdpartItineraryId(const vector<string> & thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };
    inline FlightOrderListQueryV2ResponseBodyModule& setThirdpartItineraryId(vector<string> && thirdpartItineraryId) { DARABONBA_PTR_SET_RVALUE(thirdpartItineraryId_, thirdpartItineraryId) };


    // ticketCorpReserveAmount Field Functions 
    bool hasTicketCorpReserveAmount() const { return this->ticketCorpReserveAmount_ != nullptr;};
    void deleteTicketCorpReserveAmount() { this->ticketCorpReserveAmount_ = nullptr;};
    inline double ticketCorpReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketCorpReserveAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setTicketCorpReserveAmount(double ticketCorpReserveAmount) { DARABONBA_PTR_SET_VALUE(ticketCorpReserveAmount_, ticketCorpReserveAmount) };


    // ticketPersonReserveAmount Field Functions 
    bool hasTicketPersonReserveAmount() const { return this->ticketPersonReserveAmount_ != nullptr;};
    void deleteTicketPersonReserveAmount() { this->ticketPersonReserveAmount_ = nullptr;};
    inline double ticketPersonReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketPersonReserveAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setTicketPersonReserveAmount(double ticketPersonReserveAmount) { DARABONBA_PTR_SET_VALUE(ticketPersonReserveAmount_, ticketPersonReserveAmount) };


    // tripMode Field Functions 
    bool hasTripMode() const { return this->tripMode_ != nullptr;};
    void deleteTripMode() { this->tripMode_ = nullptr;};
    inline int32_t tripMode() const { DARABONBA_PTR_GET_DEFAULT(tripMode_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setTripMode(int32_t tripMode) { DARABONBA_PTR_SET_VALUE(tripMode_, tripMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


    // userAffiliateList Field Functions 
    bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
    void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
    inline const vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList> & userAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList>) };
    inline vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList> userAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList>) };
    inline FlightOrderListQueryV2ResponseBodyModule& setUserAffiliateList(const vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
    inline FlightOrderListQueryV2ResponseBodyModule& setUserAffiliateList(vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<Models::FlightOrderListQueryV2ResponseBodyModuleApprove> approve_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderTicketList>> flightOrderTicketList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightOrderUserFeeList>> flightOrderUserFeeList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightRefundApplyList>> flightRefundApplyList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightReshopApplyList>> flightReshopApplyList_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleFlightSegmentList>> flightSegmentList_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleInsureInfoList>> insureInfoList_ = nullptr;
    std::shared_ptr<bool> mixPay_ = nullptr;
    std::shared_ptr<double> orderReserveAmount_ = nullptr;
    std::shared_ptr<int32_t> passengerCount_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModulePriceInfoList>> priceInfoList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> supplier_ = nullptr;
    std::shared_ptr<vector<string>> thirdpartItineraryId_ = nullptr;
    std::shared_ptr<double> ticketCorpReserveAmount_ = nullptr;
    std::shared_ptr<double> ticketPersonReserveAmount_ = nullptr;
    std::shared_ptr<int32_t> tripMode_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderListQueryV2ResponseBodyModuleUserAffiliateList>> userAffiliateList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
