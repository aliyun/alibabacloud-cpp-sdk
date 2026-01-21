// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_TO_JSON(FilterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(GroupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(PushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(RouteSetting, routeSetting_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_FROM_JSON(FilterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(GroupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(PushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(RouteSetting, routeSetting_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    NotificationStrategy() = default ;
    NotificationStrategy(const NotificationStrategy &) = default ;
    NotificationStrategy(NotificationStrategy &&) = default ;
    NotificationStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategy() = default ;
    NotificationStrategy& operator=(const NotificationStrategy &) = default ;
    NotificationStrategy& operator=(NotificationStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteSetting& obj) { 
        DARABONBA_PTR_TO_JSON(Routes, routes_);
      };
      friend void from_json(const Darabonba::Json& j, RouteSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(Routes, routes_);
      };
      RouteSetting() = default ;
      RouteSetting(const RouteSetting &) = default ;
      RouteSetting(RouteSetting &&) = default ;
      RouteSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteSetting() = default ;
      RouteSetting& operator=(const RouteSetting &) = default ;
      RouteSetting& operator=(RouteSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Routes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Routes& obj) { 
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(EscalationUuid, escalationUuid_);
        };
        friend void from_json(const Darabonba::Json& j, Routes& obj) { 
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(EscalationUuid, escalationUuid_);
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
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(Op, op_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(Op, op_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
        && this->escalationUuid_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Routes::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Routes::Conditions>) };
        inline vector<Routes::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Routes::Conditions>) };
        inline Routes& setConditions(const vector<Routes::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Routes& setConditions(vector<Routes::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // escalationUuid Field Functions 
        bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
        void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
        inline string getEscalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
        inline Routes& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


      protected:
        shared_ptr<vector<Routes::Conditions>> conditions_ {};
        shared_ptr<string> escalationUuid_ {};
      };

      virtual bool empty() const override { return this->routes_ == nullptr; };
      // routes Field Functions 
      bool hasRoutes() const { return this->routes_ != nullptr;};
      void deleteRoutes() { this->routes_ = nullptr;};
      inline const vector<RouteSetting::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<RouteSetting::Routes>) };
      inline vector<RouteSetting::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<RouteSetting::Routes>) };
      inline RouteSetting& setRoutes(const vector<RouteSetting::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
      inline RouteSetting& setRoutes(vector<RouteSetting::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    protected:
      shared_ptr<vector<RouteSetting::Routes>> routes_ {};
    };

    class PushingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(PushingDataFormat, pushingDataFormat_);
        DARABONBA_PTR_TO_JSON(Range, range_);
        DARABONBA_PTR_TO_JSON(TargetUuids, targetUuids_);
        DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
      };
      friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(PushingDataFormat, pushingDataFormat_);
        DARABONBA_PTR_FROM_JSON(Range, range_);
        DARABONBA_PTR_FROM_JSON(TargetUuids, targetUuids_);
        DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
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
      virtual bool empty() const override { return this->pushingDataFormat_ == nullptr
        && this->range_ == nullptr && this->targetUuids_ == nullptr && this->templateUuid_ == nullptr; };
      // pushingDataFormat Field Functions 
      bool hasPushingDataFormat() const { return this->pushingDataFormat_ != nullptr;};
      void deletePushingDataFormat() { this->pushingDataFormat_ = nullptr;};
      inline string getPushingDataFormat() const { DARABONBA_PTR_GET_DEFAULT(pushingDataFormat_, "") };
      inline PushingSetting& setPushingDataFormat(string pushingDataFormat) { DARABONBA_PTR_SET_VALUE(pushingDataFormat_, pushingDataFormat) };


      // range Field Functions 
      bool hasRange() const { return this->range_ != nullptr;};
      void deleteRange() { this->range_ = nullptr;};
      inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
      inline PushingSetting& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


      // targetUuids Field Functions 
      bool hasTargetUuids() const { return this->targetUuids_ != nullptr;};
      void deleteTargetUuids() { this->targetUuids_ = nullptr;};
      inline const vector<string> & getTargetUuids() const { DARABONBA_PTR_GET_CONST(targetUuids_, vector<string>) };
      inline vector<string> getTargetUuids() { DARABONBA_PTR_GET(targetUuids_, vector<string>) };
      inline PushingSetting& setTargetUuids(const vector<string> & targetUuids) { DARABONBA_PTR_SET_VALUE(targetUuids_, targetUuids) };
      inline PushingSetting& setTargetUuids(vector<string> && targetUuids) { DARABONBA_PTR_SET_RVALUE(targetUuids_, targetUuids) };


      // templateUuid Field Functions 
      bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
      void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
      inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
      inline PushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    protected:
      shared_ptr<string> pushingDataFormat_ {};
      shared_ptr<string> range_ {};
      shared_ptr<vector<string>> targetUuids_ {};
      shared_ptr<string> templateUuid_ {};
    };

    class GroupingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(EnableRawAlertDispatching, enableRawAlertDispatching_);
        DARABONBA_PTR_TO_JSON(GroupingItems, groupingItems_);
        DARABONBA_PTR_TO_JSON(PeriodMin, periodMin_);
        DARABONBA_PTR_TO_JSON(SilenceSec, silenceSec_);
        DARABONBA_PTR_TO_JSON(Times, times_);
      };
      friend void from_json(const Darabonba::Json& j, GroupingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableRawAlertDispatching, enableRawAlertDispatching_);
        DARABONBA_PTR_FROM_JSON(GroupingItems, groupingItems_);
        DARABONBA_PTR_FROM_JSON(PeriodMin, periodMin_);
        DARABONBA_PTR_FROM_JSON(SilenceSec, silenceSec_);
        DARABONBA_PTR_FROM_JSON(Times, times_);
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
      class GroupingItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupingItems& obj) { 
          DARABONBA_PTR_TO_JSON(Keys, keys_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, GroupingItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Keys, keys_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        GroupingItems() = default ;
        GroupingItems(const GroupingItems &) = default ;
        GroupingItems(GroupingItems &&) = default ;
        GroupingItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupingItems() = default ;
        GroupingItems& operator=(const GroupingItems &) = default ;
        GroupingItems& operator=(GroupingItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keys_ == nullptr
        && this->type_ == nullptr; };
        // keys Field Functions 
        bool hasKeys() const { return this->keys_ != nullptr;};
        void deleteKeys() { this->keys_ = nullptr;};
        inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
        inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
        inline GroupingItems& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
        inline GroupingItems& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline GroupingItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> keys_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->enableRawAlertDispatching_ == nullptr
        && this->groupingItems_ == nullptr && this->periodMin_ == nullptr && this->silenceSec_ == nullptr && this->times_ == nullptr; };
      // enableRawAlertDispatching Field Functions 
      bool hasEnableRawAlertDispatching() const { return this->enableRawAlertDispatching_ != nullptr;};
      void deleteEnableRawAlertDispatching() { this->enableRawAlertDispatching_ = nullptr;};
      inline bool getEnableRawAlertDispatching() const { DARABONBA_PTR_GET_DEFAULT(enableRawAlertDispatching_, false) };
      inline GroupingSetting& setEnableRawAlertDispatching(bool enableRawAlertDispatching) { DARABONBA_PTR_SET_VALUE(enableRawAlertDispatching_, enableRawAlertDispatching) };


      // groupingItems Field Functions 
      bool hasGroupingItems() const { return this->groupingItems_ != nullptr;};
      void deleteGroupingItems() { this->groupingItems_ = nullptr;};
      inline const vector<GroupingSetting::GroupingItems> & getGroupingItems() const { DARABONBA_PTR_GET_CONST(groupingItems_, vector<GroupingSetting::GroupingItems>) };
      inline vector<GroupingSetting::GroupingItems> getGroupingItems() { DARABONBA_PTR_GET(groupingItems_, vector<GroupingSetting::GroupingItems>) };
      inline GroupingSetting& setGroupingItems(const vector<GroupingSetting::GroupingItems> & groupingItems) { DARABONBA_PTR_SET_VALUE(groupingItems_, groupingItems) };
      inline GroupingSetting& setGroupingItems(vector<GroupingSetting::GroupingItems> && groupingItems) { DARABONBA_PTR_SET_RVALUE(groupingItems_, groupingItems) };


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
      shared_ptr<bool> enableRawAlertDispatching_ {};
      shared_ptr<vector<GroupingSetting::GroupingItems>> groupingItems_ {};
      shared_ptr<int32_t> periodMin_ {};
      shared_ptr<int32_t> silenceSec_ {};
      shared_ptr<int32_t> times_ {};
    };

    class FilterSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterSetting& obj) { 
        DARABONBA_PTR_TO_JSON(BlackList, blackList_);
        DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
      };
      friend void from_json(const Darabonba::Json& j, FilterSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
        DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
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
      virtual bool empty() const override { return this->blackList_ == nullptr
        && this->whiteList_ == nullptr; };
      // blackList Field Functions 
      bool hasBlackList() const { return this->blackList_ != nullptr;};
      void deleteBlackList() { this->blackList_ = nullptr;};
      inline const vector<vector<FilterSetting::BlackList>> & getBlackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<vector<FilterSetting::BlackList>>) };
      inline vector<vector<FilterSetting::BlackList>> getBlackList() { DARABONBA_PTR_GET(blackList_, vector<vector<FilterSetting::BlackList>>) };
      inline FilterSetting& setBlackList(const vector<vector<FilterSetting::BlackList>> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
      inline FilterSetting& setBlackList(vector<vector<FilterSetting::BlackList>> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


      // whiteList Field Functions 
      bool hasWhiteList() const { return this->whiteList_ != nullptr;};
      void deleteWhiteList() { this->whiteList_ = nullptr;};
      inline const vector<vector<FilterSetting::WhiteList>> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<vector<FilterSetting::WhiteList>>) };
      inline vector<vector<FilterSetting::WhiteList>> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<vector<FilterSetting::WhiteList>>) };
      inline FilterSetting& setWhiteList(const vector<vector<FilterSetting::WhiteList>> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
      inline FilterSetting& setWhiteList(vector<vector<FilterSetting::WhiteList>> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


    protected:
      shared_ptr<vector<vector<FilterSetting::BlackList>>> blackList_ {};
      shared_ptr<vector<vector<FilterSetting::WhiteList>>> whiteList_ {};
    };

    class EscalationSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EscalationSetting& obj) { 
        DARABONBA_PTR_TO_JSON(AutoResolveMin, autoResolveMin_);
        DARABONBA_PTR_TO_JSON(CustomChannels, customChannels_);
        DARABONBA_PTR_TO_JSON(EscalationLevel, escalationLevel_);
        DARABONBA_PTR_TO_JSON(EscalationUuid, escalationUuid_);
        DARABONBA_PTR_TO_JSON(Range, range_);
        DARABONBA_PTR_TO_JSON(RetriggerMin, retriggerMin_);
      };
      friend void from_json(const Darabonba::Json& j, EscalationSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoResolveMin, autoResolveMin_);
        DARABONBA_PTR_FROM_JSON(CustomChannels, customChannels_);
        DARABONBA_PTR_FROM_JSON(EscalationLevel, escalationLevel_);
        DARABONBA_PTR_FROM_JSON(EscalationUuid, escalationUuid_);
        DARABONBA_PTR_FROM_JSON(Range, range_);
        DARABONBA_PTR_FROM_JSON(RetriggerMin, retriggerMin_);
      };
      EscalationSetting() = default ;
      EscalationSetting(const EscalationSetting &) = default ;
      EscalationSetting(EscalationSetting &&) = default ;
      EscalationSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EscalationSetting() = default ;
      EscalationSetting& operator=(const EscalationSetting &) = default ;
      EscalationSetting& operator=(EscalationSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomChannels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomChannels& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(Severities, severities_);
          DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
        };
        friend void from_json(const Darabonba::Json& j, CustomChannels& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(Severities, severities_);
          DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
        };
        CustomChannels() = default ;
        CustomChannels(const CustomChannels &) = default ;
        CustomChannels(CustomChannels &&) = default ;
        CustomChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomChannels() = default ;
        CustomChannels& operator=(const CustomChannels &) = default ;
        CustomChannels& operator=(CustomChannels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelType_ == nullptr
        && this->severities_ == nullptr && this->templateUuid_ == nullptr; };
        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline CustomChannels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // severities Field Functions 
        bool hasSeverities() const { return this->severities_ != nullptr;};
        void deleteSeverities() { this->severities_ = nullptr;};
        inline const vector<string> & getSeverities() const { DARABONBA_PTR_GET_CONST(severities_, vector<string>) };
        inline vector<string> getSeverities() { DARABONBA_PTR_GET(severities_, vector<string>) };
        inline CustomChannels& setSeverities(const vector<string> & severities) { DARABONBA_PTR_SET_VALUE(severities_, severities) };
        inline CustomChannels& setSeverities(vector<string> && severities) { DARABONBA_PTR_SET_RVALUE(severities_, severities) };


        // templateUuid Field Functions 
        bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
        void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
        inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
        inline CustomChannels& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


      protected:
        // This parameter is required.
        shared_ptr<string> channelType_ {};
        shared_ptr<vector<string>> severities_ {};
        shared_ptr<string> templateUuid_ {};
      };

      virtual bool empty() const override { return this->autoResolveMin_ == nullptr
        && this->customChannels_ == nullptr && this->escalationLevel_ == nullptr && this->escalationUuid_ == nullptr && this->range_ == nullptr && this->retriggerMin_ == nullptr; };
      // autoResolveMin Field Functions 
      bool hasAutoResolveMin() const { return this->autoResolveMin_ != nullptr;};
      void deleteAutoResolveMin() { this->autoResolveMin_ = nullptr;};
      inline int64_t getAutoResolveMin() const { DARABONBA_PTR_GET_DEFAULT(autoResolveMin_, 0L) };
      inline EscalationSetting& setAutoResolveMin(int64_t autoResolveMin) { DARABONBA_PTR_SET_VALUE(autoResolveMin_, autoResolveMin) };


      // customChannels Field Functions 
      bool hasCustomChannels() const { return this->customChannels_ != nullptr;};
      void deleteCustomChannels() { this->customChannels_ = nullptr;};
      inline const vector<EscalationSetting::CustomChannels> & getCustomChannels() const { DARABONBA_PTR_GET_CONST(customChannels_, vector<EscalationSetting::CustomChannels>) };
      inline vector<EscalationSetting::CustomChannels> getCustomChannels() { DARABONBA_PTR_GET(customChannels_, vector<EscalationSetting::CustomChannels>) };
      inline EscalationSetting& setCustomChannels(const vector<EscalationSetting::CustomChannels> & customChannels) { DARABONBA_PTR_SET_VALUE(customChannels_, customChannels) };
      inline EscalationSetting& setCustomChannels(vector<EscalationSetting::CustomChannels> && customChannels) { DARABONBA_PTR_SET_RVALUE(customChannels_, customChannels) };


      // escalationLevel Field Functions 
      bool hasEscalationLevel() const { return this->escalationLevel_ != nullptr;};
      void deleteEscalationLevel() { this->escalationLevel_ = nullptr;};
      inline string getEscalationLevel() const { DARABONBA_PTR_GET_DEFAULT(escalationLevel_, "") };
      inline EscalationSetting& setEscalationLevel(string escalationLevel) { DARABONBA_PTR_SET_VALUE(escalationLevel_, escalationLevel) };


      // escalationUuid Field Functions 
      bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
      void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
      inline string getEscalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
      inline EscalationSetting& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


      // range Field Functions 
      bool hasRange() const { return this->range_ != nullptr;};
      void deleteRange() { this->range_ = nullptr;};
      inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
      inline EscalationSetting& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


      // retriggerMin Field Functions 
      bool hasRetriggerMin() const { return this->retriggerMin_ != nullptr;};
      void deleteRetriggerMin() { this->retriggerMin_ = nullptr;};
      inline int64_t getRetriggerMin() const { DARABONBA_PTR_GET_DEFAULT(retriggerMin_, 0L) };
      inline EscalationSetting& setRetriggerMin(int64_t retriggerMin) { DARABONBA_PTR_SET_VALUE(retriggerMin_, retriggerMin) };


    protected:
      shared_ptr<int64_t> autoResolveMin_ {};
      shared_ptr<vector<EscalationSetting::CustomChannels>> customChannels_ {};
      shared_ptr<string> escalationLevel_ {};
      shared_ptr<string> escalationUuid_ {};
      shared_ptr<string> range_ {};
      shared_ptr<int64_t> retriggerMin_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->escalationSetting_ == nullptr && this->filterSetting_ == nullptr && this->groupingSetting_ == nullptr && this->name_ == nullptr
        && this->product_ == nullptr && this->pushingSetting_ == nullptr && this->routeSetting_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotificationStrategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotificationStrategy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // escalationSetting Field Functions 
    bool hasEscalationSetting() const { return this->escalationSetting_ != nullptr;};
    void deleteEscalationSetting() { this->escalationSetting_ = nullptr;};
    inline const NotificationStrategy::EscalationSetting & getEscalationSetting() const { DARABONBA_PTR_GET_CONST(escalationSetting_, NotificationStrategy::EscalationSetting) };
    inline NotificationStrategy::EscalationSetting getEscalationSetting() { DARABONBA_PTR_GET(escalationSetting_, NotificationStrategy::EscalationSetting) };
    inline NotificationStrategy& setEscalationSetting(const NotificationStrategy::EscalationSetting & escalationSetting) { DARABONBA_PTR_SET_VALUE(escalationSetting_, escalationSetting) };
    inline NotificationStrategy& setEscalationSetting(NotificationStrategy::EscalationSetting && escalationSetting) { DARABONBA_PTR_SET_RVALUE(escalationSetting_, escalationSetting) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const NotificationStrategy::FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, NotificationStrategy::FilterSetting) };
    inline NotificationStrategy::FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, NotificationStrategy::FilterSetting) };
    inline NotificationStrategy& setFilterSetting(const NotificationStrategy::FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotificationStrategy& setFilterSetting(NotificationStrategy::FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotificationStrategy::GroupingSetting & getGroupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotificationStrategy::GroupingSetting) };
    inline NotificationStrategy::GroupingSetting getGroupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotificationStrategy::GroupingSetting) };
    inline NotificationStrategy& setGroupingSetting(const NotificationStrategy::GroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotificationStrategy& setGroupingSetting(NotificationStrategy::GroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotificationStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline NotificationStrategy& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const NotificationStrategy::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, NotificationStrategy::PushingSetting) };
    inline NotificationStrategy::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, NotificationStrategy::PushingSetting) };
    inline NotificationStrategy& setPushingSetting(const NotificationStrategy::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline NotificationStrategy& setPushingSetting(NotificationStrategy::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // routeSetting Field Functions 
    bool hasRouteSetting() const { return this->routeSetting_ != nullptr;};
    void deleteRouteSetting() { this->routeSetting_ = nullptr;};
    inline const NotificationStrategy::RouteSetting & getRouteSetting() const { DARABONBA_PTR_GET_CONST(routeSetting_, NotificationStrategy::RouteSetting) };
    inline NotificationStrategy::RouteSetting getRouteSetting() { DARABONBA_PTR_GET(routeSetting_, NotificationStrategy::RouteSetting) };
    inline NotificationStrategy& setRouteSetting(const NotificationStrategy::RouteSetting & routeSetting) { DARABONBA_PTR_SET_VALUE(routeSetting_, routeSetting) };
    inline NotificationStrategy& setRouteSetting(NotificationStrategy::RouteSetting && routeSetting) { DARABONBA_PTR_SET_RVALUE(routeSetting_, routeSetting) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotificationStrategy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotificationStrategy& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotificationStrategy& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<NotificationStrategy::EscalationSetting> escalationSetting_ {};
    shared_ptr<NotificationStrategy::FilterSetting> filterSetting_ {};
    shared_ptr<NotificationStrategy::GroupingSetting> groupingSetting_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> product_ {};
    shared_ptr<NotificationStrategy::PushingSetting> pushingSetting_ {};
    shared_ptr<NotificationStrategy::RouteSetting> routeSetting_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
