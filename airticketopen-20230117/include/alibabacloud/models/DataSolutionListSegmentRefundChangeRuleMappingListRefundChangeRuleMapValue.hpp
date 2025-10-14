// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList.hpp>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList.hpp>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList.hpp>
#include <alibabacloud/models/DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_TO_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    friend void from_json(const Darabonba::Json& j, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_FROM_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &&) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& operator=(const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& operator=(DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundRuleAllUnusedList_ == nullptr
        && return this->refundRulePartUnusedList_ == nullptr && return this->changeRuleInUnusedList_ == nullptr && return this->changeRuleOutUnusedList_ == nullptr; };
    // refundRuleAllUnusedList Field Functions 
    bool hasRefundRuleAllUnusedList() const { return this->refundRuleAllUnusedList_ != nullptr;};
    void deleteRefundRuleAllUnusedList() { this->refundRuleAllUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList() const { DARABONBA_PTR_GET_CONST(refundRuleAllUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> refundRuleAllUnusedList() { DARABONBA_PTR_GET(refundRuleAllUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList) { DARABONBA_PTR_SET_VALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> && refundRuleAllUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };


    // refundRulePartUnusedList Field Functions 
    bool hasRefundRulePartUnusedList() const { return this->refundRulePartUnusedList_ != nullptr;};
    void deleteRefundRulePartUnusedList() { this->refundRulePartUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList() const { DARABONBA_PTR_GET_CONST(refundRulePartUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> refundRulePartUnusedList() { DARABONBA_PTR_GET(refundRulePartUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList) { DARABONBA_PTR_SET_VALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> && refundRulePartUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };


    // changeRuleInUnusedList Field Functions 
    bool hasChangeRuleInUnusedList() const { return this->changeRuleInUnusedList_ != nullptr;};
    void deleteChangeRuleInUnusedList() { this->changeRuleInUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleInUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> changeRuleInUnusedList() { DARABONBA_PTR_GET(changeRuleInUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> && changeRuleInUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };


    // changeRuleOutUnusedList Field Functions 
    bool hasChangeRuleOutUnusedList() const { return this->changeRuleOutUnusedList_ != nullptr;};
    void deleteChangeRuleOutUnusedList() { this->changeRuleOutUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleOutUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> changeRuleOutUnusedList() { DARABONBA_PTR_GET(changeRuleOutUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> && changeRuleOutUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };


  protected:
    // refund rule for fully-unused tickets
    std::shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList_ = nullptr;
    // refund rule for partially-used tickets
    std::shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList_ = nullptr;
    // change rule for inbound segment unused tickets
    std::shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList_ = nullptr;
    // change rule for outbound segment unused tickets
    std::shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
