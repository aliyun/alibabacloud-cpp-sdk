// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUESTSELECTEDSEGMENTS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUESTSELECTEDSEGMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2RequestSelectedSegments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2RequestSelectedSegments& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(dep_date_time, depDateTime_);
      DARABONBA_PTR_TO_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_TO_JSON(segment_seq, segmentSeq_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2RequestSelectedSegments& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_date_time, depDateTime_);
      DARABONBA_PTR_FROM_JSON(journey_seq, journeySeq_);
      DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
      DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
      DARABONBA_PTR_FROM_JSON(segment_seq, segmentSeq_);
    };
    FlightModifyListingSearchV2RequestSelectedSegments() = default ;
    FlightModifyListingSearchV2RequestSelectedSegments(const FlightModifyListingSearchV2RequestSelectedSegments &) = default ;
    FlightModifyListingSearchV2RequestSelectedSegments(FlightModifyListingSearchV2RequestSelectedSegments &&) = default ;
    FlightModifyListingSearchV2RequestSelectedSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2RequestSelectedSegments() = default ;
    FlightModifyListingSearchV2RequestSelectedSegments& operator=(const FlightModifyListingSearchV2RequestSelectedSegments &) = default ;
    FlightModifyListingSearchV2RequestSelectedSegments& operator=(FlightModifyListingSearchV2RequestSelectedSegments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->depCityCode_ != nullptr && this->depDateTime_ != nullptr && this->journeySeq_ != nullptr && this->marketingFlightNo_ != nullptr && this->operatingFlightNo_ != nullptr
        && this->segmentSeq_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // depDateTime Field Functions 
    bool hasDepDateTime() const { return this->depDateTime_ != nullptr;};
    void deleteDepDateTime() { this->depDateTime_ = nullptr;};
    inline string depDateTime() const { DARABONBA_PTR_GET_DEFAULT(depDateTime_, "") };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setDepDateTime(string depDateTime) { DARABONBA_PTR_SET_VALUE(depDateTime_, depDateTime) };


    // journeySeq Field Functions 
    bool hasJourneySeq() const { return this->journeySeq_ != nullptr;};
    void deleteJourneySeq() { this->journeySeq_ = nullptr;};
    inline int32_t journeySeq() const { DARABONBA_PTR_GET_DEFAULT(journeySeq_, 0) };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setJourneySeq(int32_t journeySeq) { DARABONBA_PTR_SET_VALUE(journeySeq_, journeySeq) };


    // marketingFlightNo Field Functions 
    bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
    void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
    inline string marketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


    // operatingFlightNo Field Functions 
    bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
    void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
    inline string operatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


    // segmentSeq Field Functions 
    bool hasSegmentSeq() const { return this->segmentSeq_ != nullptr;};
    void deleteSegmentSeq() { this->segmentSeq_ = nullptr;};
    inline int32_t segmentSeq() const { DARABONBA_PTR_GET_DEFAULT(segmentSeq_, 0) };
    inline FlightModifyListingSearchV2RequestSelectedSegments& setSegmentSeq(int32_t segmentSeq) { DARABONBA_PTR_SET_VALUE(segmentSeq_, segmentSeq) };


  protected:
    std::shared_ptr<string> arrCityCode_ = nullptr;
    std::shared_ptr<string> depCityCode_ = nullptr;
    std::shared_ptr<string> depDateTime_ = nullptr;
    std::shared_ptr<int32_t> journeySeq_ = nullptr;
    std::shared_ptr<string> marketingFlightNo_ = nullptr;
    std::shared_ptr<string> operatingFlightNo_ = nullptr;
    std::shared_ptr<int32_t> segmentSeq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
