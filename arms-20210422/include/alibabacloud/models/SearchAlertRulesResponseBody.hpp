// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchAlertRulesResponseBody() = default ;
    SearchAlertRulesResponseBody(const SearchAlertRulesResponseBody &) = default ;
    SearchAlertRulesResponseBody(SearchAlertRulesResponseBody &&) = default ;
    SearchAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBody() = default ;
    SearchAlertRulesResponseBody& operator=(const SearchAlertRulesResponseBody &) = default ;
    SearchAlertRulesResponseBody& operator=(SearchAlertRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(AlertRules, alertRules_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertRules, alertRules_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertRules& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmContext, alarmContext_);
          DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
          DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
          DARABONBA_PTR_TO_JSON(AlertTitle, alertTitle_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(AlertVersion, alertVersion_);
          DARABONBA_PTR_TO_JSON(AlertWay, alertWay_);
          DARABONBA_PTR_TO_JSON(AlertWays, alertWays_);
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(ContactGroupIdList, contactGroupIdList_);
          DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MetricParam, metricParam_);
          DARABONBA_PTR_TO_JSON(Notice, notice_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, AlertRules& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmContext, alarmContext_);
          DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
          DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
          DARABONBA_PTR_FROM_JSON(AlertTitle, alertTitle_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(AlertVersion, alertVersion_);
          DARABONBA_PTR_FROM_JSON(AlertWay, alertWay_);
          DARABONBA_PTR_FROM_JSON(AlertWays, alertWays_);
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(ContactGroupIdList, contactGroupIdList_);
          DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MetricParam, metricParam_);
          DARABONBA_PTR_FROM_JSON(Notice, notice_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        AlertRules() = default ;
        AlertRules(const AlertRules &) = default ;
        AlertRules(AlertRules &&) = default ;
        AlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertRules() = default ;
        AlertRules& operator=(const AlertRules &) = default ;
        AlertRules& operator=(AlertRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Notice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Notice& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(NoticeEndTime, noticeEndTime_);
            DARABONBA_PTR_TO_JSON(NoticeStartTime, noticeStartTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, Notice& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(NoticeEndTime, noticeEndTime_);
            DARABONBA_PTR_FROM_JSON(NoticeStartTime, noticeStartTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          };
          Notice() = default ;
          Notice(const Notice &) = default ;
          Notice(Notice &&) = default ;
          Notice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Notice() = default ;
          Notice& operator=(const Notice &) = default ;
          Notice& operator=(Notice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->noticeEndTime_ == nullptr && this->noticeStartTime_ == nullptr && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Notice& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // noticeEndTime Field Functions 
          bool hasNoticeEndTime() const { return this->noticeEndTime_ != nullptr;};
          void deleteNoticeEndTime() { this->noticeEndTime_ = nullptr;};
          inline int64_t getNoticeEndTime() const { DARABONBA_PTR_GET_DEFAULT(noticeEndTime_, 0L) };
          inline Notice& setNoticeEndTime(int64_t noticeEndTime) { DARABONBA_PTR_SET_VALUE(noticeEndTime_, noticeEndTime) };


          // noticeStartTime Field Functions 
          bool hasNoticeStartTime() const { return this->noticeStartTime_ != nullptr;};
          void deleteNoticeStartTime() { this->noticeStartTime_ = nullptr;};
          inline int64_t getNoticeStartTime() const { DARABONBA_PTR_GET_DEFAULT(noticeStartTime_, 0L) };
          inline Notice& setNoticeStartTime(int64_t noticeStartTime) { DARABONBA_PTR_SET_VALUE(noticeStartTime_, noticeStartTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline Notice& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<int64_t> endTime_ {};
          shared_ptr<int64_t> noticeEndTime_ {};
          shared_ptr<int64_t> noticeStartTime_ {};
          shared_ptr<int64_t> startTime_ {};
        };

        class MetricParam : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetricParam& obj) { 
            DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
            DARABONBA_PTR_TO_JSON(Pid, pid_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MetricParam& obj) { 
            DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
            DARABONBA_PTR_FROM_JSON(Pid, pid_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          MetricParam() = default ;
          MetricParam(const MetricParam &) = default ;
          MetricParam(MetricParam &&) = default ;
          MetricParam(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetricParam() = default ;
          MetricParam& operator=(const MetricParam &) = default ;
          MetricParam& operator=(MetricParam &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Dimensions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Dimensions() = default ;
            Dimensions(const Dimensions &) = default ;
            Dimensions(Dimensions &&) = default ;
            Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Dimensions() = default ;
            Dimensions& operator=(const Dimensions &) = default ;
            Dimensions& operator=(Dimensions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Dimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Dimensions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> type_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appId_ == nullptr && this->dimensions_ == nullptr && this->pid_ == nullptr && this->type_ == nullptr; };
          // appGroupId Field Functions 
          bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
          void deleteAppGroupId() { this->appGroupId_ = nullptr;};
          inline string getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, "") };
          inline MetricParam& setAppGroupId(string appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline MetricParam& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // dimensions Field Functions 
          bool hasDimensions() const { return this->dimensions_ != nullptr;};
          void deleteDimensions() { this->dimensions_ = nullptr;};
          inline const vector<MetricParam::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<MetricParam::Dimensions>) };
          inline vector<MetricParam::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<MetricParam::Dimensions>) };
          inline MetricParam& setDimensions(const vector<MetricParam::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
          inline MetricParam& setDimensions(vector<MetricParam::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


          // pid Field Functions 
          bool hasPid() const { return this->pid_ != nullptr;};
          void deletePid() { this->pid_ = nullptr;};
          inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
          inline MetricParam& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MetricParam& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> appGroupId_ {};
          shared_ptr<string> appId_ {};
          shared_ptr<vector<MetricParam::Dimensions>> dimensions_ {};
          shared_ptr<string> pid_ {};
          shared_ptr<string> type_ {};
        };

        class AlertRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertRule& obj) { 
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Rules, rules_);
          };
          friend void from_json(const Darabonba::Json& j, AlertRule& obj) { 
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Rules, rules_);
          };
          AlertRule() = default ;
          AlertRule(const AlertRule &) = default ;
          AlertRule(AlertRule &&) = default ;
          AlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertRule() = default ;
          AlertRule& operator=(const AlertRule &) = default ;
          AlertRule& operator=(AlertRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rules& obj) { 
              DARABONBA_PTR_TO_JSON(Aggregates, aggregates_);
              DARABONBA_PTR_TO_JSON(Alias, alias_);
              DARABONBA_PTR_TO_JSON(Measure, measure_);
              DARABONBA_PTR_TO_JSON(NValue, NValue_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Rules& obj) { 
              DARABONBA_PTR_FROM_JSON(Aggregates, aggregates_);
              DARABONBA_PTR_FROM_JSON(Alias, alias_);
              DARABONBA_PTR_FROM_JSON(Measure, measure_);
              DARABONBA_PTR_FROM_JSON(NValue, NValue_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Rules() = default ;
            Rules(const Rules &) = default ;
            Rules(Rules &&) = default ;
            Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Rules() = default ;
            Rules& operator=(const Rules &) = default ;
            Rules& operator=(Rules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aggregates_ == nullptr
        && this->alias_ == nullptr && this->measure_ == nullptr && this->NValue_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
            // aggregates Field Functions 
            bool hasAggregates() const { return this->aggregates_ != nullptr;};
            void deleteAggregates() { this->aggregates_ = nullptr;};
            inline string getAggregates() const { DARABONBA_PTR_GET_DEFAULT(aggregates_, "") };
            inline Rules& setAggregates(string aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };


            // alias Field Functions 
            bool hasAlias() const { return this->alias_ != nullptr;};
            void deleteAlias() { this->alias_ = nullptr;};
            inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
            inline Rules& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


            // measure Field Functions 
            bool hasMeasure() const { return this->measure_ != nullptr;};
            void deleteMeasure() { this->measure_ = nullptr;};
            inline string getMeasure() const { DARABONBA_PTR_GET_DEFAULT(measure_, "") };
            inline Rules& setMeasure(string measure) { DARABONBA_PTR_SET_VALUE(measure_, measure) };


            // NValue Field Functions 
            bool hasNValue() const { return this->NValue_ != nullptr;};
            void deleteNValue() { this->NValue_ = nullptr;};
            inline int32_t getNValue() const { DARABONBA_PTR_GET_DEFAULT(NValue_, 0) };
            inline Rules& setNValue(int32_t NValue) { DARABONBA_PTR_SET_VALUE(NValue_, NValue) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Rules& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
            inline Rules& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> aggregates_ {};
            shared_ptr<string> alias_ {};
            shared_ptr<string> measure_ {};
            shared_ptr<int32_t> NValue_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<float> value_ {};
          };

          virtual bool empty() const override { return this->operator_ == nullptr
        && this->rules_ == nullptr; };
          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline AlertRule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // rules Field Functions 
          bool hasRules() const { return this->rules_ != nullptr;};
          void deleteRules() { this->rules_ = nullptr;};
          inline const vector<AlertRule::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<AlertRule::Rules>) };
          inline vector<AlertRule::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<AlertRule::Rules>) };
          inline AlertRule& setRules(const vector<AlertRule::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
          inline AlertRule& setRules(vector<AlertRule::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        protected:
          shared_ptr<string> operator_ {};
          shared_ptr<vector<AlertRule::Rules>> rules_ {};
        };

        class AlarmContext : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlarmContext& obj) { 
            DARABONBA_PTR_TO_JSON(AlarmContentSubTitle, alarmContentSubTitle_);
            DARABONBA_PTR_TO_JSON(AlarmContentTemplate, alarmContentTemplate_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(SubTitle, subTitle_);
          };
          friend void from_json(const Darabonba::Json& j, AlarmContext& obj) { 
            DARABONBA_PTR_FROM_JSON(AlarmContentSubTitle, alarmContentSubTitle_);
            DARABONBA_PTR_FROM_JSON(AlarmContentTemplate, alarmContentTemplate_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(SubTitle, subTitle_);
          };
          AlarmContext() = default ;
          AlarmContext(const AlarmContext &) = default ;
          AlarmContext(AlarmContext &&) = default ;
          AlarmContext(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlarmContext() = default ;
          AlarmContext& operator=(const AlarmContext &) = default ;
          AlarmContext& operator=(AlarmContext &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alarmContentSubTitle_ == nullptr
        && this->alarmContentTemplate_ == nullptr && this->content_ == nullptr && this->subTitle_ == nullptr; };
          // alarmContentSubTitle Field Functions 
          bool hasAlarmContentSubTitle() const { return this->alarmContentSubTitle_ != nullptr;};
          void deleteAlarmContentSubTitle() { this->alarmContentSubTitle_ = nullptr;};
          inline string getAlarmContentSubTitle() const { DARABONBA_PTR_GET_DEFAULT(alarmContentSubTitle_, "") };
          inline AlarmContext& setAlarmContentSubTitle(string alarmContentSubTitle) { DARABONBA_PTR_SET_VALUE(alarmContentSubTitle_, alarmContentSubTitle) };


          // alarmContentTemplate Field Functions 
          bool hasAlarmContentTemplate() const { return this->alarmContentTemplate_ != nullptr;};
          void deleteAlarmContentTemplate() { this->alarmContentTemplate_ = nullptr;};
          inline string getAlarmContentTemplate() const { DARABONBA_PTR_GET_DEFAULT(alarmContentTemplate_, "") };
          inline AlarmContext& setAlarmContentTemplate(string alarmContentTemplate) { DARABONBA_PTR_SET_VALUE(alarmContentTemplate_, alarmContentTemplate) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline AlarmContext& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // subTitle Field Functions 
          bool hasSubTitle() const { return this->subTitle_ != nullptr;};
          void deleteSubTitle() { this->subTitle_ = nullptr;};
          inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
          inline AlarmContext& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


        protected:
          shared_ptr<string> alarmContentSubTitle_ {};
          shared_ptr<string> alarmContentTemplate_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> subTitle_ {};
        };

        virtual bool empty() const override { return this->alarmContext_ == nullptr
        && this->alertLevel_ == nullptr && this->alertRule_ == nullptr && this->alertTitle_ == nullptr && this->alertType_ == nullptr && this->alertVersion_ == nullptr
        && this->alertWay_ == nullptr && this->alertWays_ == nullptr && this->config_ == nullptr && this->contactGroupIdList_ == nullptr && this->contactGroupIds_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->metricParam_ == nullptr && this->notice_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->title_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr; };
        // alarmContext Field Functions 
        bool hasAlarmContext() const { return this->alarmContext_ != nullptr;};
        void deleteAlarmContext() { this->alarmContext_ = nullptr;};
        inline const AlertRules::AlarmContext & getAlarmContext() const { DARABONBA_PTR_GET_CONST(alarmContext_, AlertRules::AlarmContext) };
        inline AlertRules::AlarmContext getAlarmContext() { DARABONBA_PTR_GET(alarmContext_, AlertRules::AlarmContext) };
        inline AlertRules& setAlarmContext(const AlertRules::AlarmContext & alarmContext) { DARABONBA_PTR_SET_VALUE(alarmContext_, alarmContext) };
        inline AlertRules& setAlarmContext(AlertRules::AlarmContext && alarmContext) { DARABONBA_PTR_SET_RVALUE(alarmContext_, alarmContext) };


        // alertLevel Field Functions 
        bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
        void deleteAlertLevel() { this->alertLevel_ = nullptr;};
        inline string getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
        inline AlertRules& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


        // alertRule Field Functions 
        bool hasAlertRule() const { return this->alertRule_ != nullptr;};
        void deleteAlertRule() { this->alertRule_ = nullptr;};
        inline const AlertRules::AlertRule & getAlertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, AlertRules::AlertRule) };
        inline AlertRules::AlertRule getAlertRule() { DARABONBA_PTR_GET(alertRule_, AlertRules::AlertRule) };
        inline AlertRules& setAlertRule(const AlertRules::AlertRule & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
        inline AlertRules& setAlertRule(AlertRules::AlertRule && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


        // alertTitle Field Functions 
        bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
        void deleteAlertTitle() { this->alertTitle_ = nullptr;};
        inline string getAlertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
        inline AlertRules& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline int32_t getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
        inline AlertRules& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // alertVersion Field Functions 
        bool hasAlertVersion() const { return this->alertVersion_ != nullptr;};
        void deleteAlertVersion() { this->alertVersion_ = nullptr;};
        inline int32_t getAlertVersion() const { DARABONBA_PTR_GET_DEFAULT(alertVersion_, 0) };
        inline AlertRules& setAlertVersion(int32_t alertVersion) { DARABONBA_PTR_SET_VALUE(alertVersion_, alertVersion) };


        // alertWay Field Functions 
        bool hasAlertWay() const { return this->alertWay_ != nullptr;};
        void deleteAlertWay() { this->alertWay_ = nullptr;};
        inline const vector<string> & getAlertWay() const { DARABONBA_PTR_GET_CONST(alertWay_, vector<string>) };
        inline vector<string> getAlertWay() { DARABONBA_PTR_GET(alertWay_, vector<string>) };
        inline AlertRules& setAlertWay(const vector<string> & alertWay) { DARABONBA_PTR_SET_VALUE(alertWay_, alertWay) };
        inline AlertRules& setAlertWay(vector<string> && alertWay) { DARABONBA_PTR_SET_RVALUE(alertWay_, alertWay) };


        // alertWays Field Functions 
        bool hasAlertWays() const { return this->alertWays_ != nullptr;};
        void deleteAlertWays() { this->alertWays_ = nullptr;};
        inline const vector<string> & getAlertWays() const { DARABONBA_PTR_GET_CONST(alertWays_, vector<string>) };
        inline vector<string> getAlertWays() { DARABONBA_PTR_GET(alertWays_, vector<string>) };
        inline AlertRules& setAlertWays(const vector<string> & alertWays) { DARABONBA_PTR_SET_VALUE(alertWays_, alertWays) };
        inline AlertRules& setAlertWays(vector<string> && alertWays) { DARABONBA_PTR_SET_RVALUE(alertWays_, alertWays) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline AlertRules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // contactGroupIdList Field Functions 
        bool hasContactGroupIdList() const { return this->contactGroupIdList_ != nullptr;};
        void deleteContactGroupIdList() { this->contactGroupIdList_ = nullptr;};
        inline string getContactGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIdList_, "") };
        inline AlertRules& setContactGroupIdList(string contactGroupIdList) { DARABONBA_PTR_SET_VALUE(contactGroupIdList_, contactGroupIdList) };


        // contactGroupIds Field Functions 
        bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
        void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
        inline string getContactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
        inline AlertRules& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline AlertRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metricParam Field Functions 
        bool hasMetricParam() const { return this->metricParam_ != nullptr;};
        void deleteMetricParam() { this->metricParam_ = nullptr;};
        inline const AlertRules::MetricParam & getMetricParam() const { DARABONBA_PTR_GET_CONST(metricParam_, AlertRules::MetricParam) };
        inline AlertRules::MetricParam getMetricParam() { DARABONBA_PTR_GET(metricParam_, AlertRules::MetricParam) };
        inline AlertRules& setMetricParam(const AlertRules::MetricParam & metricParam) { DARABONBA_PTR_SET_VALUE(metricParam_, metricParam) };
        inline AlertRules& setMetricParam(AlertRules::MetricParam && metricParam) { DARABONBA_PTR_SET_RVALUE(metricParam_, metricParam) };


        // notice Field Functions 
        bool hasNotice() const { return this->notice_ != nullptr;};
        void deleteNotice() { this->notice_ = nullptr;};
        inline const AlertRules::Notice & getNotice() const { DARABONBA_PTR_GET_CONST(notice_, AlertRules::Notice) };
        inline AlertRules::Notice getNotice() { DARABONBA_PTR_GET(notice_, AlertRules::Notice) };
        inline AlertRules& setNotice(const AlertRules::Notice & notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };
        inline AlertRules& setNotice(AlertRules::Notice && notice) { DARABONBA_PTR_SET_RVALUE(notice_, notice) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AlertRules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AlertRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline AlertRules& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline AlertRules& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline AlertRules& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline AlertRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AlertRules& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<AlertRules::AlarmContext> alarmContext_ {};
        shared_ptr<string> alertLevel_ {};
        shared_ptr<AlertRules::AlertRule> alertRule_ {};
        shared_ptr<string> alertTitle_ {};
        shared_ptr<int32_t> alertType_ {};
        shared_ptr<int32_t> alertVersion_ {};
        shared_ptr<vector<string>> alertWay_ {};
        shared_ptr<vector<string>> alertWays_ {};
        shared_ptr<string> config_ {};
        shared_ptr<string> contactGroupIdList_ {};
        shared_ptr<string> contactGroupIds_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<AlertRules::MetricParam> metricParam_ {};
        shared_ptr<AlertRules::Notice> notice_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> taskId_ {};
        shared_ptr<string> taskStatus_ {};
        shared_ptr<string> title_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->alertRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // alertRules Field Functions 
      bool hasAlertRules() const { return this->alertRules_ != nullptr;};
      void deleteAlertRules() { this->alertRules_ = nullptr;};
      inline const vector<PageBean::AlertRules> & getAlertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<PageBean::AlertRules>) };
      inline vector<PageBean::AlertRules> getAlertRules() { DARABONBA_PTR_GET(alertRules_, vector<PageBean::AlertRules>) };
      inline PageBean& setAlertRules(const vector<PageBean::AlertRules> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
      inline PageBean& setAlertRules(vector<PageBean::AlertRules> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageBean::AlertRules>> alertRules_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchAlertRulesResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchAlertRulesResponseBody::PageBean) };
    inline SearchAlertRulesResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchAlertRulesResponseBody::PageBean) };
    inline SearchAlertRulesResponseBody& setPageBean(const SearchAlertRulesResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchAlertRulesResponseBody& setPageBean(SearchAlertRulesResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchAlertRulesResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
