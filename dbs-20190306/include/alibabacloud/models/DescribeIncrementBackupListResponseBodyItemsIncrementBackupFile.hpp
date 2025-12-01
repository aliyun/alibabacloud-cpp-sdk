// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODYITEMSINCREMENTBACKUPFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODYITEMSINCREMENTBACKUPFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSetJobId, backupSetJobId_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StorageMethod, storageMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSetJobId, backupSetJobId_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StorageMethod, storageMethod_);
    };
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile() = default ;
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile(const DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile &) = default ;
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile(DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile &&) = default ;
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile() = default ;
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& operator=(const DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile &) = default ;
    DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& operator=(DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetExpiredTime_ == nullptr
        && return this->backupSetId_ == nullptr && return this->backupSetJobId_ == nullptr && return this->backupSize_ == nullptr && return this->backupStatus_ == nullptr && return this->endTime_ == nullptr
        && return this->sourceEndpointIpPort_ == nullptr && return this->startTime_ == nullptr && return this->storageMethod_ == nullptr; };
    // backupSetExpiredTime Field Functions 
    bool hasBackupSetExpiredTime() const { return this->backupSetExpiredTime_ != nullptr;};
    void deleteBackupSetExpiredTime() { this->backupSetExpiredTime_ = nullptr;};
    inline int64_t backupSetExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetExpiredTime_, 0L) };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setBackupSetExpiredTime(int64_t backupSetExpiredTime) { DARABONBA_PTR_SET_VALUE(backupSetExpiredTime_, backupSetExpiredTime) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSetJobId Field Functions 
    bool hasBackupSetJobId() const { return this->backupSetJobId_ != nullptr;};
    void deleteBackupSetJobId() { this->backupSetJobId_ = nullptr;};
    inline string backupSetJobId() const { DARABONBA_PTR_GET_DEFAULT(backupSetJobId_, "") };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setBackupSetJobId(string backupSetJobId) { DARABONBA_PTR_SET_VALUE(backupSetJobId_, backupSetJobId) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sourceEndpointIpPort Field Functions 
    bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
    void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
    inline string sourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storageMethod Field Functions 
    bool hasStorageMethod() const { return this->storageMethod_ != nullptr;};
    void deleteStorageMethod() { this->storageMethod_ = nullptr;};
    inline string storageMethod() const { DARABONBA_PTR_GET_DEFAULT(storageMethod_, "") };
    inline DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile& setStorageMethod(string storageMethod) { DARABONBA_PTR_SET_VALUE(storageMethod_, storageMethod) };


  protected:
    // The point in time when the backup set expires.
    std::shared_ptr<int64_t> backupSetExpiredTime_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The ID of the incremental backup task.
    std::shared_ptr<string> backupSetJobId_ = nullptr;
    // The size of the backup set.
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    // The status of the incremental backup task. Valid values:
    // 
    // *   **INIT**: The incremental backup task is not started.
    // *   **FILLING**: The incremental backup task is in progress.
    // *   **COMPLETED**: The incremental backup task is complete.
    // *   **UNCOMPLETED**: The incremental backup task is not complete.
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The end time of the incremental backup task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The endpoint that is used to connect to the database.
    std::shared_ptr<string> sourceEndpointIpPort_ = nullptr;
    // The start time of the incremental backup task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The storage class of the backup data. Valid values:
    // 
    // *   **Standard**: The storage class is Standard.
    // *   **IA**: The storage class is Infrequent Access (IA).
    // *   **Archive**: The storage class is Archive.
    // *   **UNKNOWN**: The storage class is unknown. This value is returned because the task is not complete.
    std::shared_ptr<string> storageMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
