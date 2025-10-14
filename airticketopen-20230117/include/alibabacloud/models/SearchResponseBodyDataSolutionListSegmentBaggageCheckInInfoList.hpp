// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
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
  class SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(const SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
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
    inline SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setLuggageDirectInfoType(int32_t luggageDirectInfoType) { DARABONBA_PTR_SET_VALUE(luggageDirectInfoType_, luggageDirectInfoType) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // through check-in baggage policy type
    // 1. baggage through check-in between segments
    // 2. baggage re-check-in needed between segments
    // 3. baggage through check-in at stop city ( applies for stop flight )
    // 4. baggage re-checkin needed at stop city ( applies for stop flight )
    std::shared_ptr<int32_t> luggageDirectInfoType_ = nullptr;
    // segment id list. 
    // all the listed segment ids share the same baggage through check-in  policy
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
