// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LUGGAGEDIRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LUGGAGEDIRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class LuggageDirectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LuggageDirectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    friend void from_json(const Darabonba::Json& j, LuggageDirectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    LuggageDirectRequest() = default ;
    LuggageDirectRequest(const LuggageDirectRequest &) = default ;
    LuggageDirectRequest(LuggageDirectRequest &&) = default ;
    LuggageDirectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LuggageDirectRequest() = default ;
    LuggageDirectRequest& operator=(const LuggageDirectRequest &) = default ;
    LuggageDirectRequest& operator=(LuggageDirectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlightSegmentParamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlightSegmentParamList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, FlightSegmentParamList& obj) { 
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
      FlightSegmentParamList() = default ;
      FlightSegmentParamList(const FlightSegmentParamList &) = default ;
      FlightSegmentParamList(FlightSegmentParamList &&) = default ;
      FlightSegmentParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlightSegmentParamList() = default ;
      FlightSegmentParamList& operator=(const FlightSegmentParamList &) = default ;
      FlightSegmentParamList& operator=(FlightSegmentParamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalTerminal_ == nullptr && this->arrivalTime_ == nullptr && this->codeShare_ == nullptr && this->departureAirport_ == nullptr && this->departureTerminal_ == nullptr
        && this->departureTime_ == nullptr && this->marketingAirline_ == nullptr && this->marketingFlightNo_ == nullptr && this->operatingAirline_ == nullptr && this->stopCityList_ == nullptr
        && this->ticketingAirline_ == nullptr; };
      // arrivalAirport Field Functions 
      bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
      void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
      inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
      inline FlightSegmentParamList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


      // arrivalTerminal Field Functions 
      bool hasArrivalTerminal() const { return this->arrivalTerminal_ != nullptr;};
      void deleteArrivalTerminal() { this->arrivalTerminal_ = nullptr;};
      inline string getArrivalTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrivalTerminal_, "") };
      inline FlightSegmentParamList& setArrivalTerminal(string arrivalTerminal) { DARABONBA_PTR_SET_VALUE(arrivalTerminal_, arrivalTerminal) };


      // arrivalTime Field Functions 
      bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
      void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
      inline int64_t getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, 0L) };
      inline FlightSegmentParamList& setArrivalTime(int64_t arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


      // codeShare Field Functions 
      bool hasCodeShare() const { return this->codeShare_ != nullptr;};
      void deleteCodeShare() { this->codeShare_ = nullptr;};
      inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
      inline FlightSegmentParamList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


      // departureAirport Field Functions 
      bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
      void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
      inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
      inline FlightSegmentParamList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


      // departureTerminal Field Functions 
      bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
      void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
      inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
      inline FlightSegmentParamList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


      // departureTime Field Functions 
      bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
      void deleteDepartureTime() { this->departureTime_ = nullptr;};
      inline int64_t getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, 0L) };
      inline FlightSegmentParamList& setDepartureTime(int64_t departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


      // marketingAirline Field Functions 
      bool hasMarketingAirline() const { return this->marketingAirline_ != nullptr;};
      void deleteMarketingAirline() { this->marketingAirline_ = nullptr;};
      inline string getMarketingAirline() const { DARABONBA_PTR_GET_DEFAULT(marketingAirline_, "") };
      inline FlightSegmentParamList& setMarketingAirline(string marketingAirline) { DARABONBA_PTR_SET_VALUE(marketingAirline_, marketingAirline) };


      // marketingFlightNo Field Functions 
      bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
      void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
      inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
      inline FlightSegmentParamList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


      // operatingAirline Field Functions 
      bool hasOperatingAirline() const { return this->operatingAirline_ != nullptr;};
      void deleteOperatingAirline() { this->operatingAirline_ = nullptr;};
      inline string getOperatingAirline() const { DARABONBA_PTR_GET_DEFAULT(operatingAirline_, "") };
      inline FlightSegmentParamList& setOperatingAirline(string operatingAirline) { DARABONBA_PTR_SET_VALUE(operatingAirline_, operatingAirline) };


      // stopCityList Field Functions 
      bool hasStopCityList() const { return this->stopCityList_ != nullptr;};
      void deleteStopCityList() { this->stopCityList_ = nullptr;};
      inline string getStopCityList() const { DARABONBA_PTR_GET_DEFAULT(stopCityList_, "") };
      inline FlightSegmentParamList& setStopCityList(string stopCityList) { DARABONBA_PTR_SET_VALUE(stopCityList_, stopCityList) };


      // ticketingAirline Field Functions 
      bool hasTicketingAirline() const { return this->ticketingAirline_ != nullptr;};
      void deleteTicketingAirline() { this->ticketingAirline_ = nullptr;};
      inline string getTicketingAirline() const { DARABONBA_PTR_GET_DEFAULT(ticketingAirline_, "") };
      inline FlightSegmentParamList& setTicketingAirline(string ticketingAirline) { DARABONBA_PTR_SET_VALUE(ticketingAirline_, ticketingAirline) };


    protected:
      // The three-letter IATA code of the arrival airport.
      // 
      // This parameter is required.
      shared_ptr<string> arrivalAirport_ {};
      // The arrival terminal.
      shared_ptr<string> arrivalTerminal_ {};
      // The arrival time. A 13-digit UNIX timestamp.
      // 
      // This parameter is required.
      shared_ptr<int64_t> arrivalTime_ {};
      // Indicates whether the flight is a codeshare flight.
      // 
      // This parameter is required.
      shared_ptr<bool> codeShare_ {};
      // The three-letter IATA code of the departure airport.
      // 
      // This parameter is required.
      shared_ptr<string> departureAirport_ {};
      // The departure terminal.
      shared_ptr<string> departureTerminal_ {};
      // The departure time. A 13-digit UNIX timestamp.
      // 
      // This parameter is required.
      shared_ptr<int64_t> departureTime_ {};
      // The marketing airline.
      // 
      // This parameter is required.
      shared_ptr<string> marketingAirline_ {};
      // The flight number.
      // 
      // This parameter is required.
      shared_ptr<string> marketingFlightNo_ {};
      // The operating airline.
      shared_ptr<string> operatingAirline_ {};
      // The three-letter IATA codes of stopover cities.
      shared_ptr<string> stopCityList_ {};
      // The ticketing airline.
      shared_ptr<string> ticketingAirline_ {};
    };

    virtual bool empty() const override { return this->flightSegmentParamList_ == nullptr; };
    // flightSegmentParamList Field Functions 
    bool hasFlightSegmentParamList() const { return this->flightSegmentParamList_ != nullptr;};
    void deleteFlightSegmentParamList() { this->flightSegmentParamList_ = nullptr;};
    inline const vector<LuggageDirectRequest::FlightSegmentParamList> & getFlightSegmentParamList() const { DARABONBA_PTR_GET_CONST(flightSegmentParamList_, vector<LuggageDirectRequest::FlightSegmentParamList>) };
    inline vector<LuggageDirectRequest::FlightSegmentParamList> getFlightSegmentParamList() { DARABONBA_PTR_GET(flightSegmentParamList_, vector<LuggageDirectRequest::FlightSegmentParamList>) };
    inline LuggageDirectRequest& setFlightSegmentParamList(const vector<LuggageDirectRequest::FlightSegmentParamList> & flightSegmentParamList) { DARABONBA_PTR_SET_VALUE(flightSegmentParamList_, flightSegmentParamList) };
    inline LuggageDirectRequest& setFlightSegmentParamList(vector<LuggageDirectRequest::FlightSegmentParamList> && flightSegmentParamList) { DARABONBA_PTR_SET_RVALUE(flightSegmentParamList_, flightSegmentParamList) };


  protected:
    // The list of flight segments that constitute an itinerary. Maximum size: 2.
    shared_ptr<vector<LuggageDirectRequest::FlightSegmentParamList>> flightSegmentParamList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
