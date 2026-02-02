// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/WorkspaceFilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModify& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_TO_JSON(escalationId, escalationId_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
      DARABONBA_PTR_TO_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_FROM_JSON(escalationId, escalationId_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
      DARABONBA_PTR_FROM_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    NotifyStrategyForModify() = default ;
    NotifyStrategyForModify(const NotifyStrategyForModify &) = default ;
    NotifyStrategyForModify(NotifyStrategyForModify &&) = default ;
    NotifyStrategyForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModify() = default ;
    NotifyStrategyForModify& operator=(const NotifyStrategyForModify &) = default ;
    NotifyStrategyForModify& operator=(NotifyStrategyForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Routes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routes& obj) { 
        DARABONBA_PTR_TO_JSON(channels, channels_);
        DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
        DARABONBA_PTR_TO_JSON(enableRca, enableRca_);
        DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
        DARABONBA_PTR_TO_JSON(severities, severities_);
      };
      friend void from_json(const Darabonba::Json& j, Routes& obj) { 
        DARABONBA_PTR_FROM_JSON(channels, channels_);
        DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
        DARABONBA_PTR_FROM_JSON(enableRca, enableRca_);
        DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
        DARABONBA_PTR_FROM_JSON(severities, severities_);
      };
      Routes() = default ;
      Routes(const Routes &) = default ;
      Routes(Routes &&) = default ;
      Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Routes() = default ;
      Routes& operator=(const Routes &) = default ;
      Routes& operator=(Routes &&) = default ;
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

      class Channels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Channels& obj) { 
          DARABONBA_PTR_TO_JSON(channelType, channelType_);
          DARABONBA_PTR_TO_JSON(enabledSubChannels, enabledSubChannels_);
          DARABONBA_PTR_TO_JSON(receivers, receivers_);
        };
        friend void from_json(const Darabonba::Json& j, Channels& obj) { 
          DARABONBA_PTR_FROM_JSON(channelType, channelType_);
          DARABONBA_PTR_FROM_JSON(enabledSubChannels, enabledSubChannels_);
          DARABONBA_PTR_FROM_JSON(receivers, receivers_);
        };
        Channels() = default ;
        Channels(const Channels &) = default ;
        Channels(Channels &&) = default ;
        Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Channels() = default ;
        Channels& operator=(const Channels &) = default ;
        Channels& operator=(Channels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelType_ == nullptr
        && this->enabledSubChannels_ == nullptr && this->receivers_ == nullptr; };
        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline Channels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // enabledSubChannels Field Functions 
        bool hasEnabledSubChannels() const { return this->enabledSubChannels_ != nullptr;};
        void deleteEnabledSubChannels() { this->enabledSubChannels_ = nullptr;};
        inline const vector<string> & getEnabledSubChannels() const { DARABONBA_PTR_GET_CONST(enabledSubChannels_, vector<string>) };
        inline vector<string> getEnabledSubChannels() { DARABONBA_PTR_GET(enabledSubChannels_, vector<string>) };
        inline Channels& setEnabledSubChannels(const vector<string> & enabledSubChannels) { DARABONBA_PTR_SET_VALUE(enabledSubChannels_, enabledSubChannels) };
        inline Channels& setEnabledSubChannels(vector<string> && enabledSubChannels) { DARABONBA_PTR_SET_RVALUE(enabledSubChannels_, enabledSubChannels) };


        // receivers Field Functions 
        bool hasReceivers() const { return this->receivers_ != nullptr;};
        void deleteReceivers() { this->receivers_ = nullptr;};
        inline const vector<string> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
        inline vector<string> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
        inline Channels& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
        inline Channels& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


      protected:
        // This parameter is required.
        shared_ptr<string> channelType_ {};
        shared_ptr<vector<string>> enabledSubChannels_ {};
        // This parameter is required.
        shared_ptr<vector<string>> receivers_ {};
      };

      virtual bool empty() const override { return this->channels_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->effectTimeRange_ == nullptr && this->enableRca_ == nullptr && this->filterSetting_ == nullptr && this->severities_ == nullptr; };
      // channels Field Functions 
      bool hasChannels() const { return this->channels_ != nullptr;};
      void deleteChannels() { this->channels_ = nullptr;};
      inline const vector<Routes::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Routes::Channels>) };
      inline vector<Routes::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<Routes::Channels>) };
      inline Routes& setChannels(const vector<Routes::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
      inline Routes& setChannels(vector<Routes::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


      // digitalEmployeeName Field Functions 
      bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
      void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
      inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
      inline Routes& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


      // effectTimeRange Field Functions 
      bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
      void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
      inline const Routes::EffectTimeRange & getEffectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, Routes::EffectTimeRange) };
      inline Routes::EffectTimeRange getEffectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, Routes::EffectTimeRange) };
      inline Routes& setEffectTimeRange(const Routes::EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
      inline Routes& setEffectTimeRange(Routes::EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


      // enableRca Field Functions 
      bool hasEnableRca() const { return this->enableRca_ != nullptr;};
      void deleteEnableRca() { this->enableRca_ = nullptr;};
      inline bool getEnableRca() const { DARABONBA_PTR_GET_DEFAULT(enableRca_, false) };
      inline Routes& setEnableRca(bool enableRca) { DARABONBA_PTR_SET_VALUE(enableRca_, enableRca) };


      // filterSetting Field Functions 
      bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
      void deleteFilterSetting() { this->filterSetting_ = nullptr;};
      inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
      inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
      inline Routes& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
      inline Routes& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


      // severities Field Functions 
      bool hasSeverities() const { return this->severities_ != nullptr;};
      void deleteSeverities() { this->severities_ = nullptr;};
      inline const vector<string> & getSeverities() const { DARABONBA_PTR_GET_CONST(severities_, vector<string>) };
      inline vector<string> getSeverities() { DARABONBA_PTR_GET(severities_, vector<string>) };
      inline Routes& setSeverities(const vector<string> & severities) { DARABONBA_PTR_SET_VALUE(severities_, severities) };
      inline Routes& setSeverities(vector<string> && severities) { DARABONBA_PTR_SET_RVALUE(severities_, severities) };


    protected:
      shared_ptr<vector<Routes::Channels>> channels_ {};
      shared_ptr<string> digitalEmployeeName_ {};
      shared_ptr<Routes::EffectTimeRange> effectTimeRange_ {};
      shared_ptr<bool> enableRca_ {};
      shared_ptr<FilterSetting> filterSetting_ {};
      shared_ptr<vector<string>> severities_ {};
    };

    class RepeatNotifySetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepeatNotifySetting& obj) { 
        DARABONBA_PTR_TO_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_TO_JSON(repeatInterval, repeatInterval_);
      };
      friend void from_json(const Darabonba::Json& j, RepeatNotifySetting& obj) { 
        DARABONBA_PTR_FROM_JSON(endIncidentState, endIncidentState_);
        DARABONBA_PTR_FROM_JSON(repeatInterval, repeatInterval_);
      };
      RepeatNotifySetting() = default ;
      RepeatNotifySetting(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting(RepeatNotifySetting &&) = default ;
      RepeatNotifySetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepeatNotifySetting() = default ;
      RepeatNotifySetting& operator=(const RepeatNotifySetting &) = default ;
      RepeatNotifySetting& operator=(RepeatNotifySetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIncidentState_ == nullptr
        && this->repeatInterval_ == nullptr; };
      // endIncidentState Field Functions 
      bool hasEndIncidentState() const { return this->endIncidentState_ != nullptr;};
      void deleteEndIncidentState() { this->endIncidentState_ = nullptr;};
      inline string getEndIncidentState() const { DARABONBA_PTR_GET_DEFAULT(endIncidentState_, "") };
      inline RepeatNotifySetting& setEndIncidentState(string endIncidentState) { DARABONBA_PTR_SET_VALUE(endIncidentState_, endIncidentState) };


      // repeatInterval Field Functions 
      bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
      void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
      inline int32_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
      inline RepeatNotifySetting& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


    protected:
      shared_ptr<string> endIncidentState_ {};
      shared_ptr<int32_t> repeatInterval_ {};
    };

    class PushingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
      };
      friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
      };
      PushingSetting() = default ;
      PushingSetting(const PushingSetting &) = default ;
      PushingSetting(PushingSetting &&) = default ;
      PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushingSetting() = default ;
      PushingSetting& operator=(const PushingSetting &) = default ;
      PushingSetting& operator=(PushingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->restoreActionIds_ == nullptr && this->templateUuid_ == nullptr; };
      // alertActionIds Field Functions 
      bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
      void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
      inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
      inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
      inline PushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
      inline PushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


      // restoreActionIds Field Functions 
      bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
      void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
      inline const vector<string> & getRestoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
      inline vector<string> getRestoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
      inline PushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
      inline PushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


      // templateUuid Field Functions 
      bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
      void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
      inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
      inline PushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    protected:
      shared_ptr<vector<string>> alertActionIds_ {};
      shared_ptr<vector<string>> restoreActionIds_ {};
      shared_ptr<string> templateUuid_ {};
    };

    class GroupingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(groupingKeys, groupingKeys_);
        DARABONBA_PTR_TO_JSON(periodMin, periodMin_);
        DARABONBA_PTR_TO_JSON(silenceSec, silenceSec_);
        DARABONBA_PTR_TO_JSON(times, times_);
      };
      friend void from_json(const Darabonba::Json& j, GroupingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(groupingKeys, groupingKeys_);
        DARABONBA_PTR_FROM_JSON(periodMin, periodMin_);
        DARABONBA_PTR_FROM_JSON(silenceSec, silenceSec_);
        DARABONBA_PTR_FROM_JSON(times, times_);
      };
      GroupingSetting() = default ;
      GroupingSetting(const GroupingSetting &) = default ;
      GroupingSetting(GroupingSetting &&) = default ;
      GroupingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupingSetting() = default ;
      GroupingSetting& operator=(const GroupingSetting &) = default ;
      GroupingSetting& operator=(GroupingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupingKeys_ == nullptr
        && this->periodMin_ == nullptr && this->silenceSec_ == nullptr && this->times_ == nullptr; };
      // groupingKeys Field Functions 
      bool hasGroupingKeys() const { return this->groupingKeys_ != nullptr;};
      void deleteGroupingKeys() { this->groupingKeys_ = nullptr;};
      inline const vector<string> & getGroupingKeys() const { DARABONBA_PTR_GET_CONST(groupingKeys_, vector<string>) };
      inline vector<string> getGroupingKeys() { DARABONBA_PTR_GET(groupingKeys_, vector<string>) };
      inline GroupingSetting& setGroupingKeys(const vector<string> & groupingKeys) { DARABONBA_PTR_SET_VALUE(groupingKeys_, groupingKeys) };
      inline GroupingSetting& setGroupingKeys(vector<string> && groupingKeys) { DARABONBA_PTR_SET_RVALUE(groupingKeys_, groupingKeys) };


      // periodMin Field Functions 
      bool hasPeriodMin() const { return this->periodMin_ != nullptr;};
      void deletePeriodMin() { this->periodMin_ = nullptr;};
      inline int32_t getPeriodMin() const { DARABONBA_PTR_GET_DEFAULT(periodMin_, 0) };
      inline GroupingSetting& setPeriodMin(int32_t periodMin) { DARABONBA_PTR_SET_VALUE(periodMin_, periodMin) };


      // silenceSec Field Functions 
      bool hasSilenceSec() const { return this->silenceSec_ != nullptr;};
      void deleteSilenceSec() { this->silenceSec_ = nullptr;};
      inline int32_t getSilenceSec() const { DARABONBA_PTR_GET_DEFAULT(silenceSec_, 0) };
      inline GroupingSetting& setSilenceSec(int32_t silenceSec) { DARABONBA_PTR_SET_VALUE(silenceSec_, silenceSec) };


      // times Field Functions 
      bool hasTimes() const { return this->times_ != nullptr;};
      void deleteTimes() { this->times_ = nullptr;};
      inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
      inline GroupingSetting& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    protected:
      shared_ptr<vector<string>> groupingKeys_ {};
      shared_ptr<int32_t> periodMin_ {};
      shared_ptr<int32_t> silenceSec_ {};
      shared_ptr<int32_t> times_ {};
    };

    class CustomTemplateEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomTemplateEntries& obj) { 
        DARABONBA_PTR_TO_JSON(targetType, targetType_);
        DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
      };
      friend void from_json(const Darabonba::Json& j, CustomTemplateEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(targetType, targetType_);
        DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
      };
      CustomTemplateEntries() = default ;
      CustomTemplateEntries(const CustomTemplateEntries &) = default ;
      CustomTemplateEntries(CustomTemplateEntries &&) = default ;
      CustomTemplateEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomTemplateEntries() = default ;
      CustomTemplateEntries& operator=(const CustomTemplateEntries &) = default ;
      CustomTemplateEntries& operator=(CustomTemplateEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetType_ == nullptr
        && this->templateUuid_ == nullptr; };
      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline CustomTemplateEntries& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // templateUuid Field Functions 
      bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
      void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
      inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
      inline CustomTemplateEntries& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    protected:
      // This parameter is required.
      shared_ptr<string> targetType_ {};
      // This parameter is required.
      shared_ptr<string> templateUuid_ {};
    };

    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && this->customTemplateEntries_ == nullptr && this->description_ == nullptr && this->enableIncidentManagement_ == nullptr && this->escalationId_ == nullptr && this->filterSetting_ == nullptr
        && this->groupingSetting_ == nullptr && this->ignoreRestoredNotification_ == nullptr && this->notifyStrategyName_ == nullptr && this->pushingSetting_ == nullptr && this->repeatNotifySetting_ == nullptr
        && this->routes_ == nullptr && this->workspaceFilterSetting_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int32_t getAutoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0) };
    inline NotifyStrategyForModify& setAutoRecoverSeconds(int32_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // customTemplateEntries Field Functions 
    bool hasCustomTemplateEntries() const { return this->customTemplateEntries_ != nullptr;};
    void deleteCustomTemplateEntries() { this->customTemplateEntries_ = nullptr;};
    inline const vector<NotifyStrategyForModify::CustomTemplateEntries> & getCustomTemplateEntries() const { DARABONBA_PTR_GET_CONST(customTemplateEntries_, vector<NotifyStrategyForModify::CustomTemplateEntries>) };
    inline vector<NotifyStrategyForModify::CustomTemplateEntries> getCustomTemplateEntries() { DARABONBA_PTR_GET(customTemplateEntries_, vector<NotifyStrategyForModify::CustomTemplateEntries>) };
    inline NotifyStrategyForModify& setCustomTemplateEntries(const vector<NotifyStrategyForModify::CustomTemplateEntries> & customTemplateEntries) { DARABONBA_PTR_SET_VALUE(customTemplateEntries_, customTemplateEntries) };
    inline NotifyStrategyForModify& setCustomTemplateEntries(vector<NotifyStrategyForModify::CustomTemplateEntries> && customTemplateEntries) { DARABONBA_PTR_SET_RVALUE(customTemplateEntries_, customTemplateEntries) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyStrategyForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIncidentManagement Field Functions 
    bool hasEnableIncidentManagement() const { return this->enableIncidentManagement_ != nullptr;};
    void deleteEnableIncidentManagement() { this->enableIncidentManagement_ = nullptr;};
    inline bool getEnableIncidentManagement() const { DARABONBA_PTR_GET_DEFAULT(enableIncidentManagement_, false) };
    inline NotifyStrategyForModify& setEnableIncidentManagement(bool enableIncidentManagement) { DARABONBA_PTR_SET_VALUE(enableIncidentManagement_, enableIncidentManagement) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & getEscalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> getEscalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline NotifyStrategyForModify& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline NotifyStrategyForModify& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline NotifyStrategyForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotifyStrategyForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotifyStrategyForModify::GroupingSetting & getGroupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotifyStrategyForModify::GroupingSetting) };
    inline NotifyStrategyForModify::GroupingSetting getGroupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotifyStrategyForModify::GroupingSetting) };
    inline NotifyStrategyForModify& setGroupingSetting(const NotifyStrategyForModify::GroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotifyStrategyForModify& setGroupingSetting(NotifyStrategyForModify::GroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // ignoreRestoredNotification Field Functions 
    bool hasIgnoreRestoredNotification() const { return this->ignoreRestoredNotification_ != nullptr;};
    void deleteIgnoreRestoredNotification() { this->ignoreRestoredNotification_ = nullptr;};
    inline bool getIgnoreRestoredNotification() const { DARABONBA_PTR_GET_DEFAULT(ignoreRestoredNotification_, false) };
    inline NotifyStrategyForModify& setIgnoreRestoredNotification(bool ignoreRestoredNotification) { DARABONBA_PTR_SET_VALUE(ignoreRestoredNotification_, ignoreRestoredNotification) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string getNotifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline NotifyStrategyForModify& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const NotifyStrategyForModify::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, NotifyStrategyForModify::PushingSetting) };
    inline NotifyStrategyForModify::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, NotifyStrategyForModify::PushingSetting) };
    inline NotifyStrategyForModify& setPushingSetting(const NotifyStrategyForModify::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline NotifyStrategyForModify& setPushingSetting(NotifyStrategyForModify::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const NotifyStrategyForModify::RepeatNotifySetting & getRepeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, NotifyStrategyForModify::RepeatNotifySetting) };
    inline NotifyStrategyForModify::RepeatNotifySetting getRepeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, NotifyStrategyForModify::RepeatNotifySetting) };
    inline NotifyStrategyForModify& setRepeatNotifySetting(const NotifyStrategyForModify::RepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline NotifyStrategyForModify& setRepeatNotifySetting(NotifyStrategyForModify::RepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForModify::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForModify::Routes>) };
    inline vector<NotifyStrategyForModify::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForModify::Routes>) };
    inline NotifyStrategyForModify& setRoutes(const vector<NotifyStrategyForModify::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForModify& setRoutes(vector<NotifyStrategyForModify::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // workspaceFilterSetting Field Functions 
    bool hasWorkspaceFilterSetting() const { return this->workspaceFilterSetting_ != nullptr;};
    void deleteWorkspaceFilterSetting() { this->workspaceFilterSetting_ = nullptr;};
    inline const WorkspaceFilterSetting & getWorkspaceFilterSetting() const { DARABONBA_PTR_GET_CONST(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline WorkspaceFilterSetting getWorkspaceFilterSetting() { DARABONBA_PTR_GET(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline NotifyStrategyForModify& setWorkspaceFilterSetting(const WorkspaceFilterSetting & workspaceFilterSetting) { DARABONBA_PTR_SET_VALUE(workspaceFilterSetting_, workspaceFilterSetting) };
    inline NotifyStrategyForModify& setWorkspaceFilterSetting(WorkspaceFilterSetting && workspaceFilterSetting) { DARABONBA_PTR_SET_RVALUE(workspaceFilterSetting_, workspaceFilterSetting) };


  protected:
    shared_ptr<int32_t> autoRecoverSeconds_ {};
    shared_ptr<vector<NotifyStrategyForModify::CustomTemplateEntries>> customTemplateEntries_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableIncidentManagement_ {};
    shared_ptr<vector<string>> escalationId_ {};
    shared_ptr<FilterSetting> filterSetting_ {};
    // This parameter is required.
    shared_ptr<NotifyStrategyForModify::GroupingSetting> groupingSetting_ {};
    shared_ptr<bool> ignoreRestoredNotification_ {};
    // This parameter is required.
    shared_ptr<string> notifyStrategyName_ {};
    shared_ptr<NotifyStrategyForModify::PushingSetting> pushingSetting_ {};
    shared_ptr<NotifyStrategyForModify::RepeatNotifySetting> repeatNotifySetting_ {};
    // This parameter is required.
    shared_ptr<vector<NotifyStrategyForModify::Routes>> routes_ {};
    shared_ptr<WorkspaceFilterSetting> workspaceFilterSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
