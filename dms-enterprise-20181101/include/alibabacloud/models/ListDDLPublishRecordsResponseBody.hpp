// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDDLPublishRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDLPublishRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDLPublishRecordList, DDLPublishRecordList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDLPublishRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDLPublishRecordList, DDLPublishRecordList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDDLPublishRecordsResponseBody() = default ;
    ListDDLPublishRecordsResponseBody(const ListDDLPublishRecordsResponseBody &) = default ;
    ListDDLPublishRecordsResponseBody(ListDDLPublishRecordsResponseBody &&) = default ;
    ListDDLPublishRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDLPublishRecordsResponseBody() = default ;
    ListDDLPublishRecordsResponseBody& operator=(const ListDDLPublishRecordsResponseBody &) = default ;
    ListDDLPublishRecordsResponseBody& operator=(ListDDLPublishRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DDLPublishRecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DDLPublishRecordList& obj) { 
        DARABONBA_PTR_TO_JSON(AuditExpireTime, auditExpireTime_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Finality, finality_);
        DARABONBA_PTR_TO_JSON(FinalityReason, finalityReason_);
        DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_TO_JSON(PublishTaskInfoList, publishTaskInfoList_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, DDLPublishRecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditExpireTime, auditExpireTime_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Finality, finality_);
        DARABONBA_PTR_FROM_JSON(FinalityReason, finalityReason_);
        DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_FROM_JSON(PublishTaskInfoList, publishTaskInfoList_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      };
      DDLPublishRecordList() = default ;
      DDLPublishRecordList(const DDLPublishRecordList &) = default ;
      DDLPublishRecordList(DDLPublishRecordList &&) = default ;
      DDLPublishRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DDLPublishRecordList() = default ;
      DDLPublishRecordList& operator=(const DDLPublishRecordList &) = default ;
      DDLPublishRecordList& operator=(DDLPublishRecordList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishTaskInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishTaskInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
          DARABONBA_PTR_TO_JSON(PublishJobList, publishJobList_);
          DARABONBA_PTR_TO_JSON(PublishStrategy, publishStrategy_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_TO_JSON(TaskJobStatus, taskJobStatus_);
        };
        friend void from_json(const Darabonba::Json& j, PublishTaskInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
          DARABONBA_PTR_FROM_JSON(PublishJobList, publishJobList_);
          DARABONBA_PTR_FROM_JSON(PublishStrategy, publishStrategy_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(TaskJobStatus, taskJobStatus_);
        };
        PublishTaskInfoList() = default ;
        PublishTaskInfoList(const PublishTaskInfoList &) = default ;
        PublishTaskInfoList(PublishTaskInfoList &&) = default ;
        PublishTaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishTaskInfoList() = default ;
        PublishTaskInfoList& operator=(const PublishTaskInfoList &) = default ;
        PublishTaskInfoList& operator=(PublishTaskInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PublishJobList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublishJobList& obj) { 
            DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
            DARABONBA_PTR_TO_JSON(ExecuteCount, executeCount_);
            DARABONBA_PTR_TO_JSON(Scripts, scripts_);
            DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TaskJobStatus, taskJobStatus_);
          };
          friend void from_json(const Darabonba::Json& j, PublishJobList& obj) { 
            DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
            DARABONBA_PTR_FROM_JSON(ExecuteCount, executeCount_);
            DARABONBA_PTR_FROM_JSON(Scripts, scripts_);
            DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TaskJobStatus, taskJobStatus_);
          };
          PublishJobList() = default ;
          PublishJobList(const PublishJobList &) = default ;
          PublishJobList(PublishJobList &&) = default ;
          PublishJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublishJobList() = default ;
          PublishJobList& operator=(const PublishJobList &) = default ;
          PublishJobList& operator=(PublishJobList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->DBTaskGroupId_ == nullptr
        && this->executeCount_ == nullptr && this->scripts_ == nullptr && this->statusDesc_ == nullptr && this->tableName_ == nullptr && this->taskJobStatus_ == nullptr; };
          // DBTaskGroupId Field Functions 
          bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
          void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
          inline int64_t getDBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
          inline PublishJobList& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


          // executeCount Field Functions 
          bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
          void deleteExecuteCount() { this->executeCount_ = nullptr;};
          inline int64_t getExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
          inline PublishJobList& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


          // scripts Field Functions 
          bool hasScripts() const { return this->scripts_ != nullptr;};
          void deleteScripts() { this->scripts_ = nullptr;};
          inline string getScripts() const { DARABONBA_PTR_GET_DEFAULT(scripts_, "") };
          inline PublishJobList& setScripts(string scripts) { DARABONBA_PTR_SET_VALUE(scripts_, scripts) };


          // statusDesc Field Functions 
          bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
          void deleteStatusDesc() { this->statusDesc_ = nullptr;};
          inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
          inline PublishJobList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline PublishJobList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // taskJobStatus Field Functions 
          bool hasTaskJobStatus() const { return this->taskJobStatus_ != nullptr;};
          void deleteTaskJobStatus() { this->taskJobStatus_ = nullptr;};
          inline string getTaskJobStatus() const { DARABONBA_PTR_GET_DEFAULT(taskJobStatus_, "") };
          inline PublishJobList& setTaskJobStatus(string taskJobStatus) { DARABONBA_PTR_SET_VALUE(taskJobStatus_, taskJobStatus) };


        protected:
          // The ID of the SQL task group.
          shared_ptr<int64_t> DBTaskGroupId_ {};
          // The number of SQL statements that are executed.
          shared_ptr<int64_t> executeCount_ {};
          // The script for data changes.
          shared_ptr<string> scripts_ {};
          // The description of the state.
          shared_ptr<string> statusDesc_ {};
          // The name of the table after the change.
          shared_ptr<string> tableName_ {};
          // The state of the publishing task. Valid values:
          // 
          // *   **NONE**: The state of the task is unknown.
          // *   **SUCCESS**: The task is successful.
          // *   **FAIL**: The task fails.
          shared_ptr<string> taskJobStatus_ {};
        };

        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->logic_ == nullptr && this->planTime_ == nullptr && this->publishJobList_ == nullptr && this->publishStrategy_ == nullptr && this->statusDesc_ == nullptr
        && this->taskJobStatus_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline PublishTaskInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline PublishTaskInfoList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // planTime Field Functions 
        bool hasPlanTime() const { return this->planTime_ != nullptr;};
        void deletePlanTime() { this->planTime_ = nullptr;};
        inline string getPlanTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, "") };
        inline PublishTaskInfoList& setPlanTime(string planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


        // publishJobList Field Functions 
        bool hasPublishJobList() const { return this->publishJobList_ != nullptr;};
        void deletePublishJobList() { this->publishJobList_ = nullptr;};
        inline const vector<PublishTaskInfoList::PublishJobList> & getPublishJobList() const { DARABONBA_PTR_GET_CONST(publishJobList_, vector<PublishTaskInfoList::PublishJobList>) };
        inline vector<PublishTaskInfoList::PublishJobList> getPublishJobList() { DARABONBA_PTR_GET(publishJobList_, vector<PublishTaskInfoList::PublishJobList>) };
        inline PublishTaskInfoList& setPublishJobList(const vector<PublishTaskInfoList::PublishJobList> & publishJobList) { DARABONBA_PTR_SET_VALUE(publishJobList_, publishJobList) };
        inline PublishTaskInfoList& setPublishJobList(vector<PublishTaskInfoList::PublishJobList> && publishJobList) { DARABONBA_PTR_SET_RVALUE(publishJobList_, publishJobList) };


        // publishStrategy Field Functions 
        bool hasPublishStrategy() const { return this->publishStrategy_ != nullptr;};
        void deletePublishStrategy() { this->publishStrategy_ = nullptr;};
        inline string getPublishStrategy() const { DARABONBA_PTR_GET_DEFAULT(publishStrategy_, "") };
        inline PublishTaskInfoList& setPublishStrategy(string publishStrategy) { DARABONBA_PTR_SET_VALUE(publishStrategy_, publishStrategy) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline PublishTaskInfoList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // taskJobStatus Field Functions 
        bool hasTaskJobStatus() const { return this->taskJobStatus_ != nullptr;};
        void deleteTaskJobStatus() { this->taskJobStatus_ = nullptr;};
        inline string getTaskJobStatus() const { DARABONBA_PTR_GET_DEFAULT(taskJobStatus_, "") };
        inline PublishTaskInfoList& setTaskJobStatus(string taskJobStatus) { DARABONBA_PTR_SET_VALUE(taskJobStatus_, taskJobStatus) };


      protected:
        // The ID of the database.
        shared_ptr<int64_t> dbId_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: the database is not a logical database.
        shared_ptr<bool> logic_ {};
        // The time to publish the ticket.
        shared_ptr<string> planTime_ {};
        // The list of the publishing tasks.
        shared_ptr<vector<PublishTaskInfoList::PublishJobList>> publishJobList_ {};
        // The publishing policy. Valid values:
        // 
        // *   **IMMEDIATELY**: immediately publishes the ticket.
        // *   **REGULARLY**: publishes the ticket at a scheduled time.
        shared_ptr<string> publishStrategy_ {};
        // The description of the state.
        shared_ptr<string> statusDesc_ {};
        // The state of the task.
        shared_ptr<string> taskJobStatus_ {};
      };

      virtual bool empty() const override { return this->auditExpireTime_ == nullptr
        && this->auditStatus_ == nullptr && this->comment_ == nullptr && this->creatorId_ == nullptr && this->finality_ == nullptr && this->finalityReason_ == nullptr
        && this->publishStatus_ == nullptr && this->publishTaskInfoList_ == nullptr && this->riskLevel_ == nullptr && this->statusDesc_ == nullptr && this->workflowInstanceId_ == nullptr; };
      // auditExpireTime Field Functions 
      bool hasAuditExpireTime() const { return this->auditExpireTime_ != nullptr;};
      void deleteAuditExpireTime() { this->auditExpireTime_ = nullptr;};
      inline string getAuditExpireTime() const { DARABONBA_PTR_GET_DEFAULT(auditExpireTime_, "") };
      inline DDLPublishRecordList& setAuditExpireTime(string auditExpireTime) { DARABONBA_PTR_SET_VALUE(auditExpireTime_, auditExpireTime) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline DDLPublishRecordList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline DDLPublishRecordList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline DDLPublishRecordList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // finality Field Functions 
      bool hasFinality() const { return this->finality_ != nullptr;};
      void deleteFinality() { this->finality_ = nullptr;};
      inline bool getFinality() const { DARABONBA_PTR_GET_DEFAULT(finality_, false) };
      inline DDLPublishRecordList& setFinality(bool finality) { DARABONBA_PTR_SET_VALUE(finality_, finality) };


      // finalityReason Field Functions 
      bool hasFinalityReason() const { return this->finalityReason_ != nullptr;};
      void deleteFinalityReason() { this->finalityReason_ = nullptr;};
      inline string getFinalityReason() const { DARABONBA_PTR_GET_DEFAULT(finalityReason_, "") };
      inline DDLPublishRecordList& setFinalityReason(string finalityReason) { DARABONBA_PTR_SET_VALUE(finalityReason_, finalityReason) };


      // publishStatus Field Functions 
      bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
      void deletePublishStatus() { this->publishStatus_ = nullptr;};
      inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
      inline DDLPublishRecordList& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


      // publishTaskInfoList Field Functions 
      bool hasPublishTaskInfoList() const { return this->publishTaskInfoList_ != nullptr;};
      void deletePublishTaskInfoList() { this->publishTaskInfoList_ = nullptr;};
      inline const vector<DDLPublishRecordList::PublishTaskInfoList> & getPublishTaskInfoList() const { DARABONBA_PTR_GET_CONST(publishTaskInfoList_, vector<DDLPublishRecordList::PublishTaskInfoList>) };
      inline vector<DDLPublishRecordList::PublishTaskInfoList> getPublishTaskInfoList() { DARABONBA_PTR_GET(publishTaskInfoList_, vector<DDLPublishRecordList::PublishTaskInfoList>) };
      inline DDLPublishRecordList& setPublishTaskInfoList(const vector<DDLPublishRecordList::PublishTaskInfoList> & publishTaskInfoList) { DARABONBA_PTR_SET_VALUE(publishTaskInfoList_, publishTaskInfoList) };
      inline DDLPublishRecordList& setPublishTaskInfoList(vector<DDLPublishRecordList::PublishTaskInfoList> && publishTaskInfoList) { DARABONBA_PTR_SET_RVALUE(publishTaskInfoList_, publishTaskInfoList) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline DDLPublishRecordList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline DDLPublishRecordList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // workflowInstanceId Field Functions 
      bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
      void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
      inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
      inline DDLPublishRecordList& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    protected:
      // The time when the approval expires.
      shared_ptr<string> auditExpireTime_ {};
      // The approval state of the ticket. Valid values:
      // 
      // *   **EXEMPT_PASS**: The ticket passes without approval.
      // *   **TO_AUDIT**: The ticket is pending for approval.
      // *   **CANCEL**: The ticket is canceled.
      // *   **SUCCESS**: The ticket is approved.
      // *   **FAIL**: The ticket fails to pass the approval.
      shared_ptr<string> auditStatus_ {};
      // Release remarks.
      shared_ptr<string> comment_ {};
      // The ID of the user who creates the ticket. You can obtain the user ID by calling the [GetUser](https://help.aliyun.com/document_detail/147098.html) operation and querying the value of the UserId parameter. The value is not the unique ID (UID) of the Alibaba Cloud account.
      shared_ptr<int64_t> creatorId_ {};
      // Indicates whether the approval is terminated. Valid values:
      // 
      // *   **true**: The approval is terminated.
      // *   **false**: The approval is not terminated.
      // 
      // > Multiple reasons can terminate the approval. For example, you withdraw the application or your ticket is not approved before the specified time.
      shared_ptr<bool> finality_ {};
      // The reason for the termination.
      shared_ptr<string> finalityReason_ {};
      // The publishing state of the ticket. Valid values:
      // 
      // *   **START**: The ticket is created.
      // *   **ANALYZE**: The ticket is under analysis.
      // *   **AUDIT**: The ticket is under approval.
      // *   **DISPATCH**: A task is generated for the ticket.
      // *   **SUCCESS**: The task is successful.
      shared_ptr<string> publishStatus_ {};
      // The list of publishing tasks.
      shared_ptr<vector<DDLPublishRecordList::PublishTaskInfoList>> publishTaskInfoList_ {};
      // The risk level of the operation. Valid values:
      // 
      // *   **NONE_RISK**: The operation does not have risks.
      // *   **LOW_RISK**: The operation is at low risk.
      // *   **MIDDLE_RISK**: The operation is at medium risk.
      // *   **HIGH_RISK**: The operation is at high risk.
      shared_ptr<string> riskLevel_ {};
      // The description of the publishing state.
      shared_ptr<string> statusDesc_ {};
      // The ID of the approval process.
      shared_ptr<int64_t> workflowInstanceId_ {};
    };

    virtual bool empty() const override { return this->DDLPublishRecordList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // DDLPublishRecordList Field Functions 
    bool hasDDLPublishRecordList() const { return this->DDLPublishRecordList_ != nullptr;};
    void deleteDDLPublishRecordList() { this->DDLPublishRecordList_ = nullptr;};
    inline const vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList> & getDDLPublishRecordList() const { DARABONBA_PTR_GET_CONST(DDLPublishRecordList_, vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList>) };
    inline vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList> getDDLPublishRecordList() { DARABONBA_PTR_GET(DDLPublishRecordList_, vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList>) };
    inline ListDDLPublishRecordsResponseBody& setDDLPublishRecordList(const vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList> & dDLPublishRecordList) { DARABONBA_PTR_SET_VALUE(DDLPublishRecordList_, dDLPublishRecordList) };
    inline ListDDLPublishRecordsResponseBody& setDDLPublishRecordList(vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList> && dDLPublishRecordList) { DARABONBA_PTR_SET_RVALUE(DDLPublishRecordList_, dDLPublishRecordList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDDLPublishRecordsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDDLPublishRecordsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDDLPublishRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDDLPublishRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the publishing records.
    shared_ptr<vector<ListDDLPublishRecordsResponseBody::DDLPublishRecordList>> DDLPublishRecordList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
