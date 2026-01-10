// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXYSQLEXECAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxySQLExecAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxySQLExecAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecState, execState_);
      DARABONBA_PTR_TO_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SQLType, SQLType_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxySQLExecAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecState, execState_);
      DARABONBA_PTR_FROM_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SQLType, SQLType_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListProxySQLExecAuditLogRequest() = default ;
    ListProxySQLExecAuditLogRequest(const ListProxySQLExecAuditLogRequest &) = default ;
    ListProxySQLExecAuditLogRequest(ListProxySQLExecAuditLogRequest &&) = default ;
    ListProxySQLExecAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxySQLExecAuditLogRequest() = default ;
    ListProxySQLExecAuditLogRequest& operator=(const ListProxySQLExecAuditLogRequest &) = default ;
    ListProxySQLExecAuditLogRequest& operator=(ListProxySQLExecAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->execState_ == nullptr && this->opUserName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->SQLType_ == nullptr
        && this->searchName_ == nullptr && this->startTime_ == nullptr && this->tid_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListProxySQLExecAuditLogRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // execState Field Functions 
    bool hasExecState() const { return this->execState_ != nullptr;};
    void deleteExecState() { this->execState_ = nullptr;};
    inline string getExecState() const { DARABONBA_PTR_GET_DEFAULT(execState_, "") };
    inline ListProxySQLExecAuditLogRequest& setExecState(string execState) { DARABONBA_PTR_SET_VALUE(execState_, execState) };


    // opUserName Field Functions 
    bool hasOpUserName() const { return this->opUserName_ != nullptr;};
    void deleteOpUserName() { this->opUserName_ = nullptr;};
    inline string getOpUserName() const { DARABONBA_PTR_GET_DEFAULT(opUserName_, "") };
    inline ListProxySQLExecAuditLogRequest& setOpUserName(string opUserName) { DARABONBA_PTR_SET_VALUE(opUserName_, opUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProxySQLExecAuditLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProxySQLExecAuditLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // SQLType Field Functions 
    bool hasSQLType() const { return this->SQLType_ != nullptr;};
    void deleteSQLType() { this->SQLType_ = nullptr;};
    inline string getSQLType() const { DARABONBA_PTR_GET_DEFAULT(SQLType_, "") };
    inline ListProxySQLExecAuditLogRequest& setSQLType(string SQLType) { DARABONBA_PTR_SET_VALUE(SQLType_, SQLType) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListProxySQLExecAuditLogRequest& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListProxySQLExecAuditLogRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListProxySQLExecAuditLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The end of the time range to query. The value of this parameter must be a timestamp that follows the UNIX time format.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The execution status of the SQL statement. Valid values:
    // 
    // *   **FAIL**: The execution of the SQL statement fails.
    // *   **CANCEL**: The execution of the SQL statement is canceled.
    // *   **SUCCESS**: The SQL statement is executed.
    shared_ptr<string> execState_ {};
    // The alias of the user.
    shared_ptr<string> opUserName_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum values: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The type of SQL statement. Valid values:
    // 
    // *   **SELECT**
    // *   **INSERT**
    // *   **DELETE**
    // *   **CREATE_TABLE**
    // 
    // >  You can choose Operation Audit > Secure Access Proxy in the top navigation bar of the DMS console to view more types of SQL statements.
    shared_ptr<string> SQLType_ {};
    // The name of the database instance.
    shared_ptr<string> searchName_ {};
    // The beginning of the time range to query. The value of this parameter must be a timestamp that follows the UNIX time format.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
