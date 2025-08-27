// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_list, flightList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
    };
    FlightOtaSearchResponseBodyModule() = default ;
    FlightOtaSearchResponseBodyModule(const FlightOtaSearchResponseBodyModule &) = default ;
    FlightOtaSearchResponseBodyModule(FlightOtaSearchResponseBodyModule &&) = default ;
    FlightOtaSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModule() = default ;
    FlightOtaSearchResponseBodyModule& operator=(const FlightOtaSearchResponseBodyModule &) = default ;
    FlightOtaSearchResponseBodyModule& operator=(FlightOtaSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightList_ != nullptr; };
    // flightList Field Functions 
    bool hasFlightList() const { return this->flightList_ != nullptr;};
    void deleteFlightList() { this->flightList_ = nullptr;};
    inline const vector<Models::FlightOtaSearchResponseBodyModuleFlightList> & flightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Models::FlightOtaSearchResponseBodyModuleFlightList>) };
    inline vector<Models::FlightOtaSearchResponseBodyModuleFlightList> flightList() { DARABONBA_PTR_GET(flightList_, vector<Models::FlightOtaSearchResponseBodyModuleFlightList>) };
    inline FlightOtaSearchResponseBodyModule& setFlightList(const vector<Models::FlightOtaSearchResponseBodyModuleFlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
    inline FlightOtaSearchResponseBodyModule& setFlightList(vector<Models::FlightOtaSearchResponseBodyModuleFlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


  protected:
    std::shared_ptr<vector<Models::FlightOtaSearchResponseBodyModuleFlightList>> flightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
