// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
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
  class UpdateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSpec, fileSpec_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSpec, fileSpec_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    UpdateDIJobRequest() = default ;
    UpdateDIJobRequest(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest(UpdateDIJobRequest &&) = default ;
    UpdateDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequest() = default ;
    UpdateDIJobRequest& operator=(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest& operator=(UpdateDIJobRequest &&) = default ;
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
      // Valid values:
      // 
      // *   DefinePrimaryKey
      // *   Rename
      // *   AddColumn
      // *   HandleDml
      // *   DefineIncrementalCondition
      // *   DefineCycleScheduleSettings
      // *   DefinePartitionKey
      shared_ptr<string> ruleActionType_ {};
      // The rule expression in JSON string format.
      // 
      // 1.  Rename rule
      // 
      // *   Example: {"expression":"${srcDatasourceName}_${srcDatabaseName}_0922" }
      // *   expression: The rename transformation expression. Supported variables include: ${srcDatasourceName} (source data source name), ${srcDatabaseName} (source database name), and ${srcTableName} (source table name).
      // 
      // 2.  AddColumn rule
      // 
      // *   Example: {"columns":[{"columnName":"my_add_column","columnValueType":"Constant","columnValue":"123"}]}
      // *   If not specified, the default behavior is to not add columns.
      // *   columnName: The name of the column to add.
      // *   columnValueType: The value type of the column to add. Valid values: Constant and Variable.
      // *   columnValue: The value of the column to add. When columnValueType is set to Constant, the value is a custom constant of the string type. When columnValueType is set to Variable, the value is a built-in variable. Built-in variables include: EXECUTE_TIME (execution time, long type), DB_NAME_SRC (source database name, string type), DATASOURCE_NAME_SRC (source data source name, string type), TABLE_NAME_SRC (source table name, string type), DB_NAME_DEST (destination database name, string type), DATASOURCE_NAME_DEST (destination data source name, string type), TABLE_NAME_DEST (destination table name, string type), and DB_NAME_SRC_TRANSED (transformed source database name, string type).
      // 
      // 3.  DefinePrimaryKey
      // 
      // *   Example: {"columns":["ukcolumn1","ukcolumn2"]}
      // *   If not specified, the source primary key columns are used by default.
      // *   When the destination table already exists: Data Integration does not modify the destination table structure. If the specified primary key columns are not in the destination table, the task fails to start.
      // *   When the destination table is auto-created: Data Integration automatically creates the destination table structure with the defined primary key columns. If the specified primary key columns are not in the destination table, the task fails to start.
      // 
      // 4.  HandleDml rule
      // 
      // *   Example of a rule used to process DML messages: {"dmlPolicies":[{"dmlType":"Delete","dmlAction":"Filter","filterCondition":"id > 1"}]}.
      // *   If not specified, the default rule is Normal for Insert, Update, and Delete.
      // *   dmlType: The DML operation type. Valid values: Insert, Update, Delete.
      // *   dmlAction: The DML handling policy. Valid values: Normal, Ignore, Filter (conditional processing, used when dmlType is Update or Delete), and LogicalDelete.
      // *   filterCondition: The DML filter condition. This parameter is used when dmlAction is set to Filter.
      // 
      // 5.  DefineIncrementalCondition
      // 
      // *   Example: {"where":"id > 0"}
      // *   Specifies the incremental filter condition.
      // 
      // 6.  DefineCycleScheduleSettings
      // 
      // *   Example: {"cronExpress":" \\* \\* \\* \\* \\* \\*", "cycleType":"1"}
      // *   Specifies the scheduled task parameters.
      // 
      // 7.  DefinePartitionKey
      // 
      // *   Example: {"columns":["id"]}
      // *   Specifies the partition key.
      shared_ptr<string> ruleExpression_ {};
      // The rule name. When the action type and target type are the same, the rule name must be unique. The name cannot exceed 50 characters.
      shared_ptr<string> ruleName_ {};
      // The target type for the action. Valid values:
      // 
      // *   Table
      // *   Schema
      // *   Database
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
        // Valid values:
        // 
        // *   DefinePrimaryKey
        // *   Rename
        // *   AddColumn
        // *   HandleDml
        shared_ptr<string> ruleActionType_ {};
        // The rule name. The rule name must be unique for a given combination of action type and target type. The name cannot exceed 50 characters.
        shared_ptr<string> ruleName_ {};
        // Valid values:
        // 
        // *   Table
        // *   Schema
        // *   Database
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
        // Valid values: Include and Exclude.
        shared_ptr<string> action_ {};
        // The expression.
        shared_ptr<string> expression_ {};
        // The expression type. Valid values: Exact and Regex.
        shared_ptr<string> expressionType_ {};
        // The object type. Valid values:
        // 
        // *   Table
        // *   Schema
        // *   Database
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
      // Each rule can select different object types from the source, such as source databases and source tables.
      shared_ptr<vector<TableMappings::SourceObjectSelectionRules>> sourceObjectSelectionRules_ {};
      // The transformation rules applied to source objects.
      shared_ptr<vector<TableMappings::TransformationRules>> transformationRules_ {};
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
        // The CUs of the scheduling resource group for batch synchronization tasks.
        shared_ptr<double> requestedCu_ {};
        // The name of the scheduling resource group used for batch synchronization tasks.
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
        // The CUs of the resource group for Data Integration that are used for real-time synchronization.
        shared_ptr<double> requestedCu_ {};
        // The name of the resource group for Data Integration that are used for real-time synchronization.
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
        // The CUs of the resource group for Data Integration used for batch synchronization.
        shared_ptr<double> requestedCu_ {};
        // The name of the resource group for Data Integration that are used for batch synchronization.
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
      // The batch synchronization resources.
      shared_ptr<ResourceSettings::OfflineResourceSettings> offlineResourceSettings_ {};
      // The real-time synchronization resources.
      shared_ptr<ResourceSettings::RealtimeResourceSettings> realtimeResourceSettings_ {};
      // The resource used for scheduling.
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
        // The setting name. Valid values:
        // 
        // *   src.offline.datasource.max.connection: Specifies the maximum number of connections that are allowed for reading data from the source of a batch synchronization task.
        // *   dst.offline.truncate: Specifies whether to clear the destination table before data writing.
        // *   runtime.offline.speed.limit.enable: Specifies whether throttling is enabled for a batch synchronization task.
        // *   runtime.offline.concurrent: Specifies the maximum number of parallel threads that are allowed for a batch synchronization task.
        // *   runtime.enable.auto.create.schema: Specifies whether schemas are automatically created in the destination of a synchronization task.
        // *   runtime.realtime.concurrent: Specifies the maximum number of parallel threads that are allowed for a real-time synchronization task.
        // *   runtime.realtime.failover.minute.dataxcdc: Specifies the maximum waiting duration before a synchronization task retries the next restart if the previous restart fails after failover occurs. Unit: minutes.
        // *   runtime.realtime.failover.times.dataxcdc: Specifies the maximum number of failures that are allowed for restarting a synchronization task after failovers occur.
        shared_ptr<string> name_ {};
        // The setting value.
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
        // Valid values:
        // 
        // *   Ignore
        // *   Critical: Fail the task
        // *   Normal
        shared_ptr<string> action_ {};
        // The DDL type. Valid values:
        // 
        // *   RenameColumn
        // *   ModifyColumn
        // *   CreateTable
        // *   TruncateTable
        // *   DropTable
        // *   DropColumn
        // *   AddColumn
        shared_ptr<string> type_ {};
      };

      class CycleScheduleSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CycleScheduleSettings& obj) { 
          DARABONBA_PTR_TO_JSON(ScheduleParameters, scheduleParameters_);
        };
        friend void from_json(const Darabonba::Json& j, CycleScheduleSettings& obj) { 
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
        virtual bool empty() const override { return this->scheduleParameters_ == nullptr; };
        // scheduleParameters Field Functions 
        bool hasScheduleParameters() const { return this->scheduleParameters_ != nullptr;};
        void deleteScheduleParameters() { this->scheduleParameters_ = nullptr;};
        inline string getScheduleParameters() const { DARABONBA_PTR_GET_DEFAULT(scheduleParameters_, "") };
        inline CycleScheduleSettings& setScheduleParameters(string scheduleParameters) { DARABONBA_PTR_SET_VALUE(scheduleParameters_, scheduleParameters) };


      protected:
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
        // The destination type, such as bigint, boolean, string, text, datetime, timestamp, decimal, or binary. Different data sources may have different types.
        shared_ptr<string> destinationDataType_ {};
        // The source type, such as bigint, boolean, string, text, datetime, timestamp, decimal, or binary. Different data sources may have different types.
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
      // The channel-specific settings. You can configure special settings for specific channels. Currently supported: Holo2Holo (Hologres to Hologres) and Holo2Kafka (Hologres to Kafka).
      // 
      // 1.  Holo2Kafka
      // 
      // *   Example: {"destinationChannelSettings":{"kafkaClientProperties":[{"key":"linger.ms","value":"100"}],"keyColumns":["col3"],"writeMode":"canal"}} kafkaClientProperties: Kafka producer parameters used when writing to Kafka.
      // *   keyColumns: The columns to write to Kafka.
      // *   writeMode: The Kafka write format. Valid values: json and canal.
      // 
      // 2.  Holo2Holo
      // 
      // *   Example: {"destinationChannelSettings":{"conflictMode":"replace","dynamicColumnAction":"replay","writeMode":"replay"}}
      // *   conflictMode: The conflict handling policy when writing to Hologres. Valid values: replace (overwrite) and ignore.
      // *   writeMode: The write mode for Hologres. Valid values: replay and insert.
      // *   dynamicColumnAction: The dynamic column handling mode when writing to Hologres. Valid values: replay, insert, and ignore.
      shared_ptr<string> channelSettings_ {};
      // The array of column type mappings.
      // 
      // >  ["ColumnDataTypeSettings":[ { "SourceDataType":"Bigint", "DestinationDataType":"Text" } ]
      shared_ptr<vector<JobSettings::ColumnDataTypeSettings>> columnDataTypeSettings_ {};
      // The scheduled task settings.
      shared_ptr<JobSettings::CycleScheduleSettings> cycleScheduleSettings_ {};
      // The array of DDL handling settings.
      // 
      // >  ["DDLHandlingSettings":[ { "Type":"Insert", "Action":"Normal" } ]
      shared_ptr<vector<JobSettings::DdlHandlingSettings>> ddlHandlingSettings_ {};
      // The runtime settings.
      shared_ptr<vector<JobSettings::RuntimeSettings>> runtimeSettings_ {};
    };

    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->description_ == nullptr && this->fileSpec_ == nullptr && this->id_ == nullptr && this->jobSettings_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->resourceSettings_ == nullptr && this->tableMappings_ == nullptr && this->transformationRules_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline UpdateDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSpec Field Functions 
    bool hasFileSpec() const { return this->fileSpec_ != nullptr;};
    void deleteFileSpec() { this->fileSpec_ = nullptr;};
    inline string getFileSpec() const { DARABONBA_PTR_GET_DEFAULT(fileSpec_, "") };
    inline UpdateDIJobRequest& setFileSpec(string fileSpec) { DARABONBA_PTR_SET_VALUE(fileSpec_, fileSpec) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDIJobRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const UpdateDIJobRequest::JobSettings & getJobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest::JobSettings getJobSettings() { DARABONBA_PTR_GET(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest& setJobSettings(const UpdateDIJobRequest::JobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline UpdateDIJobRequest& setJobSettings(UpdateDIJobRequest::JobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateDIJobRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const UpdateDIJobRequest::ResourceSettings & getResourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, UpdateDIJobRequest::ResourceSettings) };
    inline UpdateDIJobRequest::ResourceSettings getResourceSettings() { DARABONBA_PTR_GET(resourceSettings_, UpdateDIJobRequest::ResourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(const UpdateDIJobRequest::ResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(UpdateDIJobRequest::ResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<UpdateDIJobRequest::TableMappings> & getTableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<UpdateDIJobRequest::TableMappings>) };
    inline vector<UpdateDIJobRequest::TableMappings> getTableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<UpdateDIJobRequest::TableMappings>) };
    inline UpdateDIJobRequest& setTableMappings(const vector<UpdateDIJobRequest::TableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline UpdateDIJobRequest& setTableMappings(vector<UpdateDIJobRequest::TableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<UpdateDIJobRequest::TransformationRules> & getTransformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<UpdateDIJobRequest::TransformationRules>) };
    inline vector<UpdateDIJobRequest::TransformationRules> getTransformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<UpdateDIJobRequest::TransformationRules>) };
    inline UpdateDIJobRequest& setTransformationRules(const vector<UpdateDIJobRequest::TransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline UpdateDIJobRequest& setTransformationRules(vector<UpdateDIJobRequest::TransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    shared_ptr<int64_t> DIJobId_ {};
    // The task description.
    shared_ptr<string> description_ {};
    shared_ptr<string> fileSpec_ {};
    // The ID of the synchronization task.
    shared_ptr<int64_t> id_ {};
    // The task-level settings, including DDL handling policies, column data type mapping between source and destination, and runtime parameters.
    shared_ptr<UpdateDIJobRequest::JobSettings> jobSettings_ {};
    // The task owner.
    shared_ptr<string> owner_ {};
    // The DataWorks workspace ID. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to obtain the ID.
    shared_ptr<int64_t> projectId_ {};
    // The resource settings.
    shared_ptr<UpdateDIJobRequest::ResourceSettings> resourceSettings_ {};
    // The list of synchronization object transformation mappings. Each element describes a set of source object selection rules and the transformation rules applied to those objects.
    // 
    // >  [ { "SourceObjectSelectionRules":[ { "ObjectType":"Database", "Action":"Include", "ExpressionType":"Exact", "Expression":"biz_db" }, { "ObjectType":"Schema", "Action":"Include", "ExpressionType":"Exact", "Expression":"s1" }, { "ObjectType":"Table", "Action":"Include", "ExpressionType":"Exact", "Expression":"table1" } ], "TransformationRuleNames":[ { "RuleName":"my_database_rename_rule", "RuleActionType":"Rename", "RuleTargetType":"Schema" } ] } ]
    shared_ptr<vector<UpdateDIJobRequest::TableMappings>> tableMappings_ {};
    // The list of synchronization object transformation rule definitions.
    // 
    // >  [ { "RuleName":"my_database_rename_rule", "RuleActionType":"Rename", "RuleTargetType":"Schema", "RuleExpression":"{"expression":"${srcDatasoureName}_${srcDatabaseName}"}" } ]
    shared_ptr<vector<UpdateDIJobRequest::TransformationRules>> transformationRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
