// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_item_list, flightItemList_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_item_list, flightItemList_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightListingSearchV2ResponseBodyModule() = default ;
    FlightListingSearchV2ResponseBodyModule(const FlightListingSearchV2ResponseBodyModule &) = default ;
    FlightListingSearchV2ResponseBodyModule(FlightListingSearchV2ResponseBodyModule &&) = default ;
    FlightListingSearchV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModule() = default ;
    FlightListingSearchV2ResponseBodyModule& operator=(const FlightListingSearchV2ResponseBodyModule &) = default ;
    FlightListingSearchV2ResponseBodyModule& operator=(FlightListingSearchV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightItemList_ != nullptr
        && this->searchMode_ != nullptr && this->tripType_ != nullptr; };
    // flightItemList Field Functions 
    bool hasFlightItemList() const { return this->flightItemList_ != nullptr;};
    void deleteFlightItemList() { this->flightItemList_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList> & flightItemList() const { DARABONBA_PTR_GET_CONST(flightItemList_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList> flightItemList() { DARABONBA_PTR_GET(flightItemList_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList>) };
    inline FlightListingSearchV2ResponseBodyModule& setFlightItemList(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList> & flightItemList) { DARABONBA_PTR_SET_VALUE(flightItemList_, flightItemList) };
    inline FlightListingSearchV2ResponseBodyModule& setFlightItemList(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList> && flightItemList) { DARABONBA_PTR_SET_RVALUE(flightItemList_, flightItemList) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightListingSearchV2ResponseBodyModule& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightListingSearchV2ResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemList>> flightItemList_ = nullptr;
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
