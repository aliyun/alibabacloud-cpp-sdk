// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEVERSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEVERSIONLISTRESPONSEBODY_HPP_
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
  class DescribeRuleVersionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleVersionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleVersionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeRuleVersionListResponseBody() = default ;
    DescribeRuleVersionListResponseBody(const DescribeRuleVersionListResponseBody &) = default ;
    DescribeRuleVersionListResponseBody(DescribeRuleVersionListResponseBody &&) = default ;
    DescribeRuleVersionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleVersionListResponseBody() = default ;
    DescribeRuleVersionListResponseBody& operator=(const DescribeRuleVersionListResponseBody &) = default ;
    DescribeRuleVersionListResponseBody& operator=(DescribeRuleVersionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(consoleAudit, consoleAudit_);
        DARABONBA_PTR_TO_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_TO_JSON(consoleRuleMemo, consoleRuleMemo_);
        DARABONBA_PTR_TO_JSON(consoleRuleName, consoleRuleName_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(lastOperator, lastOperator_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(consoleAudit, consoleAudit_);
        DARABONBA_PTR_FROM_JSON(consoleRuleId, consoleRuleId_);
        DARABONBA_PTR_FROM_JSON(consoleRuleMemo, consoleRuleMemo_);
        DARABONBA_PTR_FROM_JSON(consoleRuleName, consoleRuleName_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(lastOperator, lastOperator_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
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
        // Initiator UID
        shared_ptr<string> applyUserId_ {};
        // Initiator name
        shared_ptr<string> applyUserName_ {};
        // Approval comment
        shared_ptr<string> auditMsg_ {};
        // Final approver UID
        shared_ptr<string> auditRealUserId_ {};
        // Final approver name
        shared_ptr<string> auditRealUserName_ {};
        // Approver\\"s remarks.
        shared_ptr<string> auditRemark_ {};
        // Approval status
        shared_ptr<string> auditStatus_ {};
        // Approval time.
        shared_ptr<int64_t> auditTime_ {};
        // Designated approver UID
        shared_ptr<string> auditUserId_ {};
        // Designated auditor\\"s name
        shared_ptr<string> auditUserName_ {};
        // Creation time.
        shared_ptr<int64_t> gmtCreate_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Information of related others (in JSON format)
        shared_ptr<string> relationExt_ {};
        // ID of the associated transaction
        shared_ptr<int64_t> relationId_ {};
        // Name of the associated item
        shared_ptr<string> relationName_ {};
        // Type of approval (e.g., `rule` for policy approval)
        shared_ptr<string> relationType_ {};
      };

      virtual bool empty() const override { return this->consoleAudit_ == nullptr
        && this->consoleRuleId_ == nullptr && this->consoleRuleMemo_ == nullptr && this->consoleRuleName_ == nullptr && this->eventCode_ == nullptr && this->eventType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->lastOperator_ == nullptr && this->priority_ == nullptr
        && this->ruleId_ == nullptr && this->ruleStatus_ == nullptr && this->ruleType_ == nullptr && this->version_ == nullptr; };
      // consoleAudit Field Functions 
      bool hasConsoleAudit() const { return this->consoleAudit_ != nullptr;};
      void deleteConsoleAudit() { this->consoleAudit_ = nullptr;};
      inline const ResultObject::ConsoleAudit & getConsoleAudit() const { DARABONBA_PTR_GET_CONST(consoleAudit_, ResultObject::ConsoleAudit) };
      inline ResultObject::ConsoleAudit getConsoleAudit() { DARABONBA_PTR_GET(consoleAudit_, ResultObject::ConsoleAudit) };
      inline ResultObject& setConsoleAudit(const ResultObject::ConsoleAudit & consoleAudit) { DARABONBA_PTR_SET_VALUE(consoleAudit_, consoleAudit) };
      inline ResultObject& setConsoleAudit(ResultObject::ConsoleAudit && consoleAudit) { DARABONBA_PTR_SET_RVALUE(consoleAudit_, consoleAudit) };


      // consoleRuleId Field Functions 
      bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
      void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
      inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
      inline ResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


      // consoleRuleMemo Field Functions 
      bool hasConsoleRuleMemo() const { return this->consoleRuleMemo_ != nullptr;};
      void deleteConsoleRuleMemo() { this->consoleRuleMemo_ = nullptr;};
      inline string getConsoleRuleMemo() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleMemo_, "") };
      inline ResultObject& setConsoleRuleMemo(string consoleRuleMemo) { DARABONBA_PTR_SET_VALUE(consoleRuleMemo_, consoleRuleMemo) };


      // consoleRuleName Field Functions 
      bool hasConsoleRuleName() const { return this->consoleRuleName_ != nullptr;};
      void deleteConsoleRuleName() { this->consoleRuleName_ = nullptr;};
      inline string getConsoleRuleName() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleName_, "") };
      inline ResultObject& setConsoleRuleName(string consoleRuleName) { DARABONBA_PTR_SET_VALUE(consoleRuleName_, consoleRuleName) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline ResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


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


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastOperator Field Functions 
      bool hasLastOperator() const { return this->lastOperator_ != nullptr;};
      void deleteLastOperator() { this->lastOperator_ = nullptr;};
      inline string getLastOperator() const { DARABONBA_PTR_GET_DEFAULT(lastOperator_, "") };
      inline ResultObject& setLastOperator(string lastOperator) { DARABONBA_PTR_SET_VALUE(lastOperator_, lastOperator) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline ResultObject& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


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


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline ResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Audit object
      shared_ptr<ResultObject::ConsoleAudit> consoleAudit_ {};
      // Console rule ID.
      shared_ptr<int64_t> consoleRuleId_ {};
      // Associated policy remarks
      shared_ptr<string> consoleRuleMemo_ {};
      // Associated policy name
      shared_ptr<string> consoleRuleName_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event type
      shared_ptr<string> eventType_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Primary key ID of the policy
      shared_ptr<int64_t> id_ {};
      // The user who last operated.
      shared_ptr<string> lastOperator_ {};
      // Policy priority, the higher the number, the higher the priority.
      shared_ptr<int64_t> priority_ {};
      // Policy ID
      shared_ptr<string> ruleId_ {};
      // Policy status
      shared_ptr<string> ruleStatus_ {};
      // Rule Type
      shared_ptr<string> ruleType_ {};
      // Version number
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRuleVersionListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRuleVersionListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleVersionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeRuleVersionListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeRuleVersionListResponseBody::ResultObject>) };
    inline vector<DescribeRuleVersionListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeRuleVersionListResponseBody::ResultObject>) };
    inline DescribeRuleVersionListResponseBody& setResultObject(const vector<DescribeRuleVersionListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRuleVersionListResponseBody& setResultObject(vector<DescribeRuleVersionListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeRuleVersionListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeRuleVersionListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeRuleVersionListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
