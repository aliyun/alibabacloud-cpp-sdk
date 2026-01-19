// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class QueryAuthRuleDetailByRuleIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthRuleDetailByRuleIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuthRuleDetailByRuleIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    QueryAuthRuleDetailByRuleIdResponseBody() = default ;
    QueryAuthRuleDetailByRuleIdResponseBody(const QueryAuthRuleDetailByRuleIdResponseBody &) = default ;
    QueryAuthRuleDetailByRuleIdResponseBody(QueryAuthRuleDetailByRuleIdResponseBody &&) = default ;
    QueryAuthRuleDetailByRuleIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthRuleDetailByRuleIdResponseBody() = default ;
    QueryAuthRuleDetailByRuleIdResponseBody& operator=(const QueryAuthRuleDetailByRuleIdResponseBody &) = default ;
    QueryAuthRuleDetailByRuleIdResponseBody& operator=(QueryAuthRuleDetailByRuleIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(auditId, auditId_);
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(authUsers, authUsers_);
        DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(ruleActionMap, ruleActionMap_);
        DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
        DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
        DARABONBA_PTR_TO_JSON(templateType, templateType_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(auditId, auditId_);
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(authUsers, authUsers_);
        DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(ruleActionMap, ruleActionMap_);
        DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
        DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
        DARABONBA_PTR_FROM_JSON(templateType, templateType_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->auditId_ == nullptr
        && this->authType_ == nullptr && this->authUsers_ == nullptr && this->consoleRuleId_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->logicExpression_ == nullptr && this->memo_ == nullptr && this->priority_ == nullptr
        && this->ruleActionMap_ == nullptr && this->ruleActions_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleExpressions_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr && this->templateType_ == nullptr
        && this->version_ == nullptr; };
      // auditId Field Functions 
      bool hasAuditId() const { return this->auditId_ != nullptr;};
      void deleteAuditId() { this->auditId_ = nullptr;};
      inline int64_t getAuditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
      inline ResultObject& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline ResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // authUsers Field Functions 
      bool hasAuthUsers() const { return this->authUsers_ != nullptr;};
      void deleteAuthUsers() { this->authUsers_ = nullptr;};
      inline string getAuthUsers() const { DARABONBA_PTR_GET_DEFAULT(authUsers_, "") };
      inline ResultObject& setAuthUsers(string authUsers) { DARABONBA_PTR_SET_VALUE(authUsers_, authUsers) };


      // consoleRuleId Field Functions 
      bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
      void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
      inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
      inline ResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


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


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline ResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleActionMap Field Functions 
      bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
      void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
      inline const map<string, string> & getRuleActionMap() const { DARABONBA_PTR_GET_CONST(ruleActionMap_, map<string, string>) };
      inline map<string, string> getRuleActionMap() { DARABONBA_PTR_GET(ruleActionMap_, map<string, string>) };
      inline ResultObject& setRuleActionMap(const map<string, string> & ruleActionMap) { DARABONBA_PTR_SET_VALUE(ruleActionMap_, ruleActionMap) };
      inline ResultObject& setRuleActionMap(map<string, string> && ruleActionMap) { DARABONBA_PTR_SET_RVALUE(ruleActionMap_, ruleActionMap) };


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


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline ResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Audit ID
      shared_ptr<int64_t> auditId_ {};
      // Authorization type
      shared_ptr<string> authType_ {};
      // Authorized user UID
      shared_ptr<string> authUsers_ {};
      // Primary key ID of the strategy
      shared_ptr<int64_t> consoleRuleId_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time
      shared_ptr<int64_t> gmtModified_ {};
      // Execution logic
      shared_ptr<string> logicExpression_ {};
      // Description
      shared_ptr<string> memo_ {};
      // Rule priority, the higher the number, the higher the priority.
      shared_ptr<int64_t> priority_ {};
      // Returned rule action structure.
      shared_ptr<map<string, string>> ruleActionMap_ {};
      // Output actions
      shared_ptr<string> ruleActions_ {};
      // Rule authorization type
      shared_ptr<string> ruleAuthType_ {};
      // Rule expressions.
      shared_ptr<string> ruleExpressions_ {};
      // Strategy ID
      shared_ptr<string> ruleId_ {};
      // Strategy name
      shared_ptr<string> ruleName_ {};
      // Strategy status
      shared_ptr<string> ruleStatus_ {};
      // Rule type
      shared_ptr<string> ruleType_ {};
      // Primary key ID of the strategy version
      shared_ptr<int64_t> ruleVersionId_ {};
      // Template type
      shared_ptr<string> templateType_ {};
      // Version number
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const QueryAuthRuleDetailByRuleIdResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, QueryAuthRuleDetailByRuleIdResponseBody::ResultObject) };
    inline QueryAuthRuleDetailByRuleIdResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, QueryAuthRuleDetailByRuleIdResponseBody::ResultObject) };
    inline QueryAuthRuleDetailByRuleIdResponseBody& setResultObject(const QueryAuthRuleDetailByRuleIdResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline QueryAuthRuleDetailByRuleIdResponseBody& setResultObject(QueryAuthRuleDetailByRuleIdResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<QueryAuthRuleDetailByRuleIdResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
