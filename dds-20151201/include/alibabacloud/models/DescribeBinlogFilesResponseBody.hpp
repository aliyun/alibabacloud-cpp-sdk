// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeBinlogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinlogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinlogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeBinlogFilesResponseBody() = default ;
    DescribeBinlogFilesResponseBody(const DescribeBinlogFilesResponseBody &) = default ;
    DescribeBinlogFilesResponseBody(DescribeBinlogFilesResponseBody &&) = default ;
    DescribeBinlogFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinlogFilesResponseBody() = default ;
    DescribeBinlogFilesResponseBody& operator=(const DescribeBinlogFilesResponseBody &) = default ;
    DescribeBinlogFilesResponseBody& operator=(DescribeBinlogFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(LogFile, logFile_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(LogFile, logFile_);
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
      class LogFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogFile& obj) { 
          DARABONBA_PTR_TO_JSON(BinLogId, binLogId_);
          DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_TO_JSON(DumpBucket, dumpBucket_);
          DARABONBA_PTR_TO_JSON(DumpDownloadURL, dumpDownloadURL_);
          DARABONBA_PTR_TO_JSON(DumpState, dumpState_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
          DARABONBA_PTR_TO_JSON(LogStatus, logStatus_);
          DARABONBA_PTR_TO_JSON(OSSEndpoint, OSSEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, LogFile& obj) { 
          DARABONBA_PTR_FROM_JSON(BinLogId, binLogId_);
          DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_FROM_JSON(DumpBucket, dumpBucket_);
          DARABONBA_PTR_FROM_JSON(DumpDownloadURL, dumpDownloadURL_);
          DARABONBA_PTR_FROM_JSON(DumpState, dumpState_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
          DARABONBA_PTR_FROM_JSON(LogStatus, logStatus_);
          DARABONBA_PTR_FROM_JSON(OSSEndpoint, OSSEndpoint_);
        };
        LogFile() = default ;
        LogFile(const LogFile &) = default ;
        LogFile(LogFile &&) = default ;
        LogFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogFile() = default ;
        LogFile& operator=(const LogFile &) = default ;
        LogFile& operator=(LogFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->binLogId_ == nullptr
        && this->downloadLink_ == nullptr && this->dumpBucket_ == nullptr && this->dumpDownloadURL_ == nullptr && this->dumpState_ == nullptr && this->fileId_ == nullptr
        && this->fileSize_ == nullptr && this->linkExpiredTime_ == nullptr && this->logBeginTime_ == nullptr && this->logEndTime_ == nullptr && this->logFileName_ == nullptr
        && this->logStatus_ == nullptr && this->OSSEndpoint_ == nullptr; };
        // binLogId Field Functions 
        bool hasBinLogId() const { return this->binLogId_ != nullptr;};
        void deleteBinLogId() { this->binLogId_ = nullptr;};
        inline string getBinLogId() const { DARABONBA_PTR_GET_DEFAULT(binLogId_, "") };
        inline LogFile& setBinLogId(string binLogId) { DARABONBA_PTR_SET_VALUE(binLogId_, binLogId) };


        // downloadLink Field Functions 
        bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
        void deleteDownloadLink() { this->downloadLink_ = nullptr;};
        inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
        inline LogFile& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


        // dumpBucket Field Functions 
        bool hasDumpBucket() const { return this->dumpBucket_ != nullptr;};
        void deleteDumpBucket() { this->dumpBucket_ = nullptr;};
        inline string getDumpBucket() const { DARABONBA_PTR_GET_DEFAULT(dumpBucket_, "") };
        inline LogFile& setDumpBucket(string dumpBucket) { DARABONBA_PTR_SET_VALUE(dumpBucket_, dumpBucket) };


        // dumpDownloadURL Field Functions 
        bool hasDumpDownloadURL() const { return this->dumpDownloadURL_ != nullptr;};
        void deleteDumpDownloadURL() { this->dumpDownloadURL_ = nullptr;};
        inline string getDumpDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(dumpDownloadURL_, "") };
        inline LogFile& setDumpDownloadURL(string dumpDownloadURL) { DARABONBA_PTR_SET_VALUE(dumpDownloadURL_, dumpDownloadURL) };


        // dumpState Field Functions 
        bool hasDumpState() const { return this->dumpState_ != nullptr;};
        void deleteDumpState() { this->dumpState_ = nullptr;};
        inline int32_t getDumpState() const { DARABONBA_PTR_GET_DEFAULT(dumpState_, 0) };
        inline LogFile& setDumpState(int32_t dumpState) { DARABONBA_PTR_SET_VALUE(dumpState_, dumpState) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
        inline LogFile& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline LogFile& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // linkExpiredTime Field Functions 
        bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
        void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
        inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
        inline LogFile& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


        // logBeginTime Field Functions 
        bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
        void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
        inline string getLogBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
        inline LogFile& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


        // logEndTime Field Functions 
        bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
        void deleteLogEndTime() { this->logEndTime_ = nullptr;};
        inline string getLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
        inline LogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


        // logFileName Field Functions 
        bool hasLogFileName() const { return this->logFileName_ != nullptr;};
        void deleteLogFileName() { this->logFileName_ = nullptr;};
        inline string getLogFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
        inline LogFile& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


        // logStatus Field Functions 
        bool hasLogStatus() const { return this->logStatus_ != nullptr;};
        void deleteLogStatus() { this->logStatus_ = nullptr;};
        inline string getLogStatus() const { DARABONBA_PTR_GET_DEFAULT(logStatus_, "") };
        inline LogFile& setLogStatus(string logStatus) { DARABONBA_PTR_SET_VALUE(logStatus_, logStatus) };


        // OSSEndpoint Field Functions 
        bool hasOSSEndpoint() const { return this->OSSEndpoint_ != nullptr;};
        void deleteOSSEndpoint() { this->OSSEndpoint_ = nullptr;};
        inline string getOSSEndpoint() const { DARABONBA_PTR_GET_DEFAULT(OSSEndpoint_, "") };
        inline LogFile& setOSSEndpoint(string OSSEndpoint) { DARABONBA_PTR_SET_VALUE(OSSEndpoint_, OSSEndpoint) };


      protected:
        shared_ptr<string> binLogId_ {};
        shared_ptr<string> downloadLink_ {};
        shared_ptr<string> dumpBucket_ {};
        shared_ptr<string> dumpDownloadURL_ {};
        shared_ptr<int32_t> dumpState_ {};
        shared_ptr<string> fileId_ {};
        shared_ptr<string> fileSize_ {};
        shared_ptr<string> linkExpiredTime_ {};
        shared_ptr<string> logBeginTime_ {};
        shared_ptr<string> logEndTime_ {};
        shared_ptr<string> logFileName_ {};
        shared_ptr<string> logStatus_ {};
        shared_ptr<string> OSSEndpoint_ {};
      };

      virtual bool empty() const override { return this->logFile_ == nullptr; };
      // logFile Field Functions 
      bool hasLogFile() const { return this->logFile_ != nullptr;};
      void deleteLogFile() { this->logFile_ = nullptr;};
      inline const vector<Items::LogFile> & getLogFile() const { DARABONBA_PTR_GET_CONST(logFile_, vector<Items::LogFile>) };
      inline vector<Items::LogFile> getLogFile() { DARABONBA_PTR_GET(logFile_, vector<Items::LogFile>) };
      inline Items& setLogFile(const vector<Items::LogFile> & logFile) { DARABONBA_PTR_SET_VALUE(logFile_, logFile) };
      inline Items& setLogFile(vector<Items::LogFile> && logFile) { DARABONBA_PTR_SET_RVALUE(logFile_, logFile) };


    protected:
      shared_ptr<vector<Items::LogFile>> logFile_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxRecordsPerPage_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBinlogFilesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBinlogFilesResponseBody::Items) };
    inline DescribeBinlogFilesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBinlogFilesResponseBody::Items) };
    inline DescribeBinlogFilesResponseBody& setItems(const DescribeBinlogFilesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBinlogFilesResponseBody& setItems(DescribeBinlogFilesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeBinlogFilesResponseBody& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBinlogFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinlogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeBinlogFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeBinlogFilesResponseBody::Items> items_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> maxRecordsPerPage_ {};
    // The page number of the returned results.
    shared_ptr<int32_t> pageNumber_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of binlog files found.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
