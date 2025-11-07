// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUECHANGERULEOUTUNUSEDLIST_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUECHANGERULEOUTUNUSEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_TO_JSON(can_change, canChange_);
      DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
    };
    friend void from_json(const Darabonba::Json& j, DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_FROM_JSON(can_change, canChange_);
      DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
    };
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &&) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList() = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& operator=(const DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &) = default ;
    DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& operator=(DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList &&) = default ;
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
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // ruleStartTime Field Functions 
    bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
    void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
    inline int32_t ruleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


    // ruleEndTime Field Functions 
    bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
    void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
    inline int32_t ruleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


    // canChange Field Functions 
    bool hasCanChange() const { return this->canChange_ != nullptr;};
    void deleteCanChange() { this->canChange_ = nullptr;};
    inline bool canChange() const { DARABONBA_PTR_GET_DEFAULT(canChange_, false) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setCanChange(bool canChange) { DARABONBA_PTR_SET_VALUE(canChange_, canChange) };


    // changeFee Field Functions 
    bool hasChangeFee() const { return this->changeFee_ != nullptr;};
    void deleteChangeFee() { this->changeFee_ = nullptr;};
    inline double changeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValueChangeRuleOutUnusedList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


  protected:
    // The type of itinerary usage for this change rule 2: unused outbound; 3: unused return
    std::shared_ptr<int32_t> type_ = nullptr;
    // Time unit: day/hour
    std::shared_ptr<string> timeUnit_ = nullptr;
    // Start time of the refund time interval for this refund rule, in days/hours
    std::shared_ptr<int32_t> ruleStartTime_ = nullptr;
    // End time of the refund time interval for this refund rule, in days/hours
    std::shared_ptr<int32_t> ruleEndTime_ = nullptr;
    // Whether it is possible to change the ticket X-Y hours (days) before departure
    std::shared_ptr<bool> canChange_ = nullptr;
    // Change fee X-Y hours (days) before departure
    std::shared_ptr<double> changeFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
