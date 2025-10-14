// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUECHANGERULEOUTUNUSEDLIST_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUECHANGERULEOUTUNUSEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_TO_JSON(can_change, canChange_);
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
    };
    friend void from_json(const Darabonba::Json& j, DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_FROM_JSON(can_change, canChange_);
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
    };
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &&) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& operator=(const DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &) = default ;
    DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& operator=(DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->timeUnit_ == nullptr && return this->ruleStartTime_ == nullptr && return this->ruleEndTime_ == nullptr && return this->canChange_ == nullptr && return this->changeFee_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // ruleStartTime Field Functions 
    bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
    void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
    inline int32_t ruleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


    // ruleEndTime Field Functions 
    bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
    void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
    inline int32_t ruleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


    // canChange Field Functions 
    bool hasCanChange() const { return this->canChange_ != nullptr;};
    void deleteCanChange() { this->canChange_ = nullptr;};
    inline bool canChange() const { DARABONBA_PTR_GET_DEFAULT(canChange_, false) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setCanChange(bool canChange) { DARABONBA_PTR_SET_VALUE(canChange_, canChange) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline DataSolutionSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


  protected:
    // type: 2 - outbound segment unused; 3 - inbound segment unused
    std::shared_ptr<int32_t> type_ = nullptr;
    // time unit: day/hour
    std::shared_ptr<string> timeUnit_ = nullptr;
    // applicable change rule start time, time unit (day/hour)
    std::shared_ptr<int32_t> ruleStartTime_ = nullptr;
    // applicable change rule end time, time unit (day/hour)
    std::shared_ptr<int32_t> ruleEndTime_ = nullptr;
    // whether changeable X-Y hour(day) before departure
    std::shared_ptr<bool> canChange_ = nullptr;
    // change fee X-Y hour(day) before departure
    std::shared_ptr<double> changeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
