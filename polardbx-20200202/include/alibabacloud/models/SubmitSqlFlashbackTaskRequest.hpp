// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSQLFLASHBACKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SubmitSqlFlashbackTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_TO_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SqlPk, sqlPk_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSqlFlashbackTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PolardbxInstanceId, polardbxInstanceId_);
      DARABONBA_PTR_FROM_JSON(RecallRestoreType, recallRestoreType_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->endTime_ == nullptr && this->polardbxInstanceId_ == nullptr && this->recallRestoreType_ == nullptr && this->recallType_ == nullptr && this->regionId_ == nullptr
        && this->sqlPk_ == nullptr && this->sqlType_ == nullptr && this->startTime_ == nullptr && this->tableName_ == nullptr && this->traceId_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SubmitSqlFlashbackTaskRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SubmitSqlFlashbackTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // polardbxInstanceId Field Functions 
    bool hasPolardbxInstanceId() const { return this->polardbxInstanceId_ != nullptr;};
    void deletePolardbxInstanceId() { this->polardbxInstanceId_ = nullptr;};
    inline string getPolardbxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polardbxInstanceId_, "") };
    inline SubmitSqlFlashbackTaskRequest& setPolardbxInstanceId(string polardbxInstanceId) { DARABONBA_PTR_SET_VALUE(polardbxInstanceId_, polardbxInstanceId) };


    // recallRestoreType Field Functions 
    bool hasRecallRestoreType() const { return this->recallRestoreType_ != nullptr;};
    void deleteRecallRestoreType() { this->recallRestoreType_ = nullptr;};
    inline string getRecallRestoreType() const { DARABONBA_PTR_GET_DEFAULT(recallRestoreType_, "") };
    inline SubmitSqlFlashbackTaskRequest& setRecallRestoreType(string recallRestoreType) { DARABONBA_PTR_SET_VALUE(recallRestoreType_, recallRestoreType) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
    inline SubmitSqlFlashbackTaskRequest& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SubmitSqlFlashbackTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sqlPk Field Functions 
    bool hasSqlPk() const { return this->sqlPk_ != nullptr;};
    void deleteSqlPk() { this->sqlPk_ = nullptr;};
    inline string getSqlPk() const { DARABONBA_PTR_GET_DEFAULT(sqlPk_, "") };
    inline SubmitSqlFlashbackTaskRequest& setSqlPk(string sqlPk) { DARABONBA_PTR_SET_VALUE(sqlPk_, sqlPk) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline SubmitSqlFlashbackTaskRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SubmitSqlFlashbackTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SubmitSqlFlashbackTaskRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline SubmitSqlFlashbackTaskRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> polardbxInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> recallRestoreType_ {};
    shared_ptr<string> recallType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sqlPk_ {};
    shared_ptr<string> sqlType_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> tableName_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
