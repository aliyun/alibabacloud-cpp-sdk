// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICITYASSURANCEREQUESTRECURRENCERULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICITYASSURANCEREQUESTRECURRENCERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyElasticityAssuranceRequestRecurrenceRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticityAssuranceRequestRecurrenceRules& obj) { 
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticityAssuranceRequestRecurrenceRules& obj) { 
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
    };
    ModifyElasticityAssuranceRequestRecurrenceRules() = default ;
    ModifyElasticityAssuranceRequestRecurrenceRules(const ModifyElasticityAssuranceRequestRecurrenceRules &) = default ;
    ModifyElasticityAssuranceRequestRecurrenceRules(ModifyElasticityAssuranceRequestRecurrenceRules &&) = default ;
    ModifyElasticityAssuranceRequestRecurrenceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticityAssuranceRequestRecurrenceRules() = default ;
    ModifyElasticityAssuranceRequestRecurrenceRules& operator=(const ModifyElasticityAssuranceRequestRecurrenceRules &) = default ;
    ModifyElasticityAssuranceRequestRecurrenceRules& operator=(ModifyElasticityAssuranceRequestRecurrenceRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endHour_ == nullptr
        && return this->recurrenceType_ == nullptr && return this->recurrenceValue_ == nullptr && return this->startHour_ == nullptr; };
    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int32_t endHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
    inline ModifyElasticityAssuranceRequestRecurrenceRules& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ModifyElasticityAssuranceRequestRecurrenceRules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValue Field Functions 
    bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
    void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
    inline string recurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
    inline ModifyElasticityAssuranceRequestRecurrenceRules& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int32_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
    inline ModifyElasticityAssuranceRequestRecurrenceRules& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


  protected:
    // The end time of the assurance period for the capacity reservation of the time-segmented elasticity assurance. Specify an on-the-hour point in time.
    std::shared_ptr<int32_t> endHour_ = nullptr;
    // The type of the assurance schedule. Valid values:
    // 
    // *   Daily
    // *   Weekly
    // *   Monthly
    // 
    // >  If you specify this parameter, you must specify `RecurrenceType` and `RecurrenceValue`.
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // The days of the week or month on which the capacity reservation of the time-segmented elasticity assurance takes effect or the interval, in number of days, at which the capacity reservation takes effect.
    // 
    // *   If you set `RecurrenceType` to `Daily`, you can specify only one value. Valid values: 1 to 31. The value specifies that the capacity reservation takes effect every few days.
    // *   If you set `RecurrenceType` to `Weekly`, you can specify multiple values. Separate the values with commas (,). Valid values: 0, 1, 2, 3, 4, 5, and 6, which specify Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday, respectively. Example: `1,2`, which specifies that the capacity reservation takes effect on Monday and Tuesday.
    // *   If you set `RecurrenceType` to `Monthly`, you can specify two values in the `A-B` format. Valid values of A and B: 1 to 31. B must be greater than or equal to A. Example: `1-5`, which specifies that the capacity reservation takes effect every day from the first day up to the fifth day of each month.
    // 
    // >  If this parameter is specified, you must specify `RecurrenceType` and `RecurrenceValue`.
    std::shared_ptr<string> recurrenceValue_ = nullptr;
    // The start time of the assurance period for the capacity reservation of the time-segmented elasticity assurance. Specify an on-the-hour point in time.
    // 
    // >  You must specify both `StartHour` and `EndHour`. The EndHour value must be at least 4 hours later than the StartHour value.
    std::shared_ptr<int32_t> startHour_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
