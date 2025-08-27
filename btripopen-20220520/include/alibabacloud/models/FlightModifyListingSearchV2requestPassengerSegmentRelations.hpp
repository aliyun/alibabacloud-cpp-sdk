// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUESTPASSENGERSEGMENTRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2REQUESTPASSENGERSEGMENTRELATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2RequestPassengerSegmentRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2RequestPassengerSegmentRelations& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2RequestPassengerSegmentRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    FlightModifyListingSearchV2RequestPassengerSegmentRelations() = default ;
    FlightModifyListingSearchV2RequestPassengerSegmentRelations(const FlightModifyListingSearchV2RequestPassengerSegmentRelations &) = default ;
    FlightModifyListingSearchV2RequestPassengerSegmentRelations(FlightModifyListingSearchV2RequestPassengerSegmentRelations &&) = default ;
    FlightModifyListingSearchV2RequestPassengerSegmentRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2RequestPassengerSegmentRelations() = default ;
    FlightModifyListingSearchV2RequestPassengerSegmentRelations& operator=(const FlightModifyListingSearchV2RequestPassengerSegmentRelations &) = default ;
    FlightModifyListingSearchV2RequestPassengerSegmentRelations& operator=(FlightModifyListingSearchV2RequestPassengerSegmentRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->segmentIdList_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline FlightModifyListingSearchV2RequestPassengerSegmentRelations& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline FlightModifyListingSearchV2RequestPassengerSegmentRelations& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline FlightModifyListingSearchV2RequestPassengerSegmentRelations& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
