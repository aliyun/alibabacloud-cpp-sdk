// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTAINWINDOWFORVIEWEFFECTTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_MAINTAINWINDOWFORVIEWEFFECTTIMERANGE_HPP_
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
  class MaintainWindowForViewEffectTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaintainWindowForViewEffectTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(dayInWeek, dayInWeek_);
      DARABONBA_PTR_TO_JSON(endTimeInMinute, endTimeInMinute_);
      DARABONBA_PTR_TO_JSON(startTimeInMinute, startTimeInMinute_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, MaintainWindowForViewEffectTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(dayInWeek, dayInWeek_);
      DARABONBA_PTR_FROM_JSON(endTimeInMinute, endTimeInMinute_);
      DARABONBA_PTR_FROM_JSON(startTimeInMinute, startTimeInMinute_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    MaintainWindowForViewEffectTimeRange() = default ;
    MaintainWindowForViewEffectTimeRange(const MaintainWindowForViewEffectTimeRange &) = default ;
    MaintainWindowForViewEffectTimeRange(MaintainWindowForViewEffectTimeRange &&) = default ;
    MaintainWindowForViewEffectTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaintainWindowForViewEffectTimeRange() = default ;
    MaintainWindowForViewEffectTimeRange& operator=(const MaintainWindowForViewEffectTimeRange &) = default ;
    MaintainWindowForViewEffectTimeRange& operator=(MaintainWindowForViewEffectTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayInWeek_ != nullptr
        && this->endTimeInMinute_ != nullptr && this->startTimeInMinute_ != nullptr && this->timeZone_ != nullptr; };
    // dayInWeek Field Functions 
    bool hasDayInWeek() const { return this->dayInWeek_ != nullptr;};
    void deleteDayInWeek() { this->dayInWeek_ = nullptr;};
    inline const vector<int32_t> & dayInWeek() const { DARABONBA_PTR_GET_CONST(dayInWeek_, vector<int32_t>) };
    inline vector<int32_t> dayInWeek() { DARABONBA_PTR_GET(dayInWeek_, vector<int32_t>) };
    inline MaintainWindowForViewEffectTimeRange& setDayInWeek(const vector<int32_t> & dayInWeek) { DARABONBA_PTR_SET_VALUE(dayInWeek_, dayInWeek) };
    inline MaintainWindowForViewEffectTimeRange& setDayInWeek(vector<int32_t> && dayInWeek) { DARABONBA_PTR_SET_RVALUE(dayInWeek_, dayInWeek) };


    // endTimeInMinute Field Functions 
    bool hasEndTimeInMinute() const { return this->endTimeInMinute_ != nullptr;};
    void deleteEndTimeInMinute() { this->endTimeInMinute_ = nullptr;};
    inline int32_t endTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(endTimeInMinute_, 0) };
    inline MaintainWindowForViewEffectTimeRange& setEndTimeInMinute(int32_t endTimeInMinute) { DARABONBA_PTR_SET_VALUE(endTimeInMinute_, endTimeInMinute) };


    // startTimeInMinute Field Functions 
    bool hasStartTimeInMinute() const { return this->startTimeInMinute_ != nullptr;};
    void deleteStartTimeInMinute() { this->startTimeInMinute_ = nullptr;};
    inline int32_t startTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(startTimeInMinute_, 0) };
    inline MaintainWindowForViewEffectTimeRange& setStartTimeInMinute(int32_t startTimeInMinute) { DARABONBA_PTR_SET_VALUE(startTimeInMinute_, startTimeInMinute) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline MaintainWindowForViewEffectTimeRange& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


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
