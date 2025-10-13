// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyDataTimerSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
    };
    UpdateApplicationScalingRuleResponseBodyDataTimer() = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimer(const UpdateApplicationScalingRuleResponseBodyDataTimer &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimer(UpdateApplicationScalingRuleResponseBodyDataTimer &&) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyDataTimer() = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimer& operator=(const UpdateApplicationScalingRuleResponseBodyDataTimer &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimer& operator=(UpdateApplicationScalingRuleResponseBodyDataTimer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginDate_ == nullptr
        && return this->endDate_ == nullptr && return this->period_ == nullptr && return this->schedules_ == nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string beginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline UpdateApplicationScalingRuleResponseBodyDataTimer& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateApplicationScalingRuleResponseBodyDataTimer& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline UpdateApplicationScalingRuleResponseBodyDataTimer& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules> schedules() { DARABONBA_PTR_GET(schedules_, vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline UpdateApplicationScalingRuleResponseBodyDataTimer& setSchedules(const vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline UpdateApplicationScalingRuleResponseBodyDataTimer& setSchedules(vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


  protected:
    // The start date of the validity period of the scheduled auto scaling policy. Parameter description:
    // 
    // *   If **BeginDate** and **EndDate** are set to **null**, the auto scaling policy is a long-term policy. Default values of the beginDate and endDate parameters: null.
    // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is set to 2021-03-25 and **EndDate** is set to 2021-04-25, the auto scaling policy is valid for one month.
    std::shared_ptr<string> beginDate_ = nullptr;
    // The end date of the validity period of the scheduled auto scaling policy. Take note of the following rules:
    // 
    // *   If **BeginDate** and **EndDate** are set to **null**, the auto scaling policy is a long-term policy. Default values of the beginDate and endDate parameters: null.
    // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is set to 2021-03-25 and **EndDate** is set to 2021-04-25, the auto scaling policy is valid for one month.
    std::shared_ptr<string> endDate_ = nullptr;
    // The frequency at which the scheduled auto scaling policy is executed. Valid values:
    // 
    // *   **\\* \\* \\***: The scheduled auto scaling policy is executed at a specified point in time every day.
    // 
    // *   **\\* \\* Fri,Mon**: The scheduled auto scaling policy is executed at a specified point in time on one or more days of each week. GMT+8 is used. Valid values:
    // 
    //     *   **Sun**
    //     *   **Mon**
    //     *   **Tue**
    //     *   **Wed**
    //     *   **Thu**
    //     *   **Fri**
    //     *   **Sat**
    // 
    // *   **1,2,3,28,31 \\* \\***: The scheduled auto scaling policy is executed at a specified point in time on one or more days of each month. Valid values: 1 to 31. If the month does not have a 31st day, the auto scaling policy is executed on the specified days other than the 31st day.
    std::shared_ptr<string> period_ = nullptr;
    // The points in time at which the auto scaling policy is triggered within one day.
    std::shared_ptr<vector<Models::UpdateApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
