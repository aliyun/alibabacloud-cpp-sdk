// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHREQUESTJOURNEYPARAMLISTSEGMENTPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHREQUESTJOURNEYPARAMLISTSEGMENTPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichRequestJourneyParamListSegmentParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichRequestJourneyParamListSegmentParamList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
      DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichRequestJourneyParamListSegmentParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(child_cabin, childCabin_);
      DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
      DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
    };
    EnrichRequestJourneyParamListSegmentParamList() = default ;
    EnrichRequestJourneyParamListSegmentParamList(const EnrichRequestJourneyParamListSegmentParamList &) = default ;
    EnrichRequestJourneyParamListSegmentParamList(EnrichRequestJourneyParamListSegmentParamList &&) = default ;
    EnrichRequestJourneyParamListSegmentParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichRequestJourneyParamListSegmentParamList() = default ;
    EnrichRequestJourneyParamListSegmentParamList& operator=(const EnrichRequestJourneyParamListSegmentParamList &) = default ;
    EnrichRequestJourneyParamListSegmentParamList& operator=(EnrichRequestJourneyParamListSegmentParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && return this->arrivalCity_ == nullptr && return this->cabin_ == nullptr && return this->childCabin_ == nullptr && return this->departureAirport_ == nullptr && return this->departureCity_ == nullptr
        && return this->departureTime_ == nullptr && return this->marketingFlightNo_ == nullptr; };
    // arrivalAirport Field Functions 
    bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
    void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
    inline string arrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // childCabin Field Functions 
    bool hasChildCabin() const { return this->childCabin_ != nullptr;};
    void deleteChildCabin() { this->childCabin_ = nullptr;};
    inline string childCabin() const { DARABONBA_PTR_GET_DEFAULT(childCabin_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setChildCabin(string childCabin) { DARABONBA_PTR_SET_VALUE(childCabin_, childCabin) };


    // departureAirport Field Functions 
    bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
    void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
    inline string departureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureTime Field Functions 
    bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
    void deleteDepartureTime() { this->departureTime_ = nullptr;};
    inline string departureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setDepartureTime(string departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


    // marketingFlightNo Field Functions 
    bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
    void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
    inline string marketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
    inline EnrichRequestJourneyParamListSegmentParamList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


  protected:
    // arrival airport code
    std::shared_ptr<string> arrivalAirport_ = nullptr;
    // arrival city code
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // RBD
    std::shared_ptr<string> cabin_ = nullptr;
    // child RBD
    std::shared_ptr<string> childCabin_ = nullptr;
    // departure airport code
    std::shared_ptr<string> departureAirport_ = nullptr;
    // departure city code
    std::shared_ptr<string> departureCity_ = nullptr;
    // departure time in string format (yyyy-MM-dd HH:mm:ss)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureTime_ = nullptr;
    // marketing flight no. (eg: KA5809)
    // 
    // This parameter is required.
    std::shared_ptr<string> marketingFlightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
