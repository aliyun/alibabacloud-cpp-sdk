// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncJobDetail, structSyncJobDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncJobDetail, structSyncJobDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncJobDetailResponseBody() = default ;
    GetStructSyncJobDetailResponseBody(const GetStructSyncJobDetailResponseBody &) = default ;
    GetStructSyncJobDetailResponseBody(GetStructSyncJobDetailResponseBody &&) = default ;
    GetStructSyncJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobDetailResponseBody() = default ;
    GetStructSyncJobDetailResponseBody& operator=(const GetStructSyncJobDetailResponseBody &) = default ;
    GetStructSyncJobDetailResponseBody& operator=(GetStructSyncJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructSyncJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructSyncJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_TO_JSON(ExecuteCount, executeCount_);
        DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(SecurityRule, securityRule_);
        DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
        DARABONBA_PTR_TO_JSON(TableAnalyzed, tableAnalyzed_);
        DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      };
      friend void from_json(const Darabonba::Json& j, StructSyncJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
        DARABONBA_PTR_FROM_JSON(ExecuteCount, executeCount_);
        DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(SecurityRule, securityRule_);
        DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
        DARABONBA_PTR_FROM_JSON(TableAnalyzed, tableAnalyzed_);
        DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      };
      StructSyncJobDetail() = default ;
      StructSyncJobDetail(const StructSyncJobDetail &) = default ;
      StructSyncJobDetail(StructSyncJobDetail &&) = default ;
      StructSyncJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructSyncJobDetail() = default ;
      StructSyncJobDetail& operator=(const StructSyncJobDetail &) = default ;
      StructSyncJobDetail& operator=(StructSyncJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBTaskGroupId_ == nullptr
        && this->executeCount_ == nullptr && this->jobStatus_ == nullptr && this->message_ == nullptr && this->securityRule_ == nullptr && this->sqlCount_ == nullptr
        && this->tableAnalyzed_ == nullptr && this->tableCount_ == nullptr; };
      // DBTaskGroupId Field Functions 
      bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
      void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
      inline int64_t getDBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
      inline StructSyncJobDetail& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


      // executeCount Field Functions 
      bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
      void deleteExecuteCount() { this->executeCount_ = nullptr;};
      inline int64_t getExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
      inline StructSyncJobDetail& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline StructSyncJobDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline StructSyncJobDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // securityRule Field Functions 
      bool hasSecurityRule() const { return this->securityRule_ != nullptr;};
      void deleteSecurityRule() { this->securityRule_ = nullptr;};
      inline string getSecurityRule() const { DARABONBA_PTR_GET_DEFAULT(securityRule_, "") };
      inline StructSyncJobDetail& setSecurityRule(string securityRule) { DARABONBA_PTR_SET_VALUE(securityRule_, securityRule) };


      // sqlCount Field Functions 
      bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
      void deleteSqlCount() { this->sqlCount_ = nullptr;};
      inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
      inline StructSyncJobDetail& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


      // tableAnalyzed Field Functions 
      bool hasTableAnalyzed() const { return this->tableAnalyzed_ != nullptr;};
      void deleteTableAnalyzed() { this->tableAnalyzed_ = nullptr;};
      inline int64_t getTableAnalyzed() const { DARABONBA_PTR_GET_DEFAULT(tableAnalyzed_, 0L) };
      inline StructSyncJobDetail& setTableAnalyzed(int64_t tableAnalyzed) { DARABONBA_PTR_SET_VALUE(tableAnalyzed_, tableAnalyzed) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int64_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
      inline StructSyncJobDetail& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    protected:
      // The ID of the SQL task group.
      shared_ptr<int64_t> DBTaskGroupId_ {};
      // The number of SQL statements that have been executed.
      shared_ptr<int64_t> executeCount_ {};
      // The status of the task. Valid values:
      // 
      // *   **NEW**: The task was created.
      // *   **COMPARING**: The schemas of tables were being compared.
      // *   **COMPARE_BREAK**: The schema comparison was interrupted.
      // *   **COMPARE_FINISH**: The comparison was finished.
      // *   **NOT_SCRIPTS**: The comparison was finished but no executable script was available.
      // *   **SUBMITED_DBTASK**: The task was submitted.
      // *   **DBTASK_SUCCESS**: The task was complete.
      // *   **SUBMITED_WORKFLOW**: The ticket was submitted.
      // *   **WORKFLOW_SUCCESS**: The ticket was approved.
      shared_ptr<string> jobStatus_ {};
      // The description of the task.
      shared_ptr<string> message_ {};
      // The type of security rule. Valid values:
      // 
      // *   **CANNOT_SYNC**: Synchronization cannot be performed.
      // *   **WITH_APPROVE**: The schema synchronization can be performed after the ticket is approved. You can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
      // *   **WITHOUT_APPROVE**: The schema synchronization can be performed without approval.
      shared_ptr<string> securityRule_ {};
      // The total number of SQL statements.
      shared_ptr<int64_t> sqlCount_ {};
      // The number of tables that have been analyzed.
      shared_ptr<int64_t> tableAnalyzed_ {};
      // The total number of tables.
      shared_ptr<int64_t> tableCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->structSyncJobDetail_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncJobDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncJobDetail Field Functions 
    bool hasStructSyncJobDetail() const { return this->structSyncJobDetail_ != nullptr;};
    void deleteStructSyncJobDetail() { this->structSyncJobDetail_ = nullptr;};
    inline const GetStructSyncJobDetailResponseBody::StructSyncJobDetail & getStructSyncJobDetail() const { DARABONBA_PTR_GET_CONST(structSyncJobDetail_, GetStructSyncJobDetailResponseBody::StructSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBody::StructSyncJobDetail getStructSyncJobDetail() { DARABONBA_PTR_GET(structSyncJobDetail_, GetStructSyncJobDetailResponseBody::StructSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBody& setStructSyncJobDetail(const GetStructSyncJobDetailResponseBody::StructSyncJobDetail & structSyncJobDetail) { DARABONBA_PTR_SET_VALUE(structSyncJobDetail_, structSyncJobDetail) };
    inline GetStructSyncJobDetailResponseBody& setStructSyncJobDetail(GetStructSyncJobDetailResponseBody::StructSyncJobDetail && structSyncJobDetail) { DARABONBA_PTR_SET_RVALUE(structSyncJobDetail_, structSyncJobDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the schema synchronization task.
    shared_ptr<GetStructSyncJobDetailResponseBody::StructSyncJobDetail> structSyncJobDetail_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
