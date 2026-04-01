// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODY_HPP_
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
  class ListUserBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserBackupFilesResponseBody() = default ;
    ListUserBackupFilesResponseBody(const ListUserBackupFilesResponseBody &) = default ;
    ListUserBackupFilesResponseBody(ListUserBackupFilesResponseBody &&) = default ;
    ListUserBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBackupFilesResponseBody() = default ;
    ListUserBackupFilesResponseBody& operator=(const ListUserBackupFilesResponseBody &) = default ;
    ListUserBackupFilesResponseBody& operator=(ListUserBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(BackupId, backupId_);
        DARABONBA_PTR_TO_JSON(BinlogInfo, binlogInfo_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssFileMetaData, ossFileMetaData_);
        DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_TO_JSON(OssFilePath, ossFilePath_);
        DARABONBA_PTR_TO_JSON(OssFileSize, ossFileSize_);
        DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RestoreSize, restoreSize_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
        DARABONBA_PTR_FROM_JSON(BinlogInfo, binlogInfo_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssFileMetaData, ossFileMetaData_);
        DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_FROM_JSON(OssFilePath, ossFilePath_);
        DARABONBA_PTR_FROM_JSON(OssFileSize, ossFileSize_);
        DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RestoreSize, restoreSize_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupId_ == nullptr
        && this->binlogInfo_ == nullptr && this->comment_ == nullptr && this->creationTime_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->finishTime_ == nullptr && this->modificationTime_ == nullptr && this->ossBucket_ == nullptr && this->ossFileMetaData_ == nullptr && this->ossFileName_ == nullptr
        && this->ossFilePath_ == nullptr && this->ossFileSize_ == nullptr && this->ossUrl_ == nullptr && this->reason_ == nullptr && this->restoreSize_ == nullptr
        && this->retention_ == nullptr && this->status_ == nullptr && this->zoneId_ == nullptr; };
      // backupId Field Functions 
      bool hasBackupId() const { return this->backupId_ != nullptr;};
      void deleteBackupId() { this->backupId_ = nullptr;};
      inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
      inline Records& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


      // binlogInfo Field Functions 
      bool hasBinlogInfo() const { return this->binlogInfo_ != nullptr;};
      void deleteBinlogInfo() { this->binlogInfo_ = nullptr;};
      inline string getBinlogInfo() const { DARABONBA_PTR_GET_DEFAULT(binlogInfo_, "") };
      inline Records& setBinlogInfo(string binlogInfo) { DARABONBA_PTR_SET_VALUE(binlogInfo_, binlogInfo) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Records& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Records& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Records& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Records& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Records& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline Records& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline Records& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossFileMetaData Field Functions 
      bool hasOssFileMetaData() const { return this->ossFileMetaData_ != nullptr;};
      void deleteOssFileMetaData() { this->ossFileMetaData_ = nullptr;};
      inline string getOssFileMetaData() const { DARABONBA_PTR_GET_DEFAULT(ossFileMetaData_, "") };
      inline Records& setOssFileMetaData(string ossFileMetaData) { DARABONBA_PTR_SET_VALUE(ossFileMetaData_, ossFileMetaData) };


      // ossFileName Field Functions 
      bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
      void deleteOssFileName() { this->ossFileName_ = nullptr;};
      inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
      inline Records& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


      // ossFilePath Field Functions 
      bool hasOssFilePath() const { return this->ossFilePath_ != nullptr;};
      void deleteOssFilePath() { this->ossFilePath_ = nullptr;};
      inline string getOssFilePath() const { DARABONBA_PTR_GET_DEFAULT(ossFilePath_, "") };
      inline Records& setOssFilePath(string ossFilePath) { DARABONBA_PTR_SET_VALUE(ossFilePath_, ossFilePath) };


      // ossFileSize Field Functions 
      bool hasOssFileSize() const { return this->ossFileSize_ != nullptr;};
      void deleteOssFileSize() { this->ossFileSize_ = nullptr;};
      inline int64_t getOssFileSize() const { DARABONBA_PTR_GET_DEFAULT(ossFileSize_, 0L) };
      inline Records& setOssFileSize(int64_t ossFileSize) { DARABONBA_PTR_SET_VALUE(ossFileSize_, ossFileSize) };


      // ossUrl Field Functions 
      bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
      void deleteOssUrl() { this->ossUrl_ = nullptr;};
      inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
      inline Records& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Records& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // restoreSize Field Functions 
      bool hasRestoreSize() const { return this->restoreSize_ != nullptr;};
      void deleteRestoreSize() { this->restoreSize_ = nullptr;};
      inline string getRestoreSize() const { DARABONBA_PTR_GET_DEFAULT(restoreSize_, "") };
      inline Records& setRestoreSize(string restoreSize) { DARABONBA_PTR_SET_VALUE(restoreSize_, restoreSize) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
      inline Records& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Records& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Records& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the full backup file.
      shared_ptr<string> backupId_ {};
      // The information about the binary log file that contains incremental data. If incremental data is generated during the full backup, this parameter is returned.
      shared_ptr<string> binlogInfo_ {};
      // The description of the full backup file.
      shared_ptr<string> comment_ {};
      // The time when the system started to import the full backup file. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<string> creationTime_ {};
      // The database engine of the instance.
      shared_ptr<string> engine_ {};
      // The database engine version.
      shared_ptr<string> engineVersion_ {};
      // The time when the full backup file is successfully imported. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<string> finishTime_ {};
      // The time when the full backup file is successfully imported. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<string> modificationTime_ {};
      // The name of the OSS bucket in which the full backup file is stored as an object.
      shared_ptr<string> ossBucket_ {};
      // The metadata of the full backup file. For more information, see [Manage object metadata](https://help.aliyun.com/document_detail/31859.html).
      shared_ptr<string> ossFileMetaData_ {};
      // The name of the full backup file that is stored as an object in an OSS bucket.
      shared_ptr<string> ossFileName_ {};
      // The path of the full backup file that is stored as an object in an OSS bucket.
      shared_ptr<string> ossFilePath_ {};
      // The size of the full backup file that is stored as an object in an OSS bucket. Unit: KB.
      shared_ptr<int64_t> ossFileSize_ {};
      // The URL to download the full backup file from the OSS bucket.
      shared_ptr<string> ossUrl_ {};
      // The reason why the full backup file failed to be imported.
      shared_ptr<string> reason_ {};
      // The amount of storage that is required to restore the data of the full backup file. Unit: GB.
      shared_ptr<string> restoreSize_ {};
      // The retention period of the full backup file. Unit: days.
      shared_ptr<int32_t> retention_ {};
      // The status of the full backup file. Valid values:
      // 
      // *   **Importing**: The full backup file is being imported.
      // *   **Failed**: The full backup file fails to be imported.
      // *   **CheckSucccess**: The full backup file passes the check.
      // *   **BackupSuccess**: The full backup file is imported.
      // *   **Deleted**: The full backup file is deleted.
      shared_ptr<string> status_ {};
      // The zone ID of the full backup file.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListUserBackupFilesResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListUserBackupFilesResponseBody::Records>) };
    inline vector<ListUserBackupFilesResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListUserBackupFilesResponseBody::Records>) };
    inline ListUserBackupFilesResponseBody& setRecords(const vector<ListUserBackupFilesResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListUserBackupFilesResponseBody& setRecords(vector<ListUserBackupFilesResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the full backup files.
    shared_ptr<vector<ListUserBackupFilesResponseBody::Records>> records_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
