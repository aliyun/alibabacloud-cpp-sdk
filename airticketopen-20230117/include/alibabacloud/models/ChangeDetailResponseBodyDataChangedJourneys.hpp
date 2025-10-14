// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACHANGEDJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATACHANGEDJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailResponseBodyDataChangedJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBodyDataChangedJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBodyDataChangedJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBodyDataChangedJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
    };
    ChangeDetailResponseBodyDataChangedJourneys() = default ;
    ChangeDetailResponseBodyDataChangedJourneys(const ChangeDetailResponseBodyDataChangedJourneys &) = default ;
    ChangeDetailResponseBodyDataChangedJourneys(ChangeDetailResponseBodyDataChangedJourneys &&) = default ;
    ChangeDetailResponseBodyDataChangedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBodyDataChangedJourneys() = default ;
    ChangeDetailResponseBodyDataChangedJourneys& operator=(const ChangeDetailResponseBodyDataChangedJourneys &) = default ;
    ChangeDetailResponseBodyDataChangedJourneys& operator=(ChangeDetailResponseBodyDataChangedJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr
        && return this->transferCount_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList>) };
    inline vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList>) };
    inline ChangeDetailResponseBodyDataChangedJourneys& setSegmentList(const vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline ChangeDetailResponseBodyDataChangedJourneys& setSegmentList(vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int32_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
    inline ChangeDetailResponseBodyDataChangedJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataChangedJourneysSegmentList>> segmentList_ = nullptr;
    std::shared_ptr<int32_t> transferCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
