// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos.hpp>
#include <alibabacloud/models/FlightOtaSearchV2ResponseBodyModuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_TO_JSON(item_list, itemList_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_journey_infos, flightJourneyInfos_);
      DARABONBA_PTR_FROM_JSON(item_list, itemList_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightOtaSearchV2ResponseBodyModule() = default ;
    FlightOtaSearchV2ResponseBodyModule(const FlightOtaSearchV2ResponseBodyModule &) = default ;
    FlightOtaSearchV2ResponseBodyModule(FlightOtaSearchV2ResponseBodyModule &&) = default ;
    FlightOtaSearchV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ResponseBodyModule() = default ;
    FlightOtaSearchV2ResponseBodyModule& operator=(const FlightOtaSearchV2ResponseBodyModule &) = default ;
    FlightOtaSearchV2ResponseBodyModule& operator=(FlightOtaSearchV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightJourneyInfos_ != nullptr
        && this->itemList_ != nullptr && this->searchMode_ != nullptr && this->tripType_ != nullptr; };
    // flightJourneyInfos Field Functions 
    bool hasFlightJourneyInfos() const { return this->flightJourneyInfos_ != nullptr;};
    void deleteFlightJourneyInfos() { this->flightJourneyInfos_ = nullptr;};
    inline const vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos() const { DARABONBA_PTR_GET_CONST(flightJourneyInfos_, vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos>) };
    inline vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos> flightJourneyInfos() { DARABONBA_PTR_GET(flightJourneyInfos_, vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos>) };
    inline FlightOtaSearchV2ResponseBodyModule& setFlightJourneyInfos(const vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos> & flightJourneyInfos) { DARABONBA_PTR_SET_VALUE(flightJourneyInfos_, flightJourneyInfos) };
    inline FlightOtaSearchV2ResponseBodyModule& setFlightJourneyInfos(vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos> && flightJourneyInfos) { DARABONBA_PTR_SET_RVALUE(flightJourneyInfos_, flightJourneyInfos) };


    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList> & itemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList>) };
    inline vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList> itemList() { DARABONBA_PTR_GET(itemList_, vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList>) };
    inline FlightOtaSearchV2ResponseBodyModule& setItemList(const vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline FlightOtaSearchV2ResponseBodyModule& setItemList(vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightOtaSearchV2ResponseBodyModule& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOtaSearchV2ResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<vector<Models::FlightOtaSearchV2ResponseBodyModuleFlightJourneyInfos>> flightJourneyInfos_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaSearchV2ResponseBodyModuleItemList>> itemList_ = nullptr;
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
