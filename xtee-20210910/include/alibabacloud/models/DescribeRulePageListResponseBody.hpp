// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEPAGELISTRESPONSEBODY_HPP_
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
  class DescribeRulePageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulePageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulePageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeRulePageListResponseBody() = default ;
    DescribeRulePageListResponseBody(const DescribeRulePageListResponseBody &) = default ;
    DescribeRulePageListResponseBody(DescribeRulePageListResponseBody &&) = default ;
    DescribeRulePageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulePageListResponseBody() = default ;
    DescribeRulePageListResponseBody& operator=(const DescribeRulePageListResponseBody &) = default ;
    DescribeRulePageListResponseBody& operator=(DescribeRulePageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(consoleAudit, consoleAudit_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
        DARABONBA_PTR_TO_JSON(externalRuleName, externalRuleName_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(hasNewVersion, hasNewVersion_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(mainRuleId, mainRuleId_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleMemo, ruleMemo_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
        DARABONBA_PTR_TO_JSON(ruleVersionId, ruleVersionId_);
        DARABONBA_PTR_TO_JSON(templateId, templateId_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(consoleAudit, consoleAudit_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        DARABONBA_PTR_FROM_JSON(externalRuleName, externalRuleName_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(hasNewVersion, hasNewVersion_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(mainRuleId, mainRuleId_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleMemo, ruleMemo_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(ruleVersionId, ruleVersionId_);
        DARABONBA_PTR_FROM_JSON(templateId, templateId_);
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
      class ConsoleAudit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsoleAudit& obj) { 
          DARABONBA_PTR_TO_JSON(applyUserId, applyUserId_);
          DARABONBA_PTR_TO_JSON(applyUserName, applyUserName_);
          DARABONBA_PTR_TO_JSON(auditMsg, auditMsg_);
          DARABONBA_PTR_TO_JSON(auditRealUserId, auditRealUserId_);
          DARABONBA_PTR_TO_JSON(auditRealUserName, auditRealUserName_);
          DARABONBA_PTR_TO_JSON(auditRemark, auditRemark_);
          DARABONBA_PTR_TO_JSON(auditStatus, auditStatus_);
          DARABONBA_PTR_TO_JSON(auditTime, auditTime_);
          DARABONBA_PTR_TO_JSON(auditUserId, auditUserId_);
          DARABONBA_PTR_TO_JSON(auditUserName, auditUserName_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(relationExt, relationExt_);
          DARABONBA_PTR_TO_JSON(relationId, relationId_);
          DARABONBA_PTR_TO_JSON(relationName, relationName_);
          DARABONBA_PTR_TO_JSON(relationType, relationType_);
        };
        friend void from_json(const Darabonba::Json& j, ConsoleAudit& obj) { 
          DARABONBA_PTR_FROM_JSON(applyUserId, applyUserId_);
          DARABONBA_PTR_FROM_JSON(applyUserName, applyUserName_);
          DARABONBA_PTR_FROM_JSON(auditMsg, auditMsg_);
          DARABONBA_PTR_FROM_JSON(auditRealUserId, auditRealUserId_);
          DARABONBA_PTR_FROM_JSON(auditRealUserName, auditRealUserName_);
          DARABONBA_PTR_FROM_JSON(auditRemark, auditRemark_);
          DARABONBA_PTR_FROM_JSON(auditStatus, auditStatus_);
          DARABONBA_PTR_FROM_JSON(auditTime, auditTime_);
          DARABONBA_PTR_FROM_JSON(auditUserId, auditUserId_);
          DARABONBA_PTR_FROM_JSON(auditUserName, auditUserName_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(relationExt, relationExt_);
          DARABONBA_PTR_FROM_JSON(relationId, relationId_);
          DARABONBA_PTR_FROM_JSON(relationName, relationName_);
          DARABONBA_PTR_FROM_JSON(relationType, relationType_);
        };
        ConsoleAudit() = default ;
        ConsoleAudit(const ConsoleAudit &) = default ;
        ConsoleAudit(ConsoleAudit &&) = default ;
        ConsoleAudit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsoleAudit() = default ;
        ConsoleAudit& operator=(const ConsoleAudit &) = default ;
        ConsoleAudit& operator=(ConsoleAudit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyUserId_ == nullptr
        && this->applyUserName_ == nullptr && this->auditMsg_ == nullptr && this->auditRealUserId_ == nullptr && this->auditRealUserName_ == nullptr && this->auditRemark_ == nullptr
        && this->auditStatus_ == nullptr && this->auditTime_ == nullptr && this->auditUserId_ == nullptr && this->auditUserName_ == nullptr && this->gmtCreate_ == nullptr
        && this->id_ == nullptr && this->relationExt_ == nullptr && this->relationId_ == nullptr && this->relationName_ == nullptr && this->relationType_ == nullptr; };
        // applyUserId Field Functions 
        bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
        void deleteApplyUserId() { this->applyUserId_ = nullptr;};
        inline string getApplyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
        inline ConsoleAudit& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


        // applyUserName Field Functions 
        bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
        void deleteApplyUserName() { this->applyUserName_ = nullptr;};
        inline string getApplyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
        inline ConsoleAudit& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


        // auditMsg Field Functions 
        bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
        void deleteAuditMsg() { this->auditMsg_ = nullptr;};
        inline string getAuditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
        inline ConsoleAudit& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


        // auditRealUserId Field Functions 
        bool hasAuditRealUserId() const { return this->auditRealUserId_ != nullptr;};
        void deleteAuditRealUserId() { this->auditRealUserId_ = nullptr;};
        inline string getAuditRealUserId() const { DARABONBA_PTR_GET_DEFAULT(auditRealUserId_, "") };
        inline ConsoleAudit& setAuditRealUserId(string auditRealUserId) { DARABONBA_PTR_SET_VALUE(auditRealUserId_, auditRealUserId) };


        // auditRealUserName Field Functions 
        bool hasAuditRealUserName() const { return this->auditRealUserName_ != nullptr;};
        void deleteAuditRealUserName() { this->auditRealUserName_ = nullptr;};
        inline string getAuditRealUserName() const { DARABONBA_PTR_GET_DEFAULT(auditRealUserName_, "") };
        inline ConsoleAudit& setAuditRealUserName(string auditRealUserName) { DARABONBA_PTR_SET_VALUE(auditRealUserName_, auditRealUserName) };


        // auditRemark Field Functions 
        bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
        void deleteAuditRemark() { this->auditRemark_ = nullptr;};
        inline string getAuditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
        inline ConsoleAudit& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


        // auditStatus Field Functions 
        bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
        void deleteAuditStatus() { this->auditStatus_ = nullptr;};
        inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
        inline ConsoleAudit& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


        // auditTime Field Functions 
        bool hasAuditTime() const { return this->auditTime_ != nullptr;};
        void deleteAuditTime() { this->auditTime_ = nullptr;};
        inline int64_t getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
        inline ConsoleAudit& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


        // auditUserId Field Functions 
        bool hasAuditUserId() const { return this->auditUserId_ != nullptr;};
        void deleteAuditUserId() { this->auditUserId_ = nullptr;};
        inline string getAuditUserId() const { DARABONBA_PTR_GET_DEFAULT(auditUserId_, "") };
        inline ConsoleAudit& setAuditUserId(string auditUserId) { DARABONBA_PTR_SET_VALUE(auditUserId_, auditUserId) };


        // auditUserName Field Functions 
        bool hasAuditUserName() const { return this->auditUserName_ != nullptr;};
        void deleteAuditUserName() { this->auditUserName_ = nullptr;};
        inline string getAuditUserName() const { DARABONBA_PTR_GET_DEFAULT(auditUserName_, "") };
        inline ConsoleAudit& setAuditUserName(string auditUserName) { DARABONBA_PTR_SET_VALUE(auditUserName_, auditUserName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline ConsoleAudit& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ConsoleAudit& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // relationExt Field Functions 
        bool hasRelationExt() const { return this->relationExt_ != nullptr;};
        void deleteRelationExt() { this->relationExt_ = nullptr;};
        inline string getRelationExt() const { DARABONBA_PTR_GET_DEFAULT(relationExt_, "") };
        inline ConsoleAudit& setRelationExt(string relationExt) { DARABONBA_PTR_SET_VALUE(relationExt_, relationExt) };


        // relationId Field Functions 
        bool hasRelationId() const { return this->relationId_ != nullptr;};
        void deleteRelationId() { this->relationId_ = nullptr;};
        inline int64_t getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
        inline ConsoleAudit& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


        // relationName Field Functions 
        bool hasRelationName() const { return this->relationName_ != nullptr;};
        void deleteRelationName() { this->relationName_ = nullptr;};
        inline string getRelationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
        inline ConsoleAudit& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline ConsoleAudit& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      protected:
        // UID of the user who passed the audit
        shared_ptr<string> applyUserId_ {};
        // Name of the user who passed the audit
        shared_ptr<string> applyUserName_ {};
        // Approval comments
        shared_ptr<string> auditMsg_ {};
        // UID of the final auditor
        shared_ptr<string> auditRealUserId_ {};
        // Name of the final auditor
        shared_ptr<string> auditRealUserName_ {};
        // Remarks by the approver.
        shared_ptr<string> auditRemark_ {};
        // Application audit status
        shared_ptr<string> auditStatus_ {};
        // Approval time
        shared_ptr<int64_t> auditTime_ {};
        // UID of the auditor
        shared_ptr<string> auditUserId_ {};
        // Name of the auditor
        shared_ptr<string> auditUserName_ {};
        // Creation time.
        shared_ptr<int64_t> gmtCreate_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Information of other related parties (in JSON format)
        shared_ptr<string> relationExt_ {};
        // ID of the related transaction for the approval
        shared_ptr<int64_t> relationId_ {};
        // Name of the related transaction for the approval (can be null)
        shared_ptr<string> relationName_ {};
        // Type of the approval (e.g., `rule` represents the approval of a rule)
        shared_ptr<string> relationType_ {};
      };

      virtual bool empty() const override { return this->authType_ == nullptr
        && this->consoleAudit_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr && this->externalRuleName_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasNewVersion_ == nullptr && this->id_ == nullptr && this->mainRuleId_ == nullptr
        && this->priority_ == nullptr && this->ruleAuthType_ == nullptr && this->ruleId_ == nullptr && this->ruleMemo_ == nullptr && this->ruleName_ == nullptr
        && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->ruleVersionId_ == nullptr && this->templateId_ == nullptr && this->version_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline ResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // consoleAudit Field Functions 
      bool hasConsoleAudit() const { return this->consoleAudit_ != nullptr;};
      void deleteConsoleAudit() { this->consoleAudit_ = nullptr;};
      inline const ResultObject::ConsoleAudit & getConsoleAudit() const { DARABONBA_PTR_GET_CONST(consoleAudit_, ResultObject::ConsoleAudit) };
      inline ResultObject::ConsoleAudit getConsoleAudit() { DARABONBA_PTR_GET(consoleAudit_, ResultObject::ConsoleAudit) };
      inline ResultObject& setConsoleAudit(const ResultObject::ConsoleAudit & consoleAudit) { DARABONBA_PTR_SET_VALUE(consoleAudit_, consoleAudit) };
      inline ResultObject& setConsoleAudit(ResultObject::ConsoleAudit && consoleAudit) { DARABONBA_PTR_SET_RVALUE(consoleAudit_, consoleAudit) };


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


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline ResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // externalRuleName Field Functions 
      bool hasExternalRuleName() const { return this->externalRuleName_ != nullptr;};
      void deleteExternalRuleName() { this->externalRuleName_ = nullptr;};
      inline string getExternalRuleName() const { DARABONBA_PTR_GET_DEFAULT(externalRuleName_, "") };
      inline ResultObject& setExternalRuleName(string externalRuleName) { DARABONBA_PTR_SET_VALUE(externalRuleName_, externalRuleName) };


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


      // hasNewVersion Field Functions 
      bool hasHasNewVersion() const { return this->hasNewVersion_ != nullptr;};
      void deleteHasNewVersion() { this->hasNewVersion_ = nullptr;};
      inline bool getHasNewVersion() const { DARABONBA_PTR_GET_DEFAULT(hasNewVersion_, false) };
      inline ResultObject& setHasNewVersion(bool hasNewVersion) { DARABONBA_PTR_SET_VALUE(hasNewVersion_, hasNewVersion) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mainRuleId Field Functions 
      bool hasMainRuleId() const { return this->mainRuleId_ != nullptr;};
      void deleteMainRuleId() { this->mainRuleId_ = nullptr;};
      inline string getMainRuleId() const { DARABONBA_PTR_GET_DEFAULT(mainRuleId_, "") };
      inline ResultObject& setMainRuleId(string mainRuleId) { DARABONBA_PTR_SET_VALUE(mainRuleId_, mainRuleId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline ResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleAuthType Field Functions 
      bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
      void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
      inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
      inline ResultObject& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleMemo Field Functions 
      bool hasRuleMemo() const { return this->ruleMemo_ != nullptr;};
      void deleteRuleMemo() { this->ruleMemo_ = nullptr;};
      inline string getRuleMemo() const { DARABONBA_PTR_GET_DEFAULT(ruleMemo_, "") };
      inline ResultObject& setRuleMemo(string ruleMemo) { DARABONBA_PTR_SET_VALUE(ruleMemo_, ruleMemo) };


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


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline ResultObject& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Service authorization type
      shared_ptr<string> authType_ {};
      // Audit object
      shared_ptr<ResultObject::ConsoleAudit> consoleAudit_ {};
      // Event code.
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Event type
      shared_ptr<string> eventType_ {};
      // External name of the rule
      shared_ptr<string> externalRuleName_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Whether there is a new version
      shared_ptr<bool> hasNewVersion_ {};
      // Primary key ID of the policy.
      shared_ptr<int64_t> id_ {};
      // Main rule ID
      shared_ptr<string> mainRuleId_ {};
      // Policy priority, the higher the number, the higher the priority.
      shared_ptr<int64_t> priority_ {};
      // Rule type
      shared_ptr<string> ruleAuthType_ {};
      // Policy ID.
      shared_ptr<string> ruleId_ {};
      // Policy description.
      shared_ptr<string> ruleMemo_ {};
      // Policy name.
      shared_ptr<string> ruleName_ {};
      // Policy status.
      shared_ptr<string> ruleStatus_ {};
      // Rule type
      shared_ptr<string> ruleType_ {};
      // Primary key ID of the rule version.
      shared_ptr<int64_t> ruleVersionId_ {};
      // Template ID.
      shared_ptr<int64_t> templateId_ {};
      // Version number.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRulePageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRulePageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRulePageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeRulePageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeRulePageListResponseBody::ResultObject>) };
    inline vector<DescribeRulePageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeRulePageListResponseBody::ResultObject>) };
    inline DescribeRulePageListResponseBody& setResultObject(const vector<DescribeRulePageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRulePageListResponseBody& setResultObject(vector<DescribeRulePageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeRulePageListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeRulePageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<vector<DescribeRulePageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
