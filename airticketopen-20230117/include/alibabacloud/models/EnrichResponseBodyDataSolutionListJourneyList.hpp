// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTJOURNEYLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTJOURNEYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListJourneyListSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionListJourneyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListJourneyList& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListJourneyList& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
    };
    EnrichResponseBodyDataSolutionListJourneyList() = default ;
    EnrichResponseBodyDataSolutionListJourneyList(const EnrichResponseBodyDataSolutionListJourneyList &) = default ;
    EnrichResponseBodyDataSolutionListJourneyList(EnrichResponseBodyDataSolutionListJourneyList &&) = default ;
    EnrichResponseBodyDataSolutionListJourneyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListJourneyList() = default ;
    EnrichResponseBodyDataSolutionListJourneyList& operator=(const EnrichResponseBodyDataSolutionListJourneyList &) = default ;
    EnrichResponseBodyDataSolutionListJourneyList& operator=(EnrichResponseBodyDataSolutionListJourneyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr
        && return this->transferCount_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList>) };
    inline EnrichResponseBodyDataSolutionListJourneyList& setSegmentList(const vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline EnrichResponseBodyDataSolutionListJourneyList& setSegmentList(vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int32_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
    inline EnrichResponseBodyDataSolutionListJourneyList& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


  protected:
    // segment information
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionListJourneyListSegmentList>> segmentList_ = nullptr;
    // number of transfers
    std::shared_ptr<int32_t> transferCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
