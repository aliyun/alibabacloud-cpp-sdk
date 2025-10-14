// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default ;
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &) = default ;
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &&) = default ;
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default ;
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& operator=(const SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &) = default ;
    SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& operator=(SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundChangeRuleMap_ == nullptr
        && return this->segmentIdList_ == nullptr; };
    // refundChangeRuleMap Field Functions 
    bool hasRefundChangeRuleMap() const { return this->refundChangeRuleMap_ != nullptr;};
    void deleteRefundChangeRuleMap() { this->refundChangeRuleMap_ = nullptr;};
    inline const map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
    inline map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> refundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>) };
    inline SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(const map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
    inline SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // change and refund policy mapping, key is passenger type, value is change and refund policy details
    std::shared_ptr<map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ = nullptr;
    // segment id list. 
    // all the listed segment ids share the same change and refund policy
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
