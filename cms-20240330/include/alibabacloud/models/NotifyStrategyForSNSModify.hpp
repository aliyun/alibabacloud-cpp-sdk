// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORSNSMODIFY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORSNSMODIFY_HPP_
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
  class NotifyStrategyForSNSModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForSNSModify& obj) { 
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForSNSModify& obj) { 
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
    };
    NotifyStrategyForSNSModify() = default ;
    NotifyStrategyForSNSModify(const NotifyStrategyForSNSModify &) = default ;
    NotifyStrategyForSNSModify(NotifyStrategyForSNSModify &&) = default ;
    NotifyStrategyForSNSModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForSNSModify() = default ;
    NotifyStrategyForSNSModify& operator=(const NotifyStrategyForSNSModify &) = default ;
    NotifyStrategyForSNSModify& operator=(NotifyStrategyForSNSModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Routes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routes& obj) { 
        DARABONBA_PTR_TO_JSON(channels, channels_);
        DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
        DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
        DARABONBA_PTR_TO_JSON(severities, severities_);
      };
      friend void from_json(const Darabonba::Json& j, Routes& obj) { 
        DARABONBA_PTR_FROM_JSON(channels, channels_);
        DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
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
      class FilterSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterSetting& obj) { 
          DARABONBA_PTR_TO_JSON(conditions, conditions_);
          DARABONBA_PTR_TO_JSON(expression, expression_);
          DARABONBA_PTR_TO_JSON(relation, relation_);
        };
        friend void from_json(const Darabonba::Json& j, FilterSetting& obj) { 
          DARABONBA_PTR_FROM_JSON(conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(expression, expression_);
          DARABONBA_PTR_FROM_JSON(relation, relation_);
        };
        FilterSetting() = default ;
        FilterSetting(const FilterSetting &) = default ;
        FilterSetting(FilterSetting &&) = default ;
        FilterSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterSetting() = default ;
        FilterSetting& operator=(const FilterSetting &) = default ;
        FilterSetting& operator=(FilterSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(field, field_);
            DARABONBA_PTR_TO_JSON(op, op_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(field, field_);
            DARABONBA_PTR_FROM_JSON(op, op_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->field_ == nullptr
        && this->op_ == nullptr && this->value_ == nullptr; };
          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // op Field Functions 
          bool hasOp() const { return this->op_ != nullptr;};
          void deleteOp() { this->op_ = nullptr;};
          inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
          inline Conditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> field_ {};
          shared_ptr<string> op_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->expression_ == nullptr && this->relation_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<FilterSetting::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<FilterSetting::Conditions>) };
        inline vector<FilterSetting::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<FilterSetting::Conditions>) };
        inline FilterSetting& setConditions(const vector<FilterSetting::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline FilterSetting& setConditions(vector<FilterSetting::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline FilterSetting& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // relation Field Functions 
        bool hasRelation() const { return this->relation_ != nullptr;};
        void deleteRelation() { this->relation_ = nullptr;};
        inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
        inline FilterSetting& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


      protected:
        shared_ptr<vector<FilterSetting::Conditions>> conditions_ {};
        shared_ptr<string> expression_ {};
        shared_ptr<string> relation_ {};
      };

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
        && this->effectTimeRange_ == nullptr && this->filterSetting_ == nullptr && this->severities_ == nullptr; };
      // channels Field Functions 
      bool hasChannels() const { return this->channels_ != nullptr;};
      void deleteChannels() { this->channels_ = nullptr;};
      inline const vector<Routes::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Routes::Channels>) };
      inline vector<Routes::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<Routes::Channels>) };
      inline Routes& setChannels(const vector<Routes::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
      inline Routes& setChannels(vector<Routes::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


      // effectTimeRange Field Functions 
      bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
      void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
      inline const Routes::EffectTimeRange & getEffectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, Routes::EffectTimeRange) };
      inline Routes::EffectTimeRange getEffectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, Routes::EffectTimeRange) };
      inline Routes& setEffectTimeRange(const Routes::EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
      inline Routes& setEffectTimeRange(Routes::EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


      // filterSetting Field Functions 
      bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
      void deleteFilterSetting() { this->filterSetting_ = nullptr;};
      inline const Routes::FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, Routes::FilterSetting) };
      inline Routes::FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, Routes::FilterSetting) };
      inline Routes& setFilterSetting(const Routes::FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
      inline Routes& setFilterSetting(Routes::FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


      // severities Field Functions 
      bool hasSeverities() const { return this->severities_ != nullptr;};
      void deleteSeverities() { this->severities_ = nullptr;};
      inline const vector<string> & getSeverities() const { DARABONBA_PTR_GET_CONST(severities_, vector<string>) };
      inline vector<string> getSeverities() { DARABONBA_PTR_GET(severities_, vector<string>) };
      inline Routes& setSeverities(const vector<string> & severities) { DARABONBA_PTR_SET_VALUE(severities_, severities) };
      inline Routes& setSeverities(vector<string> && severities) { DARABONBA_PTR_SET_RVALUE(severities_, severities) };


    protected:
      shared_ptr<vector<Routes::Channels>> channels_ {};
      shared_ptr<Routes::EffectTimeRange> effectTimeRange_ {};
      shared_ptr<Routes::FilterSetting> filterSetting_ {};
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
      shared_ptr<string> targetType_ {};
      shared_ptr<string> templateUuid_ {};
    };

    virtual bool empty() const override { return this->customTemplateEntries_ == nullptr
        && this->description_ == nullptr && this->enableIncidentManagement_ == nullptr && this->groupingSetting_ == nullptr && this->ignoreRestoredNotification_ == nullptr && this->routes_ == nullptr; };
    // customTemplateEntries Field Functions 
    bool hasCustomTemplateEntries() const { return this->customTemplateEntries_ != nullptr;};
    void deleteCustomTemplateEntries() { this->customTemplateEntries_ = nullptr;};
    inline const vector<NotifyStrategyForSNSModify::CustomTemplateEntries> & getCustomTemplateEntries() const { DARABONBA_PTR_GET_CONST(customTemplateEntries_, vector<NotifyStrategyForSNSModify::CustomTemplateEntries>) };
    inline vector<NotifyStrategyForSNSModify::CustomTemplateEntries> getCustomTemplateEntries() { DARABONBA_PTR_GET(customTemplateEntries_, vector<NotifyStrategyForSNSModify::CustomTemplateEntries>) };
    inline NotifyStrategyForSNSModify& setCustomTemplateEntries(const vector<NotifyStrategyForSNSModify::CustomTemplateEntries> & customTemplateEntries) { DARABONBA_PTR_SET_VALUE(customTemplateEntries_, customTemplateEntries) };
    inline NotifyStrategyForSNSModify& setCustomTemplateEntries(vector<NotifyStrategyForSNSModify::CustomTemplateEntries> && customTemplateEntries) { DARABONBA_PTR_SET_RVALUE(customTemplateEntries_, customTemplateEntries) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyStrategyForSNSModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIncidentManagement Field Functions 
    bool hasEnableIncidentManagement() const { return this->enableIncidentManagement_ != nullptr;};
    void deleteEnableIncidentManagement() { this->enableIncidentManagement_ = nullptr;};
    inline bool getEnableIncidentManagement() const { DARABONBA_PTR_GET_DEFAULT(enableIncidentManagement_, false) };
    inline NotifyStrategyForSNSModify& setEnableIncidentManagement(bool enableIncidentManagement) { DARABONBA_PTR_SET_VALUE(enableIncidentManagement_, enableIncidentManagement) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotifyStrategyForSNSModify::GroupingSetting & getGroupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotifyStrategyForSNSModify::GroupingSetting) };
    inline NotifyStrategyForSNSModify::GroupingSetting getGroupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotifyStrategyForSNSModify::GroupingSetting) };
    inline NotifyStrategyForSNSModify& setGroupingSetting(const NotifyStrategyForSNSModify::GroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotifyStrategyForSNSModify& setGroupingSetting(NotifyStrategyForSNSModify::GroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // ignoreRestoredNotification Field Functions 
    bool hasIgnoreRestoredNotification() const { return this->ignoreRestoredNotification_ != nullptr;};
    void deleteIgnoreRestoredNotification() { this->ignoreRestoredNotification_ = nullptr;};
    inline bool getIgnoreRestoredNotification() const { DARABONBA_PTR_GET_DEFAULT(ignoreRestoredNotification_, false) };
    inline NotifyStrategyForSNSModify& setIgnoreRestoredNotification(bool ignoreRestoredNotification) { DARABONBA_PTR_SET_VALUE(ignoreRestoredNotification_, ignoreRestoredNotification) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForSNSModify::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForSNSModify::Routes>) };
    inline vector<NotifyStrategyForSNSModify::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForSNSModify::Routes>) };
    inline NotifyStrategyForSNSModify& setRoutes(const vector<NotifyStrategyForSNSModify::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForSNSModify& setRoutes(vector<NotifyStrategyForSNSModify::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    shared_ptr<vector<NotifyStrategyForSNSModify::CustomTemplateEntries>> customTemplateEntries_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableIncidentManagement_ {};
    // This parameter is required.
    shared_ptr<NotifyStrategyForSNSModify::GroupingSetting> groupingSetting_ {};
    shared_ptr<bool> ignoreRestoredNotification_ {};
    // This parameter is required.
    shared_ptr<vector<NotifyStrategyForSNSModify::Routes>> routes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
