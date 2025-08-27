// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_TO_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_TO_JSON(cabin_list, cabinList_);
      DARABONBA_PTR_TO_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_TO_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_TO_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(is_share, isShare_);
      DARABONBA_PTR_TO_JSON(lowest_cabin, lowestCabin_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_class, lowestCabinClass_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_desc, lowestCabinDesc_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_num, lowestCabinNum_);
      DARABONBA_PTR_TO_JSON(lowest_cabin_price, lowestCabinPrice_);
      DARABONBA_PTR_TO_JSON(modify_flight_arr_time, modifyFlightArrTime_);
      DARABONBA_PTR_TO_JSON(modify_flight_dep_date, modifyFlightDepDate_);
      DARABONBA_PTR_TO_JSON(modify_flight_dep_time, modifyFlightDepTime_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_info, airlineInfo_);
      DARABONBA_PTR_FROM_JSON(arr_airport_info, arrAirportInfo_);
      DARABONBA_PTR_FROM_JSON(cabin_list, cabinList_);
      DARABONBA_PTR_FROM_JSON(carrier_airline, carrierAirline_);
      DARABONBA_PTR_FROM_JSON(carrier_no, carrierNo_);
      DARABONBA_PTR_FROM_JSON(dep_airport_info, depAirportInfo_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(is_share, isShare_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin, lowestCabin_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_class, lowestCabinClass_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_desc, lowestCabinDesc_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_num, lowestCabinNum_);
      DARABONBA_PTR_FROM_JSON(lowest_cabin_price, lowestCabinPrice_);
      DARABONBA_PTR_FROM_JSON(modify_flight_arr_time, modifyFlightArrTime_);
      DARABONBA_PTR_FROM_JSON(modify_flight_dep_date, modifyFlightDepDate_);
      DARABONBA_PTR_FROM_JSON(modify_flight_dep_time, modifyFlightDepTime_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoList() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoList(const TicketChangingEnquiryResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoList(TicketChangingEnquiryResponseBodyModuleFlightInfoList &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoList() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoList& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoList &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoList& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineInfo_ != nullptr
        && this->arrAirportInfo_ != nullptr && this->cabinList_ != nullptr && this->carrierAirline_ != nullptr && this->carrierNo_ != nullptr && this->depAirportInfo_ != nullptr
        && this->depCityCode_ != nullptr && this->flightNo_ != nullptr && this->isShare_ != nullptr && this->lowestCabin_ != nullptr && this->lowestCabinClass_ != nullptr
        && this->lowestCabinDesc_ != nullptr && this->lowestCabinNum_ != nullptr && this->lowestCabinPrice_ != nullptr && this->modifyFlightArrTime_ != nullptr && this->modifyFlightDepDate_ != nullptr
        && this->modifyFlightDepTime_ != nullptr && this->sessionId_ != nullptr; };
    // airlineInfo Field Functions 
    bool hasAirlineInfo() const { return this->airlineInfo_ != nullptr;};
    void deleteAirlineInfo() { this->airlineInfo_ = nullptr;};
    inline const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo & airlineInfo() const { DARABONBA_PTR_GET_CONST(airlineInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo) };
    inline Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo airlineInfo() { DARABONBA_PTR_GET(airlineInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setAirlineInfo(const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo & airlineInfo) { DARABONBA_PTR_SET_VALUE(airlineInfo_, airlineInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setAirlineInfo(Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo && airlineInfo) { DARABONBA_PTR_SET_RVALUE(airlineInfo_, airlineInfo) };


    // arrAirportInfo Field Functions 
    bool hasArrAirportInfo() const { return this->arrAirportInfo_ != nullptr;};
    void deleteArrAirportInfo() { this->arrAirportInfo_ = nullptr;};
    inline const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo & arrAirportInfo() const { DARABONBA_PTR_GET_CONST(arrAirportInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo) };
    inline Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo arrAirportInfo() { DARABONBA_PTR_GET(arrAirportInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setArrAirportInfo(const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo & arrAirportInfo) { DARABONBA_PTR_SET_VALUE(arrAirportInfo_, arrAirportInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setArrAirportInfo(Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo && arrAirportInfo) { DARABONBA_PTR_SET_RVALUE(arrAirportInfo_, arrAirportInfo) };


    // cabinList Field Functions 
    bool hasCabinList() const { return this->cabinList_ != nullptr;};
    void deleteCabinList() { this->cabinList_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList> & cabinList() const { DARABONBA_PTR_GET_CONST(cabinList_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList> cabinList() { DARABONBA_PTR_GET(cabinList_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setCabinList(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList> & cabinList) { DARABONBA_PTR_SET_VALUE(cabinList_, cabinList) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setCabinList(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList> && cabinList) { DARABONBA_PTR_SET_RVALUE(cabinList_, cabinList) };


    // carrierAirline Field Functions 
    bool hasCarrierAirline() const { return this->carrierAirline_ != nullptr;};
    void deleteCarrierAirline() { this->carrierAirline_ = nullptr;};
    inline string carrierAirline() const { DARABONBA_PTR_GET_DEFAULT(carrierAirline_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setCarrierAirline(string carrierAirline) { DARABONBA_PTR_SET_VALUE(carrierAirline_, carrierAirline) };


    // carrierNo Field Functions 
    bool hasCarrierNo() const { return this->carrierNo_ != nullptr;};
    void deleteCarrierNo() { this->carrierNo_ = nullptr;};
    inline string carrierNo() const { DARABONBA_PTR_GET_DEFAULT(carrierNo_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setCarrierNo(string carrierNo) { DARABONBA_PTR_SET_VALUE(carrierNo_, carrierNo) };


    // depAirportInfo Field Functions 
    bool hasDepAirportInfo() const { return this->depAirportInfo_ != nullptr;};
    void deleteDepAirportInfo() { this->depAirportInfo_ = nullptr;};
    inline const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo & depAirportInfo() const { DARABONBA_PTR_GET_CONST(depAirportInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo) };
    inline Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo depAirportInfo() { DARABONBA_PTR_GET(depAirportInfo_, Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setDepAirportInfo(const Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo & depAirportInfo) { DARABONBA_PTR_SET_VALUE(depAirportInfo_, depAirportInfo) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setDepAirportInfo(Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo && depAirportInfo) { DARABONBA_PTR_SET_RVALUE(depAirportInfo_, depAirportInfo) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // isShare Field Functions 
    bool hasIsShare() const { return this->isShare_ != nullptr;};
    void deleteIsShare() { this->isShare_ = nullptr;};
    inline bool isShare() const { DARABONBA_PTR_GET_DEFAULT(isShare_, false) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setIsShare(bool isShare) { DARABONBA_PTR_SET_VALUE(isShare_, isShare) };


    // lowestCabin Field Functions 
    bool hasLowestCabin() const { return this->lowestCabin_ != nullptr;};
    void deleteLowestCabin() { this->lowestCabin_ = nullptr;};
    inline string lowestCabin() const { DARABONBA_PTR_GET_DEFAULT(lowestCabin_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabin(string lowestCabin) { DARABONBA_PTR_SET_VALUE(lowestCabin_, lowestCabin) };


    // lowestCabinClass Field Functions 
    bool hasLowestCabinClass() const { return this->lowestCabinClass_ != nullptr;};
    void deleteLowestCabinClass() { this->lowestCabinClass_ = nullptr;};
    inline string lowestCabinClass() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinClass_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabinClass(string lowestCabinClass) { DARABONBA_PTR_SET_VALUE(lowestCabinClass_, lowestCabinClass) };


    // lowestCabinDesc Field Functions 
    bool hasLowestCabinDesc() const { return this->lowestCabinDesc_ != nullptr;};
    void deleteLowestCabinDesc() { this->lowestCabinDesc_ = nullptr;};
    inline string lowestCabinDesc() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinDesc_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabinDesc(string lowestCabinDesc) { DARABONBA_PTR_SET_VALUE(lowestCabinDesc_, lowestCabinDesc) };


    // lowestCabinNum Field Functions 
    bool hasLowestCabinNum() const { return this->lowestCabinNum_ != nullptr;};
    void deleteLowestCabinNum() { this->lowestCabinNum_ = nullptr;};
    inline string lowestCabinNum() const { DARABONBA_PTR_GET_DEFAULT(lowestCabinNum_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabinNum(string lowestCabinNum) { DARABONBA_PTR_SET_VALUE(lowestCabinNum_, lowestCabinNum) };


    // lowestCabinPrice Field Functions 
    bool hasLowestCabinPrice() const { return this->lowestCabinPrice_ != nullptr;};
    void deleteLowestCabinPrice() { this->lowestCabinPrice_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice> & lowestCabinPrice() const { DARABONBA_PTR_GET_CONST(lowestCabinPrice_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice> lowestCabinPrice() { DARABONBA_PTR_GET(lowestCabinPrice_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabinPrice(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice> & lowestCabinPrice) { DARABONBA_PTR_SET_VALUE(lowestCabinPrice_, lowestCabinPrice) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setLowestCabinPrice(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice> && lowestCabinPrice) { DARABONBA_PTR_SET_RVALUE(lowestCabinPrice_, lowestCabinPrice) };


    // modifyFlightArrTime Field Functions 
    bool hasModifyFlightArrTime() const { return this->modifyFlightArrTime_ != nullptr;};
    void deleteModifyFlightArrTime() { this->modifyFlightArrTime_ = nullptr;};
    inline string modifyFlightArrTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightArrTime_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setModifyFlightArrTime(string modifyFlightArrTime) { DARABONBA_PTR_SET_VALUE(modifyFlightArrTime_, modifyFlightArrTime) };


    // modifyFlightDepDate Field Functions 
    bool hasModifyFlightDepDate() const { return this->modifyFlightDepDate_ != nullptr;};
    void deleteModifyFlightDepDate() { this->modifyFlightDepDate_ = nullptr;};
    inline string modifyFlightDepDate() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepDate_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setModifyFlightDepDate(string modifyFlightDepDate) { DARABONBA_PTR_SET_VALUE(modifyFlightDepDate_, modifyFlightDepDate) };


    // modifyFlightDepTime Field Functions 
    bool hasModifyFlightDepTime() const { return this->modifyFlightDepTime_ != nullptr;};
    void deleteModifyFlightDepTime() { this->modifyFlightDepTime_ = nullptr;};
    inline string modifyFlightDepTime() const { DARABONBA_PTR_GET_DEFAULT(modifyFlightDepTime_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setModifyFlightDepTime(string modifyFlightDepTime) { DARABONBA_PTR_SET_VALUE(modifyFlightDepTime_, modifyFlightDepTime) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListAirlineInfo> airlineInfo_ = nullptr;
    std::shared_ptr<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListArrAirportInfo> arrAirportInfo_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinList>> cabinList_ = nullptr;
    std::shared_ptr<string> carrierAirline_ = nullptr;
    std::shared_ptr<string> carrierNo_ = nullptr;
    std::shared_ptr<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListDepAirportInfo> depAirportInfo_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<bool> isShare_ = nullptr;
    std::shared_ptr<string> lowestCabin_ = nullptr;
    std::shared_ptr<string> lowestCabinClass_ = nullptr;
    std::shared_ptr<string> lowestCabinDesc_ = nullptr;
    std::shared_ptr<string> lowestCabinNum_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice>> lowestCabinPrice_ = nullptr;
    std::shared_ptr<string> modifyFlightArrTime_ = nullptr;
    std::shared_ptr<string> modifyFlightDepDate_ = nullptr;
    std::shared_ptr<string> modifyFlightDepTime_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
