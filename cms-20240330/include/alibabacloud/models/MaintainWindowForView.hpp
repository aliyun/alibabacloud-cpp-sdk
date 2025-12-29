// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAINTAINWINDOWFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_MAINTAINWINDOWFORVIEW_HPP_
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
  class MaintainWindowForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaintainWindowForView& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_TO_JSON(effective, effective_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_TO_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, MaintainWindowForView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
      DARABONBA_PTR_FROM_JSON(effective, effective_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_FROM_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    MaintainWindowForView() = default ;
    MaintainWindowForView(const MaintainWindowForView &) = default ;
    MaintainWindowForView(MaintainWindowForView &&) = default ;
    MaintainWindowForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaintainWindowForView() = default ;
    MaintainWindowForView& operator=(const MaintainWindowForView &) = default ;
    MaintainWindowForView& operator=(MaintainWindowForView &&) = default ;
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

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->effectTimeRange_ == nullptr && this->effective_ == nullptr && this->enable_ == nullptr && this->endTime_ == nullptr
        && this->filterSetting_ == nullptr && this->maintainWindowId_ == nullptr && this->maintainWindowName_ == nullptr && this->startTime_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MaintainWindowForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MaintainWindowForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const MaintainWindowForView::EffectTimeRange & getEffectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, MaintainWindowForView::EffectTimeRange) };
    inline MaintainWindowForView::EffectTimeRange getEffectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, MaintainWindowForView::EffectTimeRange) };
    inline MaintainWindowForView& setEffectTimeRange(const MaintainWindowForView::EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline MaintainWindowForView& setEffectTimeRange(MaintainWindowForView::EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline string getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, "") };
    inline MaintainWindowForView& setEffective(string effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline MaintainWindowForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline MaintainWindowForView& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline MaintainWindowForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline MaintainWindowForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // maintainWindowId Field Functions 
    bool hasMaintainWindowId() const { return this->maintainWindowId_ != nullptr;};
    void deleteMaintainWindowId() { this->maintainWindowId_ = nullptr;};
    inline string getMaintainWindowId() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowId_, "") };
    inline MaintainWindowForView& setMaintainWindowId(string maintainWindowId) { DARABONBA_PTR_SET_VALUE(maintainWindowId_, maintainWindowId) };


    // maintainWindowName Field Functions 
    bool hasMaintainWindowName() const { return this->maintainWindowName_ != nullptr;};
    void deleteMaintainWindowName() { this->maintainWindowName_ = nullptr;};
    inline string getMaintainWindowName() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowName_, "") };
    inline MaintainWindowForView& setMaintainWindowName(string maintainWindowName) { DARABONBA_PTR_SET_VALUE(maintainWindowName_, maintainWindowName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MaintainWindowForView& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline MaintainWindowForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline MaintainWindowForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline MaintainWindowForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<MaintainWindowForView::EffectTimeRange> effectTimeRange_ {};
    shared_ptr<string> effective_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<FilterSetting> filterSetting_ {};
    shared_ptr<string> maintainWindowId_ {};
    // This parameter is required.
    shared_ptr<string> maintainWindowName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
