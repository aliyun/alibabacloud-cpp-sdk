// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGYRECURRENCESCHEDULESTIMERPERIODS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGYRECURRENCESCHEDULESTIMERPERIODS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods(const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods(ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods &&) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& operator=(const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& operator=(ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of resources.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The end of the time period during which the scaling policy is executed. Format: HH:mm.
    std::shared_ptr<string> endTime_ = nullptr;
    // The beginning of the time period during which the scaling policy is executed. Format: HH:mm.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
