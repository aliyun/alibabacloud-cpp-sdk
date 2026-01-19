// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEDETAILBYRULEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEDETAILBYRULEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleDetailByRuleIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleDetailByRuleIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleDetailByRuleIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRuleDetailByRuleIdResponseBody() = default ;
    DescribeRuleDetailByRuleIdResponseBody(const DescribeRuleDetailByRuleIdResponseBody &) = default ;
    DescribeRuleDetailByRuleIdResponseBody(DescribeRuleDetailByRuleIdResponseBody &&) = default ;
    DescribeRuleDetailByRuleIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleDetailByRuleIdResponseBody() = default ;
    DescribeRuleDetailByRuleIdResponseBody& operator=(const DescribeRuleDetailByRuleIdResponseBody &) = default ;
    DescribeRuleDetailByRuleIdResponseBody& operator=(DescribeRuleDetailByRuleIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(bizVersion, bizVersion_);
        DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_TO_JSON(createType, createType_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_TO_JSON(mainEventCode, mainEventCode_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_ANY_TO_JSON(ruleActionMap, ruleActionMap_);
        DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_TO_JSON(ruleBody, ruleBody_);
        DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
        DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(bizVersion, bizVersion_);
        DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_FROM_JSON(createType, createType_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_FROM_JSON(mainEventCode, mainEventCode_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_ANY_FROM_JSON(ruleActionMap, ruleActionMap_);
        DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_FROM_JSON(ruleBody, ruleBody_);
        DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
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
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->bizVersion_ == nullptr && this->consoleRuleId_ == nullptr && this->createType_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->logicExpression_ == nullptr && this->mainEventCode_ == nullptr && this->memo_ == nullptr
        && this->ruleActionMap_ == nullptr && this->ruleActions_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleBody_ == nullptr && this->ruleExpressions_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline ResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // bizVersion Field Functions 
      bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
      void deleteBizVersion() { this->bizVersion_ = nullptr;};
      inline string getBizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, "") };
      inline ResultObject& setBizVersion(string bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


      // consoleRuleId Field Functions 
      bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
      void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
      inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
      inline ResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
      inline ResultObject& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


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


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // logicExpression Field Functions 
      bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
      void deleteLogicExpression() { this->logicExpression_ = nullptr;};
      inline string getLogicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
      inline ResultObject& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


      // mainEventCode Field Functions 
      bool hasMainEventCode() const { return this->mainEventCode_ != nullptr;};
      void deleteMainEventCode() { this->mainEventCode_ = nullptr;};
      inline string getMainEventCode() const { DARABONBA_PTR_GET_DEFAULT(mainEventCode_, "") };
      inline ResultObject& setMainEventCode(string mainEventCode) { DARABONBA_PTR_SET_VALUE(mainEventCode_, mainEventCode) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline ResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // ruleActionMap Field Functions 
      bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
      void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
      inline       const Darabonba::Json & getRuleActionMap() const { DARABONBA_GET(ruleActionMap_) };
      Darabonba::Json & getRuleActionMap() { DARABONBA_GET(ruleActionMap_) };
      inline ResultObject& setRuleActionMap(const Darabonba::Json & ruleActionMap) { DARABONBA_SET_VALUE(ruleActionMap_, ruleActionMap) };
      inline ResultObject& setRuleActionMap(Darabonba::Json && ruleActionMap) { DARABONBA_SET_RVALUE(ruleActionMap_, ruleActionMap) };


      // ruleActions Field Functions 
      bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
      void deleteRuleActions() { this->ruleActions_ = nullptr;};
      inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
      inline ResultObject& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


      // ruleAuthType Field Functions 
      bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
      void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
      inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
      inline ResultObject& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


      // ruleBody Field Functions 
      bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
      void deleteRuleBody() { this->ruleBody_ = nullptr;};
      inline string getRuleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
      inline ResultObject& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


      // ruleExpressions Field Functions 
      bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
      void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
      inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
      inline ResultObject& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
      inline ResultObject& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline ResultObject& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // ruleVersionId Field Functions 
      bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
      void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
      inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
      inline ResultObject& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


    protected:
      // Service authorization type.
      shared_ptr<string> authType_ {};
      // Version.
      shared_ptr<string> bizVersion_ {};
      // Primary key ID of the policy.
      shared_ptr<int64_t> consoleRuleId_ {};
      // Creation type.
      shared_ptr<string> createType_ {};
      // Event code.
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Log expression.
      shared_ptr<string> logicExpression_ {};
      // Main event code.
      shared_ptr<string> mainEventCode_ {};
      // Memo.
      shared_ptr<string> memo_ {};
      // Rule action structure.
      Darabonba::Json ruleActionMap_ {};
      // Rule actions.
      shared_ptr<string> ruleActions_ {};
      // Rule authorization type.
      shared_ptr<string> ruleAuthType_ {};
      // DSL policy expression.
      shared_ptr<string> ruleBody_ {};
      // Rule expressions.
      shared_ptr<string> ruleExpressions_ {};
      // Policy ID.
      shared_ptr<string> ruleId_ {};
      // Policy name.
      shared_ptr<string> ruleName_ {};
      // Policy status.
      shared_ptr<string> ruleStatus_ {};
      // Rule type.
      shared_ptr<string> ruleType_ {};
      // Primary key ID of the policy version.
      shared_ptr<int64_t> ruleVersionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleDetailByRuleIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRuleDetailByRuleIdResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRuleDetailByRuleIdResponseBody::ResultObject) };
    inline DescribeRuleDetailByRuleIdResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRuleDetailByRuleIdResponseBody::ResultObject) };
    inline DescribeRuleDetailByRuleIdResponseBody& setResultObject(const DescribeRuleDetailByRuleIdResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleDetailByRuleIdResponseBody& setResultObject(DescribeRuleDetailByRuleIdResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<DescribeRuleDetailByRuleIdResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
