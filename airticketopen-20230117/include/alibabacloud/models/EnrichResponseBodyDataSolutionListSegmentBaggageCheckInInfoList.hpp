// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(const EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->luggageDirectInfoType_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // luggageDirectInfoType Field Functions 
    bool hasLuggageDirectInfoType() const { return this->luggageDirectInfoType_ != nullptr;};
    void deleteLuggageDirectInfoType() { this->luggageDirectInfoType_ = nullptr;};
    inline int32_t luggageDirectInfoType() const { DARABONBA_PTR_GET_DEFAULT(luggageDirectInfoType_, 0) };
    inline EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setLuggageDirectInfoType(int32_t luggageDirectInfoType) { DARABONBA_PTR_SET_VALUE(luggageDirectInfoType_, luggageDirectInfoType) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // Baggage check-in rule type 1: Direct baggage between segments; 2: Re-check baggage between segments; 3: Direct baggage at stopover cities; 4: Re-check baggage at stopover cities
    std::shared_ptr<int32_t> luggageDirectInfoType_ = nullptr;
    // List of segment IDs that use the same baggage check-in rule
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
