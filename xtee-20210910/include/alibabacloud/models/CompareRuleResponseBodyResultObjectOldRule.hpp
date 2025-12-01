// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODYRESULTOBJECTOLDRULE_HPP_
#define ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODYRESULTOBJECTOLDRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareRuleResponseBodyResultObjectOldRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareRuleResponseBodyResultObjectOldRule& obj) { 
      DARABONBA_PTR_TO_JSON(auditId, auditId_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
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
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CompareRuleResponseBodyResultObjectOldRule& obj) { 
      DARABONBA_PTR_FROM_JSON(auditId, auditId_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
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
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    CompareRuleResponseBodyResultObjectOldRule() = default ;
    CompareRuleResponseBodyResultObjectOldRule(const CompareRuleResponseBodyResultObjectOldRule &) = default ;
    CompareRuleResponseBodyResultObjectOldRule(CompareRuleResponseBodyResultObjectOldRule &&) = default ;
    CompareRuleResponseBodyResultObjectOldRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareRuleResponseBodyResultObjectOldRule() = default ;
    CompareRuleResponseBodyResultObjectOldRule& operator=(const CompareRuleResponseBodyResultObjectOldRule &) = default ;
    CompareRuleResponseBodyResultObjectOldRule& operator=(CompareRuleResponseBodyResultObjectOldRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditId_ == nullptr
        && return this->authType_ == nullptr && return this->consoleRuleId_ == nullptr && return this->createType_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->logicExpression_ == nullptr && return this->mainEventCode_ == nullptr && return this->memo_ == nullptr
        && return this->ruleActionMap_ == nullptr && return this->ruleActions_ == nullptr && return this->ruleAuthType_ == nullptr && return this->ruleBody_ == nullptr && return this->ruleExpressions_ == nullptr
        && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr && return this->ruleType_ == nullptr && return this->ruleVersionId_ == nullptr
        && return this->userId_ == nullptr && return this->version_ == nullptr; };
    // auditId Field Functions 
    bool hasAuditId() const { return this->auditId_ != nullptr;};
    void deleteAuditId() { this->auditId_ = nullptr;};
    inline int64_t auditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // logicExpression Field Functions 
    bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
    void deleteLogicExpression() { this->logicExpression_ = nullptr;};
    inline string logicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


    // mainEventCode Field Functions 
    bool hasMainEventCode() const { return this->mainEventCode_ != nullptr;};
    void deleteMainEventCode() { this->mainEventCode_ = nullptr;};
    inline string mainEventCode() const { DARABONBA_PTR_GET_DEFAULT(mainEventCode_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setMainEventCode(string mainEventCode) { DARABONBA_PTR_SET_VALUE(mainEventCode_, mainEventCode) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // ruleActionMap Field Functions 
    bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
    void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
    inline     const Darabonba::Json & ruleActionMap() const { DARABONBA_GET(ruleActionMap_) };
    Darabonba::Json & ruleActionMap() { DARABONBA_GET(ruleActionMap_) };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleActionMap(const Darabonba::Json & ruleActionMap) { DARABONBA_SET_VALUE(ruleActionMap_, ruleActionMap) };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleActionMap(Darabonba::Json & ruleActionMap) { DARABONBA_SET_RVALUE(ruleActionMap_, ruleActionMap) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string ruleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleAuthType Field Functions 
    bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
    void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
    inline string ruleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


    // ruleBody Field Functions 
    bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
    void deleteRuleBody() { this->ruleBody_ = nullptr;};
    inline string ruleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string ruleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t ruleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline CompareRuleResponseBodyResultObjectOldRule& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Audit ID.
    std::shared_ptr<int64_t> auditId_ = nullptr;
    // Authorization type.
    std::shared_ptr<string> authType_ = nullptr;
    // Primary key ID of the policy.
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Creation type.
    std::shared_ptr<string> createType_ = nullptr;
    // Event code.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Execution logic of the policy expression.
    std::shared_ptr<string> logicExpression_ = nullptr;
    // Main event code.
    std::shared_ptr<string> mainEventCode_ = nullptr;
    // Description.
    std::shared_ptr<string> memo_ = nullptr;
    // Returned rule action structure. Returned when the policy type is DEFAULT.
    Darabonba::Json ruleActionMap_ = nullptr;
    // Policy execution output actions. Returned when the policy type is DEFAULT.
    std::shared_ptr<string> ruleActions_ = nullptr;
    // Policy authorization type.
    std::shared_ptr<string> ruleAuthType_ = nullptr;
    // DSL policy execution logic. Returned when the policy type is DSL.
    std::shared_ptr<string> ruleBody_ = nullptr;
    // Policy expression. Returned when the policy type is DEFAULT.
    std::shared_ptr<string> ruleExpressions_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Policy status.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // Policy type.
    std::shared_ptr<string> ruleType_ = nullptr;
    // Primary key ID of the policy version.
    std::shared_ptr<int64_t> ruleVersionId_ = nullptr;
    // User UID.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // Version number.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
