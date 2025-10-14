// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFTIMERWEEKLYPERIODS_HPP_
#define ALIBABACLOUD_MODELS_WAFTIMERWEEKLYPERIODS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafTimerWeeklyPeriodsDailyPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafTimerWeeklyPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafTimerWeeklyPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(DailyPeriods, dailyPeriods_);
      DARABONBA_PTR_TO_JSON(Days, days_);
    };
    friend void from_json(const Darabonba::Json& j, WafTimerWeeklyPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyPeriods, dailyPeriods_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
    };
    WafTimerWeeklyPeriods() = default ;
    WafTimerWeeklyPeriods(const WafTimerWeeklyPeriods &) = default ;
    WafTimerWeeklyPeriods(WafTimerWeeklyPeriods &&) = default ;
    WafTimerWeeklyPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafTimerWeeklyPeriods() = default ;
    WafTimerWeeklyPeriods& operator=(const WafTimerWeeklyPeriods &) = default ;
    WafTimerWeeklyPeriods& operator=(WafTimerWeeklyPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dailyPeriods_ == nullptr
        && return this->days_ == nullptr; };
    // dailyPeriods Field Functions 
    bool hasDailyPeriods() const { return this->dailyPeriods_ != nullptr;};
    void deleteDailyPeriods() { this->dailyPeriods_ = nullptr;};
    inline const vector<Models::WafTimerWeeklyPeriodsDailyPeriods> & dailyPeriods() const { DARABONBA_PTR_GET_CONST(dailyPeriods_, vector<Models::WafTimerWeeklyPeriodsDailyPeriods>) };
    inline vector<Models::WafTimerWeeklyPeriodsDailyPeriods> dailyPeriods() { DARABONBA_PTR_GET(dailyPeriods_, vector<Models::WafTimerWeeklyPeriodsDailyPeriods>) };
    inline WafTimerWeeklyPeriods& setDailyPeriods(const vector<Models::WafTimerWeeklyPeriodsDailyPeriods> & dailyPeriods) { DARABONBA_PTR_SET_VALUE(dailyPeriods_, dailyPeriods) };
    inline WafTimerWeeklyPeriods& setDailyPeriods(vector<Models::WafTimerWeeklyPeriodsDailyPeriods> && dailyPeriods) { DARABONBA_PTR_SET_RVALUE(dailyPeriods_, dailyPeriods) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline string days() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
    inline WafTimerWeeklyPeriods& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


  protected:
    std::shared_ptr<vector<Models::WafTimerWeeklyPeriodsDailyPeriods>> dailyPeriods_ = nullptr;
    std::shared_ptr<string> days_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
