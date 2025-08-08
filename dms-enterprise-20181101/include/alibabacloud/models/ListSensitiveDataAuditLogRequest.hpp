// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveDataAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveDataAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveDataAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSensitiveDataAuditLogRequest() = default ;
    ListSensitiveDataAuditLogRequest(const ListSensitiveDataAuditLogRequest &) = default ;
    ListSensitiveDataAuditLogRequest(ListSensitiveDataAuditLogRequest &&) = default ;
    ListSensitiveDataAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveDataAuditLogRequest() = default ;
    ListSensitiveDataAuditLogRequest& operator=(const ListSensitiveDataAuditLogRequest &) = default ;
    ListSensitiveDataAuditLogRequest& operator=(ListSensitiveDataAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dbName_ != nullptr && this->endTime_ != nullptr && this->moduleName_ != nullptr && this->opUserName_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveDataAuditLogRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListSensitiveDataAuditLogRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListSensitiveDataAuditLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListSensitiveDataAuditLogRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // opUserName Field Functions 
    bool hasOpUserName() const { return this->opUserName_ != nullptr;};
    void deleteOpUserName() { this->opUserName_ = nullptr;};
    inline string opUserName() const { DARABONBA_PTR_GET_DEFAULT(opUserName_, "") };
    inline ListSensitiveDataAuditLogRequest& setOpUserName(string opUserName) { DARABONBA_PTR_SET_VALUE(opUserName_, opUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSensitiveDataAuditLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSensitiveDataAuditLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListSensitiveDataAuditLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveDataAuditLogRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSensitiveDataAuditLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the column that contains sensitive data.
    std::shared_ptr<string> columnName_ = nullptr;
    // The name of the database that stores the sensitive data.
    std::shared_ptr<string> dbName_ = nullptr;
    // The end of the time range for which you want to query the audit logs for sensitive information. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The function module whose audit logs you want to query for sensitive data. If you do not specify this parameter, all audit logs are queried. Valid values:
    // 
    // *   **SQL_CONSOLE**: data query
    // *   **SQL_CONSOLE_EXPORT**: query result export
    // *   **DATA_CHANGE**: data change
    // *   **DATA_EXPORT**: data export
    std::shared_ptr<string> moduleName_ = nullptr;
    // The username of the requester.
    std::shared_ptr<string> opUserName_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Example: 100
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range for which you want to query the audit logs for sensitive information. Specify the time in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the table that stores the sensitive data.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
