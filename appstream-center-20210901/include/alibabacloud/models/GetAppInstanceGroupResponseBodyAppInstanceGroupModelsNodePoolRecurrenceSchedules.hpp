// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSNODEPOOLRECURRENCESCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSNODEPOOLRECURRENCESCHEDULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_TO_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_TO_JSON(TimerPeriods, timerPeriods_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
      DARABONBA_PTR_FROM_JSON(RecurrenceValues, recurrenceValues_);
      DARABONBA_PTR_FROM_JSON(TimerPeriods, timerPeriods_);
    };
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules &&) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& operator=(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& operator=(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules &&) = default ;
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
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


    // recurrenceValues Field Functions 
    bool hasRecurrenceValues() const { return this->recurrenceValues_ != nullptr;};
    void deleteRecurrenceValues() { this->recurrenceValues_ = nullptr;};
    inline const vector<int32_t> & recurrenceValues() const { DARABONBA_PTR_GET_CONST(recurrenceValues_, vector<int32_t>) };
    inline vector<int32_t> recurrenceValues() { DARABONBA_PTR_GET(recurrenceValues_, vector<int32_t>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& setRecurrenceValues(const vector<int32_t> & recurrenceValues) { DARABONBA_PTR_SET_VALUE(recurrenceValues_, recurrenceValues) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& setRecurrenceValues(vector<int32_t> && recurrenceValues) { DARABONBA_PTR_SET_RVALUE(recurrenceValues_, recurrenceValues) };


    // timerPeriods Field Functions 
    bool hasTimerPeriods() const { return this->timerPeriods_ != nullptr;};
    void deleteTimerPeriods() { this->timerPeriods_ = nullptr;};
    inline const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> & timerPeriods() const { DARABONBA_PTR_GET_CONST(timerPeriods_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>) };
    inline vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> timerPeriods() { DARABONBA_PTR_GET(timerPeriods_, vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& setTimerPeriods(const vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> & timerPeriods) { DARABONBA_PTR_SET_VALUE(timerPeriods_, timerPeriods) };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules& setTimerPeriods(vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> && timerPeriods) { DARABONBA_PTR_SET_RVALUE(timerPeriods_, timerPeriods) };


  protected:
    std::shared_ptr<string> recurrenceType_ = nullptr;
    std::shared_ptr<vector<int32_t>> recurrenceValues_ = nullptr;
    std::shared_ptr<vector<Models::GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
