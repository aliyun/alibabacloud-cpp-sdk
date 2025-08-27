// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListAirlineInfo.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListArrAirportInfo.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListDepAirportInfo.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_TO_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_rule_list, flightRuleList_);
      DARABONBA_PTR_TO_JSON(flight_rule_list_str, flightRuleListStr_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(is_share, isShare_);
      DARABONBA_PTR_TO_JSON(is_stop, isStop_);
      DARABONBA_PTR_TO_JSON(is_transfer, isTransfer_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(product_type, productType_);
      DARABONBA_PTR_TO_JSON(product_type_desc, productTypeDesc_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(remained_seat_count, remainedSeatCount_);
      DARABONBA_PTR_TO_JSON(secret_params, secretParams_);
      DARABONBA_PTR_TO_JSON(segment_number, segmentNumber_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(basic_cabin_price, basicCabinPrice_);
      DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_rule_list, flightRuleList_);
      DARABONBA_PTR_FROM_JSON(flight_rule_list_str, flightRuleListStr_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(is_share, isShare_);
      DARABONBA_PTR_FROM_JSON(is_stop, isStop_);
      DARABONBA_PTR_FROM_JSON(is_transfer, isTransfer_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(product_type, productType_);
      DARABONBA_PTR_FROM_JSON(product_type_desc, productTypeDesc_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(remained_seat_count, remainedSeatCount_);
      DARABONBA_PTR_FROM_JSON(secret_params, secretParams_);
      DARABONBA_PTR_FROM_JSON(segment_number, segmentNumber_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightListingSearchResponseBodyModuleFlightList() = default ;
    FlightListingSearchResponseBodyModuleFlightList(const FlightListingSearchResponseBodyModuleFlightList &) = default ;
    FlightListingSearchResponseBodyModuleFlightList(FlightListingSearchResponseBodyModuleFlightList &&) = default ;
    FlightListingSearchResponseBodyModuleFlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightList() = default ;
    FlightListingSearchResponseBodyModuleFlightList& operator=(const FlightListingSearchResponseBodyModuleFlightList &) = default ;
    FlightListingSearchResponseBodyModuleFlightList& operator=(FlightListingSearchResponseBodyModuleFlightList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->arrDate_ != nullptr && this->basicCabinPrice_ != nullptr && this->buildPrice_ != nullptr && this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->carrierAirline_ != nullptr && this->carrierNo_ != nullptr && this->depAirportInfo_ != nullptr && this->depCityCode_ != nullptr
        && this->depDate_ != nullptr && this->discount_ != nullptr && this->flightNo_ != nullptr && this->flightRuleList_ != nullptr && this->flightRuleListStr_ != nullptr
        && this->flightSize_ != nullptr && this->flightType_ != nullptr && this->invoiceType_ != nullptr && this->isProtocol_ != nullptr && this->isShare_ != nullptr
        && this->isStop_ != nullptr && this->isTransfer_ != nullptr && this->mealDesc_ != nullptr && this->oilPrice_ != nullptr && this->otaItemId_ != nullptr
        && this->price_ != nullptr && this->productType_ != nullptr && this->productTypeDesc_ != nullptr && this->promotionPrice_ != nullptr && this->remainedSeatCount_ != nullptr
        && this->secretParams_ != nullptr && this->segmentNumber_ != nullptr && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr && this->stopDepTime_ != nullptr
        && this->ticketPrice_ != nullptr && this->totalPrice_ != nullptr && this->tripType_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setAirlineInfo(const Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setAirlineInfo(Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setArrAirportInfo(const Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setArrAirportInfo(Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // basicCabinPrice Field Functions 
    bool hasBasicCabinPrice() const { return this->basicCabinPrice_ != nullptr;};
    void deleteBasicCabinPrice() { this->basicCabinPrice_ = nullptr;};
    inline int32_t basicCabinPrice() const { DARABONBA_PTR_GET_DEFAULT(basicCabinPrice_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setBasicCabinPrice(int32_t basicCabinPrice) { DARABONBA_PTR_SET_VALUE(basicCabinPrice_, basicCabinPrice) };


    // buildPrice Field Functions 
    bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
    void deleteBuildPrice() { this->buildPrice_ = nullptr;};
    inline int32_t buildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setBuildPrice(int32_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // carrierAirline Field Functions 
    bool hasCarrierAirline() const { return this->carrierAirline_ != nullptr;};
    void deleteCarrierAirline() { this->carrierAirline_ = nullptr;};
    inline string carrierAirline() const { DARABONBA_PTR_GET_DEFAULT(carrierAirline_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setCarrierAirline(string carrierAirline) { DARABONBA_PTR_SET_VALUE(carrierAirline_, carrierAirline) };


    // carrierNo Field Functions 
    bool hasCarrierNo() const { return this->carrierNo_ != nullptr;};
    void deleteCarrierNo() { this->carrierNo_ = nullptr;};
    inline string carrierNo() const { DARABONBA_PTR_GET_DEFAULT(carrierNo_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setCarrierNo(string carrierNo) { DARABONBA_PTR_SET_VALUE(carrierNo_, carrierNo) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setDepAirportInfo(const Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline FlightListingSearchResponseBodyModuleFlightList& setDepAirportInfo(Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline int32_t discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setDiscount(int32_t discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightRuleList Field Functions 
    bool hasFlightRuleList() const { return this->flightRuleList_ != nullptr;};
    void deleteFlightRuleList() { this->flightRuleList_ = nullptr;};
    inline const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList> & flightRuleList() const { DARABONBA_PTR_GET_CONST(flightRuleList_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList>) };
    inline vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList> flightRuleList() { DARABONBA_PTR_GET(flightRuleList_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList>) };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightRuleList(const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList> & flightRuleList) { DARABONBA_PTR_SET_VALUE(flightRuleList_, flightRuleList) };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightRuleList(vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList> && flightRuleList) { DARABONBA_PTR_SET_RVALUE(flightRuleList_, flightRuleList) };


    // flightRuleListStr Field Functions 
    bool hasFlightRuleListStr() const { return this->flightRuleListStr_ != nullptr;};
    void deleteFlightRuleListStr() { this->flightRuleListStr_ = nullptr;};
    inline string flightRuleListStr() const { DARABONBA_PTR_GET_DEFAULT(flightRuleListStr_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightRuleListStr(string flightRuleListStr) { DARABONBA_PTR_SET_VALUE(flightRuleListStr_, flightRuleListStr) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline FlightListingSearchResponseBodyModuleFlightList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // isShare Field Functions 
    bool hasIsShare() const { return this->isShare_ != nullptr;};
    void deleteIsShare() { this->isShare_ = nullptr;};
    inline bool isShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
    inline FlightListingSearchResponseBodyModuleFlightList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


    // isStop Field Functions 
    bool hasIsStop() const { return this->isStop_ != nullptr;};
    void deleteIsStop() { this->isStop_ = nullptr;};
    inline bool isStop() const { DARABONBA_PTR_GET_DEFAULT(isStop_, false) };
    inline FlightListingSearchResponseBodyModuleFlightList& setIsStop(bool isStop) { DARABONBA_PTR_SET_VALUE(isStop_, isStop) };


    // isTransfer Field Functions 
    bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
    void deleteIsTransfer() { this->isTransfer_ = nullptr;};
    inline bool isTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, false) };
    inline FlightListingSearchResponseBodyModuleFlightList& setIsTransfer(bool isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // oilPrice Field Functions 
    bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
    void deleteOilPrice() { this->oilPrice_ = nullptr;};
    inline int32_t oilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setOilPrice(int32_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int32_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setPrice(int32_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline FlightListingSearchResponseBodyModuleFlightList& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productTypeDesc Field Functions 
    bool hasProductTypeDesc() const { return this->productTypeDesc_ != nullptr;};
    void deleteProductTypeDesc() { this->productTypeDesc_ = nullptr;};
    inline string productTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(productTypeDesc_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setProductTypeDesc(string productTypeDesc) { DARABONBA_PTR_SET_VALUE(productTypeDesc_, productTypeDesc) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline string promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setPromotionPrice(string promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // remainedSeatCount Field Functions 
    bool hasRemainedSeatCount() const { return this->remainedSeatCount_ != nullptr;};
    void deleteRemainedSeatCount() { this->remainedSeatCount_ = nullptr;};
    inline string remainedSeatCount() const { DARABONBA_PTR_GET_DEFAULT(remainedSeatCount_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setRemainedSeatCount(string remainedSeatCount) { DARABONBA_PTR_SET_VALUE(remainedSeatCount_, remainedSeatCount) };


    // secretParams Field Functions 
    bool hasSecretParams() const { return this->secretParams_ != nullptr;};
    void deleteSecretParams() { this->secretParams_ = nullptr;};
    inline string secretParams() const { DARABONBA_PTR_GET_DEFAULT(secretParams_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setSecretParams(string secretParams) { DARABONBA_PTR_SET_VALUE(secretParams_, secretParams) };


    // segmentNumber Field Functions 
    bool hasSegmentNumber() const { return this->segmentNumber_ != nullptr;};
    void deleteSegmentNumber() { this->segmentNumber_ = nullptr;};
    inline string segmentNumber() const { DARABONBA_PTR_GET_DEFAULT(segmentNumber_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setSegmentNumber(string segmentNumber) { DARABONBA_PTR_SET_VALUE(segmentNumber_, segmentNumber) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline string totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, "") };
    inline FlightListingSearchResponseBodyModuleFlightList& setTotalPrice(string totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightListingSearchResponseBodyModuleFlightList& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<int32_t> basicCabinPrice_ = nullptr;
    std::shared_ptr<int32_t> buildPrice_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> carrierAirline_ = nullptr;
    std::shared_ptr<string> carrierNo_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<int32_t> discount_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleList>> flightRuleList_ = nullptr;
    std::shared_ptr<string> flightRuleListStr_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<bool> isShare_ = nullptr;
    std::shared_ptr<bool> isStop_ = nullptr;
    std::shared_ptr<bool> isTransfer_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<int32_t> oilPrice_ = nullptr;
    std::shared_ptr<string> otaItemId_ = nullptr;
    std::shared_ptr<int32_t> price_ = nullptr;
    std::shared_ptr<int64_t> productType_ = nullptr;
    std::shared_ptr<string> productTypeDesc_ = nullptr;
    std::shared_ptr<string> promotionPrice_ = nullptr;
    std::shared_ptr<string> remainedSeatCount_ = nullptr;
    std::shared_ptr<string> secretParams_ = nullptr;
    std::shared_ptr<string> segmentNumber_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> totalPrice_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
