// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaSearchV2RequestSearchJourneys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_type_list, cabinTypeList_);
      DARABONBA_PTR_TO_JSON(direct_only, directOnly_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_TO_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_TO_JSON(search_mode, searchMode_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_type_list, cabinTypeList_);
      DARABONBA_PTR_FROM_JSON(direct_only, directOnly_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(need_share_flight, needShareFlight_);
      DARABONBA_PTR_FROM_JSON(search_journeys, searchJourneys_);
      DARABONBA_PTR_FROM_JSON(search_mode, searchMode_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightOtaSearchV2Request() = default ;
    FlightOtaSearchV2Request(const FlightOtaSearchV2Request &) = default ;
    FlightOtaSearchV2Request(FlightOtaSearchV2Request &&) = default ;
    FlightOtaSearchV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchV2Request() = default ;
    FlightOtaSearchV2Request& operator=(const FlightOtaSearchV2Request &) = default ;
    FlightOtaSearchV2Request& operator=(FlightOtaSearchV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinTypeList_ != nullptr
        && this->directOnly_ != nullptr && this->isvName_ != nullptr && this->needShareFlight_ != nullptr && this->searchJourneys_ != nullptr && this->searchMode_ != nullptr
        && this->tripType_ != nullptr; };
    // cabinTypeList Field Functions 
    bool hasCabinTypeList() const { return this->cabinTypeList_ != nullptr;};
    void deleteCabinTypeList() { this->cabinTypeList_ = nullptr;};
    inline const vector<int32_t> & cabinTypeList() const { DARABONBA_PTR_GET_CONST(cabinTypeList_, vector<int32_t>) };
    inline vector<int32_t> cabinTypeList() { DARABONBA_PTR_GET(cabinTypeList_, vector<int32_t>) };
    inline FlightOtaSearchV2Request& setCabinTypeList(const vector<int32_t> & cabinTypeList) { DARABONBA_PTR_SET_VALUE(cabinTypeList_, cabinTypeList) };
    inline FlightOtaSearchV2Request& setCabinTypeList(vector<int32_t> && cabinTypeList) { DARABONBA_PTR_SET_RVALUE(cabinTypeList_, cabinTypeList) };


    // directOnly Field Functions 
    bool hasDirectOnly() const { return this->directOnly_ != nullptr;};
    void deleteDirectOnly() { this->directOnly_ = nullptr;};
    inline bool directOnly() const { DARABONBA_PTR_GET_DEFAULT(directOnly_, false) };
    inline FlightOtaSearchV2Request& setDirectOnly(bool directOnly) { DARABONBA_PTR_SET_VALUE(directOnly_, directOnly) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightOtaSearchV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // needShareFlight Field Functions 
    bool hasNeedShareFlight() const { return this->needShareFlight_ != nullptr;};
    void deleteNeedShareFlight() { this->needShareFlight_ = nullptr;};
    inline bool needShareFlight() const { DARABONBA_PTR_GET_DEFAULT(needShareFlight_, false) };
    inline FlightOtaSearchV2Request& setNeedShareFlight(bool needShareFlight) { DARABONBA_PTR_SET_VALUE(needShareFlight_, needShareFlight) };


    // searchJourneys Field Functions 
    bool hasSearchJourneys() const { return this->searchJourneys_ != nullptr;};
    void deleteSearchJourneys() { this->searchJourneys_ = nullptr;};
    inline const vector<FlightOtaSearchV2RequestSearchJourneys> & searchJourneys() const { DARABONBA_PTR_GET_CONST(searchJourneys_, vector<FlightOtaSearchV2RequestSearchJourneys>) };
    inline vector<FlightOtaSearchV2RequestSearchJourneys> searchJourneys() { DARABONBA_PTR_GET(searchJourneys_, vector<FlightOtaSearchV2RequestSearchJourneys>) };
    inline FlightOtaSearchV2Request& setSearchJourneys(const vector<FlightOtaSearchV2RequestSearchJourneys> & searchJourneys) { DARABONBA_PTR_SET_VALUE(searchJourneys_, searchJourneys) };
    inline FlightOtaSearchV2Request& setSearchJourneys(vector<FlightOtaSearchV2RequestSearchJourneys> && searchJourneys) { DARABONBA_PTR_SET_RVALUE(searchJourneys_, searchJourneys) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline int32_t searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, 0) };
    inline FlightOtaSearchV2Request& setSearchMode(int32_t searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOtaSearchV2Request& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<vector<int32_t>> cabinTypeList_ = nullptr;
    std::shared_ptr<bool> directOnly_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<bool> needShareFlight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<FlightOtaSearchV2RequestSearchJourneys>> searchJourneys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> searchMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
