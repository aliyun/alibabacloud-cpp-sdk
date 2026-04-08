// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRULESRESPONSEBODY_HPP_
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
  class ListQualityRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityRulesResponseBody() = default ;
    ListQualityRulesResponseBody(const ListQualityRulesResponseBody &) = default ;
    ListQualityRulesResponseBody(ListQualityRulesResponseBody &&) = default ;
    ListQualityRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityRulesResponseBody() = default ;
    ListQualityRulesResponseBody& operator=(const ListQualityRulesResponseBody &) = default ;
    ListQualityRulesResponseBody& operator=(ListQualityRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
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
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blockType_ == nullptr
        && this->checkerId_ == nullptr && this->comment_ == nullptr && this->criticalThreshold_ == nullptr && this->entityId_ == nullptr && this->expectValue_ == nullptr
        && this->fixCheck_ == nullptr && this->historyCriticalThreshold_ == nullptr && this->historyWarningThreshold_ == nullptr && this->id_ == nullptr && this->matchExpression_ == nullptr
        && this->methodId_ == nullptr && this->methodName_ == nullptr && this->onDuty_ == nullptr && this->onDutyAccountName_ == nullptr && this->projectName_ == nullptr
        && this->property_ == nullptr && this->propertyKey_ == nullptr && this->ruleCheckerRelationId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr
        && this->tableName_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->trend_ == nullptr && this->warningThreshold_ == nullptr; };
        // blockType Field Functions 
        bool hasBlockType() const { return this->blockType_ != nullptr;};
        void deleteBlockType() { this->blockType_ = nullptr;};
        inline int32_t getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, 0) };
        inline Rules& setBlockType(int32_t blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


        // checkerId Field Functions 
        bool hasCheckerId() const { return this->checkerId_ != nullptr;};
        void deleteCheckerId() { this->checkerId_ = nullptr;};
        inline int32_t getCheckerId() const { DARABONBA_PTR_GET_DEFAULT(checkerId_, 0) };
        inline Rules& setCheckerId(int32_t checkerId) { DARABONBA_PTR_SET_VALUE(checkerId_, checkerId) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Rules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // criticalThreshold Field Functions 
        bool hasCriticalThreshold() const { return this->criticalThreshold_ != nullptr;};
        void deleteCriticalThreshold() { this->criticalThreshold_ = nullptr;};
        inline string getCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(criticalThreshold_, "") };
        inline Rules& setCriticalThreshold(string criticalThreshold) { DARABONBA_PTR_SET_VALUE(criticalThreshold_, criticalThreshold) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
        inline Rules& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // expectValue Field Functions 
        bool hasExpectValue() const { return this->expectValue_ != nullptr;};
        void deleteExpectValue() { this->expectValue_ = nullptr;};
        inline string getExpectValue() const { DARABONBA_PTR_GET_DEFAULT(expectValue_, "") };
        inline Rules& setExpectValue(string expectValue) { DARABONBA_PTR_SET_VALUE(expectValue_, expectValue) };


        // fixCheck Field Functions 
        bool hasFixCheck() const { return this->fixCheck_ != nullptr;};
        void deleteFixCheck() { this->fixCheck_ = nullptr;};
        inline bool getFixCheck() const { DARABONBA_PTR_GET_DEFAULT(fixCheck_, false) };
        inline Rules& setFixCheck(bool fixCheck) { DARABONBA_PTR_SET_VALUE(fixCheck_, fixCheck) };


        // historyCriticalThreshold Field Functions 
        bool hasHistoryCriticalThreshold() const { return this->historyCriticalThreshold_ != nullptr;};
        void deleteHistoryCriticalThreshold() { this->historyCriticalThreshold_ = nullptr;};
        inline string getHistoryCriticalThreshold() const { DARABONBA_PTR_GET_DEFAULT(historyCriticalThreshold_, "") };
        inline Rules& setHistoryCriticalThreshold(string historyCriticalThreshold) { DARABONBA_PTR_SET_VALUE(historyCriticalThreshold_, historyCriticalThreshold) };


        // historyWarningThreshold Field Functions 
        bool hasHistoryWarningThreshold() const { return this->historyWarningThreshold_ != nullptr;};
        void deleteHistoryWarningThreshold() { this->historyWarningThreshold_ = nullptr;};
        inline string getHistoryWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(historyWarningThreshold_, "") };
        inline Rules& setHistoryWarningThreshold(string historyWarningThreshold) { DARABONBA_PTR_SET_VALUE(historyWarningThreshold_, historyWarningThreshold) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Rules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // matchExpression Field Functions 
        bool hasMatchExpression() const { return this->matchExpression_ != nullptr;};
        void deleteMatchExpression() { this->matchExpression_ = nullptr;};
        inline string getMatchExpression() const { DARABONBA_PTR_GET_DEFAULT(matchExpression_, "") };
        inline Rules& setMatchExpression(string matchExpression) { DARABONBA_PTR_SET_VALUE(matchExpression_, matchExpression) };


        // methodId Field Functions 
        bool hasMethodId() const { return this->methodId_ != nullptr;};
        void deleteMethodId() { this->methodId_ = nullptr;};
        inline int32_t getMethodId() const { DARABONBA_PTR_GET_DEFAULT(methodId_, 0) };
        inline Rules& setMethodId(int32_t methodId) { DARABONBA_PTR_SET_VALUE(methodId_, methodId) };


        // methodName Field Functions 
        bool hasMethodName() const { return this->methodName_ != nullptr;};
        void deleteMethodName() { this->methodName_ = nullptr;};
        inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
        inline Rules& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


        // onDuty Field Functions 
        bool hasOnDuty() const { return this->onDuty_ != nullptr;};
        void deleteOnDuty() { this->onDuty_ = nullptr;};
        inline string getOnDuty() const { DARABONBA_PTR_GET_DEFAULT(onDuty_, "") };
        inline Rules& setOnDuty(string onDuty) { DARABONBA_PTR_SET_VALUE(onDuty_, onDuty) };


        // onDutyAccountName Field Functions 
        bool hasOnDutyAccountName() const { return this->onDutyAccountName_ != nullptr;};
        void deleteOnDutyAccountName() { this->onDutyAccountName_ = nullptr;};
        inline string getOnDutyAccountName() const { DARABONBA_PTR_GET_DEFAULT(onDutyAccountName_, "") };
        inline Rules& setOnDutyAccountName(string onDutyAccountName) { DARABONBA_PTR_SET_VALUE(onDutyAccountName_, onDutyAccountName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Rules& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // property Field Functions 
        bool hasProperty() const { return this->property_ != nullptr;};
        void deleteProperty() { this->property_ = nullptr;};
        inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
        inline Rules& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


        // propertyKey Field Functions 
        bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
        void deletePropertyKey() { this->propertyKey_ = nullptr;};
        inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
        inline Rules& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


        // ruleCheckerRelationId Field Functions 
        bool hasRuleCheckerRelationId() const { return this->ruleCheckerRelationId_ != nullptr;};
        void deleteRuleCheckerRelationId() { this->ruleCheckerRelationId_ = nullptr;};
        inline int64_t getRuleCheckerRelationId() const { DARABONBA_PTR_GET_DEFAULT(ruleCheckerRelationId_, 0L) };
        inline Rules& setRuleCheckerRelationId(int64_t ruleCheckerRelationId) { DARABONBA_PTR_SET_VALUE(ruleCheckerRelationId_, ruleCheckerRelationId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
        inline Rules& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Rules& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
        inline Rules& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Rules& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // trend Field Functions 
        bool hasTrend() const { return this->trend_ != nullptr;};
        void deleteTrend() { this->trend_ = nullptr;};
        inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
        inline Rules& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


        // warningThreshold Field Functions 
        bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
        void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
        inline string getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, "") };
        inline Rules& setWarningThreshold(string warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


      protected:
        // The strength of the monitoring rule. The strength of a monitoring rule indicates the importance of the rule. Valid values:
        // 
        // *   1: The monitoring rule is a strong rule.
        // *   0: The monitoring rule is a weak rule. You can specify the strength of a monitoring rule based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
        shared_ptr<int32_t> blockType_ {};
        // The checker ID.
        shared_ptr<int32_t> checkerId_ {};
        // The description of the monitoring rule.
        shared_ptr<string> comment_ {};
        // The threshold for a critical alert. The threshold indicates the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements. If a monitoring rule is a strong rule and the critical threshold is exceeded, a critical alert is reported and tasks that are associated with the rule are blocked from running.
        shared_ptr<string> criticalThreshold_ {};
        // The ID of the partition filter expression.
        shared_ptr<int64_t> entityId_ {};
        // The expected value.
        shared_ptr<string> expectValue_ {};
        // Indicates whether the monitoring is performed based on a fixed value.
        shared_ptr<bool> fixCheck_ {};
        // The historical threshold for a critical alert.
        shared_ptr<string> historyCriticalThreshold_ {};
        // The historical threshold for a warning alert.
        shared_ptr<string> historyWarningThreshold_ {};
        // The monitoring rule ID.
        shared_ptr<int64_t> id_ {};
        // The partition filter expression.
        shared_ptr<string> matchExpression_ {};
        // The ID of the task that is associated with the partition filter expression.
        shared_ptr<int32_t> methodId_ {};
        // The method that is used to collect sample data, such as avg, count, sum, min, max, count_distinct, user_defined, table_count, table_size, table_dt_load_count, table_dt_refuseload_count, null_value, null_value/table_count, (table_count-count_distinct)/table_count, or table_count-count_distinct.
        shared_ptr<string> methodName_ {};
        // The name of the Alibaba Cloud account that is used to configure the monitoring rule.
        shared_ptr<string> onDuty_ {};
        // The name of the Alibaba Cloud account that is used to configure the monitoring rule.
        shared_ptr<string> onDutyAccountName_ {};
        // The name of the compute engine or data source.
        shared_ptr<string> projectName_ {};
        // The name of the field.
        shared_ptr<string> property_ {};
        // The field that is used to associate with monitoring rules at the frontend. This parameter can be ignored.
        shared_ptr<string> propertyKey_ {};
        // The ID of the task that is associated with the partition filter expression.
        shared_ptr<int64_t> ruleCheckerRelationId_ {};
        // The name of the monitoring rule.
        shared_ptr<string> ruleName_ {};
        // Rule type:
        // 
        // *   0: System template rule
        // *   1: Custom SQL rule
        // *   1: Custom template rule
        shared_ptr<int32_t> ruleType_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
        // The ID of the monitoring template.
        shared_ptr<int32_t> templateId_ {};
        // The name of the monitoring template.
        shared_ptr<string> templateName_ {};
        // The trend of the monitoring result.
        shared_ptr<string> trend_ {};
        // The threshold for a warning alert. The threshold specifies the deviation of the monitoring result from the expected value. You can specify a custom value for the threshold based on your business requirements.
        shared_ptr<string> warningThreshold_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->rules_ == nullptr && this->totalCount_ == nullptr; };
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


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Data::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Data::Rules>) };
      inline vector<Data::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Data::Rules>) };
      inline Data& setRules(const vector<Data::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(vector<Data::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


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
      // The details of the validation rule.
      shared_ptr<vector<Data::Rules>> rules_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQualityRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQualityRulesResponseBody::Data) };
    inline ListQualityRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQualityRulesResponseBody::Data) };
    inline ListQualityRulesResponseBody& setData(const ListQualityRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQualityRulesResponseBody& setData(ListQualityRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListQualityRulesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListQualityRulesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListQualityRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of retrieved rules.
    shared_ptr<ListQualityRulesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can troubleshoot errors based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
