// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTRANSFORMATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTRANSFORMATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDIJobRequestTransformationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestTransformationRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_TO_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestTransformationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_FROM_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
    };
    UpdateDIJobRequestTransformationRules() = default ;
    UpdateDIJobRequestTransformationRules(const UpdateDIJobRequestTransformationRules &) = default ;
    UpdateDIJobRequestTransformationRules(UpdateDIJobRequestTransformationRules &&) = default ;
    UpdateDIJobRequestTransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestTransformationRules() = default ;
    UpdateDIJobRequestTransformationRules& operator=(const UpdateDIJobRequestTransformationRules &) = default ;
    UpdateDIJobRequestTransformationRules& operator=(UpdateDIJobRequestTransformationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleActionType_ != nullptr
        && this->ruleExpression_ != nullptr && this->ruleName_ != nullptr && this->ruleTargetType_ != nullptr; };
    // ruleActionType Field Functions 
    bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
    void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
    inline string ruleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
    inline UpdateDIJobRequestTransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


    // ruleExpression Field Functions 
    bool hasRuleExpression() const { return this->ruleExpression_ != nullptr;};
    void deleteRuleExpression() { this->ruleExpression_ = nullptr;};
    inline string ruleExpression() const { DARABONBA_PTR_GET_DEFAULT(ruleExpression_, "") };
    inline UpdateDIJobRequestTransformationRules& setRuleExpression(string ruleExpression) { DARABONBA_PTR_SET_VALUE(ruleExpression_, ruleExpression) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateDIJobRequestTransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTargetType Field Functions 
    bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
    void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
    inline string ruleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
    inline UpdateDIJobRequestTransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


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
    std::shared_ptr<string> ruleActionType_ = nullptr;
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
    std::shared_ptr<string> ruleExpression_ = nullptr;
    // The name of the rule. If the values of the RuleActionType parameter and the RuleTargetType parameter are the same for multiple transformation rules, you must make sure that the transformation rule names are unique.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the object on which you want to perform the action. Valid values:
    // 
    // *   Table
    // *   Schema
    std::shared_ptr<string> ruleTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
