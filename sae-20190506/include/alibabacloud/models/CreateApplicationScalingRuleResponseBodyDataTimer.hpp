// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyDataTimerSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyDataTimer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Schedules, schedules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyDataTimer& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Schedules, schedules_);
    };
    CreateApplicationScalingRuleResponseBodyDataTimer() = default ;
    CreateApplicationScalingRuleResponseBodyDataTimer(const CreateApplicationScalingRuleResponseBodyDataTimer &) = default ;
    CreateApplicationScalingRuleResponseBodyDataTimer(CreateApplicationScalingRuleResponseBodyDataTimer &&) = default ;
    CreateApplicationScalingRuleResponseBodyDataTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyDataTimer() = default ;
    CreateApplicationScalingRuleResponseBodyDataTimer& operator=(const CreateApplicationScalingRuleResponseBodyDataTimer &) = default ;
    CreateApplicationScalingRuleResponseBodyDataTimer& operator=(CreateApplicationScalingRuleResponseBodyDataTimer &&) = default ;
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
    inline CreateApplicationScalingRuleResponseBodyDataTimer& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataTimer& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataTimer& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // schedules Field Functions 
    bool hasSchedules() const { return this->schedules_ != nullptr;};
    void deleteSchedules() { this->schedules_ = nullptr;};
    inline const vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules() const { DARABONBA_PTR_GET_CONST(schedules_, vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules> schedules() { DARABONBA_PTR_GET(schedules_, vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules>) };
    inline CreateApplicationScalingRuleResponseBodyDataTimer& setSchedules(const vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules> & schedules) { DARABONBA_PTR_SET_VALUE(schedules_, schedules) };
    inline CreateApplicationScalingRuleResponseBodyDataTimer& setSchedules(vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules> && schedules) { DARABONBA_PTR_SET_RVALUE(schedules_, schedules) };


  protected:
    std::shared_ptr<string> beginDate_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<vector<Models::CreateApplicationScalingRuleResponseBodyDataTimerSchedules>> schedules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
