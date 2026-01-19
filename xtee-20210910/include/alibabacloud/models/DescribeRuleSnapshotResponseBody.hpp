// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRuleSnapshotResponseBody() = default ;
    DescribeRuleSnapshotResponseBody(const DescribeRuleSnapshotResponseBody &) = default ;
    DescribeRuleSnapshotResponseBody(DescribeRuleSnapshotResponseBody &&) = default ;
    DescribeRuleSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleSnapshotResponseBody() = default ;
    DescribeRuleSnapshotResponseBody& operator=(const DescribeRuleSnapshotResponseBody &) = default ;
    DescribeRuleSnapshotResponseBody& operator=(DescribeRuleSnapshotResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_TO_JSON(ruleBody, ruleBody_);
        DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(bizVersion, bizVersion_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_FROM_JSON(ruleBody, ruleBody_);
        DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
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
      virtual bool empty() const override { return this->bizVersion_ == nullptr
        && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->logicExpression_ == nullptr
        && this->memo_ == nullptr && this->ruleActions_ == nullptr && this->ruleBody_ == nullptr && this->ruleExpressions_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr; };
      // bizVersion Field Functions 
      bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
      void deleteBizVersion() { this->bizVersion_ = nullptr;};
      inline string getBizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, "") };
      inline ResultObject& setBizVersion(string bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


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


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline ResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // ruleActions Field Functions 
      bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
      void deleteRuleActions() { this->ruleActions_ = nullptr;};
      inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
      inline ResultObject& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


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


    protected:
      // Business version.
      shared_ptr<string> bizVersion_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Expression for analysis results.
      shared_ptr<string> logicExpression_ {};
      // Memo.
      shared_ptr<string> memo_ {};
      // Rule actions.
      shared_ptr<string> ruleActions_ {};
      // DSL rule expression. This field is required when ruleType is DSL.
      shared_ptr<string> ruleBody_ {};
      // Expression.
      shared_ptr<string> ruleExpressions_ {};
      // Policy ID
      shared_ptr<string> ruleId_ {};
      // Policy name
      shared_ptr<string> ruleName_ {};
      // Policy status
      shared_ptr<string> ruleStatus_ {};
      // Rule type.
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRuleSnapshotResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRuleSnapshotResponseBody::ResultObject) };
    inline DescribeRuleSnapshotResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRuleSnapshotResponseBody::ResultObject) };
    inline DescribeRuleSnapshotResponseBody& setResultObject(const DescribeRuleSnapshotResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleSnapshotResponseBody& setResultObject(DescribeRuleSnapshotResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeRuleSnapshotResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
