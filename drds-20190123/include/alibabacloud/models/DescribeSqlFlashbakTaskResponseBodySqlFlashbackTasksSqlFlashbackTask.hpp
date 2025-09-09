// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODYSQLFLASHBACKTASKSSQLFLASHBACKTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBAKTASKRESPONSEBODYSQLFLASHBACKTASKSSQLFLASHBACKTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstId, instId_);
      DARABONBA_PTR_TO_JSON(RecallProgress, recallProgress_);
      DARABONBA_PTR_TO_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_TO_JSON(RecallStatus, recallStatus_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(SearchEndTime, searchEndTime_);
      DARABONBA_PTR_TO_JSON(SearchStartTime, searchStartTime_);
      DARABONBA_PTR_TO_JSON(SqlCounter, sqlCounter_);
      DARABONBA_PTR_TO_JSON(SqlPk, sqlPk_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstId, instId_);
      DARABONBA_PTR_FROM_JSON(RecallProgress, recallProgress_);
      DARABONBA_PTR_FROM_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_FROM_JSON(RecallStatus, recallStatus_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(SearchEndTime, searchEndTime_);
      DARABONBA_PTR_FROM_JSON(SearchStartTime, searchStartTime_);
      DARABONBA_PTR_FROM_JSON(SqlCounter, sqlCounter_);
      DARABONBA_PTR_FROM_JSON(SqlPk, sqlPk_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask() = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask(const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask &) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask(DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask &&) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask() = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& operator=(const DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask &) = default ;
    DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& operator=(DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->downloadUrl_ != nullptr && this->expireTime_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->instId_ != nullptr && this->recallProgress_ != nullptr && this->recallRestoreType_ != nullptr && this->recallStatus_ != nullptr && this->recallType_ != nullptr
        && this->searchEndTime_ != nullptr && this->searchStartTime_ != nullptr && this->sqlCounter_ != nullptr && this->sqlPk_ != nullptr && this->sqlType_ != nullptr
        && this->tableName_ != nullptr && this->traceId_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instId Field Functions 
    bool hasInstId() const { return this->instId_ != nullptr;};
    void deleteInstId() { this->instId_ = nullptr;};
    inline string instId() const { DARABONBA_PTR_GET_DEFAULT(instId_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setInstId(string instId) { DARABONBA_PTR_SET_VALUE(instId_, instId) };


    // recallProgress Field Functions 
    bool hasRecallProgress() const { return this->recallProgress_ != nullptr;};
    void deleteRecallProgress() { this->recallProgress_ = nullptr;};
    inline int32_t recallProgress() const { DARABONBA_PTR_GET_DEFAULT(recallProgress_, 0) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setRecallProgress(int32_t recallProgress) { DARABONBA_PTR_SET_VALUE(recallProgress_, recallProgress) };


    // recallRestoreType Field Functions 
    bool hasRecallRestoreType() const { return this->recallRestoreType_ != nullptr;};
    void deleteRecallRestoreType() { this->recallRestoreType_ = nullptr;};
    inline int32_t recallRestoreType() const { DARABONBA_PTR_GET_DEFAULT(recallRestoreType_, 0) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setRecallRestoreType(int32_t recallRestoreType) { DARABONBA_PTR_SET_VALUE(recallRestoreType_, recallRestoreType) };


    // recallStatus Field Functions 
    bool hasRecallStatus() const { return this->recallStatus_ != nullptr;};
    void deleteRecallStatus() { this->recallStatus_ = nullptr;};
    inline int32_t recallStatus() const { DARABONBA_PTR_GET_DEFAULT(recallStatus_, 0) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setRecallStatus(int32_t recallStatus) { DARABONBA_PTR_SET_VALUE(recallStatus_, recallStatus) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline int32_t recallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, 0) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setRecallType(int32_t recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // searchEndTime Field Functions 
    bool hasSearchEndTime() const { return this->searchEndTime_ != nullptr;};
    void deleteSearchEndTime() { this->searchEndTime_ = nullptr;};
    inline int64_t searchEndTime() const { DARABONBA_PTR_GET_DEFAULT(searchEndTime_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setSearchEndTime(int64_t searchEndTime) { DARABONBA_PTR_SET_VALUE(searchEndTime_, searchEndTime) };


    // searchStartTime Field Functions 
    bool hasSearchStartTime() const { return this->searchStartTime_ != nullptr;};
    void deleteSearchStartTime() { this->searchStartTime_ = nullptr;};
    inline int64_t searchStartTime() const { DARABONBA_PTR_GET_DEFAULT(searchStartTime_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setSearchStartTime(int64_t searchStartTime) { DARABONBA_PTR_SET_VALUE(searchStartTime_, searchStartTime) };


    // sqlCounter Field Functions 
    bool hasSqlCounter() const { return this->sqlCounter_ != nullptr;};
    void deleteSqlCounter() { this->sqlCounter_ = nullptr;};
    inline int64_t sqlCounter() const { DARABONBA_PTR_GET_DEFAULT(sqlCounter_, 0L) };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setSqlCounter(int64_t sqlCounter) { DARABONBA_PTR_SET_VALUE(sqlCounter_, sqlCounter) };


    // sqlPk Field Functions 
    bool hasSqlPk() const { return this->sqlPk_ != nullptr;};
    void deleteSqlPk() { this->sqlPk_ = nullptr;};
    inline string sqlPk() const { DARABONBA_PTR_GET_DEFAULT(sqlPk_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setSqlPk(string sqlPk) { DARABONBA_PTR_SET_VALUE(sqlPk_, sqlPk) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSqlFlashbakTaskResponseBodySqlFlashbackTasksSqlFlashbackTask& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Indicates the name of the database on which a flashback task is performed.
    std::shared_ptr<string> dbName_ = nullptr;
    // Indicates the download URL.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // Indicates the time when the download URL expires.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // Indicates the point in time when the instance was created.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Indicates the point in time when the flashback task is performed.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Indicates the ID of the primary key that corresponds to a table used in the flashback task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates the ID of the instance.
    std::shared_ptr<string> instId_ = nullptr;
    // Indicates the progress of the reverse call.
    std::shared_ptr<int32_t> recallProgress_ = nullptr;
    // Indicates the type of the flashback task. Valid values:
    // 
    // *   **1**: image restoration
    // *   **2**: reverse restoration
    std::shared_ptr<int32_t> recallRestoreType_ = nullptr;
    // Indicates the status of the data recall task.
    std::shared_ptr<int32_t> recallStatus_ = nullptr;
    // Indicates the type of the reverse call. Valid values:
    // 
    // *   **0**: exact search
    // *   **1**: fuzzy search
    std::shared_ptr<int32_t> recallType_ = nullptr;
    // Indicates the start time of the reverse call.
    std::shared_ptr<int64_t> searchEndTime_ = nullptr;
    // Indicates the end time of the reverse call.
    std::shared_ptr<int64_t> searchStartTime_ = nullptr;
    // Indicates the number of data rows that are flashed back.
    std::shared_ptr<int64_t> sqlCounter_ = nullptr;
    // Indicates the primary key specified in the SQL statements.
    std::shared_ptr<string> sqlPk_ = nullptr;
    // Indicates the types of the SQL statements.
    std::shared_ptr<string> sqlType_ = nullptr;
    // Indicates the name of the table that contains the data that are flashed back.
    std::shared_ptr<string> tableName_ = nullptr;
    // Indicates the ID of the trace of the SQL query.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
