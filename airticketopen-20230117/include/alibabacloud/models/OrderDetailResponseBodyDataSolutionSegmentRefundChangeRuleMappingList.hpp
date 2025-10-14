// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() = default ;
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList(const OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList &) = default ;
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList(OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList &&) = default ;
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList() = default ;
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& operator=(const OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList &) = default ;
    OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& operator=(OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundChangeRuleMap_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // refundChangeRuleMap Field Functions 
    bool hasRefundChangeRuleMap() const { return this->refundChangeRuleMap_ != nullptr;};
    void deleteRefundChangeRuleMap() { this->refundChangeRuleMap_ = nullptr;};
    inline const map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
    inline map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> refundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
    inline OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(const map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
    inline OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // change and refund policy mapping, key is passenger type, value is change and refund policy details
    std::shared_ptr<map<string, Models::DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ = nullptr;
    // segment id list. all the listed segment ids share the same change and refund policy
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
