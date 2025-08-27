// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_TO_JSON(cabin_type_list, cabinTypeListShrink_);
      DARABONBA_PTR_TO_JSON(direct_only, directOnly_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_TO_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_TO_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_TO_JSON(need_y_c_best_price, needYCBestPrice_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
      DARABONBA_PTR_FROM_JSON(cabin_type_list, cabinTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(direct_only, directOnly_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(need_multi_class_price, needMultiClassPrice_);
      DARABONBA_PTR_FROM_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_FROM_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_FROM_JSON(need_y_c_best_price, needYCBestPrice_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightListingSearchV2ShrinkRequest() = default ;
    FlightListingSearchV2ShrinkRequest(const FlightListingSearchV2ShrinkRequest &) = default ;
    FlightListingSearchV2ShrinkRequest(FlightListingSearchV2ShrinkRequest &&) = default ;
    FlightListingSearchV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ShrinkRequest() = default ;
    FlightListingSearchV2ShrinkRequest& operator=(const FlightListingSearchV2ShrinkRequest &) = default ;
    FlightListingSearchV2ShrinkRequest& operator=(FlightListingSearchV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->airlineCode_ != nullptr
        && this->cabinTypeListShrink_ != nullptr && this->directOnly_ != nullptr && this->isvName_ != nullptr && this->needMultiClassPrice_ != nullptr && this->needQueryServiceFee_ != nullptr
        && this->needShareFlight_ != nullptr && this->needYCBestPrice_ != nullptr && this->searchJourneysShrink_ != nullptr && this->searchMode_ != nullptr && this->tripType_ != nullptr; };
    // airlineCode Field Functions 
    bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
    void deleteAirlineCode() { this->airlineCode_ = nullptr;};
    inline string airlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
    inline FlightListingSearchV2ShrinkRequest& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


    // cabinTypeListShrink Field Functions 
    bool hasCabinTypeListShrink() const { return this->cabinTypeListShrink_ != nullptr;};
    void deleteCabinTypeListShrink() { this->cabinTypeListShrink_ = nullptr;};
    inline string cabinTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(cabinTypeListShrink_, "") };
    inline FlightListingSearchV2ShrinkRequest& setCabinTypeListShrink(string cabinTypeListShrink) { DARABONBA_PTR_SET_VALUE(cabinTypeListShrink_, cabinTypeListShrink) };


    // directOnly Field Functions 
    bool hasDirectOnly() const { return this->directOnly_ != nullptr;};
    void deleteDirectOnly() { this->directOnly_ = nullptr;};
    inline bool directOnly() const { DARABONBA_PTR_GET_DEFAULT(directOnly_, false) };
    inline FlightListingSearchV2ShrinkRequest& setDirectOnly(bool directOnly) { DARABONBA_PTR_SET_VALUE(directOnly_, directOnly) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightListingSearchV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // needMultiClassPrice Field Functions 
    bool hasNeedMultiClassPrice() const { return this->needMultiClassPrice_ != nullptr;};
    void deleteNeedMultiClassPrice() { this->needMultiClassPrice_ = nullptr;};
    inline bool needMultiClassPrice() const { DARABONBA_PTR_GET_DEFAULT(needMultiClassPrice_, false) };
    inline FlightListingSearchV2ShrinkRequest& setNeedMultiClassPrice(bool needMultiClassPrice) { DARABONBA_PTR_SET_VALUE(needMultiClassPrice_, needMultiClassPrice) };


    // needQueryServiceFee Field Functions 
    bool hasNeedQueryServiceFee() const { return this->needQueryServiceFee_ != nullptr;};
    void deleteNeedQueryServiceFee() { this->needQueryServiceFee_ = nullptr;};
    inline bool needQueryServiceFee() const { DARABONBA_PTR_GET_DEFAULT(needQueryServiceFee_, false) };
    inline FlightListingSearchV2ShrinkRequest& setNeedQueryServiceFee(bool needQueryServiceFee) { DARABONBA_PTR_SET_VALUE(needQueryServiceFee_, needQueryServiceFee) };


    // needShareFlight Field Functions 
    bool hasNeedShareFlight() const { return this->needShareFlight_ != nullptr;};
    void deleteNeedShareFlight() { this->needShareFlight_ = nullptr;};
    inline bool needShareFlight() const { DARABONBA_PTR_GET_DEFAULT(needShareFlight_, false) };
    inline FlightListingSearchV2ShrinkRequest& setNeedShareFlight(bool needShareFlight) { DARABONBA_PTR_SET_VALUE(needShareFlight_, needShareFlight) };


    // needYCBestPrice Field Functions 
    bool hasNeedYCBestPrice() const { return this->needYCBestPrice_ != nullptr;};
    void deleteNeedYCBestPrice() { this->needYCBestPrice_ = nullptr;};
    inline bool needYCBestPrice() const { DARABONBA_PTR_GET_DEFAULT(needYCBestPrice_, false) };
    inline FlightListingSearchV2ShrinkRequest& setNeedYCBestPrice(bool needYCBestPrice) { DARABONBA_PTR_SET_VALUE(needYCBestPrice_, needYCBestPrice) };


    // searchJourneysShrink Field Functions 
    bool hasSearchJourneysShrink() const { return this->searchJourneysShrink_ != nullptr;};
    void deleteSearchJourneysShrink() { this->searchJourneysShrink_ = nullptr;};
    inline string searchJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(searchJourneysShrink_, "") };
    inline FlightListingSearchV2ShrinkRequest& setSearchJourneysShrink(string searchJourneysShrink) { DARABONBA_PTR_SET_VALUE(searchJourneysShrink_, searchJourneysShrink) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightListingSearchV2ShrinkRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightListingSearchV2ShrinkRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> airlineCode_ = nullptr;
    std::shared_ptr<string> cabinTypeListShrink_ = nullptr;
    std::shared_ptr<bool> directOnly_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<bool> needMultiClassPrice_ = nullptr;
    std::shared_ptr<bool> needQueryServiceFee_ = nullptr;
    std::shared_ptr<bool> needShareFlight_ = nullptr;
    std::shared_ptr<bool> needYCBestPrice_ = nullptr;
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
