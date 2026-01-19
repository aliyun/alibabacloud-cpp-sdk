// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventBaseInfoByEventCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventBaseInfoByEventCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventBaseInfoByEventCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeEventBaseInfoByEventCodeResponseBody() = default ;
    DescribeEventBaseInfoByEventCodeResponseBody(const DescribeEventBaseInfoByEventCodeResponseBody &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBody(DescribeEventBaseInfoByEventCodeResponseBody &&) = default ;
    DescribeEventBaseInfoByEventCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventBaseInfoByEventCodeResponseBody() = default ;
    DescribeEventBaseInfoByEventCodeResponseBody& operator=(const DescribeEventBaseInfoByEventCodeResponseBody &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBody& operator=(DescribeEventBaseInfoByEventCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(bizVersion, bizVersion_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(eventStauts, eventStauts_);
        DARABONBA_PTR_TO_JSON(inputFields, inputFields_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_PTR_TO_JSON(ruleDetails, ruleDetails_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(templateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(bizVersion, bizVersion_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(eventStauts, eventStauts_);
        DARABONBA_PTR_FROM_JSON(inputFields, inputFields_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_PTR_FROM_JSON(ruleDetails, ruleDetails_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(templateType, templateType_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleDetails& obj) { 
          DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
          DARABONBA_PTR_TO_JSON(memo, memo_);
          DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
          DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
          DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
          DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        };
        friend void from_json(const Darabonba::Json& j, RuleDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
          DARABONBA_PTR_FROM_JSON(memo, memo_);
          DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
          DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
          DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        };
        RuleDetails() = default ;
        RuleDetails(const RuleDetails &) = default ;
        RuleDetails(RuleDetails &&) = default ;
        RuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleDetails() = default ;
        RuleDetails& operator=(const RuleDetails &) = default ;
        RuleDetails& operator=(RuleDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logicExpression_ == nullptr
        && this->memo_ == nullptr && this->ruleActions_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleExpressions_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr; };
        // logicExpression Field Functions 
        bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
        void deleteLogicExpression() { this->logicExpression_ = nullptr;};
        inline string getLogicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
        inline RuleDetails& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline RuleDetails& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // ruleActions Field Functions 
        bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
        void deleteRuleActions() { this->ruleActions_ = nullptr;};
        inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
        inline RuleDetails& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


        // ruleAuthType Field Functions 
        bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
        void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
        inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
        inline RuleDetails& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


        // ruleExpressions Field Functions 
        bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
        void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
        inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
        inline RuleDetails& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline RuleDetails& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleDetails& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline RuleDetails& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      protected:
        // Policy Execution Logic
        shared_ptr<string> logicExpression_ {};
        // Memo
        shared_ptr<string> memo_ {};
        // Rule Actions
        shared_ptr<string> ruleActions_ {};
        // Policy Type
        shared_ptr<string> ruleAuthType_ {};
        // Event Expressions.
        shared_ptr<string> ruleExpressions_ {};
        // Policy ID
        shared_ptr<string> ruleId_ {};
        // Policy Name
        shared_ptr<string> ruleName_ {};
        // Policy Status
        shared_ptr<string> ruleStatus_ {};
      };

      class InputFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputFields& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(fieldCode, fieldCode_);
          DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
          DARABONBA_PTR_TO_JSON(fieldSource, fieldSource_);
          DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, InputFields& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(fieldCode, fieldCode_);
          DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
          DARABONBA_PTR_FROM_JSON(fieldSource, fieldSource_);
          DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        InputFields() = default ;
        InputFields(const InputFields &) = default ;
        InputFields(InputFields &&) = default ;
        InputFields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputFields() = default ;
        InputFields& operator=(const InputFields &) = default ;
        InputFields& operator=(InputFields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->fieldCode_ == nullptr && this->fieldRank_ == nullptr && this->fieldSource_ == nullptr && this->fieldType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline InputFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fieldCode Field Functions 
        bool hasFieldCode() const { return this->fieldCode_ != nullptr;};
        void deleteFieldCode() { this->fieldCode_ = nullptr;};
        inline string getFieldCode() const { DARABONBA_PTR_GET_DEFAULT(fieldCode_, "") };
        inline InputFields& setFieldCode(string fieldCode) { DARABONBA_PTR_SET_VALUE(fieldCode_, fieldCode) };


        // fieldRank Field Functions 
        bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
        void deleteFieldRank() { this->fieldRank_ = nullptr;};
        inline string getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, "") };
        inline InputFields& setFieldRank(string fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


        // fieldSource Field Functions 
        bool hasFieldSource() const { return this->fieldSource_ != nullptr;};
        void deleteFieldSource() { this->fieldSource_ = nullptr;};
        inline string getFieldSource() const { DARABONBA_PTR_GET_DEFAULT(fieldSource_, "") };
        inline InputFields& setFieldSource(string fieldSource) { DARABONBA_PTR_SET_VALUE(fieldSource_, fieldSource) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline InputFields& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline InputFields& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Field description.
        shared_ptr<string> description_ {};
        // Field code
        shared_ptr<string> fieldCode_ {};
        // Field ranking
        shared_ptr<string> fieldRank_ {};
        // Field source.
        shared_ptr<string> fieldSource_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Field name.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->bizVersion_ == nullptr
        && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventStauts_ == nullptr && this->inputFields_ == nullptr && this->memo_ == nullptr
        && this->ruleDetails_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr; };
      // bizVersion Field Functions 
      bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
      void deleteBizVersion() { this->bizVersion_ = nullptr;};
      inline int32_t getBizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, 0) };
      inline ResultObject& setBizVersion(int32_t bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventStauts Field Functions 
      bool hasEventStauts() const { return this->eventStauts_ != nullptr;};
      void deleteEventStauts() { this->eventStauts_ = nullptr;};
      inline string getEventStauts() const { DARABONBA_PTR_GET_DEFAULT(eventStauts_, "") };
      inline ResultObject& setEventStauts(string eventStauts) { DARABONBA_PTR_SET_VALUE(eventStauts_, eventStauts) };


      // inputFields Field Functions 
      bool hasInputFields() const { return this->inputFields_ != nullptr;};
      void deleteInputFields() { this->inputFields_ = nullptr;};
      inline const vector<ResultObject::InputFields> & getInputFields() const { DARABONBA_PTR_GET_CONST(inputFields_, vector<ResultObject::InputFields>) };
      inline vector<ResultObject::InputFields> getInputFields() { DARABONBA_PTR_GET(inputFields_, vector<ResultObject::InputFields>) };
      inline ResultObject& setInputFields(const vector<ResultObject::InputFields> & inputFields) { DARABONBA_PTR_SET_VALUE(inputFields_, inputFields) };
      inline ResultObject& setInputFields(vector<ResultObject::InputFields> && inputFields) { DARABONBA_PTR_SET_RVALUE(inputFields_, inputFields) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline ResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // ruleDetails Field Functions 
      bool hasRuleDetails() const { return this->ruleDetails_ != nullptr;};
      void deleteRuleDetails() { this->ruleDetails_ = nullptr;};
      inline const vector<ResultObject::RuleDetails> & getRuleDetails() const { DARABONBA_PTR_GET_CONST(ruleDetails_, vector<ResultObject::RuleDetails>) };
      inline vector<ResultObject::RuleDetails> getRuleDetails() { DARABONBA_PTR_GET(ruleDetails_, vector<ResultObject::RuleDetails>) };
      inline ResultObject& setRuleDetails(const vector<ResultObject::RuleDetails> & ruleDetails) { DARABONBA_PTR_SET_VALUE(ruleDetails_, ruleDetails) };
      inline ResultObject& setRuleDetails(vector<ResultObject::RuleDetails> && ruleDetails) { DARABONBA_PTR_SET_RVALUE(ruleDetails_, ruleDetails) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // Business version number
      shared_ptr<int32_t> bizVersion_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Event status.
      shared_ptr<string> eventStauts_ {};
      // Field list.
      shared_ptr<vector<ResultObject::InputFields>> inputFields_ {};
      // Memo.
      shared_ptr<string> memo_ {};
      // Policy Information
      shared_ptr<vector<ResultObject::RuleDetails>> ruleDetails_ {};
      // Operation template code
      shared_ptr<string> templateCode_ {};
      // Template name
      shared_ptr<string> templateName_ {};
      // Template type.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeEventBaseInfoByEventCodeResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeEventBaseInfoByEventCodeResponseBody::ResultObject) };
    inline DescribeEventBaseInfoByEventCodeResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeEventBaseInfoByEventCodeResponseBody::ResultObject) };
    inline DescribeEventBaseInfoByEventCodeResponseBody& setResultObject(const DescribeEventBaseInfoByEventCodeResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventBaseInfoByEventCodeResponseBody& setResultObject(DescribeEventBaseInfoByEventCodeResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeEventBaseInfoByEventCodeResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
