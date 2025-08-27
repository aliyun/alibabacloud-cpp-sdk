// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEDESTFLIGHTINFODTOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2RESPONSEBODYMODULEDESTFLIGHTINFODTOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange.hpp>
#include <alibabacloud/models/FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_icon_url, airlineIconUrl_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(cabin_discount, cabinDiscount_);
      DARABONBA_PTR_TO_JSON(carrier_airline_code, carrierAirlineCode_);
      DARABONBA_PTR_TO_JSON(carrier_airline_icon_url, carrierAirlineIconUrl_);
      DARABONBA_PTR_TO_JSON(carrier_airline_name, carrierAirlineName_);
      DARABONBA_PTR_TO_JSON(carrier_flight_no, carrierFlightNo_);
      DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
      DARABONBA_PTR_TO_JSON(flight_type, flightType_);
      DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_TO_JSON(segmentI_id, segmentIId_);
      DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
      DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_icon_url, airlineIconUrl_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
      DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(cabin_discount, cabinDiscount_);
      DARABONBA_PTR_FROM_JSON(carrier_airline_code, carrierAirlineCode_);
      DARABONBA_PTR_FROM_JSON(carrier_airline_icon_url, carrierAirlineIconUrl_);
      DARABONBA_PTR_FROM_JSON(carrier_airline_name, carrierAirlineName_);
      DARABONBA_PTR_FROM_JSON(carrier_flight_no, carrierFlightNo_);
      DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
      DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
      DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
      DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
      DARABONBA_PTR_FROM_JSON(segmentI_id, segmentIId_);
      DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
      DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
      DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
      DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
    };
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS(const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS(FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS &&) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS() = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& operator=(const FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS &) = default ;
    FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& operator=(FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineIconUrl_ != nullptr && this->airlineName_ != nullptr && this->arrAirportCode_ != nullptr && this->arrAirportName_ != nullptr && this->arrCityCode_ != nullptr
        && this->arrCityName_ != nullptr && this->arrTerminal_ != nullptr && this->arrTime_ != nullptr && this->cabin_ != nullptr && this->cabinClass_ != nullptr
        && this->cabinClassName_ != nullptr && this->cabinDiscount_ != nullptr && this->carrierAirlineCode_ != nullptr && this->carrierAirlineIconUrl_ != nullptr && this->carrierAirlineName_ != nullptr
        && this->carrierFlightNo_ != nullptr && this->depAirportCode_ != nullptr && this->depAirportName_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr
        && this->depTerminal_ != nullptr && this->depTime_ != nullptr && this->flightChange_ != nullptr && this->flightNo_ != nullptr && this->flightType_ != nullptr
        && this->mealDesc_ != nullptr && this->segmentIId_ != nullptr && this->segmentPosition_ != nullptr && this->stopArrTime_ != nullptr && this->stopCity_ != nullptr
        && this->stopDepTime_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineIconUrl Field Functions 
    bool hasAirlineIconUrl() const { return this->airlineIconUrl_ != nullptr;};
    void deleteAirlineIconUrl() { this->airlineIconUrl_ = nullptr;};
    inline string airlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(airlineIconUrl_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setAirlineIconUrl(string airlineIconUrl) { DARABONBA_PTR_SET_VALUE(airlineIconUrl_, airlineIconUrl) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // arrAirportCode Field Functions 
    bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
    void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
    inline string arrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


    // arrAirportName Field Functions 
    bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
    void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
    inline string arrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTerminal Field Functions 
    bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
    void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
    inline string arrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // cabinDiscount Field Functions 
    bool hasCabinDiscount() const { return this->cabinDiscount_ != nullptr;};
    void deleteCabinDiscount() { this->cabinDiscount_ = nullptr;};
    inline int64_t cabinDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinDiscount_, 0L) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCabinDiscount(int64_t cabinDiscount) { DARABONBA_PTR_SET_VALUE(cabinDiscount_, cabinDiscount) };


    // carrierAirlineCode Field Functions 
    bool hasCarrierAirlineCode() const { return this->carrierAirlineCode_ != nullptr;};
    void deleteCarrierAirlineCode() { this->carrierAirlineCode_ = nullptr;};
    inline string carrierAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCarrierAirlineCode(string carrierAirlineCode) { DARABONBA_PTR_SET_VALUE(carrierAirlineCode_, carrierAirlineCode) };


    // carrierAirlineIconUrl Field Functions 
    bool hasCarrierAirlineIconUrl() const { return this->carrierAirlineIconUrl_ != nullptr;};
    void deleteCarrierAirlineIconUrl() { this->carrierAirlineIconUrl_ = nullptr;};
    inline string carrierAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineIconUrl_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCarrierAirlineIconUrl(string carrierAirlineIconUrl) { DARABONBA_PTR_SET_VALUE(carrierAirlineIconUrl_, carrierAirlineIconUrl) };


    // carrierAirlineName Field Functions 
    bool hasCarrierAirlineName() const { return this->carrierAirlineName_ != nullptr;};
    void deleteCarrierAirlineName() { this->carrierAirlineName_ = nullptr;};
    inline string carrierAirlineName() const { DARABONBA_PTR_GET_DEFAULT(carrierAirlineName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCarrierAirlineName(string carrierAirlineName) { DARABONBA_PTR_SET_VALUE(carrierAirlineName_, carrierAirlineName) };


    // carrierFlightNo Field Functions 
    bool hasCarrierFlightNo() const { return this->carrierFlightNo_ != nullptr;};
    void deleteCarrierFlightNo() { this->carrierFlightNo_ = nullptr;};
    inline string carrierFlightNo() const { DARABONBA_PTR_GET_DEFAULT(carrierFlightNo_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setCarrierFlightNo(string carrierFlightNo) { DARABONBA_PTR_SET_VALUE(carrierFlightNo_, carrierFlightNo) };


    // depAirportCode Field Functions 
    bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
    void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
    inline string depAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


    // depAirportName Field Functions 
    bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
    void deleteDepAirportName() { this->depAirportName_ = nullptr;};
    inline string depAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTerminal Field Functions 
    bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
    void deleteDepTerminal() { this->depTerminal_ = nullptr;};
    inline string depTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightChange Field Functions 
    bool hasFlightChange() const { return this->flightChange_ != nullptr;};
    void deleteFlightChange() { this->flightChange_ = nullptr;};
    inline const Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange & flightChange() const { DARABONBA_PTR_GET_CONST(flightChange_, Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange) };
    inline Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange flightChange() { DARABONBA_PTR_GET(flightChange_, Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setFlightChange(const Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange & flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setFlightChange(Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange && flightChange) { DARABONBA_PTR_SET_RVALUE(flightChange_, flightChange) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


    // flightType Field Functions 
    bool hasFlightType() const { return this->flightType_ != nullptr;};
    void deleteFlightType() { this->flightType_ = nullptr;};
    inline string flightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


    // mealDesc Field Functions 
    bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
    void deleteMealDesc() { this->mealDesc_ = nullptr;};
    inline string mealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


    // segmentIId Field Functions 
    bool hasSegmentIId() const { return this->segmentIId_ != nullptr;};
    void deleteSegmentIId() { this->segmentIId_ = nullptr;};
    inline string segmentIId() const { DARABONBA_PTR_GET_DEFAULT(segmentIId_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setSegmentIId(string segmentIId) { DARABONBA_PTR_SET_VALUE(segmentIId_, segmentIId) };


    // segmentPosition Field Functions 
    bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
    void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
    inline const Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition & segmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition) };
    inline Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition segmentPosition() { DARABONBA_PTR_GET(segmentPosition_, Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setSegmentPosition(const Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setSegmentPosition(Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


    // stopArrTime Field Functions 
    bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
    void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
    inline string stopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


    // stopCity Field Functions 
    bool hasStopCity() const { return this->stopCity_ != nullptr;};
    void deleteStopCity() { this->stopCity_ = nullptr;};
    inline string stopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


    // stopDepTime Field Functions 
    bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
    void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
    inline string stopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
    inline FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOS& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineIconUrl_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> arrAirportCode_ = nullptr;
    std::shared_ptr<string> arrAirportName_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTerminal_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<int64_t> cabinDiscount_ = nullptr;
    std::shared_ptr<string> carrierAirlineCode_ = nullptr;
    std::shared_ptr<string> carrierAirlineIconUrl_ = nullptr;
    std::shared_ptr<string> carrierAirlineName_ = nullptr;
    std::shared_ptr<string> carrierFlightNo_ = nullptr;
    std::shared_ptr<string> depAirportCode_ = nullptr;
    std::shared_ptr<string> depAirportName_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTerminal_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSFlightChange> flightChange_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
    std::shared_ptr<string> flightType_ = nullptr;
    std::shared_ptr<string> mealDesc_ = nullptr;
    std::shared_ptr<string> segmentIId_ = nullptr;
    std::shared_ptr<Models::FlightModifyOrderDetailV2ResponseBodyModuleDestFlightInfoDTOSSegmentPosition> segmentPosition_ = nullptr;
    std::shared_ptr<string> stopArrTime_ = nullptr;
    std::shared_ptr<string> stopCity_ = nullptr;
    std::shared_ptr<string> stopDepTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
