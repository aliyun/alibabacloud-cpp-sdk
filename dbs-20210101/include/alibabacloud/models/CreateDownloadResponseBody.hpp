// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOWNLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOWNLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class CreateDownloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDownloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDownloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDownloadResponseBody() = default ;
    CreateDownloadResponseBody(const CreateDownloadResponseBody &) = default ;
    CreateDownloadResponseBody(CreateDownloadResponseBody &&) = default ;
    CreateDownloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDownloadResponseBody() = default ;
    CreateDownloadResponseBody& operator=(const CreateDownloadResponseBody &) = default ;
    CreateDownloadResponseBody& operator=(CreateDownloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupSetTime, backupSetTime_);
        DARABONBA_PTR_TO_JSON(BakSetId, bakSetId_);
        DARABONBA_PTR_TO_JSON(DbList, dbList_);
        DARABONBA_PTR_TO_JSON(DownloadStatus, downloadStatus_);
        DARABONBA_PTR_TO_JSON(ExportDataSize, exportDataSize_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(ImportDataSize, importDataSize_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupSetTime, backupSetTime_);
        DARABONBA_PTR_FROM_JSON(BakSetId, bakSetId_);
        DARABONBA_PTR_FROM_JSON(DbList, dbList_);
        DARABONBA_PTR_FROM_JSON(DownloadStatus, downloadStatus_);
        DARABONBA_PTR_FROM_JSON(ExportDataSize, exportDataSize_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(ImportDataSize, importDataSize_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupSetTime_ == nullptr
        && this->bakSetId_ == nullptr && this->dbList_ == nullptr && this->downloadStatus_ == nullptr && this->exportDataSize_ == nullptr && this->format_ == nullptr
        && this->gmtCreate_ == nullptr && this->importDataSize_ == nullptr && this->progress_ == nullptr && this->regionCode_ == nullptr && this->targetPath_ == nullptr
        && this->targetType_ == nullptr && this->taskId_ == nullptr; };
      // backupSetTime Field Functions 
      bool hasBackupSetTime() const { return this->backupSetTime_ != nullptr;};
      void deleteBackupSetTime() { this->backupSetTime_ = nullptr;};
      inline int64_t getBackupSetTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetTime_, 0L) };
      inline Data& setBackupSetTime(int64_t backupSetTime) { DARABONBA_PTR_SET_VALUE(backupSetTime_, backupSetTime) };


      // bakSetId Field Functions 
      bool hasBakSetId() const { return this->bakSetId_ != nullptr;};
      void deleteBakSetId() { this->bakSetId_ = nullptr;};
      inline string getBakSetId() const { DARABONBA_PTR_GET_DEFAULT(bakSetId_, "") };
      inline Data& setBakSetId(string bakSetId) { DARABONBA_PTR_SET_VALUE(bakSetId_, bakSetId) };


      // dbList Field Functions 
      bool hasDbList() const { return this->dbList_ != nullptr;};
      void deleteDbList() { this->dbList_ = nullptr;};
      inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
      inline Data& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


      // downloadStatus Field Functions 
      bool hasDownloadStatus() const { return this->downloadStatus_ != nullptr;};
      void deleteDownloadStatus() { this->downloadStatus_ = nullptr;};
      inline string getDownloadStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadStatus_, "") };
      inline Data& setDownloadStatus(string downloadStatus) { DARABONBA_PTR_SET_VALUE(downloadStatus_, downloadStatus) };


      // exportDataSize Field Functions 
      bool hasExportDataSize() const { return this->exportDataSize_ != nullptr;};
      void deleteExportDataSize() { this->exportDataSize_ = nullptr;};
      inline int64_t getExportDataSize() const { DARABONBA_PTR_GET_DEFAULT(exportDataSize_, 0L) };
      inline Data& setExportDataSize(int64_t exportDataSize) { DARABONBA_PTR_SET_VALUE(exportDataSize_, exportDataSize) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Data& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // importDataSize Field Functions 
      bool hasImportDataSize() const { return this->importDataSize_ != nullptr;};
      void deleteImportDataSize() { this->importDataSize_ = nullptr;};
      inline int64_t getImportDataSize() const { DARABONBA_PTR_GET_DEFAULT(importDataSize_, 0L) };
      inline Data& setImportDataSize(int64_t importDataSize) { DARABONBA_PTR_SET_VALUE(importDataSize_, importDataSize) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Data& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline Data& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // targetPath Field Functions 
      bool hasTargetPath() const { return this->targetPath_ != nullptr;};
      void deleteTargetPath() { this->targetPath_ = nullptr;};
      inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
      inline Data& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The point in time of the backup set if the task is used to download a backup set at a specific point in time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> backupSetTime_ {};
      // The ID of the full backup set.
      shared_ptr<string> bakSetId_ {};
      // The database and table information that is returned if databases and tables are filtered by the download task.
      shared_ptr<string> dbList_ {};
      // The state of the download task. Valid values:
      // 
      // *   initializing: The download task was being initialized.
      // *   queuing: The download task was queuing.
      // *   running: The download task was running.
      // *   failed: The download task failed.
      // *   finished: The download task was complete.
      // *   expired: The download task expired.
      // 
      // > If the TargetType parameter is set to URL, the download task expires in three days after the task is complete.
      shared_ptr<string> downloadStatus_ {};
      // The size of the downloaded data. Unit: bytes.
      shared_ptr<int64_t> exportDataSize_ {};
      // The format to which the downloaded data is converted.
      shared_ptr<string> format_ {};
      // The time when the download task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> gmtCreate_ {};
      // The size of the processed data. Unit: bytes.
      shared_ptr<int64_t> importDataSize_ {};
      // The number of tables that have been downloaded and the total number of tables to be downloaded.
      // 
      // > If the task is in the preparation stage, 0/0 is returned.
      shared_ptr<string> progress_ {};
      // The ID of the region in which the instance resides.
      shared_ptr<string> regionCode_ {};
      // The destination path to which the backup set is downloaded.
      // 
      // >  This parameter is returned if the value of **TargetType is OSS**.
      shared_ptr<string> targetPath_ {};
      // The type of the destination to which the backup set is downloaded.
      shared_ptr<string> targetType_ {};
      // The ID of the download task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDownloadResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDownloadResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateDownloadResponseBody::Data) };
    inline CreateDownloadResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateDownloadResponseBody::Data) };
    inline CreateDownloadResponseBody& setData(const CreateDownloadResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDownloadResponseBody& setData(CreateDownloadResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline CreateDownloadResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline CreateDownloadResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDownloadResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDownloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateDownloadResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The information about the download task.
    shared_ptr<CreateDownloadResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
