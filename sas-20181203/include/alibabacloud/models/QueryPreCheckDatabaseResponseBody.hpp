// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRECHECKDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRECHECKDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryPreCheckDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPreCheckDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPreCheckDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    QueryPreCheckDatabaseResponseBody() = default ;
    QueryPreCheckDatabaseResponseBody(const QueryPreCheckDatabaseResponseBody &) = default ;
    QueryPreCheckDatabaseResponseBody(QueryPreCheckDatabaseResponseBody &&) = default ;
    QueryPreCheckDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPreCheckDatabaseResponseBody() = default ;
    QueryPreCheckDatabaseResponseBody& operator=(const QueryPreCheckDatabaseResponseBody &) = default ;
    QueryPreCheckDatabaseResponseBody& operator=(QueryPreCheckDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completedTime_ != nullptr
        && this->createdTime_ != nullptr && this->description_ != nullptr && this->progress_ != nullptr && this->requestId_ != nullptr && this->result_ != nullptr
        && this->updatedTime_ != nullptr; };
    // completedTime Field Functions 
    bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
    void deleteCompletedTime() { this->completedTime_ = nullptr;};
    inline int64_t completedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, 0L) };
    inline QueryPreCheckDatabaseResponseBody& setCompletedTime(int64_t completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline QueryPreCheckDatabaseResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryPreCheckDatabaseResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline QueryPreCheckDatabaseResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPreCheckDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryPreCheckDatabaseResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline QueryPreCheckDatabaseResponseBody& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    // The time when the precheck task was complete.
    std::shared_ptr<int64_t> completedTime_ = nullptr;
    // The time when the precheck task was started.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The status of the precheck task. Valid values:
    // 
    // *   **completed**: complete
    // *   **created**: started
    // *   **error**: failed
    std::shared_ptr<string> description_ = nullptr;
    // The precheck progress in percentage. Valid values: 0 to 100.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the precheck task. The value is a JSON string that contains the following fields:
    // 
    // *   **instanceId**: the ID of the server that hosts the database
    // 
    // *   **checkTime**: the precheck time
    // 
    // *   **sourceType**: the database type
    // 
    // *   **results**: the precheck item and result
    // 
    //     *   **item**: the precheck item
    //     *   **result**: the precheck result
    // 
    // > The following section describes the precheck items:
    // 
    // *   MSSQL
    // 
    //     *   **OSS_INTERNAL_ENDPOINT_CONNECTIVITY**: OSS connectivity check
    //     *   **SERVICE_CONNECTIVITY**: control network connectivity check
    //     *   **SQL_SERVER_DB_IN_SIMPLE_RECOVERY_MODE**: recovery mode check
    //     *   **SQL_SERVER_DB_NOT_ONLINE**: SQL Server database status check
    // 
    // *   ORACLE
    // 
    //     *   **OSS_INTERNAL_ENDPOINT_CONNECTIVITY**: OSS connectivity check
    //     *   **SERVICE_CONNECTIVITY**: control network connectivity check
    //     *   **ORACLE_INSTANCE_STATUS**: Oracle instance status check
    //     *   **ORACLE_DB_STATUS**: Oracle database status check
    //     *   **ARCHIVELOG**: archive mode check
    // 
    // *   MYSQL
    // 
    //     *   **OSS_INTERNAL_ENDPOINT_CONNECTIVITY**: OSS connectivity check
    //     *   **SERVICE_CONNECTIVITY**: control network connectivity check
    //     *   **MYSQL_VERSION**: Supports full backup version checking
    //     *   **MYSQL_BINLOG**: BINLOG check
    std::shared_ptr<string> result_ = nullptr;
    // The time when the precheck task was last updated.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
