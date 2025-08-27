// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOtaSearchRequestSearchJourneys.hpp>
#include <alibabacloud/models/IntlFlightOtaSearchRequestSearchPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(search_passenger_list, searchPassengerList_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightOtaSearchRequest() = default ;
    IntlFlightOtaSearchRequest(const IntlFlightOtaSearchRequest &) = default ;
    IntlFlightOtaSearchRequest(IntlFlightOtaSearchRequest &&) = default ;
    IntlFlightOtaSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchRequest() = default ;
    IntlFlightOtaSearchRequest& operator=(const IntlFlightOtaSearchRequest &) = default ;
    IntlFlightOtaSearchRequest& operator=(IntlFlightOtaSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->cabinType_ != nullptr && this->isvName_ != nullptr && this->searchJourneys_ != nullptr && this->searchPassengerList_ != nullptr
        && this->tripType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightOtaSearchRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightOtaSearchRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // cabinType Field Functions 
    bool hasCabinType() const { return this->cabinType_ != nullptr;};
    void deleteCabinType() { this->cabinType_ = nullptr;};
    inline int32_t cabinType() const { DARABONBA_PTR_GET_DEFAULT(cabinType_, 0) };
    inline IntlFlightOtaSearchRequest& setCabinType(int32_t cabinType) { DARABONBA_PTR_SET_VALUE(cabinType_, cabinType) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightOtaSearchRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<IntlFlightOtaSearchRequestSearchJourneys> & searchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<IntlFlightOtaSearchRequestSearchJourneys>) };
    inline vector<IntlFlightOtaSearchRequestSearchJourneys> searchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<IntlFlightOtaSearchRequestSearchJourneys>) };
    inline IntlFlightOtaSearchRequest& setSearchJourneys(const vector<IntlFlightOtaSearchRequestSearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline IntlFlightOtaSearchRequest& setSearchJourneys(vector<IntlFlightOtaSearchRequestSearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // searchPassengerList Field Functions 
    bool hasSearchPassengerList() const { return this->searchPassengerList_ != nullptr;};
    void deleteSearchPassengerList() { this->searchPassengerList_ = nullptr;};
    inline const vector<IntlFlightOtaSearchRequestSearchPassengerList> & searchPassengerList() const { DARABONBA_PTR_GET_CONST(searchPassengerList_, vector<IntlFlightOtaSearchRequestSearchPassengerList>) };
    inline vector<IntlFlightOtaSearchRequestSearchPassengerList> searchPassengerList() { DARABONBA_PTR_GET(searchPassengerList_, vector<IntlFlightOtaSearchRequestSearchPassengerList>) };
    inline IntlFlightOtaSearchRequest& setSearchPassengerList(const vector<IntlFlightOtaSearchRequestSearchPassengerList> & searchPassengerList) { DARABONBA_PTR_SET_VALUE(searchPassengerList_, searchPassengerList) };
    inline IntlFlightOtaSearchRequest& setSearchPassengerList(vector<IntlFlightOtaSearchRequestSearchPassengerList> && searchPassengerList) { DARABONBA_PTR_SET_RVALUE(searchPassengerList_, searchPassengerList) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightOtaSearchRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<int32_t> cabinType_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<IntlFlightOtaSearchRequestSearchJourneys>> searchJourneys_ = nullptr;
    std::shared_ptr<vector<IntlFlightOtaSearchRequestSearchPassengerList>> searchPassengerList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
