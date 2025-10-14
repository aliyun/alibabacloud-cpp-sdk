// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUEREFUNDRULEALLUNUSEDLIST_HPP_
#define ALIBABACLOUD_MODELS_DATAREFUNDCHANGERULEMAPVALUEREFUNDRULEALLUNUSEDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataRefundChangeRuleMapValueRefundRuleAllUnusedList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataRefundChangeRuleMapValueRefundRuleAllUnusedList& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_TO_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_TO_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(can_return_all_tax, canReturnAllTax_);
      DARABONBA_PTR_TO_JSON(return_part_tax_fee, returnPartTaxFee_);
    };
    friend void from_json(const Darabonba::Json& j, DataRefundChangeRuleMapValueRefundRuleAllUnusedList& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(time_unit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(rule_start_time, ruleStartTime_);
      DARABONBA_PTR_FROM_JSON(rule_end_time, ruleEndTime_);
      DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(can_return_all_tax, canReturnAllTax_);
      DARABONBA_PTR_FROM_JSON(return_part_tax_fee, returnPartTaxFee_);
    };
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList() = default ;
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList(const DataRefundChangeRuleMapValueRefundRuleAllUnusedList &) = default ;
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList(DataRefundChangeRuleMapValueRefundRuleAllUnusedList &&) = default ;
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataRefundChangeRuleMapValueRefundRuleAllUnusedList() = default ;
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList& operator=(const DataRefundChangeRuleMapValueRefundRuleAllUnusedList &) = default ;
    DataRefundChangeRuleMapValueRefundRuleAllUnusedList& operator=(DataRefundChangeRuleMapValueRefundRuleAllUnusedList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->timeUnit_ == nullptr && return this->ruleStartTime_ == nullptr && return this->ruleEndTime_ == nullptr && return this->canRefund_ == nullptr && return this->refundFee_ == nullptr
        && return this->canReturnAllTax_ == nullptr && return this->returnPartTaxFee_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // ruleStartTime Field Functions 
    bool hasRuleStartTime() const { return this->ruleStartTime_ != nullptr;};
    void deleteRuleStartTime() { this->ruleStartTime_ = nullptr;};
    inline int32_t ruleStartTime() const { DARABONBA_PTR_GET_DEFAULT(ruleStartTime_, 0) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setRuleStartTime(int32_t ruleStartTime) { DARABONBA_PTR_SET_VALUE(ruleStartTime_, ruleStartTime) };


    // ruleEndTime Field Functions 
    bool hasRuleEndTime() const { return this->ruleEndTime_ != nullptr;};
    void deleteRuleEndTime() { this->ruleEndTime_ = nullptr;};
    inline int32_t ruleEndTime() const { DARABONBA_PTR_GET_DEFAULT(ruleEndTime_, 0) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setRuleEndTime(int32_t ruleEndTime) { DARABONBA_PTR_SET_VALUE(ruleEndTime_, ruleEndTime) };


    // canRefund Field Functions 
    bool hasCanRefund() const { return this->canRefund_ != nullptr;};
    void deleteCanRefund() { this->canRefund_ = nullptr;};
    inline bool canRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline double refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // canReturnAllTax Field Functions 
    bool hasCanReturnAllTax() const { return this->canReturnAllTax_ != nullptr;};
    void deleteCanReturnAllTax() { this->canReturnAllTax_ = nullptr;};
    inline bool canReturnAllTax() const { DARABONBA_PTR_GET_DEFAULT(canReturnAllTax_, false) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setCanReturnAllTax(bool canReturnAllTax) { DARABONBA_PTR_SET_VALUE(canReturnAllTax_, canReturnAllTax) };


    // returnPartTaxFee Field Functions 
    bool hasReturnPartTaxFee() const { return this->returnPartTaxFee_ != nullptr;};
    void deleteReturnPartTaxFee() { this->returnPartTaxFee_ = nullptr;};
    inline double returnPartTaxFee() const { DARABONBA_PTR_GET_DEFAULT(returnPartTaxFee_, 0.0) };
    inline DataRefundChangeRuleMapValueRefundRuleAllUnusedList& setReturnPartTaxFee(double returnPartTaxFee) { DARABONBA_PTR_SET_VALUE(returnPartTaxFee_, returnPartTaxFee) };


  protected:
    // type: 0 - fully-unused ticket; 1 - partially used ticket
    std::shared_ptr<int32_t> type_ = nullptr;
    // time unit: day/hour
    std::shared_ptr<string> timeUnit_ = nullptr;
    // applicable refund rule start time, time unit (day/hour)
    std::shared_ptr<int32_t> ruleStartTime_ = nullptr;
    // applicable refund rule end time, time unit (day/hour)
    std::shared_ptr<int32_t> ruleEndTime_ = nullptr;
    // whether refundable X-Y hour(day) before departure
    std::shared_ptr<bool> canRefund_ = nullptr;
    // refund fee X-Y hour(day) before departure
    std::shared_ptr<double> refundFee_ = nullptr;
    // whether tax is fully refundable X-Y hour(day) before departure
    std::shared_ptr<bool> canReturnAllTax_ = nullptr;
    // tax amount refundable X-Y hour(day) before departure
    std::shared_ptr<double> returnPartTaxFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
