// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSQLLogFilesResponseBody() = default ;
    DescribeSQLLogFilesResponseBody(const DescribeSQLLogFilesResponseBody &) = default ;
    DescribeSQLLogFilesResponseBody(DescribeSQLLogFilesResponseBody &&) = default ;
    DescribeSQLLogFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogFilesResponseBody() = default ;
    DescribeSQLLogFilesResponseBody& operator=(const DescribeSQLLogFilesResponseBody &) = default ;
    DescribeSQLLogFilesResponseBody& operator=(DescribeSQLLogFilesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(FileID, fileID_);
          DARABONBA_PTR_TO_JSON(LogDownloadURL, logDownloadURL_);
          DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_TO_JSON(LogSize, logSize_);
          DARABONBA_PTR_TO_JSON(LogStartTime, logStartTime_);
          DARABONBA_PTR_TO_JSON(LogStatus, logStatus_);
        };
        friend void from_json(const Darabonba::Json& j, LogFile& obj) { 
          DARABONBA_PTR_FROM_JSON(FileID, fileID_);
          DARABONBA_PTR_FROM_JSON(LogDownloadURL, logDownloadURL_);
          DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
          DARABONBA_PTR_FROM_JSON(LogStartTime, logStartTime_);
          DARABONBA_PTR_FROM_JSON(LogStatus, logStatus_);
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
        virtual bool empty() const override { return this->fileID_ == nullptr
        && this->logDownloadURL_ == nullptr && this->logEndTime_ == nullptr && this->logSize_ == nullptr && this->logStartTime_ == nullptr && this->logStatus_ == nullptr; };
        // fileID Field Functions 
        bool hasFileID() const { return this->fileID_ != nullptr;};
        void deleteFileID() { this->fileID_ = nullptr;};
        inline string getFileID() const { DARABONBA_PTR_GET_DEFAULT(fileID_, "") };
        inline LogFile& setFileID(string fileID) { DARABONBA_PTR_SET_VALUE(fileID_, fileID) };


        // logDownloadURL Field Functions 
        bool hasLogDownloadURL() const { return this->logDownloadURL_ != nullptr;};
        void deleteLogDownloadURL() { this->logDownloadURL_ = nullptr;};
        inline string getLogDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(logDownloadURL_, "") };
        inline LogFile& setLogDownloadURL(string logDownloadURL) { DARABONBA_PTR_SET_VALUE(logDownloadURL_, logDownloadURL) };


        // logEndTime Field Functions 
        bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
        void deleteLogEndTime() { this->logEndTime_ = nullptr;};
        inline string getLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
        inline LogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


        // logSize Field Functions 
        bool hasLogSize() const { return this->logSize_ != nullptr;};
        void deleteLogSize() { this->logSize_ = nullptr;};
        inline string getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, "") };
        inline LogFile& setLogSize(string logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


        // logStartTime Field Functions 
        bool hasLogStartTime() const { return this->logStartTime_ != nullptr;};
        void deleteLogStartTime() { this->logStartTime_ = nullptr;};
        inline string getLogStartTime() const { DARABONBA_PTR_GET_DEFAULT(logStartTime_, "") };
        inline LogFile& setLogStartTime(string logStartTime) { DARABONBA_PTR_SET_VALUE(logStartTime_, logStartTime) };


        // logStatus Field Functions 
        bool hasLogStatus() const { return this->logStatus_ != nullptr;};
        void deleteLogStatus() { this->logStatus_ = nullptr;};
        inline string getLogStatus() const { DARABONBA_PTR_GET_DEFAULT(logStatus_, "") };
        inline LogFile& setLogStatus(string logStatus) { DARABONBA_PTR_SET_VALUE(logStatus_, logStatus) };


      protected:
        // The file name.
        shared_ptr<string> fileID_ {};
        // The download URL of the file. If the audit log file cannot be downloaded, this parameter is null.
        shared_ptr<string> logDownloadURL_ {};
        // The time at which the last SQL statement recorded in the audit log file was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logEndTime_ {};
        // The size of the audit log file. Unit: bytes.
        shared_ptr<string> logSize_ {};
        // The time at which the first SQL statement recorded in the audit log file was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logStartTime_ {};
        // The status of the audit log file. Valid values:
        // 
        // *   **Success**
        // *   **Failed**
        // *   **Generating**
        shared_ptr<string> logStatus_ {};
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
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSQLLogFilesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSQLLogFilesResponseBody::Items) };
    inline DescribeSQLLogFilesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSQLLogFilesResponseBody::Items) };
    inline DescribeSQLLogFilesResponseBody& setItems(const DescribeSQLLogFilesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSQLLogFilesResponseBody& setItems(DescribeSQLLogFilesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSQLLogFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSQLLogFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLLogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeSQLLogFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // An array that consists of the returned audit log files.
    shared_ptr<DescribeSQLLogFilesResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
