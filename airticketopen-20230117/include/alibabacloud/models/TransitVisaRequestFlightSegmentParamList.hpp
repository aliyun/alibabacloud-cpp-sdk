// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSITVISAREQUESTFLIGHTSEGMENTPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_TRANSITVISAREQUESTFLIGHTSEGMENTPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TransitVisaRequestFlightSegmentParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransitVisaRequestFlightSegmentParamList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_TO_JSON(arrival_terminal, arrivalTerminal_);
      DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_TO_JSON(code_share, codeShare_);
      DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
      DARABONBA_PTR_TO_JSON(marketing_airline, marketingAirline_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_TO_JSON(operating_airline, operatingAirline_);
      DARABONBA_PTR_TO_JSON(stop_city_list, stopCityList_);
      DARABONBA_PTR_TO_JSON(ticketing_airline, ticketingAirline_);
    };
    friend void from_json(const Darabonba::Json& j, TransitVisaRequestFlightSegmentParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
      DARABONBA_PTR_FROM_JSON(arrival_terminal, arrivalTerminal_);
      DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
      DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
      DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
      DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
      DARABONBA_PTR_FROM_JSON(marketing_airline, marketingAirline_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_FROM_JSON(operating_airline, operatingAirline_);
      DARABONBA_PTR_FROM_JSON(stop_city_list, stopCityList_);
      DARABONBA_PTR_FROM_JSON(ticketing_airline, ticketingAirline_);
    };
    TransitVisaRequestFlightSegmentParamList() = default ;
    TransitVisaRequestFlightSegmentParamList(const TransitVisaRequestFlightSegmentParamList &) = default ;
    TransitVisaRequestFlightSegmentParamList(TransitVisaRequestFlightSegmentParamList &&) = default ;
    TransitVisaRequestFlightSegmentParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransitVisaRequestFlightSegmentParamList() = default ;
    TransitVisaRequestFlightSegmentParamList& operator=(const TransitVisaRequestFlightSegmentParamList &) = default ;
    TransitVisaRequestFlightSegmentParamList& operator=(TransitVisaRequestFlightSegmentParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && return this->arrivalTerminal_ == nullptr && return this->arrivalTime_ == nullptr && return this->codeShare_ == nullptr && return this->departureAirport_ == nullptr && return this->departureTerminal_ == nullptr
        && return this->departureTime_ == nullptr && return this->marketingAirline_ == nullptr && return this->marketingFlightNo_ == nullptr && return this->operatingAirline_ == nullptr && return this->stopCityList_ == nullptr
        && return this->ticketingAirline_ == nullptr; };
    // arrivalAirport Field Functions 
    bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
    void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
    inline string arrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


    // arrivalTerminal Field Functions 
    bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
    void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
    inline string arrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


    // arrivalTime Field Functions 
    bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
    void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
    inline int64_t arrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, 0L) };
    inline TransitVisaRequestFlightSegmentParamList& setArrivalTime(int64_t arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


    // codeShare Field Functions 
    bool hasCodeShare() const { return this->codeShare_ != nullptr;};
    void deleteCodeShare() { this->codeShare_ = nullptr;};
    inline bool codeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
    inline TransitVisaRequestFlightSegmentParamList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


    // departureAirport Field Functions 
    bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
    void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
    inline string departureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


    // departureTerminal Field Functions 
    bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
    void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
    inline string departureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


    // departureTime Field Functions 
    bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
    void deleteDepartureTime() { this->departureTime_ = nullptr;};
    inline int64_t departureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, 0L) };
    inline TransitVisaRequestFlightSegmentParamList& setDepartureTime(int64_t departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


    // marketingAirline Field Functions 
    bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
    void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
    inline string marketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


    // marketingFlightNo Field Functions 
    bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
    void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
    inline string marketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


    // operatingAirline Field Functions 
    bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
    void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
    inline string operatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


    // stopCityList Field Functions 
    bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
    void deleteStopCityList() { this->stopCityList_ = nullptr;};
    inline string stopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


    // ticketingAirline Field Functions 
    bool hasTicketingAirline() const { return this->ticketingAirline_ != nullptr;};
    void deleteTicketingAirline() { this->ticketingAirline_ = nullptr;};
    inline string ticketingAirline() const { DARABONBA_PTR_GET_DEFAULT(ticketingAirline_, "") };
    inline TransitVisaRequestFlightSegmentParamList& setTicketingAirline(string ticketingAirline) { DARABONBA_PTR_SET_VALUE(ticketingAirline_, ticketingAirline) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrivalAirport_ = nullptr;
    std::shared_ptr<string> arrivalTerminal_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> arrivalTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> codeShare_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departureAirport_ = nullptr;
    std::shared_ptr<string> departureTerminal_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> departureTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> marketingAirline_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> marketingFlightNo_ = nullptr;
    std::shared_ptr<string> operatingAirline_ = nullptr;
    std::shared_ptr<string> stopCityList_ = nullptr;
    std::shared_ptr<string> ticketingAirline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
