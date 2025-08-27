// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULEFLIGHTJOURNEYINFOSFLIGHTSEGMENTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_ANY_TO_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(miles, miles_);
      DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
      DARABONBA_PTR_TO_JSON(one_more, oneMore_);
      DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(share, share_);
      DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(total_time, totalTime_);
      DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
      DARABONBA_PTR_TO_JSON(transfer_time_number, transferTimeNumber_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_ANY_FROM_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(miles, miles_);
      DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
      DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
      DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(share, share_);
      DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
      DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
      DARABONBA_PTR_FROM_JSON(transfer_time_number, transferTimeNumber_);
    };
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos &&) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos() = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& operator=(const FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos &) = default ;
    FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& operator=(FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrTime_ != nullptr && this->baggageDesc_ != nullptr
        && this->depAirportInfo_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr && this->duration_ != nullptr
        && this->extraInfo_ != nullptr && this->flightNo_ != nullptr && this->flightShareInfo_ != nullptr && this->flightSize_ != nullptr && this->flightStopInfo_ != nullptr
        && this->flightType_ != nullptr && this->manufacturer_ != nullptr && this->mealDesc_ != nullptr && this->miles_ != nullptr && this->onTimeRate_ != nullptr
        && this->oneMore_ != nullptr && this->oneMoreShow_ != nullptr && this->segmentIndex_ != nullptr && this->share_ != nullptr && this->shortFlightSize_ != nullptr
        && this->stop_ != nullptr && this->totalTime_ != nullptr && this->transferTime_ != nullptr && this->transferTimeNumber_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setAirlineInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setAirlineInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setArrAirportInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setArrAirportInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baggageDesc Field Functions 
    bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
    void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
    inline string baggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDepAirportInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDepAirportInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightShareInfo Field Functions 
    bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
    void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo & flightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo flightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightShareInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightShareInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightStopInfo Field Functions 
    bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
    void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
    inline const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo & flightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo) };
    inline Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo flightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightStopInfo(const Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightStopInfo(Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // miles Field Functions 
    bool hasMiles() const { return this->miles_ != nullptr;};
    void deleteMiles() { this->miles_ = nullptr;};
    inline int32_t miles() const { DARABONBA_PTR_GET_DEFAULT(miles_, 0) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setMiles(int32_t miles) { DARABONBA_PTR_SET_VALUE(miles_, miles) };


    // onTimeRate Field Functions 
    bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
    void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
    inline string onTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


    // oneMore Field Functions 
    bool hasOneMore() const { return this->oneMore_ != nullptr;};
    void deleteOneMore() { this->oneMore_ = nullptr;};
    inline int32_t oneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


    // oneMoreShow Field Functions 
    bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
    void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
    inline string oneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool share() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // shortFlightSize Field Functions 
    bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
    void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
    inline string shortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline string totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // transferTime Field Functions 
    bool hasTransferTime() const { return this->transferTime_ != nullptr;};
    void deleteTransferTime() { this->transferTime_ = nullptr;};
    inline string transferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, "") };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setTransferTime(string transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


    // transferTimeNumber Field Functions 
    bool hasTransferTimeNumber() const { return this->transferTimeNumber_ != nullptr;};
    void deleteTransferTimeNumber() { this->transferTimeNumber_ = nullptr;};
    inline int32_t transferTimeNumber() const { DARABONBA_PTR_GET_DEFAULT(transferTimeNumber_, 0) };
    inline FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfos& setTransferTimeNumber(int32_t transferTimeNumber) { DARABONBA_PTR_SET_VALUE(transferTimeNumber_, transferTimeNumber) };


  protected:
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baggageDesc_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    // duration
    std::shared_ptr<int32_t> duration_ = nullptr;
    Darabonba::Json extraInfo_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightShareInfo> flightShareInfo_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfosFlightSegmentInfosFlightStopInfo> flightStopInfo_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<int32_t> miles_ = nullptr;
    std::shared_ptr<string> onTimeRate_ = nullptr;
    std::shared_ptr<int32_t> oneMore_ = nullptr;
    std::shared_ptr<string> oneMoreShow_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<bool> share_ = nullptr;
    std::shared_ptr<string> shortFlightSize_ = nullptr;
    std::shared_ptr<bool> stop_ = nullptr;
    std::shared_ptr<string> totalTime_ = nullptr;
    std::shared_ptr<string> transferTime_ = nullptr;
    std::shared_ptr<int32_t> transferTimeNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
