// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTREFUNDCHANGERULEMAPPINGLISTREFUNDCHANGERULEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ChangeRuleOutUnusedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeRuleOutUnusedList& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_TO_JSON(can_change, canChange_);
        DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeRuleOutUnusedList& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_FROM_JSON(can_change, canChange_);
        DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      };
      ChangeRuleOutUnusedList() = default ;
      ChangeRuleOutUnusedList(const ChangeRuleOutUnusedList &) = default ;
      ChangeRuleOutUnusedList(ChangeRuleOutUnusedList &&) = default ;
      ChangeRuleOutUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeRuleOutUnusedList() = default ;
      ChangeRuleOutUnusedList& operator=(const ChangeRuleOutUnusedList &) = default ;
      ChangeRuleOutUnusedList& operator=(ChangeRuleOutUnusedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->timeUnit_ == nullptr && this->ruleStartTime_ == nullptr && this->ruleEndTime_ == nullptr && this->canChange_ == nullptr && this->changeFee_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline ChangeRuleOutUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline ChangeRuleOutUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // ruleStartTime Field Functions 
      bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
      void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
      inline int32_t getRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
      inline ChangeRuleOutUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


      // ruleEndTime Field Functions 
      bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
      void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
      inline int32_t getRuleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
      inline ChangeRuleOutUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


      // canChange Field Functions 
      bool hasCanChange() const { return this->canChange_ != nullptr;};
      void deleteCanChange() { this->canChange_ = nullptr;};
      inline bool getCanChange() const { DARABONBA_PTR_GET_DEFAULT(canChange_, false) };
      inline ChangeRuleOutUnusedList& setCanChange(bool canChange) { DARABONBA_PTR_SET_VALUE(canChange_, canChange) };


      // changeFee Field Functions 
      bool hasChangeFee() const { return this->changeFee_ != nullptr;};
      void deleteChangeFee() { this->changeFee_ = nullptr;};
      inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
      inline ChangeRuleOutUnusedList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    protected:
      // Change rule applicable journey usage type 2: outbound unused; 3: return/inbound unused
      shared_ptr<int32_t> type_ {};
      // Time unit: day/hour
      shared_ptr<string> timeUnit_ {};
      // Start time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleStartTime_ {};
      // End time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleEndTime_ {};
      // Whether rebooking is allowed X-Y hours (days) before departure
      shared_ptr<bool> canChange_ {};
      // Rebooking fee X-Y hours (days) before departure
      shared_ptr<double> changeFee_ {};
    };

    class ChangeRuleInUnusedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeRuleInUnusedList& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_TO_JSON(can_change, canChange_);
        DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeRuleInUnusedList& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_FROM_JSON(can_change, canChange_);
        DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
      };
      ChangeRuleInUnusedList() = default ;
      ChangeRuleInUnusedList(const ChangeRuleInUnusedList &) = default ;
      ChangeRuleInUnusedList(ChangeRuleInUnusedList &&) = default ;
      ChangeRuleInUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeRuleInUnusedList() = default ;
      ChangeRuleInUnusedList& operator=(const ChangeRuleInUnusedList &) = default ;
      ChangeRuleInUnusedList& operator=(ChangeRuleInUnusedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->timeUnit_ == nullptr && this->ruleStartTime_ == nullptr && this->ruleEndTime_ == nullptr && this->canChange_ == nullptr && this->changeFee_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline ChangeRuleInUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline ChangeRuleInUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // ruleStartTime Field Functions 
      bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
      void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
      inline int32_t getRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
      inline ChangeRuleInUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


      // ruleEndTime Field Functions 
      bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
      void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
      inline int32_t getRuleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
      inline ChangeRuleInUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


      // canChange Field Functions 
      bool hasCanChange() const { return this->canChange_ != nullptr;};
      void deleteCanChange() { this->canChange_ = nullptr;};
      inline bool getCanChange() const { DARABONBA_PTR_GET_DEFAULT(canChange_, false) };
      inline ChangeRuleInUnusedList& setCanChange(bool canChange) { DARABONBA_PTR_SET_VALUE(canChange_, canChange) };


      // changeFee Field Functions 
      bool hasChangeFee() const { return this->changeFee_ != nullptr;};
      void deleteChangeFee() { this->changeFee_ = nullptr;};
      inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
      inline ChangeRuleInUnusedList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


    protected:
      // Change rule applicable journey usage type 2: outbound unused; 3: return/inbound unused
      shared_ptr<int32_t> type_ {};
      // Time unit: day/hour
      shared_ptr<string> timeUnit_ {};
      // Start time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleStartTime_ {};
      // End time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleEndTime_ {};
      // Whether rebooking is allowed X-Y hours (days) before departure
      shared_ptr<bool> canChange_ {};
      // Rebooking fee X-Y hours (days) before departure
      shared_ptr<double> changeFee_ {};
    };

    class RefundRulePartUnusedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundRulePartUnusedList& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
        DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_TO_JSON(can_return_all_tax, canReturnAllTax_);
        DARABONBA_PTR_TO_JSON(return_part_tax_fee, returnPartTaxFee_);
      };
      friend void from_json(const Darabonba::Json& j, RefundRulePartUnusedList& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
        DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_FROM_JSON(can_return_all_tax, canReturnAllTax_);
        DARABONBA_PTR_FROM_JSON(return_part_tax_fee, returnPartTaxFee_);
      };
      RefundRulePartUnusedList() = default ;
      RefundRulePartUnusedList(const RefundRulePartUnusedList &) = default ;
      RefundRulePartUnusedList(RefundRulePartUnusedList &&) = default ;
      RefundRulePartUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundRulePartUnusedList() = default ;
      RefundRulePartUnusedList& operator=(const RefundRulePartUnusedList &) = default ;
      RefundRulePartUnusedList& operator=(RefundRulePartUnusedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->timeUnit_ == nullptr && this->ruleStartTime_ == nullptr && this->ruleEndTime_ == nullptr && this->canRefund_ == nullptr && this->refundFee_ == nullptr
        && this->canReturnAllTax_ == nullptr && this->returnPartTaxFee_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline RefundRulePartUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline RefundRulePartUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // ruleStartTime Field Functions 
      bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
      void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
      inline int32_t getRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
      inline RefundRulePartUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


      // ruleEndTime Field Functions 
      bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
      void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
      inline int32_t getRuleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
      inline RefundRulePartUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


      // canRefund Field Functions 
      bool hasCanRefund() const { return this->canRefund_ != nullptr;};
      void deleteCanRefund() { this->canRefund_ = nullptr;};
      inline bool getCanRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
      inline RefundRulePartUnusedList& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
      inline RefundRulePartUnusedList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


      // canReturnAllTax Field Functions 
      bool hasCanReturnAllTax() const { return this->canReturnAllTax_ != nullptr;};
      void deleteCanReturnAllTax() { this->canReturnAllTax_ = nullptr;};
      inline bool getCanReturnAllTax() const { DARABONBA_PTR_GET_DEFAULT(canReturnAllTax_, false) };
      inline RefundRulePartUnusedList& setCanReturnAllTax(bool canReturnAllTax) { DARABONBA_PTR_SET_VALUE(canReturnAllTax_, canReturnAllTax) };


      // returnPartTaxFee Field Functions 
      bool hasReturnPartTaxFee() const { return this->returnPartTaxFee_ != nullptr;};
      void deleteReturnPartTaxFee() { this->returnPartTaxFee_ = nullptr;};
      inline double getReturnPartTaxFee() const { DARABONBA_PTR_GET_DEFAULT(returnPartTaxFee_, 0.0) };
      inline RefundRulePartUnusedList& setReturnPartTaxFee(double returnPartTaxFee) { DARABONBA_PTR_SET_VALUE(returnPartTaxFee_, returnPartTaxFee) };


    protected:
      // Refund rule applicable journey usage type 0: fully unused; 1: partially unused
      shared_ptr<int32_t> type_ {};
      // Time unit: day/hour
      shared_ptr<string> timeUnit_ {};
      // Start time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleStartTime_ {};
      // End time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleEndTime_ {};
      // Whether refund is allowed X-Y hours (days) before departure
      shared_ptr<bool> canRefund_ {};
      // Refund fee X-Y hours (days) before departure
      shared_ptr<double> refundFee_ {};
      // Whether full tax refund is available X-Y hours (days) before departure
      shared_ptr<bool> canReturnAllTax_ {};
      // Partial tax refund amount X-Y hours (days) before departure
      shared_ptr<double> returnPartTaxFee_ {};
    };

    class RefundRuleAllUnusedList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundRuleAllUnusedList& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
        DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_TO_JSON(can_return_all_tax, canReturnAllTax_);
        DARABONBA_PTR_TO_JSON(return_part_tax_fee, returnPartTaxFee_);
      };
      friend void from_json(const Darabonba::Json& j, RefundRuleAllUnusedList& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
        DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
        DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
        DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_FROM_JSON(can_return_all_tax, canReturnAllTax_);
        DARABONBA_PTR_FROM_JSON(return_part_tax_fee, returnPartTaxFee_);
      };
      RefundRuleAllUnusedList() = default ;
      RefundRuleAllUnusedList(const RefundRuleAllUnusedList &) = default ;
      RefundRuleAllUnusedList(RefundRuleAllUnusedList &&) = default ;
      RefundRuleAllUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundRuleAllUnusedList() = default ;
      RefundRuleAllUnusedList& operator=(const RefundRuleAllUnusedList &) = default ;
      RefundRuleAllUnusedList& operator=(RefundRuleAllUnusedList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->timeUnit_ == nullptr && this->ruleStartTime_ == nullptr && this->ruleEndTime_ == nullptr && this->canRefund_ == nullptr && this->refundFee_ == nullptr
        && this->canReturnAllTax_ == nullptr && this->returnPartTaxFee_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline RefundRuleAllUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline RefundRuleAllUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // ruleStartTime Field Functions 
      bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
      void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
      inline int32_t getRuleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
      inline RefundRuleAllUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


      // ruleEndTime Field Functions 
      bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
      void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
      inline int32_t getRuleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
      inline RefundRuleAllUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


      // canRefund Field Functions 
      bool hasCanRefund() const { return this->canRefund_ != nullptr;};
      void deleteCanRefund() { this->canRefund_ = nullptr;};
      inline bool getCanRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
      inline RefundRuleAllUnusedList& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
      inline RefundRuleAllUnusedList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


      // canReturnAllTax Field Functions 
      bool hasCanReturnAllTax() const { return this->canReturnAllTax_ != nullptr;};
      void deleteCanReturnAllTax() { this->canReturnAllTax_ = nullptr;};
      inline bool getCanReturnAllTax() const { DARABONBA_PTR_GET_DEFAULT(canReturnAllTax_, false) };
      inline RefundRuleAllUnusedList& setCanReturnAllTax(bool canReturnAllTax) { DARABONBA_PTR_SET_VALUE(canReturnAllTax_, canReturnAllTax) };


      // returnPartTaxFee Field Functions 
      bool hasReturnPartTaxFee() const { return this->returnPartTaxFee_ != nullptr;};
      void deleteReturnPartTaxFee() { this->returnPartTaxFee_ = nullptr;};
      inline double getReturnPartTaxFee() const { DARABONBA_PTR_GET_DEFAULT(returnPartTaxFee_, 0.0) };
      inline RefundRuleAllUnusedList& setReturnPartTaxFee(double returnPartTaxFee) { DARABONBA_PTR_SET_VALUE(returnPartTaxFee_, returnPartTaxFee) };


    protected:
      // Refund rule applicable journey usage type 0: fully unused; 1: partially unused
      shared_ptr<int32_t> type_ {};
      // Time unit: day/hour
      shared_ptr<string> timeUnit_ {};
      // Start time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleStartTime_ {};
      // End time of the refund time interval applicable to this refund rule, unit (day/hour)
      shared_ptr<int32_t> ruleEndTime_ {};
      // Whether refund is allowed X-Y hours (days) before departure
      shared_ptr<bool> canRefund_ {};
      // Refund fee X-Y hours (days) before departure
      shared_ptr<double> refundFee_ {};
      // Whether full tax refund is available X-Y hours (days) before departure
      shared_ptr<bool> canReturnAllTax_ {};
      // Partial tax refund amount X-Y hours (days) before departure
      shared_ptr<double> returnPartTaxFee_ {};
    };

    virtual bool empty() const override { return this->refundRuleAllUnusedList_ == nullptr
        && this->refundRulePartUnusedList_ == nullptr && this->changeRuleInUnusedList_ == nullptr && this->changeRuleOutUnusedList_ == nullptr; };
    // refundRuleAllUnusedList Field Functions 
    bool hasRefundRuleAllUnusedList() const { return this->refundRuleAllUnusedList_ != nullptr;};
    void deleteRefundRuleAllUnusedList() { this->refundRuleAllUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList> & getRefundRuleAllUnusedList() const { DARABONBA_PTR_GET_CONST(refundRuleAllUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList> getRefundRuleAllUnusedList() { DARABONBA_PTR_GET(refundRuleAllUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList> & refundRuleAllUnusedList) { DARABONBA_PTR_SET_VALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRuleAllUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList> && refundRuleAllUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };


    // refundRulePartUnusedList Field Functions 
    bool hasRefundRulePartUnusedList() const { return this->refundRulePartUnusedList_ != nullptr;};
    void deleteRefundRulePartUnusedList() { this->refundRulePartUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList> & getRefundRulePartUnusedList() const { DARABONBA_PTR_GET_CONST(refundRulePartUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList> getRefundRulePartUnusedList() { DARABONBA_PTR_GET(refundRulePartUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList> & refundRulePartUnusedList) { DARABONBA_PTR_SET_VALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setRefundRulePartUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList> && refundRulePartUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };


    // changeRuleInUnusedList Field Functions 
    bool hasChangeRuleInUnusedList() const { return this->changeRuleInUnusedList_ != nullptr;};
    void deleteChangeRuleInUnusedList() { this->changeRuleInUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList> & getChangeRuleInUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleInUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList> getChangeRuleInUnusedList() { DARABONBA_PTR_GET(changeRuleInUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList> & changeRuleInUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleInUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList> && changeRuleInUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };


    // changeRuleOutUnusedList Field Functions 
    bool hasChangeRuleOutUnusedList() const { return this->changeRuleOutUnusedList_ != nullptr;};
    void deleteChangeRuleOutUnusedList() { this->changeRuleOutUnusedList_ = nullptr;};
    inline const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList> & getChangeRuleOutUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleOutUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList>) };
    inline vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList> getChangeRuleOutUnusedList() { DARABONBA_PTR_GET(changeRuleOutUnusedList_, vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList>) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(const vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList> & changeRuleOutUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };
    inline DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue& setChangeRuleOutUnusedList(vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList> && changeRuleOutUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };


  protected:
    // Fully unused refund rules
    shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRuleAllUnusedList>> refundRuleAllUnusedList_ {};
    // Partially unused refund rules
    shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::RefundRulePartUnusedList>> refundRulePartUnusedList_ {};
    // Return/inbound unused change rules
    shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleInUnusedList>> changeRuleInUnusedList_ {};
    // Outbound unused change rules
    shared_ptr<vector<DataSolutionListSegmentRefundChangeRuleMappingListRefundChangeRuleMapValue::ChangeRuleOutUnusedList>> changeRuleOutUnusedList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
