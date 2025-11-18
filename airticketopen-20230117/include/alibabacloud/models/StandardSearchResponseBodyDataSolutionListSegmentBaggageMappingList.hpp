// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGEMAPPINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList() = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList(const StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList &) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList(StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList &&) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList() = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& operator=(const StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList &) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& operator=(StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passengerBaggageAllowanceMapping_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // passengerBaggageAllowanceMapping Field Functions 
    bool hasPassengerBaggageAllowanceMapping() const { return this->passengerBaggageAllowanceMapping_ != nullptr;};
    void deletePassengerBaggageAllowanceMapping() { this->passengerBaggageAllowanceMapping_ = nullptr;};
    inline const map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping() const { DARABONBA_PTR_GET_CONST(passengerBaggageAllowanceMapping_, map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
    inline map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> passengerBaggageAllowanceMapping() { DARABONBA_PTR_GET(passengerBaggageAllowanceMapping_, map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(const map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_VALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> && passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_RVALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    std::shared_ptr<map<string, Models::DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ = nullptr;
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
