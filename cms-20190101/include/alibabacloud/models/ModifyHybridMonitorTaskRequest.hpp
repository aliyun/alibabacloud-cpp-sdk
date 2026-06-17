// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUEST_HPP_
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
  class ModifyHybridMonitorTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_TO_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachLabels, attachLabels_);
      DARABONBA_PTR_FROM_JSON(CollectInterval, collectInterval_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SLSProcessConfig, SLSProcessConfig_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ModifyHybridMonitorTaskRequest() = default ;
    ModifyHybridMonitorTaskRequest(const ModifyHybridMonitorTaskRequest &) = default ;
    ModifyHybridMonitorTaskRequest(ModifyHybridMonitorTaskRequest &&) = default ;
    ModifyHybridMonitorTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequest() = default ;
    ModifyHybridMonitorTaskRequest& operator=(const ModifyHybridMonitorTaskRequest &) = default ;
    ModifyHybridMonitorTaskRequest& operator=(ModifyHybridMonitorTaskRequest &&) = default ;
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
        // The alias of the SLS log statistics result.
        shared_ptr<string> alias_ {};
        // The statistical method used to aggregate log data within a statistical period. Valid values:
        // - count: counts the number of occurrences.
        // - sum: calculates the sum.
        // - avg: calculates the average.
        // - max: returns the maximum value.
        // - min: returns the minimum value.
        // - value: samples within the period.
        // - countps: calculates the per-second average of the count for the specified field within the statistical period.
        // - sumps: calculates the per-second average of the sum for the specified field within the statistical period.
        // - distinct: calculates the number of occurrences of the specified field after deduplication within the statistical period.
        // - distribution: calculates the number of occurrences of field values within a specified range.
        // - percentile: calculates the distribution value of field values, such as P50.
        shared_ptr<string> function_ {};
        // The statistical value of the SLS log.
        // 
        // - If `Function` is set to `distribution`, this parameter specifies the lower limit of the statistical range. For example, to count the number of 2XX HTTP status codes, set this parameter to 200.
        // 
        // - If `Function` is set to `percentile`, this parameter specifies the percentile of the statistical distribution. For example, 0.5 indicates P50.
        shared_ptr<string> parameter1_ {};
        // The statistical value of the SLS log.
        // 
        // > This parameter is required only when `Function` is set to `distribution`. It specifies the upper limit of the statistical range. For example, to count the number of 2XX HTTP status codes, set this parameter to 299.
        shared_ptr<string> parameter2_ {};
        // The name of the parameter for SLS log statistics.
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
        // The alias of the SLS log statistics result.
        shared_ptr<string> alias_ {};
        // The name of the parameter for SLS log statistics.
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
          // The method used to filter parameter values in the SLS log. Valid values:
          // - `contain`: contains.
          // - `notContain`: does not contain.
          // - `>`: greater than.
          // - `<`: less than.
          // - `=`: equal to.
          // - `!=`: not equal to.
          // - `>=`: greater than or equal to.
          // - `<=`: less than or equal to.
          shared_ptr<string> operator_ {};
          // The name of the parameter to filter in the SLS log.
          shared_ptr<string> SLSKeyName_ {};
          // The filter value of the parameter in the SLS log.
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
        // None.
        shared_ptr<vector<Filter::Filters>> filters_ {};
        // The relationship between multiple filter conditions. Valid values:
        // 
        // - and (default): Logs are processed only when all filter conditions are met.
        // - or: Logs are processed when any filter condition is met.
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
        // The alias of the arithmetic operation result of the extended field in the SLS log statistics result.
        shared_ptr<string> alias_ {};
        // The arithmetic operation result of the extended field in the SLS log statistics result.
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
      // The arithmetic operation result of the extended field in the SLS log statistics result.
      shared_ptr<vector<SLSProcessConfig::Express>> express_ {};
      // The filter conditions for parameters in the SLS log.
      shared_ptr<SLSProcessConfig::Filter> filter_ {};
      // Aggregates data by spatial dimension, which is equivalent to GROUP BY in SQL.
      shared_ptr<vector<SLSProcessConfig::GroupBy>> groupBy_ {};
      // None.
      shared_ptr<vector<SLSProcessConfig::Statistics>> statistics_ {};
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
      // The tag key of the metric.
      shared_ptr<string> name_ {};
      // The tag value of the metric.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->attachLabels_ == nullptr
        && this->collectInterval_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr && this->SLSProcessConfig_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr; };
    // attachLabels Field Functions 
    bool hasAttachLabels() const { return this->attachLabels_ != nullptr;};
    void deleteAttachLabels() { this->attachLabels_ = nullptr;};
    inline const vector<ModifyHybridMonitorTaskRequest::AttachLabels> & getAttachLabels() const { DARABONBA_PTR_GET_CONST(attachLabels_, vector<ModifyHybridMonitorTaskRequest::AttachLabels>) };
    inline vector<ModifyHybridMonitorTaskRequest::AttachLabels> getAttachLabels() { DARABONBA_PTR_GET(attachLabels_, vector<ModifyHybridMonitorTaskRequest::AttachLabels>) };
    inline ModifyHybridMonitorTaskRequest& setAttachLabels(const vector<ModifyHybridMonitorTaskRequest::AttachLabels> & attachLabels) { DARABONBA_PTR_SET_VALUE(attachLabels_, attachLabels) };
    inline ModifyHybridMonitorTaskRequest& setAttachLabels(vector<ModifyHybridMonitorTaskRequest::AttachLabels> && attachLabels) { DARABONBA_PTR_SET_RVALUE(attachLabels_, attachLabels) };


    // collectInterval Field Functions 
    bool hasCollectInterval() const { return this->collectInterval_ != nullptr;};
    void deleteCollectInterval() { this->collectInterval_ = nullptr;};
    inline string getCollectInterval() const { DARABONBA_PTR_GET_DEFAULT(collectInterval_, "") };
    inline ModifyHybridMonitorTaskRequest& setCollectInterval(string collectInterval) { DARABONBA_PTR_SET_VALUE(collectInterval_, collectInterval) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyHybridMonitorTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridMonitorTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SLSProcessConfig Field Functions 
    bool hasSLSProcessConfig() const { return this->SLSProcessConfig_ != nullptr;};
    void deleteSLSProcessConfig() { this->SLSProcessConfig_ = nullptr;};
    inline const ModifyHybridMonitorTaskRequest::SLSProcessConfig & getSLSProcessConfig() const { DARABONBA_PTR_GET_CONST(SLSProcessConfig_, ModifyHybridMonitorTaskRequest::SLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequest::SLSProcessConfig getSLSProcessConfig() { DARABONBA_PTR_GET(SLSProcessConfig_, ModifyHybridMonitorTaskRequest::SLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequest& setSLSProcessConfig(const ModifyHybridMonitorTaskRequest::SLSProcessConfig & sLSProcessConfig) { DARABONBA_PTR_SET_VALUE(SLSProcessConfig_, sLSProcessConfig) };
    inline ModifyHybridMonitorTaskRequest& setSLSProcessConfig(ModifyHybridMonitorTaskRequest::SLSProcessConfig && sLSProcessConfig) { DARABONBA_PTR_SET_RVALUE(SLSProcessConfig_, sLSProcessConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyHybridMonitorTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ModifyHybridMonitorTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The tags of the metric.
    shared_ptr<vector<ModifyHybridMonitorTaskRequest::AttachLabels>> attachLabels_ {};
    // The collection interval of the metric. Valid values:
    // 
    // - 15
    // 
    // - 60
    // 
    // Unit: seconds.
    shared_ptr<string> collectInterval_ {};
    // The description of the monitoring task.
    shared_ptr<string> description_ {};
    shared_ptr<string> regionId_ {};
    // The SLS log configuration.
    shared_ptr<ModifyHybridMonitorTaskRequest::SLSProcessConfig> SLSProcessConfig_ {};
    // The monitoring task ID.
    // 
    // For information about how to obtain the monitoring task ID, see [DescribeHybridMonitorTaskList](https://help.aliyun.com/document_detail/428624.html).
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The monitoring task name.
    // 
    // For information about how to obtain the monitoring task ID, see [DescribeHybridMonitorTaskList](https://help.aliyun.com/document_detail/428624.html).
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
