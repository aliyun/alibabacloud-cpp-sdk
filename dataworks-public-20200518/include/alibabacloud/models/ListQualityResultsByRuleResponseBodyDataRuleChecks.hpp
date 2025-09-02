// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue.hpp>
#include <alibabacloud/models/ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListQualityResultsByRuleResponseBodyDataRuleChecks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityResultsByRuleResponseBodyDataRuleChecks& obj) { 
      DARABONBA_PTR_TO_JSON(ActualExpression, actualExpression_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_TO_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_TO_JSON(CheckerId, checkerId_);
      DARABONBA_PTR_TO_JSON(CheckerName, checkerName_);
      DARABONBA_PTR_TO_JSON(CheckerType, checkerType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_TO_JSON(DateType, dateType_);
      DARABONBA_PTR_TO_JSON(DiscreteCheck, discreteCheck_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
      DARABONBA_PTR_TO_JSON(ExternalType, externalType_);
      DARABONBA_PTR_TO_JSON(FixedCheck, fixedCheck_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsPrediction, isPrediction_);
      DARABONBA_PTR_TO_JSON(LowerValue, lowerValue_);
      DARABONBA_PTR_TO_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Open, open_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(ReferenceValue, referenceValue_);
      DARABONBA_PTR_TO_JSON(ResultString, resultString_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SampleValue, sampleValue_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
      DARABONBA_PTR_TO_JSON(UpperValue, upperValue_);
      DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
      DARABONBA_PTR_TO_JSON(WhereCondition, whereCondition_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityResultsByRuleResponseBodyDataRuleChecks& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualExpression, actualExpression_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_FROM_JSON(CheckerId, checkerId_);
      DARABONBA_PTR_FROM_JSON(CheckerName, checkerName_);
      DARABONBA_PTR_FROM_JSON(CheckerType, checkerType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CriticalThreshold, criticalThreshold_);
      DARABONBA_PTR_FROM_JSON(DateType, dateType_);
      DARABONBA_PTR_FROM_JSON(DiscreteCheck, discreteCheck_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
      DARABONBA_PTR_FROM_JSON(ExternalType, externalType_);
      DARABONBA_PTR_FROM_JSON(FixedCheck, fixedCheck_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsPrediction, isPrediction_);
      DARABONBA_PTR_FROM_JSON(LowerValue, lowerValue_);
      DARABONBA_PTR_FROM_JSON(MatchExpression, matchExpression_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Open, open_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(ReferenceValue, referenceValue_);
      DARABONBA_PTR_FROM_JSON(ResultString, resultString_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SampleValue, sampleValue_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
      DARABONBA_PTR_FROM_JSON(UpperValue, upperValue_);
      DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
      DARABONBA_PTR_FROM_JSON(WhereCondition, whereCondition_);
    };
    ListQualityResultsByRuleResponseBodyDataRuleChecks() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecks(const ListQualityResultsByRuleResponseBodyDataRuleChecks &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecks(ListQualityResultsByRuleResponseBodyDataRuleChecks &&) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityResultsByRuleResponseBodyDataRuleChecks() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecks& operator=(const ListQualityResultsByRuleResponseBodyDataRuleChecks &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecks& operator=(ListQualityResultsByRuleResponseBodyDataRuleChecks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualExpression_ != nullptr
        && this->beginTime_ != nullptr && this->bizDate_ != nullptr && this->blockType_ != nullptr && this->checkResult_ != nullptr && this->checkResultStatus_ != nullptr
        && this->checkerId_ != nullptr && this->checkerName_ != nullptr && this->checkerType_ != nullptr && this->comment_ != nullptr && this->criticalThreshold_ != nullptr
        && this->dateType_ != nullptr && this->discreteCheck_ != nullptr && this->endTime_ != nullptr && this->entityId_ != nullptr && this->expectValue_ != nullptr
        && this->externalId_ != nullptr && this->externalType_ != nullptr && this->fixedCheck_ != nullptr && this->id_ != nullptr && this->isPrediction_ != nullptr
        && this->lowerValue_ != nullptr && this->matchExpression_ != nullptr && this->methodName_ != nullptr && this->op_ != nullptr && this->open_ != nullptr
        && this->projectName_ != nullptr && this->property_ != nullptr && this->referenceValue_ != nullptr && this->resultString_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr && this->sampleValue_ != nullptr && this->tableName_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr
        && this->templateName_ != nullptr && this->timeCost_ != nullptr && this->trend_ != nullptr && this->upperValue_ != nullptr && this->warningThreshold_ != nullptr
        && this->whereCondition_ != nullptr; };
    // actualExpression Field Functions 
    bool hasActualExpression() const { return this->actualExpression_ != nullptr;};
    void deleteActualExpression() { this->actualExpression_ = nullptr;};
    inline string actualExpression() const { DARABONBA_PTR_GET_DEFAULT(actualExpression_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setActualExpression(string actualExpression) { DARABONBA_PTR_SET_VALUE(actualExpression_, actualExpression) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline int32_t blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // checkResultStatus Field Functions 
    bool hasCheckResultStatus() const { return this->checkResultStatus_ != nullptr;};
    void deleteCheckResultStatus() { this->checkResultStatus_ = nullptr;};
    inline int32_t checkResultStatus() const { DARABONBA_PTR_GET_DEFAULT(checkResultStatus_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCheckResultStatus(int32_t checkResultStatus) { DARABONBA_PTR_SET_VALUE(checkResultStatus_, checkResultStatus) };


    // checkerId Field Functions 
    bool hasCheckerId() const { return this->checkerId_ != nullptr;};
    void deleteCheckerId() { this->checkerId_ = nullptr;};
    inline int32_t checkerId() const { DARABONBA_PTR_GET_DEFAULT(checkerId_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCheckerId(int32_t checkerId) { DARABONBA_PTR_SET_VALUE(checkerId_, checkerId) };


    // checkerName Field Functions 
    bool hasCheckerName() const { return this->checkerName_ != nullptr;};
    void deleteCheckerName() { this->checkerName_ = nullptr;};
    inline string checkerName() const { DARABONBA_PTR_GET_DEFAULT(checkerName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCheckerName(string checkerName) { DARABONBA_PTR_SET_VALUE(checkerName_, checkerName) };


    // checkerType Field Functions 
    bool hasCheckerType() const { return this->checkerType_ != nullptr;};
    void deleteCheckerType() { this->checkerType_ = nullptr;};
    inline int32_t checkerType() const { DARABONBA_PTR_GET_DEFAULT(checkerType_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCheckerType(int32_t checkerType) { DARABONBA_PTR_SET_VALUE(checkerType_, checkerType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // criticalThreshold Field Functions 
    bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
    void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
    inline float criticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setCriticalThreshold(float criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


    // dateType Field Functions 
    bool hasDateType() const { return this->dateType_ != nullptr;};
    void deleteDateType() { this->dateType_ = nullptr;};
    inline string dateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setDateType(string dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


    // discreteCheck Field Functions 
    bool hasDiscreteCheck() const { return this->discreteCheck_ != nullptr;};
    void deleteDiscreteCheck() { this->discreteCheck_ = nullptr;};
    inline bool discreteCheck() const { DARABONBA_PTR_GET_DEFAULT(discreteCheck_, false) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setDiscreteCheck(bool discreteCheck) { DARABONBA_PTR_SET_VALUE(discreteCheck_, discreteCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // expectValue Field Functions 
    bool hasExpectValue() const { return this->expectValue_ != nullptr;};
    void deleteExpectValue() { this->expectValue_ = nullptr;};
    inline float expectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setExpectValue(float expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string externalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // externalType Field Functions 
    bool hasExternalType() const { return this->externalType_ != nullptr;};
    void deleteExternalType() { this->externalType_ = nullptr;};
    inline string externalType() const { DARABONBA_PTR_GET_DEFAULT(externalType_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setExternalType(string externalType) { DARABONBA_PTR_SET_VALUE(externalType_, externalType) };


    // fixedCheck Field Functions 
    bool hasFixedCheck() const { return this->fixedCheck_ != nullptr;};
    void deleteFixedCheck() { this->fixedCheck_ = nullptr;};
    inline bool fixedCheck() const { DARABONBA_PTR_GET_DEFAULT(fixedCheck_, false) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setFixedCheck(bool fixedCheck) { DARABONBA_PTR_SET_VALUE(fixedCheck_, fixedCheck) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isPrediction Field Functions 
    bool hasIsPrediction() const { return this->isPrediction_ != nullptr;};
    void deleteIsPrediction() { this->isPrediction_ = nullptr;};
    inline bool isPrediction() const { DARABONBA_PTR_GET_DEFAULT(isPrediction_, false) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setIsPrediction(bool isPrediction) { DARABONBA_PTR_SET_VALUE(isPrediction_, isPrediction) };


    // lowerValue Field Functions 
    bool hasLowerValue() const { return this->lowerValue_ != nullptr;};
    void deleteLowerValue() { this->lowerValue_ = nullptr;};
    inline float lowerValue() const { DARABONBA_PTR_GET_DEFAULT(lowerValue_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setLowerValue(float lowerValue) { DARABONBA_PTR_SET_VALUE(lowerValue_, lowerValue) };


    // matchExpression Field Functions 
    bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
    void deleteMatchExpression() { this->matchExpression_ = nullptr;};
    inline string matchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline bool open() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // referenceValue Field Functions 
    bool hasReferenceValue() const { return this->referenceValue_ != nullptr;};
    void deleteReferenceValue() { this->referenceValue_ = nullptr;};
    inline const vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue> & referenceValue() const { DARABONBA_PTR_GET_CONST(referenceValue_, vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue>) };
    inline vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue> referenceValue() { DARABONBA_PTR_GET(referenceValue_, vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue>) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setReferenceValue(const vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue> & referenceValue) { DARABONBA_PTR_SET_VALUE(referenceValue_, referenceValue) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setReferenceValue(vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue> && referenceValue) { DARABONBA_PTR_SET_RVALUE(referenceValue_, referenceValue) };


    // resultString Field Functions 
    bool hasResultString() const { return this->resultString_ != nullptr;};
    void deleteResultString() { this->resultString_ = nullptr;};
    inline string resultString() const { DARABONBA_PTR_GET_DEFAULT(resultString_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setResultString(string resultString) { DARABONBA_PTR_SET_VALUE(resultString_, resultString) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sampleValue Field Functions 
    bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
    void deleteSampleValue() { this->sampleValue_ = nullptr;};
    inline const vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue> & sampleValue() const { DARABONBA_PTR_GET_CONST(sampleValue_, vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue>) };
    inline vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue> sampleValue() { DARABONBA_PTR_GET(sampleValue_, vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue>) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setSampleValue(const vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue> & sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setSampleValue(vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue> && sampleValue) { DARABONBA_PTR_SET_RVALUE(sampleValue_, sampleValue) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline string timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline string trend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


    // upperValue Field Functions 
    bool hasUpperValue() const { return this->upperValue_ != nullptr;};
    void deleteUpperValue() { this->upperValue_ = nullptr;};
    inline float upperValue() const { DARABONBA_PTR_GET_DEFAULT(upperValue_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setUpperValue(float upperValue) { DARABONBA_PTR_SET_VALUE(upperValue_, upperValue) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline float warningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setWarningThreshold(float warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


    // whereCondition Field Functions 
    bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
    void deleteWhereCondition() { this->whereCondition_ = nullptr;};
    inline string whereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecks& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


  protected:
    // The partition in the monitored data source table.
    std::shared_ptr<string> actualExpression_ = nullptr;
    // The time when the monitoring started.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
    // 
    // *   1: indicates that the monitoring rule is a strong rule.
    // *   0: indicates that the monitoring rule is a weak rule. You can specify the strength of a monitoring rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
    std::shared_ptr<int32_t> blockType_ = nullptr;
    // The monitoring result.
    std::shared_ptr<int32_t> checkResult_ = nullptr;
    // The status of the monitoring result.
    std::shared_ptr<int32_t> checkResultStatus_ = nullptr;
    // The checker ID.
    std::shared_ptr<int32_t> checkerId_ = nullptr;
    // The name of the checker.
    std::shared_ptr<string> checkerName_ = nullptr;
    // The type of the checker.
    std::shared_ptr<int32_t> checkerType_ = nullptr;
    // The description of the monitoring rule.
    std::shared_ptr<string> comment_ = nullptr;
    // The threshold for a critical alert. The threshold indicates the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
    std::shared_ptr<float> criticalThreshold_ = nullptr;
    // The scheduling frequency. In most cases, the value of this parameter is YMD. This value indicates year, month, and day.
    std::shared_ptr<string> dateType_ = nullptr;
    // Indicates whether the monitoring is discrete monitoring. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> discreteCheck_ = nullptr;
    // The time when the monitoring ended.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the partition filter expression.
    std::shared_ptr<int64_t> entityId_ = nullptr;
    // The expected value.
    std::shared_ptr<float> expectValue_ = nullptr;
    // The node ID.
    std::shared_ptr<string> externalId_ = nullptr;
    // The type of the scheduling system. Only CWF scheduling systems are supported.
    std::shared_ptr<string> externalType_ = nullptr;
    // Indicates whether the monitoring is performed based on a fixed value. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> fixedCheck_ = nullptr;
    // The primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the monitoring result is the same as the predicted result. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isPrediction_ = nullptr;
    // The lower limit of the predicted result. The value of this parameter is automatically generated based on the threshold that you specify.
    std::shared_ptr<float> lowerValue_ = nullptr;
    // The partition filter expression.
    std::shared_ptr<string> matchExpression_ = nullptr;
    // The method used to collect sample data, such as such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
    std::shared_ptr<string> methodName_ = nullptr;
    // The comparison operator.
    std::shared_ptr<string> op_ = nullptr;
    // Indicates whether the monitoring rule is enabled.
    std::shared_ptr<bool> open_ = nullptr;
    // The name of the compute engine or data source for which data quality is monitored.
    std::shared_ptr<string> projectName_ = nullptr;
    // The field whose data quality is checked based on the monitoring rule. This field is a column in the data source table that is monitored.
    std::shared_ptr<string> property_ = nullptr;
    // The historical sample values.
    std::shared_ptr<vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue>> referenceValue_ = nullptr;
    // The string of the monitoring result.
    std::shared_ptr<string> resultString_ = nullptr;
    // The ID of the monitoring rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The current sample values.
    std::shared_ptr<vector<Models::ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue>> sampleValue_ = nullptr;
    // The name of the table that is monitored.
    std::shared_ptr<string> tableName_ = nullptr;
    // The monitoring task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The ID of the monitoring template.
    std::shared_ptr<int32_t> templateId_ = nullptr;
    // The name of the monitoring template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The time that was taken to run the monitoring task.
    std::shared_ptr<string> timeCost_ = nullptr;
    // The trend of the monitoring result.
    std::shared_ptr<string> trend_ = nullptr;
    // The upper limit of the predicted result. The value of this parameter is automatically generated based on the threshold that you specify.
    std::shared_ptr<float> upperValue_ = nullptr;
    // The threshold for a warning alert. The threshold specifies the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements.
    std::shared_ptr<float> warningThreshold_ = nullptr;
    // The filter condition of the monitoring task.
    std::shared_ptr<string> whereCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
