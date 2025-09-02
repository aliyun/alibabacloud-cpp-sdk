// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRULESRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRULESRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListQualityRulesResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(CheckerId, checkerId_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_TO_JSON(FixCheck, fixCheck_);
      DARABONBA_PTR_TO_JSON(HistoryCriticalThreshold, historyCriticalThreshold_);
      DARABONBA_PTR_TO_JSON(HistoryWarningThreshold, historyWarningThreshold_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_TO_JSON(MethodId, methodId_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(OnDuty, onDuty_);
      DARABONBA_PTR_TO_JSON(OnDutyAccountName, onDutyAccountName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(RuleCheckerRelationId, ruleCheckerRelationId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
      DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(CheckerId, checkerId_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_FROM_JSON(FixCheck, fixCheck_);
      DARABONBA_PTR_FROM_JSON(HistoryCriticalThreshold, historyCriticalThreshold_);
      DARABONBA_PTR_FROM_JSON(HistoryWarningThreshold, historyWarningThreshold_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_FROM_JSON(MethodId, methodId_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(OnDuty, onDuty_);
      DARABONBA_PTR_FROM_JSON(OnDutyAccountName, onDutyAccountName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(RuleCheckerRelationId, ruleCheckerRelationId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
      DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
    };
    ListQualityRulesResponseBodyDataRules() = default ;
    ListQualityRulesResponseBodyDataRules(const ListQualityRulesResponseBodyDataRules &) = default ;
    ListQualityRulesResponseBodyDataRules(ListQualityRulesResponseBodyDataRules &&) = default ;
    ListQualityRulesResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityRulesResponseBodyDataRules() = default ;
    ListQualityRulesResponseBodyDataRules& operator=(const ListQualityRulesResponseBodyDataRules &) = default ;
    ListQualityRulesResponseBodyDataRules& operator=(ListQualityRulesResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockType_ != nullptr
        && this->checkerId_ != nullptr && this->comment_ != nullptr && this->criticalThreshold_ != nullptr && this->entityId_ != nullptr && this->expectValue_ != nullptr
        && this->fixCheck_ != nullptr && this->historyCriticalThreshold_ != nullptr && this->historyWarningThreshold_ != nullptr && this->id_ != nullptr && this->matchExpression_ != nullptr
        && this->methodId_ != nullptr && this->methodName_ != nullptr && this->onDuty_ != nullptr && this->onDutyAccountName_ != nullptr && this->projectName_ != nullptr
        && this->property_ != nullptr && this->propertyKey_ != nullptr && this->ruleCheckerRelationId_ != nullptr && this->ruleName_ != nullptr && this->ruleType_ != nullptr
        && this->tableName_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr && this->trend_ != nullptr && this->warningThreshold_ != nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline int32_t blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
    inline ListQualityRulesResponseBodyDataRules& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // checkerId Field Functions 
    bool hasCheckerId() const { return this->checkerId_ != nullptr;};
    void deleteCheckerId() { this->checkerId_ = nullptr;};
    inline int32_t checkerId() const { DARABONBA_PTR_GET_DEFAULT(checkerId_, 0) };
    inline ListQualityRulesResponseBodyDataRules& setCheckerId(int32_t checkerId) { DARABONBA_PTR_SET_VALUE(checkerId_, checkerId) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListQualityRulesResponseBodyDataRules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // criticalThreshold Field Functions 
    bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
    void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
    inline string criticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
    inline ListQualityRulesResponseBodyDataRules& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ListQualityRulesResponseBodyDataRules& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline string expectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
    inline ListQualityRulesResponseBodyDataRules& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // fixCheck Field Functions 
    bool hasFixCheck() const { return this->fixCheck_ != nullptr;};
    void deleteFixCheck() { this->fixCheck_ = nullptr;};
    inline bool fixCheck() const { DARABONBA_PTR_GET_DEFAULT(fixCheck_, false) };
    inline ListQualityRulesResponseBodyDataRules& setFixCheck(bool fixCheck) { DARABONBA_PTR_SET_VALUE(fixCheck_, fixCheck) };


    // historyCriticalThreshold Field Functions 
    bool hasHistoryCriticalThreshold() const { return this->historyCriticalThreshold_ != nullptr;};
    void deleteHistoryCriticalThreshold() { this->historyCriticalThreshold_ = nullptr;};
    inline string historyCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(historyCriticalThreshold_, "") };
    inline ListQualityRulesResponseBodyDataRules& setHistoryCriticalThreshold(string historyCriticalThreshold) { DARABONBA_PTR_SET_VALUE(historyCriticalThreshold_, historyCriticalThreshold) };


    // historyWarningThreshold Field Functions 
    bool hasHistoryWarningThreshold() const { return this->historyWarningThreshold_ != nullptr;};
    void deleteHistoryWarningThreshold() { this->historyWarningThreshold_ = nullptr;};
    inline string historyWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(historyWarningThreshold_, "") };
    inline ListQualityRulesResponseBodyDataRules& setHistoryWarningThreshold(string historyWarningThreshold) { DARABONBA_PTR_SET_VALUE(historyWarningThreshold_, historyWarningThreshold) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListQualityRulesResponseBodyDataRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchExpression Field Functions 
    bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
    void deleteMatchExpression() { this->matchExpression_ = nullptr;};
    inline string matchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
    inline ListQualityRulesResponseBodyDataRules& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


    // methodId Field Functions 
    bool hasMethodId() const { return this->methodId_ != nullptr;};
    void deleteMethodId() { this->methodId_ = nullptr;};
    inline int32_t methodId() const { DARABONBA_PTR_GET_DEFAULT(methodId_, 0) };
    inline ListQualityRulesResponseBodyDataRules& setMethodId(int32_t methodId) { DARABONBA_PTR_SET_VALUE(methodId_, methodId) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // onDuty Field Functions 
    bool hasOnDuty() const { return this->onDuty_ != nullptr;};
    void deleteOnDuty() { this->onDuty_ = nullptr;};
    inline string onDuty() const { DARABONBA_PTR_GET_DEFAULT(onDuty_, "") };
    inline ListQualityRulesResponseBodyDataRules& setOnDuty(string onDuty) { DARABONBA_PTR_SET_VALUE(onDuty_, onDuty) };


    // onDutyAccountName Field Functions 
    bool hasOnDutyAccountName() const { return this->onDutyAccountName_ != nullptr;};
    void deleteOnDutyAccountName() { this->onDutyAccountName_ = nullptr;};
    inline string onDutyAccountName() const { DARABONBA_PTR_GET_DEFAULT(onDutyAccountName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setOnDutyAccountName(string onDutyAccountName) { DARABONBA_PTR_SET_VALUE(onDutyAccountName_, onDutyAccountName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ListQualityRulesResponseBodyDataRules& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline ListQualityRulesResponseBodyDataRules& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // ruleCheckerRelationId Field Functions 
    bool hasRuleCheckerRelationId() const { return this->ruleCheckerRelationId_ != nullptr;};
    void deleteRuleCheckerRelationId() { this->ruleCheckerRelationId_ = nullptr;};
    inline int64_t ruleCheckerRelationId() const { DARABONBA_PTR_GET_DEFAULT(ruleCheckerRelationId_, 0L) };
    inline ListQualityRulesResponseBodyDataRules& setRuleCheckerRelationId(int64_t ruleCheckerRelationId) { DARABONBA_PTR_SET_VALUE(ruleCheckerRelationId_, ruleCheckerRelationId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListQualityRulesResponseBodyDataRules& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline ListQualityRulesResponseBodyDataRules& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListQualityRulesResponseBodyDataRules& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string trend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline ListQualityRulesResponseBodyDataRules& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline string warningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
    inline ListQualityRulesResponseBodyDataRules& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


  protected:
    // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
    // 
    // *   1: The monitoring rule is a strong rule.
    // *   0: The monitoring rule is a weak rule. You can specify the strength of a monitoring rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
    std::shared_ptr<int32_t> blockType_ = nullptr;
    // The checker ID.
    std::shared_ptr<int32_t> checkerId_ = nullptr;
    // The description of the monitoring rule.
    std::shared_ptr<string> comment_ = nullptr;
    // The threshold for a critical alert. The threshold indicates the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
    std::shared_ptr<string> criticalThreshold_ = nullptr;
    // The ID of the partition filter expression.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The expected value.
    std::shared_ptr<string> expectValue_ = nullptr;
    // Indicates whether the monitoring is performed based on a fixed value.
    std::shared_ptr<bool> fixCheck_ = nullptr;
    // The historical threshold for a critical alert.
    std::shared_ptr<string> historyCriticalThreshold_ = nullptr;
    // The historical threshold for a warning alert.
    std::shared_ptr<string> historyWarningThreshold_ = nullptr;
    // The monitoring rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The partition filter expression.
    std::shared_ptr<string> matchExpression_ = nullptr;
    // The ID of the task that is associated with the partition filter expression.
    std::shared_ptr<int32_t> methodId_ = nullptr;
    // The method that is used to collect sample data, such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
    std::shared_ptr<string> methodName_ = nullptr;
    // The name of the Alibaba Cloud account that is used to configure the monitoring rule.
    std::shared_ptr<string> onDuty_ = nullptr;
    // The name of the Alibaba Cloud account that is used to configure the monitoring rule.
    std::shared_ptr<string> onDutyAccountName_ = nullptr;
    // The name of the compute engine or data source.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> property_ = nullptr;
    // The field that is used to associate with monitoring rules at the frontend. This parameter can be ignored.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The ID of the task that is associated with the partition filter expression.
    std::shared_ptr<int64_t> ruleCheckerRelationId_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the monitoring rule. Valid values:
    // 
    // *   0: The monitoring rule is created by the system.
    // *   1: The monitoring rule is created by a user.
    // *   2: The monitoring rule is a workspace-level rule.
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the monitoring template.
    std::shared_ptr<int32_t> templateId_ = nullptr;
    // The name of the monitoring template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The trend of the monitoring result.
    std::shared_ptr<string> trend_ = nullptr;
    // The threshold for a warning alert. The threshold specifies the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements.
    std::shared_ptr<string> warningThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
