// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLEXECAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLExecAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLExecAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecState, execState_);
      DARABONBA_PTR_TO_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLExecAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecState, execState_);
      DARABONBA_PTR_FROM_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSQLExecAuditLogRequest() = default ;
    ListSQLExecAuditLogRequest(const ListSQLExecAuditLogRequest &) = default ;
    ListSQLExecAuditLogRequest(ListSQLExecAuditLogRequest &&) = default ;
    ListSQLExecAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLExecAuditLogRequest() = default ;
    ListSQLExecAuditLogRequest& operator=(const ListSQLExecAuditLogRequest &) = default ;
    ListSQLExecAuditLogRequest& operator=(ListSQLExecAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->execState_ != nullptr && this->opUserName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchName_ != nullptr
        && this->sqlType_ != nullptr && this->startTime_ != nullptr && this->tid_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListSQLExecAuditLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // execState Field Functions 
    bool hasExecState() const { return this->execState_ != nullptr;};
    void deleteExecState() { this->execState_ = nullptr;};
    inline string execState() const { DARABONBA_PTR_GET_DEFAULT(execState_, "") };
    inline ListSQLExecAuditLogRequest& setExecState(string execState) { DARABONBA_PTR_SET_VALUE(execState_, execState) };


    // opUserName Field Functions 
    bool hasOpUserName() const { return this->opUserName_ != nullptr;};
    void deleteOpUserName() { this->opUserName_ = nullptr;};
    inline string opUserName() const { DARABONBA_PTR_GET_DEFAULT(opUserName_, "") };
    inline ListSQLExecAuditLogRequest& setOpUserName(string opUserName) { DARABONBA_PTR_SET_VALUE(opUserName_, opUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSQLExecAuditLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSQLExecAuditLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListSQLExecAuditLogRequest& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListSQLExecAuditLogRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListSQLExecAuditLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSQLExecAuditLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The end of the time range to query.
    // 
    // >  The end time supports fuzzy match. Specify the time in the YYYY-MM-DD hh:mm:ss format. We recommend that you use the StartTime and EndTime parameters to specify a time range that does not exceed one day. The returned entries can be displayed by page to improve query efficiency.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The execution status of the SQL statement. Valid values:
    // 
    // *   **FAIL**: The SQL statement fails to be executed.
    // *   **NOEXE**: The SQL statement has not been executed.
    // *   **RUNNING**: The SQL statement is being executed.
    // *   **CANCEL**: The execution of the SQL statement is canceled.
    // *   **SUCCESS**: The SQL statement is executed.
    std::shared_ptr<string> execState_ = nullptr;
    // The nickname of the user who wrote the SQL statement.
    std::shared_ptr<string> opUserName_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. The value cannot exceed 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the database or instance based on which you want to query SQL statements.
    // 
    // >  If the SQL statements to be queried are at the instance level, you can set this parameter to an instance name. If the SQL statements to be queried are at the database level, you can set this parameter to a database name.
    std::shared_ptr<string> searchName_ = nullptr;
    // The type of the SQL statement. Valid values:
    // 
    // *   **SELECT**: the SQL statement that is used to query data.
    // *   **INSERT**: the SQL statement that is used to insert data.
    // *   **DELETE**: the SQL statement that is used to delete data.
    // *   **CREATE_TABLE**: the SQL statement that is used to create tables.
    // 
    // >  To view more types of SQL statements, log on to the DMS console and click Security and Specifications. In the left-side navigation pane, click **Operation Audit**. Then, you can view all supported types of SQL statements from the **SQL type** drop-down list.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The beginning of the time range to query.
    // 
    // >  The start time supports fuzzy match. Specify the time in the YYYY-MM-DD hh:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
