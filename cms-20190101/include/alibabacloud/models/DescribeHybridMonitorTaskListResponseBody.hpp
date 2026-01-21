// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODY_HPP_
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
  class DescribeHybridMonitorTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHybridMonitorTaskListResponseBody() = default ;
    DescribeHybridMonitorTaskListResponseBody(const DescribeHybridMonitorTaskListResponseBody &) = default ;
    DescribeHybridMonitorTaskListResponseBody(DescribeHybridMonitorTaskListResponseBody &&) = default ;
    DescribeHybridMonitorTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorTaskListResponseBody() = default ;
    DescribeHybridMonitorTaskListResponseBody& operator=(const DescribeHybridMonitorTaskListResponseBody &) = default ;
    DescribeHybridMonitorTaskListResponseBody& operator=(DescribeHybridMonitorTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(AttachLabels, attachLabels_);
        DARABONBA_PTR_TO_JSON(CollectInterval, collectInterval_);
        DARABONBA_PTR_TO_JSON(CollectTargetEndpoint, collectTargetEndpoint_);
        DARABONBA_PTR_TO_JSON(CollectTargetPath, collectTargetPath_);
        DARABONBA_PTR_TO_JSON(CollectTargetType, collectTargetType_);
        DARABONBA_PTR_TO_JSON(CollectTimout, collectTimout_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(LogFilePath, logFilePath_);
        DARABONBA_PTR_TO_JSON(LogProcess, logProcess_);
        DARABONBA_PTR_TO_JSON(LogSample, logSample_);
        DARABONBA_PTR_TO_JSON(LogSplit, logSplit_);
        DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
        DARABONBA_PTR_TO_JSON(MatchExpressRelation, matchExpressRelation_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        DARABONBA_PTR_TO_JSON(SLSProcess, SLSProcess_);
        DARABONBA_PTR_TO_JSON(SLSProcessConfig, SLSProcessConfig_);
        DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(UploadRegion, uploadRegion_);
        DARABONBA_PTR_TO_JSON(YARMConfig, YARMConfig_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachLabels, attachLabels_);
        DARABONBA_PTR_FROM_JSON(CollectInterval, collectInterval_);
        DARABONBA_PTR_FROM_JSON(CollectTargetEndpoint, collectTargetEndpoint_);
        DARABONBA_PTR_FROM_JSON(CollectTargetPath, collectTargetPath_);
        DARABONBA_PTR_FROM_JSON(CollectTargetType, collectTargetType_);
        DARABONBA_PTR_FROM_JSON(CollectTimout, collectTimout_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(LogFilePath, logFilePath_);
        DARABONBA_PTR_FROM_JSON(LogProcess, logProcess_);
        DARABONBA_PTR_FROM_JSON(LogSample, logSample_);
        DARABONBA_PTR_FROM_JSON(LogSplit, logSplit_);
        DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
        DARABONBA_PTR_FROM_JSON(MatchExpressRelation, matchExpressRelation_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
        DARABONBA_PTR_FROM_JSON(SLSProcess, SLSProcess_);
        DARABONBA_PTR_FROM_JSON(SLSProcessConfig, SLSProcessConfig_);
        DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(UploadRegion, uploadRegion_);
        DARABONBA_PTR_FROM_JSON(YARMConfig, YARMConfig_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SLSProcessConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SLSProcessConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Express, express_);
          DARABONBA_PTR_TO_JSON(Filter, filter_);
          DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
          DARABONBA_PTR_TO_JSON(Statistics, statistics_);
        };
        friend void from_json(const Darabonba::Json& j, SLSProcessConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Express, express_);
          DARABONBA_PTR_FROM_JSON(Filter, filter_);
          DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
          DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
        };
        SLSProcessConfig() = default ;
        SLSProcessConfig(const SLSProcessConfig &) = default ;
        SLSProcessConfig(SLSProcessConfig &&) = default ;
        SLSProcessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SLSProcessConfig() = default ;
        SLSProcessConfig& operator=(const SLSProcessConfig &) = default ;
        SLSProcessConfig& operator=(SLSProcessConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Statistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(Function, function_);
            DARABONBA_PTR_TO_JSON(Parameter1, parameter1_);
            DARABONBA_PTR_TO_JSON(Parameter2, parameter2_);
            DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
          };
          friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(Function, function_);
            DARABONBA_PTR_FROM_JSON(Parameter1, parameter1_);
            DARABONBA_PTR_FROM_JSON(Parameter2, parameter2_);
            DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
          };
          Statistics() = default ;
          Statistics(const Statistics &) = default ;
          Statistics(Statistics &&) = default ;
          Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Statistics() = default ;
          Statistics& operator=(const Statistics &) = default ;
          Statistics& operator=(Statistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->function_ == nullptr && this->parameter1_ == nullptr && this->parameter2_ == nullptr && this->SLSKeyName_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline Statistics& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // function Field Functions 
          bool hasFunction() const { return this->function_ != nullptr;};
          void deleteFunction() { this->function_ = nullptr;};
          inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
          inline Statistics& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


          // parameter1 Field Functions 
          bool hasParameter1() const { return this->parameter1_ != nullptr;};
          void deleteParameter1() { this->parameter1_ = nullptr;};
          inline string getParameter1() const { DARABONBA_PTR_GET_DEFAULT(parameter1_, "") };
          inline Statistics& setParameter1(string parameter1) { DARABONBA_PTR_SET_VALUE(parameter1_, parameter1) };


          // parameter2 Field Functions 
          bool hasParameter2() const { return this->parameter2_ != nullptr;};
          void deleteParameter2() { this->parameter2_ = nullptr;};
          inline string getParameter2() const { DARABONBA_PTR_GET_DEFAULT(parameter2_, "") };
          inline Statistics& setParameter2(string parameter2) { DARABONBA_PTR_SET_VALUE(parameter2_, parameter2) };


          // SLSKeyName Field Functions 
          bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
          void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
          inline string getSLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
          inline Statistics& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


        protected:
          // The alias of the aggregation result.
          shared_ptr<string> alias_ {};
          // The function that is used to aggregate log data within a statistical period. Valid values:
          // 
          // *   count: counts the number.
          // *   sum: calculates the total value.
          // *   avg: calculates the average value.
          // *   max: calculates the maximum value.
          // *   min: calculates the minimum value.
          // *   value: collects samples within the statistical period.
          // *   countps: calculates the average number of the specified field per second by using the following formula: Counted number of the specified field/Total number of seconds within the statistical period.
          // *   sumps: calculates the average number of the specified field per second by using the following formula: Total value of the specified field/Total number of seconds within the statistical period.
          // *   distinct: counts the number of logs where the specified field appears within the statistical period.
          // *   distribution: counts the number of logs that meet a specified condition within the statistical period.
          // *   percentile: sorts the values of the specified field in ascending order, and then returns the value that is at the specified percentile within the statistical period. Example: P50.
          shared_ptr<string> function_ {};
          // The value of the function that is used to aggregate logs imported from Log Service.
          // 
          // *   If the `Function` parameter is set to `distribution`, this parameter indicates the lower limit of the statistical interval. For example, 200 indicates that the number of HTTP requests whose status code is 2XX is calculated.
          // *   If the `Function` parameter is set to `percentile`, this parameter specifies the percentile at which the expected value is. For example, 0.5 specifies P50.
          shared_ptr<string> parameter1_ {};
          // The value of the function that is used to aggregate logs imported from Log Service.
          // 
          // > This parameter is returned only if the `Function` parameter is set to `distribution`. This parameter indicates the upper limit of the statistical interval. For example, 299 indicates that the number of HTTP requests whose status code is 2XX is calculated.
          shared_ptr<string> parameter2_ {};
          // The name of the key that is used to aggregate logs imported from Log Service.
          shared_ptr<string> SLSKeyName_ {};
        };

        class GroupBy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GroupBy& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
          };
          friend void from_json(const Darabonba::Json& j, GroupBy& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
          };
          GroupBy() = default ;
          GroupBy(const GroupBy &) = default ;
          GroupBy(GroupBy &&) = default ;
          GroupBy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GroupBy() = default ;
          GroupBy& operator=(const GroupBy &) = default ;
          GroupBy& operator=(GroupBy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->SLSKeyName_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline GroupBy& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // SLSKeyName Field Functions 
          bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
          void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
          inline string getSLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
          inline GroupBy& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


        protected:
          // The alias of the aggregation result.
          shared_ptr<string> alias_ {};
          // The name of the key that is used to aggregate logs imported from Log Service.
          shared_ptr<string> SLSKeyName_ {};
        };

        class Filter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Filter& obj) { 
            DARABONBA_PTR_TO_JSON(Filters, filters_);
            DARABONBA_PTR_TO_JSON(Relation, relation_);
          };
          friend void from_json(const Darabonba::Json& j, Filter& obj) { 
            DARABONBA_PTR_FROM_JSON(Filters, filters_);
            DARABONBA_PTR_FROM_JSON(Relation, relation_);
          };
          Filter() = default ;
          Filter(const Filter &) = default ;
          Filter(Filter &&) = default ;
          Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Filter() = default ;
          Filter& operator=(const Filter &) = default ;
          Filter& operator=(Filter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Filters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Filters& obj) { 
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Filters& obj) { 
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Filters() = default ;
            Filters(const Filters &) = default ;
            Filters(Filters &&) = default ;
            Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Filters() = default ;
            Filters& operator=(const Filters &) = default ;
            Filters& operator=(Filters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->operator_ == nullptr
        && this->SLSKeyName_ == nullptr && this->value_ == nullptr; };
            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Filters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // SLSKeyName Field Functions 
            bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
            void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
            inline string getSLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
            inline Filters& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The method that is used to filter logs imported from Log Service. Valid values:
            // 
            // *   `contain`: contains
            // *   `notContain`: does not contain
            // *   `>`: greater than
            // *   `<`: less than
            // *   `=`: equal to
            // *   `! =`: not equal to
            // *   `>=`: greater than or equal to
            // *   `<=`: less than or equal to
            shared_ptr<string> operator_ {};
            // The name of the key that is used to filter logs imported from Log Service.
            shared_ptr<string> SLSKeyName_ {};
            // The value of the key that is used to filter logs imported from Log Service.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->filters_ == nullptr
        && this->relation_ == nullptr; };
          // filters Field Functions 
          bool hasFilters() const { return this->filters_ != nullptr;};
          void deleteFilters() { this->filters_ = nullptr;};
          inline const vector<Filter::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Filter::Filters>) };
          inline vector<Filter::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<Filter::Filters>) };
          inline Filter& setFilters(const vector<Filter::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
          inline Filter& setFilters(vector<Filter::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


          // relation Field Functions 
          bool hasRelation() const { return this->relation_ != nullptr;};
          void deleteRelation() { this->relation_ = nullptr;};
          inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
          inline Filter& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


        protected:
          // The conditions that are used to filter logs imported from Log Service.
          shared_ptr<vector<Filter::Filters>> filters_ {};
          // The relationship between multiple filter conditions. Valid values:
          // 
          // *   and (default): Logs are processed only if all filter conditions are met.
          // *   or: Logs are processed if one of the filter conditions is met.
          shared_ptr<string> relation_ {};
        };

        class Express : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Express& obj) { 
            DARABONBA_PTR_TO_JSON(Alias, alias_);
            DARABONBA_PTR_TO_JSON(Express, express_);
          };
          friend void from_json(const Darabonba::Json& j, Express& obj) { 
            DARABONBA_PTR_FROM_JSON(Alias, alias_);
            DARABONBA_PTR_FROM_JSON(Express, express_);
          };
          Express() = default ;
          Express(const Express &) = default ;
          Express(Express &&) = default ;
          Express(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Express() = default ;
          Express& operator=(const Express &) = default ;
          Express& operator=(Express &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->express_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline Express& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // express Field Functions 
          bool hasExpress() const { return this->express_ != nullptr;};
          void deleteExpress() { this->express_ = nullptr;};
          inline string getExpress() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
          inline Express& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


        protected:
          // The alias of the extended field that indicates the result of basic operations that are performed on aggregation results.
          shared_ptr<string> alias_ {};
          // The extended field that indicates the result of basic operations that are performed on aggregation results.
          shared_ptr<string> express_ {};
        };

        virtual bool empty() const override { return this->express_ == nullptr
        && this->filter_ == nullptr && this->groupBy_ == nullptr && this->statistics_ == nullptr; };
        // express Field Functions 
        bool hasExpress() const { return this->express_ != nullptr;};
        void deleteExpress() { this->express_ = nullptr;};
        inline const vector<SLSProcessConfig::Express> & getExpress() const { DARABONBA_PTR_GET_CONST(express_, vector<SLSProcessConfig::Express>) };
        inline vector<SLSProcessConfig::Express> getExpress() { DARABONBA_PTR_GET(express_, vector<SLSProcessConfig::Express>) };
        inline SLSProcessConfig& setExpress(const vector<SLSProcessConfig::Express> & express) { DARABONBA_PTR_SET_VALUE(express_, express) };
        inline SLSProcessConfig& setExpress(vector<SLSProcessConfig::Express> && express) { DARABONBA_PTR_SET_RVALUE(express_, express) };


        // filter Field Functions 
        bool hasFilter() const { return this->filter_ != nullptr;};
        void deleteFilter() { this->filter_ = nullptr;};
        inline const SLSProcessConfig::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, SLSProcessConfig::Filter) };
        inline SLSProcessConfig::Filter getFilter() { DARABONBA_PTR_GET(filter_, SLSProcessConfig::Filter) };
        inline SLSProcessConfig& setFilter(const SLSProcessConfig::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
        inline SLSProcessConfig& setFilter(SLSProcessConfig::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


        // groupBy Field Functions 
        bool hasGroupBy() const { return this->groupBy_ != nullptr;};
        void deleteGroupBy() { this->groupBy_ = nullptr;};
        inline const vector<SLSProcessConfig::GroupBy> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<SLSProcessConfig::GroupBy>) };
        inline vector<SLSProcessConfig::GroupBy> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<SLSProcessConfig::GroupBy>) };
        inline SLSProcessConfig& setGroupBy(const vector<SLSProcessConfig::GroupBy> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
        inline SLSProcessConfig& setGroupBy(vector<SLSProcessConfig::GroupBy> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline const vector<SLSProcessConfig::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<SLSProcessConfig::Statistics>) };
        inline vector<SLSProcessConfig::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<SLSProcessConfig::Statistics>) };
        inline SLSProcessConfig& setStatistics(const vector<SLSProcessConfig::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
        inline SLSProcessConfig& setStatistics(vector<SLSProcessConfig::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


      protected:
        // The extended fields that indicate the results of basic operations that are performed on aggregation results.
        shared_ptr<vector<SLSProcessConfig::Express>> express_ {};
        // The conditions that are used to filter logs imported from Log Service.
        shared_ptr<SLSProcessConfig::Filter> filter_ {};
        // The dimensions based on which data is aggregated. This parameter is equivalent to the GROUP BY clause in SQL.
        shared_ptr<vector<SLSProcessConfig::GroupBy>> groupBy_ {};
        // The methods that are used to aggregate logs imported from Log Service.
        shared_ptr<vector<SLSProcessConfig::Statistics>> statistics_ {};
      };

      class MatchExpress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchExpress& obj) { 
          DARABONBA_PTR_TO_JSON(Function, function_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MatchExpress& obj) { 
          DARABONBA_PTR_FROM_JSON(Function, function_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MatchExpress() = default ;
        MatchExpress(const MatchExpress &) = default ;
        MatchExpress(MatchExpress &&) = default ;
        MatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchExpress() = default ;
        MatchExpress& operator=(const MatchExpress &) = default ;
        MatchExpress& operator=(MatchExpress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline MatchExpress& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MatchExpress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MatchExpress& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The method that is used to match the instance name. Valid values:
        // 
        // *   startWith: starts with a prefix
        // *   endWith: ends with a suffix
        // *   all: matches all
        // *   equals: equals
        // *   contains: contains
        // *   notContains: does not contain
        shared_ptr<string> function_ {};
        // The instance name.
        shared_ptr<string> name_ {};
        // The keyword that corresponds to the instance name.
        shared_ptr<string> value_ {};
      };

      class AttachLabels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachLabels& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AttachLabels& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AttachLabels() = default ;
        AttachLabels(const AttachLabels &) = default ;
        AttachLabels(AttachLabels &&) = default ;
        AttachLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachLabels() = default ;
        AttachLabels& operator=(const AttachLabels &) = default ;
        AttachLabels& operator=(AttachLabels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AttachLabels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AttachLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> name_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->attachLabels_ == nullptr
        && this->collectInterval_ == nullptr && this->collectTargetEndpoint_ == nullptr && this->collectTargetPath_ == nullptr && this->collectTargetType_ == nullptr && this->collectTimout_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->extraInfo_ == nullptr && this->groupId_ == nullptr && this->instances_ == nullptr
        && this->logFilePath_ == nullptr && this->logProcess_ == nullptr && this->logSample_ == nullptr && this->logSplit_ == nullptr && this->matchExpress_ == nullptr
        && this->matchExpressRelation_ == nullptr && this->namespace_ == nullptr && this->networkType_ == nullptr && this->SLSProcess_ == nullptr && this->SLSProcessConfig_ == nullptr
        && this->targetUserId_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->uploadRegion_ == nullptr
        && this->YARMConfig_ == nullptr; };
      // attachLabels Field Functions 
      bool hasAttachLabels() const { return this->attachLabels_ != nullptr;};
      void deleteAttachLabels() { this->attachLabels_ = nullptr;};
      inline const vector<TaskList::AttachLabels> & getAttachLabels() const { DARABONBA_PTR_GET_CONST(attachLabels_, vector<TaskList::AttachLabels>) };
      inline vector<TaskList::AttachLabels> getAttachLabels() { DARABONBA_PTR_GET(attachLabels_, vector<TaskList::AttachLabels>) };
      inline TaskList& setAttachLabels(const vector<TaskList::AttachLabels> & attachLabels) { DARABONBA_PTR_SET_VALUE(attachLabels_, attachLabels) };
      inline TaskList& setAttachLabels(vector<TaskList::AttachLabels> && attachLabels) { DARABONBA_PTR_SET_RVALUE(attachLabels_, attachLabels) };


      // collectInterval Field Functions 
      bool hasCollectInterval() const { return this->collectInterval_ != nullptr;};
      void deleteCollectInterval() { this->collectInterval_ = nullptr;};
      inline int32_t getCollectInterval() const { DARABONBA_PTR_GET_DEFAULT(collectInterval_, 0) };
      inline TaskList& setCollectInterval(int32_t collectInterval) { DARABONBA_PTR_SET_VALUE(collectInterval_, collectInterval) };


      // collectTargetEndpoint Field Functions 
      bool hasCollectTargetEndpoint() const { return this->collectTargetEndpoint_ != nullptr;};
      void deleteCollectTargetEndpoint() { this->collectTargetEndpoint_ = nullptr;};
      inline string getCollectTargetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(collectTargetEndpoint_, "") };
      inline TaskList& setCollectTargetEndpoint(string collectTargetEndpoint) { DARABONBA_PTR_SET_VALUE(collectTargetEndpoint_, collectTargetEndpoint) };


      // collectTargetPath Field Functions 
      bool hasCollectTargetPath() const { return this->collectTargetPath_ != nullptr;};
      void deleteCollectTargetPath() { this->collectTargetPath_ = nullptr;};
      inline string getCollectTargetPath() const { DARABONBA_PTR_GET_DEFAULT(collectTargetPath_, "") };
      inline TaskList& setCollectTargetPath(string collectTargetPath) { DARABONBA_PTR_SET_VALUE(collectTargetPath_, collectTargetPath) };


      // collectTargetType Field Functions 
      bool hasCollectTargetType() const { return this->collectTargetType_ != nullptr;};
      void deleteCollectTargetType() { this->collectTargetType_ = nullptr;};
      inline string getCollectTargetType() const { DARABONBA_PTR_GET_DEFAULT(collectTargetType_, "") };
      inline TaskList& setCollectTargetType(string collectTargetType) { DARABONBA_PTR_SET_VALUE(collectTargetType_, collectTargetType) };


      // collectTimout Field Functions 
      bool hasCollectTimout() const { return this->collectTimout_ != nullptr;};
      void deleteCollectTimout() { this->collectTimout_ = nullptr;};
      inline int32_t getCollectTimout() const { DARABONBA_PTR_GET_DEFAULT(collectTimout_, 0) };
      inline TaskList& setCollectTimout(int32_t collectTimout) { DARABONBA_PTR_SET_VALUE(collectTimout_, collectTimout) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TaskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline TaskList& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline TaskList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
      inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
      inline TaskList& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline TaskList& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // logFilePath Field Functions 
      bool hasLogFilePath() const { return this->logFilePath_ != nullptr;};
      void deleteLogFilePath() { this->logFilePath_ = nullptr;};
      inline string getLogFilePath() const { DARABONBA_PTR_GET_DEFAULT(logFilePath_, "") };
      inline TaskList& setLogFilePath(string logFilePath) { DARABONBA_PTR_SET_VALUE(logFilePath_, logFilePath) };


      // logProcess Field Functions 
      bool hasLogProcess() const { return this->logProcess_ != nullptr;};
      void deleteLogProcess() { this->logProcess_ = nullptr;};
      inline string getLogProcess() const { DARABONBA_PTR_GET_DEFAULT(logProcess_, "") };
      inline TaskList& setLogProcess(string logProcess) { DARABONBA_PTR_SET_VALUE(logProcess_, logProcess) };


      // logSample Field Functions 
      bool hasLogSample() const { return this->logSample_ != nullptr;};
      void deleteLogSample() { this->logSample_ = nullptr;};
      inline string getLogSample() const { DARABONBA_PTR_GET_DEFAULT(logSample_, "") };
      inline TaskList& setLogSample(string logSample) { DARABONBA_PTR_SET_VALUE(logSample_, logSample) };


      // logSplit Field Functions 
      bool hasLogSplit() const { return this->logSplit_ != nullptr;};
      void deleteLogSplit() { this->logSplit_ = nullptr;};
      inline string getLogSplit() const { DARABONBA_PTR_GET_DEFAULT(logSplit_, "") };
      inline TaskList& setLogSplit(string logSplit) { DARABONBA_PTR_SET_VALUE(logSplit_, logSplit) };


      // matchExpress Field Functions 
      bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
      void deleteMatchExpress() { this->matchExpress_ = nullptr;};
      inline const vector<TaskList::MatchExpress> & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<TaskList::MatchExpress>) };
      inline vector<TaskList::MatchExpress> getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<TaskList::MatchExpress>) };
      inline TaskList& setMatchExpress(const vector<TaskList::MatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
      inline TaskList& setMatchExpress(vector<TaskList::MatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


      // matchExpressRelation Field Functions 
      bool hasMatchExpressRelation() const { return this->matchExpressRelation_ != nullptr;};
      void deleteMatchExpressRelation() { this->matchExpressRelation_ = nullptr;};
      inline string getMatchExpressRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressRelation_, "") };
      inline TaskList& setMatchExpressRelation(string matchExpressRelation) { DARABONBA_PTR_SET_VALUE(matchExpressRelation_, matchExpressRelation) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline TaskList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // networkType Field Functions 
      bool hasNetworkType() const { return this->networkType_ != nullptr;};
      void deleteNetworkType() { this->networkType_ = nullptr;};
      inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
      inline TaskList& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      // SLSProcess Field Functions 
      bool hasSLSProcess() const { return this->SLSProcess_ != nullptr;};
      void deleteSLSProcess() { this->SLSProcess_ = nullptr;};
      inline string getSLSProcess() const { DARABONBA_PTR_GET_DEFAULT(SLSProcess_, "") };
      inline TaskList& setSLSProcess(string SLSProcess) { DARABONBA_PTR_SET_VALUE(SLSProcess_, SLSProcess) };


      // SLSProcessConfig Field Functions 
      bool hasSLSProcessConfig() const { return this->SLSProcessConfig_ != nullptr;};
      void deleteSLSProcessConfig() { this->SLSProcessConfig_ = nullptr;};
      inline const TaskList::SLSProcessConfig & getSLSProcessConfig() const { DARABONBA_PTR_GET_CONST(SLSProcessConfig_, TaskList::SLSProcessConfig) };
      inline TaskList::SLSProcessConfig getSLSProcessConfig() { DARABONBA_PTR_GET(SLSProcessConfig_, TaskList::SLSProcessConfig) };
      inline TaskList& setSLSProcessConfig(const TaskList::SLSProcessConfig & sLSProcessConfig) { DARABONBA_PTR_SET_VALUE(SLSProcessConfig_, sLSProcessConfig) };
      inline TaskList& setSLSProcessConfig(TaskList::SLSProcessConfig && sLSProcessConfig) { DARABONBA_PTR_SET_RVALUE(SLSProcessConfig_, sLSProcessConfig) };


      // targetUserId Field Functions 
      bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
      void deleteTargetUserId() { this->targetUserId_ = nullptr;};
      inline string getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
      inline TaskList& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // uploadRegion Field Functions 
      bool hasUploadRegion() const { return this->uploadRegion_ != nullptr;};
      void deleteUploadRegion() { this->uploadRegion_ = nullptr;};
      inline string getUploadRegion() const { DARABONBA_PTR_GET_DEFAULT(uploadRegion_, "") };
      inline TaskList& setUploadRegion(string uploadRegion) { DARABONBA_PTR_SET_VALUE(uploadRegion_, uploadRegion) };


      // YARMConfig Field Functions 
      bool hasYARMConfig() const { return this->YARMConfig_ != nullptr;};
      void deleteYARMConfig() { this->YARMConfig_ = nullptr;};
      inline string getYARMConfig() const { DARABONBA_PTR_GET_DEFAULT(YARMConfig_, "") };
      inline TaskList& setYARMConfig(string YARMConfig) { DARABONBA_PTR_SET_VALUE(YARMConfig_, YARMConfig) };


    protected:
      // The tags of the metric import task.
      shared_ptr<vector<TaskList::AttachLabels>> attachLabels_ {};
      // The interval at which the CloudMonitor agent collects host monitoring data. Valid values:
      // 
      // *   15
      // *   30
      // *   60
      // 
      // Unit: seconds.
      shared_ptr<int32_t> collectInterval_ {};
      // The URL of the destination from which the CloudMonitor agent collects host monitoring data.
      shared_ptr<string> collectTargetEndpoint_ {};
      // The relative path from which the CloudMonitor agent collects monitoring data.
      shared_ptr<string> collectTargetPath_ {};
      // The type of the monitoring data. Valid values: Spring, Tomcat, Nginx, Tengine, JVM, Redis, and MySQL.
      shared_ptr<string> collectTargetType_ {};
      // The timeout period during which the CloudMonitor agent collects host monitoring data. Valid values:
      // 
      // *   0
      // *   15
      // *   30
      // *   60
      // 
      // Unit: seconds.
      shared_ptr<int32_t> collectTimout_ {};
      // The timestamp when the metric import task was created.
      // 
      // Unit: milliseconds.
      shared_ptr<string> createTime_ {};
      // The description of the metric import task.
      shared_ptr<string> description_ {};
      // The additional information of the instance.
      shared_ptr<string> extraInfo_ {};
      // The ID of the application group.
      shared_ptr<string> groupId_ {};
      // The instances where monitoring data is collected in batches.
      shared_ptr<vector<string>> instances_ {};
      shared_ptr<string> logFilePath_ {};
      // The method that is used to aggregate on-premises log data.
      shared_ptr<string> logProcess_ {};
      // The sample on-premises log.
      shared_ptr<string> logSample_ {};
      // The result that is returned after on-premises log data is split based on the specified matching mode.
      // 
      // > The matching modes of on-premises log data include full regex mode, delimiter mode, and JSON mode.
      shared_ptr<string> logSplit_ {};
      // The conditions that are used to match the instances in the application group.
      shared_ptr<vector<TaskList::MatchExpress>> matchExpress_ {};
      // The relationship between the conditions that are used to filter metric import tasks. Valid values:
      // 
      // *   or
      // *   and
      shared_ptr<string> matchExpressRelation_ {};
      // The namespace to which the host belongs.
      shared_ptr<string> namespace_ {};
      // The network type of the host. Valid values:
      // 
      // *   `vpc`
      // *   `Internet`
      shared_ptr<string> networkType_ {};
      // The configurations of the logs that are imported from Log Service.
      shared_ptr<string> SLSProcess_ {};
      // The configurations of the logs that are imported from Log Service.
      // 
      // > This parameter is returned only if the `TaskType` parameter is set to `aliyun_sls`.
      shared_ptr<TaskList::SLSProcessConfig> SLSProcessConfig_ {};
      // The ID of the member account.
      // 
      // > This parameter is displayed only when you call this operation by using a management account.
      shared_ptr<string> targetUserId_ {};
      // The ID of the metric import task.
      shared_ptr<string> taskId_ {};
      // The name of the metric import task.
      shared_ptr<string> taskName_ {};
      // The type of the metric import task. Valid values:
      // 
      // *   aliyun_fc: metric import tasks for Alibaba Cloud services
      // *   aliyun_sls: metrics for logs imported from Log Service
      shared_ptr<string> taskType_ {};
      // The region where the host resides.
      shared_ptr<string> uploadRegion_ {};
      // The configuration file of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring.
      // 
      // *   namespace: the namespace of the Alibaba Cloud service.
      // *   metric_list: the metrics of the Alibaba Cloud service.
      shared_ptr<string> YARMConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->taskList_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorTaskListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorTaskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridMonitorTaskListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridMonitorTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorTaskListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeHybridMonitorTaskListResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeHybridMonitorTaskListResponseBody::TaskList>) };
    inline vector<DescribeHybridMonitorTaskListResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeHybridMonitorTaskListResponseBody::TaskList>) };
    inline DescribeHybridMonitorTaskListResponseBody& setTaskList(const vector<DescribeHybridMonitorTaskListResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeHybridMonitorTaskListResponseBody& setTaskList(vector<DescribeHybridMonitorTaskListResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeHybridMonitorTaskListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    // 
    // *   If the request was successful, the value `successful` is returned.
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The metric import tasks.
    shared_ptr<vector<DescribeHybridMonitorTaskListResponseBody::TaskList>> taskList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
