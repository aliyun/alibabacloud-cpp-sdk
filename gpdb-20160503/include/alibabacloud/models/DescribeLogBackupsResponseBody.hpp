// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeLogBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalLogSize, totalLogSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalLogSize, totalLogSize_);
    };
    DescribeLogBackupsResponseBody() = default ;
    DescribeLogBackupsResponseBody(const DescribeLogBackupsResponseBody &) = default ;
    DescribeLogBackupsResponseBody(DescribeLogBackupsResponseBody &&) = default ;
    DescribeLogBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupsResponseBody() = default ;
    DescribeLogBackupsResponseBody& operator=(const DescribeLogBackupsResponseBody &) = default ;
    DescribeLogBackupsResponseBody& operator=(DescribeLogBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
        DARABONBA_PTR_TO_JSON(LogFileSize, logFileSize_);
        DARABONBA_PTR_TO_JSON(LogTime, logTime_);
        DARABONBA_PTR_TO_JSON(SegmentName, segmentName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
        DARABONBA_PTR_FROM_JSON(LogFileSize, logFileSize_);
        DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
        DARABONBA_PTR_FROM_JSON(SegmentName, segmentName_);
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
      virtual bool empty() const override { return this->backupId_ == nullptr
        && this->DBInstanceId_ == nullptr && this->logFileName_ == nullptr && this->logFileSize_ == nullptr && this->logTime_ == nullptr && this->segmentName_ == nullptr; };
      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Items& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Items& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // logFileName Field Functions 
      bool hasLogFileName() const { return this->logFileName_ != nullptr;};
      void deleteLogFileName() { this->logFileName_ = nullptr;};
      inline string getLogFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
      inline Items& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


      // logFileSize Field Functions 
      bool hasLogFileSize() const { return this->logFileSize_ != nullptr;};
      void deleteLogFileSize() { this->logFileSize_ = nullptr;};
      inline int64_t getLogFileSize() const { DARABONBA_PTR_GET_DEFAULT(logFileSize_, 0L) };
      inline Items& setLogFileSize(int64_t logFileSize) { DARABONBA_PTR_SET_VALUE(logFileSize_, logFileSize) };


      // logTime Field Functions 
      bool hasLogTime() const { return this->logTime_ != nullptr;};
      void deleteLogTime() { this->logTime_ = nullptr;};
      inline string getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
      inline Items& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


      // segmentName Field Functions 
      bool hasSegmentName() const { return this->segmentName_ != nullptr;};
      void deleteSegmentName() { this->segmentName_ = nullptr;};
      inline string getSegmentName() const { DARABONBA_PTR_GET_DEFAULT(segmentName_, "") };
      inline Items& setSegmentName(string segmentName) { DARABONBA_PTR_SET_VALUE(segmentName_, segmentName) };


    protected:
      // The ID of the backup set.
      shared_ptr<string> backupId_ {};
      // The ID of the coordinator node.
      shared_ptr<string> DBInstanceId_ {};
      // The name of the log backup set that is stored in Object Storage Service (OSS).
      shared_ptr<string> logFileName_ {};
      // The size of the log backup set. Unit: bytes.
      shared_ptr<int64_t> logFileSize_ {};
      // The timestamp of the log.
      shared_ptr<string> logTime_ {};
      // The name of the compute node.
      shared_ptr<string> segmentName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalLogSize_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeLogBackupsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeLogBackupsResponseBody::Items>) };
    inline vector<DescribeLogBackupsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeLogBackupsResponseBody::Items>) };
    inline DescribeLogBackupsResponseBody& setItems(const vector<DescribeLogBackupsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeLogBackupsResponseBody& setItems(vector<DescribeLogBackupsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLogBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLogBackupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalLogSize Field Functions 
    bool hasTotalLogSize() const { return this->totalLogSize_ != nullptr;};
    void deleteTotalLogSize() { this->totalLogSize_ = nullptr;};
    inline int64_t getTotalLogSize() const { DARABONBA_PTR_GET_DEFAULT(totalLogSize_, 0L) };
    inline DescribeLogBackupsResponseBody& setTotalLogSize(int64_t totalLogSize) { DARABONBA_PTR_SET_VALUE(totalLogSize_, totalLogSize) };


  protected:
    // Details of the backup sets.
    shared_ptr<vector<DescribeLogBackupsResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of backup sets on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total size of logs in the time range. Unit: bytes.
    shared_ptr<int64_t> totalLogSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
