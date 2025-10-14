// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONJOURNEYLISTSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONJOURNEYLISTSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataSolutionJourneyListSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataSolutionJourneyListSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
      DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_TO_JSON(availability, availability_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(code_share, codeShare_);
      DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
      DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
      DARABONBA_PTR_TO_JSON(equip_type, equipType_);
      DARABONBA_PTR_TO_JSON(flight_duration, flightDuration_);
      DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no_int, marketingFlightNoInt_);
      DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
      DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataSolutionJourneyListSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
      DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_FROM_JSON(availability, availability_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
      DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
      DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
      DARABONBA_PTR_FROM_JSON(equip_type, equipType_);
      DARABONBA_PTR_FROM_JSON(flight_duration, flightDuration_);
      DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no_int, marketingFlightNoInt_);
      DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
      DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
    };
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList() = default ;
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList(const OrderDetailResponseBodyDataSolutionJourneyListSegmentList &) = default ;
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList(OrderDetailResponseBodyDataSolutionJourneyListSegmentList &&) = default ;
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataSolutionJourneyListSegmentList() = default ;
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList& operator=(const OrderDetailResponseBodyDataSolutionJourneyListSegmentList &) = default ;
    OrderDetailResponseBodyDataSolutionJourneyListSegmentList& operator=(OrderDetailResponseBodyDataSolutionJourneyListSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && return this->arrivalCity_ == nullptr && return this->arrivalTerminal_ == nullptr && return this->arrivalTime_ == nullptr && return this->availability_ == nullptr && return this->cabin_ == nullptr
        && return this->cabinClass_ == nullptr && return this->codeShare_ == nullptr && return this->departureAirport_ == nullptr && return this->departureCity_ == nullptr && return this->departureTerminal_ == nullptr
        && return this->departureTime_ == nullptr && return this->equipType_ == nullptr && return this->flightDuration_ == nullptr && return this->marketingAirline_ == nullptr && return this->marketingFlightNo_ == nullptr
        && return this->marketingFlightNoInt_ == nullptr && return this->operatingAirline_ == nullptr && return this->operatingFlightNo_ == nullptr && return this->segmentId_ == nullptr && return this->stopCityList_ == nullptr
        && return this->stopQuantity_ == nullptr; };
    // arrivalAirport Field Functions 
    bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
    void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
    inline string arrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // arrivalTerminal Field Functions 
    bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
    void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
    inline string arrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


    // arrivalTime Field Functions 
    bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
    void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
    inline string arrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


    // availability Field Functions 
    bool hasAvailability() const { return this->availability_ != nullptr;};
    void deleteAvailability() { this->availability_ = nullptr;};
    inline string availability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // codeShare Field Functions 
    bool hasCodeShare() const { return this->codeShare_ != nullptr;};
    void deleteCodeShare() { this->codeShare_ = nullptr;};
    inline bool codeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


    // departureAirport Field Functions 
    bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
    void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
    inline string departureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureTerminal Field Functions 
    bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
    void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
    inline string departureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


    // departureTime Field Functions 
    bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
    void deleteDepartureTime() { this->departureTime_ = nullptr;};
    inline string departureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


    // equipType Field Functions 
    bool hasEquipType() const { return this->equipType_ != nullptr;};
    void deleteEquipType() { this->equipType_ = nullptr;};
    inline string equipType() const { DARABONBA_PTR_GET_DEFAULT(equipType_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setEquipType(string equipType) { DARABONBA_PTR_SET_VALUE(equipType_, equipType) };


    // flightDuration Field Functions 
    bool hasFlightDuration() const { return this->flightDuration_ != nullptr;};
    void deleteFlightDuration() { this->flightDuration_ = nullptr;};
    inline int32_t flightDuration() const { DARABONBA_PTR_GET_DEFAULT(flightDuration_, 0) };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setFlightDuration(int32_t flightDuration) { DARABONBA_PTR_SET_VALUE(flightDuration_, flightDuration) };


    // marketingAirline Field Functions 
    bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
    void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
    inline string marketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


    // marketingFlightNo Field Functions 
    bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
    void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
    inline string marketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


    // marketingFlightNoInt Field Functions 
    bool hasMarketingFlightNoInt() const { return this->marketingFlightNoInt_ != nullptr;};
    void deleteMarketingFlightNoInt() { this->marketingFlightNoInt_ = nullptr;};
    inline int32_t marketingFlightNoInt() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNoInt_, 0) };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setMarketingFlightNoInt(int32_t marketingFlightNoInt) { DARABONBA_PTR_SET_VALUE(marketingFlightNoInt_, marketingFlightNoInt) };


    // operatingAirline Field Functions 
    bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
    void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
    inline string operatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string segmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // stopCityList Field Functions 
    bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
    void deleteStopCityList() { this->stopCityList_ = nullptr;};
    inline string stopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


    // stopQuantity Field Functions 
    bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
    void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
    inline int32_t stopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
    inline OrderDetailResponseBodyDataSolutionJourneyListSegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


  protected:
    // arrival airport code (capitalized)
    std::shared_ptr<string> arrivalAirport_ = nullptr;
    // arrival city code (capitalized)
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // arrival terminal
    std::shared_ptr<string> arrivalTerminal_ = nullptr;
    // arrival time in string format (yyyy-MM-dd HH:mm:ss)
    std::shared_ptr<string> arrivalTime_ = nullptr;
    // availability
    std::shared_ptr<string> availability_ = nullptr;
    // RBD
    std::shared_ptr<string> cabin_ = nullptr;
    // cabin class
    std::shared_ptr<string> cabinClass_ = nullptr;
    // code share or not
    std::shared_ptr<bool> codeShare_ = nullptr;
    // departure airport code (capitalized)
    std::shared_ptr<string> departureAirport_ = nullptr;
    // departure city code (capitalized)
    std::shared_ptr<string> departureCity_ = nullptr;
    // departure terminal
    std::shared_ptr<string> departureTerminal_ = nullptr;
    // departure time in string format (yyyy-MM-dd HH:mm:ss)
    std::shared_ptr<string> departureTime_ = nullptr;
    // equipment type
    std::shared_ptr<string> equipType_ = nullptr;
    // flight time, unit: minute
    std::shared_ptr<int32_t> flightDuration_ = nullptr;
    // marketing airline code (eg: KA)
    std::shared_ptr<string> marketingAirline_ = nullptr;
    // marketing airline flight no. (eg: KA5809)
    std::shared_ptr<string> marketingFlightNo_ = nullptr;
    // marketing airline flight no. (eg: 5809)
    std::shared_ptr<int32_t> marketingFlightNoInt_ = nullptr;
    // operating airline code (eg: CX)
    std::shared_ptr<string> operatingAirline_ = nullptr;
    // operating airline flight no. (eg: CX601)
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
    // segment ID format: flight no.+departure airport[IATA airport code]+arrival airport[IATA airport code]+departure time(MMdd)
    std::shared_ptr<string> segmentId_ = nullptr;
    // stop city list when stop_quantity > 1 , use “,” for seperation
    std::shared_ptr<string> stopCityList_ = nullptr;
    // number of stops
    std::shared_ptr<int32_t> stopQuantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
