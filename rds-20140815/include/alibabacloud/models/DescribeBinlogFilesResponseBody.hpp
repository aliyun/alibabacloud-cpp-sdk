// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINLOGFILESRESPONSEBODY_HPP_
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
  class DescribeBinlogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinlogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinlogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalFileSize, totalFileSize_);
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
        DARABONBA_PTR_TO_JSON(BinLogFile, binLogFile_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BinLogFile, binLogFile_);
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
      class BinLogFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BinLogFile& obj) { 
          DARABONBA_PTR_TO_JSON(Checksum, checksum_);
          DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
          DARABONBA_PTR_TO_JSON(RemoteStatus, remoteStatus_);
        };
        friend void from_json(const Darabonba::Json& j, BinLogFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
          DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
          DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
          DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
          DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
          DARABONBA_PTR_FROM_JSON(RemoteStatus, remoteStatus_);
        };
        BinLogFile() = default ;
        BinLogFile(const BinLogFile &) = default ;
        BinLogFile(BinLogFile &&) = default ;
        BinLogFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BinLogFile() = default ;
        BinLogFile& operator=(const BinLogFile &) = default ;
        BinLogFile& operator=(BinLogFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checksum_ == nullptr
        && this->downloadLink_ == nullptr && this->fileSize_ == nullptr && this->hostInstanceID_ == nullptr && this->intranetDownloadLink_ == nullptr && this->linkExpiredTime_ == nullptr
        && this->logBeginTime_ == nullptr && this->logEndTime_ == nullptr && this->logFileName_ == nullptr && this->remoteStatus_ == nullptr; };
        // checksum Field Functions 
        bool hasChecksum() const { return this->checksum_ != nullptr;};
        void deleteChecksum() { this->checksum_ = nullptr;};
        inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
        inline BinLogFile& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


        // downloadLink Field Functions 
        bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
        void deleteDownloadLink() { this->downloadLink_ = nullptr;};
        inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
        inline BinLogFile& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline BinLogFile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // hostInstanceID Field Functions 
        bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
        void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
        inline string getHostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
        inline BinLogFile& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


        // intranetDownloadLink Field Functions 
        bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
        void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
        inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
        inline BinLogFile& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


        // linkExpiredTime Field Functions 
        bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
        void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
        inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
        inline BinLogFile& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


        // logBeginTime Field Functions 
        bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
        void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
        inline string getLogBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
        inline BinLogFile& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


        // logEndTime Field Functions 
        bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
        void deleteLogEndTime() { this->logEndTime_ = nullptr;};
        inline string getLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
        inline BinLogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


        // logFileName Field Functions 
        bool hasLogFileName() const { return this->logFileName_ != nullptr;};
        void deleteLogFileName() { this->logFileName_ = nullptr;};
        inline string getLogFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
        inline BinLogFile& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


        // remoteStatus Field Functions 
        bool hasRemoteStatus() const { return this->remoteStatus_ != nullptr;};
        void deleteRemoteStatus() { this->remoteStatus_ = nullptr;};
        inline string getRemoteStatus() const { DARABONBA_PTR_GET_DEFAULT(remoteStatus_, "") };
        inline BinLogFile& setRemoteStatus(string remoteStatus) { DARABONBA_PTR_SET_VALUE(remoteStatus_, remoteStatus) };


      protected:
        // The checksum. The value of this parameter is calculated by using the CRC64 algorithm.
        shared_ptr<string> checksum_ {};
        // The HTTP-based download URL of the log file. If the return value of this parameter is NULL, ApsaraDB RDS does not provide a download URL for the log file.
        shared_ptr<string> downloadLink_ {};
        // The size of the log file.
        // 
        // Unit: bytes.
        shared_ptr<int64_t> fileSize_ {};
        // The ID of the instance to which the log file belongs. This parameter helps determine whether the log file is generated on the primary instance or the secondary instance.
        // 
        // >  You can log on to the ApsaraDB RDS console and go to the instance details page. In the left-side navigation pane, click **Service Availability** to view the values of **Primary Instance No.** and **Secondary Instance No.**.
        shared_ptr<string> hostInstanceID_ {};
        // The URL that is used to download files over an internal network.
        shared_ptr<string> intranetDownloadLink_ {};
        // The expiration time of the URL.
        // 
        // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> linkExpiredTime_ {};
        // The beginning of the time range to query.
        // 
        // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logBeginTime_ {};
        // The end of the time range to query.
        // 
        // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logEndTime_ {};
        // The log file name.
        shared_ptr<string> logFileName_ {};
        // The status of the log file that is stored in the Object Storage Service (OSS) bucket.
        // 
        // Valid values:
        // 
        // *   **Uploading**
        // *   **Completed**
        shared_ptr<string> remoteStatus_ {};
      };

      virtual bool empty() const override { return this->binLogFile_ == nullptr; };
      // binLogFile Field Functions 
      bool hasBinLogFile() const { return this->binLogFile_ != nullptr;};
      void deleteBinLogFile() { this->binLogFile_ = nullptr;};
      inline const vector<Items::BinLogFile> & getBinLogFile() const { DARABONBA_PTR_GET_CONST(binLogFile_, vector<Items::BinLogFile>) };
      inline vector<Items::BinLogFile> getBinLogFile() { DARABONBA_PTR_GET(binLogFile_, vector<Items::BinLogFile>) };
      inline Items& setBinLogFile(const vector<Items::BinLogFile> & binLogFile) { DARABONBA_PTR_SET_VALUE(binLogFile_, binLogFile) };
      inline Items& setBinLogFile(vector<Items::BinLogFile> && binLogFile) { DARABONBA_PTR_SET_RVALUE(binLogFile_, binLogFile) };


    protected:
      shared_ptr<vector<Items::BinLogFile>> binLogFile_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalFileSize_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBinlogFilesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBinlogFilesResponseBody::Items) };
    inline DescribeBinlogFilesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBinlogFilesResponseBody::Items) };
    inline DescribeBinlogFilesResponseBody& setItems(const DescribeBinlogFilesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBinlogFilesResponseBody& setItems(DescribeBinlogFilesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBinlogFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeBinlogFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBinlogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalFileSize Field Functions 
    bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
    void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
    inline int64_t getTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
    inline DescribeBinlogFilesResponseBody& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeBinlogFilesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of the log file.
    shared_ptr<DescribeBinlogFilesResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of log files on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total size of the log file.
    shared_ptr<int64_t> totalFileSize_ {};
    // The total number of log files.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
