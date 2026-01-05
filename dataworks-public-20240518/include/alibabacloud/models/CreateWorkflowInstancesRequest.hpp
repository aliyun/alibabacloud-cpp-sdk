// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultRunProperties, defaultRunProperties_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Periods, periods_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultRunProperties, defaultRunProperties_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Periods, periods_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
    };
    CreateWorkflowInstancesRequest() = default ;
    CreateWorkflowInstancesRequest(const CreateWorkflowInstancesRequest &) = default ;
    CreateWorkflowInstancesRequest(CreateWorkflowInstancesRequest &&) = default ;
    CreateWorkflowInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequest() = default ;
    CreateWorkflowInstancesRequest& operator=(const CreateWorkflowInstancesRequest &) = default ;
    CreateWorkflowInstancesRequest& operator=(CreateWorkflowInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Periods : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Periods& obj) { 
        DARABONBA_PTR_TO_JSON(BizDates, bizDates_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Periods& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDates, bizDates_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Periods() = default ;
      Periods(const Periods &) = default ;
      Periods(Periods &&) = default ;
      Periods(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Periods() = default ;
      Periods& operator=(const Periods &) = default ;
      Periods& operator=(Periods &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BizDates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizDates& obj) { 
          DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
          DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
        };
        friend void from_json(const Darabonba::Json& j, BizDates& obj) { 
          DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
          DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
        };
        BizDates() = default ;
        BizDates(const BizDates &) = default ;
        BizDates(BizDates &&) = default ;
        BizDates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizDates() = default ;
        BizDates& operator=(const BizDates &) = default ;
        BizDates& operator=(BizDates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endBizDate_ == nullptr
        && this->startBizDate_ == nullptr; };
        // endBizDate Field Functions 
        bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
        void deleteEndBizDate() { this->endBizDate_ = nullptr;};
        inline string getEndBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
        inline BizDates& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


        // startBizDate Field Functions 
        bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
        void deleteStartBizDate() { this->startBizDate_ = nullptr;};
        inline string getStartBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
        inline BizDates& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


      protected:
        // The data timestamp at which data is no longer backfilled. Configure this parameter in the `yyyy-mm-dd` format.
        // 
        // This parameter is required.
        shared_ptr<string> endBizDate_ {};
        // The data timestamp at which the data starts to be backfilled. Configure this parameter in the `yyyy-mm-dd` format.
        // 
        // This parameter is required.
        shared_ptr<string> startBizDate_ {};
      };

      virtual bool empty() const override { return this->bizDates_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // bizDates Field Functions 
      bool hasBizDates() const { return this->bizDates_ != nullptr;};
      void deleteBizDates() { this->bizDates_ = nullptr;};
      inline const vector<Periods::BizDates> & getBizDates() const { DARABONBA_PTR_GET_CONST(bizDates_, vector<Periods::BizDates>) };
      inline vector<Periods::BizDates> getBizDates() { DARABONBA_PTR_GET(bizDates_, vector<Periods::BizDates>) };
      inline Periods& setBizDates(const vector<Periods::BizDates> & bizDates) { DARABONBA_PTR_SET_VALUE(bizDates_, bizDates) };
      inline Periods& setBizDates(vector<Periods::BizDates> && bizDates) { DARABONBA_PTR_SET_RVALUE(bizDates_, bizDates) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Periods& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Periods& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The data timestamps. You can specify up to seven data timestamps.
      // 
      // This parameter is required.
      shared_ptr<vector<Periods::BizDates>> bizDates_ {};
      // The end time of data backfill. Configure this parameter in the `hh:mm:ss` format. The time must be in the 24-hour clock. Default value: 23:59:59.
      // 
      // If you configure this parameter, you must also configure the StartTime parameter.
      shared_ptr<string> endTime_ {};
      // The start time of data backfill. Configure this parameter in the `hh:mm:ss` format. The time must be in the 24-hour clock. Default value: 00:00:00.
      // 
      // If you configure this parameter, you must also configure the EndTime parameter.
      shared_ptr<string> startTime_ {};
    };

    class DefaultRunProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultRunProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Alert, alert_);
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
        DARABONBA_PTR_TO_JSON(ExcludeProjectIds, excludeProjectIds_);
        DARABONBA_PTR_TO_JSON(ExcludeTaskIds, excludeTaskIds_);
        DARABONBA_PTR_TO_JSON(IncludeProjectIds, includeProjectIds_);
        DARABONBA_PTR_TO_JSON(IncludeTaskIds, includeTaskIds_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(PriorityWeightStrategy, priorityWeightStrategy_);
        DARABONBA_PTR_TO_JSON(RootTaskIds, rootTaskIds_);
        DARABONBA_PTR_TO_JSON(RunPolicy, runPolicy_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultRunProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Alert, alert_);
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(ExcludeProjectIds, excludeProjectIds_);
        DARABONBA_PTR_FROM_JSON(ExcludeTaskIds, excludeTaskIds_);
        DARABONBA_PTR_FROM_JSON(IncludeProjectIds, includeProjectIds_);
        DARABONBA_PTR_FROM_JSON(IncludeTaskIds, includeTaskIds_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(PriorityWeightStrategy, priorityWeightStrategy_);
        DARABONBA_PTR_FROM_JSON(RootTaskIds, rootTaskIds_);
        DARABONBA_PTR_FROM_JSON(RunPolicy, runPolicy_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      };
      DefaultRunProperties() = default ;
      DefaultRunProperties(const DefaultRunProperties &) = default ;
      DefaultRunProperties(DefaultRunProperties &&) = default ;
      DefaultRunProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultRunProperties() = default ;
      DefaultRunProperties& operator=(const DefaultRunProperties &) = default ;
      DefaultRunProperties& operator=(DefaultRunProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RunPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Immediately, immediately_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RunPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RunPolicy() = default ;
        RunPolicy(const RunPolicy &) = default ;
        RunPolicy(RunPolicy &&) = default ;
        RunPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunPolicy() = default ;
        RunPolicy& operator=(const RunPolicy &) = default ;
        RunPolicy& operator=(RunPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->immediately_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline RunPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // immediately Field Functions 
        bool hasImmediately() const { return this->immediately_ != nullptr;};
        void deleteImmediately() { this->immediately_ = nullptr;};
        inline bool getImmediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, false) };
        inline RunPolicy& setImmediately(bool immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline RunPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RunPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The end time of running. Configure this parameter in the `hh:mm:ss` format (24-hour clock). This parameter is required if you configure the RunPolicy parameter. Valid values:
        shared_ptr<string> endTime_ {};
        // Specifies whether a task whose scheduled run time is in the future can be run immediately. Default value: false.
        shared_ptr<bool> immediately_ {};
        // The start time of running. Configure this parameter in the `hh:mm:ss` format (24-hour clock). This parameter is required if you configure the RunPolicy parameter.
        shared_ptr<string> startTime_ {};
        // The time period type. This parameter is required if you configure the RunPolicy parameter. Valid values:
        // 
        // *   Daily
        // *   Weekend
        shared_ptr<string> type_ {};
      };

      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(Blocked, blocked_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(Blocked, blocked_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        Analysis() = default ;
        Analysis(const Analysis &) = default ;
        Analysis(Analysis &&) = default ;
        Analysis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Analysis() = default ;
        Analysis& operator=(const Analysis &) = default ;
        Analysis& operator=(Analysis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blocked_ == nullptr
        && this->enabled_ == nullptr; };
        // blocked Field Functions 
        bool hasBlocked() const { return this->blocked_ != nullptr;};
        void deleteBlocked() { this->blocked_ = nullptr;};
        inline bool getBlocked() const { DARABONBA_PTR_GET_DEFAULT(blocked_, false) };
        inline Analysis& setBlocked(bool blocked) { DARABONBA_PTR_SET_VALUE(blocked_, blocked) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Analysis& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // Specifies whether to block execution if the analysis fails. Required when Type = SupplementData.
        shared_ptr<bool> blocked_ {};
        // Specifies whether to enable the analysis feature. Required when Type = SupplementData.
        shared_ptr<bool> enabled_ {};
      };

      class Alert : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alert& obj) { 
          DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Alert& obj) { 
          DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Alert() = default ;
        Alert(const Alert &) = default ;
        Alert(Alert &&) = default ;
        Alert(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alert() = default ;
        Alert& operator=(const Alert &) = default ;
        Alert& operator=(Alert &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->noticeType_ == nullptr
        && this->type_ == nullptr; };
        // noticeType Field Functions 
        bool hasNoticeType() const { return this->noticeType_ != nullptr;};
        void deleteNoticeType() { this->noticeType_ = nullptr;};
        inline string getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
        inline Alert& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Alert& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The alert notification method. Valid values:
        // 
        // *   Sms: SMS only.
        // *   Mail: Mail only.
        // *   SmsMail: SMS and mail.
        shared_ptr<string> noticeType_ {};
        // The alerting policy. Valid values:
        // 
        // *   Success: Alerts on success.
        // *   Failure: Alerts on failure.
        // *   SuccessFailure: Alerts on both success and failure.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->alert_ == nullptr
        && this->analysis_ == nullptr && this->excludeProjectIds_ == nullptr && this->excludeTaskIds_ == nullptr && this->includeProjectIds_ == nullptr && this->includeTaskIds_ == nullptr
        && this->mode_ == nullptr && this->order_ == nullptr && this->parallelism_ == nullptr && this->priority_ == nullptr && this->priorityWeightStrategy_ == nullptr
        && this->rootTaskIds_ == nullptr && this->runPolicy_ == nullptr && this->runtimeResource_ == nullptr; };
      // alert Field Functions 
      bool hasAlert() const { return this->alert_ != nullptr;};
      void deleteAlert() { this->alert_ = nullptr;};
      inline const DefaultRunProperties::Alert & getAlert() const { DARABONBA_PTR_GET_CONST(alert_, DefaultRunProperties::Alert) };
      inline DefaultRunProperties::Alert getAlert() { DARABONBA_PTR_GET(alert_, DefaultRunProperties::Alert) };
      inline DefaultRunProperties& setAlert(const DefaultRunProperties::Alert & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
      inline DefaultRunProperties& setAlert(DefaultRunProperties::Alert && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline const DefaultRunProperties::Analysis & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, DefaultRunProperties::Analysis) };
      inline DefaultRunProperties::Analysis getAnalysis() { DARABONBA_PTR_GET(analysis_, DefaultRunProperties::Analysis) };
      inline DefaultRunProperties& setAnalysis(const DefaultRunProperties::Analysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
      inline DefaultRunProperties& setAnalysis(DefaultRunProperties::Analysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


      // excludeProjectIds Field Functions 
      bool hasExcludeProjectIds() const { return this->excludeProjectIds_ != nullptr;};
      void deleteExcludeProjectIds() { this->excludeProjectIds_ = nullptr;};
      inline const vector<int64_t> & getExcludeProjectIds() const { DARABONBA_PTR_GET_CONST(excludeProjectIds_, vector<int64_t>) };
      inline vector<int64_t> getExcludeProjectIds() { DARABONBA_PTR_GET(excludeProjectIds_, vector<int64_t>) };
      inline DefaultRunProperties& setExcludeProjectIds(const vector<int64_t> & excludeProjectIds) { DARABONBA_PTR_SET_VALUE(excludeProjectIds_, excludeProjectIds) };
      inline DefaultRunProperties& setExcludeProjectIds(vector<int64_t> && excludeProjectIds) { DARABONBA_PTR_SET_RVALUE(excludeProjectIds_, excludeProjectIds) };


      // excludeTaskIds Field Functions 
      bool hasExcludeTaskIds() const { return this->excludeTaskIds_ != nullptr;};
      void deleteExcludeTaskIds() { this->excludeTaskIds_ = nullptr;};
      inline const vector<int64_t> & getExcludeTaskIds() const { DARABONBA_PTR_GET_CONST(excludeTaskIds_, vector<int64_t>) };
      inline vector<int64_t> getExcludeTaskIds() { DARABONBA_PTR_GET(excludeTaskIds_, vector<int64_t>) };
      inline DefaultRunProperties& setExcludeTaskIds(const vector<int64_t> & excludeTaskIds) { DARABONBA_PTR_SET_VALUE(excludeTaskIds_, excludeTaskIds) };
      inline DefaultRunProperties& setExcludeTaskIds(vector<int64_t> && excludeTaskIds) { DARABONBA_PTR_SET_RVALUE(excludeTaskIds_, excludeTaskIds) };


      // includeProjectIds Field Functions 
      bool hasIncludeProjectIds() const { return this->includeProjectIds_ != nullptr;};
      void deleteIncludeProjectIds() { this->includeProjectIds_ = nullptr;};
      inline const vector<int64_t> & getIncludeProjectIds() const { DARABONBA_PTR_GET_CONST(includeProjectIds_, vector<int64_t>) };
      inline vector<int64_t> getIncludeProjectIds() { DARABONBA_PTR_GET(includeProjectIds_, vector<int64_t>) };
      inline DefaultRunProperties& setIncludeProjectIds(const vector<int64_t> & includeProjectIds) { DARABONBA_PTR_SET_VALUE(includeProjectIds_, includeProjectIds) };
      inline DefaultRunProperties& setIncludeProjectIds(vector<int64_t> && includeProjectIds) { DARABONBA_PTR_SET_RVALUE(includeProjectIds_, includeProjectIds) };


      // includeTaskIds Field Functions 
      bool hasIncludeTaskIds() const { return this->includeTaskIds_ != nullptr;};
      void deleteIncludeTaskIds() { this->includeTaskIds_ = nullptr;};
      inline const vector<int64_t> & getIncludeTaskIds() const { DARABONBA_PTR_GET_CONST(includeTaskIds_, vector<int64_t>) };
      inline vector<int64_t> getIncludeTaskIds() { DARABONBA_PTR_GET(includeTaskIds_, vector<int64_t>) };
      inline DefaultRunProperties& setIncludeTaskIds(const vector<int64_t> & includeTaskIds) { DARABONBA_PTR_SET_VALUE(includeTaskIds_, includeTaskIds) };
      inline DefaultRunProperties& setIncludeTaskIds(vector<int64_t> && includeTaskIds) { DARABONBA_PTR_SET_RVALUE(includeTaskIds_, includeTaskIds) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline DefaultRunProperties& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline DefaultRunProperties& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // parallelism Field Functions 
      bool hasParallelism() const { return this->parallelism_ != nullptr;};
      void deleteParallelism() { this->parallelism_ = nullptr;};
      inline int32_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
      inline DefaultRunProperties& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline DefaultRunProperties& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // priorityWeightStrategy Field Functions 
      bool hasPriorityWeightStrategy() const { return this->priorityWeightStrategy_ != nullptr;};
      void deletePriorityWeightStrategy() { this->priorityWeightStrategy_ = nullptr;};
      inline string getPriorityWeightStrategy() const { DARABONBA_PTR_GET_DEFAULT(priorityWeightStrategy_, "") };
      inline DefaultRunProperties& setPriorityWeightStrategy(string priorityWeightStrategy) { DARABONBA_PTR_SET_VALUE(priorityWeightStrategy_, priorityWeightStrategy) };


      // rootTaskIds Field Functions 
      bool hasRootTaskIds() const { return this->rootTaskIds_ != nullptr;};
      void deleteRootTaskIds() { this->rootTaskIds_ = nullptr;};
      inline const vector<int64_t> & getRootTaskIds() const { DARABONBA_PTR_GET_CONST(rootTaskIds_, vector<int64_t>) };
      inline vector<int64_t> getRootTaskIds() { DARABONBA_PTR_GET(rootTaskIds_, vector<int64_t>) };
      inline DefaultRunProperties& setRootTaskIds(const vector<int64_t> & rootTaskIds) { DARABONBA_PTR_SET_VALUE(rootTaskIds_, rootTaskIds) };
      inline DefaultRunProperties& setRootTaskIds(vector<int64_t> && rootTaskIds) { DARABONBA_PTR_SET_RVALUE(rootTaskIds_, rootTaskIds) };


      // runPolicy Field Functions 
      bool hasRunPolicy() const { return this->runPolicy_ != nullptr;};
      void deleteRunPolicy() { this->runPolicy_ = nullptr;};
      inline const DefaultRunProperties::RunPolicy & getRunPolicy() const { DARABONBA_PTR_GET_CONST(runPolicy_, DefaultRunProperties::RunPolicy) };
      inline DefaultRunProperties::RunPolicy getRunPolicy() { DARABONBA_PTR_GET(runPolicy_, DefaultRunProperties::RunPolicy) };
      inline DefaultRunProperties& setRunPolicy(const DefaultRunProperties::RunPolicy & runPolicy) { DARABONBA_PTR_SET_VALUE(runPolicy_, runPolicy) };
      inline DefaultRunProperties& setRunPolicy(DefaultRunProperties::RunPolicy && runPolicy) { DARABONBA_PTR_SET_RVALUE(runPolicy_, runPolicy) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline string getRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
      inline DefaultRunProperties& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


    protected:
      // The alert settings.
      shared_ptr<DefaultRunProperties::Alert> alert_ {};
      // The analysis configuration. Required when Type = SupplementData.
      shared_ptr<DefaultRunProperties::Analysis> analysis_ {};
      // The IDs of the projects not to run.
      shared_ptr<vector<int64_t>> excludeProjectIds_ {};
      // The IDs of the tasks not to run.
      shared_ptr<vector<int64_t>> excludeTaskIds_ {};
      // The IDs of the projects to run.
      shared_ptr<vector<int64_t>> includeProjectIds_ {};
      // The IDs of the tasks to run.
      shared_ptr<vector<int64_t>> includeTaskIds_ {};
      // The data backfill mode. Default value: ManualSelection. Required when Type is set to SupplementData.
      // 
      // *   General: You can specify only one value for `RootTaskIds`. The `IncludeTaskIds` parameter is optional. If it\\"s not specified, it defaults to including `RootTaskIds`.
      // *   ManualSelection: You can specify multiple values for `RootTaskIds`. The `IncludeTaskIds` parameter is optional. If it is not specified, it defaults to including `RootTaskIds`.
      // *   Chain: If you set the Mode parameter to Chain, leave the `RootTaskIds` parameter empty and set the `IncludeTaskIds` parameter to the start task ID and the end task ID.
      // *   AllDownstream: Only one `RootTaskId` can be specified.
      shared_ptr<string> mode_ {};
      // The execution order. Default value: Asc.
      // 
      // *   Asc: ascending by business date.
      // *   Desc: descending by business date.
      shared_ptr<string> order_ {};
      // The task concurrency. Values from 2 to 10 indicate concurrency. A value of 1 indicates sequential execution. Required when Type = SupplementData.
      shared_ptr<int32_t> parallelism_ {};
      // The execution priority, range: 1–11. A higher value indicates higher priority.
      shared_ptr<int32_t> priority_ {};
      // The priority weighting policy.
      // 
      // *   `Disable` (default): Do not enable.
      // *   `Upstream`: The priority is based on the total weight of upstream nodes. The deeper the hierarchy, the higher the weight.
      shared_ptr<string> priorityWeightStrategy_ {};
      // The list of root task IDs.
      // 
      // *   When Type is set to SupplementData, RootTaskIds is required unless Mode is set to Chain.
      // *   When Type is set to ManualWorkflow, RootTaskIds is optional. If it is not specified, the default root nodes of the manual workflow are used.
      // *   When Type is set to Manual, RootTaskIds is required and specifies the list of manual tasks to run.
      // *   When Type is set to SmokeTest, RootTaskIds is required and specifies the list of test tasks to run.
      shared_ptr<vector<int64_t>> rootTaskIds_ {};
      // The run policy. If the parameter is left empty, the task configuration is used.
      shared_ptr<DefaultRunProperties::RunPolicy> runPolicy_ {};
      // The custom scheduling resource group ID. If left empty, the task configuration is used.
      shared_ptr<string> runtimeResource_ {};
    };

    virtual bool empty() const override { return this->autoStartEnabled_ == nullptr
        && this->comment_ == nullptr && this->defaultRunProperties_ == nullptr && this->envType_ == nullptr && this->name_ == nullptr && this->periods_ == nullptr
        && this->projectId_ == nullptr && this->tagCreationPolicy_ == nullptr && this->tags_ == nullptr && this->taskParameters_ == nullptr && this->type_ == nullptr
        && this->workflowId_ == nullptr && this->workflowParameters_ == nullptr; };
    // autoStartEnabled Field Functions 
    bool hasAutoStartEnabled() const { return this->autoStartEnabled_ != nullptr;};
    void deleteAutoStartEnabled() { this->autoStartEnabled_ = nullptr;};
    inline bool getAutoStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoStartEnabled_, false) };
    inline CreateWorkflowInstancesRequest& setAutoStartEnabled(bool autoStartEnabled) { DARABONBA_PTR_SET_VALUE(autoStartEnabled_, autoStartEnabled) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateWorkflowInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultRunProperties Field Functions 
    bool hasDefaultRunProperties() const { return this->defaultRunProperties_ != nullptr;};
    void deleteDefaultRunProperties() { this->defaultRunProperties_ = nullptr;};
    inline const CreateWorkflowInstancesRequest::DefaultRunProperties & getDefaultRunProperties() const { DARABONBA_PTR_GET_CONST(defaultRunProperties_, CreateWorkflowInstancesRequest::DefaultRunProperties) };
    inline CreateWorkflowInstancesRequest::DefaultRunProperties getDefaultRunProperties() { DARABONBA_PTR_GET(defaultRunProperties_, CreateWorkflowInstancesRequest::DefaultRunProperties) };
    inline CreateWorkflowInstancesRequest& setDefaultRunProperties(const CreateWorkflowInstancesRequest::DefaultRunProperties & defaultRunProperties) { DARABONBA_PTR_SET_VALUE(defaultRunProperties_, defaultRunProperties) };
    inline CreateWorkflowInstancesRequest& setDefaultRunProperties(CreateWorkflowInstancesRequest::DefaultRunProperties && defaultRunProperties) { DARABONBA_PTR_SET_RVALUE(defaultRunProperties_, defaultRunProperties) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateWorkflowInstancesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkflowInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline const CreateWorkflowInstancesRequest::Periods & getPeriods() const { DARABONBA_PTR_GET_CONST(periods_, CreateWorkflowInstancesRequest::Periods) };
    inline CreateWorkflowInstancesRequest::Periods getPeriods() { DARABONBA_PTR_GET(periods_, CreateWorkflowInstancesRequest::Periods) };
    inline CreateWorkflowInstancesRequest& setPeriods(const CreateWorkflowInstancesRequest::Periods & periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };
    inline CreateWorkflowInstancesRequest& setPeriods(CreateWorkflowInstancesRequest::Periods && periods) { DARABONBA_PTR_SET_RVALUE(periods_, periods) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateWorkflowInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tagCreationPolicy Field Functions 
    bool hasTagCreationPolicy() const { return this->tagCreationPolicy_ != nullptr;};
    void deleteTagCreationPolicy() { this->tagCreationPolicy_ = nullptr;};
    inline string getTagCreationPolicy() const { DARABONBA_PTR_GET_DEFAULT(tagCreationPolicy_, "") };
    inline CreateWorkflowInstancesRequest& setTagCreationPolicy(string tagCreationPolicy) { DARABONBA_PTR_SET_VALUE(tagCreationPolicy_, tagCreationPolicy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateWorkflowInstancesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateWorkflowInstancesRequest::Tags>) };
    inline vector<CreateWorkflowInstancesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateWorkflowInstancesRequest::Tags>) };
    inline CreateWorkflowInstancesRequest& setTags(const vector<CreateWorkflowInstancesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateWorkflowInstancesRequest& setTags(vector<CreateWorkflowInstancesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskParameters Field Functions 
    bool hasTaskParameters() const { return this->taskParameters_ != nullptr;};
    void deleteTaskParameters() { this->taskParameters_ = nullptr;};
    inline string getTaskParameters() const { DARABONBA_PTR_GET_DEFAULT(taskParameters_, "") };
    inline CreateWorkflowInstancesRequest& setTaskParameters(string taskParameters) { DARABONBA_PTR_SET_VALUE(taskParameters_, taskParameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkflowInstancesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline CreateWorkflowInstancesRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline string getWorkflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
    inline CreateWorkflowInstancesRequest& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


  protected:
    // The default value is true.
    shared_ptr<bool> autoStartEnabled_ {};
    // The reason for the creation.
    shared_ptr<string> comment_ {};
    // The runtime configuration.
    shared_ptr<CreateWorkflowInstancesRequest::DefaultRunProperties> defaultRunProperties_ {};
    // The project environment. Valid values:
    // 
    // *   Prod
    // *   Dev
    shared_ptr<string> envType_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The configuration of the data backfilling period.
    shared_ptr<CreateWorkflowInstancesRequest::Periods> periods_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The tag creation policy. Valid values:
    // 
    // *   Append: New tags are added on top of the existing tags of the manual workflow.
    // *   Overwrite: Existing tags of the manual workflow are not inherited. New tags are created directly.
    shared_ptr<string> tagCreationPolicy_ {};
    // The task tag list.
    shared_ptr<vector<CreateWorkflowInstancesRequest::Tags>> tags_ {};
    // The task-specific parameters. The value is in the JSON format. The key specifies the task ID. You can call the GetTask operation to obtain the format of the value by querying the script parameters.
    shared_ptr<string> taskParameters_ {};
    // The type of the workflow instance. Valid values:
    // 
    // *   SupplementData: Data backfill. The usage of RootTaskIds and IncludeTaskIds varies based on the backfill mode. See the description of the DefaultRunProperties.Mode parameter.
    // *   ManualWorkflow: Manually triggered workflow. WorkflowId is required for a manual workflow. RootTaskIds is optional. If not specified, the system uses the default root task list of the manual workflow.
    // *   Manual: Manual task. You only need to specify RootTaskIds. This is the list of manual tasks to run.
    // *   SmokeTest: Smoke test. You only need to specify RootTaskIds. This is the list of test tasks to run.
    // *   TriggerWorkflow: Triggered Workflow You must specify the WorkflowId of the triggered workflow. IncludeTaskIds is optional. If you do not specify IncludeTaskIds, the entire workflow runs.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The ID of the workflow to which the instance belongs. This parameter is set to 1 for auto triggered tasks.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workflowId_ {};
    // The workflow parameters. This parameter takes effect when a specific workflow is specified (`WorkflowId != 1`). For scheduled workflows and triggered workflows, the format is key=value, and these parameters have lower priority than task parameters. For manual workflows, the format is JSON, and these parameters have higher priority than task parameters.
    shared_ptr<string> workflowParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
