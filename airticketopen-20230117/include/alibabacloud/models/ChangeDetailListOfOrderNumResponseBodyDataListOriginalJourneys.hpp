// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTORIGINALJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATALISTORIGINALJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
    };
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys(const ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys(ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys &&) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys() = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& operator=(const ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys &) = default ;
    ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& operator=(ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr
        && return this->transferCount_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList>) };
    inline vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList>) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& setSegmentList(const vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& setSegmentList(vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int32_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
    inline ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailListOfOrderNumResponseBodyDataListOriginalJourneysSegmentList>> segmentList_ = nullptr;
    std::shared_ptr<int32_t> transferCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
