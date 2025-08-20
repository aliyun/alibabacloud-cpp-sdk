// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListResultExportJobHistoryResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResultExportJobHistoryResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExportJobId, exportJobId_);
      DARABONBA_PTR_TO_JSON(ExportPath, exportPath_);
      DARABONBA_PTR_TO_JSON(ExportRows, exportRows_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeCost, timeCost_);
    };
    friend void from_json(const Darabonba::Json& j, ListResultExportJobHistoryResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExportJobId, exportJobId_);
      DARABONBA_PTR_FROM_JSON(ExportPath, exportPath_);
      DARABONBA_PTR_FROM_JSON(ExportRows, exportRows_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeCost, timeCost_);
    };
    ListResultExportJobHistoryResponseBodyItems() = default ;
    ListResultExportJobHistoryResponseBodyItems(const ListResultExportJobHistoryResponseBodyItems &) = default ;
    ListResultExportJobHistoryResponseBodyItems(ListResultExportJobHistoryResponseBodyItems &&) = default ;
    ListResultExportJobHistoryResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResultExportJobHistoryResponseBodyItems() = default ;
    ListResultExportJobHistoryResponseBodyItems& operator=(const ListResultExportJobHistoryResponseBodyItems &) = default ;
    ListResultExportJobHistoryResponseBodyItems& operator=(ListResultExportJobHistoryResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->createTime_ != nullptr && this->DBClusterId_ != nullptr && this->databaseUser_ != nullptr && this->endTime_ != nullptr && this->engine_ != nullptr
        && this->exportJobId_ != nullptr && this->exportPath_ != nullptr && this->exportRows_ != nullptr && this->exportType_ != nullptr && this->isExpired_ != nullptr
        && this->message_ != nullptr && this->processId_ != nullptr && this->progress_ != nullptr && this->resourceGroup_ != nullptr && this->schema_ != nullptr
        && this->sql_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->timeCost_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // exportJobId Field Functions 
    bool hasExportJobId() const { return this->exportJobId_ != nullptr;};
    void deleteExportJobId() { this->exportJobId_ = nullptr;};
    inline string exportJobId() const { DARABONBA_PTR_GET_DEFAULT(exportJobId_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setExportJobId(string exportJobId) { DARABONBA_PTR_SET_VALUE(exportJobId_, exportJobId) };


    // exportPath Field Functions 
    bool hasExportPath() const { return this->exportPath_ != nullptr;};
    void deleteExportPath() { this->exportPath_ = nullptr;};
    inline string exportPath() const { DARABONBA_PTR_GET_DEFAULT(exportPath_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setExportPath(string exportPath) { DARABONBA_PTR_SET_VALUE(exportPath_, exportPath) };


    // exportRows Field Functions 
    bool hasExportRows() const { return this->exportRows_ != nullptr;};
    void deleteExportRows() { this->exportRows_ = nullptr;};
    inline string exportRows() const { DARABONBA_PTR_GET_DEFAULT(exportRows_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setExportRows(string exportRows) { DARABONBA_PTR_SET_VALUE(exportRows_, exportRows) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // isExpired Field Functions 
    bool hasIsExpired() const { return this->isExpired_ != nullptr;};
    void deleteIsExpired() { this->isExpired_ = nullptr;};
    inline bool isExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
    inline ListResultExportJobHistoryResponseBodyItems& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResultExportJobHistoryResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeCost Field Functions 
    bool hasTimeCost() const { return this->timeCost_ != nullptr;};
    void deleteTimeCost() { this->timeCost_ = nullptr;};
    inline int64_t timeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
    inline ListResultExportJobHistoryResponseBodyItems& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


  protected:
    // The RAM user ID.
    std::shared_ptr<string> aliUid_ = nullptr;
    // The time when the result set export job was created. The time follows the ISO 8601 standard in the *yyyy-mm-ddThh:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database account that is associated with the RAM user.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The end time of the result set export job. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    // 
    // >  The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The engine that is used to execute the result set export job. Only XIHE is returned.
    std::shared_ptr<string> engine_ = nullptr;
    // The unique identifier of the result set export job.
    std::shared_ptr<string> exportJobId_ = nullptr;
    // The complete URL of the path to store the exported result set.
    std::shared_ptr<string> exportPath_ = nullptr;
    // The number of exported rows. This parameter is returned only when the request was successful.
    std::shared_ptr<string> exportRows_ = nullptr;
    // The type of the result set export job.
    std::shared_ptr<string> exportType_ = nullptr;
    // Indicates whether the result set export job has expired. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isExpired_ = nullptr;
    // The returned message. This parameter is returned only when the request failed.
    std::shared_ptr<string> message_ = nullptr;
    // The query ID that can be used for diagnostics.
    // 
    // >  You can call the [DescribeDiagnosisSQLInfo](https://help.aliyun.com/document_detail/612337.html) operation to query the execution information about a query.
    std::shared_ptr<string> processId_ = nullptr;
    // The progress of the result set export job. Unit: %. Valid values: 0 to 100.
    std::shared_ptr<string> progress_ = nullptr;
    // The name of the resource group that runs the result set export job.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schema_ = nullptr;
    // The SQL statement that is used in the result set export job.
    std::shared_ptr<string> sql_ = nullptr;
    // The start time of the result set export job. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The execution status of the result set export job. Valid values:
    // 
    // 1.  **SUBMITTED**
    // 2.  **RUNNING**
    // 3.  **SUCCEEDED**
    // 4.  **FAILED**
    std::shared_ptr<string> status_ = nullptr;
    // The amount of time consumed to export execution records. Unit: milliseconds.
    // 
    // >  The value is the duration between the time when the result set export job starts and the time when the result set export job ends.
    std::shared_ptr<int64_t> timeCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
