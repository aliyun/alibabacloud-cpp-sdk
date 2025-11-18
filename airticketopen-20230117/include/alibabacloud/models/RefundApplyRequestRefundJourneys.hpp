// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYREQUESTREFUNDJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundApplyRequestRefundJourneysSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyRequestRefundJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyRequestRefundJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyRequestRefundJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
    };
    RefundApplyRequestRefundJourneys() = default ;
    RefundApplyRequestRefundJourneys(const RefundApplyRequestRefundJourneys &) = default ;
    RefundApplyRequestRefundJourneys(RefundApplyRequestRefundJourneys &&) = default ;
    RefundApplyRequestRefundJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyRequestRefundJourneys() = default ;
    RefundApplyRequestRefundJourneys& operator=(const RefundApplyRequestRefundJourneys &) = default ;
    RefundApplyRequestRefundJourneys& operator=(RefundApplyRequestRefundJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segmentList_ == nullptr; };
    // segmentList Field Functions 
    bool hasSegmentList() const { return this->segmentList_ != nullptr;};
    void deleteSegmentList() { this->segmentList_ = nullptr;};
    inline const vector<Models::RefundApplyRequestRefundJourneysSegmentList> & segmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Models::RefundApplyRequestRefundJourneysSegmentList>) };
    inline vector<Models::RefundApplyRequestRefundJourneysSegmentList> segmentList() { DARABONBA_PTR_GET(segmentList_, vector<Models::RefundApplyRequestRefundJourneysSegmentList>) };
    inline RefundApplyRequestRefundJourneys& setSegmentList(const vector<Models::RefundApplyRequestRefundJourneysSegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
    inline RefundApplyRequestRefundJourneys& setSegmentList(vector<Models::RefundApplyRequestRefundJourneysSegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


  protected:
    // Flight segment information
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::RefundApplyRequestRefundJourneysSegmentList>> segmentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
