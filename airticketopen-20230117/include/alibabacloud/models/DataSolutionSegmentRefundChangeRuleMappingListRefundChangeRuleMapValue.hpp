// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList.hpp>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList.hpp>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList.hpp>
#include <alibabacloud/models/DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_TO_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    friend void from_json(const Darabonba::Json& j, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_FROM_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &&) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue() = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& operator=(const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& operator=(DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refundRuleAllUnusedList_ == nullptr
        && return this->refundRulePartUnusedList_ == nullptr && return this->changeRuleInUnusedList_ == nullptr && return this->changeRuleOutUnusedList_ == nullptr; };
    // refundRuleAllUnusedList Field Functions 
    bool hasRefundRuleAllUnusedList() const { return this->refundRuleAllUnusedList_ != nullptr;};
    void deleteRefundRuleAllUnusedList() { this->refundRuleAllUnusedList_ = nullptr;};
    inline const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList() const { DARABONBA_PTR_GET_CONST(refundRuleAllUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> refundRuleAllUnusedList() { DARABONBA_PTR_GET(refundRuleAllUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> & refundRuleAllUnusedList) { DARABONBA_PTR_SET_VALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList> && refundRuleAllUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };


    // refundRulePartUnusedList Field Functions 
    bool hasRefundRulePartUnusedList() const { return this->refundRulePartUnusedList_ != nullptr;};
    void deleteRefundRulePartUnusedList() { this->refundRulePartUnusedList_ = nullptr;};
    inline const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList() const { DARABONBA_PTR_GET_CONST(refundRulePartUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> refundRulePartUnusedList() { DARABONBA_PTR_GET(refundRulePartUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> & refundRulePartUnusedList) { DARABONBA_PTR_SET_VALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList> && refundRulePartUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };


    // changeRuleInUnusedList Field Functions 
    bool hasChangeRuleInUnusedList() const { return this->changeRuleInUnusedList_ != nullptr;};
    void deleteChangeRuleInUnusedList() { this->changeRuleInUnusedList_ = nullptr;};
    inline const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleInUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> changeRuleInUnusedList() { DARABONBA_PTR_GET(changeRuleInUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> & changeRuleInUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList> && changeRuleInUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };


    // changeRuleOutUnusedList Field Functions 
    bool hasChangeRuleOutUnusedList() const { return this->changeRuleOutUnusedList_ != nullptr;};
    void deleteChangeRuleOutUnusedList() { this->changeRuleOutUnusedList_ = nullptr;};
    inline const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleOutUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> changeRuleOutUnusedList() { DARABONBA_PTR_GET(changeRuleOutUnusedList_, vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(const vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> & changeRuleOutUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList> && changeRuleOutUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };


  protected:
    // refund rule for fully-unused tickets
    std::shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRuleAllUnusedList>> refundRuleAllUnusedList_ = nullptr;
    // refund rule for partially-used tickets
    std::shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueRefundRulePartUnusedList>> refundRulePartUnusedList_ = nullptr;
    // change rule for inbound segment unused tickets
    std::shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleInUnusedList>> changeRuleInUnusedList_ = nullptr;
    // change rule for outbound-flight-unused tickets
    std::shared_ptr<vector<DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList>> changeRuleOutUnusedList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
