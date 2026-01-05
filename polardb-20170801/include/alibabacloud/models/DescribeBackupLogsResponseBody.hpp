// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeBackupLogsResponseBody() = default ;
    DescribeBackupLogsResponseBody(const DescribeBackupLogsResponseBody &) = default ;
    DescribeBackupLogsResponseBody(DescribeBackupLogsResponseBody &&) = default ;
    DescribeBackupLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLogsResponseBody() = default ;
    DescribeBackupLogsResponseBody& operator=(const DescribeBackupLogsResponseBody &) = default ;
    DescribeBackupLogsResponseBody& operator=(DescribeBackupLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
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
      class BackupLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupLog& obj) { 
          DARABONBA_PTR_TO_JSON(BackupLogEndTime, backupLogEndTime_);
          DARABONBA_PTR_TO_JSON(BackupLogId, backupLogId_);
          DARABONBA_PTR_TO_JSON(BackupLogName, backupLogName_);
          DARABONBA_PTR_TO_JSON(BackupLogSize, backupLogSize_);
          DARABONBA_PTR_TO_JSON(BackupLogStartTime, backupLogStartTime_);
          DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
        };
        friend void from_json(const Darabonba::Json& j, BackupLog& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupLogEndTime, backupLogEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupLogId, backupLogId_);
          DARABONBA_PTR_FROM_JSON(BackupLogName, backupLogName_);
          DARABONBA_PTR_FROM_JSON(BackupLogSize, backupLogSize_);
          DARABONBA_PTR_FROM_JSON(BackupLogStartTime, backupLogStartTime_);
          DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
        };
        BackupLog() = default ;
        BackupLog(const BackupLog &) = default ;
        BackupLog(BackupLog &&) = default ;
        BackupLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupLog() = default ;
        BackupLog& operator=(const BackupLog &) = default ;
        BackupLog& operator=(BackupLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupLogEndTime_ == nullptr
        && this->backupLogId_ == nullptr && this->backupLogName_ == nullptr && this->backupLogSize_ == nullptr && this->backupLogStartTime_ == nullptr && this->downloadLink_ == nullptr
        && this->intranetDownloadLink_ == nullptr && this->linkExpiredTime_ == nullptr; };
        // backupLogEndTime Field Functions 
        bool hasBackupLogEndTime() const { return this->backupLogEndTime_ != nullptr;};
        void deleteBackupLogEndTime() { this->backupLogEndTime_ = nullptr;};
        inline string getBackupLogEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupLogEndTime_, "") };
        inline BackupLog& setBackupLogEndTime(string backupLogEndTime) { DARABONBA_PTR_SET_VALUE(backupLogEndTime_, backupLogEndTime) };


        // backupLogId Field Functions 
        bool hasBackupLogId() const { return this->backupLogId_ != nullptr;};
        void deleteBackupLogId() { this->backupLogId_ = nullptr;};
        inline string getBackupLogId() const { DARABONBA_PTR_GET_DEFAULT(backupLogId_, "") };
        inline BackupLog& setBackupLogId(string backupLogId) { DARABONBA_PTR_SET_VALUE(backupLogId_, backupLogId) };


        // backupLogName Field Functions 
        bool hasBackupLogName() const { return this->backupLogName_ != nullptr;};
        void deleteBackupLogName() { this->backupLogName_ = nullptr;};
        inline string getBackupLogName() const { DARABONBA_PTR_GET_DEFAULT(backupLogName_, "") };
        inline BackupLog& setBackupLogName(string backupLogName) { DARABONBA_PTR_SET_VALUE(backupLogName_, backupLogName) };


        // backupLogSize Field Functions 
        bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
        void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
        inline string getBackupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, "") };
        inline BackupLog& setBackupLogSize(string backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


        // backupLogStartTime Field Functions 
        bool hasBackupLogStartTime() const { return this->backupLogStartTime_ != nullptr;};
        void deleteBackupLogStartTime() { this->backupLogStartTime_ = nullptr;};
        inline string getBackupLogStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupLogStartTime_, "") };
        inline BackupLog& setBackupLogStartTime(string backupLogStartTime) { DARABONBA_PTR_SET_VALUE(backupLogStartTime_, backupLogStartTime) };


        // downloadLink Field Functions 
        bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
        void deleteDownloadLink() { this->downloadLink_ = nullptr;};
        inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
        inline BackupLog& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


        // intranetDownloadLink Field Functions 
        bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
        void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
        inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
        inline BackupLog& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


        // linkExpiredTime Field Functions 
        bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
        void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
        inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
        inline BackupLog& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


      protected:
        // The time when the backup task ended. The time follows the ISO 8601 standard in the `YYYY-MM-DD\\"T\\"HH:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> backupLogEndTime_ {};
        // The ID of the backup log.
        shared_ptr<string> backupLogId_ {};
        // The name of the backup log.
        shared_ptr<string> backupLogName_ {};
        // The size of the backup log. Unit: bytes.
        shared_ptr<string> backupLogSize_ {};
        // The time when the backup task started. The time follows the ISO 8601 standard in the `YYYY-MM-DD\\"T\\"HH:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> backupLogStartTime_ {};
        // The public URL used to download the backup log.
        shared_ptr<string> downloadLink_ {};
        // The internal URL used to download the backup log.
        shared_ptr<string> intranetDownloadLink_ {};
        // The time when the download URL expires.
        shared_ptr<string> linkExpiredTime_ {};
      };

      virtual bool empty() const override { return this->backupLog_ == nullptr; };
      // backupLog Field Functions 
      bool hasBackupLog() const { return this->backupLog_ != nullptr;};
      void deleteBackupLog() { this->backupLog_ = nullptr;};
      inline const vector<Items::BackupLog> & getBackupLog() const { DARABONBA_PTR_GET_CONST(backupLog_, vector<Items::BackupLog>) };
      inline vector<Items::BackupLog> getBackupLog() { DARABONBA_PTR_GET(backupLog_, vector<Items::BackupLog>) };
      inline Items& setBackupLog(const vector<Items::BackupLog> & backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };
      inline Items& setBackupLog(vector<Items::BackupLog> && backupLog) { DARABONBA_PTR_SET_RVALUE(backupLog_, backupLog) };


    protected:
      shared_ptr<vector<Items::BackupLog>> backupLog_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupLogsResponseBody::Items) };
    inline DescribeBackupLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupLogsResponseBody::Items) };
    inline DescribeBackupLogsResponseBody& setItems(const DescribeBackupLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupLogsResponseBody& setItems(DescribeBackupLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupLogsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeBackupLogsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeBackupLogsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of the backup logs.
    shared_ptr<DescribeBackupLogsResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<string> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
