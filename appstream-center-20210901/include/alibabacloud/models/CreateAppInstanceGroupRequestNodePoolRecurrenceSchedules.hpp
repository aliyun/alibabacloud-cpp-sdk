// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNODEPOOLRECURRENCESCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTNODEPOOLRECURRENCESCHEDULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
    };
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules() = default ;
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules(const CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules &) = default ;
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules(CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules &&) = default ;
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules() = default ;
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& operator=(const CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules &) = default ;
    CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& operator=(CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules &&) = default ;
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
    inline CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValues Field Functions 
    bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
    void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
    inline const vector<int32_t> & recurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
    inline vector<int32_t> recurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
    inline CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
    inline CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


    // timerPeriods Field Functions 
    bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
    void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
    inline const vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods> & timerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods>) };
    inline vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods> timerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods>) };
    inline CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& setTimerPeriods(const vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
    inline CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules& setTimerPeriods(vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


  protected:
    // The schedule type of the scaling policy. This parameter must be configured together with `RecurrenceValues`.``
    // 
    // Valid value:
    // 
    // *   Weekly: The scaling policy is executed on specific days each week.
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
    std::shared_ptr<vector<Models::CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
