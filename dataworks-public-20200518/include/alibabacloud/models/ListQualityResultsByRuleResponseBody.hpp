// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODY_HPP_
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
  class ListQualityResultsByRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityResultsByRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityResultsByRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityResultsByRuleResponseBody() = default ;
    ListQualityResultsByRuleResponseBody(const ListQualityResultsByRuleResponseBody &) = default ;
    ListQualityResultsByRuleResponseBody(ListQualityResultsByRuleResponseBody &&) = default ;
    ListQualityResultsByRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityResultsByRuleResponseBody() = default ;
    ListQualityResultsByRuleResponseBody& operator=(const ListQualityResultsByRuleResponseBody &) = default ;
    ListQualityResultsByRuleResponseBody& operator=(ListQualityResultsByRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RuleChecks, ruleChecks_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RuleChecks, ruleChecks_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleChecks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleChecks& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RuleChecks& obj) { 
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
        RuleChecks() = default ;
        RuleChecks(const RuleChecks &) = default ;
        RuleChecks(RuleChecks &&) = default ;
        RuleChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleChecks() = default ;
        RuleChecks& operator=(const RuleChecks &) = default ;
        RuleChecks& operator=(RuleChecks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SampleValue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SampleValue& obj) { 
            DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
            DARABONBA_PTR_TO_JSON(DiscreteProperty, discreteProperty_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SampleValue& obj) { 
            DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
            DARABONBA_PTR_FROM_JSON(DiscreteProperty, discreteProperty_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SampleValue() = default ;
          SampleValue(const SampleValue &) = default ;
          SampleValue(SampleValue &&) = default ;
          SampleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SampleValue() = default ;
          SampleValue& operator=(const SampleValue &) = default ;
          SampleValue& operator=(SampleValue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->discreteProperty_ == nullptr && this->value_ == nullptr; };
          // bizDate Field Functions 
          bool hasBizDate() const { return this->bizDate_ != nullptr;};
          void deleteBizDate() { this->bizDate_ = nullptr;};
          inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
          inline SampleValue& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


          // discreteProperty Field Functions 
          bool hasDiscreteProperty() const { return this->discreteProperty_ != nullptr;};
          void deleteDiscreteProperty() { this->discreteProperty_ = nullptr;};
          inline string getDiscreteProperty() const { DARABONBA_PTR_GET_DEFAULT(discreteProperty_, "") };
          inline SampleValue& setDiscreteProperty(string discreteProperty) { DARABONBA_PTR_SET_VALUE(discreteProperty_, discreteProperty) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline SampleValue& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
          shared_ptr<string> bizDate_ {};
          // The values of the sample field that are grouped by using the GROUP BY clause. For example, the values of the Gender field are grouped by using the GROUP BY clause. In this case, the values of DiscreteProperty are Male, Female, and null.
          shared_ptr<string> discreteProperty_ {};
          // The sample value.
          shared_ptr<float> value_ {};
        };

        class ReferenceValue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReferenceValue& obj) { 
            DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
            DARABONBA_PTR_TO_JSON(DiscreteProperty, discreteProperty_);
            DARABONBA_PTR_TO_JSON(SingleCheckResult, singleCheckResult_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ReferenceValue& obj) { 
            DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
            DARABONBA_PTR_FROM_JSON(DiscreteProperty, discreteProperty_);
            DARABONBA_PTR_FROM_JSON(SingleCheckResult, singleCheckResult_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ReferenceValue() = default ;
          ReferenceValue(const ReferenceValue &) = default ;
          ReferenceValue(ReferenceValue &&) = default ;
          ReferenceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReferenceValue() = default ;
          ReferenceValue& operator=(const ReferenceValue &) = default ;
          ReferenceValue& operator=(ReferenceValue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->discreteProperty_ == nullptr && this->singleCheckResult_ == nullptr && this->threshold_ == nullptr && this->value_ == nullptr; };
          // bizDate Field Functions 
          bool hasBizDate() const { return this->bizDate_ != nullptr;};
          void deleteBizDate() { this->bizDate_ = nullptr;};
          inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
          inline ReferenceValue& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


          // discreteProperty Field Functions 
          bool hasDiscreteProperty() const { return this->discreteProperty_ != nullptr;};
          void deleteDiscreteProperty() { this->discreteProperty_ = nullptr;};
          inline string getDiscreteProperty() const { DARABONBA_PTR_GET_DEFAULT(discreteProperty_, "") };
          inline ReferenceValue& setDiscreteProperty(string discreteProperty) { DARABONBA_PTR_SET_VALUE(discreteProperty_, discreteProperty) };


          // singleCheckResult Field Functions 
          bool hasSingleCheckResult() const { return this->singleCheckResult_ != nullptr;};
          void deleteSingleCheckResult() { this->singleCheckResult_ = nullptr;};
          inline int32_t getSingleCheckResult() const { DARABONBA_PTR_GET_DEFAULT(singleCheckResult_, 0) };
          inline ReferenceValue& setSingleCheckResult(int32_t singleCheckResult) { DARABONBA_PTR_SET_VALUE(singleCheckResult_, singleCheckResult) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
          inline ReferenceValue& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline ReferenceValue& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
          shared_ptr<string> bizDate_ {};
          // The values of the sample field that are grouped by using the GROUP BY clause. For example, the values of the Gender field are grouped by using the GROUP BY clause. In this case, the values of DiscreteProperty are Male, Female, and null.
          shared_ptr<string> discreteProperty_ {};
          // The string of the monitoring result.
          shared_ptr<int32_t> singleCheckResult_ {};
          // The threshold.
          shared_ptr<float> threshold_ {};
          // The sample value.
          shared_ptr<float> value_ {};
        };

        virtual bool empty() const override { return this->actualExpression_ == nullptr
        && this->beginTime_ == nullptr && this->bizDate_ == nullptr && this->blockType_ == nullptr && this->checkResult_ == nullptr && this->checkResultStatus_ == nullptr
        && this->checkerId_ == nullptr && this->checkerName_ == nullptr && this->checkerType_ == nullptr && this->comment_ == nullptr && this->criticalThreshold_ == nullptr
        && this->dateType_ == nullptr && this->discreteCheck_ == nullptr && this->endTime_ == nullptr && this->entityId_ == nullptr && this->expectValue_ == nullptr
        && this->externalId_ == nullptr && this->externalType_ == nullptr && this->fixedCheck_ == nullptr && this->id_ == nullptr && this->isPrediction_ == nullptr
        && this->lowerValue_ == nullptr && this->matchExpression_ == nullptr && this->methodName_ == nullptr && this->op_ == nullptr && this->open_ == nullptr
        && this->projectName_ == nullptr && this->property_ == nullptr && this->referenceValue_ == nullptr && this->resultString_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->sampleValue_ == nullptr && this->tableName_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->timeCost_ == nullptr && this->trend_ == nullptr && this->upperValue_ == nullptr && this->warningThreshold_ == nullptr
        && this->whereCondition_ == nullptr; };
        // actualExpression Field Functions 
        bool hasActualExpression() const { return this->actualExpression_ != nullptr;};
        void deleteActualExpression() { this->actualExpression_ = nullptr;};
        inline string getActualExpression() const { DARABONBA_PTR_GET_DEFAULT(actualExpression_, "") };
        inline RuleChecks& setActualExpression(string actualExpression) { DARABONBA_PTR_SET_VALUE(actualExpression_, actualExpression) };


        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline RuleChecks& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline int64_t getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
        inline RuleChecks& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // blockType Field Functions 
        bool hasBlockType() const { return this->blockType_ != nullptr;};
        void deleteBlockType() { this->blockType_ = nullptr;};
        inline int32_t getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
        inline RuleChecks& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


        // checkResult Field Functions 
        bool hasCheckResult() const { return this->checkResult_ != nullptr;};
        void deleteCheckResult() { this->checkResult_ = nullptr;};
        inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
        inline RuleChecks& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


        // checkResultStatus Field Functions 
        bool hasCheckResultStatus() const { return this->checkResultStatus_ != nullptr;};
        void deleteCheckResultStatus() { this->checkResultStatus_ = nullptr;};
        inline int32_t getCheckResultStatus() const { DARABONBA_PTR_GET_DEFAULT(checkResultStatus_, 0) };
        inline RuleChecks& setCheckResultStatus(int32_t checkResultStatus) { DARABONBA_PTR_SET_VALUE(checkResultStatus_, checkResultStatus) };


        // checkerId Field Functions 
        bool hasCheckerId() const { return this->checkerId_ != nullptr;};
        void deleteCheckerId() { this->checkerId_ = nullptr;};
        inline int32_t getCheckerId() const { DARABONBA_PTR_GET_DEFAULT(checkerId_, 0) };
        inline RuleChecks& setCheckerId(int32_t checkerId) { DARABONBA_PTR_SET_VALUE(checkerId_, checkerId) };


        // checkerName Field Functions 
        bool hasCheckerName() const { return this->checkerName_ != nullptr;};
        void deleteCheckerName() { this->checkerName_ = nullptr;};
        inline string getCheckerName() const { DARABONBA_PTR_GET_DEFAULT(checkerName_, "") };
        inline RuleChecks& setCheckerName(string checkerName) { DARABONBA_PTR_SET_VALUE(checkerName_, checkerName) };


        // checkerType Field Functions 
        bool hasCheckerType() const { return this->checkerType_ != nullptr;};
        void deleteCheckerType() { this->checkerType_ = nullptr;};
        inline int32_t getCheckerType() const { DARABONBA_PTR_GET_DEFAULT(checkerType_, 0) };
        inline RuleChecks& setCheckerType(int32_t checkerType) { DARABONBA_PTR_SET_VALUE(checkerType_, checkerType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline RuleChecks& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // criticalThreshold Field Functions 
        bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
        void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
        inline float getCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, 0.0) };
        inline RuleChecks& setCriticalThreshold(float criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


        // dateType Field Functions 
        bool hasDateType() const { return this->dateType_ != nullptr;};
        void deleteDateType() { this->dateType_ = nullptr;};
        inline string getDateType() const { DARABONBA_PTR_GET_DEFAULT(dateType_, "") };
        inline RuleChecks& setDateType(string dateType) { DARABONBA_PTR_SET_VALUE(dateType_, dateType) };


        // discreteCheck Field Functions 
        bool hasDiscreteCheck() const { return this->discreteCheck_ != nullptr;};
        void deleteDiscreteCheck() { this->discreteCheck_ = nullptr;};
        inline bool getDiscreteCheck() const { DARABONBA_PTR_GET_DEFAULT(discreteCheck_, false) };
        inline RuleChecks& setDiscreteCheck(bool discreteCheck) { DARABONBA_PTR_SET_VALUE(discreteCheck_, discreteCheck) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline RuleChecks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
        inline RuleChecks& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // expectValue Field Functions 
        bool hasExpectValue() const { return this->expectValue_ != nullptr;};
        void deleteExpectValue() { this->expectValue_ = nullptr;};
        inline float getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, 0.0) };
        inline RuleChecks& setExpectValue(float expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


        // externalId Field Functions 
        bool hasExternalId() const { return this->externalId_ != nullptr;};
        void deleteExternalId() { this->externalId_ = nullptr;};
        inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
        inline RuleChecks& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


        // externalType Field Functions 
        bool hasExternalType() const { return this->externalType_ != nullptr;};
        void deleteExternalType() { this->externalType_ = nullptr;};
        inline string getExternalType() const { DARABONBA_PTR_GET_DEFAULT(externalType_, "") };
        inline RuleChecks& setExternalType(string externalType) { DARABONBA_PTR_SET_VALUE(externalType_, externalType) };


        // fixedCheck Field Functions 
        bool hasFixedCheck() const { return this->fixedCheck_ != nullptr;};
        void deleteFixedCheck() { this->fixedCheck_ = nullptr;};
        inline bool getFixedCheck() const { DARABONBA_PTR_GET_DEFAULT(fixedCheck_, false) };
        inline RuleChecks& setFixedCheck(bool fixedCheck) { DARABONBA_PTR_SET_VALUE(fixedCheck_, fixedCheck) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RuleChecks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isPrediction Field Functions 
        bool hasIsPrediction() const { return this->isPrediction_ != nullptr;};
        void deleteIsPrediction() { this->isPrediction_ = nullptr;};
        inline bool getIsPrediction() const { DARABONBA_PTR_GET_DEFAULT(isPrediction_, false) };
        inline RuleChecks& setIsPrediction(bool isPrediction) { DARABONBA_PTR_SET_VALUE(isPrediction_, isPrediction) };


        // lowerValue Field Functions 
        bool hasLowerValue() const { return this->lowerValue_ != nullptr;};
        void deleteLowerValue() { this->lowerValue_ = nullptr;};
        inline float getLowerValue() const { DARABONBA_PTR_GET_DEFAULT(lowerValue_, 0.0) };
        inline RuleChecks& setLowerValue(float lowerValue) { DARABONBA_PTR_SET_VALUE(lowerValue_, lowerValue) };


        // matchExpression Field Functions 
        bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
        void deleteMatchExpression() { this->matchExpression_ = nullptr;};
        inline string getMatchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
        inline RuleChecks& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


        // methodName Field Functions 
        bool hasMethodName() const { return this->methodName_ != nullptr;};
        void deleteMethodName() { this->methodName_ = nullptr;};
        inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
        inline RuleChecks& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline RuleChecks& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // open Field Functions 
        bool hasOpen() const { return this->open_ != nullptr;};
        void deleteOpen() { this->open_ = nullptr;};
        inline bool getOpen() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
        inline RuleChecks& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline RuleChecks& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // property Field Functions 
        bool hasProperty() const { return this->property_ != nullptr;};
        void deleteProperty() { this->property_ = nullptr;};
        inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
        inline RuleChecks& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


        // referenceValue Field Functions 
        bool hasReferenceValue() const { return this->referenceValue_ != nullptr;};
        void deleteReferenceValue() { this->referenceValue_ = nullptr;};
        inline const vector<RuleChecks::ReferenceValue> & getReferenceValue() const { DARABONBA_PTR_GET_CONST(referenceValue_, vector<RuleChecks::ReferenceValue>) };
        inline vector<RuleChecks::ReferenceValue> getReferenceValue() { DARABONBA_PTR_GET(referenceValue_, vector<RuleChecks::ReferenceValue>) };
        inline RuleChecks& setReferenceValue(const vector<RuleChecks::ReferenceValue> & referenceValue) { DARABONBA_PTR_SET_VALUE(referenceValue_, referenceValue) };
        inline RuleChecks& setReferenceValue(vector<RuleChecks::ReferenceValue> && referenceValue) { DARABONBA_PTR_SET_RVALUE(referenceValue_, referenceValue) };


        // resultString Field Functions 
        bool hasResultString() const { return this->resultString_ != nullptr;};
        void deleteResultString() { this->resultString_ = nullptr;};
        inline string getResultString() const { DARABONBA_PTR_GET_DEFAULT(resultString_, "") };
        inline RuleChecks& setResultString(string resultString) { DARABONBA_PTR_SET_VALUE(resultString_, resultString) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline RuleChecks& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleChecks& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sampleValue Field Functions 
        bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
        void deleteSampleValue() { this->sampleValue_ = nullptr;};
        inline const vector<RuleChecks::SampleValue> & getSampleValue() const { DARABONBA_PTR_GET_CONST(sampleValue_, vector<RuleChecks::SampleValue>) };
        inline vector<RuleChecks::SampleValue> getSampleValue() { DARABONBA_PTR_GET(sampleValue_, vector<RuleChecks::SampleValue>) };
        inline RuleChecks& setSampleValue(const vector<RuleChecks::SampleValue> & sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };
        inline RuleChecks& setSampleValue(vector<RuleChecks::SampleValue> && sampleValue) { DARABONBA_PTR_SET_RVALUE(sampleValue_, sampleValue) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline RuleChecks& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline RuleChecks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
        inline RuleChecks& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline RuleChecks& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // timeCost Field Functions 
        bool hasTimeCost() const { return this->timeCost_ != nullptr;};
        void deleteTimeCost() { this->timeCost_ = nullptr;};
        inline string getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, "") };
        inline RuleChecks& setTimeCost(string timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


        // trend Field Functions 
        bool hasTrend() const { return this->trend_ != nullptr;};
        void deleteTrend() { this->trend_ = nullptr;};
        inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
        inline RuleChecks& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


        // upperValue Field Functions 
        bool hasUpperValue() const { return this->upperValue_ != nullptr;};
        void deleteUpperValue() { this->upperValue_ = nullptr;};
        inline float getUpperValue() const { DARABONBA_PTR_GET_DEFAULT(upperValue_, 0.0) };
        inline RuleChecks& setUpperValue(float upperValue) { DARABONBA_PTR_SET_VALUE(upperValue_, upperValue) };


        // warningThreshold Field Functions 
        bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
        void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
        inline float getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, 0.0) };
        inline RuleChecks& setWarningThreshold(float warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


        // whereCondition Field Functions 
        bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
        void deleteWhereCondition() { this->whereCondition_ = nullptr;};
        inline string getWhereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
        inline RuleChecks& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


      protected:
        // The partition in the monitored data source table.
        shared_ptr<string> actualExpression_ {};
        // The time when the monitoring started.
        shared_ptr<int64_t> beginTime_ {};
        // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
        shared_ptr<int64_t> bizDate_ {};
        // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
        // 
        // *   1: indicates that the monitoring rule is a strong rule.
        // *   0: indicates that the monitoring rule is a weak rule. You can specify the strength of a monitoring rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
        shared_ptr<int32_t> blockType_ {};
        // The monitoring result.
        shared_ptr<int32_t> checkResult_ {};
        // The status of the monitoring result.
        shared_ptr<int32_t> checkResultStatus_ {};
        // The checker ID.
        shared_ptr<int32_t> checkerId_ {};
        // The name of the checker.
        shared_ptr<string> checkerName_ {};
        // The type of the checker.
        shared_ptr<int32_t> checkerType_ {};
        // The description of the monitoring rule.
        shared_ptr<string> comment_ {};
        // The threshold for a critical alert. The threshold indicates the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
        shared_ptr<float> criticalThreshold_ {};
        // The scheduling frequency. In most cases, the value of this parameter is YMD. This value indicates year, month, and day.
        shared_ptr<string> dateType_ {};
        // Indicates whether the monitoring is discrete monitoring. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> discreteCheck_ {};
        // The time when the monitoring ended.
        shared_ptr<int64_t> endTime_ {};
        // The ID of the partition filter expression.
        shared_ptr<int64_t> entityId_ {};
        // The expected value.
        shared_ptr<float> expectValue_ {};
        // The node ID.
        shared_ptr<string> externalId_ {};
        // The type of the scheduling system. Only CWF scheduling systems are supported.
        shared_ptr<string> externalType_ {};
        // Indicates whether the monitoring is performed based on a fixed value. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> fixedCheck_ {};
        // The primary key ID.
        shared_ptr<int64_t> id_ {};
        // Indicates whether the monitoring result is the same as the predicted result. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPrediction_ {};
        // The lower limit of the predicted result. The value of this parameter is automatically generated based on the threshold that you specify.
        shared_ptr<float> lowerValue_ {};
        // The partition filter expression.
        shared_ptr<string> matchExpression_ {};
        // The method used to collect sample data, such as such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
        shared_ptr<string> methodName_ {};
        // The comparison operator.
        shared_ptr<string> op_ {};
        // Indicates whether the monitoring rule is enabled.
        shared_ptr<bool> open_ {};
        // The name of the compute engine or data source for which data quality is monitored.
        shared_ptr<string> projectName_ {};
        // The field whose data quality is checked based on the monitoring rule. This field is a column in the data source table that is monitored.
        shared_ptr<string> property_ {};
        // The historical sample values.
        shared_ptr<vector<RuleChecks::ReferenceValue>> referenceValue_ {};
        // The string of the monitoring result.
        shared_ptr<string> resultString_ {};
        // The ID of the monitoring rule.
        shared_ptr<int64_t> ruleId_ {};
        // The name of the monitoring rule.
        shared_ptr<string> ruleName_ {};
        // The current sample values.
        shared_ptr<vector<RuleChecks::SampleValue>> sampleValue_ {};
        // The name of the table that is monitored.
        shared_ptr<string> tableName_ {};
        // The monitoring task ID.
        shared_ptr<string> taskId_ {};
        // The ID of the monitoring template.
        shared_ptr<int32_t> templateId_ {};
        // The name of the monitoring template.
        shared_ptr<string> templateName_ {};
        // The time that was taken to run the monitoring task.
        shared_ptr<string> timeCost_ {};
        // The trend of the monitoring result.
        shared_ptr<string> trend_ {};
        // The upper limit of the predicted result. The value of this parameter is automatically generated based on the threshold that you specify.
        shared_ptr<float> upperValue_ {};
        // The threshold for a warning alert. The threshold specifies the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements.
        shared_ptr<float> warningThreshold_ {};
        // The filter condition of the monitoring task.
        shared_ptr<string> whereCondition_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->ruleChecks_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // ruleChecks Field Functions 
      bool hasRuleChecks() const { return this->ruleChecks_ != nullptr;};
      void deleteRuleChecks() { this->ruleChecks_ = nullptr;};
      inline const vector<Data::RuleChecks> & getRuleChecks() const { DARABONBA_PTR_GET_CONST(ruleChecks_, vector<Data::RuleChecks>) };
      inline vector<Data::RuleChecks> getRuleChecks() { DARABONBA_PTR_GET(ruleChecks_, vector<Data::RuleChecks>) };
      inline Data& setRuleChecks(const vector<Data::RuleChecks> & ruleChecks) { DARABONBA_PTR_SET_VALUE(ruleChecks_, ruleChecks) };
      inline Data& setRuleChecks(vector<Data::RuleChecks> && ruleChecks) { DARABONBA_PTR_SET_RVALUE(ruleChecks_, ruleChecks) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The returned monitoring results.
      shared_ptr<vector<Data::RuleChecks>> ruleChecks_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQualityResultsByRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQualityResultsByRuleResponseBody::Data) };
    inline ListQualityResultsByRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQualityResultsByRuleResponseBody::Data) };
    inline ListQualityResultsByRuleResponseBody& setData(const ListQualityResultsByRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQualityResultsByRuleResponseBody& setData(ListQualityResultsByRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListQualityResultsByRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListQualityResultsByRuleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListQualityResultsByRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityResultsByRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityResultsByRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data structure of the monitoring results returned.
    shared_ptr<ListQualityResultsByRuleResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
