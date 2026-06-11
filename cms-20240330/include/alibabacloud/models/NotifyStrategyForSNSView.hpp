// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORSNSVIEW_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORSNSVIEW_HPP_
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
  class NotifyStrategyForSNSView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForSNSView& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(incidentResponsePlanId, incidentResponsePlanId_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
      DARABONBA_PTR_TO_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForSNSView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(incidentResponsePlanId, incidentResponsePlanId_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
      DARABONBA_PTR_FROM_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    NotifyStrategyForSNSView() = default ;
    NotifyStrategyForSNSView(const NotifyStrategyForSNSView &) = default ;
    NotifyStrategyForSNSView(NotifyStrategyForSNSView &&) = default ;
    NotifyStrategyForSNSView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForSNSView() = default ;
    NotifyStrategyForSNSView& operator=(const NotifyStrategyForSNSView &) = default ;
    NotifyStrategyForSNSView& operator=(NotifyStrategyForSNSView &&) = default ;
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
        // The days of the week when the route is active.
        shared_ptr<vector<int32_t>> dayInWeek_ {};
        // The end time of the active period, specified in minutes from 00:00.
        shared_ptr<int32_t> endTimeInMinute_ {};
        // The start time of the active period, specified in minutes from 00:00.
        shared_ptr<int32_t> startTimeInMinute_ {};
        // The time zone for the active period. For example, \\"Asia/Shanghai\\".
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
        // The type of the notification channel, such as \\"sms\\" or \\"email\\".
        shared_ptr<string> channelType_ {};
        // The enabled sub-channels.
        shared_ptr<vector<string>> enabledSubChannels_ {};
        // The list of receivers for the channel.
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
      // The notification channels for the route.
      shared_ptr<vector<Routes::Channels>> channels_ {};
      // The name of the digital employee assigned to this route.
      shared_ptr<string> digitalEmployeeName_ {};
      // The time range during which the notification route is active.
      shared_ptr<Routes::EffectTimeRange> effectTimeRange_ {};
      // Specifies whether to enable root cause analysis (RCA) for alerts that match this route. Valid values: true, false.
      shared_ptr<bool> enableRca_ {};
      // The filter settings for the route.
      shared_ptr<FilterSetting> filterSetting_ {};
      // The alert severities that trigger this route.
      shared_ptr<vector<string>> severities_ {};
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
      // The keys for grouping alerts.
      shared_ptr<vector<string>> groupingKeys_ {};
      // The time window in minutes for grouping alerts.
      shared_ptr<int32_t> periodMin_ {};
      // The silence period in seconds after a notification is sent for a group.
      shared_ptr<int32_t> silenceSec_ {};
      // The number of times to send notifications for a group.
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
      // The target type for the custom template.
      shared_ptr<string> targetType_ {};
      // The unique identifier (UUID) of the template.
      shared_ptr<string> templateUuid_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customTemplateEntries_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->enableIncidentManagement_ == nullptr && this->groupingSetting_ == nullptr
        && this->ignoreRestoredNotification_ == nullptr && this->incidentResponsePlanId_ == nullptr && this->mode_ == nullptr && this->notifyStrategyId_ == nullptr && this->notifyStrategyName_ == nullptr
        && this->routes_ == nullptr && this->syncFromType_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotifyStrategyForSNSView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customTemplateEntries Field Functions 
    bool hasCustomTemplateEntries() const { return this->customTemplateEntries_ != nullptr;};
    void deleteCustomTemplateEntries() { this->customTemplateEntries_ = nullptr;};
    inline const vector<NotifyStrategyForSNSView::CustomTemplateEntries> & getCustomTemplateEntries() const { DARABONBA_PTR_GET_CONST(customTemplateEntries_, vector<NotifyStrategyForSNSView::CustomTemplateEntries>) };
    inline vector<NotifyStrategyForSNSView::CustomTemplateEntries> getCustomTemplateEntries() { DARABONBA_PTR_GET(customTemplateEntries_, vector<NotifyStrategyForSNSView::CustomTemplateEntries>) };
    inline NotifyStrategyForSNSView& setCustomTemplateEntries(const vector<NotifyStrategyForSNSView::CustomTemplateEntries> & customTemplateEntries) { DARABONBA_PTR_SET_VALUE(customTemplateEntries_, customTemplateEntries) };
    inline NotifyStrategyForSNSView& setCustomTemplateEntries(vector<NotifyStrategyForSNSView::CustomTemplateEntries> && customTemplateEntries) { DARABONBA_PTR_SET_RVALUE(customTemplateEntries_, customTemplateEntries) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyStrategyForSNSView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline NotifyStrategyForSNSView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableIncidentManagement Field Functions 
    bool hasEnableIncidentManagement() const { return this->enableIncidentManagement_ != nullptr;};
    void deleteEnableIncidentManagement() { this->enableIncidentManagement_ = nullptr;};
    inline bool getEnableIncidentManagement() const { DARABONBA_PTR_GET_DEFAULT(enableIncidentManagement_, false) };
    inline NotifyStrategyForSNSView& setEnableIncidentManagement(bool enableIncidentManagement) { DARABONBA_PTR_SET_VALUE(enableIncidentManagement_, enableIncidentManagement) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotifyStrategyForSNSView::GroupingSetting & getGroupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotifyStrategyForSNSView::GroupingSetting) };
    inline NotifyStrategyForSNSView::GroupingSetting getGroupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotifyStrategyForSNSView::GroupingSetting) };
    inline NotifyStrategyForSNSView& setGroupingSetting(const NotifyStrategyForSNSView::GroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotifyStrategyForSNSView& setGroupingSetting(NotifyStrategyForSNSView::GroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // ignoreRestoredNotification Field Functions 
    bool hasIgnoreRestoredNotification() const { return this->ignoreRestoredNotification_ != nullptr;};
    void deleteIgnoreRestoredNotification() { this->ignoreRestoredNotification_ = nullptr;};
    inline bool getIgnoreRestoredNotification() const { DARABONBA_PTR_GET_DEFAULT(ignoreRestoredNotification_, false) };
    inline NotifyStrategyForSNSView& setIgnoreRestoredNotification(bool ignoreRestoredNotification) { DARABONBA_PTR_SET_VALUE(ignoreRestoredNotification_, ignoreRestoredNotification) };


    // incidentResponsePlanId Field Functions 
    bool hasIncidentResponsePlanId() const { return this->incidentResponsePlanId_ != nullptr;};
    void deleteIncidentResponsePlanId() { this->incidentResponsePlanId_ = nullptr;};
    inline string getIncidentResponsePlanId() const { DARABONBA_PTR_GET_DEFAULT(incidentResponsePlanId_, "") };
    inline NotifyStrategyForSNSView& setIncidentResponsePlanId(string incidentResponsePlanId) { DARABONBA_PTR_SET_VALUE(incidentResponsePlanId_, incidentResponsePlanId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline NotifyStrategyForSNSView& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string getNotifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline NotifyStrategyForSNSView& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string getNotifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline NotifyStrategyForSNSView& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForSNSView::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForSNSView::Routes>) };
    inline vector<NotifyStrategyForSNSView::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForSNSView::Routes>) };
    inline NotifyStrategyForSNSView& setRoutes(const vector<NotifyStrategyForSNSView::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForSNSView& setRoutes(vector<NotifyStrategyForSNSView::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string getSyncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline NotifyStrategyForSNSView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotifyStrategyForSNSView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotifyStrategyForSNSView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline NotifyStrategyForSNSView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The creation time of the notification strategy.
    shared_ptr<string> createTime_ {};
    // The list of custom templates.
    shared_ptr<vector<NotifyStrategyForSNSView::CustomTemplateEntries>> customTemplateEntries_ {};
    // The description of the notification strategy.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the notification strategy. Valid values: true, false.
    shared_ptr<bool> enable_ {};
    // Specifies whether to enable incident management. Valid values: true, false.
    shared_ptr<bool> enableIncidentManagement_ {};
    // The settings for alert grouping.
    shared_ptr<NotifyStrategyForSNSView::GroupingSetting> groupingSetting_ {};
    // Specifies whether to ignore notifications for restored alerts. Valid values: true, false.
    shared_ptr<bool> ignoreRestoredNotification_ {};
    // The ID of the incident response plan.
    shared_ptr<string> incidentResponsePlanId_ {};
    // The mode of the notification strategy.
    shared_ptr<string> mode_ {};
    // The ID of the notification strategy.
    shared_ptr<string> notifyStrategyId_ {};
    // The name of the notification strategy.
    shared_ptr<string> notifyStrategyName_ {};
    // The list of notification routes.
    shared_ptr<vector<NotifyStrategyForSNSView::Routes>> routes_ {};
    // The source from which the strategy is synchronized.
    shared_ptr<string> syncFromType_ {};
    // The last update time of the notification strategy.
    shared_ptr<string> updateTime_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The workspace to which the notification strategy belongs.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
