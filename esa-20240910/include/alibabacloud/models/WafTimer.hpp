// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFTIMER_HPP_
#define ALIBABACLOUD_MODELS_WAFTIMER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class WeeklyPeriods : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WeeklyPeriods& obj) { 
        DARABONBA_PTR_TO_JSON(DailyPeriods, dailyPeriods_);
        DARABONBA_PTR_TO_JSON(Days, days_);
      };
      friend void from_json(const Darabonba::Json& j, WeeklyPeriods& obj) { 
        DARABONBA_PTR_FROM_JSON(DailyPeriods, dailyPeriods_);
        DARABONBA_PTR_FROM_JSON(Days, days_);
      };
      WeeklyPeriods() = default ;
      WeeklyPeriods(const WeeklyPeriods &) = default ;
      WeeklyPeriods(WeeklyPeriods &&) = default ;
      WeeklyPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WeeklyPeriods() = default ;
      WeeklyPeriods& operator=(const WeeklyPeriods &) = default ;
      WeeklyPeriods& operator=(WeeklyPeriods &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DailyPeriods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyPeriods& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, DailyPeriods& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        DailyPeriods() = default ;
        DailyPeriods(const DailyPeriods &) = default ;
        DailyPeriods(DailyPeriods &&) = default ;
        DailyPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyPeriods() = default ;
        DailyPeriods& operator=(const DailyPeriods &) = default ;
        DailyPeriods& operator=(DailyPeriods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline DailyPeriods& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline DailyPeriods& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        shared_ptr<string> end_ {};
        shared_ptr<string> start_ {};
      };

      virtual bool empty() const override { return this->dailyPeriods_ == nullptr
        && this->days_ == nullptr; };
      // dailyPeriods Field Functions 
      bool hasDailyPeriods() const { return this->dailyPeriods_ != nullptr;};
      void deleteDailyPeriods() { this->dailyPeriods_ = nullptr;};
      inline const vector<WeeklyPeriods::DailyPeriods> & getDailyPeriods() const { DARABONBA_PTR_GET_CONST(dailyPeriods_, vector<WeeklyPeriods::DailyPeriods>) };
      inline vector<WeeklyPeriods::DailyPeriods> getDailyPeriods() { DARABONBA_PTR_GET(dailyPeriods_, vector<WeeklyPeriods::DailyPeriods>) };
      inline WeeklyPeriods& setDailyPeriods(const vector<WeeklyPeriods::DailyPeriods> & dailyPeriods) { DARABONBA_PTR_SET_VALUE(dailyPeriods_, dailyPeriods) };
      inline WeeklyPeriods& setDailyPeriods(vector<WeeklyPeriods::DailyPeriods> && dailyPeriods) { DARABONBA_PTR_SET_RVALUE(dailyPeriods_, dailyPeriods) };


      // days Field Functions 
      bool hasDays() const { return this->days_ != nullptr;};
      void deleteDays() { this->days_ = nullptr;};
      inline string getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
      inline WeeklyPeriods& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    protected:
      shared_ptr<vector<WeeklyPeriods::DailyPeriods>> dailyPeriods_ {};
      shared_ptr<string> days_ {};
    };

    class Periods : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Periods& obj) { 
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Start, start_);
      };
      friend void from_json(const Darabonba::Json& j, Periods& obj) { 
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
      };
      Periods() = default ;
      Periods(const Periods &) = default ;
      Periods(Periods &&) = default ;
      Periods(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Periods() = default ;
      Periods& operator=(const Periods &) = default ;
      Periods& operator=(Periods &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->end_ == nullptr
        && this->start_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
      inline Periods& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
      inline Periods& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      shared_ptr<string> end_ {};
      shared_ptr<string> start_ {};
    };

    virtual bool empty() const override { return this->periods_ == nullptr
        && this->scopes_ == nullptr && this->weeklyPeriods_ == nullptr && this->zone_ == nullptr; };
    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline const vector<WafTimer::Periods> & getPeriods() const { DARABONBA_PTR_GET_CONST(periods_, vector<WafTimer::Periods>) };
    inline vector<WafTimer::Periods> getPeriods() { DARABONBA_PTR_GET(periods_, vector<WafTimer::Periods>) };
    inline WafTimer& setPeriods(const vector<WafTimer::Periods> & periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };
    inline WafTimer& setPeriods(vector<WafTimer::Periods> && periods) { DARABONBA_PTR_SET_RVALUE(periods_, periods) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline string getScopes() const { DARABONBA_PTR_GET_DEFAULT(scopes_, "") };
    inline WafTimer& setScopes(string scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };


    // weeklyPeriods Field Functions 
    bool hasWeeklyPeriods() const { return this->weeklyPeriods_ != nullptr;};
    void deleteWeeklyPeriods() { this->weeklyPeriods_ = nullptr;};
    inline const vector<WafTimer::WeeklyPeriods> & getWeeklyPeriods() const { DARABONBA_PTR_GET_CONST(weeklyPeriods_, vector<WafTimer::WeeklyPeriods>) };
    inline vector<WafTimer::WeeklyPeriods> getWeeklyPeriods() { DARABONBA_PTR_GET(weeklyPeriods_, vector<WafTimer::WeeklyPeriods>) };
    inline WafTimer& setWeeklyPeriods(const vector<WafTimer::WeeklyPeriods> & weeklyPeriods) { DARABONBA_PTR_SET_VALUE(weeklyPeriods_, weeklyPeriods) };
    inline WafTimer& setWeeklyPeriods(vector<WafTimer::WeeklyPeriods> && weeklyPeriods) { DARABONBA_PTR_SET_RVALUE(weeklyPeriods_, weeklyPeriods) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline int32_t getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, 0) };
    inline WafTimer& setZone(int32_t zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    shared_ptr<vector<WafTimer::Periods>> periods_ {};
    shared_ptr<string> scopes_ {};
    shared_ptr<vector<WafTimer::WeeklyPeriods>> weeklyPeriods_ {};
    shared_ptr<int32_t> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
