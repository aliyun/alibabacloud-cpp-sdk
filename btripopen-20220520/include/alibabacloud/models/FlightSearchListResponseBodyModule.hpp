// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_list, flightList_);
      DARABONBA_PTR_TO_JSON(is_replace_pnr, isReplacePnr_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
      DARABONBA_PTR_FROM_JSON(is_replace_pnr, isReplacePnr_);
    };
    FlightSearchListResponseBodyModule() = default ;
    FlightSearchListResponseBodyModule(const FlightSearchListResponseBodyModule &) = default ;
    FlightSearchListResponseBodyModule(FlightSearchListResponseBodyModule &&) = default ;
    FlightSearchListResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModule() = default ;
    FlightSearchListResponseBodyModule& operator=(const FlightSearchListResponseBodyModule &) = default ;
    FlightSearchListResponseBodyModule& operator=(FlightSearchListResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightList_ != nullptr
        && this->isReplacePnr_ != nullptr; };
    // flightList Field Functions 
    bool hasFlightList() const { return this->flightList_ != nullptr;};
    void deleteFlightList() { this->flightList_ = nullptr;};
    inline const vector<Models::FlightSearchListResponseBodyModuleFlightList> & flightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<Models::FlightSearchListResponseBodyModuleFlightList>) };
    inline vector<Models::FlightSearchListResponseBodyModuleFlightList> flightList() { DARABONBA_PTR_GET(flightList_, vector<Models::FlightSearchListResponseBodyModuleFlightList>) };
    inline FlightSearchListResponseBodyModule& setFlightList(const vector<Models::FlightSearchListResponseBodyModuleFlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
    inline FlightSearchListResponseBodyModule& setFlightList(vector<Models::FlightSearchListResponseBodyModuleFlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


    // isReplacePnr Field Functions 
    bool hasIsReplacePnr() const { return this->isReplacePnr_ != nullptr;};
    void deleteIsReplacePnr() { this->isReplacePnr_ = nullptr;};
    inline bool isReplacePnr() const { DARABONBA_PTR_GET_DEFAULT(isReplacePnr_, false) };
    inline FlightSearchListResponseBodyModule& setIsReplacePnr(bool isReplacePnr) { DARABONBA_PTR_SET_VALUE(isReplacePnr_, isReplacePnr) };


  protected:
    std::shared_ptr<vector<Models::FlightSearchListResponseBodyModuleFlightList>> flightList_ = nullptr;
    std::shared_ptr<bool> isReplacePnr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
