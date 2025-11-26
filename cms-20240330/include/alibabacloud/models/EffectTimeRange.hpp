// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EFFECTTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_EFFECTTIMERANGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EffectTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EffectTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(dayInWeek, dayInWeek_);
      DARABONBA_PTR_TO_JSON(endTimeInMinute, endTimeInMinute_);
      DARABONBA_PTR_TO_JSON(startTimeInMinute, startTimeInMinute_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, EffectTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(dayInWeek, dayInWeek_);
      DARABONBA_PTR_FROM_JSON(endTimeInMinute, endTimeInMinute_);
      DARABONBA_PTR_FROM_JSON(startTimeInMinute, startTimeInMinute_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    EffectTimeRange() = default ;
    EffectTimeRange(const EffectTimeRange &) = default ;
    EffectTimeRange(EffectTimeRange &&) = default ;
    EffectTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EffectTimeRange() = default ;
    EffectTimeRange& operator=(const EffectTimeRange &) = default ;
    EffectTimeRange& operator=(EffectTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayInWeek_ == nullptr
        && return this->endTimeInMinute_ == nullptr && return this->startTimeInMinute_ == nullptr && return this->timeZone_ == nullptr; };
    // dayInWeek Field Functions 
    bool hasDayInWeek() const { return this->dayInWeek_ != nullptr;};
    void deleteDayInWeek() { this->dayInWeek_ = nullptr;};
    inline const vector<int32_t> & dayInWeek() const { DARABONBA_PTR_GET_CONST(dayInWeek_, vector<int32_t>) };
    inline vector<int32_t> dayInWeek() { DARABONBA_PTR_GET(dayInWeek_, vector<int32_t>) };
    inline EffectTimeRange& setDayInWeek(const vector<int32_t> & dayInWeek) { DARABONBA_PTR_SET_VALUE(dayInWeek_, dayInWeek) };
    inline EffectTimeRange& setDayInWeek(vector<int32_t> && dayInWeek) { DARABONBA_PTR_SET_RVALUE(dayInWeek_, dayInWeek) };


    // endTimeInMinute Field Functions 
    bool hasEndTimeInMinute() const { return this->endTimeInMinute_ != nullptr;};
    void deleteEndTimeInMinute() { this->endTimeInMinute_ = nullptr;};
    inline int32_t endTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(endTimeInMinute_, 0) };
    inline EffectTimeRange& setEndTimeInMinute(int32_t endTimeInMinute) { DARABONBA_PTR_SET_VALUE(endTimeInMinute_, endTimeInMinute) };


    // startTimeInMinute Field Functions 
    bool hasStartTimeInMinute() const { return this->startTimeInMinute_ != nullptr;};
    void deleteStartTimeInMinute() { this->startTimeInMinute_ = nullptr;};
    inline int32_t startTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(startTimeInMinute_, 0) };
    inline EffectTimeRange& setStartTimeInMinute(int32_t startTimeInMinute) { DARABONBA_PTR_SET_VALUE(startTimeInMinute_, startTimeInMinute) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline EffectTimeRange& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<vector<int32_t>> dayInWeek_ = nullptr;
    std::shared_ptr<int32_t> endTimeInMinute_ = nullptr;
    std::shared_ptr<int32_t> startTimeInMinute_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
