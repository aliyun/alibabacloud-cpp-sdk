// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_type_list, cabinTypeListShrink_);
      DARABONBA_PTR_TO_JSON(direct_only, directOnly_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_type_list, cabinTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(direct_only, directOnly_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightOtaSearchV2ShrinkRequest() = default ;
    FlightOtaSearchV2ShrinkRequest(const FlightOtaSearchV2ShrinkRequest &) = default ;
    FlightOtaSearchV2ShrinkRequest(FlightOtaSearchV2ShrinkRequest &&) = default ;
    FlightOtaSearchV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2ShrinkRequest() = default ;
    FlightOtaSearchV2ShrinkRequest& operator=(const FlightOtaSearchV2ShrinkRequest &) = default ;
    FlightOtaSearchV2ShrinkRequest& operator=(FlightOtaSearchV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinTypeListShrink_ != nullptr
        && this->directOnly_ != nullptr && this->isvName_ != nullptr && this->needShareFlight_ != nullptr && this->searchJourneysShrink_ != nullptr && this->searchMode_ != nullptr
        && this->tripType_ != nullptr; };
    // cabinTypeListShrink Field Functions 
    bool hasCabinTypeListShrink() const { return this->cabinTypeListShrink_ != nullptr;};
    void deleteCabinTypeListShrink() { this->cabinTypeListShrink_ = nullptr;};
    inline string cabinTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(cabinTypeListShrink_, "") };
    inline FlightOtaSearchV2ShrinkRequest& setCabinTypeListShrink(string cabinTypeListShrink) { DARABONBA_PTR_SET_VALUE(cabinTypeListShrink_, cabinTypeListShrink) };


    // directOnly Field Functions 
    bool hasDirectOnly() const { return this->directOnly_ != nullptr;};
    void deleteDirectOnly() { this->directOnly_ = nullptr;};
    inline bool directOnly() const { DARABONBA_PTR_GET_DEFAULT(directOnly_, false) };
    inline FlightOtaSearchV2ShrinkRequest& setDirectOnly(bool directOnly) { DARABONBA_PTR_SET_VALUE(directOnly_, directOnly) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightOtaSearchV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // needShareFlight Field Functions 
    bool hasNeedShareFlight() const { return this->needShareFlight_ != nullptr;};
    void deleteNeedShareFlight() { this->needShareFlight_ = nullptr;};
    inline bool needShareFlight() const { DARABONBA_PTR_GET_DEFAULT(needShareFlight_, false) };
    inline FlightOtaSearchV2ShrinkRequest& setNeedShareFlight(bool needShareFlight) { DARABONBA_PTR_SET_VALUE(needShareFlight_, needShareFlight) };


    // searchJourneysShrink Field Functions 
    bool hasSearchJourneysShrink() const { return this->searchJourneysShrink_ != nullptr;};
    void deleteSearchJourneysShrink() { this->searchJourneysShrink_ = nullptr;};
    inline string searchJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(searchJourneysShrink_, "") };
    inline FlightOtaSearchV2ShrinkRequest& setSearchJourneysShrink(string searchJourneysShrink) { DARABONBA_PTR_SET_VALUE(searchJourneysShrink_, searchJourneysShrink) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightOtaSearchV2ShrinkRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOtaSearchV2ShrinkRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> cabinTypeListShrink_ = nullptr;
    std::shared_ptr<bool> directOnly_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<bool> needShareFlight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> searchJourneysShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
