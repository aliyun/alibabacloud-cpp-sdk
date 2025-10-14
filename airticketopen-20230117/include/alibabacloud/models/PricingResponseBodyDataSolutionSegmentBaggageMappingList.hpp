// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTIONSEGMENTBAGGAGEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTIONSEGMENTBAGGAGEMAPPINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBodyDataSolutionSegmentBaggageMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBodyDataSolutionSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBodyDataSolutionSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    PricingResponseBodyDataSolutionSegmentBaggageMappingList() = default ;
    PricingResponseBodyDataSolutionSegmentBaggageMappingList(const PricingResponseBodyDataSolutionSegmentBaggageMappingList &) = default ;
    PricingResponseBodyDataSolutionSegmentBaggageMappingList(PricingResponseBodyDataSolutionSegmentBaggageMappingList &&) = default ;
    PricingResponseBodyDataSolutionSegmentBaggageMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBodyDataSolutionSegmentBaggageMappingList() = default ;
    PricingResponseBodyDataSolutionSegmentBaggageMappingList& operator=(const PricingResponseBodyDataSolutionSegmentBaggageMappingList &) = default ;
    PricingResponseBodyDataSolutionSegmentBaggageMappingList& operator=(PricingResponseBodyDataSolutionSegmentBaggageMappingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passengerBaggageAllowanceMapping_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // passengerBaggageAllowanceMapping Field Functions 
    bool hasPassengerBaggageAllowanceMapping() const { return this->passengerBaggageAllowanceMapping_ != nullptr;};
    void deletePassengerBaggageAllowanceMapping() { this->passengerBaggageAllowanceMapping_ = nullptr;};
    inline const map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping() const { DARABONBA_PTR_GET_CONST(passengerBaggageAllowanceMapping_, map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
    inline map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> passengerBaggageAllowanceMapping() { DARABONBA_PTR_GET(passengerBaggageAllowanceMapping_, map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
    inline PricingResponseBodyDataSolutionSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(const map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_VALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };
    inline PricingResponseBodyDataSolutionSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> && passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_RVALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline PricingResponseBodyDataSolutionSegmentBaggageMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline PricingResponseBodyDataSolutionSegmentBaggageMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // baggage rule mapping, key is passenger type, value is baggage allowance details
    std::shared_ptr<map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ = nullptr;
    // segment id list all the listed segment id share the same baggage rule
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
