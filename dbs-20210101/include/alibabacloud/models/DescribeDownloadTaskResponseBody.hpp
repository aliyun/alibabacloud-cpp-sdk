// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeDownloadTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDownloadTaskResponseBody() = default ;
    DescribeDownloadTaskResponseBody(const DescribeDownloadTaskResponseBody &) = default ;
    DescribeDownloadTaskResponseBody(DescribeDownloadTaskResponseBody &&) = default ;
    DescribeDownloadTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadTaskResponseBody() = default ;
    DescribeDownloadTaskResponseBody& operator=(const DescribeDownloadTaskResponseBody &) = default ;
    DescribeDownloadTaskResponseBody& operator=(DescribeDownloadTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(List, list_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(List, list_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class List : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const List& obj) { 
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
          friend void from_json(const Darabonba::Json& j, List& obj) { 
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
          List() = default ;
          List(const List &) = default ;
          List(List &&) = default ;
          List(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~List() = default ;
          List& operator=(const List &) = default ;
          List& operator=(List &&) = default ;
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
          inline string getBackupSetTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetTime_, "") };
          inline List& setBackupSetTime(string backupSetTime) { DARABONBA_PTR_SET_VALUE(backupSetTime_, backupSetTime) };


          // bakSetId Field Functions 
          bool hasBakSetId() const { return this->bakSetId_ != nullptr;};
          void deleteBakSetId() { this->bakSetId_ = nullptr;};
          inline string getBakSetId() const { DARABONBA_PTR_GET_DEFAULT(bakSetId_, "") };
          inline List& setBakSetId(string bakSetId) { DARABONBA_PTR_SET_VALUE(bakSetId_, bakSetId) };


          // dbList Field Functions 
          bool hasDbList() const { return this->dbList_ != nullptr;};
          void deleteDbList() { this->dbList_ = nullptr;};
          inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
          inline List& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


          // downloadStatus Field Functions 
          bool hasDownloadStatus() const { return this->downloadStatus_ != nullptr;};
          void deleteDownloadStatus() { this->downloadStatus_ = nullptr;};
          inline string getDownloadStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadStatus_, "") };
          inline List& setDownloadStatus(string downloadStatus) { DARABONBA_PTR_SET_VALUE(downloadStatus_, downloadStatus) };


          // exportDataSize Field Functions 
          bool hasExportDataSize() const { return this->exportDataSize_ != nullptr;};
          void deleteExportDataSize() { this->exportDataSize_ = nullptr;};
          inline string getExportDataSize() const { DARABONBA_PTR_GET_DEFAULT(exportDataSize_, "") };
          inline List& setExportDataSize(string exportDataSize) { DARABONBA_PTR_SET_VALUE(exportDataSize_, exportDataSize) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline List& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // importDataSize Field Functions 
          bool hasImportDataSize() const { return this->importDataSize_ != nullptr;};
          void deleteImportDataSize() { this->importDataSize_ = nullptr;};
          inline string getImportDataSize() const { DARABONBA_PTR_GET_DEFAULT(importDataSize_, "") };
          inline List& setImportDataSize(string importDataSize) { DARABONBA_PTR_SET_VALUE(importDataSize_, importDataSize) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline List& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // regionCode Field Functions 
          bool hasRegionCode() const { return this->regionCode_ != nullptr;};
          void deleteRegionCode() { this->regionCode_ = nullptr;};
          inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
          inline List& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


          // targetPath Field Functions 
          bool hasTargetPath() const { return this->targetPath_ != nullptr;};
          void deleteTargetPath() { this->targetPath_ = nullptr;};
          inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
          inline List& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


          // targetType Field Functions 
          bool hasTargetType() const { return this->targetType_ != nullptr;};
          void deleteTargetType() { this->targetType_ = nullptr;};
          inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
          inline List& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        protected:
          // The point in time of the backup set if the task is used to download a backup set at a specific point in time. The value is a timestamp of the LONG type. Unit: millisecond.
          shared_ptr<string> backupSetTime_ {};
          // The ID of the full backup set.
          shared_ptr<string> bakSetId_ {};
          // The details of the databases.
          shared_ptr<string> dbList_ {};
          // The status of the download task. Valid values:
          // 
          // *   **Initializing**: The download task is being initialized.
          // *   **queuing**: The download task is queuing.
          // *   **running**: The download task is running.
          // *   **failed**: The download task fails.
          // *   **finished**: The download task is complete.
          // *   **expired**: The download task expires.
          shared_ptr<string> downloadStatus_ {};
          // The amount of output data. Unit: bytes.
          shared_ptr<string> exportDataSize_ {};
          // The format to which the downloaded backup set is converted. Valid values:
          // 
          // *   **csv**
          // *   **SQL**
          // *   **Parquet**
          shared_ptr<string> format_ {};
          // The time when the download task was created. The value is a timestamp.
          shared_ptr<string> gmtCreate_ {};
          // The amount of data that is processed. Unit: bytes.
          shared_ptr<string> importDataSize_ {};
          // The number of tables that have been downloaded and the total number of tables to be downloaded.
          shared_ptr<string> progress_ {};
          // The ID of the region in which the instance resides.
          shared_ptr<string> regionCode_ {};
          // The destination path to which the data is downloaded if the value of **TargetType is OSS**.
          shared_ptr<string> targetPath_ {};
          // The type of the method in which the backup set is downloaded. Valid values:
          // 
          // *   **OSS**
          // *   **URL**
          shared_ptr<string> targetType_ {};
          // The download task ID.
          shared_ptr<string> taskId_ {};
        };

        virtual bool empty() const override { return this->list_ == nullptr; };
        // list Field Functions 
        bool hasList() const { return this->list_ != nullptr;};
        void deleteList() { this->list_ = nullptr;};
        inline const vector<Content::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Content::List>) };
        inline vector<Content::List> getList() { DARABONBA_PTR_GET(list_, vector<Content::List>) };
        inline Content& setList(const vector<Content::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
        inline Content& setList(vector<Content::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      protected:
        shared_ptr<vector<Content::List>> list_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->extra_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
      inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
      inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int64_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0L) };
      inline Data& setTotalElements(int64_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // The details of the task.
      shared_ptr<Data::Content> content_ {};
      // The extra description of the download tasks.
      shared_ptr<string> extra_ {};
      // The page number of the returned page. The value must be an integer that is greater than 0. Default value: 1.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of full backup tasks.
      shared_ptr<int64_t> totalElements_ {};
      // The total number of returned pages.
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDownloadTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDownloadTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDownloadTaskResponseBody::Data) };
    inline DescribeDownloadTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDownloadTaskResponseBody::Data) };
    inline DescribeDownloadTaskResponseBody& setData(const DescribeDownloadTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDownloadTaskResponseBody& setData(DescribeDownloadTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDownloadTaskResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDownloadTaskResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDownloadTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDownloadTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> code_ {};
    // The details of the tasks.
    shared_ptr<DescribeDownloadTaskResponseBody::Data> data_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the request fails.
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
