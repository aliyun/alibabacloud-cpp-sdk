// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetQualityRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleResponseBody() = default ;
    GetQualityRuleResponseBody(const GetQualityRuleResponseBody &) = default ;
    GetQualityRuleResponseBody(GetQualityRuleResponseBody &&) = default ;
    GetQualityRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleResponseBody() = default ;
    GetQualityRuleResponseBody& operator=(const GetQualityRuleResponseBody &) = default ;
    GetQualityRuleResponseBody& operator=(GetQualityRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BlockType, blockType_);
        DARABONBA_PTR_TO_JSON(Checker, checker_);
        DARABONBA_PTR_TO_JSON(CheckerName, checkerName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CriticalThreshold, criticalThreshold_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(ExpectValue, expectValue_);
        DARABONBA_PTR_TO_JSON(FixCheck, fixCheck_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MethodId, methodId_);
        DARABONBA_PTR_TO_JSON(MethodName, methodName_);
        DARABONBA_PTR_TO_JSON(OnDuty, onDuty_);
        DARABONBA_PTR_TO_JSON(OnDutyAccountName, onDutyAccountName_);
        DARABONBA_PTR_TO_JSON(OpenSwitch, openSwitch_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(PredictType, predictType_);
        DARABONBA_PTR_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(TaskSetting, taskSetting_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(Trend, trend_);
        DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
        DARABONBA_PTR_TO_JSON(WhereCondition, whereCondition_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
        DARABONBA_PTR_FROM_JSON(Checker, checker_);
        DARABONBA_PTR_FROM_JSON(CheckerName, checkerName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CriticalThreshold, criticalThreshold_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(ExpectValue, expectValue_);
        DARABONBA_PTR_FROM_JSON(FixCheck, fixCheck_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MethodId, methodId_);
        DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
        DARABONBA_PTR_FROM_JSON(OnDuty, onDuty_);
        DARABONBA_PTR_FROM_JSON(OnDutyAccountName, onDutyAccountName_);
        DARABONBA_PTR_FROM_JSON(OpenSwitch, openSwitch_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(PredictType, predictType_);
        DARABONBA_PTR_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(TaskSetting, taskSetting_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(Trend, trend_);
        DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
        DARABONBA_PTR_FROM_JSON(WhereCondition, whereCondition_);
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
      virtual bool empty() const override { return this->blockType_ == nullptr
        && this->checker_ == nullptr && this->checkerName_ == nullptr && this->comment_ == nullptr && this->criticalThreshold_ == nullptr && this->entityId_ == nullptr
        && this->expectValue_ == nullptr && this->fixCheck_ == nullptr && this->id_ == nullptr && this->methodId_ == nullptr && this->methodName_ == nullptr
        && this->onDuty_ == nullptr && this->onDutyAccountName_ == nullptr && this->openSwitch_ == nullptr && this->operator_ == nullptr && this->predictType_ == nullptr
        && this->property_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->taskSetting_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->trend_ == nullptr && this->warningThreshold_ == nullptr && this->whereCondition_ == nullptr; };
      // blockType Field Functions 
      bool hasBlockType() const { return this->blockType_ != nullptr;};
      void deleteBlockType() { this->blockType_ = nullptr;};
      inline int32_t getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
      inline Data& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


      // checker Field Functions 
      bool hasChecker() const { return this->checker_ != nullptr;};
      void deleteChecker() { this->checker_ = nullptr;};
      inline int32_t getChecker() const { DARABONBA_PTR_GET_DEFAULT(checker_, 0) };
      inline Data& setChecker(int32_t checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


      // checkerName Field Functions 
      bool hasCheckerName() const { return this->checkerName_ != nullptr;};
      void deleteCheckerName() { this->checkerName_ = nullptr;};
      inline string getCheckerName() const { DARABONBA_PTR_GET_DEFAULT(checkerName_, "") };
      inline Data& setCheckerName(string checkerName) { DARABONBA_PTR_SET_VALUE(checkerName_, checkerName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // criticalThreshold Field Functions 
      bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
      void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
      inline string getCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
      inline Data& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
      inline Data& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // expectValue Field Functions 
      bool hasExpectValue() const { return this->expectValue_ != nullptr;};
      void deleteExpectValue() { this->expectValue_ = nullptr;};
      inline string getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
      inline Data& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


      // fixCheck Field Functions 
      bool hasFixCheck() const { return this->fixCheck_ != nullptr;};
      void deleteFixCheck() { this->fixCheck_ = nullptr;};
      inline bool getFixCheck() const { DARABONBA_PTR_GET_DEFAULT(fixCheck_, false) };
      inline Data& setFixCheck(bool fixCheck) { DARABONBA_PTR_SET_VALUE(fixCheck_, fixCheck) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // methodId Field Functions 
      bool hasMethodId() const { return this->methodId_ != nullptr;};
      void deleteMethodId() { this->methodId_ = nullptr;};
      inline int32_t getMethodId() const { DARABONBA_PTR_GET_DEFAULT(methodId_, 0) };
      inline Data& setMethodId(int32_t methodId) { DARABONBA_PTR_SET_VALUE(methodId_, methodId) };


      // methodName Field Functions 
      bool hasMethodName() const { return this->methodName_ != nullptr;};
      void deleteMethodName() { this->methodName_ = nullptr;};
      inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
      inline Data& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


      // onDuty Field Functions 
      bool hasOnDuty() const { return this->onDuty_ != nullptr;};
      void deleteOnDuty() { this->onDuty_ = nullptr;};
      inline string getOnDuty() const { DARABONBA_PTR_GET_DEFAULT(onDuty_, "") };
      inline Data& setOnDuty(string onDuty) { DARABONBA_PTR_SET_VALUE(onDuty_, onDuty) };


      // onDutyAccountName Field Functions 
      bool hasOnDutyAccountName() const { return this->onDutyAccountName_ != nullptr;};
      void deleteOnDutyAccountName() { this->onDutyAccountName_ = nullptr;};
      inline string getOnDutyAccountName() const { DARABONBA_PTR_GET_DEFAULT(onDutyAccountName_, "") };
      inline Data& setOnDutyAccountName(string onDutyAccountName) { DARABONBA_PTR_SET_VALUE(onDutyAccountName_, onDutyAccountName) };


      // openSwitch Field Functions 
      bool hasOpenSwitch() const { return this->openSwitch_ != nullptr;};
      void deleteOpenSwitch() { this->openSwitch_ = nullptr;};
      inline bool getOpenSwitch() const { DARABONBA_PTR_GET_DEFAULT(openSwitch_, false) };
      inline Data& setOpenSwitch(bool openSwitch) { DARABONBA_PTR_SET_VALUE(openSwitch_, openSwitch) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // predictType Field Functions 
      bool hasPredictType() const { return this->predictType_ != nullptr;};
      void deletePredictType() { this->predictType_ = nullptr;};
      inline int32_t getPredictType() const { DARABONBA_PTR_GET_DEFAULT(predictType_, 0) };
      inline Data& setPredictType(int32_t predictType) { DARABONBA_PTR_SET_VALUE(predictType_, predictType) };


      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
      inline Data& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
      inline Data& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // taskSetting Field Functions 
      bool hasTaskSetting() const { return this->taskSetting_ != nullptr;};
      void deleteTaskSetting() { this->taskSetting_ = nullptr;};
      inline string getTaskSetting() const { DARABONBA_PTR_GET_DEFAULT(taskSetting_, "") };
      inline Data& setTaskSetting(string taskSetting) { DARABONBA_PTR_SET_VALUE(taskSetting_, taskSetting) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
      inline Data& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // trend Field Functions 
      bool hasTrend() const { return this->trend_ != nullptr;};
      void deleteTrend() { this->trend_ = nullptr;};
      inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
      inline Data& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


      // warningThreshold Field Functions 
      bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
      void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
      inline string getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
      inline Data& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


      // whereCondition Field Functions 
      bool hasWhereCondition() const { return this->whereCondition_ != nullptr;};
      void deleteWhereCondition() { this->whereCondition_ = nullptr;};
      inline string getWhereCondition() const { DARABONBA_PTR_GET_DEFAULT(whereCondition_, "") };
      inline Data& setWhereCondition(string whereCondition) { DARABONBA_PTR_SET_VALUE(whereCondition_, whereCondition) };


    protected:
      // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
      // 
      // *   1: the monitoring rule is a strong rule.
      // *   0: the monitoring rule is a weak rule. You can specify whether a monitoring rule is a strong rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
      shared_ptr<int32_t> blockType_ {};
      // The checker ID. The value of this parameter corresponds to the ID at the frontend and is converted from the ID of the primary key.
      shared_ptr<int32_t> checker_ {};
      // The name of the checker.
      shared_ptr<string> checkerName_ {};
      // The description of the monitoring rule.
      shared_ptr<string> comment_ {};
      // The threshold for a critical alert. The threshold indicates the deviation of the check result from the expected value. You can specify a value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
      shared_ptr<string> criticalThreshold_ {};
      // The ID of the partition filter expression.
      shared_ptr<int64_t> entityId_ {};
      // The expected value.
      shared_ptr<string> expectValue_ {};
      // Indicates whether the monitoring is performed based on a fixed value.
      shared_ptr<bool> fixCheck_ {};
      // The monitoring rule ID.
      shared_ptr<int64_t> id_ {};
      // The ID of the task that is associated with the partition filter expression.
      shared_ptr<int32_t> methodId_ {};
      // The method that is used to collect sample data, such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
      shared_ptr<string> methodName_ {};
      // The ID of the Alibaba Cloud account that is used to configure the monitoring rule.
      shared_ptr<string> onDuty_ {};
      // The name of the Alibaba Cloud account that is used to configure the monitoring rule.
      shared_ptr<string> onDutyAccountName_ {};
      // Indicates whether the monitoring rule is enabled.
      shared_ptr<bool> openSwitch_ {};
      // The comparison operator of the monitoring rule.
      shared_ptr<string> operator_ {};
      // Indicates whether the threshold is a dynamic threshold. Valid values:
      // 
      // *   0: The threshold is not a dynamic threshold.
      // *   1: The threshold is a dynamic threshold.
      shared_ptr<int32_t> predictType_ {};
      // The field whose data quality is checked based on the monitoring rule. This field is a column in the data source table that is monitored.
      shared_ptr<string> property_ {};
      // The name of the monitoring rule.
      shared_ptr<string> ruleName_ {};
      // Rule type:
      // 
      // *   0: System template rule
      // *   1: Custom SQL rule
      // *   4: Custom template rule
      shared_ptr<int32_t> ruleType_ {};
      // The variable settings inserted before the custom rule. Format: x=a,y=b.
      shared_ptr<string> taskSetting_ {};
      // The ID of the monitoring template.
      shared_ptr<int32_t> templateId_ {};
      // The name of the monitoring template.
      shared_ptr<string> templateName_ {};
      // The trend of the check result.
      shared_ptr<string> trend_ {};
      // The threshold for a warning alert. The threshold indicates the deviation of the check result from the expected value. You can customize this threshold based on your business requirements.
      shared_ptr<string> warningThreshold_ {};
      // The filter condition or custom SQL statement that is used for monitoring.
      shared_ptr<string> whereCondition_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityRuleResponseBody::Data) };
    inline GetQualityRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityRuleResponseBody::Data) };
    inline GetQualityRuleResponseBody& setData(const GetQualityRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityRuleResponseBody& setData(GetQualityRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQualityRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetQualityRuleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Information about the retrieved rule.
    shared_ptr<GetQualityRuleResponseBody::Data> data_ {};
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
