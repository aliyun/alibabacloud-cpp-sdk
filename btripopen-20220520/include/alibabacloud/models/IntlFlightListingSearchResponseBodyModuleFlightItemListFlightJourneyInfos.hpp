// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTITEMLISTFLIGHTJOURNEYINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_TO_JSON(transfer_time, transferTime_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
      DARABONBA_PTR_FROM_JSON(transfer_time, transferTime_);
    };
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos(const IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos(IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos &&) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos() = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& operator=(const IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos &) = default ;
    IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& operator=(IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->arrCityName_ != nullptr && this->arrTime_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr
        && this->duration_ != nullptr && this->flightSegmentInfos_ != nullptr && this->journeyIndex_ != nullptr && this->transferTime_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // flightSegmentInfos Field Functions 
    bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
    void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
    inline const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> & flightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>) };
    inline vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> flightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setFlightSegmentInfos(const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setFlightSegmentInfos(vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


    // journeyIndex Field Functions 
    bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
    void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
    inline int32_t journeyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


    // transferTime Field Functions 
    bool hasTransferTime() const { return this->transferTime_ != nullptr;};
    void deleteTransferTime() { this->transferTime_ = nullptr;};
    inline int32_t transferTime() const { DARABONBA_PTR_GET_DEFAULT(transferTime_, 0) };
    inline IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfos& setTransferTime(int32_t transferTime) { DARABONBA_PTR_SET_VALUE(transferTime_, transferTime) };


  protected:
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemListFlightJourneyInfosFlightSegmentInfos>> flightSegmentInfos_ = nullptr;
    std::shared_ptr<int32_t> journeyIndex_ = nullptr;
    std::shared_ptr<int32_t> transferTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
