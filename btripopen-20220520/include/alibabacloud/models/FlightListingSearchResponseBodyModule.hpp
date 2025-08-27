// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_list, flightList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
    };
    FlightListingSearchResponseBodyModule() = default ;
    FlightListingSearchResponseBodyModule(const FlightListingSearchResponseBodyModule &) = default ;
    FlightListingSearchResponseBodyModule(FlightListingSearchResponseBodyModule &&) = default ;
    FlightListingSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModule() = default ;
    FlightListingSearchResponseBodyModule& operator=(const FlightListingSearchResponseBodyModule &) = default ;
    FlightListingSearchResponseBodyModule& operator=(FlightListingSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightList_ != nullptr; };
    // flightList Field Functions 
    bool hasFlightList() const { return this->flightList_ != nullptr;};
    void deleteFlightList() { this->flightList_ = nullptr;};
    inline const vector<Models::FlightListingSearchResponseBodyModuleFlightList> & flightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Models::FlightListingSearchResponseBodyModuleFlightList>) };
    inline vector<Models::FlightListingSearchResponseBodyModuleFlightList> flightList() { DARABONBA_PTR_GET(flightList_, vector<Models::FlightListingSearchResponseBodyModuleFlightList>) };
    inline FlightListingSearchResponseBodyModule& setFlightList(const vector<Models::FlightListingSearchResponseBodyModuleFlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
    inline FlightListingSearchResponseBodyModule& setFlightList(vector<Models::FlightListingSearchResponseBodyModuleFlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


  protected:
    std::shared_ptr<vector<Models::FlightListingSearchResponseBodyModuleFlightList>> flightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
