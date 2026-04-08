// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
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
  class UpdateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
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
      // The type of the action. Valid values:
      // 
      // *   DefinePrimaryKey
      // *   Rename
      // *   AddColumn
      // *   HandleDml
      // *   DefineIncrementalCondition
      // *   DefineCycleScheduleSettings
      // *   DefineRuntimeSettings
      // *   DefinePartitionKey
      shared_ptr<string> ruleActionType_ {};
      // The expression of the rule. The expression must be a JSON string.
      // 
      // Example of a renaming rule: {"expression":"${srcDatasourceName}_${srcDatabaseName}_0922","variables":[{"variableName":"srcDatabaseName","variableRules":[{"from":"fromdb","to":"todb"}]}]}.
      // 
      // expression: the expression of the renaming rule. The expression may contain the following variables: ${srcDatasourceName}, ${srcDatabaseName}, and ${srcTableName}. ${srcDatasourceName} specifies the name of the source. ${srcDatabaseName} specifies the name of a source database. ${srcTableName} specifies the name of a source table. variables: the generation rule for a variable used in the expression of the renaming rule. The default value of the specified variable is the original value of the object indicated by the variable. You can define a group of string replacement rules to change the original values based on your business requirements. variableName: the name of the variable. Do not enclose the variable name in ${}. variableRules: the string replacement rules for variables. The system runs the string replacement rules in sequence. from specifies the original string. to specifies the new string. Example of a rule used to add a specific field to the destination and assign a value to the field: {"columns":[{"columnName":"my_add_column","columnValueType":"Constant","columnValue":"123"}]}.
      // 
      // If you do not configure such a rule, no fields are added to the destination and no values are assigned by default. columnName: the name of the field that you want to add. columnValueType: the value type of the field. Valid values: Constant and Variable. columnValue: the value of the field that you want to add. If you set the valueType parameter to Constant, set the columnValue parameter to a custom constant of the STRING type. If you set the valueType parameter to Variable, set the columnValue to a built-in variable. The following built-in variables are supported: EXECUTE_TIME (LONG data type), DB_NAME_SRC (STRING data type), DATASOURCE_NAME_SRC (STRING data type), TABLE_NAME_SRC (STRING data type), DB_NAME_DEST (STRING data type), DATASOURCE_NAME_DEST (STRING data type), TABLE_NAME_DEST (STRING data type), and DB_NAME_SRC_TRANSED (STRING data type). EXECUTE_TIME specifies the execution time. DB_NAME_SRC indicates the name of a source database. DATASOURCE_NAME_SRC specifies the name of the source. TABLE_NAME_SRC specifies the name of a source table. DB_NAME_DEST specifies the name of a destination database. DATASOURCE_NAME_DEST specifies the name of the destination. TABLE_NAME_DEST specifies the name of a destination table. DB_NAME_SRC_TRANSED specifies the database name obtained after a transformation. Example of a rule used to specify primary key fields for a destination table: {"columns":["ukcolumn1","ukcolumn2"]}.
      // 
      // If you do not configure such a rule, the primary key fields in the mapped source table are used for the destination table by default. If the destination table is an existing table, Data Integration does not modify the schema of the destination table. If the specified primary key fields do not exist in the destination table, an error is reported when the synchronization task starts to run. If the destination table is automatically created by the system, Data Integration automatically creates the schema of the destination table. The schema contains the primary key fields that you specify. If the specified primary key fields do not exist in the destination table, an error is reported when the synchronization task starts to run. Example of a rule used to process DML messages: {"dmlPolicies":[{"dmlType":"Delete","dmlAction":"Filter","filterCondition":"id > 1"}]}.
      // 
      // If you do not configure such a rule, the default processing policy for messages generated for insert, update, and delete operations is Normal. dmlType: the DML operation. Valid values: Insert, Update, and Delete. dmlAction: the processing policy for DML messages. Valid values: Normal, Ignore, Filter, and LogicalDelete. Filter indicates conditional processing. You can set the dmlAction parameter to Filter only when the dmlType parameter is set to Update or Delete. filterCondition: the condition used to filter DML messages. This parameter is required only when the dmlAction parameter is set to Filter.
      shared_ptr<string> ruleExpression_ {};
      // The name of the rule. If the values of the RuleActionType parameter and the RuleTargetType parameter are the same for multiple transformation rules, you must make sure that the transformation rule names are unique.
      shared_ptr<string> ruleName_ {};
      // The type of the object on which you want to perform the action. Valid values:
      // 
      // *   Table
      // *   Schema
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
        // The type of the action. Valid values:
        // 
        // *   DefinePrimaryKey
        // *   Rename
        // *   AddColumn
        // *   HandleDml
        // *   DefineIncrementalCondition
        // *   DefineCycleScheduleSettings
        // *   DefineRuntimeSettings
        // *   DefinePartitionKey
        shared_ptr<string> ruleActionType_ {};
        // The name of the rule. If the values of the RuleActionType parameter and the RuleTargetType parameter are the same for multiple transformation rules, you must make sure that the transformation rule names are unique.
        shared_ptr<string> ruleName_ {};
        // The type of the object on which you want to perform the action. Valid values:
        // 
        // *   Table
        // *   Schema
        shared_ptr<string> ruleTargetType_ {};
      };

      class SourceObjectSelectionRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceObjectSelectionRules& obj) { 
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        };
        friend void from_json(const Darabonba::Json& j, SourceObjectSelectionRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
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
        virtual bool empty() const override { return this->expression_ == nullptr
        && this->objectType_ == nullptr; };
        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
        inline SourceObjectSelectionRules& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline SourceObjectSelectionRules& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      protected:
        // The expression.
        shared_ptr<string> expression_ {};
        // The type of the object. Valid values:
        // 
        // *   Table
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
      // The list of rules that you want to use to select synchronization objects in the source.
      shared_ptr<vector<TableMappings::SourceObjectSelectionRules>> sourceObjectSelectionRules_ {};
      // The list of transformation rules that you want to apply to the synchronization objects selected from the source.
      shared_ptr<vector<TableMappings::TransformationRules>> transformationRules_ {};
    };

    class ResourceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(OfflineResourceSettings, offlineResourceSettings_);
        DARABONBA_PTR_TO_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
        DARABONBA_PTR_TO_JSON(RequestedCu, requestedCu_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(OfflineResourceSettings, offlineResourceSettings_);
        DARABONBA_PTR_FROM_JSON(RealtimeResourceSettings, realtimeResourceSettings_);
        DARABONBA_PTR_FROM_JSON(RequestedCu, requestedCu_);
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
      class RealtimeResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealtimeResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, RealtimeResourceSettings& obj) { 
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
        virtual bool empty() const override { return this->resourceGroupIdentifier_ == nullptr; };
        // resourceGroupIdentifier Field Functions 
        bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
        void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
        inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
        inline RealtimeResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


      protected:
        // The identifier of the resource group for Data Integration used for real-time synchronization.
        shared_ptr<string> resourceGroupIdentifier_ {};
      };

      class OfflineResourceSettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfflineResourceSettings& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceGroupIdentifier, resourceGroupIdentifier_);
        };
        friend void from_json(const Darabonba::Json& j, OfflineResourceSettings& obj) { 
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
        virtual bool empty() const override { return this->resourceGroupIdentifier_ == nullptr; };
        // resourceGroupIdentifier Field Functions 
        bool hasResourceGroupIdentifier() const { return this->resourceGroupIdentifier_ != nullptr;};
        void deleteResourceGroupIdentifier() { this->resourceGroupIdentifier_ = nullptr;};
        inline string getResourceGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdentifier_, "") };
        inline OfflineResourceSettings& setResourceGroupIdentifier(string resourceGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resourceGroupIdentifier_, resourceGroupIdentifier) };


      protected:
        // The identifier of the resource group for Data Integration used for batch synchronization.
        shared_ptr<string> resourceGroupIdentifier_ {};
      };

      virtual bool empty() const override { return this->offlineResourceSettings_ == nullptr
        && this->realtimeResourceSettings_ == nullptr && this->requestedCu_ == nullptr; };
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


      // requestedCu Field Functions 
      bool hasRequestedCu() const { return this->requestedCu_ != nullptr;};
      void deleteRequestedCu() { this->requestedCu_ = nullptr;};
      inline float getRequestedCu() const { DARABONBA_PTR_GET_DEFAULT(requestedCu_, 0.0) };
      inline ResourceSettings& setRequestedCu(float requestedCu) { DARABONBA_PTR_SET_VALUE(requestedCu_, requestedCu) };


    protected:
      // The resource used for batch synchronization.
      shared_ptr<ResourceSettings::OfflineResourceSettings> offlineResourceSettings_ {};
      // The resource used for real-time synchronization.
      shared_ptr<ResourceSettings::RealtimeResourceSettings> realtimeResourceSettings_ {};
      // The number of compute units (CUs) in the resource group that are used for full and incremental synchronization.
      shared_ptr<float> requestedCu_ {};
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
        // The name of the configuration item. Valid values:
        // 
        // *   runtime.offline.speed.limit.mb: specifies the maximum transmission rate that is allowed for a batch synchronization task. This configuration item takes effect only when runtime.offline.speed.limit.enable is set to true.
        // *   runtime.offline.speed.limit.enable: specifies whether throttling is enabled for a batch synchronization task.
        // *   dst.offline.connection.max: specifies the maximum number of connections that are allowed for writing data to the destination of a batch synchronization task.
        // *   runtime.offline.concurrent: specifies the maximum number of parallel threads that are allowed for a batch synchronization task.
        // *   dst.realtime.connection.max: specifies the maximum number of connections that are allowed for writing data to the destination of a real-time synchronization task.
        // *   runtime.enable.auto.create.schema: specifies whether schemas are automatically created in the destination of a synchronization task.
        // *   src.offline.datasource.max.connection: specifies the maximum number of connections that are allowed for reading data from the source of a batch synchronization task.
        // *   runtime.realtime.concurrent: specifies the maximum number of parallel threads that are allowed for a real-time synchronization task.
        shared_ptr<string> name_ {};
        // The value of the configuration item.
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
        // The processing policy for DDL messages. Valid values:
        // 
        // *   Ignore: ignores a DDL message.
        // *   Critical: reports an error for a DDL message.
        // *   Normal: normally processes a DDL message.
        shared_ptr<string> action_ {};
        // The type of the DDL operation. Valid values:
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
        // The data type of a destination field.
        shared_ptr<string> destinationDataType_ {};
        // The data type of a source field.
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
      // The channel control settings for the synchronization task. The value of this parameter must be a JSON string.
      shared_ptr<string> channelSettings_ {};
      // The settings for data type mappings between source fields and destination fields. The value of this parameter must be an array.
      shared_ptr<vector<JobSettings::ColumnDataTypeSettings>> columnDataTypeSettings_ {};
      // The settings for periodic scheduling.
      shared_ptr<JobSettings::CycleScheduleSettings> cycleScheduleSettings_ {};
      // The settings for processing DDL messages. The value of this parameter must be an array.
      shared_ptr<vector<JobSettings::DdlHandlingSettings>> ddlHandlingSettings_ {};
      // The runtime settings. The value of this parameter must be an array.
      shared_ptr<vector<JobSettings::RuntimeSettings>> runtimeSettings_ {};
    };

    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->description_ == nullptr && this->jobSettings_ == nullptr && this->resourceSettings_ == nullptr && this->tableMappings_ == nullptr && this->transformationRules_ == nullptr; };
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


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const UpdateDIJobRequest::JobSettings & getJobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest::JobSettings getJobSettings() { DARABONBA_PTR_GET(jobSettings_, UpdateDIJobRequest::JobSettings) };
    inline UpdateDIJobRequest& setJobSettings(const UpdateDIJobRequest::JobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline UpdateDIJobRequest& setJobSettings(UpdateDIJobRequest::JobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


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
    // The ID of the synchronization task.
    shared_ptr<int64_t> DIJobId_ {};
    // The description of the synchronization task.
    shared_ptr<string> description_ {};
    // The settings for the dimension of the synchronization task. The settings include processing policies for DDL messages, policies for data type mappings between source fields and destination fields, and runtime parameters of the synchronization task.
    shared_ptr<UpdateDIJobRequest::JobSettings> jobSettings_ {};
    // The resource settings.
    shared_ptr<UpdateDIJobRequest::ResourceSettings> resourceSettings_ {};
    // The list of mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. Each entry in the list displays a mapping between a rule used to select synchronization objects and a transformation rule applied to the selected synchronization objects.
    shared_ptr<vector<UpdateDIJobRequest::TableMappings>> tableMappings_ {};
    // The list of transformation rules that you want to apply to the synchronization objects selected from the source. Each entry in the list defines a transformation rule.
    shared_ptr<vector<UpdateDIJobRequest::TransformationRules>> transformationRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
