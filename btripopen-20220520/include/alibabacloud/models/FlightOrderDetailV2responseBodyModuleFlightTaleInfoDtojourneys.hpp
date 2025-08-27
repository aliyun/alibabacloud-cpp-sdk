// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTOJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODYMODULEFLIGHTTALEINFODTOJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(all_fly_duration, allFlyDuration_);
      DARABONBA_PTR_TO_JSON(all_fly_duration_after_change, allFlyDurationAfterChange_);
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
      DARABONBA_PTR_TO_JSON(baggage_details, baggageDetails_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_TO_JSON(dep_time, depTime_);
      DARABONBA_PTR_TO_JSON(flight_status, flightStatus_);
      DARABONBA_PTR_TO_JSON(iata_no, iataNo_);
      DARABONBA_PTR_TO_JSON(is_reshop_journey, isReshopJourney_);
      DARABONBA_PTR_TO_JSON(is_transfer, isTransfer_);
      DARABONBA_PTR_TO_JSON(journey_title, journeyTitle_);
      DARABONBA_PTR_TO_JSON(refund_change_details, refundChangeDetails_);
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(all_fly_duration, allFlyDuration_);
      DARABONBA_PTR_FROM_JSON(all_fly_duration_after_change, allFlyDurationAfterChange_);
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
      DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
      DARABONBA_PTR_FROM_JSON(baggage_details, baggageDetails_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
      DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
      DARABONBA_PTR_FROM_JSON(flight_status, flightStatus_);
      DARABONBA_PTR_FROM_JSON(iata_no, iataNo_);
      DARABONBA_PTR_FROM_JSON(is_reshop_journey, isReshopJourney_);
      DARABONBA_PTR_FROM_JSON(is_transfer, isTransfer_);
      DARABONBA_PTR_FROM_JSON(journey_title, journeyTitle_);
      DARABONBA_PTR_FROM_JSON(refund_change_details, refundChangeDetails_);
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys &&) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys() = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& operator=(const FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys &) = default ;
    FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& operator=(FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allFlyDuration_ != nullptr
        && this->allFlyDurationAfterChange_ != nullptr && this->applyId_ != nullptr && this->arrCityCode_ != nullptr && this->arrCityName_ != nullptr && this->arrTime_ != nullptr
        && this->baggageDetails_ != nullptr && this->depCityCode_ != nullptr && this->depCityName_ != nullptr && this->depTime_ != nullptr && this->flightStatus_ != nullptr
        && this->iataNo_ != nullptr && this->isReshopJourney_ != nullptr && this->isTransfer_ != nullptr && this->journeyTitle_ != nullptr && this->refundChangeDetails_ != nullptr
        && this->segmentList_ != nullptr; };
    // allFlyDuration Field Functions 
    bool hasAllFlyDuration() const { return this->allFlyDuration_ != nullptr;};
    void deleteAllFlyDuration() { this->allFlyDuration_ = nullptr;};
    inline int64_t allFlyDuration() const { DARABONBA_PTR_GET_DEFAULT(allFlyDuration_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setAllFlyDuration(int64_t allFlyDuration) { DARABONBA_PTR_SET_VALUE(allFlyDuration_, allFlyDuration) };


    // allFlyDurationAfterChange Field Functions 
    bool hasAllFlyDurationAfterChange() const { return this->allFlyDurationAfterChange_ != nullptr;};
    void deleteAllFlyDurationAfterChange() { this->allFlyDurationAfterChange_ = nullptr;};
    inline int64_t allFlyDurationAfterChange() const { DARABONBA_PTR_GET_DEFAULT(allFlyDurationAfterChange_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setAllFlyDurationAfterChange(int64_t allFlyDurationAfterChange) { DARABONBA_PTR_SET_VALUE(allFlyDurationAfterChange_, allFlyDurationAfterChange) };


    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // arrCityName Field Functions 
    bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
    void deleteArrCityName() { this->arrCityName_ = nullptr;};
    inline string arrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


    // arrTime Field Functions 
    bool hasArrTime() const { return this->arrTime_ != nullptr;};
    void deleteArrTime() { this->arrTime_ = nullptr;};
    inline string arrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


    // baggageDetails Field Functions 
    bool hasBaggageDetails() const { return this->baggageDetails_ != nullptr;};
    void deleteBaggageDetails() { this->baggageDetails_ = nullptr;};
    inline string baggageDetails() const { DARABONBA_PTR_GET_DEFAULT(baggageDetails_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setBaggageDetails(string baggageDetails) { DARABONBA_PTR_SET_VALUE(baggageDetails_, baggageDetails) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depCityName Field Functions 
    bool hasDepCityName() const { return this->depCityName_ != nullptr;};
    void deleteDepCityName() { this->depCityName_ = nullptr;};
    inline string depCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


    // depTime Field Functions 
    bool hasDepTime() const { return this->depTime_ != nullptr;};
    void deleteDepTime() { this->depTime_ = nullptr;};
    inline string depTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


    // flightStatus Field Functions 
    bool hasFlightStatus() const { return this->flightStatus_ != nullptr;};
    void deleteFlightStatus() { this->flightStatus_ = nullptr;};
    inline string flightStatus() const { DARABONBA_PTR_GET_DEFAULT(flightStatus_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setFlightStatus(string flightStatus) { DARABONBA_PTR_SET_VALUE(flightStatus_, flightStatus) };


    // iataNo Field Functions 
    bool hasIataNo() const { return this->iataNo_ != nullptr;};
    void deleteIataNo() { this->iataNo_ = nullptr;};
    inline string iataNo() const { DARABONBA_PTR_GET_DEFAULT(iataNo_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setIataNo(string iataNo) { DARABONBA_PTR_SET_VALUE(iataNo_, iataNo) };


    // isReshopJourney Field Functions 
    bool hasIsReshopJourney() const { return this->isReshopJourney_ != nullptr;};
    void deleteIsReshopJourney() { this->isReshopJourney_ = nullptr;};
    inline bool isReshopJourney() const { DARABONBA_PTR_GET_DEFAULT(isReshopJourney_, false) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setIsReshopJourney(bool isReshopJourney) { DARABONBA_PTR_SET_VALUE(isReshopJourney_, isReshopJourney) };


    // isTransfer Field Functions 
    bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
    void deleteIsTransfer() { this->isTransfer_ = nullptr;};
    inline bool isTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, false) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setIsTransfer(bool isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


    // journeyTitle Field Functions 
    bool hasJourneyTitle() const { return this->journeyTitle_ != nullptr;};
    void deleteJourneyTitle() { this->journeyTitle_ = nullptr;};
    inline string journeyTitle() const { DARABONBA_PTR_GET_DEFAULT(journeyTitle_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setJourneyTitle(string journeyTitle) { DARABONBA_PTR_SET_VALUE(journeyTitle_, journeyTitle) };


    // refundChangeDetails Field Functions 
    bool hasRefundChangeDetails() const { return this->refundChangeDetails_ != nullptr;};
    void deleteRefundChangeDetails() { this->refundChangeDetails_ = nullptr;};
    inline string refundChangeDetails() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDetails_, "") };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setRefundChangeDetails(string refundChangeDetails) { DARABONBA_PTR_SET_VALUE(refundChangeDetails_, refundChangeDetails) };


    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList>) };
    inline vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList>) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setSegmentList(const vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneys& setSegmentList(vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    std::shared_ptr<int64_t> allFlyDuration_ = nullptr;
    std::shared_ptr<int64_t> allFlyDurationAfterChange_ = nullptr;
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> arrCityName_ = nullptr;
    std::shared_ptr<string> arrTime_ = nullptr;
    std::shared_ptr<string> baggageDetails_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depCityName_ = nullptr;
    std::shared_ptr<string> depTime_ = nullptr;
    std::shared_ptr<string> flightStatus_ = nullptr;
    // iata_no
    std::shared_ptr<string> iataNo_ = nullptr;
    std::shared_ptr<bool> isReshopJourney_ = nullptr;
    std::shared_ptr<bool> isTransfer_ = nullptr;
    std::shared_ptr<string> journeyTitle_ = nullptr;
    std::shared_ptr<string> refundChangeDetails_ = nullptr;
    std::shared_ptr<vector<Models::FlightOrderDetailV2ResponseBodyModuleFlightTaleInfoDTOJourneysSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
