// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODYSTRUCTSYNCJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBDETAILRESPONSEBODYSTRUCTSYNCJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobDetailResponseBodyStructSyncJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobDetailResponseBodyStructSyncJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_TO_JSON(ExecuteCount, executeCount_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SecurityRule, securityRule_);
      DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
      DARABONBA_PTR_TO_JSON(TableAnalyzed, tableAnalyzed_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobDetailResponseBodyStructSyncJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(ExecuteCount, executeCount_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SecurityRule, securityRule_);
      DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
      DARABONBA_PTR_FROM_JSON(TableAnalyzed, tableAnalyzed_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
    };
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail() = default ;
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail(const GetStructSyncJobDetailResponseBodyStructSyncJobDetail &) = default ;
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail(GetStructSyncJobDetailResponseBodyStructSyncJobDetail &&) = default ;
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobDetailResponseBodyStructSyncJobDetail() = default ;
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail& operator=(const GetStructSyncJobDetailResponseBodyStructSyncJobDetail &) = default ;
    GetStructSyncJobDetailResponseBodyStructSyncJobDetail& operator=(GetStructSyncJobDetailResponseBodyStructSyncJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTaskGroupId_ != nullptr
        && this->executeCount_ != nullptr && this->jobStatus_ != nullptr && this->message_ != nullptr && this->securityRule_ != nullptr && this->sqlCount_ != nullptr
        && this->tableAnalyzed_ != nullptr && this->tableCount_ != nullptr; };
    // DBTaskGroupId Field Functions 
    bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
    void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
    inline int64_t DBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


    // executeCount Field Functions 
    bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
    void deleteExecuteCount() { this->executeCount_ = nullptr;};
    inline int64_t executeCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // securityRule Field Functions 
    bool hasSecurityRule() const { return this->securityRule_ != nullptr;};
    void deleteSecurityRule() { this->securityRule_ = nullptr;};
    inline string securityRule() const { DARABONBA_PTR_GET_DEFAULT(securityRule_, "") };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setSecurityRule(string securityRule) { DARABONBA_PTR_SET_VALUE(securityRule_, securityRule) };


    // sqlCount Field Functions 
    bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
    void deleteSqlCount() { this->sqlCount_ = nullptr;};
    inline int64_t sqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


    // tableAnalyzed Field Functions 
    bool hasTableAnalyzed() const { return this->tableAnalyzed_ != nullptr;};
    void deleteTableAnalyzed() { this->tableAnalyzed_ = nullptr;};
    inline int64_t tableAnalyzed() const { DARABONBA_PTR_GET_DEFAULT(tableAnalyzed_, 0L) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setTableAnalyzed(int64_t tableAnalyzed) { DARABONBA_PTR_SET_VALUE(tableAnalyzed_, tableAnalyzed) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int64_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
    inline GetStructSyncJobDetailResponseBodyStructSyncJobDetail& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


  protected:
    // The ID of the SQL task group.
    std::shared_ptr<int64_t> DBTaskGroupId_ = nullptr;
    // The number of SQL statements that have been executed.
    std::shared_ptr<int64_t> executeCount_ = nullptr;
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
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> message_ = nullptr;
    // The type of security rule. Valid values:
    // 
    // *   **CANNOT_SYNC**: Synchronization cannot be performed.
    // *   **WITH_APPROVE**: The schema synchronization can be performed after the ticket is approved. You can call the [SubmitStructSyncOrderApproval](https://help.aliyun.com/document_detail/206166.html) operation to submit the ticket for approval.
    // *   **WITHOUT_APPROVE**: The schema synchronization can be performed without approval.
    std::shared_ptr<string> securityRule_ = nullptr;
    // The total number of SQL statements.
    std::shared_ptr<int64_t> sqlCount_ = nullptr;
    // The number of tables that have been analyzed.
    std::shared_ptr<int64_t> tableAnalyzed_ = nullptr;
    // The total number of tables.
    std::shared_ptr<int64_t> tableCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
