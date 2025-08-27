// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHV2RESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(extensions, extensions_);
      DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
    };
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos(const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos(FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos &&) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos() = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& operator=(const FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos &) = default ;
    FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& operator=(FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->arrCityName_ != nullptr && this->arrTime_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr
        && this->duration_ != nullptr && this->extensions_ != nullptr && this->flightSegmentInfos_ != nullptr && this->journeyIndex_ != nullptr && this->transferTime_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const map<string, string> & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, map<string, string>) };
    inline map<string, string> extensions() { DARABONBA_PTR_GET(extensions_, map<string, string>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setExtensions(const map<string, string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setExtensions(map<string, string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // flightSegmentInfos Field Functions 
    bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
    void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
    inline const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> & flightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>) };
    inline vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> flightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setFlightSegmentInfos(const vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setFlightSegmentInfos(vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // transferTime Field Functions 
    bool hasTransferTime() const { return this->transferTime_ != nullptr;};
    void deleteTransferTime() { this->transferTime_ = nullptr;};
    inline int32_t transferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
    inline FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfos& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


  protected:
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<map<string, string>> extensions_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchV2ResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>> flightSegmentInfos_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> transferTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
