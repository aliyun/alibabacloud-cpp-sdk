// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULETRANSFERFLIGHTLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULETRANSFERFLIGHTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cabinClass, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabinClassName, cabinClassName_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_TO_JSON(flight_transfer_info, flightTransferInfo_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_TO_JSON(left_num, leftNum_);
      DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(price_info_d_t_o, priceInfoDTO_);
      DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
      DARABONBA_PTR_TO_JSON(share, share_);
      DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_TO_JSON(span_day, spanDay_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(transfer, transfer_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cabinClass, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabinClassName, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_FROM_JSON(flight_transfer_info, flightTransferInfo_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_FROM_JSON(left_num, leftNum_);
      DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(price_info_d_t_o, priceInfoDTO_);
      DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
      DARABONBA_PTR_FROM_JSON(share, share_);
      DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_FROM_JSON(span_day, spanDay_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(transfer, transfer_);
    };
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList(const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList(FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& operator=(const FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& operator=(FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->arrCityCode_ != nullptr && this->arrTime_ != nullptr && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr
        && this->depAirportInfo_ != nullptr && this->depCityCode_ != nullptr && this->depTime_ != nullptr && this->duration_ != nullptr && this->flightNo_ != nullptr
        && this->flightShareInfo_ != nullptr && this->flightSize_ != nullptr && this->flightStopInfo_ != nullptr && this->flightTransferInfo_ != nullptr && this->flightType_ != nullptr
        && this->journeySeq_ != nullptr && this->leftNum_ != nullptr && this->manufacturer_ != nullptr && this->mealDesc_ != nullptr && this->priceInfoDTO_ != nullptr
        && this->segmentSeq_ != nullptr && this->share_ != nullptr && this->shortFlightSize_ != nullptr && this->spanDay_ != nullptr && this->stop_ != nullptr
        && this->transfer_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setAirlineInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setAirlineInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setArrAirportInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setArrAirportInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setDepAirportInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setDepAirportInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightShareInfo Field Functions 
    bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
    void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo & flightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo flightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightShareInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightShareInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightStopInfo Field Functions 
    bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
    void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo & flightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo flightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightStopInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightStopInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


    // flightTransferInfo Field Functions 
    bool hasFlightTransferInfo() const { return this->flightTransferInfo_ != nullptr;};
    void deleteFlightTransferInfo() { this->flightTransferInfo_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo & flightTransferInfo() const { DARABONBA_PTR_GET_CONST(flightTransferInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo flightTransferInfo() { DARABONBA_PTR_GET(flightTransferInfo_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightTransferInfo(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo & flightTransferInfo) { DARABONBA_PTR_SET_VALUE(flightTransferInfo_, flightTransferInfo) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightTransferInfo(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo && flightTransferInfo) { DARABONBA_PTR_SET_RVALUE(flightTransferInfo_, flightTransferInfo) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // journeySeq Field Functions 
    bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
    void deleteJourneySeq() { this->journeySeq_ = nullptr;};
    inline int32_t journeySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


    // leftNum Field Functions 
    bool hasLeftNum() const { return this->leftNum_ != nullptr;};
    void deleteLeftNum() { this->leftNum_ = nullptr;};
    inline string leftNum() const { DARABONBA_PTR_GET_DEFAULT(leftNum_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setLeftNum(string leftNum) { DARABONBA_PTR_SET_VALUE(leftNum_, leftNum) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // priceInfoDTO Field Functions 
    bool hasPriceInfoDTO() const { return this->priceInfoDTO_ != nullptr;};
    void deletePriceInfoDTO() { this->priceInfoDTO_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO & priceInfoDTO() const { DARABONBA_PTR_GET_CONST(priceInfoDTO_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO priceInfoDTO() { DARABONBA_PTR_GET(priceInfoDTO_, Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setPriceInfoDTO(const Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO & priceInfoDTO) { DARABONBA_PTR_SET_VALUE(priceInfoDTO_, priceInfoDTO) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setPriceInfoDTO(Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO && priceInfoDTO) { DARABONBA_PTR_SET_RVALUE(priceInfoDTO_, priceInfoDTO) };


    // segmentSeq Field Functions 
    bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
    void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
    inline int32_t segmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool share() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // shortFlightSize Field Functions 
    bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
    void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
    inline string shortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


    // spanDay Field Functions 
    bool hasSpanDay() const { return this->spanDay_ != nullptr;};
    void deleteSpanDay() { this->spanDay_ = nullptr;};
    inline string spanDay() const { DARABONBA_PTR_GET_DEFAULT(spanDay_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setSpanDay(string spanDay) { DARABONBA_PTR_SET_VALUE(spanDay_, spanDay) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // transfer Field Functions 
    bool hasTransfer() const { return this->transfer_ != nullptr;};
    void deleteTransfer() { this->transfer_ = nullptr;};
    inline bool transfer() const { DARABONBA_PTR_GET_DEFAULT(transfer_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList& setTransfer(bool transfer) { DARABONBA_PTR_SET_VALUE(transfer_, transfer) };


  protected:
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightShareInfo> flightShareInfo_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightStopInfo> flightStopInfo_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListFlightTransferInfo> flightTransferInfo_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<int32_t> journeySeq_ = nullptr;
    std::shared_ptr<string> leftNum_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightListPriceInfoDTO> priceInfoDTO_ = nullptr;
    std::shared_ptr<int32_t> segmentSeq_ = nullptr;
    std::shared_ptr<bool> share_ = nullptr;
    std::shared_ptr<string> shortFlightSize_ = nullptr;
    std::shared_ptr<string> spanDay_ = nullptr;
    std::shared_ptr<bool> stop_ = nullptr;
    std::shared_ptr<bool> transfer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
