// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFTIMERWEEKLYPERIODSDAILYPERIODS_HPP_
#define ALIBABACLOUD_MODELS_WAFTIMERWEEKLYPERIODSDAILYPERIODS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafTimerWeeklyPeriodsDailyPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafTimerWeeklyPeriodsDailyPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, WafTimerWeeklyPeriodsDailyPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    WafTimerWeeklyPeriodsDailyPeriods() = default ;
    WafTimerWeeklyPeriodsDailyPeriods(const WafTimerWeeklyPeriodsDailyPeriods &) = default ;
    WafTimerWeeklyPeriodsDailyPeriods(WafTimerWeeklyPeriodsDailyPeriods &&) = default ;
    WafTimerWeeklyPeriodsDailyPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafTimerWeeklyPeriodsDailyPeriods() = default ;
    WafTimerWeeklyPeriodsDailyPeriods& operator=(const WafTimerWeeklyPeriodsDailyPeriods &) = default ;
    WafTimerWeeklyPeriodsDailyPeriods& operator=(WafTimerWeeklyPeriodsDailyPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->start_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline WafTimerWeeklyPeriodsDailyPeriods& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline WafTimerWeeklyPeriodsDailyPeriods& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<string> end_ = nullptr;
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
