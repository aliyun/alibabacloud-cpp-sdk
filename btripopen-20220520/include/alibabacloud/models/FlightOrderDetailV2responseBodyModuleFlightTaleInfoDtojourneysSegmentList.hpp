// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTOJOURNEYSSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTOJOURNEYSSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange.hpp>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(air_line_code, airLineCode_);
      DARABONBA_PTR_TO_JSON(air_line_english_name, airLineEnglishName_);
      DARABONBA_PTR_TO_JSON(air_line_name, airLineName_);
      DARABONBA_PTR_TO_JSON(air_line_phone, airLinePhone_);
      DARABONBA_PTR_TO_JSON(airline_icon_url, airlineIconUrl_);
      DARABONBA_PTR_TO_JSON(airline_short_name, airlineShortName_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(arrive_terminal, arriveTerminal_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_and_discount, cabinAndDiscount_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(code_share, codeShare_);
      DARABONBA_PTR_TO_JSON(deadline_text, deadlineText_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(depart_terminal, departTerminal_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(fly_duration, flyDuration_);
      DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
      DARABONBA_PTR_TO_JSON(operating_air_short_name, operatingAirShortName_);
      DARABONBA_PTR_TO_JSON(operating_airline_code, operatingAirlineCode_);
      DARABONBA_PTR_TO_JSON(operating_airline_english_name, operatingAirlineEnglishName_);
      DARABONBA_PTR_TO_JSON(operating_airline_icon_url, operatingAirlineIconUrl_);
      DARABONBA_PTR_TO_JSON(operating_airline_name, operatingAirlineName_);
      DARABONBA_PTR_TO_JSON(operating_airline_phone, operatingAirlinePhone_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_TO_JSON(plane_type, planeType_);
      DARABONBA_PTR_TO_JSON(raise_price, raisePrice_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(air_line_code, airLineCode_);
      DARABONBA_PTR_FROM_JSON(air_line_english_name, airLineEnglishName_);
      DARABONBA_PTR_FROM_JSON(air_line_name, airLineName_);
      DARABONBA_PTR_FROM_JSON(air_line_phone, airLinePhone_);
      DARABONBA_PTR_FROM_JSON(airline_icon_url, airlineIconUrl_);
      DARABONBA_PTR_FROM_JSON(airline_short_name, airlineShortName_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(arrive_terminal, arriveTerminal_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_and_discount, cabinAndDiscount_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
      DARABONBA_PTR_FROM_JSON(deadline_text, deadlineText_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(depart_terminal, departTerminal_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(fly_duration, flyDuration_);
      DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
      DARABONBA_PTR_FROM_JSON(operating_air_short_name, operatingAirShortName_);
      DARABONBA_PTR_FROM_JSON(operating_airline_code, operatingAirlineCode_);
      DARABONBA_PTR_FROM_JSON(operating_airline_english_name, operatingAirlineEnglishName_);
      DARABONBA_PTR_FROM_JSON(operating_airline_icon_url, operatingAirlineIconUrl_);
      DARABONBA_PTR_FROM_JSON(operating_airline_name, operatingAirlineName_);
      DARABONBA_PTR_FROM_JSON(operating_airline_phone, operatingAirlinePhone_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_FROM_JSON(plane_type, planeType_);
      DARABONBA_PTR_FROM_JSON(raise_price, raisePrice_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
      DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
    };
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList &&) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& operator=(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& operator=(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airLineCode_ != nullptr
        && this->airLineEnglishName_ != nullptr && this->airLineName_ != nullptr && this->airLinePhone_ != nullptr && this->airlineIconUrl_ != nullptr && this->airlineShortName_ != nullptr
        && this->arrAirportCode_ != nullptr && this->arrAirportName_ != nullptr && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrTime_ != nullptr
        && this->arriveTerminal_ != nullptr && this->cabin_ != nullptr && this->cabinAndDiscount_ != nullptr && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr
        && this->codeShare_ != nullptr && this->deadlineText_ != nullptr && this->depAirportCode_ != nullptr && this->depAirportName_ != nullptr && this->depCityCode_ != nullptr
        && this->depCityName_ != nullptr && this->depDate_ != nullptr && this->depTime_ != nullptr && this->departTerminal_ != nullptr && this->discount_ != nullptr
        && this->flightChange_ != nullptr && this->flightNo_ != nullptr && this->flightType_ != nullptr && this->flyDuration_ != nullptr && this->manufacturer_ != nullptr
        && this->mealDesc_ != nullptr && this->onTimeRate_ != nullptr && this->operatingAirShortName_ != nullptr && this->operatingAirlineCode_ != nullptr && this->operatingAirlineEnglishName_ != nullptr
        && this->operatingAirlineIconUrl_ != nullptr && this->operatingAirlineName_ != nullptr && this->operatingAirlinePhone_ != nullptr && this->operatingFlightNo_ != nullptr && this->planeType_ != nullptr
        && this->raisePrice_ != nullptr && this->segmentId_ != nullptr && this->segmentIndex_ != nullptr && this->segmentPosition_ != nullptr && this->stopAirport_ != nullptr
        && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr && this->stopCityName_ != nullptr && this->stopDepTime_ != nullptr && this->stopQuantity_ != nullptr; };
    // airLineCode Field Functions 
    bool hasAirLineCode() const { return this->airLineCode_ != nullptr;};
    void deleteAirLineCode() { this->airLineCode_ = nullptr;};
    inline string airLineCode() const { DARABONBA_PTR_GET_DEFAULT(airLineCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirLineCode(string airLineCode) { DARABONBA_PTR_SET_VALUE(airLineCode_, airLineCode) };


    // airLineEnglishName Field Functions 
    bool hasAirLineEnglishName() const { return this->airLineEnglishName_ != nullptr;};
    void deleteAirLineEnglishName() { this->airLineEnglishName_ = nullptr;};
    inline string airLineEnglishName() const { DARABONBA_PTR_GET_DEFAULT(airLineEnglishName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirLineEnglishName(string airLineEnglishName) { DARABONBA_PTR_SET_VALUE(airLineEnglishName_, airLineEnglishName) };


    // airLineName Field Functions 
    bool hasAirLineName() const { return this->airLineName_ != nullptr;};
    void deleteAirLineName() { this->airLineName_ = nullptr;};
    inline string airLineName() const { DARABONBA_PTR_GET_DEFAULT(airLineName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirLineName(string airLineName) { DARABONBA_PTR_SET_VALUE(airLineName_, airLineName) };


    // airLinePhone Field Functions 
    bool hasAirLinePhone() const { return this->airLinePhone_ != nullptr;};
    void deleteAirLinePhone() { this->airLinePhone_ = nullptr;};
    inline string airLinePhone() const { DARABONBA_PTR_GET_DEFAULT(airLinePhone_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirLinePhone(string airLinePhone) { DARABONBA_PTR_SET_VALUE(airLinePhone_, airLinePhone) };


    // airlineIconUrl Field Functions 
    bool hasAirlineIconUrl() const { return this->airlineIconUrl_ != nullptr;};
    void deleteAirlineIconUrl() { this->airlineIconUrl_ = nullptr;};
    inline string airlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(airlineIconUrl_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirlineIconUrl(string airlineIconUrl) { DARABONBA_PTR_SET_VALUE(airlineIconUrl_, airlineIconUrl) };


    // airlineShortName Field Functions 
    bool hasAirlineShortName() const { return this->airlineShortName_ != nullptr;};
    void deleteAirlineShortName() { this->airlineShortName_ = nullptr;};
    inline string airlineShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineShortName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setAirlineShortName(string airlineShortName) { DARABONBA_PTR_SET_VALUE(airlineShortName_, airlineShortName) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrAirportName Field Functions 
    bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
    void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
    inline string arrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // arriveTerminal Field Functions 
    bool hasArriveTerminal() const { return this->arriveTerminal_ != nullptr;};
    void deleteArriveTerminal() { this->arriveTerminal_ = nullptr;};
    inline string arriveTerminal() const { DARABONBA_PTR_GET_DEFAULT(arriveTerminal_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setArriveTerminal(string arriveTerminal) { DARABONBA_PTR_SET_VALUE(arriveTerminal_, arriveTerminal) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinAndDiscount Field Functions 
    bool hasCabinAndDiscount() const { return this->cabinAndDiscount_ != nullptr;};
    void deleteCabinAndDiscount() { this->cabinAndDiscount_ = nullptr;};
    inline string cabinAndDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinAndDiscount_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setCabinAndDiscount(string cabinAndDiscount) { DARABONBA_PTR_SET_VALUE(cabinAndDiscount_, cabinAndDiscount) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // codeShare Field Functions 
    bool hasCodeShare() const { return this->codeShare_ != nullptr;};
    void deleteCodeShare() { this->codeShare_ = nullptr;};
    inline bool codeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


    // deadlineText Field Functions 
    bool hasDeadlineText() const { return this->deadlineText_ != nullptr;};
    void deleteDeadlineText() { this->deadlineText_ = nullptr;};
    inline string deadlineText() const { DARABONBA_PTR_GET_DEFAULT(deadlineText_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDeadlineText(string deadlineText) { DARABONBA_PTR_SET_VALUE(deadlineText_, deadlineText) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depAirportName Field Functions 
    bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
    void deleteDepAirportName() { this->depAirportName_ = nullptr;};
    inline string depAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // departTerminal Field Functions 
    bool hasDepartTerminal() const { return this->departTerminal_ != nullptr;};
    void deleteDepartTerminal() { this->departTerminal_ = nullptr;};
    inline string departTerminal() const { DARABONBA_PTR_GET_DEFAULT(departTerminal_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDepartTerminal(string departTerminal) { DARABONBA_PTR_SET_VALUE(departTerminal_, departTerminal) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline double discount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0.0) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setDiscount(double discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // flightChange Field Functions 
    bool hasFlightChange() const { return this->flightChange_ != nullptr;};
    void deleteFlightChange() { this->flightChange_ = nullptr;};
    inline const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange & flightChange() const { DARABONBA_PTR_GET_CONST(flightChange_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange) };
    inline Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange flightChange() { DARABONBA_PTR_GET(flightChange_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setFlightChange(const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange & flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setFlightChange(Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange && flightChange) { DARABONBA_PTR_SET_RVALUE(flightChange_, flightChange) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // flyDuration Field Functions 
    bool hasFlyDuration() const { return this->flyDuration_ != nullptr;};
    void deleteFlyDuration() { this->flyDuration_ = nullptr;};
    inline int32_t flyDuration() const { DARABONBA_PTR_GET_DEFAULT(flyDuration_, 0) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setFlyDuration(int32_t flyDuration) { DARABONBA_PTR_SET_VALUE(flyDuration_, flyDuration) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // onTimeRate Field Functions 
    bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
    void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
    inline string onTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


    // operatingAirShortName Field Functions 
    bool hasOperatingAirShortName() const { return this->operatingAirShortName_ != nullptr;};
    void deleteOperatingAirShortName() { this->operatingAirShortName_ = nullptr;};
    inline string operatingAirShortName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirShortName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirShortName(string operatingAirShortName) { DARABONBA_PTR_SET_VALUE(operatingAirShortName_, operatingAirShortName) };


    // operatingAirlineCode Field Functions 
    bool hasOperatingAirlineCode() const { return this->operatingAirlineCode_ != nullptr;};
    void deleteOperatingAirlineCode() { this->operatingAirlineCode_ = nullptr;};
    inline string operatingAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirlineCode(string operatingAirlineCode) { DARABONBA_PTR_SET_VALUE(operatingAirlineCode_, operatingAirlineCode) };


    // operatingAirlineEnglishName Field Functions 
    bool hasOperatingAirlineEnglishName() const { return this->operatingAirlineEnglishName_ != nullptr;};
    void deleteOperatingAirlineEnglishName() { this->operatingAirlineEnglishName_ = nullptr;};
    inline string operatingAirlineEnglishName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineEnglishName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirlineEnglishName(string operatingAirlineEnglishName) { DARABONBA_PTR_SET_VALUE(operatingAirlineEnglishName_, operatingAirlineEnglishName) };


    // operatingAirlineIconUrl Field Functions 
    bool hasOperatingAirlineIconUrl() const { return this->operatingAirlineIconUrl_ != nullptr;};
    void deleteOperatingAirlineIconUrl() { this->operatingAirlineIconUrl_ = nullptr;};
    inline string operatingAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineIconUrl_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirlineIconUrl(string operatingAirlineIconUrl) { DARABONBA_PTR_SET_VALUE(operatingAirlineIconUrl_, operatingAirlineIconUrl) };


    // operatingAirlineName Field Functions 
    bool hasOperatingAirlineName() const { return this->operatingAirlineName_ != nullptr;};
    void deleteOperatingAirlineName() { this->operatingAirlineName_ = nullptr;};
    inline string operatingAirlineName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirlineName(string operatingAirlineName) { DARABONBA_PTR_SET_VALUE(operatingAirlineName_, operatingAirlineName) };


    // operatingAirlinePhone Field Functions 
    bool hasOperatingAirlinePhone() const { return this->operatingAirlinePhone_ != nullptr;};
    void deleteOperatingAirlinePhone() { this->operatingAirlinePhone_ = nullptr;};
    inline string operatingAirlinePhone() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlinePhone_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingAirlinePhone(string operatingAirlinePhone) { DARABONBA_PTR_SET_VALUE(operatingAirlinePhone_, operatingAirlinePhone) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


    // planeType Field Functions 
    bool hasPlaneType() const { return this->planeType_ != nullptr;};
    void deletePlaneType() { this->planeType_ = nullptr;};
    inline string planeType() const { DARABONBA_PTR_GET_DEFAULT(planeType_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setPlaneType(string planeType) { DARABONBA_PTR_SET_VALUE(planeType_, planeType) };


    // raisePrice Field Functions 
    bool hasRaisePrice() const { return this->raisePrice_ != nullptr;};
    void deleteRaisePrice() { this->raisePrice_ = nullptr;};
    inline int64_t raisePrice() const { DARABONBA_PTR_GET_DEFAULT(raisePrice_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setRaisePrice(int64_t raisePrice) { DARABONBA_PTR_SET_VALUE(raisePrice_, raisePrice) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string segmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // segmentIndex Field Functions 
    bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
    void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
    inline int32_t segmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition) };
    inline Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setSegmentPosition(const Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setSegmentPosition(Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // stopAirport Field Functions 
    bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
    void deleteStopAirport() { this->stopAirport_ = nullptr;};
    inline string stopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopCityName Field Functions 
    bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
    void deleteStopCityName() { this->stopCityName_ = nullptr;};
    inline string stopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


    // stopQuantity Field Functions 
    bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
    void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
    inline int32_t stopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


  protected:
    std::shared_ptr<string> airLineCode_ = nullptr;
    std::shared_ptr<string> airLineEnglishName_ = nullptr;
    std::shared_ptr<string> airLineName_ = nullptr;
    std::shared_ptr<string> airLinePhone_ = nullptr;
    std::shared_ptr<string> airlineIconUrl_ = nullptr;
    std::shared_ptr<string> airlineShortName_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrAirportName_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> arriveTerminal_ = nullptr;
    // cabin
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinAndDiscount_ = nullptr;
    // cabin_class
    std::shared_ptr<string> cabinClass_ = nullptr;
    // cabin_class_name
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<bool> codeShare_ = nullptr;
    std::shared_ptr<string> deadlineText_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depAirportName_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> departTerminal_ = nullptr;
    std::shared_ptr<double> discount_ = nullptr;
    std::shared_ptr<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListFlightChange> flightChange_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<int32_t> flyDuration_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<string> onTimeRate_ = nullptr;
    std::shared_ptr<string> operatingAirShortName_ = nullptr;
    std::shared_ptr<string> operatingAirlineCode_ = nullptr;
    std::shared_ptr<string> operatingAirlineEnglishName_ = nullptr;
    std::shared_ptr<string> operatingAirlineIconUrl_ = nullptr;
    std::shared_ptr<string> operatingAirlineName_ = nullptr;
    std::shared_ptr<string> operatingAirlinePhone_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
    std::shared_ptr<string> planeType_ = nullptr;
    std::shared_ptr<int64_t> raisePrice_ = nullptr;
    std::shared_ptr<string> segmentId_ = nullptr;
    // segmentIndex
    std::shared_ptr<int32_t> segmentIndex_ = nullptr;
    std::shared_ptr<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentListSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<string> stopAirport_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopCityName_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
    std::shared_ptr<int32_t> stopQuantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
