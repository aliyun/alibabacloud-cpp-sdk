// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSYNCRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QuerySyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(deptStats, deptStats_);
      DARABONBA_PTR_TO_JSON(durationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(memberStats, memberStats_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(platformType, platformType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(submittedAt, submittedAt_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(deptStats, deptStats_);
      DARABONBA_PTR_FROM_JSON(durationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(memberStats, memberStats_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(platformType, platformType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(submittedAt, submittedAt_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    QuerySyncResultResponseBody() = default ;
    QuerySyncResultResponseBody(const QuerySyncResultResponseBody &) = default ;
    QuerySyncResultResponseBody(QuerySyncResultResponseBody &&) = default ;
    QuerySyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySyncResultResponseBody() = default ;
    QuerySyncResultResponseBody& operator=(const QuerySyncResultResponseBody &) = default ;
    QuerySyncResultResponseBody& operator=(QuerySyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberStats& obj) { 
        DARABONBA_PTR_TO_JSON(failed, failed_);
        DARABONBA_PTR_TO_JSON(relationshipAdded, relationshipAdded_);
        DARABONBA_PTR_TO_JSON(relationshipRemoved, relationshipRemoved_);
        DARABONBA_PTR_TO_JSON(totalExternal, totalExternal_);
        DARABONBA_PTR_TO_JSON(unchanged, unchanged_);
      };
      friend void from_json(const Darabonba::Json& j, MemberStats& obj) { 
        DARABONBA_PTR_FROM_JSON(failed, failed_);
        DARABONBA_PTR_FROM_JSON(relationshipAdded, relationshipAdded_);
        DARABONBA_PTR_FROM_JSON(relationshipRemoved, relationshipRemoved_);
        DARABONBA_PTR_FROM_JSON(totalExternal, totalExternal_);
        DARABONBA_PTR_FROM_JSON(unchanged, unchanged_);
      };
      MemberStats() = default ;
      MemberStats(const MemberStats &) = default ;
      MemberStats(MemberStats &&) = default ;
      MemberStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberStats() = default ;
      MemberStats& operator=(const MemberStats &) = default ;
      MemberStats& operator=(MemberStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failed_ == nullptr
        && this->relationshipAdded_ == nullptr && this->relationshipRemoved_ == nullptr && this->totalExternal_ == nullptr && this->unchanged_ == nullptr; };
      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
      inline MemberStats& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


      // relationshipAdded Field Functions 
      bool hasRelationshipAdded() const { return this->relationshipAdded_ != nullptr;};
      void deleteRelationshipAdded() { this->relationshipAdded_ = nullptr;};
      inline int64_t getRelationshipAdded() const { DARABONBA_PTR_GET_DEFAULT(relationshipAdded_, 0L) };
      inline MemberStats& setRelationshipAdded(int64_t relationshipAdded) { DARABONBA_PTR_SET_VALUE(relationshipAdded_, relationshipAdded) };


      // relationshipRemoved Field Functions 
      bool hasRelationshipRemoved() const { return this->relationshipRemoved_ != nullptr;};
      void deleteRelationshipRemoved() { this->relationshipRemoved_ = nullptr;};
      inline int64_t getRelationshipRemoved() const { DARABONBA_PTR_GET_DEFAULT(relationshipRemoved_, 0L) };
      inline MemberStats& setRelationshipRemoved(int64_t relationshipRemoved) { DARABONBA_PTR_SET_VALUE(relationshipRemoved_, relationshipRemoved) };


      // totalExternal Field Functions 
      bool hasTotalExternal() const { return this->totalExternal_ != nullptr;};
      void deleteTotalExternal() { this->totalExternal_ = nullptr;};
      inline int64_t getTotalExternal() const { DARABONBA_PTR_GET_DEFAULT(totalExternal_, 0L) };
      inline MemberStats& setTotalExternal(int64_t totalExternal) { DARABONBA_PTR_SET_VALUE(totalExternal_, totalExternal) };


      // unchanged Field Functions 
      bool hasUnchanged() const { return this->unchanged_ != nullptr;};
      void deleteUnchanged() { this->unchanged_ = nullptr;};
      inline int64_t getUnchanged() const { DARABONBA_PTR_GET_DEFAULT(unchanged_, 0L) };
      inline MemberStats& setUnchanged(int64_t unchanged) { DARABONBA_PTR_SET_VALUE(unchanged_, unchanged) };


    protected:
      // The number of failed members.
      shared_ptr<int64_t> failed_ {};
      // The number of added member relationships.
      shared_ptr<int64_t> relationshipAdded_ {};
      // The number of removed member relationships.
      shared_ptr<int64_t> relationshipRemoved_ {};
      // The total number of external members.
      shared_ptr<int64_t> totalExternal_ {};
      // The number of unchanged member relationships.
      shared_ptr<int64_t> unchanged_ {};
    };

    class DeptStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeptStats& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(deleted, deleted_);
        DARABONBA_PTR_TO_JSON(moved, moved_);
        DARABONBA_PTR_TO_JSON(renamed, renamed_);
        DARABONBA_PTR_TO_JSON(skipped, skipped_);
        DARABONBA_PTR_TO_JSON(totalExternal, totalExternal_);
      };
      friend void from_json(const Darabonba::Json& j, DeptStats& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(moved, moved_);
        DARABONBA_PTR_FROM_JSON(renamed, renamed_);
        DARABONBA_PTR_FROM_JSON(skipped, skipped_);
        DARABONBA_PTR_FROM_JSON(totalExternal, totalExternal_);
      };
      DeptStats() = default ;
      DeptStats(const DeptStats &) = default ;
      DeptStats(DeptStats &&) = default ;
      DeptStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeptStats() = default ;
      DeptStats& operator=(const DeptStats &) = default ;
      DeptStats& operator=(DeptStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->deleted_ == nullptr && this->moved_ == nullptr && this->renamed_ == nullptr && this->skipped_ == nullptr && this->totalExternal_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline DeptStats& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline int64_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0L) };
      inline DeptStats& setDeleted(int64_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // moved Field Functions 
      bool hasMoved() const { return this->moved_ != nullptr;};
      void deleteMoved() { this->moved_ = nullptr;};
      inline int64_t getMoved() const { DARABONBA_PTR_GET_DEFAULT(moved_, 0L) };
      inline DeptStats& setMoved(int64_t moved) { DARABONBA_PTR_SET_VALUE(moved_, moved) };


      // renamed Field Functions 
      bool hasRenamed() const { return this->renamed_ != nullptr;};
      void deleteRenamed() { this->renamed_ = nullptr;};
      inline int64_t getRenamed() const { DARABONBA_PTR_GET_DEFAULT(renamed_, 0L) };
      inline DeptStats& setRenamed(int64_t renamed) { DARABONBA_PTR_SET_VALUE(renamed_, renamed) };


      // skipped Field Functions 
      bool hasSkipped() const { return this->skipped_ != nullptr;};
      void deleteSkipped() { this->skipped_ = nullptr;};
      inline int64_t getSkipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
      inline DeptStats& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


      // totalExternal Field Functions 
      bool hasTotalExternal() const { return this->totalExternal_ != nullptr;};
      void deleteTotalExternal() { this->totalExternal_ = nullptr;};
      inline int64_t getTotalExternal() const { DARABONBA_PTR_GET_DEFAULT(totalExternal_, 0L) };
      inline DeptStats& setTotalExternal(int64_t totalExternal) { DARABONBA_PTR_SET_VALUE(totalExternal_, totalExternal) };


    protected:
      // The total number of external departments.
      shared_ptr<int64_t> created_ {};
      // The number of user groups marked for deletion.
      shared_ptr<int64_t> deleted_ {};
      // The number of moved user groups.
      shared_ptr<int64_t> moved_ {};
      // The number of renamed user groups.
      shared_ptr<int64_t> renamed_ {};
      // The number of skipped user groups.
      shared_ptr<int64_t> skipped_ {};
      // The total number of external departments.
      shared_ptr<int64_t> totalExternal_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->completedAt_ == nullptr && this->corpId_ == nullptr && this->deptStats_ == nullptr && this->durationSeconds_ == nullptr && this->errorMessage_ == nullptr
        && this->memberStats_ == nullptr && this->message_ == nullptr && this->platformType_ == nullptr && this->requestId_ == nullptr && this->startedAt_ == nullptr
        && this->status_ == nullptr && this->submittedAt_ == nullptr && this->summary_ == nullptr && this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySyncResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline QuerySyncResultResponseBody& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QuerySyncResultResponseBody& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // deptStats Field Functions 
    bool hasDeptStats() const { return this->deptStats_ != nullptr;};
    void deleteDeptStats() { this->deptStats_ = nullptr;};
    inline const QuerySyncResultResponseBody::DeptStats & getDeptStats() const { DARABONBA_PTR_GET_CONST(deptStats_, QuerySyncResultResponseBody::DeptStats) };
    inline QuerySyncResultResponseBody::DeptStats getDeptStats() { DARABONBA_PTR_GET(deptStats_, QuerySyncResultResponseBody::DeptStats) };
    inline QuerySyncResultResponseBody& setDeptStats(const QuerySyncResultResponseBody::DeptStats & deptStats) { DARABONBA_PTR_SET_VALUE(deptStats_, deptStats) };
    inline QuerySyncResultResponseBody& setDeptStats(QuerySyncResultResponseBody::DeptStats && deptStats) { DARABONBA_PTR_SET_RVALUE(deptStats_, deptStats) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline QuerySyncResultResponseBody& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QuerySyncResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // memberStats Field Functions 
    bool hasMemberStats() const { return this->memberStats_ != nullptr;};
    void deleteMemberStats() { this->memberStats_ = nullptr;};
    inline const QuerySyncResultResponseBody::MemberStats & getMemberStats() const { DARABONBA_PTR_GET_CONST(memberStats_, QuerySyncResultResponseBody::MemberStats) };
    inline QuerySyncResultResponseBody::MemberStats getMemberStats() { DARABONBA_PTR_GET(memberStats_, QuerySyncResultResponseBody::MemberStats) };
    inline QuerySyncResultResponseBody& setMemberStats(const QuerySyncResultResponseBody::MemberStats & memberStats) { DARABONBA_PTR_SET_VALUE(memberStats_, memberStats) };
    inline QuerySyncResultResponseBody& setMemberStats(QuerySyncResultResponseBody::MemberStats && memberStats) { DARABONBA_PTR_SET_RVALUE(memberStats_, memberStats) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline QuerySyncResultResponseBody& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline QuerySyncResultResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySyncResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submittedAt Field Functions 
    bool hasSubmittedAt() const { return this->submittedAt_ != nullptr;};
    void deleteSubmittedAt() { this->submittedAt_ = nullptr;};
    inline string getSubmittedAt() const { DARABONBA_PTR_GET_DEFAULT(submittedAt_, "") };
    inline QuerySyncResultResponseBody& setSubmittedAt(string submittedAt) { DARABONBA_PTR_SET_VALUE(submittedAt_, submittedAt) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline QuerySyncResultResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QuerySyncResultResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The time when the task was completed (ISO 8601 format).
    shared_ptr<string> completedAt_ {};
    // The enterprise identifier.
    shared_ptr<string> corpId_ {};
    // The department synchronization statistics. This field has a value when the task is completed.
    shared_ptr<QuerySyncResultResponseBody::DeptStats> deptStats_ {};
    // The execution duration, in seconds.
    shared_ptr<int64_t> durationSeconds_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The member synchronization statistics. This field has a value when syncMembers is set to true and the task is completed.
    shared_ptr<QuerySyncResultResponseBody::MemberStats> memberStats_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The platform type.
    shared_ptr<string> platformType_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The time when the task started (ISO 8601 format).
    shared_ptr<string> startedAt_ {};
    // The task status. Valid values: PENDING, RUNNING, COMPLETED, FAILED, TIMEOUT, and CANCELED.
    shared_ptr<string> status_ {};
    // The time when the task was submitted (ISO 8601 format).
    shared_ptr<string> submittedAt_ {};
    // The intelligent meeting summary content.
    shared_ptr<string> summary_ {};
    // The task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
