// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo.hpp>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList.hpp>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo.hpp>
#include <alibabacloud/models/TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListResponseBodyModuleFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(cabin_list, cabinList_);
      DARABONBA_PTR_TO_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_TO_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_size, flightSize_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_TO_JSON(is_share, isShare_);
      DARABONBA_PTR_TO_JSON(is_stop, isStop_);
      DARABONBA_PTR_TO_JSON(lowest_cabin, lowestCabin_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_class, lowestCabinClass_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_desc, lowestCabinDesc_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_num, lowestCabinNum_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_price, lowestCabinPrice_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(modify_flight_arr_time, modifyFlightArrTime_);
      DARABONBA_PTR_TO_JSON(modify_flight_dep_date, modifyFlightDepDate_);
      DARABONBA_PTR_TO_JSON(modify_flight_dep_time, modifyFlightDepTime_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(cabin_list, cabinList_);
      DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_size, flightSize_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
      DARABONBA_PTR_FROM_JSON(is_share, isShare_);
      DARABONBA_PTR_FROM_JSON(is_stop, isStop_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin, lowestCabin_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_class, lowestCabinClass_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_desc, lowestCabinDesc_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_num, lowestCabinNum_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_price, lowestCabinPrice_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(modify_flight_arr_time, modifyFlightArrTime_);
      DARABONBA_PTR_FROM_JSON(modify_flight_dep_date, modifyFlightDepDate_);
      DARABONBA_PTR_FROM_JSON(modify_flight_dep_time, modifyFlightDepTime_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
    };
    TicketChangingFlightListResponseBodyModuleFlightInfoList() = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoList(const TicketChangingFlightListResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoList(TicketChangingFlightListResponseBodyModuleFlightInfoList &&) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListResponseBodyModuleFlightInfoList() = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoList& operator=(const TicketChangingFlightListResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingFlightListResponseBodyModuleFlightInfoList& operator=(TicketChangingFlightListResponseBodyModuleFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->cabinList_ != nullptr && this->carrierAirline_ != nullptr && this->carrierNo_ != nullptr && this->depAirportInfo_ != nullptr
        && this->flightNo_ != nullptr && this->flightSize_ != nullptr && this->flightType_ != nullptr && this->isProtocol_ != nullptr && this->isShare_ != nullptr
        && this->isStop_ != nullptr && this->lowestCabin_ != nullptr && this->lowestCabinClass_ != nullptr && this->lowestCabinDesc_ != nullptr && this->lowestCabinNum_ != nullptr
        && this->lowestCabinPrice_ != nullptr && this->mealDesc_ != nullptr && this->modifyFlightArrTime_ != nullptr && this->modifyFlightDepDate_ != nullptr && this->modifyFlightDepTime_ != nullptr
        && this->sessionId_ != nullptr && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr && this->stopDepTime_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo) };
    inline Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setAirlineInfo(const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setAirlineInfo(Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo) };
    inline Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setArrAirportInfo(const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setArrAirportInfo(Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // cabinList Field Functions 
    bool hasCabinList() const { return this->cabinList_ != nullptr;};
    void deleteCabinList() { this->cabinList_ = nullptr;};
    inline const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList> & cabinList() const { DARABONBA_PTR_GET_CONST(cabinList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList>) };
    inline vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList> cabinList() { DARABONBA_PTR_GET(cabinList_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList>) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setCabinList(const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList> & cabinList) { DARABONBA_PTR_SET_VALUE(cabinList_, cabinList) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setCabinList(vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList> && cabinList) { DARABONBA_PTR_SET_RVALUE(cabinList_, cabinList) };


    // carrierAirline Field Functions 
    bool hasCarrierAirline() const { return this->carrierAirline_ != nullptr;};
    void deleteCarrierAirline() { this->carrierAirline_ = nullptr;};
    inline string carrierAirline() const { DARABONBA_PTR_GET_DEFAULT(carrierAirline_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setCarrierAirline(string carrierAirline) { DARABONBA_PTR_SET_VALUE(carrierAirline_, carrierAirline) };


    // carrierNo Field Functions 
    bool hasCarrierNo() const { return this->carrierNo_ != nullptr;};
    void deleteCarrierNo() { this->carrierNo_ = nullptr;};
    inline string carrierNo() const { DARABONBA_PTR_GET_DEFAULT(carrierNo_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setCarrierNo(string carrierNo) { DARABONBA_PTR_SET_VALUE(carrierNo_, carrierNo) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo) };
    inline Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setDepAirportInfo(const Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setDepAirportInfo(Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightSize Field Functions 
    bool hasFlightSize() const { return this->flightSize_ != nullptr;};
    void deleteFlightSize() { this->flightSize_ = nullptr;};
    inline string flightSize() const { DARABONBA_PTR_GET_DEFAULT(flightSize_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setFlightSize(string flightSize) { DARABONBA_PTR_SET_VALUE(flightSize_, flightSize) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // isProtocol Field Functions 
    bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
    void deleteIsProtocol() { this->isProtocol_ = nullptr;};
    inline bool isProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


    // isShare Field Functions 
    bool hasIsShare() const { return this->isShare_ != nullptr;};
    void deleteIsShare() { this->isShare_ = nullptr;};
    inline bool isShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


    // isStop Field Functions 
    bool hasIsStop() const { return this->isStop_ != nullptr;};
    void deleteIsStop() { this->isStop_ = nullptr;};
    inline bool isStop() const { DARABONBA_PTR_GET_DEFAULT(isStop_, false) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setIsStop(bool isStop) { DARABONBA_PTR_SET_VALUE(isStop_, isStop) };


    // lowestCabin Field Functions 
    bool hasLowestCabin() const { return this->lowestCabin_ != nullptr;};
    void deleteLowestCabin() { this->lowestCabin_ = nullptr;};
    inline string lowestCabin() const { DARABONBA_PTR_GET_DEFAULT(lowestCabin_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabin(string lowestCabin) { DARABONBA_PTR_SET_VALUE(lowestCabin_, lowestCabin) };


    // lowestCabinClass Field Functions 
    bool hasLowestCabinClass() const { return this->lowestCabinClass_ != nullptr;};
    void deleteLowestCabinClass() { this->lowestCabinClass_ = nullptr;};
    inline string lowestCabinClass() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinClass_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabinClass(string lowestCabinClass) { DARABONBA_PTR_SET_VALUE(lowestCabinClass_, lowestCabinClass) };


    // lowestCabinDesc Field Functions 
    bool hasLowestCabinDesc() const { return this->lowestCabinDesc_ != nullptr;};
    void deleteLowestCabinDesc() { this->lowestCabinDesc_ = nullptr;};
    inline string lowestCabinDesc() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinDesc_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabinDesc(string lowestCabinDesc) { DARABONBA_PTR_SET_VALUE(lowestCabinDesc_, lowestCabinDesc) };


    // lowestCabinNum Field Functions 
    bool hasLowestCabinNum() const { return this->lowestCabinNum_ != nullptr;};
    void deleteLowestCabinNum() { this->lowestCabinNum_ = nullptr;};
    inline string lowestCabinNum() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinNum_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabinNum(string lowestCabinNum) { DARABONBA_PTR_SET_VALUE(lowestCabinNum_, lowestCabinNum) };


    // lowestCabinPrice Field Functions 
    bool hasLowestCabinPrice() const { return this->lowestCabinPrice_ != nullptr;};
    void deleteLowestCabinPrice() { this->lowestCabinPrice_ = nullptr;};
    inline const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice> & lowestCabinPrice() const { DARABONBA_PTR_GET_CONST(lowestCabinPrice_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice>) };
    inline vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice> lowestCabinPrice() { DARABONBA_PTR_GET(lowestCabinPrice_, vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice>) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabinPrice(const vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice> & lowestCabinPrice) { DARABONBA_PTR_SET_VALUE(lowestCabinPrice_, lowestCabinPrice) };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setLowestCabinPrice(vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice> && lowestCabinPrice) { DARABONBA_PTR_SET_RVALUE(lowestCabinPrice_, lowestCabinPrice) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // modifyFlightArrTime Field Functions 
    bool hasModifyFlightArrTime() const { return this->modifyFlightArrTime_ != nullptr;};
    void deleteModifyFlightArrTime() { this->modifyFlightArrTime_ = nullptr;};
    inline string modifyFlightArrTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightArrTime_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setModifyFlightArrTime(string modifyFlightArrTime) { DARABONBA_PTR_SET_VALUE(modifyFlightArrTime_, modifyFlightArrTime) };


    // modifyFlightDepDate Field Functions 
    bool hasModifyFlightDepDate() const { return this->modifyFlightDepDate_ != nullptr;};
    void deleteModifyFlightDepDate() { this->modifyFlightDepDate_ = nullptr;};
    inline string modifyFlightDepDate() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepDate_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setModifyFlightDepDate(string modifyFlightDepDate) { DARABONBA_PTR_SET_VALUE(modifyFlightDepDate_, modifyFlightDepDate) };


    // modifyFlightDepTime Field Functions 
    bool hasModifyFlightDepTime() const { return this->modifyFlightDepTime_ != nullptr;};
    void deleteModifyFlightDepTime() { this->modifyFlightDepTime_ = nullptr;};
    inline string modifyFlightDepTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepTime_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setModifyFlightDepTime(string modifyFlightDepTime) { DARABONBA_PTR_SET_VALUE(modifyFlightDepTime_, modifyFlightDepTime) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline TicketChangingFlightListResponseBodyModuleFlightInfoList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


  protected:
    std::shared_ptr<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListCabinList>> cabinList_ = nullptr;
    std::shared_ptr<string> carrierAirline_ = nullptr;
    std::shared_ptr<string> carrierNo_ = nullptr;
    std::shared_ptr<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> flightSize_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<bool> isProtocol_ = nullptr;
    std::shared_ptr<bool> isShare_ = nullptr;
    std::shared_ptr<bool> isStop_ = nullptr;
    std::shared_ptr<string> lowestCabin_ = nullptr;
    std::shared_ptr<string> lowestCabinClass_ = nullptr;
    std::shared_ptr<string> lowestCabinDesc_ = nullptr;
    std::shared_ptr<string> lowestCabinNum_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingFlightListResponseBodyModuleFlightInfoListLowestCabinPrice>> lowestCabinPrice_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<string> modifyFlightArrTime_ = nullptr;
    std::shared_ptr<string> modifyFlightDepDate_ = nullptr;
    std::shared_ptr<string> modifyFlightDepTime_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
