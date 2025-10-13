// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataTimerSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
    };
    DescribeApplicationScalingRuleResponseBodyDataTimer() = default ;
    DescribeApplicationScalingRuleResponseBodyDataTimer(const DescribeApplicationScalingRuleResponseBodyDataTimer &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataTimer(DescribeApplicationScalingRuleResponseBodyDataTimer &&) = default ;
    DescribeApplicationScalingRuleResponseBodyDataTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBodyDataTimer() = default ;
    DescribeApplicationScalingRuleResponseBodyDataTimer& operator=(const DescribeApplicationScalingRuleResponseBodyDataTimer &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataTimer& operator=(DescribeApplicationScalingRuleResponseBodyDataTimer &&) = default ;
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
    inline DescribeApplicationScalingRuleResponseBodyDataTimer& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeApplicationScalingRuleResponseBodyDataTimer& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeApplicationScalingRuleResponseBodyDataTimer& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules> schedules() { DARABONBA_PTR_GET(schedules_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline DescribeApplicationScalingRuleResponseBodyDataTimer& setSchedules(const vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline DescribeApplicationScalingRuleResponseBodyDataTimer& setSchedules(vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


  protected:
    // The start date of the validity period of the scheduled auto scaling policy. Valid values:
    // 
    // *   If both the **BeginDate** and **EndDate** parameters are set to **null**, the auto scaling policy can always be triggered. The default value for these parameters is null.
    // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is **2021-03-25** and **EndDate** is **2021-04-25**, the auto scaling policy is valid for one month.
    std::shared_ptr<string> beginDate_ = nullptr;
    // The end date of the validity period of the scheduled auto scaling policy. Valid values:
    // 
    // *   If both the **BeginDate** and **EndDate** parameters are set to **null**, the auto scaling policy can always be triggered. The default value for these parameters is null.
    // *   If the two parameters are set to specific dates, the scheduled auto scaling policy can be triggered during the period between the two dates. For example, if **BeginDate** is **2021-03-25** and **EndDate** is **2021-04-25**, the auto scaling policy is valid for one month.
    std::shared_ptr<string> endDate_ = nullptr;
    // The days on which the scheduled auto scaling policy takes effect. Valid values:
    // 
    // *   **\\* \\* \\***: The scheduled auto scaling policy takes effect at a specified time every day.
    // 
    // *   **\\* \\* Fri,Mon**: The scheduled auto scaling policy takes effect at a specified time on one or multiple days of a week. The specified time is in the GMT+8 time zone. Valid values:
    // 
    //     *   **Sun**: Sunday
    //     *   **Mon**: Monday
    //     *   **Tue**: Tuesday
    //     *   **Wed**: Wednesday
    //     *   **Thu**: Thursday
    //     *   **Fri**: Friday
    //     *   **Sat**: Saturday
    // 
    // *   **1,2,3,28,31 \\* \\***: The scheduled auto scaling policy takes effect at a specified time on one or multiple days of a month. Valid values: 1 to 31. If the month does not have a 31st day, the auto scaling policy takes effect on the specified days other than the 31st day.
    std::shared_ptr<string> period_ = nullptr;
    // The points in time when the auto scaling policy is triggered within one day.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
