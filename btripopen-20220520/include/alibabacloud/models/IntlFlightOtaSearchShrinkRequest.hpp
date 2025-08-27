// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_TO_JSON(search_passenger_list, searchPassengerListShrink_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(cabin_type, cabinType_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneysShrink_);
      DARABONBA_PTR_FROM_JSON(search_passenger_list, searchPassengerListShrink_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    IntlFlightOtaSearchShrinkRequest() = default ;
    IntlFlightOtaSearchShrinkRequest(const IntlFlightOtaSearchShrinkRequest &) = default ;
    IntlFlightOtaSearchShrinkRequest(IntlFlightOtaSearchShrinkRequest &&) = default ;
    IntlFlightOtaSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchShrinkRequest() = default ;
    IntlFlightOtaSearchShrinkRequest& operator=(const IntlFlightOtaSearchShrinkRequest &) = default ;
    IntlFlightOtaSearchShrinkRequest& operator=(IntlFlightOtaSearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->cabinType_ != nullptr && this->isvName_ != nullptr && this->searchJourneysShrink_ != nullptr && this->searchPassengerListShrink_ != nullptr
        && this->tripType_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightOtaSearchShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightOtaSearchShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // cabinType Field Functions 
    bool hasCabinType() const { return this->cabinType_ != nullptr;};
    void deleteCabinType() { this->cabinType_ = nullptr;};
    inline int32_t cabinType() const { DARABONBA_PTR_GET_DEFAULT(cabinType_, 0) };
    inline IntlFlightOtaSearchShrinkRequest& setCabinType(int32_t cabinType) { DARABONBA_PTR_SET_VALUE(cabinType_, cabinType) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightOtaSearchShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // searchJourneysShrink Field Functions 
    bool hasSearchJourneysShrink() const { return this->searchJourneysShrink_ != nullptr;};
    void deleteSearchJourneysShrink() { this->searchJourneysShrink_ = nullptr;};
    inline string searchJourneysShrink() const { DARABONBA_PTR_GET_DEFAULT(searchJourneysShrink_, "") };
    inline IntlFlightOtaSearchShrinkRequest& setSearchJourneysShrink(string searchJourneysShrink) { DARABONBA_PTR_SET_VALUE(searchJourneysShrink_, searchJourneysShrink) };


    // searchPassengerListShrink Field Functions 
    bool hasSearchPassengerListShrink() const { return this->searchPassengerListShrink_ != nullptr;};
    void deleteSearchPassengerListShrink() { this->searchPassengerListShrink_ = nullptr;};
    inline string searchPassengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(searchPassengerListShrink_, "") };
    inline IntlFlightOtaSearchShrinkRequest& setSearchPassengerListShrink(string searchPassengerListShrink) { DARABONBA_PTR_SET_VALUE(searchPassengerListShrink_, searchPassengerListShrink) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline IntlFlightOtaSearchShrinkRequest& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<int32_t> cabinType_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> searchJourneysShrink_ = nullptr;
    std::shared_ptr<string> searchPassengerListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
