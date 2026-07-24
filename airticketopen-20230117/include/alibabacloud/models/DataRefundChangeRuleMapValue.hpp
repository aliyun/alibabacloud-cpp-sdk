// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUE_HPP_
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
  class DataRefundChangeRuleMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_TO_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_TO_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    friend void from_json(const Darabonba::Json& j, DataRefundChangeRuleMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(refund_rule_all_unused_list, refundRuleAllUnusedList_);
      DARABONBA_PTR_FROM_JSON(refund_rule_part_unused_list, refundRulePartUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_in_unused_list, changeRuleInUnusedList_);
      DARABONBA_PTR_FROM_JSON(change_rule_out_unused_list, changeRuleOutUnusedList_);
    };
    DataRefundChangeRuleMapValue() = default ;
    DataRefundChangeRuleMapValue(const DataRefundChangeRuleMapValue &) = default ;
    DataRefundChangeRuleMapValue(DataRefundChangeRuleMapValue &&) = default ;
    DataRefundChangeRuleMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataRefundChangeRuleMapValue() = default ;
    DataRefundChangeRuleMapValue& operator=(const DataRefundChangeRuleMapValue &) = default ;
    DataRefundChangeRuleMapValue& operator=(DataRefundChangeRuleMapValue &&) = default ;
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
      // 该改签规则适用航程使用类型 2:去程未使用; 3:回程未使用
      shared_ptr<int32_t> type_ {};
      // 时间单位：day/hour
      shared_ptr<string> timeUnit_ {};
      // 该退票规则适用于的退票时间区间开始时间，单位（天/小时）
      shared_ptr<int32_t> ruleStartTime_ {};
      // 该退票规则适用于的退票时间区间结束时间，单位（天/小时）
      shared_ptr<int32_t> ruleEndTime_ {};
      // 起飞前X-Y小时(天) 可否可以改签
      shared_ptr<bool> canChange_ {};
      // 起飞前X-Y小时(天) 改签费
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
      // 该改签规则适用航程使用类型 2:去程未使用; 3:回程未使用
      shared_ptr<int32_t> type_ {};
      // 时间单位：day/hour
      shared_ptr<string> timeUnit_ {};
      // 该退票规则适用于的退票时间区间开始时间，单位（天/小时）
      shared_ptr<int32_t> ruleStartTime_ {};
      // 该退票规则适用于的退票时间区间结束时间，单位（天/小时）
      shared_ptr<int32_t> ruleEndTime_ {};
      // 起飞前X-Y小时(天) 可否可以改签
      shared_ptr<bool> canChange_ {};
      // 起飞前X-Y小时(天) 改签费
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
      // 该退票规则适用航程使用类型 0:全程未使用; 1:部分未使用
      shared_ptr<int32_t> type_ {};
      // 时间单位：day/hour
      shared_ptr<string> timeUnit_ {};
      // 该退票规则适用于的退票时间区间开始时间，单位（天/小时）
      shared_ptr<int32_t> ruleStartTime_ {};
      // 该退票规则适用于的退票时间区间结束时间，单位（天/小时）
      shared_ptr<int32_t> ruleEndTime_ {};
      // 起飞前X-Y小时(天) 可否退票
      shared_ptr<bool> canRefund_ {};
      // 起飞前X-Y小时(天) 退票手续费
      shared_ptr<double> refundFee_ {};
      // 起飞前X-Y小时(天) 是否全额退税
      shared_ptr<bool> canReturnAllTax_ {};
      // 起飞前X-Y小时(天) 可部分退税金额
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
      // 该退票规则适用航程使用类型 0:全程未使用; 1:部分未使用
      shared_ptr<int32_t> type_ {};
      // 时间单位：day/hour
      shared_ptr<string> timeUnit_ {};
      // 该退票规则适用于的退票时间区间开始时间，单位（天/小时）
      shared_ptr<int32_t> ruleStartTime_ {};
      // 该退票规则适用于的退票时间区间结束时间，单位（天/小时）
      shared_ptr<int32_t> ruleEndTime_ {};
      // 起飞前X-Y小时(天) 可否退票
      shared_ptr<bool> canRefund_ {};
      // 起飞前X-Y小时(天) 退票手续费
      shared_ptr<double> refundFee_ {};
      // 起飞前X-Y小时(天) 是否全额退税
      shared_ptr<bool> canReturnAllTax_ {};
      // 起飞前X-Y小时(天) 可部分退税金额
      shared_ptr<double> returnPartTaxFee_ {};
    };

    virtual bool empty() const override { return this->refundRuleAllUnusedList_ == nullptr
        && this->refundRulePartUnusedList_ == nullptr && this->changeRuleInUnusedList_ == nullptr && this->changeRuleOutUnusedList_ == nullptr; };
    // refundRuleAllUnusedList Field Functions 
    bool hasRefundRuleAllUnusedList() const { return this->refundRuleAllUnusedList_ != nullptr;};
    void deleteRefundRuleAllUnusedList() { this->refundRuleAllUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList> & getRefundRuleAllUnusedList() const { DARABONBA_PTR_GET_CONST(refundRuleAllUnusedList_, vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList>) };
    inline vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList> getRefundRuleAllUnusedList() { DARABONBA_PTR_GET(refundRuleAllUnusedList_, vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList>) };
    inline DataRefundChangeRuleMapValue& setRefundRuleAllUnusedList(const vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList> & refundRuleAllUnusedList) { DARABONBA_PTR_SET_VALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };
    inline DataRefundChangeRuleMapValue& setRefundRuleAllUnusedList(vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList> && refundRuleAllUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRuleAllUnusedList_, refundRuleAllUnusedList) };


    // refundRulePartUnusedList Field Functions 
    bool hasRefundRulePartUnusedList() const { return this->refundRulePartUnusedList_ != nullptr;};
    void deleteRefundRulePartUnusedList() { this->refundRulePartUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList> & getRefundRulePartUnusedList() const { DARABONBA_PTR_GET_CONST(refundRulePartUnusedList_, vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList>) };
    inline vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList> getRefundRulePartUnusedList() { DARABONBA_PTR_GET(refundRulePartUnusedList_, vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList>) };
    inline DataRefundChangeRuleMapValue& setRefundRulePartUnusedList(const vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList> & refundRulePartUnusedList) { DARABONBA_PTR_SET_VALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };
    inline DataRefundChangeRuleMapValue& setRefundRulePartUnusedList(vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList> && refundRulePartUnusedList) { DARABONBA_PTR_SET_RVALUE(refundRulePartUnusedList_, refundRulePartUnusedList) };


    // changeRuleInUnusedList Field Functions 
    bool hasChangeRuleInUnusedList() const { return this->changeRuleInUnusedList_ != nullptr;};
    void deleteChangeRuleInUnusedList() { this->changeRuleInUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList> & getChangeRuleInUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleInUnusedList_, vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList>) };
    inline vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList> getChangeRuleInUnusedList() { DARABONBA_PTR_GET(changeRuleInUnusedList_, vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList>) };
    inline DataRefundChangeRuleMapValue& setChangeRuleInUnusedList(const vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList> & changeRuleInUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };
    inline DataRefundChangeRuleMapValue& setChangeRuleInUnusedList(vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList> && changeRuleInUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleInUnusedList_, changeRuleInUnusedList) };


    // changeRuleOutUnusedList Field Functions 
    bool hasChangeRuleOutUnusedList() const { return this->changeRuleOutUnusedList_ != nullptr;};
    void deleteChangeRuleOutUnusedList() { this->changeRuleOutUnusedList_ = nullptr;};
    inline const vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList> & getChangeRuleOutUnusedList() const { DARABONBA_PTR_GET_CONST(changeRuleOutUnusedList_, vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList>) };
    inline vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList> getChangeRuleOutUnusedList() { DARABONBA_PTR_GET(changeRuleOutUnusedList_, vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList>) };
    inline DataRefundChangeRuleMapValue& setChangeRuleOutUnusedList(const vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList> & changeRuleOutUnusedList) { DARABONBA_PTR_SET_VALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };
    inline DataRefundChangeRuleMapValue& setChangeRuleOutUnusedList(vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList> && changeRuleOutUnusedList) { DARABONBA_PTR_SET_RVALUE(changeRuleOutUnusedList_, changeRuleOutUnusedList) };


  protected:
    // 全程未使用退票规则
    shared_ptr<vector<DataRefundChangeRuleMapValue::RefundRuleAllUnusedList>> refundRuleAllUnusedList_ {};
    // 部分未使用退票规则
    shared_ptr<vector<DataRefundChangeRuleMapValue::RefundRulePartUnusedList>> refundRulePartUnusedList_ {};
    // 回程未使用改签规则
    shared_ptr<vector<DataRefundChangeRuleMapValue::ChangeRuleInUnusedList>> changeRuleInUnusedList_ {};
    // 去程未使用改签规则
    shared_ptr<vector<DataRefundChangeRuleMapValue::ChangeRuleOutUnusedList>> changeRuleOutUnusedList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
