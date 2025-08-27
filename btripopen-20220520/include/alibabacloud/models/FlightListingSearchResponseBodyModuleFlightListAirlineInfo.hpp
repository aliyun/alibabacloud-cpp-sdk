// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTAIRLINEINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTAIRLINEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListAirlineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListAirlineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
      DARABONBA_PTR_TO_JSON(airline_simple_name, airlineSimpleName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListAirlineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
      DARABONBA_PTR_FROM_JSON(airline_simple_name, airlineSimpleName_);
    };
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo() = default ;
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo(const FlightListingSearchResponseBodyModuleFlightListAirlineInfo &) = default ;
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo(FlightListingSearchResponseBodyModuleFlightListAirlineInfo &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListAirlineInfo() = default ;
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo& operator=(const FlightListingSearchResponseBodyModuleFlightListAirlineInfo &) = default ;
    FlightListingSearchResponseBodyModuleFlightListAirlineInfo& operator=(FlightListingSearchResponseBodyModuleFlightListAirlineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->airlineName_ != nullptr && this->airlineSimpleName_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListAirlineInfo& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // airlineName Field Functions 
    bool hasAirlineName() const { return this->airlineName_ != nullptr;};
    void deleteAirlineName() { this->airlineName_ = nullptr;};
    inline string airlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListAirlineInfo& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


    // airlineSimpleName Field Functions 
    bool hasAirlineSimpleName() const { return this->airlineSimpleName_ != nullptr;};
    void deleteAirlineSimpleName() { this->airlineSimpleName_ = nullptr;};
    inline string airlineSimpleName() const { DARABONBA_PTR_GET_DEFAULT(airlineSimpleName_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListAirlineInfo& setAirlineSimpleName(string airlineSimpleName) { DARABONBA_PTR_SET_VALUE(airlineSimpleName_, airlineSimpleName) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> airlineName_ = nullptr;
    std::shared_ptr<string> airlineSimpleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
