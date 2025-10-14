// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATALASTJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILRESPONSEBODYDATALASTJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailResponseBodyDataLastJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailResponseBodyDataLastJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailResponseBodyDataLastJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailResponseBodyDataLastJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
    };
    ChangeDetailResponseBodyDataLastJourneys() = default ;
    ChangeDetailResponseBodyDataLastJourneys(const ChangeDetailResponseBodyDataLastJourneys &) = default ;
    ChangeDetailResponseBodyDataLastJourneys(ChangeDetailResponseBodyDataLastJourneys &&) = default ;
    ChangeDetailResponseBodyDataLastJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailResponseBodyDataLastJourneys() = default ;
    ChangeDetailResponseBodyDataLastJourneys& operator=(const ChangeDetailResponseBodyDataLastJourneys &) = default ;
    ChangeDetailResponseBodyDataLastJourneys& operator=(ChangeDetailResponseBodyDataLastJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr
        && return this->transferCount_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList>) };
    inline vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList>) };
    inline ChangeDetailResponseBodyDataLastJourneys& setSegmentList(const vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline ChangeDetailResponseBodyDataLastJourneys& setSegmentList(vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int32_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
    inline ChangeDetailResponseBodyDataLastJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailResponseBodyDataLastJourneysSegmentList>> segmentList_ = nullptr;
    std::shared_ptr<int32_t> transferCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
