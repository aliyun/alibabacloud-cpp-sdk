// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListResultExportJobHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResultExportJobHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResultExportJobHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResultExportJobHistoryResponseBody() = default ;
    ListResultExportJobHistoryResponseBody(const ListResultExportJobHistoryResponseBody &) = default ;
    ListResultExportJobHistoryResponseBody(ListResultExportJobHistoryResponseBody &&) = default ;
    ListResultExportJobHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResultExportJobHistoryResponseBody() = default ;
    ListResultExportJobHistoryResponseBody& operator=(const ListResultExportJobHistoryResponseBody &) = default ;
    ListResultExportJobHistoryResponseBody& operator=(ListResultExportJobHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createTime_ == nullptr && this->DBClusterId_ == nullptr && this->databaseUser_ == nullptr && this->endTime_ == nullptr && this->engine_ == nullptr
        && this->exportJobId_ == nullptr && this->exportPath_ == nullptr && this->exportRows_ == nullptr && this->exportType_ == nullptr && this->isExpired_ == nullptr
        && this->message_ == nullptr && this->processId_ == nullptr && this->progress_ == nullptr && this->resourceGroup_ == nullptr && this->schema_ == nullptr
        && this->sql_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->timeCost_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Items& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // databaseUser Field Functions 
      bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
      void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
      inline string getDatabaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
      inline Items& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // exportJobId Field Functions 
      bool hasExportJobId() const { return this->exportJobId_ != nullptr;};
      void deleteExportJobId() { this->exportJobId_ = nullptr;};
      inline string getExportJobId() const { DARABONBA_PTR_GET_DEFAULT(exportJobId_, "") };
      inline Items& setExportJobId(string exportJobId) { DARABONBA_PTR_SET_VALUE(exportJobId_, exportJobId) };


      // exportPath Field Functions 
      bool hasExportPath() const { return this->exportPath_ != nullptr;};
      void deleteExportPath() { this->exportPath_ = nullptr;};
      inline string getExportPath() const { DARABONBA_PTR_GET_DEFAULT(exportPath_, "") };
      inline Items& setExportPath(string exportPath) { DARABONBA_PTR_SET_VALUE(exportPath_, exportPath) };


      // exportRows Field Functions 
      bool hasExportRows() const { return this->exportRows_ != nullptr;};
      void deleteExportRows() { this->exportRows_ = nullptr;};
      inline string getExportRows() const { DARABONBA_PTR_GET_DEFAULT(exportRows_, "") };
      inline Items& setExportRows(string exportRows) { DARABONBA_PTR_SET_VALUE(exportRows_, exportRows) };


      // exportType Field Functions 
      bool hasExportType() const { return this->exportType_ != nullptr;};
      void deleteExportType() { this->exportType_ = nullptr;};
      inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
      inline Items& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


      // isExpired Field Functions 
      bool hasIsExpired() const { return this->isExpired_ != nullptr;};
      void deleteIsExpired() { this->isExpired_ = nullptr;};
      inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
      inline Items& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Items& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Items& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Items& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline Items& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Items& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Items& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeCost Field Functions 
      bool hasTimeCost() const { return this->timeCost_ != nullptr;};
      void deleteTimeCost() { this->timeCost_ = nullptr;};
      inline int64_t getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
      inline Items& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


    protected:
      // The ID of the Resource Access Management (RAM) user.
      shared_ptr<string> aliUid_ {};
      // The time when the result set export task was created. Specify the time in the <i>yyyy-mm-ddThh:mm:ssZ</i> format. The time must be in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (3.0) cluster.
      shared_ptr<string> DBClusterId_ {};
      // The name of the database account associated with the Resource Access Management (RAM) user.
      shared_ptr<string> databaseUser_ {};
      // The end time of the query. Specify the time in the <i>yyyy-MM-ddTHH:mm:ssZ</i> format. The time must be in UTC.
      // > The end time must be later than the start time.
      shared_ptr<string> endTime_ {};
      // The engine used to execute the task. Only XIHE is supported.
      shared_ptr<string> engine_ {};
      // The unique identifier of the result set export task.
      shared_ptr<string> exportJobId_ {};
      // The complete address of the result set.
      shared_ptr<string> exportPath_ {};
      // The number of exported rows. This parameter is returned only when the operation call is successful.
      shared_ptr<string> exportRows_ {};
      // The export type.
      shared_ptr<string> exportType_ {};
      // Indicates whether the task has expired. Valid values:
      // 
      // - **false**: The task has not expired.
      // - **true**: The task has expired.
      shared_ptr<bool> isExpired_ {};
      // The error message of the SQL execution for the result set export. This message is returned only when the task fails.
      shared_ptr<string> message_ {};
      // The SQL query ID returned for diagnostics.
      // > You can call the [DescribeDiagnosisSQLInfo](https://help.aliyun.com/document_detail/612495.html) operation to diagnose the query.
      shared_ptr<string> processId_ {};
      // The export progress. Unit: percentage (%). Valid values: 0 to 100.
      shared_ptr<string> progress_ {};
      // The resource group in which the task is executed.
      shared_ptr<string> resourceGroup_ {};
      // The name of the database.
      shared_ptr<string> schema_ {};
      // The details of the SQL statement used in the result set export task.
      shared_ptr<string> sql_ {};
      // The start time of the task. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
      shared_ptr<string> startTime_ {};
      // The execution status of the export task. Valid values:
      // 1. **SUBMITTED**: The task is submitted.
      // 2. **RUNNING**: The task is running.
      // 3. **SUCCEEDED**: The task succeeded.
      // 4. **FAILED**: The task failed.
      shared_ptr<string> status_ {};
      // The time consumed for data export, in milliseconds.
      // 
      // > The time is calculated from the start of the data export task to the end of the export.
      shared_ptr<int64_t> timeCost_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListResultExportJobHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListResultExportJobHistoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListResultExportJobHistoryResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListResultExportJobHistoryResponseBody::Items>) };
    inline vector<ListResultExportJobHistoryResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListResultExportJobHistoryResponseBody::Items>) };
    inline ListResultExportJobHistoryResponseBody& setItems(const vector<ListResultExportJobHistoryResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListResultExportJobHistoryResponseBody& setItems(vector<ListResultExportJobHistoryResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListResultExportJobHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResultExportJobHistoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResultExportJobHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResultExportJobHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResultExportJobHistoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListResultExportJobHistoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The operation status code or POP error code.
    shared_ptr<string> code_ {};
    // The HTTP status code returned. A status code of 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list details.
    shared_ptr<vector<ListResultExportJobHistoryResponseBody::Items>> items_ {};
    // The additional information about the call result. Valid values:
    // - **Ok**: The request is normal.                                
    // - Specific error code: An exception occurred.
    shared_ptr<string> message_ {};
    // The page number, which is the same as the value passed in the request.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
