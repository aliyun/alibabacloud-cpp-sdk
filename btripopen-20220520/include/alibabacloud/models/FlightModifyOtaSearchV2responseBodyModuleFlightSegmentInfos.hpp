// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEFLIGHTSEGMENTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& obj) { 
      DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(share, share_);
      DARABONBA_PTR_TO_JSON(flight_shared_info, flightSharedInfo_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(share, share_);
      DARABONBA_PTR_FROM_JSON(flight_shared_info, flightSharedInfo_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(flight_stop_info, flightStopInfo_);
      DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& operator=(FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->journeySeq_ != nullptr
        && this->segmentSeq_ != nullptr && this->flightNo_ != nullptr && this->depCityCode_ != nullptr && this->arrCityCode_ != nullptr && this->depCityName_ != nullptr
        && this->arrCityName_ != nullptr && this->depAirportInfo_ != nullptr && this->arrAirportInfo_ != nullptr && this->depTime_ != nullptr && this->arrTime_ != nullptr
        && this->airlineInfo_ != nullptr && this->share_ != nullptr && this->flightSharedInfo_ != nullptr && this->stop_ != nullptr && this->flightStopInfo_ != nullptr
        && this->transferTime_ != nullptr && this->duration_ != nullptr && this->manufacturer_ != nullptr && this->flightType_ != nullptr && this->flightSize_ != nullptr
        && this->mealDesc_ != nullptr && this->onTimeRate_ != nullptr; };
    // journeySeq Field Functions 
    bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
    void deleteJourneySeq() { this->journeySeq_ = nullptr;};
    inline int32_t journeySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


    // segmentSeq Field Functions 
    bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
    void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
    inline int32_t segmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDepAirportInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDepAirportInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setArrAirportInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setArrAirportInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setAirlineInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setAirlineInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool share() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // flightSharedInfo Field Functions 
    bool hasFlightSharedInfo() const { return this->flightSharedInfo_ != nullptr;};
    void deleteFlightSharedInfo() { this->flightSharedInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo & flightSharedInfo() const { DARABONBA_PTR_GET_CONST(flightSharedInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo flightSharedInfo() { DARABONBA_PTR_GET(flightSharedInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightSharedInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo & flightSharedInfo) { DARABONBA_PTR_SET_VALUE(flightSharedInfo_, flightSharedInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightSharedInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo && flightSharedInfo) { DARABONBA_PTR_SET_RVALUE(flightSharedInfo_, flightSharedInfo) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // flightStopInfo Field Functions 
    bool hasFlightStopInfo() const { return this->flightStopInfo_ != nullptr;};
    void deleteFlightStopInfo() { this->flightStopInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo & flightStopInfo() const { DARABONBA_PTR_GET_CONST(flightStopInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo flightStopInfo() { DARABONBA_PTR_GET(flightStopInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightStopInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo & flightStopInfo) { DARABONBA_PTR_SET_VALUE(flightStopInfo_, flightStopInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightStopInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo && flightStopInfo) { DARABONBA_PTR_SET_RVALUE(flightStopInfo_, flightStopInfo) };


    // transferTime Field Functions 
    bool hasTransferTime() const { return this->transferTime_ != nullptr;};
    void deleteTransferTime() { this->transferTime_ = nullptr;};
    inline int32_t transferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // onTimeRate Field Functions 
    bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
    void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
    inline string onTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


  protected:
    std::shared_ptr<int32_t> journeySeq_ = nullptr;
    std::shared_ptr<int32_t> segmentSeq_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<bool> share_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightSharedInfo> flightSharedInfo_ = nullptr;
    std::shared_ptr<bool> stop_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfosFlightStopInfo> flightStopInfo_ = nullptr;
    std::shared_ptr<int32_t> transferTime_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<string> onTimeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
