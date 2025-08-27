// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightListingSearchRequestSearchJourneys.hpp>
#include <alibabacloud/models/IntlFlightListingSearchRequestSearchPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_TO_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_wheel_search, outWheelSearch_);
      DARABONBA_PTR_FROM_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightListingSearchRequest() = default ;
    IntlFlightListingSearchRequest(const IntlFlightListingSearchRequest &) = default ;
    IntlFlightListingSearchRequest(IntlFlightListingSearchRequest &&) = default ;
    IntlFlightListingSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchRequest() = default ;
    IntlFlightListingSearchRequest& operator=(const IntlFlightListingSearchRequest &) = default ;
    IntlFlightListingSearchRequest& operator=(IntlFlightListingSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->cabinType_ != nullptr && this->isvName_ != nullptr && this->outWheelSearch_ != nullptr && this->queryRecordId_ != nullptr
        && this->searchJourneys_ != nullptr && this->searchMode_ != nullptr && this->searchPassengerList_ != nullptr && this->token_ != nullptr && this->tripType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightListingSearchRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightListingSearchRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // cabinType Field Functions 
    bool hasCabinType() const { return this->cabinType_ != nullptr;};
    void deleteCabinType() { this->cabinType_ = nullptr;};
    inline int32_t cabinType() const { DARABONBA_PTR_GET_DEFAULT(cabinType_, 0) };
    inline IntlFlightListingSearchRequest& setCabinType(int32_t cabinType) { DARABONBA_PTR_SET_VALUE(cabinType_, cabinType) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightListingSearchRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outWheelSearch Field Functions 
    bool hasOutWheelSearch() const { return this->outWheelSearch_ != nullptr;};
    void deleteOutWheelSearch() { this->outWheelSearch_ = nullptr;};
    inline bool outWheelSearch() const { DARABONBA_PTR_GET_DEFAULT(outWheelSearch_, false) };
    inline IntlFlightListingSearchRequest& setOutWheelSearch(bool outWheelSearch) { DARABONBA_PTR_SET_VALUE(outWheelSearch_, outWheelSearch) };


    // queryRecordId Field Functions 
    bool hasQueryRecordId() const { return this->queryRecordId_ != nullptr;};
    void deleteQueryRecordId() { this->queryRecordId_ = nullptr;};
    inline string queryRecordId() const { DARABONBA_PTR_GET_DEFAULT(queryRecordId_, "") };
    inline IntlFlightListingSearchRequest& setQueryRecordId(string queryRecordId) { DARABONBA_PTR_SET_VALUE(queryRecordId_, queryRecordId) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<IntlFlightListingSearchRequestSearchJourneys> & searchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<IntlFlightListingSearchRequestSearchJourneys>) };
    inline vector<IntlFlightListingSearchRequestSearchJourneys> searchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<IntlFlightListingSearchRequestSearchJourneys>) };
    inline IntlFlightListingSearchRequest& setSearchJourneys(const vector<IntlFlightListingSearchRequestSearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline IntlFlightListingSearchRequest& setSearchJourneys(vector<IntlFlightListingSearchRequestSearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline IntlFlightListingSearchRequest& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // searchPassengerList Field Functions 
    bool hasSearchPassengerList() const { return this->searchPassengerList_ != nullptr;};
    void deleteSearchPassengerList() { this->searchPassengerList_ = nullptr;};
    inline const vector<IntlFlightListingSearchRequestSearchPassengerList> & searchPassengerList() const { DARABONBA_PTR_GET_CONST(searchPassengerList_, vector<IntlFlightListingSearchRequestSearchPassengerList>) };
    inline vector<IntlFlightListingSearchRequestSearchPassengerList> searchPassengerList() { DARABONBA_PTR_GET(searchPassengerList_, vector<IntlFlightListingSearchRequestSearchPassengerList>) };
    inline IntlFlightListingSearchRequest& setSearchPassengerList(const vector<IntlFlightListingSearchRequestSearchPassengerList> & searchPassengerList) { DARABONBA_PTR_SET_VALUE(searchPassengerList_, searchPassengerList) };
    inline IntlFlightListingSearchRequest& setSearchPassengerList(vector<IntlFlightListingSearchRequestSearchPassengerList> && searchPassengerList) { DARABONBA_PTR_SET_RVALUE(searchPassengerList_, searchPassengerList) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightListingSearchRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightListingSearchRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


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
    std::shared_ptr<vector<IntlFlightListingSearchRequestSearchJourneys>> searchJourneys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    std::shared_ptr<vector<IntlFlightListingSearchRequestSearchPassengerList>> searchPassengerList_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
