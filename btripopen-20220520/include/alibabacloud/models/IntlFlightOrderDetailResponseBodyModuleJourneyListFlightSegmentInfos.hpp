// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEJOURNEYLISTFLIGHTSEGMENTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_stop_info_list, flightStopInfoList_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(luggage_direct_info, luggageDirectInfo_);
      DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(one_more, oneMore_);
      DARABONBA_PTR_TO_JSON(one_more_show, oneMoreShow_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_TO_JSON(segment_visa_remark, segmentVisaRemark_);
      DARABONBA_PTR_TO_JSON(share, share_);
      DARABONBA_PTR_TO_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(total_time, totalTime_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_share_info, flightShareInfo_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_stop_info_list, flightStopInfoList_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(luggage_direct_info, luggageDirectInfo_);
      DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(one_more, oneMore_);
      DARABONBA_PTR_FROM_JSON(one_more_show, oneMoreShow_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
      DARABONBA_PTR_FROM_JSON(segment_visa_remark, segmentVisaRemark_);
      DARABONBA_PTR_FROM_JSON(share, share_);
      DARABONBA_PTR_FROM_JSON(short_flight_size, shortFlightSize_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(total_time, totalTime_);
    };
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos() = default ;
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos(const IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos &) = default ;
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos(IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos &&) = default ;
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos() = default ;
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& operator=(const IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos &) = default ;
    IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& operator=(IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrTime_ != nullptr && this->depAirportInfo_ != nullptr
        && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr && this->duration_ != nullptr && this->flightNo_ != nullptr
        && this->flightShareInfo_ != nullptr && this->flightSize_ != nullptr && this->flightStopInfoList_ != nullptr && this->flightType_ != nullptr && this->luggageDirectInfo_ != nullptr
        && this->manufacturer_ != nullptr && this->mealDesc_ != nullptr && this->oneMore_ != nullptr && this->oneMoreShow_ != nullptr && this->segmentIndex_ != nullptr
        && this->segmentKey_ != nullptr && this->segmentVisaRemark_ != nullptr && this->share_ != nullptr && this->shortFlightSize_ != nullptr && this->stop_ != nullptr
        && this->totalTime_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setAirlineInfo(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setAirlineInfo(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setArrAirportInfo(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setArrAirportInfo(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDepAirportInfo(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDepAirportInfo(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightShareInfo Field Functions 
    bool hasFlightShareInfo() const { return this->flightShareInfo_ != nullptr;};
    void deleteFlightShareInfo() { this->flightShareInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo & flightShareInfo() const { DARABONBA_PTR_GET_CONST(flightShareInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo flightShareInfo() { DARABONBA_PTR_GET(flightShareInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightShareInfo(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo & flightShareInfo) { DARABONBA_PTR_SET_VALUE(flightShareInfo_, flightShareInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightShareInfo(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo && flightShareInfo) { DARABONBA_PTR_SET_RVALUE(flightShareInfo_, flightShareInfo) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightStopInfoList Field Functions 
    bool hasFlightStopInfoList() const { return this->flightStopInfoList_ != nullptr;};
    void deleteFlightStopInfoList() { this->flightStopInfoList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList> & flightStopInfoList() const { DARABONBA_PTR_GET_CONST(flightStopInfoList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList> flightStopInfoList() { DARABONBA_PTR_GET(flightStopInfoList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList>) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightStopInfoList(const vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList> & flightStopInfoList) { DARABONBA_PTR_SET_VALUE(flightStopInfoList_, flightStopInfoList) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightStopInfoList(vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList> && flightStopInfoList) { DARABONBA_PTR_SET_RVALUE(flightStopInfoList_, flightStopInfoList) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // luggageDirectInfo Field Functions 
    bool hasLuggageDirectInfo() const { return this->luggageDirectInfo_ != nullptr;};
    void deleteLuggageDirectInfo() { this->luggageDirectInfo_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo & luggageDirectInfo() const { DARABONBA_PTR_GET_CONST(luggageDirectInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo luggageDirectInfo() { DARABONBA_PTR_GET(luggageDirectInfo_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setLuggageDirectInfo(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo & luggageDirectInfo) { DARABONBA_PTR_SET_VALUE(luggageDirectInfo_, luggageDirectInfo) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setLuggageDirectInfo(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo && luggageDirectInfo) { DARABONBA_PTR_SET_RVALUE(luggageDirectInfo_, luggageDirectInfo) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // oneMore Field Functions 
    bool hasOneMore() const { return this->oneMore_ != nullptr;};
    void deleteOneMore() { this->oneMore_ = nullptr;};
    inline int32_t oneMore() const { DARABONBA_PTR_GET_DEFAULT(oneMore_, 0) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setOneMore(int32_t oneMore) { DARABONBA_PTR_SET_VALUE(oneMore_, oneMore) };


    // oneMoreShow Field Functions 
    bool hasOneMoreShow() const { return this->oneMoreShow_ != nullptr;};
    void deleteOneMoreShow() { this->oneMoreShow_ = nullptr;};
    inline string oneMoreShow() const { DARABONBA_PTR_GET_DEFAULT(oneMoreShow_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setOneMoreShow(string oneMoreShow) { DARABONBA_PTR_SET_VALUE(oneMoreShow_, oneMoreShow) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


    // segmentVisaRemark Field Functions 
    bool hasSegmentVisaRemark() const { return this->segmentVisaRemark_ != nullptr;};
    void deleteSegmentVisaRemark() { this->segmentVisaRemark_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark & segmentVisaRemark() const { DARABONBA_PTR_GET_CONST(segmentVisaRemark_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark segmentVisaRemark() { DARABONBA_PTR_GET(segmentVisaRemark_, Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setSegmentVisaRemark(const Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark & segmentVisaRemark) { DARABONBA_PTR_SET_VALUE(segmentVisaRemark_, segmentVisaRemark) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setSegmentVisaRemark(Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark && segmentVisaRemark) { DARABONBA_PTR_SET_RVALUE(segmentVisaRemark_, segmentVisaRemark) };


    // share Field Functions 
    bool hasShare() const { return this->share_ != nullptr;};
    void deleteShare() { this->share_ = nullptr;};
    inline bool share() const { DARABONBA_PTR_GET_DEFAULT(share_, false) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setShare(bool share) { DARABONBA_PTR_SET_VALUE(share_, share) };


    // shortFlightSize Field Functions 
    bool hasShortFlightSize() const { return this->shortFlightSize_ != nullptr;};
    void deleteShortFlightSize() { this->shortFlightSize_ = nullptr;};
    inline string shortFlightSize() const { DARABONBA_PTR_GET_DEFAULT(shortFlightSize_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setShortFlightSize(string shortFlightSize) { DARABONBA_PTR_SET_VALUE(shortFlightSize_, shortFlightSize) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline bool stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline string totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
    inline IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfos& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


  protected:
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightShareInfo> flightShareInfo_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosFlightStopInfoList>> flightStopInfoList_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosLuggageDirectInfo> luggageDirectInfo_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<int32_t> oneMore_ = nullptr;
    std::shared_ptr<string> oneMoreShow_ = nullptr;
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<string> segmentKey_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleJourneyListFlightSegmentInfosSegmentVisaRemark> segmentVisaRemark_ = nullptr;
    std::shared_ptr<bool> share_ = nullptr;
    std::shared_ptr<string> shortFlightSize_ = nullptr;
    std::shared_ptr<bool> stop_ = nullptr;
    std::shared_ptr<string> totalTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
