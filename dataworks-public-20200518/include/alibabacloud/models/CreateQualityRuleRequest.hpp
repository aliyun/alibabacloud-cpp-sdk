// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(Checker, checker_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(PredictType, predictType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TaskSetting, taskSetting_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
      DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
      DARABONBA_PTR_TO_JSON(WhereCondition, whereCondition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(Checker, checker_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(PredictType, predictType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TaskSetting, taskSetting_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
      DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
      DARABONBA_PTR_FROM_JSON(WhereCondition, whereCondition_);
    };
    CreateQualityRuleRequest() = default ;
    CreateQualityRuleRequest(const CreateQualityRuleRequest &) = default ;
    CreateQualityRuleRequest(CreateQualityRuleRequest &&) = default ;
    CreateQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityRuleRequest() = default ;
    CreateQualityRuleRequest& operator=(const CreateQualityRuleRequest &) = default ;
    CreateQualityRuleRequest& operator=(CreateQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockType_ == nullptr
        && this->checker_ == nullptr && this->comment_ == nullptr && this->criticalThreshold_ == nullptr && this->entityId_ == nullptr && this->expectValue_ == nullptr
        && this->methodName_ == nullptr && this->operator_ == nullptr && this->predictType_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->property_ == nullptr && this->propertyType_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->taskSetting_ == nullptr
        && this->templateId_ == nullptr && this->trend_ == nullptr && this->warningThreshold_ == nullptr && this->whereCondition_ == nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline int32_t getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
    inline CreateQualityRuleRequest& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // checker Field Functions 
    bool hasChecker() const { return this->checker_ != nullptr;};
    void deleteChecker() { this->checker_ = nullptr;};
    inline int32_t getChecker() const { DARABONBA_PTR_GET_DEFAULT(checker_, 0) };
    inline CreateQualityRuleRequest& setChecker(int32_t checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateQualityRuleRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // criticalThreshold Field Functions 
    bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
    void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
    inline string getCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
    inline CreateQualityRuleRequest& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline CreateQualityRuleRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline CreateQualityRuleRequest& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline CreateQualityRuleRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateQualityRuleRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // predictType Field Functions 
    bool hasPredictType() const { return this->predictType_ != nullptr;};
    void deletePredictType() { this->predictType_ = nullptr;};
    inline int32_t getPredictType() const { DARABONBA_PTR_GET_DEFAULT(predictType_, 0) };
    inline CreateQualityRuleRequest& setPredictType(int32_t predictType) { DARABONBA_PTR_SET_VALUE(predictType_, predictType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateQualityRuleRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CreateQualityRuleRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline string getPropertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
    inline CreateQualityRuleRequest& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateQualityRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline CreateQualityRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // taskSetting Field Functions 
    bool hasTaskSetting() const { return this->taskSetting_ != nullptr;};
    void deleteTaskSetting() { this->taskSetting_ = nullptr;};
    inline string getTaskSetting() const { DARABONBA_PTR_GET_DEFAULT(taskSetting_, "") };
    inline CreateQualityRuleRequest& setTaskSetting(string taskSetting) { DARABONBA_PTR_SET_VALUE(taskSetting_, taskSetting) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline CreateQualityRuleRequest& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline CreateQualityRuleRequest& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline string getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
    inline CreateQualityRuleRequest& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


    // whereCondition Field Functions 
    bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
    void deleteWhereCondition() { this->whereCondition_ = nullptr;};
    inline string getWhereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
    inline CreateQualityRuleRequest& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


  protected:
    // The strength of the rule. Valid values:
    // 
    // - 0: weak rule
    // 
    // - 1: strong rule
    // 
    // This parameter is required.
    shared_ptr<int32_t> blockType_ {};
    // The ID of the checker. Valid values:
    // 
    // - 2: 7-day average fluctuation
    // 
    // - 3: 30-day average fluctuation
    // 
    // - 4: day-over-day comparison
    // 
    // - 5: week-over-week comparison
    // 
    // - 6: month-over-month comparison
    // 
    // - 7: 7-day variance fluctuation
    // 
    // - 8: 30-day variance fluctuation
    // 
    // - 9: comparison with a fixed value
    // 
    // - 10: fluctuation detection over 1, 7, and 30 days
    // 
    // - 11: comparison with the previous cycle
    shared_ptr<int32_t> checker_ {};
    // The comments of the rule.
    shared_ptr<string> comment_ {};
    // The critical threshold. It indicates the deviation of the check result from the expected value. You can customize this threshold based on your business requirements. If a strong rule is used and a critical alert is triggered, the scheduling task is blocked.
    shared_ptr<string> criticalThreshold_ {};
    // The ID of the partition filter expression.
    // 
    // This parameter is required.
    shared_ptr<int64_t> entityId_ {};
    // The expected value.
    shared_ptr<string> expectValue_ {};
    // The check method. If you use a custom SQL statement, set this parameter to `user_defined`.
    shared_ptr<string> methodName_ {};
    // The comparison operator. Examples: `>`, `>=`, `=`, `<>`, `<`, and `<=`.
    // 
    // > If you set the Checker parameter to 9, you must specify the Operator parameter.
    shared_ptr<string> operator_ {};
    // Specifies whether to use a dynamic threshold. Valid values:
    // 
    // This parameter is required.
    shared_ptr<int32_t> predictType_ {};
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The name of the compute engine or data source.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The field that is monitored by the rule. To perform a table-level check, set this parameter to `table_count` for the number of rows or `table_size` for the table size.
    shared_ptr<string> property_ {};
    // The data type of the field. For a table-level check, set this parameter to `table`. For a field-level check, set this parameter to a specific data type, such as `bigint`.
    shared_ptr<string> propertyType_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // 
    // - 0: system template
    // 
    // - 1: custom SQL
    // 
    // - 2: custom template
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleType_ {};
    // The variable settings that are inserted before the custom rule. Format: x=a,y=b.
    shared_ptr<string> taskSetting_ {};
    // The ID of the template.
    shared_ptr<int32_t> templateId_ {};
    // The trend of the check result. Valid values:
    // 
    // - `up`: upward trend
    // 
    // - `down`: downward trend
    // 
    // - `abs`: absolute value
    shared_ptr<string> trend_ {};
    // The warning threshold. It indicates the deviation of the check result from the expected value. You can customize this threshold based on your business requirements.
    shared_ptr<string> warningThreshold_ {};
    // The filter condition or custom SQL statement.
    shared_ptr<string> whereCondition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
