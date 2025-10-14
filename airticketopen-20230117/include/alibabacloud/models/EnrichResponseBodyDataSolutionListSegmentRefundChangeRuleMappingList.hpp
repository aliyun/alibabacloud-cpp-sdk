// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLIST_HPP_
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
  class EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default ;
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &) = default ;
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &&) = default ;
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList() = default ;
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& operator=(const EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &) = default ;
    EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& operator=(EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList &&) = default ;
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
    inline EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(const map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
    inline EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setRefundChangeRuleMap(map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // change and refund policy mapping, key is passenger type, value is change and refund policy detail
    std::shared_ptr<map<string, Models::DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue>> refundChangeRuleMap_ = nullptr;
    // segment id list. all the listed segment ids share the same change and refund policy
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
