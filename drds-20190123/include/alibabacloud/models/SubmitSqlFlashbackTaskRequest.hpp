// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitSqlFlashbackTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(SqlPk, sqlPk_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(SqlPk, sqlPk_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    SubmitSqlFlashbackTaskRequest() = default ;
    SubmitSqlFlashbackTaskRequest(const SubmitSqlFlashbackTaskRequest &) = default ;
    SubmitSqlFlashbackTaskRequest(SubmitSqlFlashbackTaskRequest &&) = default ;
    SubmitSqlFlashbackTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSqlFlashbackTaskRequest() = default ;
    SubmitSqlFlashbackTaskRequest& operator=(const SubmitSqlFlashbackTaskRequest &) = default ;
    SubmitSqlFlashbackTaskRequest& operator=(SubmitSqlFlashbackTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->endTime_ != nullptr && this->recallRestoreType_ != nullptr && this->recallType_ != nullptr && this->sqlPk_ != nullptr
        && this->sqlType_ != nullptr && this->startTime_ != nullptr && this->tableName_ != nullptr && this->traceId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitSqlFlashbackTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SubmitSqlFlashbackTaskRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SubmitSqlFlashbackTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recallRestoreType Field Functions 
    bool hasRecallRestoreType() const { return this->recallRestoreType_ != nullptr;};
    void deleteRecallRestoreType() { this->recallRestoreType_ = nullptr;};
    inline int32_t recallRestoreType() const { DARABONBA_PTR_GET_DEFAULT(recallRestoreType_, 0) };
    inline SubmitSqlFlashbackTaskRequest& setRecallRestoreType(int32_t recallRestoreType) { DARABONBA_PTR_SET_VALUE(recallRestoreType_, recallRestoreType) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline int32_t recallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, 0) };
    inline SubmitSqlFlashbackTaskRequest& setRecallType(int32_t recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // sqlPk Field Functions 
    bool hasSqlPk() const { return this->sqlPk_ != nullptr;};
    void deleteSqlPk() { this->sqlPk_ = nullptr;};
    inline string sqlPk() const { DARABONBA_PTR_GET_DEFAULT(sqlPk_, "") };
    inline SubmitSqlFlashbackTaskRequest& setSqlPk(string sqlPk) { DARABONBA_PTR_SET_VALUE(sqlPk_, sqlPk) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline SubmitSqlFlashbackTaskRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SubmitSqlFlashbackTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SubmitSqlFlashbackTaskRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline SubmitSqlFlashbackTaskRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The name of the DRDS database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of a DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The time when the SQL flashback task ends.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The restoration type. Valid values:
    // 
    // *   1: Image restoration
    // *   0: reverse recovery
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> recallRestoreType_ = nullptr;
    // Exact match or fuzzy match. Valid values:
    // 
    // *   0: the exact match.
    // *   1: the fuzzy match.
    std::shared_ptr<int32_t> recallType_ = nullptr;
    // The primary key of flashback SQL.
    std::shared_ptr<string> sqlPk_ = nullptr;
    // The type of the SQL statement. Valid values: INSERT, UPDATE, and DELETE. Separate multiple types with commas (,).
    std::shared_ptr<string> sqlType_ = nullptr;
    // The start time of the flashback SQL statement.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the table where the flashback SQL operation was performed.
    std::shared_ptr<string> tableName_ = nullptr;
    // The Trace ID of the flashback SQL.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
