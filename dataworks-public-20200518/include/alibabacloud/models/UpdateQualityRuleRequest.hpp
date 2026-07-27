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
    virtual bool empty() const override { return this->blockType_ == nullptr
        && this->checker_ == nullptr && this->comment_ == nullptr && this->criticalThreshold_ == nullptr && this->entityId_ == nullptr && this->expectValue_ == nullptr
        && this->id_ == nullptr && this->methodName_ == nullptr && this->openSwitch_ == nullptr && this->operator_ == nullptr && this->predictType_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->property_ == nullptr && this->propertyType_ == nullptr && this->ruleName_ == nullptr
        && this->ruleType_ == nullptr && this->taskSetting_ == nullptr && this->templateId_ == nullptr && this->trend_ == nullptr && this->warningThreshold_ == nullptr
        && this->whereCondition_ == nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline int32_t getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
    inline UpdateQualityRuleRequest& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // checker Field Functions 
    bool hasChecker() const { return this->checker_ != nullptr;};
    void deleteChecker() { this->checker_ = nullptr;};
    inline int32_t getChecker() const { DARABONBA_PTR_GET_DEFAULT(checker_, 0) };
    inline UpdateQualityRuleRequest& setChecker(int32_t checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateQualityRuleRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // criticalThreshold Field Functions 
    bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
    void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
    inline string getCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
    inline UpdateQualityRuleRequest& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline UpdateQualityRuleRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline UpdateQualityRuleRequest& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateQualityRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline UpdateQualityRuleRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // openSwitch Field Functions 
    bool hasOpenSwitch() const { return this->openSwitch_ != nullptr;};
    void deleteOpenSwitch() { this->openSwitch_ = nullptr;};
    inline bool getOpenSwitch() const { DARABONBA_PTR_GET_DEFAULT(openSwitch_, false) };
    inline UpdateQualityRuleRequest& setOpenSwitch(bool openSwitch) { DARABONBA_PTR_SET_VALUE(openSwitch_, openSwitch) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateQualityRuleRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // predictType Field Functions 
    bool hasPredictType() const { return this->predictType_ != nullptr;};
    void deletePredictType() { this->predictType_ = nullptr;};
    inline int32_t getPredictType() const { DARABONBA_PTR_GET_DEFAULT(predictType_, 0) };
    inline UpdateQualityRuleRequest& setPredictType(int32_t predictType) { DARABONBA_PTR_SET_VALUE(predictType_, predictType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateQualityRuleRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline UpdateQualityRuleRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline string getPropertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
    inline UpdateQualityRuleRequest& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateQualityRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline UpdateQualityRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // taskSetting Field Functions 
    bool hasTaskSetting() const { return this->taskSetting_ != nullptr;};
    void deleteTaskSetting() { this->taskSetting_ = nullptr;};
    inline string getTaskSetting() const { DARABONBA_PTR_GET_DEFAULT(taskSetting_, "") };
    inline UpdateQualityRuleRequest& setTaskSetting(string taskSetting) { DARABONBA_PTR_SET_VALUE(taskSetting_, taskSetting) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline UpdateQualityRuleRequest& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline UpdateQualityRuleRequest& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline string getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
    inline UpdateQualityRuleRequest& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


    // whereCondition Field Functions 
    bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
    void deleteWhereCondition() { this->whereCondition_ = nullptr;};
    inline string getWhereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
    inline UpdateQualityRuleRequest& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


  protected:
    // The strength of the quality rule. You can specify a rule as a strong or weak rule based on the importance of the rule. Valid values:
    // 
    // - 1: strong rule
    // 
    // - 0: weak rule
    //   If you specify a rule as a strong rule and a critical alert is triggered for the rule, the scheduling of the associated task is blocked.
    shared_ptr<int32_t> blockType_ {};
    // The checker ID. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the checker ID.
    shared_ptr<int32_t> checker_ {};
    // The description of the quality rule.
    shared_ptr<string> comment_ {};
    // The threshold for a critical alert. The threshold specifies the deviation of a check result from the expected value. You can customize the threshold based on your business requirements. If you use a strong rule and a critical alert is triggered, the scheduling of the associated task is blocked.
    shared_ptr<string> criticalThreshold_ {};
    // The ID of the partition filter expression. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the ID of the partition filter expression.
    shared_ptr<int64_t> entityId_ {};
    // The expected value.
    shared_ptr<string> expectValue_ {};
    // The rule ID. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the rule ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the method used to collect sample data. Valid values: avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, and table_count-count_distinct.
    // 
    // This parameter is required.
    shared_ptr<string> methodName_ {};
    // Specifies whether to enable or disable the quality rule. This parameter specifies whether to run the quality rule in the production environment.
    // 
    // - true: The quality rule is triggered when the scheduling task that is associated with the output table of the rule runs.
    // 
    // - false: The quality rule is not triggered when the scheduling task that is associated with the output table of the rule runs.
    shared_ptr<bool> openSwitch_ {};
    // The comparison operator. Valid values: >, >=, =, !=, <, and <=.
    // 
    // > This parameter is required if you set the Checker parameter to 9.
    shared_ptr<string> operator_ {};
    // Specifies whether to use a dynamic threshold. Valid values:
    // 
    // - 0: no
    // 
    // - 2: yes
    shared_ptr<int32_t> predictType_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The name of the engine or data source. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the name.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The name of the field.
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
    // The data type of the field.
    shared_ptr<string> propertyType_ {};
    // The name of the quality rule.
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // 
    // - 0: system template
    // 
    // - 1: custom SQL
    // 
    // - 2: custom template
    shared_ptr<int32_t> ruleType_ {};
    // The variable settings that are inserted before a custom rule. The settings are in the format of x=a,y=b.
    shared_ptr<string> taskSetting_ {};
    // The ID of the template that is used for the check. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the template ID.
    shared_ptr<int32_t> templateId_ {};
    // The trend of the check result. Valid values:
    // 
    // - up: upward trend
    // 
    // - down: downward trend
    // 
    // - abs: absolute value
    shared_ptr<string> trend_ {};
    // The threshold for a warning alert. The threshold specifies the deviation of a check result from the expected value. You can customize the threshold based on your business requirements.
    shared_ptr<string> warningThreshold_ {};
    // The filter condition or custom SQL statement that is used for the check.
    shared_ptr<string> whereCondition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
