// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGYRECURRENCESCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODEPOOLATTRIBUTEREQUESTNODEPOOLSTRATEGYRECURRENCESCHEDULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
    };
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules(const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules(ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules &&) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules() = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& operator=(const ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules &) = default ;
    ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& operator=(ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recurrenceType_ == nullptr
        && return this->recurrenceValues_ == nullptr && return this->timerPeriods_ == nullptr; };
    // recurrenceType Field Functions 
    bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
    void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
    inline string recurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValues Field Functions 
    bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
    void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
    inline const vector<int32_t> & recurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
    inline vector<int32_t> recurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


    // timerPeriods Field Functions 
    bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
    void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
    inline const vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods> & timerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>) };
    inline vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods> timerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& setTimerPeriods(const vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
    inline ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules& setTimerPeriods(vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


  protected:
    // The schedule type of the scaling policy. This parameter must be configured together with `RecurrenceValues`.``
    // 
    // Valid values:
    // 
    // *   weekly: The scaling policy is executed on specific days each week.
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // The days of each week on which the scaling policy is executed.
    std::shared_ptr<vector<int32_t>> recurrenceValues_ = nullptr;
    // The time periods during which the scaling policy can be executed. The time periods must meet the following requirements:
    // 
    // *   Up to three time periods can be added.
    // *   Time periods cannot be overlapped.
    // *   The interval between two consecutive time periods must be greater than or equal to 5 minutes.
    // *   Each time period must be greater than or equal to 15 minutes.
    // *   The total length of the time periods that you specify cannot be greater than a day.
    std::shared_ptr<vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>> timerPeriods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
