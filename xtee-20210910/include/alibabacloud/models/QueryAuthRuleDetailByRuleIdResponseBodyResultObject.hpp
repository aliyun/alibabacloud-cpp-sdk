// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTHRULEDETAILBYRULEIDRESPONSEBODYRESULTOBJECT_HPP_
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
  class QueryAuthRuleDetailByRuleIdResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuthRuleDetailByRuleIdResponseBodyResultObject& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryAuthRuleDetailByRuleIdResponseBodyResultObject& obj) { 
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
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject() = default ;
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject(const QueryAuthRuleDetailByRuleIdResponseBodyResultObject &) = default ;
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject(QueryAuthRuleDetailByRuleIdResponseBodyResultObject &&) = default ;
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuthRuleDetailByRuleIdResponseBodyResultObject() = default ;
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject& operator=(const QueryAuthRuleDetailByRuleIdResponseBodyResultObject &) = default ;
    QueryAuthRuleDetailByRuleIdResponseBodyResultObject& operator=(QueryAuthRuleDetailByRuleIdResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditId_ == nullptr
        && return this->authType_ == nullptr && return this->authUsers_ == nullptr && return this->consoleRuleId_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->logicExpression_ == nullptr && return this->memo_ == nullptr && return this->priority_ == nullptr
        && return this->ruleActionMap_ == nullptr && return this->ruleActions_ == nullptr && return this->ruleAuthType_ == nullptr && return this->ruleExpressions_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr && return this->ruleType_ == nullptr && return this->ruleVersionId_ == nullptr && return this->templateType_ == nullptr
        && return this->version_ == nullptr; };
    // auditId Field Functions 
    bool hasAuditId() const { return this->auditId_ != nullptr;};
    void deleteAuditId() { this->auditId_ = nullptr;};
    inline int64_t auditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // authUsers Field Functions 
    bool hasAuthUsers() const { return this->authUsers_ != nullptr;};
    void deleteAuthUsers() { this->authUsers_ = nullptr;};
    inline string authUsers() const { DARABONBA_PTR_GET_DEFAULT(authUsers_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setAuthUsers(string authUsers) { DARABONBA_PTR_SET_VALUE(authUsers_, authUsers) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // logicExpression Field Functions 
    bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
    void deleteLogicExpression() { this->logicExpression_ = nullptr;};
    inline string logicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleActionMap Field Functions 
    bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
    void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
    inline const map<string, string> & ruleActionMap() const { DARABONBA_PTR_GET_CONST(ruleActionMap_, map<string, string>) };
    inline map<string, string> ruleActionMap() { DARABONBA_PTR_GET(ruleActionMap_, map<string, string>) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleActionMap(const map<string, string> & ruleActionMap) { DARABONBA_PTR_SET_VALUE(ruleActionMap_, ruleActionMap) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleActionMap(map<string, string> && ruleActionMap) { DARABONBA_PTR_SET_RVALUE(ruleActionMap_, ruleActionMap) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string ruleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleAuthType Field Functions 
    bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
    void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
    inline string ruleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string ruleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t ruleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline QueryAuthRuleDetailByRuleIdResponseBodyResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Audit ID
    std::shared_ptr<int64_t> auditId_ = nullptr;
    // Authorization type
    std::shared_ptr<string> authType_ = nullptr;
    // Authorized user UID
    std::shared_ptr<string> authUsers_ = nullptr;
    // Primary key ID of the strategy
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Execution logic
    std::shared_ptr<string> logicExpression_ = nullptr;
    // Description
    std::shared_ptr<string> memo_ = nullptr;
    // Rule priority, the higher the number, the higher the priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
    // Returned rule action structure.
    std::shared_ptr<map<string, string>> ruleActionMap_ = nullptr;
    // Output actions
    std::shared_ptr<string> ruleActions_ = nullptr;
    // Rule authorization type
    std::shared_ptr<string> ruleAuthType_ = nullptr;
    // Rule expressions.
    std::shared_ptr<string> ruleExpressions_ = nullptr;
    // Strategy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Strategy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Strategy status
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // Rule type
    std::shared_ptr<string> ruleType_ = nullptr;
    // Primary key ID of the strategy version
    std::shared_ptr<int64_t> ruleVersionId_ = nullptr;
    // Template type
    std::shared_ptr<string> templateType_ = nullptr;
    // Version number
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
