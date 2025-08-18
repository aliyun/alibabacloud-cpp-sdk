// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFTIMER_HPP_
#define ALIBABACLOUD_MODELS_WAFTIMER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafTimerPeriods.hpp>
#include <alibabacloud/models/WafTimerWeeklyPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafTimer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafTimer& obj) { 
      DARABONBA_PTR_TO_JSON(Periods, periods_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(WeeklyPeriods, weeklyPeriods_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, WafTimer& obj) { 
      DARABONBA_PTR_FROM_JSON(Periods, periods_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(WeeklyPeriods, weeklyPeriods_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    WafTimer() = default ;
    WafTimer(const WafTimer &) = default ;
    WafTimer(WafTimer &&) = default ;
    WafTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafTimer() = default ;
    WafTimer& operator=(const WafTimer &) = default ;
    WafTimer& operator=(WafTimer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->periods_ != nullptr
        && this->scopes_ != nullptr && this->weeklyPeriods_ != nullptr && this->zone_ != nullptr; };
    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline const vector<WafTimerPeriods> & periods() const { DARABONBA_PTR_GET_CONST(periods_, vector<WafTimerPeriods>) };
    inline vector<WafTimerPeriods> periods() { DARABONBA_PTR_GET(periods_, vector<WafTimerPeriods>) };
    inline WafTimer& setPeriods(const vector<WafTimerPeriods> & periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };
    inline WafTimer& setPeriods(vector<WafTimerPeriods> && periods) { DARABONBA_PTR_SET_RVALUE(periods_, periods) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline string scopes() const { DARABONBA_PTR_GET_DEFAULT(scopes_, "") };
    inline WafTimer& setScopes(string scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };


    // weeklyPeriods Field Functions 
    bool hasWeeklyPeriods() const { return this->weeklyPeriods_ != nullptr;};
    void deleteWeeklyPeriods() { this->weeklyPeriods_ = nullptr;};
    inline const vector<WafTimerWeeklyPeriods> & weeklyPeriods() const { DARABONBA_PTR_GET_CONST(weeklyPeriods_, vector<WafTimerWeeklyPeriods>) };
    inline vector<WafTimerWeeklyPeriods> weeklyPeriods() { DARABONBA_PTR_GET(weeklyPeriods_, vector<WafTimerWeeklyPeriods>) };
    inline WafTimer& setWeeklyPeriods(const vector<WafTimerWeeklyPeriods> & weeklyPeriods) { DARABONBA_PTR_SET_VALUE(weeklyPeriods_, weeklyPeriods) };
    inline WafTimer& setWeeklyPeriods(vector<WafTimerWeeklyPeriods> && weeklyPeriods) { DARABONBA_PTR_SET_RVALUE(weeklyPeriods_, weeklyPeriods) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline int32_t zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, 0) };
    inline WafTimer& setZone(int32_t zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<WafTimerPeriods>> periods_ = nullptr;
    std::shared_ptr<string> scopes_ = nullptr;
    std::shared_ptr<vector<WafTimerWeeklyPeriods>> weeklyPeriods_ = nullptr;
    std::shared_ptr<int32_t> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
