// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAREFUNDJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAREFUNDJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundDetailResponseBodyDataRefundJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataRefundJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataRefundJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      DARABONBA_PTR_TO_JSON(transfer_count, transferCount_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataRefundJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      DARABONBA_PTR_FROM_JSON(transfer_count, transferCount_);
    };
    RefundDetailResponseBodyDataRefundJourneys() = default ;
    RefundDetailResponseBodyDataRefundJourneys(const RefundDetailResponseBodyDataRefundJourneys &) = default ;
    RefundDetailResponseBodyDataRefundJourneys(RefundDetailResponseBodyDataRefundJourneys &&) = default ;
    RefundDetailResponseBodyDataRefundJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataRefundJourneys() = default ;
    RefundDetailResponseBodyDataRefundJourneys& operator=(const RefundDetailResponseBodyDataRefundJourneys &) = default ;
    RefundDetailResponseBodyDataRefundJourneys& operator=(RefundDetailResponseBodyDataRefundJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr
        && return this->transferCount_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList>) };
    inline vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList>) };
    inline RefundDetailResponseBodyDataRefundJourneys& setSegmentList(const vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline RefundDetailResponseBodyDataRefundJourneys& setSegmentList(vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    // transferCount Field Functions 
    bool hasTransferCount() const { return this->transferCount_ != nullptr;};
    void deleteTransferCount() { this->transferCount_ = nullptr;};
    inline int32_t transferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0) };
    inline RefundDetailResponseBodyDataRefundJourneys& setTransferCount(int32_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


  protected:
    // Segment information
    std::shared_ptr<vector<Models::RefundDetailResponseBodyDataRefundJourneysSegmentList>> segmentList_ = nullptr;
    // Number of transfers
    std::shared_ptr<int32_t> transferCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
