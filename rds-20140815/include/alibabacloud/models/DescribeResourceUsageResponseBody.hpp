// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveBackupSize, archiveBackupSize_);
      DARABONBA_PTR_TO_JSON(BackupDataSize, backupDataSize_);
      DARABONBA_PTR_TO_JSON(BackupEcsSnapshotSize, backupEcsSnapshotSize_);
      DARABONBA_PTR_TO_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_TO_JSON(BackupOssDataSize, backupOssDataSize_);
      DARABONBA_PTR_TO_JSON(BackupOssLogSize, backupOssLogSize_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(ColdBackupSize, coldBackupSize_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(PaidBackupSize, paidBackupSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLSize, SQLSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveBackupSize, archiveBackupSize_);
      DARABONBA_PTR_FROM_JSON(BackupDataSize, backupDataSize_);
      DARABONBA_PTR_FROM_JSON(BackupEcsSnapshotSize, backupEcsSnapshotSize_);
      DARABONBA_PTR_FROM_JSON(BackupLogSize, backupLogSize_);
      DARABONBA_PTR_FROM_JSON(BackupOssDataSize, backupOssDataSize_);
      DARABONBA_PTR_FROM_JSON(BackupOssLogSize, backupOssLogSize_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(ColdBackupSize, coldBackupSize_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(PaidBackupSize, paidBackupSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLSize, SQLSize_);
    };
    DescribeResourceUsageResponseBody() = default ;
    DescribeResourceUsageResponseBody(const DescribeResourceUsageResponseBody &) = default ;
    DescribeResourceUsageResponseBody(DescribeResourceUsageResponseBody &&) = default ;
    DescribeResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageResponseBody() = default ;
    DescribeResourceUsageResponseBody& operator=(const DescribeResourceUsageResponseBody &) = default ;
    DescribeResourceUsageResponseBody& operator=(DescribeResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveBackupSize_ == nullptr
        && return this->backupDataSize_ == nullptr && return this->backupEcsSnapshotSize_ == nullptr && return this->backupLogSize_ == nullptr && return this->backupOssDataSize_ == nullptr && return this->backupOssLogSize_ == nullptr
        && return this->backupSize_ == nullptr && return this->coldBackupSize_ == nullptr && return this->DBInstanceId_ == nullptr && return this->dataSize_ == nullptr && return this->diskUsed_ == nullptr
        && return this->engine_ == nullptr && return this->logSize_ == nullptr && return this->paidBackupSize_ == nullptr && return this->requestId_ == nullptr && return this->SQLSize_ == nullptr; };
    // archiveBackupSize Field Functions 
    bool hasArchiveBackupSize() const { return this->archiveBackupSize_ != nullptr;};
    void deleteArchiveBackupSize() { this->archiveBackupSize_ = nullptr;};
    inline int64_t archiveBackupSize() const { DARABONBA_PTR_GET_DEFAULT(archiveBackupSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setArchiveBackupSize(int64_t archiveBackupSize) { DARABONBA_PTR_SET_VALUE(archiveBackupSize_, archiveBackupSize) };


    // backupDataSize Field Functions 
    bool hasBackupDataSize() const { return this->backupDataSize_ != nullptr;};
    void deleteBackupDataSize() { this->backupDataSize_ = nullptr;};
    inline int64_t backupDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupDataSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setBackupDataSize(int64_t backupDataSize) { DARABONBA_PTR_SET_VALUE(backupDataSize_, backupDataSize) };


    // backupEcsSnapshotSize Field Functions 
    bool hasBackupEcsSnapshotSize() const { return this->backupEcsSnapshotSize_ != nullptr;};
    void deleteBackupEcsSnapshotSize() { this->backupEcsSnapshotSize_ = nullptr;};
    inline string backupEcsSnapshotSize() const { DARABONBA_PTR_GET_DEFAULT(backupEcsSnapshotSize_, "") };
    inline DescribeResourceUsageResponseBody& setBackupEcsSnapshotSize(string backupEcsSnapshotSize) { DARABONBA_PTR_SET_VALUE(backupEcsSnapshotSize_, backupEcsSnapshotSize) };


    // backupLogSize Field Functions 
    bool hasBackupLogSize() const { return this->backupLogSize_ != nullptr;};
    void deleteBackupLogSize() { this->backupLogSize_ = nullptr;};
    inline int64_t backupLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupLogSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setBackupLogSize(int64_t backupLogSize) { DARABONBA_PTR_SET_VALUE(backupLogSize_, backupLogSize) };


    // backupOssDataSize Field Functions 
    bool hasBackupOssDataSize() const { return this->backupOssDataSize_ != nullptr;};
    void deleteBackupOssDataSize() { this->backupOssDataSize_ = nullptr;};
    inline int64_t backupOssDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupOssDataSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setBackupOssDataSize(int64_t backupOssDataSize) { DARABONBA_PTR_SET_VALUE(backupOssDataSize_, backupOssDataSize) };


    // backupOssLogSize Field Functions 
    bool hasBackupOssLogSize() const { return this->backupOssLogSize_ != nullptr;};
    void deleteBackupOssLogSize() { this->backupOssLogSize_ = nullptr;};
    inline int64_t backupOssLogSize() const { DARABONBA_PTR_GET_DEFAULT(backupOssLogSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setBackupOssLogSize(int64_t backupOssLogSize) { DARABONBA_PTR_SET_VALUE(backupOssLogSize_, backupOssLogSize) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // coldBackupSize Field Functions 
    bool hasColdBackupSize() const { return this->coldBackupSize_ != nullptr;};
    void deleteColdBackupSize() { this->coldBackupSize_ = nullptr;};
    inline int64_t coldBackupSize() const { DARABONBA_PTR_GET_DEFAULT(coldBackupSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setColdBackupSize(int64_t coldBackupSize) { DARABONBA_PTR_SET_VALUE(coldBackupSize_, coldBackupSize) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeResourceUsageResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline int64_t diskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0L) };
    inline DescribeResourceUsageResponseBody& setDiskUsed(int64_t diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeResourceUsageResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int64_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // paidBackupSize Field Functions 
    bool hasPaidBackupSize() const { return this->paidBackupSize_ != nullptr;};
    void deletePaidBackupSize() { this->paidBackupSize_ = nullptr;};
    inline int64_t paidBackupSize() const { DARABONBA_PTR_GET_DEFAULT(paidBackupSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setPaidBackupSize(int64_t paidBackupSize) { DARABONBA_PTR_SET_VALUE(paidBackupSize_, paidBackupSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLSize Field Functions 
    bool hasSQLSize() const { return this->SQLSize_ != nullptr;};
    void deleteSQLSize() { this->SQLSize_ = nullptr;};
    inline int64_t SQLSize() const { DARABONBA_PTR_GET_DEFAULT(SQLSize_, 0L) };
    inline DescribeResourceUsageResponseBody& setSQLSize(int64_t SQLSize) { DARABONBA_PTR_SET_VALUE(SQLSize_, SQLSize) };


  protected:
    // The storage that is occupied by archived backup files on the instance. Unit: bytes.
    std::shared_ptr<int64_t> archiveBackupSize_ = nullptr;
    // The storage that is occupied by data backup files, excluding archived backup files, on the instance. Unit: bytes.
    std::shared_ptr<int64_t> backupDataSize_ = nullptr;
    // The storage capacity that is used to store the snapshot backup files of the **RDS for SQL Server** instance. Unit: bytes. The value 0 indicates that no snapshot backup files are stored for the instance.
    std::shared_ptr<string> backupEcsSnapshotSize_ = nullptr;
    // The storage that is occupied by log backup files, excluding archived backup files, on the instance. Unit: bytes.
    std::shared_ptr<int64_t> backupLogSize_ = nullptr;
    // The size of data backup files that are stored in Object Storage Service (OSS) buckets. Unit: bytes. The value 0 indicates no data backup files are stored in OSS buckets.
    std::shared_ptr<int64_t> backupOssDataSize_ = nullptr;
    // The size of log backup files that are stored in OSS buckets. Unit: bytes. The value 0 indicates no log backup files are stored in OSS buckets.
    std::shared_ptr<int64_t> backupOssLogSize_ = nullptr;
    // The storage that is used to store backup files. Unit: bytes. The value -1 indicates that no backup files are stored.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The storage that is used to store cold backup files. Unit: bytes. The value -1 indicates that no cold backup files are stored.
    std::shared_ptr<int64_t> coldBackupSize_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The storage that is used to store data files. Unit: bytes. The value -1 indicates that no data files are stored.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The total storage that is occupied by data files and log files on the instance. Unit: bytes. The value -1 indicates that no data files or log files are stored on the instance.
    std::shared_ptr<int64_t> diskUsed_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The storage that is used to store log files. Unit: bytes. The value -1 indicates that no log files are stored.
    std::shared_ptr<int64_t> logSize_ = nullptr;
    // The backup storage for which you must pay. The system provides a free quota on backup storage. You must pay for the backup storage that exceeds the free quota. Unit: bytes.
    std::shared_ptr<int64_t> paidBackupSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The storage that is occupied to execute SQL statements on the instance. Unit: bytes. The value -1 indicates that no SQL statements are executed.
    std::shared_ptr<int64_t> SQLSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
