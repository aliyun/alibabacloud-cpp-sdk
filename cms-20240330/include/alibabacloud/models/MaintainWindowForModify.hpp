// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTAINWINDOWFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_MAINTAINWINDOWFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MaintainWindowForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaintainWindowForModify& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_TO_JSON(effective, effective_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, MaintainWindowForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_FROM_JSON(effective, effective_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    MaintainWindowForModify() = default ;
    MaintainWindowForModify(const MaintainWindowForModify &) = default ;
    MaintainWindowForModify(MaintainWindowForModify &&) = default ;
    MaintainWindowForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaintainWindowForModify() = default ;
    MaintainWindowForModify& operator=(const MaintainWindowForModify &) = default ;
    MaintainWindowForModify& operator=(MaintainWindowForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->endTimeInMinute_ == nullptr && this->startTimeInMinute_ == nullptr && this->timeZone_ == nullptr; };
      // dayInWeek Field Functions 
      bool hasDayInWeek() const { return this->dayInWeek_ != nullptr;};
      void deleteDayInWeek() { this->dayInWeek_ = nullptr;};
      inline const vector<int32_t> & getDayInWeek() const { DARABONBA_PTR_GET_CONST(dayInWeek_, vector<int32_t>) };
      inline vector<int32_t> getDayInWeek() { DARABONBA_PTR_GET(dayInWeek_, vector<int32_t>) };
      inline EffectTimeRange& setDayInWeek(const vector<int32_t> & dayInWeek) { DARABONBA_PTR_SET_VALUE(dayInWeek_, dayInWeek) };
      inline EffectTimeRange& setDayInWeek(vector<int32_t> && dayInWeek) { DARABONBA_PTR_SET_RVALUE(dayInWeek_, dayInWeek) };


      // endTimeInMinute Field Functions 
      bool hasEndTimeInMinute() const { return this->endTimeInMinute_ != nullptr;};
      void deleteEndTimeInMinute() { this->endTimeInMinute_ = nullptr;};
      inline int32_t getEndTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(endTimeInMinute_, 0) };
      inline EffectTimeRange& setEndTimeInMinute(int32_t endTimeInMinute) { DARABONBA_PTR_SET_VALUE(endTimeInMinute_, endTimeInMinute) };


      // startTimeInMinute Field Functions 
      bool hasStartTimeInMinute() const { return this->startTimeInMinute_ != nullptr;};
      void deleteStartTimeInMinute() { this->startTimeInMinute_ = nullptr;};
      inline int32_t getStartTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(startTimeInMinute_, 0) };
      inline EffectTimeRange& setStartTimeInMinute(int32_t startTimeInMinute) { DARABONBA_PTR_SET_VALUE(startTimeInMinute_, startTimeInMinute) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline EffectTimeRange& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      shared_ptr<vector<int32_t>> dayInWeek_ {};
      shared_ptr<int32_t> endTimeInMinute_ {};
      shared_ptr<int32_t> startTimeInMinute_ {};
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->effectTimeRange_ == nullptr && this->effective_ == nullptr && this->endTime_ == nullptr && this->filterSetting_ == nullptr && this->maintainWindowName_ == nullptr
        && this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MaintainWindowForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const MaintainWindowForModify::EffectTimeRange & getEffectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, MaintainWindowForModify::EffectTimeRange) };
    inline MaintainWindowForModify::EffectTimeRange getEffectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, MaintainWindowForModify::EffectTimeRange) };
    inline MaintainWindowForModify& setEffectTimeRange(const MaintainWindowForModify::EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline MaintainWindowForModify& setEffectTimeRange(MaintainWindowForModify::EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline MaintainWindowForModify& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MaintainWindowForModify& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline MaintainWindowForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline MaintainWindowForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // maintainWindowName Field Functions 
    bool hasMaintainWindowName() const { return this->maintainWindowName_ != nullptr;};
    void deleteMaintainWindowName() { this->maintainWindowName_ = nullptr;};
    inline string getMaintainWindowName() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowName_, "") };
    inline MaintainWindowForModify& setMaintainWindowName(string maintainWindowName) { DARABONBA_PTR_SET_VALUE(maintainWindowName_, maintainWindowName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MaintainWindowForModify& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<MaintainWindowForModify::EffectTimeRange> effectTimeRange_ {};
    shared_ptr<string> effective_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<FilterSetting> filterSetting_ {};
    // This parameter is required.
    shared_ptr<string> maintainWindowName_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
