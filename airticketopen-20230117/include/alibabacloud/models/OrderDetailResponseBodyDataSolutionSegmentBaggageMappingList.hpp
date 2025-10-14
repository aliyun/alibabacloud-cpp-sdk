// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSEGMENTBAGGAGEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSEGMENTBAGGAGEMAPPINGLIST_HPP_
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
  class OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_baggage_allowance_mapping, passengerBaggageAllowanceMapping_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList() = default ;
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList(const OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList &) = default ;
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList(OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList &&) = default ;
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList() = default ;
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& operator=(const OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList &) = default ;
    OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& operator=(OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList &&) = default ;
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
    inline OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(const map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> & passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_VALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };
    inline OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& setPassengerBaggageAllowanceMapping(map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue> && passengerBaggageAllowanceMapping) { DARABONBA_PTR_SET_RVALUE(passengerBaggageAllowanceMapping_, passengerBaggageAllowanceMapping) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // baggage rule mapping, key is passenger type, value is baggage allowance details
    std::shared_ptr<map<string, Models::DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue>> passengerBaggageAllowanceMapping_ = nullptr;
    // segment id list. all the listed segment ids share the same baggage rule
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
