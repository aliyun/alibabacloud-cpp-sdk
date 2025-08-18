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
    virtual bool empty() const override { this->recurrenceType_ != nullptr
        && this->recurrenceValues_ != nullptr && this->timerPeriods_ != nullptr; };
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
    // 策略执行周期的类型。必须同时指定`RecurrenceType`和`RecurrenceValues`。
    std::shared_ptr<string> recurrenceType_ = nullptr;
    // 策略执行周期的数值列表。
    std::shared_ptr<vector<int32_t>> recurrenceValues_ = nullptr;
    // 策略执行周期的时间段列表。时间段设置要求：
    // 
    // - 最多可添加3个时间段。
    // - 时间段之间不重叠。
    // - 时间段之间的间隔大于或等于5分钟。
    // - 单个时间段的时长大于或等于15分钟。
    // - 所有时间段累计不跨天。
    std::shared_ptr<vector<Models::ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>> timerPeriods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
