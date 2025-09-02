// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(Checker, checker_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(OpenSwitch, openSwitch_);
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
    friend void from_json(const Darabonba::Json& j, UpdateQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(Checker, checker_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(OpenSwitch, openSwitch_);
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
    UpdateQualityRuleRequest() = default ;
    UpdateQualityRuleRequest(const UpdateQualityRuleRequest &) = default ;
    UpdateQualityRuleRequest(UpdateQualityRuleRequest &&) = default ;
    UpdateQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQualityRuleRequest() = default ;
    UpdateQualityRuleRequest& operator=(const UpdateQualityRuleRequest &) = default ;
    UpdateQualityRuleRequest& operator=(UpdateQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockType_ != nullptr
        && this->checker_ != nullptr && this->comment_ != nullptr && this->criticalThreshold_ != nullptr && this->entityId_ != nullptr && this->expectValue_ != nullptr
        && this->id_ != nullptr && this->methodName_ != nullptr && this->openSwitch_ != nullptr && this->operator_ != nullptr && this->predictType_ != nullptr
        && this->projectId_ != nullptr && this->projectName_ != nullptr && this->property_ != nullptr && this->propertyType_ != nullptr && this->ruleName_ != nullptr
        && this->ruleType_ != nullptr && this->taskSetting_ != nullptr && this->templateId_ != nullptr && this->trend_ != nullptr && this->warningThreshold_ != nullptr
        && this->whereCondition_ != nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline int32_t blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
    inline UpdateQualityRuleRequest& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // checker Field Functions 
    bool hasChecker() const { return this->checker_ != nullptr;};
    void deleteChecker() { this->checker_ = nullptr;};
    inline int32_t checker() const { DARABONBA_PTR_GET_DEFAULT(checker_, 0) };
    inline UpdateQualityRuleRequest& setChecker(int32_t checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateQualityRuleRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // criticalThreshold Field Functions 
    bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
    void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
    inline string criticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
    inline UpdateQualityRuleRequest& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline UpdateQualityRuleRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string expectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline UpdateQualityRuleRequest& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateQualityRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline UpdateQualityRuleRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // openSwitch Field Functions 
    bool hasOpenSwitch() const { return this->openSwitch_ != nullptr;};
    void deleteOpenSwitch() { this->openSwitch_ = nullptr;};
    inline bool openSwitch() const { DARABONBA_PTR_GET_DEFAULT(openSwitch_, false) };
    inline UpdateQualityRuleRequest& setOpenSwitch(bool openSwitch) { DARABONBA_PTR_SET_VALUE(openSwitch_, openSwitch) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateQualityRuleRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // predictType Field Functions 
    bool hasPredictType() const { return this->predictType_ != nullptr;};
    void deletePredictType() { this->predictType_ = nullptr;};
    inline int32_t predictType() const { DARABONBA_PTR_GET_DEFAULT(predictType_, 0) };
    inline UpdateQualityRuleRequest& setPredictType(int32_t predictType) { DARABONBA_PTR_SET_VALUE(predictType_, predictType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateQualityRuleRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline UpdateQualityRuleRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline string propertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
    inline UpdateQualityRuleRequest& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateQualityRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline UpdateQualityRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // taskSetting Field Functions 
    bool hasTaskSetting() const { return this->taskSetting_ != nullptr;};
    void deleteTaskSetting() { this->taskSetting_ = nullptr;};
    inline string taskSetting() const { DARABONBA_PTR_GET_DEFAULT(taskSetting_, "") };
    inline UpdateQualityRuleRequest& setTaskSetting(string taskSetting) { DARABONBA_PTR_SET_VALUE(taskSetting_, taskSetting) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline UpdateQualityRuleRequest& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string trend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline UpdateQualityRuleRequest& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline string warningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
    inline UpdateQualityRuleRequest& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


    // whereCondition Field Functions 
    bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
    void deleteWhereCondition() { this->whereCondition_ = nullptr;};
    inline string whereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
    inline UpdateQualityRuleRequest& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


  protected:
    // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
    // 
    // *   1: indicates that the monitoring rule is a strong rule.
    // *   0: indicates that the monitoring rule is a weak rule. You can specify whether a monitoring rule is a strong rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and nodes that are associated with the rule are blocked from running.
    std::shared_ptr<int32_t> blockType_ = nullptr;
    // The checker ID. Valid values: 2: indicates that the current value is compared with the average value of the previous 7 days. 3: indicates that the current value is compared with the average value of the previous 30 days. 4: indicates that the current value is compared with the value 1 day earlier. 5: indicates that the current value is compared with the value 7 days earlier. 6: indicates that the current value is compared with the value 30 days earlier. 7: indicates the variance between the current value and the value 7 days earlier. 8: indicates the variance between the current value and the value 30 days earlier. 9: indicates that the current value is compared with a fixed value. 10: indicates that the current value is compared with the value 1, 7, or 30 days earlier. 11: indicates that the current value is compared with the value of the previous cycle. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the ID.
    std::shared_ptr<int32_t> checker_ = nullptr;
    // The description of the monitoring rule.
    std::shared_ptr<string> comment_ = nullptr;
    // The threshold for a critical alert. The threshold indicates the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
    std::shared_ptr<string> criticalThreshold_ = nullptr;
    // The ID of the partition filter expression. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to obtain the ID of the partition filter expression.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The expected value of the monitoring rule.
    std::shared_ptr<string> expectValue_ = nullptr;
    // The monitoring rule ID. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the ID of the monitoring rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The method that is used to collect sample data, such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
    // 
    // This parameter is required.
    std::shared_ptr<string> methodName_ = nullptr;
    // Specifies whether to enable the monitoring rule in the production environment. Valid values:
    // 
    // *   true: The monitoring rule is triggered when the associated auto triggered node that generates the output data starts to run.
    // *   false: The monitoring rule is not triggered when the associated auto triggered node that generates the output data starts to run.
    std::shared_ptr<bool> openSwitch_ = nullptr;
    // The comparison operator, such as >, >=, =, ≠, <, or <=.
    // 
    // >  If you set the Checker parameter to 9, you must configure the Operator parameter.
    std::shared_ptr<string> operator_ = nullptr;
    // Specifies whether the threshold is a dynamic threshold. Valid values:
    // 
    // *   0: The threshold is not a dynamic threshold.
    // *   2: The threshold is a dynamic threshold.
    std::shared_ptr<int32_t> predictType_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the compute engine or data source. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the name of the compute engine or data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> property_ = nullptr;
    // The data type of the field.
    std::shared_ptr<string> propertyType_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the monitoring rule. Valid values:
    // 
    // *   0: The monitoring rule is created by the system.
    // *   1: The monitoring rule is created by a user.
    // *   2: The monitoring rule is a workspace-level rule.
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The variable settings inserted before the custom rule. Format: x=a,y=b.
    std::shared_ptr<string> taskSetting_ = nullptr;
    // The ID of the monitoring template. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to obtain the ID of the monitoring template.
    std::shared_ptr<int32_t> templateId_ = nullptr;
    // The trend of the monitoring result. Valid values:
    // 
    // *   up: increasing
    // *   down: decreasing
    // *   abs: absolute value
    std::shared_ptr<string> trend_ = nullptr;
    // The threshold for a warning alert. The threshold specifies the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements.
    std::shared_ptr<string> warningThreshold_ = nullptr;
    // The filter condition or custom SQL statement that is used for monitoring.
    std::shared_ptr<string> whereCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
