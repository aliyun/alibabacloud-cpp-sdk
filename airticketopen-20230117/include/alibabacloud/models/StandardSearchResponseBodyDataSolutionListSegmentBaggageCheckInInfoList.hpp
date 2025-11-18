// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTBAGGAGECHECKININFOLIST_HPP_
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
  class StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(luggage_direct_info_type, luggageDirectInfoType_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList() = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(const StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &) = default ;
    StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& operator=(StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList &&) = default ;
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
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setLuggageDirectInfoType(int32_t luggageDirectInfoType) { DARABONBA_PTR_SET_VALUE(luggageDirectInfoType_, luggageDirectInfoType) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline StandardSearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    std::shared_ptr<int32_t> luggageDirectInfoType_ = nullptr;
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
