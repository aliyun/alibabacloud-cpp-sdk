// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODYDATASQLFLASHBACKTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODYDATASQLFLASHBACKTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& obj) { 
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
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks() = default ;
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks(const DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks &) = default ;
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks(DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks &&) = default ;
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks() = default ;
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& operator=(const DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks &) = default ;
    DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& operator=(DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->downloadUrl_ == nullptr && return this->expireTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->instId_ == nullptr && return this->recallProgress_ == nullptr && return this->recallRestoreType_ == nullptr && return this->recallStatus_ == nullptr && return this->recallType_ == nullptr
        && return this->searchEndTime_ == nullptr && return this->searchStartTime_ == nullptr && return this->sqlCounter_ == nullptr && return this->sqlPk_ == nullptr && return this->sqlType_ == nullptr
        && return this->tableName_ == nullptr && return this->traceId_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instId Field Functions 
    bool hasInstId() const { return this->instId_ != nullptr;};
    void deleteInstId() { this->instId_ = nullptr;};
    inline string instId() const { DARABONBA_PTR_GET_DEFAULT(instId_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setInstId(string instId) { DARABONBA_PTR_SET_VALUE(instId_, instId) };


    // recallProgress Field Functions 
    bool hasRecallProgress() const { return this->recallProgress_ != nullptr;};
    void deleteRecallProgress() { this->recallProgress_ = nullptr;};
    inline string recallProgress() const { DARABONBA_PTR_GET_DEFAULT(recallProgress_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setRecallProgress(string recallProgress) { DARABONBA_PTR_SET_VALUE(recallProgress_, recallProgress) };


    // recallRestoreType Field Functions 
    bool hasRecallRestoreType() const { return this->recallRestoreType_ != nullptr;};
    void deleteRecallRestoreType() { this->recallRestoreType_ = nullptr;};
    inline string recallRestoreType() const { DARABONBA_PTR_GET_DEFAULT(recallRestoreType_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setRecallRestoreType(string recallRestoreType) { DARABONBA_PTR_SET_VALUE(recallRestoreType_, recallRestoreType) };


    // recallStatus Field Functions 
    bool hasRecallStatus() const { return this->recallStatus_ != nullptr;};
    void deleteRecallStatus() { this->recallStatus_ = nullptr;};
    inline string recallStatus() const { DARABONBA_PTR_GET_DEFAULT(recallStatus_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setRecallStatus(string recallStatus) { DARABONBA_PTR_SET_VALUE(recallStatus_, recallStatus) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline string recallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // searchEndTime Field Functions 
    bool hasSearchEndTime() const { return this->searchEndTime_ != nullptr;};
    void deleteSearchEndTime() { this->searchEndTime_ = nullptr;};
    inline string searchEndTime() const { DARABONBA_PTR_GET_DEFAULT(searchEndTime_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setSearchEndTime(string searchEndTime) { DARABONBA_PTR_SET_VALUE(searchEndTime_, searchEndTime) };


    // searchStartTime Field Functions 
    bool hasSearchStartTime() const { return this->searchStartTime_ != nullptr;};
    void deleteSearchStartTime() { this->searchStartTime_ = nullptr;};
    inline string searchStartTime() const { DARABONBA_PTR_GET_DEFAULT(searchStartTime_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setSearchStartTime(string searchStartTime) { DARABONBA_PTR_SET_VALUE(searchStartTime_, searchStartTime) };


    // sqlCounter Field Functions 
    bool hasSqlCounter() const { return this->sqlCounter_ != nullptr;};
    void deleteSqlCounter() { this->sqlCounter_ = nullptr;};
    inline string sqlCounter() const { DARABONBA_PTR_GET_DEFAULT(sqlCounter_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setSqlCounter(string sqlCounter) { DARABONBA_PTR_SET_VALUE(sqlCounter_, sqlCounter) };


    // sqlPk Field Functions 
    bool hasSqlPk() const { return this->sqlPk_ != nullptr;};
    void deleteSqlPk() { this->sqlPk_ = nullptr;};
    inline string sqlPk() const { DARABONBA_PTR_GET_DEFAULT(sqlPk_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setSqlPk(string sqlPk) { DARABONBA_PTR_SET_VALUE(sqlPk_, sqlPk) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSqlFlashbackTaskListResponseBodyDataSqlFlashbackTasks& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instId_ = nullptr;
    std::shared_ptr<string> recallProgress_ = nullptr;
    std::shared_ptr<string> recallRestoreType_ = nullptr;
    std::shared_ptr<string> recallStatus_ = nullptr;
    std::shared_ptr<string> recallType_ = nullptr;
    std::shared_ptr<string> searchEndTime_ = nullptr;
    std::shared_ptr<string> searchStartTime_ = nullptr;
    std::shared_ptr<string> sqlCounter_ = nullptr;
    std::shared_ptr<string> sqlPk_ = nullptr;
    std::shared_ptr<string> sqlType_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
