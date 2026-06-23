// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODY_HPP_
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
  class GetDIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDIJobResponseBody() = default ;
    GetDIJobResponseBody(const GetDIJobResponseBody &) = default ;
    GetDIJobResponseBody(GetDIJobResponseBody &&) = default ;
    GetDIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBody() = default ;
    GetDIJobResponseBody& operator=(const GetDIJobResponseBody &) = default ;
    GetDIJobResponseBody& operator=(GetDIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
        DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
        DARABONBA_PTR_TO_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
        DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
        DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
        DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationDataSourceSettings, destinationDataSourceSettings_);
        DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
        DARABONBA_PTR_FROM_JSON(SourceDataSourceSettings, sourceDataSourceSettings_);
        DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
        DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
        DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TransformationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransformationRules& obj) { 
          DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_TO_JSON(RuleExpression, ruleExpression_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
        };
        friend void from_json(const Darabonba::Json& j, TransformationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_FROM_JSON(RuleExpression, ruleExpression_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
        };
        TransformationRules() = default ;
        TransformationRules(const TransformationRules &) = default ;
        TransformationRules(TransformationRules &&) = default ;
        TransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransformationRules() = default ;
        TransformationRules& operator=(const TransformationRules &) = default ;
        TransformationRules& operator=(TransformationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && this->ruleExpression_ == nullptr && this->ruleName_ == nullptr && this->ruleTargetType_ == nullptr; };
        // ruleActionType Field Functions 
        bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
        void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
        inline string getRuleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
        inline TransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


        // ruleExpression Field Functions 
        bool hasRuleExpression() const { return this->ruleExpression_ != nullptr;};
        void deleteRuleExpression() { this->ruleExpression_ = nullptr;};
        inline string getRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(ruleExpression_, "") };
        inline TransformationRules& setRuleExpression(string ruleExpression) { DARABONBA_PTR_SET_VALUE(ruleExpression_, ruleExpression) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline TransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleTargetType Field Functions 
        bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
        void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
        inline string getRuleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
        inline TransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


      protected:
        // The action type. Valid values:
        // 
        // - `DefinePrimaryKey`
        // 
        // - `Rename`
        // 
        // - `AddColumn`
        // 
        // - `HandleDml`
        // 
        // - `DefineIncrementalCondition`
        // 
        // - `DefineCycleScheduleSettings`
        // 
        // - `DefinePartitionKey`
        shared_ptr<string> ruleActionType_ {};
        // The rule expression, in JSON string format.
        // 
        // 1. Rename rule (`Rename`)
        // 
        // - Example: `{"expression":"${srcDatasourceName}_${srcDatabaseName}_0922"}`
        // 
        // - `expression`: The expression for the rename transformation rule. The expression supports the following variables: `${srcDatasourceName}` (source data source name), `${srcDatabaseName}` (source database name), and `${srcTableName}` (source table name).
        // 
        // 2. Add column rule (`AddColumn`)
        // 
        // - Example: `{"columns":[{"columnName":"my_add_column","columnValueType":"Constant","columnValue":"123"}]}`
        // 
        // - If you do not specify this parameter, no columns are added or copied by default.
        // 
        // - `columnName`: The name of the column to add.
        // 
        // - `columnValueType`: The value type of the added column. Valid values: `Constant` and `Variable`.
        // 
        // - `columnValue`: The value of the added column. If `columnValueType` is `Constant`, the value is a custom string constant. If `columnValueType` is `Variable`, the value is a built-in variable. Valid built-in variables: `EXECUTE_TIME` (execution time, Long), `DB_NAME_SRC` (source database name, String), `DATASOURCE_NAME_SRC` (source data source name, String), `TABLE_NAME_SRC` (source table name, String), `DB_NAME_DEST` (destination database name, String), `DATASOURCE_NAME_DEST` (destination data source name, String), `TABLE_NAME_DEST` (destination table name, String), and `DB_NAME_SRC_TRANSED` (converted database name, String).
        // 
        // 3. Define primary key rule (`DefinePrimaryKey`)
        // 
        // - Example: `{"columns":["ukcolumn1","ukcolumn2"]}`
        // 
        // - By default, the primary key columns from the source table are used.
        // 
        // - If the destination table already exists, the data integration system does not modify the table schema. If the specified primary key columns are not in the destination table, the job fails to start.
        // 
        // - If the destination table is automatically created, the data integration system automatically creates the table schema that includes the defined primary key columns. If the specified primary key columns are not in the destination table, the job fails to start.
        // 
        // 4. DML handling rule (`HandleDml`)
        // 
        // - Example: `{"dmlPolicies":[{"dmlType":"Delete","dmlAction":"Filter","filterCondition":"id > 1"}]}`
        // 
        // - If you do not specify this parameter, the default value `Normal` is used for Insert, Update, and Delete operations.
        // 
        // - `dmlType`: The DML operation type. Valid values: `Insert`, `Update`, and `Delete`.
        // 
        // - `dmlAction`: The DML handling policy. Valid values: `Normal` (process normally), `Ignore` (ignore), `Filter` (process conditionally, used when `dmlType` is `Update` or `Delete`), and `LogicalDelete` (logically delete).
        // 
        // - `filterCondition`: The DML filter condition. This parameter is used when `dmlAction` is `Filter`.
        // 
        // 5. Define incremental condition rule (`DefineIncrementalCondition`)
        // 
        // - Example: `{"where":"id > 0"}`
        // 
        // - Specifies the filter condition for incremental synchronization.
        // 
        // 6. Define cycle schedule settings rule (`DefineCycleScheduleSettings`)
        // 
        // - Example: `{"cronExpress":" * * * * * *", "cycleType":"1"}`
        // 
        // - Specifies the scheduling parameters for a periodic job.
        // 
        // 7. Define partition key rule (`DefinePartitionKey`)
        // 
        // - Example: `{"columns":["id"]}`
        // 
        // - Specifies the partition key.
        shared_ptr<string> ruleExpression_ {};
        // The name of the rule. The rule name must be unique for a specific action type (`RuleActionType`) and target type (`RuleTargetType`).
        shared_ptr<string> ruleName_ {};
        // The target object type of the action. Valid values:
        // 
        // - `Table`
        // 
        // - `Schema`
        // 
        // - `Database`
        shared_ptr<string> ruleTargetType_ {};
      };

      class TableMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableMappings& obj) { 
          DARABONBA_PTR_TO_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
          DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
        };
        friend void from_json(const Darabonba::Json& j, TableMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceObjectSelectionRules, sourceObjectSelectionRules_);
          DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
        };
        TableMappings() = default ;
        TableMappings(const TableMappings &) = default ;
        TableMappings(TableMappings &&) = default ;
        TableMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableMappings() = default ;
        TableMappings& operator=(const TableMappings &) = default ;
        TableMappings& operator=(TableMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TransformationRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TransformationRules& obj) { 
            DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
          };
          friend void from_json(const Darabonba::Json& j, TransformationRules& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
          };
          TransformationRules() = default ;
          TransformationRules(const TransformationRules &) = default ;
          TransformationRules(TransformationRules &&) = default ;
          TransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TransformationRules() = default ;
          TransformationRules& operator=(const TransformationRules &) = default ;
          TransformationRules& operator=(TransformationRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && this->ruleName_ == nullptr && this->ruleTargetType_ == nullptr; };
          // ruleActionType Field Functions 
          bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
          void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
          inline string getRuleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
          inline TransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline TransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // ruleTargetType Field Functions 
          bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
          void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
          inline string getRuleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
          inline TransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


        protected:
          // The action type. Valid values:
          // 
          // - `DefinePrimaryKey`
          // 
          // - `Rename`
          // 
          // - `AddColumn`
          // 
          // - `HandleDml`
          shared_ptr<string> ruleActionType_ {};
          // The name of the rule. The rule name must be unique for a specific action type (`RuleActionType`) and target type (`RuleTargetType`).
          shared_ptr<string> ruleName_ {};
          // The target object type of the action. Valid values:
          // 
          // - `Table`
          // 
          // - `Schema`
          // 
          // - `Database`
          shared_ptr<string> ruleTargetType_ {};
        };

        class SourceObjectSelectionRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceObjectSelectionRules& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(Expression, expression_);
            DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
            DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          };
          friend void from_json(const Darabonba::Json& j, SourceObjectSelectionRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(Expression, expression_);
            DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
            DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          };
          SourceObjectSelectionRules() = default ;
          SourceObjectSelectionRules(const SourceObjectSelectionRules &) = default ;
          SourceObjectSelectionRules(SourceObjectSelectionRules &&) = default ;
          SourceObjectSelectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceObjectSelectionRules() = default ;
          SourceObjectSelectionRules& operator=(const SourceObjectSelectionRules &) = default ;
          SourceObjectSelectionRules& operator=(SourceObjectSelectionRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->expression_ == nullptr && this->expressionType_ == nullptr && this->objectType_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline SourceObjectSelectionRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // expression Field Functions 
          bool hasExpression() const { return this->expression_ != nullptr;};
          void deleteExpression() { this->expression_ = nullptr;};
          inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
          inline SourceObjectSelectionRules& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


          // expressionType Field Functions 
          bool hasExpressionType() const { return this->expressionType_ != nullptr;};
          void deleteExpressionType() { this->expressionType_ = nullptr;};
          inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
          inline SourceObjectSelectionRules& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


          // objectType Field Functions 
          bool hasObjectType() const { return this->objectType_ != nullptr;};
          void deleteObjectType() { this->objectType_ = nullptr;};
          inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
          inline SourceObjectSelectionRules& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        protected:
          // The selection action. Valid values: `Include` and `Exclude`.
          shared_ptr<string> action_ {};
          // The expression.
          shared_ptr<string> expression_ {};
          // The expression type. Valid values: `Exact` and `Regex`.
          shared_ptr<string> expressionType_ {};
          // The object type. Valid values:
          // 
          // - `Table`
          // 
          // - `Schema`
          // 
          // - `Database`
          shared_ptr<string> objectType_ {};
        };

        virtual bool empty() const override { return this->sourceObjectSelectionRules_ == nullptr
        && this->transformationRules_ == nullptr; };
        // sourceObjectSelectionRules Field Functions 
        bool hasSourceObjectSelectionRules() const { return this->sourceObjectSelectionRules_ != nullptr;};
        void deleteSourceObjectSelectionRules() { this->sourceObjectSelectionRules_ = nullptr;};
        inline const vector<TableMappings::SourceObjectSelectionRules> & getSourceObjectSelectionRules() const { DARABONBA_PTR_GET_CONST(sourceObjectSelectionRules_, vector<TableMappings::SourceObjectSelectionRules>) };
        inline vector<TableMappings::SourceObjectSelectionRules> getSourceObjectSelectionRules() { DARABONBA_PTR_GET(sourceObjectSelectionRules_, vector<TableMappings::SourceObjectSelectionRules>) };
        inline TableMappings& setSourceObjectSelectionRules(const vector<TableMappings::SourceObjectSelectionRules> & sourceObjectSelectionRules) { DARABONBA_PTR_SET_VALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };
        inline TableMappings& setSourceObjectSelectionRules(vector<TableMappings::SourceObjectSelectionRules> && sourceObjectSelectionRules) { DARABONBA_PTR_SET_RVALUE(sourceObjectSelectionRules_, sourceObjectSelectionRules) };


        // transformationRules Field Functions 
        bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
        void deleteTransformationRules() { this->transformationRules_ = nullptr;};
        inline const vector<TableMappings::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<TableMappings::TransformationRules>) };
        inline vector<TableMappings::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<TableMappings::TransformationRules>) };
        inline TableMappings& setTransformationRules(const vector<TableMappings::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
        inline TableMappings& setTransformationRules(vector<TableMappings::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


      protected:
        // Each rule selects a set of source objects to be synchronized. A combination of multiple rules selects one table.
        shared_ptr<vector<TableMappings::SourceObjectSelectionRules>> sourceObjectSelectionRules_ {};
        // An array of object transformation rule definitions.
        shared_ptr<vector<TableMappings::TransformationRules>> transformationRules_ {};
      };

      class SourceDataSourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceDataSourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_TO_JSON(DataSourceProperties, dataSourceProperties_);
        };
        friend void from_json(const Darabonba::Json& j, SourceDataSourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
          DARABONBA_PTR_FROM_JSON(DataSourceProperties, dataSourceProperties_);
        };
        SourceDataSourceSettings() = default ;
        SourceDataSourceSettings(const SourceDataSourceSettings &) = default ;
        SourceDataSourceSettings(SourceDataSourceSettings &&) = default ;
        SourceDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceDataSourceSettings() = default ;
        SourceDataSourceSettings& operator=(const SourceDataSourceSettings &) = default ;
        SourceDataSourceSettings& operator=(SourceDataSourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataSourceProperties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSourceProperties& obj) { 
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(Timezone, timezone_);
          };
          friend void from_json(const Darabonba::Json& j, DataSourceProperties& obj) { 
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
          };
          DataSourceProperties() = default ;
          DataSourceProperties(const DataSourceProperties &) = default ;
          DataSourceProperties(DataSourceProperties &&) = default ;
          DataSourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSourceProperties() = default ;
          DataSourceProperties& operator=(const DataSourceProperties &) = default ;
          DataSourceProperties& operator=(DataSourceProperties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->encoding_ == nullptr
        && this->timezone_ == nullptr; };
          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline DataSourceProperties& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // timezone Field Functions 
          bool hasTimezone() const { return this->timezone_ != nullptr;};
          void deleteTimezone() { this->timezone_ = nullptr;};
          inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
          inline DataSourceProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        protected:
          // The encoding of the database.
          shared_ptr<string> encoding_ {};
          // The time zone.
          shared_ptr<string> timezone_ {};
        };

        virtual bool empty() const override { return this->dataSourceName_ == nullptr
        && this->dataSourceProperties_ == nullptr; };
        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline SourceDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // dataSourceProperties Field Functions 
        bool hasDataSourceProperties() const { return this->dataSourceProperties_ != nullptr;};
        void deleteDataSourceProperties() { this->dataSourceProperties_ = nullptr;};
        inline const SourceDataSourceSettings::DataSourceProperties & getDataSourceProperties() const { DARABONBA_PTR_GET_CONST(dataSourceProperties_, SourceDataSourceSettings::DataSourceProperties) };
        inline SourceDataSourceSettings::DataSourceProperties getDataSourceProperties() { DARABONBA_PTR_GET(dataSourceProperties_, SourceDataSourceSettings::DataSourceProperties) };
        inline SourceDataSourceSettings& setDataSourceProperties(const SourceDataSourceSettings::DataSourceProperties & dataSourceProperties) { DARABONBA_PTR_SET_VALUE(dataSourceProperties_, dataSourceProperties) };
        inline SourceDataSourceSettings& setDataSourceProperties(SourceDataSourceSettings::DataSourceProperties && dataSourceProperties) { DARABONBA_PTR_SET_RVALUE(dataSourceProperties_, dataSourceProperties) };


      protected:
        // The name of the data source.
        shared_ptr<string> dataSourceName_ {};
        // The properties of the data source.
        shared_ptr<SourceDataSourceSettings::DataSourceProperties> dataSourceProperties_ {};
      };

      class ResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
          DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
          DARABONBA_PTR_TO_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
          DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
          DARABONBA_PTR_FROM_JSON(ScheduleResourceSettings, scheduleResourceSettings_);
        };
        ResourceSettings() = default ;
        ResourceSettings(const ResourceSettings &) = default ;
        ResourceSettings(ResourceSettings &&) = default ;
        ResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceSettings() = default ;
        ResourceSettings& operator=(const ResourceSettings &) = default ;
        ResourceSettings& operator=(ResourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleResourceSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleResourceSettings& obj) { 
            DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleResourceSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          ScheduleResourceSettings() = default ;
          ScheduleResourceSettings(const ScheduleResourceSettings &) = default ;
          ScheduleResourceSettings(ScheduleResourceSettings &&) = default ;
          ScheduleResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleResourceSettings() = default ;
          ScheduleResourceSettings& operator=(const ScheduleResourceSettings &) = default ;
          ScheduleResourceSettings& operator=(ScheduleResourceSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
          // requestedCu Field Functions 
          bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
          void deleteRequestedCu() { this->requestedCu_ = nullptr;};
          inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
          inline ScheduleResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


          // resourceGroupIdentifier Field Functions 
          bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
          void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
          inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
          inline ScheduleResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


        protected:
          // The number of CUs from the scheduling resource group for the offline scheduling job.
          shared_ptr<double> requestedCu_ {};
          // The name of the scheduling resource group used by the offline scheduling job.
          shared_ptr<string> resourceGroupIdentifier_ {};
        };

        class RealtimeResourceSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RealtimeResourceSettings& obj) { 
            DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          friend void from_json(const Darabonba::Json& j, RealtimeResourceSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          RealtimeResourceSettings() = default ;
          RealtimeResourceSettings(const RealtimeResourceSettings &) = default ;
          RealtimeResourceSettings(RealtimeResourceSettings &&) = default ;
          RealtimeResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RealtimeResourceSettings() = default ;
          RealtimeResourceSettings& operator=(const RealtimeResourceSettings &) = default ;
          RealtimeResourceSettings& operator=(RealtimeResourceSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
          // requestedCu Field Functions 
          bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
          void deleteRequestedCu() { this->requestedCu_ = nullptr;};
          inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
          inline RealtimeResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


          // resourceGroupIdentifier Field Functions 
          bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
          void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
          inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
          inline RealtimeResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


        protected:
          // The number of CUs from the data integration resource group for the real-time synchronization job.
          shared_ptr<double> requestedCu_ {};
          // The name of the data integration resource group used by the real-time job.
          shared_ptr<string> resourceGroupIdentifier_ {};
        };

        class OfflineResourceSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OfflineResourceSettings& obj) { 
            DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          friend void from_json(const Darabonba::Json& j, OfflineResourceSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
          };
          OfflineResourceSettings() = default ;
          OfflineResourceSettings(const OfflineResourceSettings &) = default ;
          OfflineResourceSettings(OfflineResourceSettings &&) = default ;
          OfflineResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OfflineResourceSettings() = default ;
          OfflineResourceSettings& operator=(const OfflineResourceSettings &) = default ;
          OfflineResourceSettings& operator=(OfflineResourceSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->requestedCu_ == nullptr
        && this->resourceGroupIdentifier_ == nullptr; };
          // requestedCu Field Functions 
          bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
          void deleteRequestedCu() { this->requestedCu_ = nullptr;};
          inline double getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
          inline OfflineResourceSettings& setRequestedCu(double requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


          // resourceGroupIdentifier Field Functions 
          bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
          void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
          inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
          inline OfflineResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


        protected:
          // The number of CUs from the data integration resource group for the offline synchronization job.
          shared_ptr<double> requestedCu_ {};
          // The name of the data integration resource group used by the offline synchronization job.
          shared_ptr<string> resourceGroupIdentifier_ {};
        };

        virtual bool empty() const override { return this->offlineResourceSettings_ == nullptr
        && this->realtimeResourceSettings_ == nullptr && this->scheduleResourceSettings_ == nullptr; };
        // offlineResourceSettings Field Functions 
        bool hasOfflineResourceSettings() const { return this->offlineResourceSettings_ != nullptr;};
        void deleteOfflineResourceSettings() { this->offlineResourceSettings_ = nullptr;};
        inline const ResourceSettings::OfflineResourceSettings & getOfflineResourceSettings() const { DARABONBA_PTR_GET_CONST(offlineResourceSettings_, ResourceSettings::OfflineResourceSettings) };
        inline ResourceSettings::OfflineResourceSettings getOfflineResourceSettings() { DARABONBA_PTR_GET(offlineResourceSettings_, ResourceSettings::OfflineResourceSettings) };
        inline ResourceSettings& setOfflineResourceSettings(const ResourceSettings::OfflineResourceSettings & offlineResourceSettings) { DARABONBA_PTR_SET_VALUE(offlineResourceSettings_, offlineResourceSettings) };
        inline ResourceSettings& setOfflineResourceSettings(ResourceSettings::OfflineResourceSettings && offlineResourceSettings) { DARABONBA_PTR_SET_RVALUE(offlineResourceSettings_, offlineResourceSettings) };


        // realtimeResourceSettings Field Functions 
        bool hasRealtimeResourceSettings() const { return this->realtimeResourceSettings_ != nullptr;};
        void deleteRealtimeResourceSettings() { this->realtimeResourceSettings_ = nullptr;};
        inline const ResourceSettings::RealtimeResourceSettings & getRealtimeResourceSettings() const { DARABONBA_PTR_GET_CONST(realtimeResourceSettings_, ResourceSettings::RealtimeResourceSettings) };
        inline ResourceSettings::RealtimeResourceSettings getRealtimeResourceSettings() { DARABONBA_PTR_GET(realtimeResourceSettings_, ResourceSettings::RealtimeResourceSettings) };
        inline ResourceSettings& setRealtimeResourceSettings(const ResourceSettings::RealtimeResourceSettings & realtimeResourceSettings) { DARABONBA_PTR_SET_VALUE(realtimeResourceSettings_, realtimeResourceSettings) };
        inline ResourceSettings& setRealtimeResourceSettings(ResourceSettings::RealtimeResourceSettings && realtimeResourceSettings) { DARABONBA_PTR_SET_RVALUE(realtimeResourceSettings_, realtimeResourceSettings) };


        // scheduleResourceSettings Field Functions 
        bool hasScheduleResourceSettings() const { return this->scheduleResourceSettings_ != nullptr;};
        void deleteScheduleResourceSettings() { this->scheduleResourceSettings_ = nullptr;};
        inline const ResourceSettings::ScheduleResourceSettings & getScheduleResourceSettings() const { DARABONBA_PTR_GET_CONST(scheduleResourceSettings_, ResourceSettings::ScheduleResourceSettings) };
        inline ResourceSettings::ScheduleResourceSettings getScheduleResourceSettings() { DARABONBA_PTR_GET(scheduleResourceSettings_, ResourceSettings::ScheduleResourceSettings) };
        inline ResourceSettings& setScheduleResourceSettings(const ResourceSettings::ScheduleResourceSettings & scheduleResourceSettings) { DARABONBA_PTR_SET_VALUE(scheduleResourceSettings_, scheduleResourceSettings) };
        inline ResourceSettings& setScheduleResourceSettings(ResourceSettings::ScheduleResourceSettings && scheduleResourceSettings) { DARABONBA_PTR_SET_RVALUE(scheduleResourceSettings_, scheduleResourceSettings) };


      protected:
        // The resource settings for the offline synchronization job.
        shared_ptr<ResourceSettings::OfflineResourceSettings> offlineResourceSettings_ {};
        // The resource settings for the real-time synchronization job.
        shared_ptr<ResourceSettings::RealtimeResourceSettings> realtimeResourceSettings_ {};
        // The scheduling resource settings.
        shared_ptr<ResourceSettings::ScheduleResourceSettings> scheduleResourceSettings_ {};
      };

      class JobSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobSettings& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelSettings, channelSettings_);
          DARABONBA_PTR_TO_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
          DARABONBA_PTR_TO_JSON(CycleScheduleSettings, cycleScheduleSettings_);
          DARABONBA_PTR_TO_JSON(DdlHandlingSettings, ddlHandlingSettings_);
          DARABONBA_PTR_TO_JSON(RuntimeSettings, runtimeSettings_);
        };
        friend void from_json(const Darabonba::Json& j, JobSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelSettings, channelSettings_);
          DARABONBA_PTR_FROM_JSON(ColumnDataTypeSettings, columnDataTypeSettings_);
          DARABONBA_PTR_FROM_JSON(CycleScheduleSettings, cycleScheduleSettings_);
          DARABONBA_PTR_FROM_JSON(DdlHandlingSettings, ddlHandlingSettings_);
          DARABONBA_PTR_FROM_JSON(RuntimeSettings, runtimeSettings_);
        };
        JobSettings() = default ;
        JobSettings(const JobSettings &) = default ;
        JobSettings(JobSettings &&) = default ;
        JobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobSettings() = default ;
        JobSettings& operator=(const JobSettings &) = default ;
        JobSettings& operator=(JobSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuntimeSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeSettings& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RuntimeSettings() = default ;
          RuntimeSettings(const RuntimeSettings &) = default ;
          RuntimeSettings(RuntimeSettings &&) = default ;
          RuntimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuntimeSettings() = default ;
          RuntimeSettings& operator=(const RuntimeSettings &) = default ;
          RuntimeSettings& operator=(RuntimeSettings &&) = default ;
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
          inline RuntimeSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RuntimeSettings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the setting. Valid values:
          // 
          // - `src.offline.datasource.max.connection`: the maximum number of connections to the source for an offline batch job.
          // 
          // - `dst.offline.truncate`: Whether to truncate the destination table before the offline batch job starts.
          // 
          // - `runtime.offline.speed.limit.enable`: Whether to enable throttling for an offline batch job.
          // 
          // - `runtime.offline.concurrent`: the concurrency level for an offline batch synchronization job.
          // 
          // - `runtime.enable.auto.create.schema`: Whether to automatically create a schema at the destination.
          // 
          // - `runtime.realtime.concurrent`: the concurrency level for a real-time job.
          // 
          // - `runtime.realtime.failover.minute.dataxcdc`: The wait duration (in minutes) before restarting a failed instance.
          // 
          // - `runtime.realtime.failover.times.dataxcdc`: The maximum number of retries for a failed instance.
          shared_ptr<string> name_ {};
          // The value of the setting.
          shared_ptr<string> value_ {};
        };

        class DdlHandlingSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DdlHandlingSettings& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DdlHandlingSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DdlHandlingSettings() = default ;
          DdlHandlingSettings(const DdlHandlingSettings &) = default ;
          DdlHandlingSettings(DdlHandlingSettings &&) = default ;
          DdlHandlingSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DdlHandlingSettings() = default ;
          DdlHandlingSettings& operator=(const DdlHandlingSettings &) = default ;
          DdlHandlingSettings& operator=(DdlHandlingSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->type_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline DdlHandlingSettings& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DdlHandlingSettings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The handling action. Valid values:
          // 
          // - `Ignore`: Ignores the DDL message.
          // 
          // - `Critical`: Reports an error.
          // 
          // - `Normal`: Processes the DDL message.
          shared_ptr<string> action_ {};
          // The DDL message type. Valid values:
          // 
          // - `RenameColumn`
          // 
          // - `ModifyColumn`
          // 
          // - `CreateTable`
          // 
          // - `TruncateTable`
          // 
          // - `DropTable`
          shared_ptr<string> type_ {};
        };

        class CycleScheduleSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CycleScheduleSettings& obj) { 
            DARABONBA_PTR_TO_JSON(CycleMigrationType, cycleMigrationType_);
            DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
          };
          friend void from_json(const Darabonba::Json& j, CycleScheduleSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(CycleMigrationType, cycleMigrationType_);
            DARABONBA_PTR_FROM_JSON(ScheduleParameters, scheduleParameters_);
          };
          CycleScheduleSettings() = default ;
          CycleScheduleSettings(const CycleScheduleSettings &) = default ;
          CycleScheduleSettings(CycleScheduleSettings &&) = default ;
          CycleScheduleSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CycleScheduleSettings() = default ;
          CycleScheduleSettings& operator=(const CycleScheduleSettings &) = default ;
          CycleScheduleSettings& operator=(CycleScheduleSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cycleMigrationType_ == nullptr
        && this->scheduleParameters_ == nullptr; };
          // cycleMigrationType Field Functions 
          bool hasCycleMigrationType() const { return this->cycleMigrationType_ != nullptr;};
          void deleteCycleMigrationType() { this->cycleMigrationType_ = nullptr;};
          inline string getCycleMigrationType() const { DARABONBA_PTR_GET_DEFAULT(cycleMigrationType_, "") };
          inline CycleScheduleSettings& setCycleMigrationType(string cycleMigrationType) { DARABONBA_PTR_SET_VALUE(cycleMigrationType_, cycleMigrationType) };


          // scheduleParameters Field Functions 
          bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
          void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
          inline string getScheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
          inline CycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


        protected:
          // The synchronization type for periodic scheduling. Valid values:
          // 
          // - `Full`: full
          // 
          // - `OfflineIncremental`: offline incremental
          shared_ptr<string> cycleMigrationType_ {};
          // The scheduling parameters.
          shared_ptr<string> scheduleParameters_ {};
        };

        class ColumnDataTypeSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColumnDataTypeSettings& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationDataType, destinationDataType_);
            DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
          };
          friend void from_json(const Darabonba::Json& j, ColumnDataTypeSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationDataType, destinationDataType_);
            DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
          };
          ColumnDataTypeSettings() = default ;
          ColumnDataTypeSettings(const ColumnDataTypeSettings &) = default ;
          ColumnDataTypeSettings(ColumnDataTypeSettings &&) = default ;
          ColumnDataTypeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColumnDataTypeSettings() = default ;
          ColumnDataTypeSettings& operator=(const ColumnDataTypeSettings &) = default ;
          ColumnDataTypeSettings& operator=(ColumnDataTypeSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->destinationDataType_ == nullptr
        && this->sourceDataType_ == nullptr; };
          // destinationDataType Field Functions 
          bool hasDestinationDataType() const { return this->destinationDataType_ != nullptr;};
          void deleteDestinationDataType() { this->destinationDataType_ = nullptr;};
          inline string getDestinationDataType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataType_, "") };
          inline ColumnDataTypeSettings& setDestinationDataType(string destinationDataType) { DARABONBA_PTR_SET_VALUE(destinationDataType_, destinationDataType) };


          // sourceDataType Field Functions 
          bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
          void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
          inline string getSourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
          inline ColumnDataTypeSettings& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


        protected:
          // The data type in the destination, such as `bigint`, `boolean`, `string`, `text`, `datetime`, `timestamp`, `decimal`, and `binary`. Data types vary depending on the data source.
          shared_ptr<string> destinationDataType_ {};
          // The data type in the source, such as `bigint`, `boolean`, `string`, `text`, `datetime`, `timestamp`, `decimal`, and `binary`. Data types vary depending on the data source.
          shared_ptr<string> sourceDataType_ {};
        };

        virtual bool empty() const override { return this->channelSettings_ == nullptr
        && this->columnDataTypeSettings_ == nullptr && this->cycleScheduleSettings_ == nullptr && this->ddlHandlingSettings_ == nullptr && this->runtimeSettings_ == nullptr; };
        // channelSettings Field Functions 
        bool hasChannelSettings() const { return this->channelSettings_ != nullptr;};
        void deleteChannelSettings() { this->channelSettings_ = nullptr;};
        inline string getChannelSettings() const { DARABONBA_PTR_GET_DEFAULT(channelSettings_, "") };
        inline JobSettings& setChannelSettings(string channelSettings) { DARABONBA_PTR_SET_VALUE(channelSettings_, channelSettings) };


        // columnDataTypeSettings Field Functions 
        bool hasColumnDataTypeSettings() const { return this->columnDataTypeSettings_ != nullptr;};
        void deleteColumnDataTypeSettings() { this->columnDataTypeSettings_ = nullptr;};
        inline const vector<JobSettings::ColumnDataTypeSettings> & getColumnDataTypeSettings() const { DARABONBA_PTR_GET_CONST(columnDataTypeSettings_, vector<JobSettings::ColumnDataTypeSettings>) };
        inline vector<JobSettings::ColumnDataTypeSettings> getColumnDataTypeSettings() { DARABONBA_PTR_GET(columnDataTypeSettings_, vector<JobSettings::ColumnDataTypeSettings>) };
        inline JobSettings& setColumnDataTypeSettings(const vector<JobSettings::ColumnDataTypeSettings> & columnDataTypeSettings) { DARABONBA_PTR_SET_VALUE(columnDataTypeSettings_, columnDataTypeSettings) };
        inline JobSettings& setColumnDataTypeSettings(vector<JobSettings::ColumnDataTypeSettings> && columnDataTypeSettings) { DARABONBA_PTR_SET_RVALUE(columnDataTypeSettings_, columnDataTypeSettings) };


        // cycleScheduleSettings Field Functions 
        bool hasCycleScheduleSettings() const { return this->cycleScheduleSettings_ != nullptr;};
        void deleteCycleScheduleSettings() { this->cycleScheduleSettings_ = nullptr;};
        inline const JobSettings::CycleScheduleSettings & getCycleScheduleSettings() const { DARABONBA_PTR_GET_CONST(cycleScheduleSettings_, JobSettings::CycleScheduleSettings) };
        inline JobSettings::CycleScheduleSettings getCycleScheduleSettings() { DARABONBA_PTR_GET(cycleScheduleSettings_, JobSettings::CycleScheduleSettings) };
        inline JobSettings& setCycleScheduleSettings(const JobSettings::CycleScheduleSettings & cycleScheduleSettings) { DARABONBA_PTR_SET_VALUE(cycleScheduleSettings_, cycleScheduleSettings) };
        inline JobSettings& setCycleScheduleSettings(JobSettings::CycleScheduleSettings && cycleScheduleSettings) { DARABONBA_PTR_SET_RVALUE(cycleScheduleSettings_, cycleScheduleSettings) };


        // ddlHandlingSettings Field Functions 
        bool hasDdlHandlingSettings() const { return this->ddlHandlingSettings_ != nullptr;};
        void deleteDdlHandlingSettings() { this->ddlHandlingSettings_ = nullptr;};
        inline const vector<JobSettings::DdlHandlingSettings> & getDdlHandlingSettings() const { DARABONBA_PTR_GET_CONST(ddlHandlingSettings_, vector<JobSettings::DdlHandlingSettings>) };
        inline vector<JobSettings::DdlHandlingSettings> getDdlHandlingSettings() { DARABONBA_PTR_GET(ddlHandlingSettings_, vector<JobSettings::DdlHandlingSettings>) };
        inline JobSettings& setDdlHandlingSettings(const vector<JobSettings::DdlHandlingSettings> & ddlHandlingSettings) { DARABONBA_PTR_SET_VALUE(ddlHandlingSettings_, ddlHandlingSettings) };
        inline JobSettings& setDdlHandlingSettings(vector<JobSettings::DdlHandlingSettings> && ddlHandlingSettings) { DARABONBA_PTR_SET_RVALUE(ddlHandlingSettings_, ddlHandlingSettings) };


        // runtimeSettings Field Functions 
        bool hasRuntimeSettings() const { return this->runtimeSettings_ != nullptr;};
        void deleteRuntimeSettings() { this->runtimeSettings_ = nullptr;};
        inline const vector<JobSettings::RuntimeSettings> & getRuntimeSettings() const { DARABONBA_PTR_GET_CONST(runtimeSettings_, vector<JobSettings::RuntimeSettings>) };
        inline vector<JobSettings::RuntimeSettings> getRuntimeSettings() { DARABONBA_PTR_GET(runtimeSettings_, vector<JobSettings::RuntimeSettings>) };
        inline JobSettings& setRuntimeSettings(const vector<JobSettings::RuntimeSettings> & runtimeSettings) { DARABONBA_PTR_SET_VALUE(runtimeSettings_, runtimeSettings) };
        inline JobSettings& setRuntimeSettings(vector<JobSettings::RuntimeSettings> && runtimeSettings) { DARABONBA_PTR_SET_RVALUE(runtimeSettings_, runtimeSettings) };


      protected:
        // The settings for channel-related jobs. You can configure special settings for specific channels. The following channels are supported: Holo2Holo (data synchronization from Hologres to Hologres) and Holo2Kafka (data synchronization from Hologres to Kafka).
        // 
        // 1. Holo2Kafka
        // 
        // - Example: `{"destinationChannelSettings":{"kafkaClientProperties":[{"key":"linger.ms","value":"100"}],"keyColumns":["col3"],"writeMode":"canal"}}`
        // 
        // - `kafkaClientProperties`: The parameters for the Kafka producer, used when writing data to Kafka.
        // 
        // - `keyColumns`: The columns whose values are used as the key for Kafka records.
        // 
        // - `writeMode`: The format for writing data to Kafka. Valid values: `json` and `canal`.
        // 
        // 2. Holo2Holo
        // 
        // - Example: `{"destinationChannelSettings":{"conflictMode":"replace","dynamicColumnAction":"replay","writeMode":"replay"}}`
        // 
        // - `conflictMode`: The conflict handling policy for writing data to Hologres. Valid values: `replace` (overwrite) and `ignore` (ignore).
        // 
        // - `writeMode`: The method for writing data to Hologres. Valid values: `replay` and `insert`.
        // 
        // - `dynamicColumnAction`: The method for handling dynamic columns when writing data to Hologres. Valid values: `replay`, `insert`, and `ignore`.
        shared_ptr<string> channelSettings_ {};
        // The column data type mappings.
        shared_ptr<vector<JobSettings::ColumnDataTypeSettings>> columnDataTypeSettings_ {};
        // The settings for periodic scheduling.
        shared_ptr<JobSettings::CycleScheduleSettings> cycleScheduleSettings_ {};
        // An array of settings for handling DDL messages. Each element specifies a DDL message type and the corresponding handling rule.
        shared_ptr<vector<JobSettings::DdlHandlingSettings>> ddlHandlingSettings_ {};
        // The runtime settings.
        shared_ptr<vector<JobSettings::RuntimeSettings>> runtimeSettings_ {};
      };

      class DestinationDataSourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationDataSourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationDataSourceSettings& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        };
        DestinationDataSourceSettings() = default ;
        DestinationDataSourceSettings(const DestinationDataSourceSettings &) = default ;
        DestinationDataSourceSettings(DestinationDataSourceSettings &&) = default ;
        DestinationDataSourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationDataSourceSettings() = default ;
        DestinationDataSourceSettings& operator=(const DestinationDataSourceSettings &) = default ;
        DestinationDataSourceSettings& operator=(DestinationDataSourceSettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSourceName_ == nullptr; };
        // dataSourceName Field Functions 
        bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
        void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
        inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
        inline DestinationDataSourceSettings& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      protected:
        // The name of the destination data source.
        shared_ptr<string> dataSourceName_ {};
      };

      virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->description_ == nullptr && this->destinationDataSourceSettings_ == nullptr && this->destinationDataSourceType_ == nullptr && this->id_ == nullptr && this->jobName_ == nullptr
        && this->jobSettings_ == nullptr && this->jobStatus_ == nullptr && this->jobType_ == nullptr && this->migrationType_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->resourceSettings_ == nullptr && this->sourceDataSourceSettings_ == nullptr && this->sourceDataSourceType_ == nullptr && this->tableMappings_ == nullptr
        && this->transformationRules_ == nullptr; };
      // DIJobId Field Functions 
      bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
      void deleteDIJobId() { this->DIJobId_ = nullptr;};
      inline string getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, "") };
      inline PagingInfo& setDIJobId(string DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PagingInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationDataSourceSettings Field Functions 
      bool hasDestinationDataSourceSettings() const { return this->destinationDataSourceSettings_ != nullptr;};
      void deleteDestinationDataSourceSettings() { this->destinationDataSourceSettings_ = nullptr;};
      inline const vector<PagingInfo::DestinationDataSourceSettings> & getDestinationDataSourceSettings() const { DARABONBA_PTR_GET_CONST(destinationDataSourceSettings_, vector<PagingInfo::DestinationDataSourceSettings>) };
      inline vector<PagingInfo::DestinationDataSourceSettings> getDestinationDataSourceSettings() { DARABONBA_PTR_GET(destinationDataSourceSettings_, vector<PagingInfo::DestinationDataSourceSettings>) };
      inline PagingInfo& setDestinationDataSourceSettings(const vector<PagingInfo::DestinationDataSourceSettings> & destinationDataSourceSettings) { DARABONBA_PTR_SET_VALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };
      inline PagingInfo& setDestinationDataSourceSettings(vector<PagingInfo::DestinationDataSourceSettings> && destinationDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(destinationDataSourceSettings_, destinationDataSourceSettings) };


      // destinationDataSourceType Field Functions 
      bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
      void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
      inline string getDestinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
      inline PagingInfo& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline PagingInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline PagingInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobSettings Field Functions 
      bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
      void deleteJobSettings() { this->jobSettings_ = nullptr;};
      inline const PagingInfo::JobSettings & getJobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, PagingInfo::JobSettings) };
      inline PagingInfo::JobSettings getJobSettings() { DARABONBA_PTR_GET(jobSettings_, PagingInfo::JobSettings) };
      inline PagingInfo& setJobSettings(const PagingInfo::JobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
      inline PagingInfo& setJobSettings(PagingInfo::JobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline PagingInfo& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline PagingInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // migrationType Field Functions 
      bool hasMigrationType() const { return this->migrationType_ != nullptr;};
      void deleteMigrationType() { this->migrationType_ = nullptr;};
      inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
      inline PagingInfo& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline PagingInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline PagingInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // resourceSettings Field Functions 
      bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
      void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
      inline const PagingInfo::ResourceSettings & getResourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, PagingInfo::ResourceSettings) };
      inline PagingInfo::ResourceSettings getResourceSettings() { DARABONBA_PTR_GET(resourceSettings_, PagingInfo::ResourceSettings) };
      inline PagingInfo& setResourceSettings(const PagingInfo::ResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
      inline PagingInfo& setResourceSettings(PagingInfo::ResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


      // sourceDataSourceSettings Field Functions 
      bool hasSourceDataSourceSettings() const { return this->sourceDataSourceSettings_ != nullptr;};
      void deleteSourceDataSourceSettings() { this->sourceDataSourceSettings_ = nullptr;};
      inline const vector<PagingInfo::SourceDataSourceSettings> & getSourceDataSourceSettings() const { DARABONBA_PTR_GET_CONST(sourceDataSourceSettings_, vector<PagingInfo::SourceDataSourceSettings>) };
      inline vector<PagingInfo::SourceDataSourceSettings> getSourceDataSourceSettings() { DARABONBA_PTR_GET(sourceDataSourceSettings_, vector<PagingInfo::SourceDataSourceSettings>) };
      inline PagingInfo& setSourceDataSourceSettings(const vector<PagingInfo::SourceDataSourceSettings> & sourceDataSourceSettings) { DARABONBA_PTR_SET_VALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };
      inline PagingInfo& setSourceDataSourceSettings(vector<PagingInfo::SourceDataSourceSettings> && sourceDataSourceSettings) { DARABONBA_PTR_SET_RVALUE(sourceDataSourceSettings_, sourceDataSourceSettings) };


      // sourceDataSourceType Field Functions 
      bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
      void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
      inline string getSourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
      inline PagingInfo& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


      // tableMappings Field Functions 
      bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
      void deleteTableMappings() { this->tableMappings_ = nullptr;};
      inline const vector<PagingInfo::TableMappings> & getTableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<PagingInfo::TableMappings>) };
      inline vector<PagingInfo::TableMappings> getTableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<PagingInfo::TableMappings>) };
      inline PagingInfo& setTableMappings(const vector<PagingInfo::TableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
      inline PagingInfo& setTableMappings(vector<PagingInfo::TableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


      // transformationRules Field Functions 
      bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
      void deleteTransformationRules() { this->transformationRules_ = nullptr;};
      inline const vector<PagingInfo::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<PagingInfo::TransformationRules>) };
      inline vector<PagingInfo::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<PagingInfo::TransformationRules>) };
      inline PagingInfo& setTransformationRules(const vector<PagingInfo::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
      inline PagingInfo& setTransformationRules(vector<PagingInfo::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


    protected:
      // This field is deprecated. Use the `Id` field instead.
      shared_ptr<string> DIJobId_ {};
      // The description of the job.
      shared_ptr<string> description_ {};
      // The settings for the destination data source.
      shared_ptr<vector<PagingInfo::DestinationDataSourceSettings>> destinationDataSourceSettings_ {};
      // The type of the destination data source. Valid values: `Hologres`, `OSS-HDFS`, `OSS`, `MaxCompute`, `LogHub`, `StarRocks`, `DataHub`, `AnalyticDB for MySQL`, `Kafka`, and `Hive`.
      shared_ptr<string> destinationDataSourceType_ {};
      // The job ID.
      shared_ptr<int64_t> id_ {};
      // The name of the job.
      shared_ptr<string> jobName_ {};
      // The job settings.
      shared_ptr<PagingInfo::JobSettings> jobSettings_ {};
      // The status of the job. Valid values:
      // 
      // - `Finished`: The job is complete.
      // 
      // - `Failed`: The job failed.
      // 
      // - `Running`: The job is running.
      // 
      // - `Initialized`: The job is initialized but has not started.
      // 
      // - `Stopping`: The job is being stopped.
      // 
      // - `Stop`: The job is stopped.
      shared_ptr<string> jobStatus_ {};
      // The job type.
      // 
      // - `DatabaseRealtimeMigration`: real-time synchronization of multiple tables from multiple source databases. This type supports full, incremental, or both full and incremental synchronization.
      // 
      // - `DatabaseOfflineMigration`: batch synchronization of multiple tables from multiple source databases. This type supports full, incremental, or both full and incremental synchronization.
      // 
      // - `SingleTableRealtimeMigration`: real-time synchronization of a single source table.
      shared_ptr<string> jobType_ {};
      // The synchronization type. Valid values:
      // 
      // - `FullAndRealtimeIncremental`: one-time full synchronization and real-time incremental synchronization (for an entire database).
      // 
      // - `RealtimeIncremental`: real-time incremental synchronization (for a single table).
      // 
      // - `Full`: one-time full synchronization (for an entire database).
      // 
      // - `OfflineIncremental`: offline incremental synchronization (for an entire database).
      // 
      // - `FullAndOfflineIncremental`: one-time full synchronization and offline incremental synchronization (for an entire database).
      shared_ptr<string> migrationType_ {};
      shared_ptr<string> owner_ {};
      // The ID of the DataWorks workspace for the API call. You can obtain the workspace ID from the Workspace Configuration page in the [DataWorks console](https://workbench.data.aliyun.com/console).
      shared_ptr<int64_t> projectId_ {};
      // The resource settings.
      shared_ptr<PagingInfo::ResourceSettings> resourceSettings_ {};
      // The settings for the source data source.
      shared_ptr<vector<PagingInfo::SourceDataSourceSettings>> sourceDataSourceSettings_ {};
      // The type of the source data source. Valid values: `PolarDB`, `MySQL`, `Kafka`, `LogHub`, `Hologres`, `Oracle`, `OceanBase`, `MongoDB`, `RedShift`, `Hive`, `SQLServer`, `Doris`, and `ClickHouse`.
      shared_ptr<string> sourceDataSourceType_ {};
      // A list of mappings for object transformation. Each element in the list describes a set of selection rules for source objects and a set of transformation rules that apply to the selected objects.
      // 
      // > [
      // > {
      // > "SourceObjectSelectionRules":[
      // > {
      // > "ObjectType":"Database",
      // > "Action":"Include",
      // > "ExpressionType":"Exact",
      // > "Expression":"biz_db"
      // > },
      // > {
      // > "ObjectType":"Schema",
      // > "Action":"Include",
      // > "ExpressionType":"Exact",
      // > "Expression":"s1"
      // > },
      // > {
      // > "ObjectType":"Table",
      // > "Action":"Include",
      // > "ExpressionType":"Exact",
      // > "Expression":"table1"
      // > }
      // > ],
      // > "TransformationRuleNames":[
      // > {
      // > "RuleName":"my_database_rename_rule",
      // > "RuleActionType":"Rename",
      // > "RuleTargetType":"Schema"
      // > }
      // > ]
      // > }
      // > ]
      shared_ptr<vector<PagingInfo::TableMappings>> tableMappings_ {};
      // A list of definitions for object transformation rules.
      // 
      // > [
      // > {
      // > "RuleName":"my_database_rename_rule",
      // > "RuleActionType":"Rename",
      // > "RuleTargetType":"Schema",
      // > "RuleExpression":"{\\\\"expression\\\\":\\\\"${srcDatasoureName}_${srcDatabaseName}\\\\"}"
      // > }
      // > ]
      shared_ptr<vector<PagingInfo::TransformationRules>> transformationRules_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const GetDIJobResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, GetDIJobResponseBody::PagingInfo) };
    inline GetDIJobResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, GetDIJobResponseBody::PagingInfo) };
    inline GetDIJobResponseBody& setPagingInfo(const GetDIJobResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline GetDIJobResponseBody& setPagingInfo(GetDIJobResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the data integration job.
    shared_ptr<GetDIJobResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
