// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListUserBackupFilesResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBackupFilesResponseBodyRecords& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListUserBackupFilesResponseBodyRecords& obj) { 
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
    ListUserBackupFilesResponseBodyRecords() = default ;
    ListUserBackupFilesResponseBodyRecords(const ListUserBackupFilesResponseBodyRecords &) = default ;
    ListUserBackupFilesResponseBodyRecords(ListUserBackupFilesResponseBodyRecords &&) = default ;
    ListUserBackupFilesResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBackupFilesResponseBodyRecords() = default ;
    ListUserBackupFilesResponseBodyRecords& operator=(const ListUserBackupFilesResponseBodyRecords &) = default ;
    ListUserBackupFilesResponseBodyRecords& operator=(ListUserBackupFilesResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->binlogInfo_ == nullptr && return this->comment_ == nullptr && return this->creationTime_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->finishTime_ == nullptr && return this->modificationTime_ == nullptr && return this->ossBucket_ == nullptr && return this->ossFileMetaData_ == nullptr && return this->ossFileName_ == nullptr
        && return this->ossFilePath_ == nullptr && return this->ossFileSize_ == nullptr && return this->ossUrl_ == nullptr && return this->reason_ == nullptr && return this->restoreSize_ == nullptr
        && return this->retention_ == nullptr && return this->status_ == nullptr && return this->zoneId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // binlogInfo Field Functions 
    bool hasBinlogInfo() const { return this->binlogInfo_ != nullptr;};
    void deleteBinlogInfo() { this->binlogInfo_ = nullptr;};
    inline string binlogInfo() const { DARABONBA_PTR_GET_DEFAULT(binlogInfo_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setBinlogInfo(string binlogInfo) { DARABONBA_PTR_SET_VALUE(binlogInfo_, binlogInfo) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossFileMetaData Field Functions 
    bool hasOssFileMetaData() const { return this->ossFileMetaData_ != nullptr;};
    void deleteOssFileMetaData() { this->ossFileMetaData_ = nullptr;};
    inline string ossFileMetaData() const { DARABONBA_PTR_GET_DEFAULT(ossFileMetaData_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setOssFileMetaData(string ossFileMetaData) { DARABONBA_PTR_SET_VALUE(ossFileMetaData_, ossFileMetaData) };


    // ossFileName Field Functions 
    bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
    void deleteOssFileName() { this->ossFileName_ = nullptr;};
    inline string ossFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


    // ossFilePath Field Functions 
    bool hasOssFilePath() const { return this->ossFilePath_ != nullptr;};
    void deleteOssFilePath() { this->ossFilePath_ = nullptr;};
    inline string ossFilePath() const { DARABONBA_PTR_GET_DEFAULT(ossFilePath_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setOssFilePath(string ossFilePath) { DARABONBA_PTR_SET_VALUE(ossFilePath_, ossFilePath) };


    // ossFileSize Field Functions 
    bool hasOssFileSize() const { return this->ossFileSize_ != nullptr;};
    void deleteOssFileSize() { this->ossFileSize_ = nullptr;};
    inline int64_t ossFileSize() const { DARABONBA_PTR_GET_DEFAULT(ossFileSize_, 0L) };
    inline ListUserBackupFilesResponseBodyRecords& setOssFileSize(int64_t ossFileSize) { DARABONBA_PTR_SET_VALUE(ossFileSize_, ossFileSize) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // restoreSize Field Functions 
    bool hasRestoreSize() const { return this->restoreSize_ != nullptr;};
    void deleteRestoreSize() { this->restoreSize_ = nullptr;};
    inline string restoreSize() const { DARABONBA_PTR_GET_DEFAULT(restoreSize_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setRestoreSize(string restoreSize) { DARABONBA_PTR_SET_VALUE(restoreSize_, restoreSize) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ListUserBackupFilesResponseBodyRecords& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListUserBackupFilesResponseBodyRecords& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the full backup file.
    std::shared_ptr<string> backupId_ = nullptr;
    // The information about the binary log file that contains incremental data. If incremental data is generated during the full backup, this parameter is returned.
    std::shared_ptr<string> binlogInfo_ = nullptr;
    // The description of the full backup file.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the system started to import the full backup file. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The time when the full backup file is successfully imported. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The time when the full backup file is successfully imported. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The name of the OSS bucket in which the full backup file is stored as an object.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The metadata of the full backup file. For more information, see [Manage object metadata](https://help.aliyun.com/document_detail/31859.html).
    std::shared_ptr<string> ossFileMetaData_ = nullptr;
    // The name of the full backup file that is stored as an object in an OSS bucket.
    std::shared_ptr<string> ossFileName_ = nullptr;
    // The path of the full backup file that is stored as an object in an OSS bucket.
    std::shared_ptr<string> ossFilePath_ = nullptr;
    // The size of the full backup file that is stored as an object in an OSS bucket. Unit: KB.
    std::shared_ptr<int64_t> ossFileSize_ = nullptr;
    // The URL to download the full backup file from the OSS bucket.
    std::shared_ptr<string> ossUrl_ = nullptr;
    // The reason why the full backup file failed to be imported.
    std::shared_ptr<string> reason_ = nullptr;
    // The amount of storage that is required to restore the data of the full backup file. Unit: GB.
    std::shared_ptr<string> restoreSize_ = nullptr;
    // The retention period of the full backup file. Unit: days.
    std::shared_ptr<int32_t> retention_ = nullptr;
    // The status of the full backup file. Valid values:
    // 
    // *   **Importing**: The full backup file is being imported.
    // *   **Failed**: The full backup file fails to be imported.
    // *   **CheckSucccess**: The full backup file passes the check.
    // *   **BackupSuccess**: The full backup file is imported.
    // *   **Deleted**: The full backup file is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The zone ID of the full backup file.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
