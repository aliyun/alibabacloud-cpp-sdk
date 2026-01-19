// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CompareRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    CompareRuleResponseBody() = default ;
    CompareRuleResponseBody(const CompareRuleResponseBody &) = default ;
    CompareRuleResponseBody(CompareRuleResponseBody &&) = default ;
    CompareRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareRuleResponseBody() = default ;
    CompareRuleResponseBody& operator=(const CompareRuleResponseBody &) = default ;
    CompareRuleResponseBody& operator=(CompareRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(newRule, newRule_);
        DARABONBA_PTR_TO_JSON(oldRule, oldRule_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(newRule, newRule_);
        DARABONBA_PTR_FROM_JSON(oldRule, oldRule_);
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
      class OldRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OldRule& obj) { 
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
        friend void from_json(const Darabonba::Json& j, OldRule& obj) { 
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
        OldRule() = default ;
        OldRule(const OldRule &) = default ;
        OldRule(OldRule &&) = default ;
        OldRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OldRule() = default ;
        OldRule& operator=(const OldRule &) = default ;
        OldRule& operator=(OldRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->auditId_ == nullptr
        && this->authType_ == nullptr && this->consoleRuleId_ == nullptr && this->createType_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->logicExpression_ == nullptr && this->mainEventCode_ == nullptr && this->memo_ == nullptr
        && this->ruleActionMap_ == nullptr && this->ruleActions_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleBody_ == nullptr && this->ruleExpressions_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr
        && this->userId_ == nullptr && this->version_ == nullptr; };
        // auditId Field Functions 
        bool hasAuditId() const { return this->auditId_ != nullptr;};
        void deleteAuditId() { this->auditId_ = nullptr;};
        inline int64_t getAuditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
        inline OldRule& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline OldRule& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // consoleRuleId Field Functions 
        bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
        void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
        inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
        inline OldRule& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
        inline OldRule& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline OldRule& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline OldRule& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline OldRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline OldRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // logicExpression Field Functions 
        bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
        void deleteLogicExpression() { this->logicExpression_ = nullptr;};
        inline string getLogicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
        inline OldRule& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


        // mainEventCode Field Functions 
        bool hasMainEventCode() const { return this->mainEventCode_ != nullptr;};
        void deleteMainEventCode() { this->mainEventCode_ = nullptr;};
        inline string getMainEventCode() const { DARABONBA_PTR_GET_DEFAULT(mainEventCode_, "") };
        inline OldRule& setMainEventCode(string mainEventCode) { DARABONBA_PTR_SET_VALUE(mainEventCode_, mainEventCode) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline OldRule& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // ruleActionMap Field Functions 
        bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
        void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
        inline         const Darabonba::Json & getRuleActionMap() const { DARABONBA_GET(ruleActionMap_) };
        Darabonba::Json & getRuleActionMap() { DARABONBA_GET(ruleActionMap_) };
        inline OldRule& setRuleActionMap(const Darabonba::Json & ruleActionMap) { DARABONBA_SET_VALUE(ruleActionMap_, ruleActionMap) };
        inline OldRule& setRuleActionMap(Darabonba::Json && ruleActionMap) { DARABONBA_SET_RVALUE(ruleActionMap_, ruleActionMap) };


        // ruleActions Field Functions 
        bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
        void deleteRuleActions() { this->ruleActions_ = nullptr;};
        inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
        inline OldRule& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


        // ruleAuthType Field Functions 
        bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
        void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
        inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
        inline OldRule& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


        // ruleBody Field Functions 
        bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
        void deleteRuleBody() { this->ruleBody_ = nullptr;};
        inline string getRuleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
        inline OldRule& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


        // ruleExpressions Field Functions 
        bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
        void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
        inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
        inline OldRule& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline OldRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline OldRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline OldRule& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline OldRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // ruleVersionId Field Functions 
        bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
        void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
        inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
        inline OldRule& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline OldRule& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline OldRule& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Audit ID.
        shared_ptr<int64_t> auditId_ {};
        // Authorization type.
        shared_ptr<string> authType_ {};
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
        // Execution logic of the policy expression.
        shared_ptr<string> logicExpression_ {};
        // Main event code.
        shared_ptr<string> mainEventCode_ {};
        // Description.
        shared_ptr<string> memo_ {};
        // Returned rule action structure. Returned when the policy type is DEFAULT.
        Darabonba::Json ruleActionMap_ {};
        // Policy execution output actions. Returned when the policy type is DEFAULT.
        shared_ptr<string> ruleActions_ {};
        // Policy authorization type.
        shared_ptr<string> ruleAuthType_ {};
        // DSL policy execution logic. Returned when the policy type is DSL.
        shared_ptr<string> ruleBody_ {};
        // Policy expression. Returned when the policy type is DEFAULT.
        shared_ptr<string> ruleExpressions_ {};
        // Policy ID.
        shared_ptr<string> ruleId_ {};
        // Policy name.
        shared_ptr<string> ruleName_ {};
        // Policy status.
        shared_ptr<string> ruleStatus_ {};
        // Policy type.
        shared_ptr<string> ruleType_ {};
        // Primary key ID of the policy version.
        shared_ptr<int64_t> ruleVersionId_ {};
        // User UID.
        shared_ptr<int64_t> userId_ {};
        // Version number.
        shared_ptr<int64_t> version_ {};
      };

      class NewRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NewRule& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NewRule& obj) { 
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
        NewRule() = default ;
        NewRule(const NewRule &) = default ;
        NewRule(NewRule &&) = default ;
        NewRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NewRule() = default ;
        NewRule& operator=(const NewRule &) = default ;
        NewRule& operator=(NewRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->auditId_ == nullptr
        && this->authType_ == nullptr && this->consoleRuleId_ == nullptr && this->createType_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->logicExpression_ == nullptr && this->mainEventCode_ == nullptr && this->memo_ == nullptr
        && this->ruleActionMap_ == nullptr && this->ruleActions_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleBody_ == nullptr && this->ruleExpressions_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr
        && this->userId_ == nullptr && this->version_ == nullptr; };
        // auditId Field Functions 
        bool hasAuditId() const { return this->auditId_ != nullptr;};
        void deleteAuditId() { this->auditId_ = nullptr;};
        inline int64_t getAuditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, 0L) };
        inline NewRule& setAuditId(int64_t auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline NewRule& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // consoleRuleId Field Functions 
        bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
        void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
        inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
        inline NewRule& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
        inline NewRule& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline NewRule& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline NewRule& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline NewRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline NewRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // logicExpression Field Functions 
        bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
        void deleteLogicExpression() { this->logicExpression_ = nullptr;};
        inline string getLogicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
        inline NewRule& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


        // mainEventCode Field Functions 
        bool hasMainEventCode() const { return this->mainEventCode_ != nullptr;};
        void deleteMainEventCode() { this->mainEventCode_ = nullptr;};
        inline string getMainEventCode() const { DARABONBA_PTR_GET_DEFAULT(mainEventCode_, "") };
        inline NewRule& setMainEventCode(string mainEventCode) { DARABONBA_PTR_SET_VALUE(mainEventCode_, mainEventCode) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline NewRule& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // ruleActionMap Field Functions 
        bool hasRuleActionMap() const { return this->ruleActionMap_ != nullptr;};
        void deleteRuleActionMap() { this->ruleActionMap_ = nullptr;};
        inline         const Darabonba::Json & getRuleActionMap() const { DARABONBA_GET(ruleActionMap_) };
        Darabonba::Json & getRuleActionMap() { DARABONBA_GET(ruleActionMap_) };
        inline NewRule& setRuleActionMap(const Darabonba::Json & ruleActionMap) { DARABONBA_SET_VALUE(ruleActionMap_, ruleActionMap) };
        inline NewRule& setRuleActionMap(Darabonba::Json && ruleActionMap) { DARABONBA_SET_RVALUE(ruleActionMap_, ruleActionMap) };


        // ruleActions Field Functions 
        bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
        void deleteRuleActions() { this->ruleActions_ = nullptr;};
        inline string getRuleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
        inline NewRule& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


        // ruleAuthType Field Functions 
        bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
        void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
        inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
        inline NewRule& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


        // ruleBody Field Functions 
        bool hasRuleBody() const { return this->ruleBody_ != nullptr;};
        void deleteRuleBody() { this->ruleBody_ = nullptr;};
        inline string getRuleBody() const { DARABONBA_PTR_GET_DEFAULT(ruleBody_, "") };
        inline NewRule& setRuleBody(string ruleBody) { DARABONBA_PTR_SET_VALUE(ruleBody_, ruleBody) };


        // ruleExpressions Field Functions 
        bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
        void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
        inline string getRuleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
        inline NewRule& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline NewRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline NewRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline NewRule& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline NewRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // ruleVersionId Field Functions 
        bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
        void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
        inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
        inline NewRule& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline NewRule& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline NewRule& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Audit ID.
        shared_ptr<int64_t> auditId_ {};
        // Authorization type.
        shared_ptr<string> authType_ {};
        // Primary key ID of the rule.
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
        // Logic of the rule expression execution.
        shared_ptr<string> logicExpression_ {};
        // Main event code.
        shared_ptr<string> mainEventCode_ {};
        // Memo.
        shared_ptr<string> memo_ {};
        // Returned rule action structure. Returned when the policy type is DEFAULT.
        Darabonba::Json ruleActionMap_ {};
        // Output actions of the rule execution. Returned when the rule type is DEFAULT.
        shared_ptr<string> ruleActions_ {};
        // Authorization type of the rule.
        shared_ptr<string> ruleAuthType_ {};
        // DSL logic for rule execution. Returned when the rule type is DSL.
        shared_ptr<string> ruleBody_ {};
        // Policy expressions. Returned when the policy type is DEFAULT.
        shared_ptr<string> ruleExpressions_ {};
        // Rule ID.
        shared_ptr<string> ruleId_ {};
        // Rule name.
        shared_ptr<string> ruleName_ {};
        // Policy status.
        shared_ptr<string> ruleStatus_ {};
        // Rule type.
        shared_ptr<string> ruleType_ {};
        // Primary key ID of the rule version.
        shared_ptr<int64_t> ruleVersionId_ {};
        // User UID.
        shared_ptr<int64_t> userId_ {};
        // Version number.
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->newRule_ == nullptr
        && this->oldRule_ == nullptr; };
      // newRule Field Functions 
      bool hasNewRule() const { return this->newRule_ != nullptr;};
      void deleteNewRule() { this->newRule_ = nullptr;};
      inline const ResultObject::NewRule & getNewRule() const { DARABONBA_PTR_GET_CONST(newRule_, ResultObject::NewRule) };
      inline ResultObject::NewRule getNewRule() { DARABONBA_PTR_GET(newRule_, ResultObject::NewRule) };
      inline ResultObject& setNewRule(const ResultObject::NewRule & newRule) { DARABONBA_PTR_SET_VALUE(newRule_, newRule) };
      inline ResultObject& setNewRule(ResultObject::NewRule && newRule) { DARABONBA_PTR_SET_RVALUE(newRule_, newRule) };


      // oldRule Field Functions 
      bool hasOldRule() const { return this->oldRule_ != nullptr;};
      void deleteOldRule() { this->oldRule_ = nullptr;};
      inline const ResultObject::OldRule & getOldRule() const { DARABONBA_PTR_GET_CONST(oldRule_, ResultObject::OldRule) };
      inline ResultObject::OldRule getOldRule() { DARABONBA_PTR_GET(oldRule_, ResultObject::OldRule) };
      inline ResultObject& setOldRule(const ResultObject::OldRule & oldRule) { DARABONBA_PTR_SET_VALUE(oldRule_, oldRule) };
      inline ResultObject& setOldRule(ResultObject::OldRule && oldRule) { DARABONBA_PTR_SET_RVALUE(oldRule_, oldRule) };


    protected:
      // New policy object.
      shared_ptr<ResultObject::NewRule> newRule_ {};
      // Old policy object.
      shared_ptr<ResultObject::OldRule> oldRule_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CompareRuleResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CompareRuleResponseBody::ResultObject) };
    inline CompareRuleResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CompareRuleResponseBody::ResultObject) };
    inline CompareRuleResponseBody& setResultObject(const CompareRuleResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CompareRuleResponseBody& setResultObject(CompareRuleResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<CompareRuleResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
