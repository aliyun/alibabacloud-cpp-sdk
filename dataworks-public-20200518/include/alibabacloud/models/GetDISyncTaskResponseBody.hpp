// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDISyncTaskResponseBody() = default ;
    GetDISyncTaskResponseBody(const GetDISyncTaskResponseBody &) = default ;
    GetDISyncTaskResponseBody(GetDISyncTaskResponseBody &&) = default ;
    GetDISyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBody() = default ;
    GetDISyncTaskResponseBody& operator=(const GetDISyncTaskResponseBody &) = default ;
    GetDISyncTaskResponseBody& operator=(GetDISyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmList, alarmList_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SolutionDetail, solutionDetail_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmList, alarmList_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SolutionDetail, solutionDetail_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SolutionDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SolutionDetail& obj) { 
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProcessContent, processContent_);
          DARABONBA_PTR_TO_JSON(ProcessExtra, processExtra_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SolutionDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProcessContent, processContent_);
          DARABONBA_PTR_FROM_JSON(ProcessExtra, processExtra_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SolutionDetail() = default ;
        SolutionDetail(const SolutionDetail &) = default ;
        SolutionDetail(SolutionDetail &&) = default ;
        SolutionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SolutionDetail() = default ;
        SolutionDetail& operator=(const SolutionDetail &) = default ;
        SolutionDetail& operator=(SolutionDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->processContent_ == nullptr && this->processExtra_ == nullptr && this->projectId_ == nullptr
        && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->type_ == nullptr; };
        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline SolutionDetail& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SolutionDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SolutionDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // processContent Field Functions 
        bool hasProcessContent() const { return this->processContent_ != nullptr;};
        void deleteProcessContent() { this->processContent_ = nullptr;};
        inline string getProcessContent() const { DARABONBA_PTR_GET_DEFAULT(processContent_, "") };
        inline SolutionDetail& setProcessContent(string processContent) { DARABONBA_PTR_SET_VALUE(processContent_, processContent) };


        // processExtra Field Functions 
        bool hasProcessExtra() const { return this->processExtra_ != nullptr;};
        void deleteProcessExtra() { this->processExtra_ = nullptr;};
        inline string getProcessExtra() const { DARABONBA_PTR_GET_DEFAULT(processExtra_, "") };
        inline SolutionDetail& setProcessExtra(string processExtra) { DARABONBA_PTR_SET_VALUE(processExtra_, processExtra) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline SolutionDetail& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline SolutionDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline SolutionDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SolutionDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submitTime Field Functions 
        bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
        void deleteSubmitTime() { this->submitTime_ = nullptr;};
        inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
        inline SolutionDetail& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SolutionDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The creator of the data synchronization solution.
        shared_ptr<string> creatorName_ {};
        // The ID of the data synchronization solution.
        shared_ptr<int64_t> id_ {};
        // The name of the data synchronization solution.
        shared_ptr<string> name_ {};
        // The configuration details of the data synchronization solution.
        shared_ptr<string> processContent_ {};
        // The additional parameters of the data synchronization solution.
        shared_ptr<string> processExtra_ {};
        // The ID of the project to which the data synchronization solution belongs.
        shared_ptr<int64_t> projectId_ {};
        // The type of the source of the data synchronization solution.
        shared_ptr<string> sourceType_ {};
        // The start time of the data synchronization solution.
        shared_ptr<string> startTime_ {};
        // The status of the data synchronization solution. Valid values:
        // 
        // *   0: successful
        // *   1: not running
        // *   2: running
        // *   3: failed
        // *   4: committed
        // *   5: pending manual confirmation
        // *   6: manually confirmed
        // *   7: others
        // *   8: waiting
        // *   9: deleted
        shared_ptr<string> status_ {};
        // The time when the data synchronization solution was committed.
        shared_ptr<string> submitTime_ {};
        // The type of the data synchronization solution.
        shared_ptr<string> type_ {};
      };

      class AlarmList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmList& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmRuleList, alarmRuleList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Metric, metric_);
          DARABONBA_PTR_TO_JSON(NotifyRule, notifyRule_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmList& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmRuleList, alarmRuleList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Metric, metric_);
          DARABONBA_PTR_FROM_JSON(NotifyRule, notifyRule_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        };
        AlarmList() = default ;
        AlarmList(const AlarmList &) = default ;
        AlarmList(AlarmList &&) = default ;
        AlarmList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmList() = default ;
        AlarmList& operator=(const AlarmList &) = default ;
        AlarmList& operator=(AlarmList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NotifyRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NotifyRule& obj) { 
            DARABONBA_PTR_TO_JSON(Critical, critical_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(Warning, warning_);
          };
          friend void from_json(const Darabonba::Json& j, NotifyRule& obj) { 
            DARABONBA_PTR_FROM_JSON(Critical, critical_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(Warning, warning_);
          };
          NotifyRule() = default ;
          NotifyRule(const NotifyRule &) = default ;
          NotifyRule(NotifyRule &&) = default ;
          NotifyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NotifyRule() = default ;
          NotifyRule& operator=(const NotifyRule &) = default ;
          NotifyRule& operator=(NotifyRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->critical_ == nullptr
        && this->interval_ == nullptr && this->warning_ == nullptr; };
          // critical Field Functions 
          bool hasCritical() const { return this->critical_ != nullptr;};
          void deleteCritical() { this->critical_ = nullptr;};
          inline const vector<string> & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
          inline vector<string> getCritical() { DARABONBA_PTR_GET(critical_, vector<string>) };
          inline NotifyRule& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
          inline NotifyRule& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
          inline NotifyRule& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // warning Field Functions 
          bool hasWarning() const { return this->warning_ != nullptr;};
          void deleteWarning() { this->warning_ = nullptr;};
          inline const vector<string> & getWarning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
          inline vector<string> getWarning() { DARABONBA_PTR_GET(warning_, vector<string>) };
          inline NotifyRule& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
          inline NotifyRule& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


        protected:
          // The settings for Critical-level alert notifications.
          shared_ptr<vector<string>> critical_ {};
          // The alert interval. Unit: minutes.
          shared_ptr<int64_t> interval_ {};
          // The settings for Warning-level alert notifications.
          shared_ptr<vector<string>> warning_ {};
        };

        class AlarmRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlarmRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
            DARABONBA_PTR_TO_JSON(Comparator, comparator_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          };
          friend void from_json(const Darabonba::Json& j, AlarmRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
            DARABONBA_PTR_FROM_JSON(Comparator, comparator_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
          };
          AlarmRuleList() = default ;
          AlarmRuleList(const AlarmRuleList &) = default ;
          AlarmRuleList(AlarmRuleList &&) = default ;
          AlarmRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlarmRuleList() = default ;
          AlarmRuleList& operator=(const AlarmRuleList &) = default ;
          AlarmRuleList& operator=(AlarmRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aggregator_ == nullptr
        && this->comparator_ == nullptr && this->duration_ == nullptr && this->level_ == nullptr && this->threshold_ == nullptr; };
          // aggregator Field Functions 
          bool hasAggregator() const { return this->aggregator_ != nullptr;};
          void deleteAggregator() { this->aggregator_ = nullptr;};
          inline string getAggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
          inline AlarmRuleList& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


          // comparator Field Functions 
          bool hasComparator() const { return this->comparator_ != nullptr;};
          void deleteComparator() { this->comparator_ = nullptr;};
          inline string getComparator() const { DARABONBA_PTR_GET_DEFAULT(comparator_, "") };
          inline AlarmRuleList& setComparator(string comparator) { DARABONBA_PTR_SET_VALUE(comparator_, comparator) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
          inline AlarmRuleList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline AlarmRuleList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline int64_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
          inline AlarmRuleList& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        protected:
          // The calculation method of a metric. Valid values:
          // 
          // *   avg
          // *   max
          shared_ptr<string> aggregator_ {};
          // The comparison operator, which indicates the method used to compare a metric with the alert rule.
          // 
          // *   \\"=\\"
          // *   \\"<\\"
          // *   \\">\\"
          shared_ptr<string> comparator_ {};
          // The duration that a condition is met before an alert is triggered. Unit: minutes.
          shared_ptr<int64_t> duration_ {};
          // *   WARNING
          // *   CRITICAL
          shared_ptr<string> level_ {};
          // The threshold for the comparison between a metric and the alert rule.
          shared_ptr<int64_t> threshold_ {};
        };

        virtual bool empty() const override { return this->alarmRuleList_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->id_ == nullptr && this->metric_ == nullptr && this->notifyRule_ == nullptr
        && this->ruleName_ == nullptr; };
        // alarmRuleList Field Functions 
        bool hasAlarmRuleList() const { return this->alarmRuleList_ != nullptr;};
        void deleteAlarmRuleList() { this->alarmRuleList_ = nullptr;};
        inline const vector<AlarmList::AlarmRuleList> & getAlarmRuleList() const { DARABONBA_PTR_GET_CONST(alarmRuleList_, vector<AlarmList::AlarmRuleList>) };
        inline vector<AlarmList::AlarmRuleList> getAlarmRuleList() { DARABONBA_PTR_GET(alarmRuleList_, vector<AlarmList::AlarmRuleList>) };
        inline AlarmList& setAlarmRuleList(const vector<AlarmList::AlarmRuleList> & alarmRuleList) { DARABONBA_PTR_SET_VALUE(alarmRuleList_, alarmRuleList) };
        inline AlarmList& setAlarmRuleList(vector<AlarmList::AlarmRuleList> && alarmRuleList) { DARABONBA_PTR_SET_RVALUE(alarmRuleList_, alarmRuleList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AlarmList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline AlarmList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AlarmList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
        inline AlarmList& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


        // notifyRule Field Functions 
        bool hasNotifyRule() const { return this->notifyRule_ != nullptr;};
        void deleteNotifyRule() { this->notifyRule_ = nullptr;};
        inline const AlarmList::NotifyRule & getNotifyRule() const { DARABONBA_PTR_GET_CONST(notifyRule_, AlarmList::NotifyRule) };
        inline AlarmList::NotifyRule getNotifyRule() { DARABONBA_PTR_GET(notifyRule_, AlarmList::NotifyRule) };
        inline AlarmList& setNotifyRule(const AlarmList::NotifyRule & notifyRule) { DARABONBA_PTR_SET_VALUE(notifyRule_, notifyRule) };
        inline AlarmList& setNotifyRule(AlarmList::NotifyRule && notifyRule) { DARABONBA_PTR_SET_RVALUE(notifyRule_, notifyRule) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline AlarmList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      protected:
        // The alert notification settings. The value of this parameter is an array.
        shared_ptr<vector<AlarmList::AlarmRuleList>> alarmRuleList_ {};
        // The description of the alert rule.
        shared_ptr<string> description_ {};
        // Indicates whether the alert rule is enabled.
        shared_ptr<bool> enabled_ {};
        // The ID of the alert rule.
        shared_ptr<int64_t> id_ {};
        // The alert type. Valid values:
        // 
        // *   taskStatus
        // *   bizDelay
        // *   taskFailoverCount
        // *   ddlUnsupport
        // *   ddlReport
        // *   totalDirtyRecordWriteInLines
        shared_ptr<string> metric_ {};
        // The settings for alert notification rules. The value of this parameter is an array.
        shared_ptr<AlarmList::NotifyRule> notifyRule_ {};
        // The name of the alert rule.
        shared_ptr<string> ruleName_ {};
      };

      virtual bool empty() const override { return this->alarmList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->solutionDetail_ == nullptr && this->status_ == nullptr; };
      // alarmList Field Functions 
      bool hasAlarmList() const { return this->alarmList_ != nullptr;};
      void deleteAlarmList() { this->alarmList_ = nullptr;};
      inline const vector<Data::AlarmList> & getAlarmList() const { DARABONBA_PTR_GET_CONST(alarmList_, vector<Data::AlarmList>) };
      inline vector<Data::AlarmList> getAlarmList() { DARABONBA_PTR_GET(alarmList_, vector<Data::AlarmList>) };
      inline Data& setAlarmList(const vector<Data::AlarmList> & alarmList) { DARABONBA_PTR_SET_VALUE(alarmList_, alarmList) };
      inline Data& setAlarmList(vector<Data::AlarmList> && alarmList) { DARABONBA_PTR_SET_RVALUE(alarmList_, alarmList) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // solutionDetail Field Functions 
      bool hasSolutionDetail() const { return this->solutionDetail_ != nullptr;};
      void deleteSolutionDetail() { this->solutionDetail_ = nullptr;};
      inline const Data::SolutionDetail & getSolutionDetail() const { DARABONBA_PTR_GET_CONST(solutionDetail_, Data::SolutionDetail) };
      inline Data::SolutionDetail getSolutionDetail() { DARABONBA_PTR_GET(solutionDetail_, Data::SolutionDetail) };
      inline Data& setSolutionDetail(const Data::SolutionDetail & solutionDetail) { DARABONBA_PTR_SET_VALUE(solutionDetail_, solutionDetail) };
      inline Data& setSolutionDetail(Data::SolutionDetail && solutionDetail) { DARABONBA_PTR_SET_RVALUE(solutionDetail_, solutionDetail) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The alert rules that are associated with the real-time synchronization task. The value of this parameter is an array.
      shared_ptr<vector<Data::AlarmList>> alarmList_ {};
      // *   If the TaskType parameter is set to DI_REALTIME, the details of the real-time synchronization task are returned.
      // *   If the TaskType parameter is set to DI_SOLUTION, the value null is returned.
      shared_ptr<string> code_ {};
      // The cause of the failure to obtain the details of the real-time synchronization task or data synchronization solution.
      // 
      // If the details of the real-time synchronization task or data synchronization solution are obtained, the value null is returned.
      shared_ptr<string> message_ {};
      // *   If the TaskType parameter is set to DI_REALTIME, the value null is returned.
      // *   If the TaskType parameter is set to DI_SOLUTION, the details of the data synchronization solution are returned.
      shared_ptr<Data::SolutionDetail> solutionDetail_ {};
      // Indicates whether the details of the real-time synchronization task or data synchronization solution are obtained. Valid values:
      // 
      // success: The details are obtained. fail: The details fail to be obtained.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDISyncTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDISyncTaskResponseBody::Data) };
    inline GetDISyncTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDISyncTaskResponseBody::Data) };
    inline GetDISyncTaskResponseBody& setData(const GetDISyncTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDISyncTaskResponseBody& setData(GetDISyncTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDISyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDISyncTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned results.
    shared_ptr<GetDISyncTaskResponseBody::Data> data_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   True
    // *   False
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
