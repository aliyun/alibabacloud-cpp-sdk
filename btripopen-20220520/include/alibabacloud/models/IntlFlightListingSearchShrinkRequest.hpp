// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_TO_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(search_passenger_list, searchPassengerListShrink_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_FROM_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(search_passenger_list, searchPassengerListShrink_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightListingSearchShrinkRequest() = default ;
    IntlFlightListingSearchShrinkRequest(const IntlFlightListingSearchShrinkRequest &) = default ;
    IntlFlightListingSearchShrinkRequest(IntlFlightListingSearchShrinkRequest &&) = default ;
    IntlFlightListingSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchShrinkRequest() = default ;
    IntlFlightListingSearchShrinkRequest& operator=(const IntlFlightListingSearchShrinkRequest &) = default ;
    IntlFlightListingSearchShrinkRequest& operator=(IntlFlightListingSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->cabinType_ != nullptr && this->isvName_ != nullptr && this->outWheelSearch_ != nullptr && this->queryRecordId_ != nullptr
        && this->searchJourneysShrink_ != nullptr && this->searchMode_ != nullptr && this->searchPassengerListShrink_ != nullptr && this->token_ != nullptr && this->tripType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightListingSearchShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightListingSearchShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // cabinType Field Functions 
    bool hasCabinType() const { return this->cabinType_ != nullptr;};
    void deleteCabinType() { this->cabinType_ = nullptr;};
    inline int32_t cabinType() const { DARABONBA_PTR_GET_DEFAULT(cabinType_, 0) };
    inline IntlFlightListingSearchShrinkRequest& setCabinType(int32_t cabinType) { DARABONBA_PTR_SET_VALUE(cabinType_, cabinType) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightListingSearchShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outWheelSearch Field Functions 
    bool hasOutWheelSearch() const { return this->outWheelSearch_ != nullptr;};
    void deleteOutWheelSearch() { this->outWheelSearch_ = nullptr;};
    inline bool outWheelSearch() const { DARABONBA_PTR_GET_DEFAULT(outWheelSearch_, false) };
    inline IntlFlightListingSearchShrinkRequest& setOutWheelSearch(bool outWheelSearch) { DARABONBA_PTR_SET_VALUE(outWheelSearch_, outWheelSearch) };


    // queryRecordId Field Functions 
    bool hasQueryRecordId() const { return this->queryRecordId_ != nullptr;};
    void deleteQueryRecordId() { this->queryRecordId_ = nullptr;};
    inline string queryRecordId() const { DARABONBA_PTR_GET_DEFAULT(queryRecordId_, "") };
    inline IntlFlightListingSearchShrinkRequest& setQueryRecordId(string queryRecordId) { DARABONBA_PTR_SET_VALUE(queryRecordId_, queryRecordId) };


    // searchJourneysShrink Field Functions 
    bool hasSearchJourneysShrink() const { return this->searchJourneysShrink_ != nullptr;};
    void deleteSearchJourneysShrink() { this->searchJourneysShrink_ = nullptr;};
    inline string searchJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(searchJourneysShrink_, "") };
    inline IntlFlightListingSearchShrinkRequest& setSearchJourneysShrink(string searchJourneysShrink) { DARABONBA_PTR_SET_VALUE(searchJourneysShrink_, searchJourneysShrink) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline IntlFlightListingSearchShrinkRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // searchPassengerListShrink Field Functions 
    bool hasSearchPassengerListShrink() const { return this->searchPassengerListShrink_ != nullptr;};
    void deleteSearchPassengerListShrink() { this->searchPassengerListShrink_ = nullptr;};
    inline string searchPassengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(searchPassengerListShrink_, "") };
    inline IntlFlightListingSearchShrinkRequest& setSearchPassengerListShrink(string searchPassengerListShrink) { DARABONBA_PTR_SET_VALUE(searchPassengerListShrink_, searchPassengerListShrink) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightListingSearchShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightListingSearchShrinkRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> cabinType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> outWheelSearch_ = nullptr;
    std::shared_ptr<string> queryRecordId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> searchJourneysShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<string> searchPassengerListShrink_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
