// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTRANSFORMATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOTRANSFORMATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoTransformationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoTransformationRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_TO_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTargetType, ruleTargetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoTransformationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
      DARABONBA_PTR_FROM_JSON(RuleExpression, ruleExpression_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTargetType, ruleTargetType_);
    };
    GetDIJobResponseBodyPagingInfoTransformationRules() = default ;
    GetDIJobResponseBodyPagingInfoTransformationRules(const GetDIJobResponseBodyPagingInfoTransformationRules &) = default ;
    GetDIJobResponseBodyPagingInfoTransformationRules(GetDIJobResponseBodyPagingInfoTransformationRules &&) = default ;
    GetDIJobResponseBodyPagingInfoTransformationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoTransformationRules() = default ;
    GetDIJobResponseBodyPagingInfoTransformationRules& operator=(const GetDIJobResponseBodyPagingInfoTransformationRules &) = default ;
    GetDIJobResponseBodyPagingInfoTransformationRules& operator=(GetDIJobResponseBodyPagingInfoTransformationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleActionType_ == nullptr
        && return this->ruleExpression_ == nullptr && return this->ruleName_ == nullptr && return this->ruleTargetType_ == nullptr; };
    // ruleActionType Field Functions 
    bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
    void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
    inline string ruleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
    inline GetDIJobResponseBodyPagingInfoTransformationRules& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


    // ruleExpression Field Functions 
    bool hasRuleExpression() const { return this->ruleExpression_ != nullptr;};
    void deleteRuleExpression() { this->ruleExpression_ = nullptr;};
    inline string ruleExpression() const { DARABONBA_PTR_GET_DEFAULT(ruleExpression_, "") };
    inline GetDIJobResponseBodyPagingInfoTransformationRules& setRuleExpression(string ruleExpression) { DARABONBA_PTR_SET_VALUE(ruleExpression_, ruleExpression) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetDIJobResponseBodyPagingInfoTransformationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTargetType Field Functions 
    bool hasRuleTargetType() const { return this->ruleTargetType_ != nullptr;};
    void deleteRuleTargetType() { this->ruleTargetType_ = nullptr;};
    inline string ruleTargetType() const { DARABONBA_PTR_GET_DEFAULT(ruleTargetType_, "") };
    inline GetDIJobResponseBodyPagingInfoTransformationRules& setRuleTargetType(string ruleTargetType) { DARABONBA_PTR_SET_VALUE(ruleTargetType_, ruleTargetType) };


  protected:
    // The action type. Valid values:
    // 
    // *   DefinePrimaryKey
    // *   Rename
    // *   AddColumn
    // *   HandleDml
    // *   DefineIncrementalCondition
    // *   DefineCycleScheduleSettings
    // *   DefinePartitionKey
    std::shared_ptr<string> ruleActionType_ = nullptr;
    // The expression of the rule. The expression is a JSON string.
    // 
    // 1.  Example of a renaming rule
    // 
    // *   Example: {"expression":"${srcDatasourceName}_${srcDatabaseName}_0922" }
    // *   expression: the expression of the renaming rule. You can use the following variables in an expression: ${srcDatasourceName}, ${srcDatabaseName}, and ${srcTableName}. ${srcDatasourceName} indicates the name of the source. ${srcDatabaseName} indicates the name of a source database. ${srcTableName} indicates the name of a source table.
    // 
    // 2.  Example of a column addition rule
    // 
    // *   Example: {"columns":[{"columnName":"my_add_column","columnValueType":"Constant","columnValue":"123"}]}
    // *   If no rule of this type is configured, no fields are added to the destination and no values are assigned by default.
    // *   columnName: the name of the field that is added.
    // *   columnValueType: the value type of the field. Valid values: Constant and Variable.
    // *   columnValue: the value of the field. If the columnValueType parameter is set to Constant, the value of the columnValue parameter is a constant of the STRING data type. If the columnValueType parameter is set to Variable, the value of the columnValue parameter is a built-in variable. The following built-in variables are supported: EXECUTE_TIME (LONG data type), DB_NAME_SRC (STRING data type), DATASOURCE_NAME_SRC (STRING data type), TABLE_NAME_SRC (STRING data type), DB_NAME_DEST (STRING data type), DATASOURCE_NAME_DEST (STRING data type), TABLE_NAME_DEST (STRING data type), and DB_NAME_SRC_TRANSED (STRING data type). EXECUTE_TIME indicates the execution time. DB_NAME_SRC indicates the name of a source database. DATASOURCE_NAME_SRC indicates the name of the source. TABLE_NAME_SRC indicates the name of a source table. DB_NAME_DEST indicates the name of a destination database. DATASOURCE_NAME_DEST indicates the name of the destination. TABLE_NAME_DEST indicates the name of a destination table. DB_NAME_SRC_TRANSED indicates the database name obtained after a transformation.
    // 
    // 3.  Example of a rule used to specify primary key fields for a destination table
    // 
    // *   Example: {"columns":["ukcolumn1","ukcolumn2"]}
    // *   If no rule of this type is configured, the primary key fields in the mapped source table are used for the destination table by default.
    // *   If the destination table is an existing table, Data Integration does not modify the schema of the destination table. If the specified primary key fields do not exist in the destination table, an error is reported when the synchronization task starts to run.
    // *   If the destination table is automatically created by the system, Data Integration automatically creates the schema of the destination table. The schema contains the primary key fields that you specify. If the specified primary key fields do not exist in the destination table, an error is reported when the synchronization task starts to run.
    // 
    // 4.  Example of a rule used to process DML messages
    // 
    // *   Example: {"dmlPolicies":[{"dmlType":"Delete","dmlAction":"Filter","filterCondition":"id > 1"}]}
    // *   If no rule of this type is configured, the default processing policy for messages generated for insert, update, and delete operations is Normal.
    // *   dmlType: the DML operation. Valid values: Insert, Update, and Delete.
    // *   dmlAction: the processing policy for DML messages. Valid values: Normal, Ignore, Filter, and LogicalDelete. Filter indicates conditional processing. The value Filter is returned for the dmlAction parameter only when the value of the dmlType parameter is Update or Delete.
    // *   filterCondition: the condition used to filter DML messages. This parameter is returned only when the value of the dmlAction parameter is Filter.
    // 
    // 5.  Example of a rule used to perform incremental synchronization
    // 
    // *   Example: {"where":"id > 0"}
    // *   The rule used to perform incremental synchronization is returned.
    // 
    // 6.  Example of a rule used to configure scheduling parameters for an auto triggered task
    // 
    // *   Example: {"cronExpress":" \\* \\* \\* \\* \\* \\*", "cycleType":"1"}
    // *   The rule used to configure scheduling parameters for an auto triggered task is returned.
    // 
    // 7.  Example of a rule used to specify a partition key
    // 
    // *   Example: {"columns":["id"]}
    // *   The rule used to specify a partition key is returned.
    std::shared_ptr<string> ruleExpression_ = nullptr;
    // The name of the rule. If the values of the RuleActionType parameter and the RuleTargetType parameter are the same for multiple transformation rules, you must make sure that the transformation rule names are unique.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the object on which the action is performed. Valid values:
    // 
    // *   Table
    // *   Schema
    // *   Database
    std::shared_ptr<string> ruleTargetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
