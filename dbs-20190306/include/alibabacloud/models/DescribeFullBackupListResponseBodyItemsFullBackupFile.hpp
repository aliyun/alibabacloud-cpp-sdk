// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODYITEMSFULLBACKUPFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODYITEMSFULLBACKUPFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeFullBackupListResponseBodyItemsFullBackupFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullBackupListResponseBodyItemsFullBackupFile& obj) { 
      DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_TO_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StorageMethod, storageMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullBackupListResponseBodyItemsFullBackupFile& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupSetExpiredTime, backupSetExpiredTime_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StorageMethod, storageMethod_);
    };
    DescribeFullBackupListResponseBodyItemsFullBackupFile() = default ;
    DescribeFullBackupListResponseBodyItemsFullBackupFile(const DescribeFullBackupListResponseBodyItemsFullBackupFile &) = default ;
    DescribeFullBackupListResponseBodyItemsFullBackupFile(DescribeFullBackupListResponseBodyItemsFullBackupFile &&) = default ;
    DescribeFullBackupListResponseBodyItemsFullBackupFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullBackupListResponseBodyItemsFullBackupFile() = default ;
    DescribeFullBackupListResponseBodyItemsFullBackupFile& operator=(const DescribeFullBackupListResponseBodyItemsFullBackupFile &) = default ;
    DescribeFullBackupListResponseBodyItemsFullBackupFile& operator=(DescribeFullBackupListResponseBodyItemsFullBackupFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupObjects_ == nullptr
        && return this->backupSetExpiredTime_ == nullptr && return this->backupSetId_ == nullptr && return this->backupSize_ == nullptr && return this->backupStatus_ == nullptr && return this->createTime_ == nullptr
        && return this->endTime_ == nullptr && return this->errMessage_ == nullptr && return this->finishTime_ == nullptr && return this->sourceEndpointIpPort_ == nullptr && return this->startTime_ == nullptr
        && return this->storageMethod_ == nullptr; };
    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupSetExpiredTime Field Functions 
    bool hasBackupSetExpiredTime() const { return this->backupSetExpiredTime_ != nullptr;};
    void deleteBackupSetExpiredTime() { this->backupSetExpiredTime_ = nullptr;};
    inline int64_t backupSetExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetExpiredTime_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setBackupSetExpiredTime(int64_t backupSetExpiredTime) { DARABONBA_PTR_SET_VALUE(backupSetExpiredTime_, backupSetExpiredTime) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSize Field Functions 
    bool hasBackupSize() const { return this->backupSize_ != nullptr;};
    void deleteBackupSize() { this->backupSize_ = nullptr;};
    inline int64_t backupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // sourceEndpointIpPort Field Functions 
    bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
    void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
    inline string sourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storageMethod Field Functions 
    bool hasStorageMethod() const { return this->storageMethod_ != nullptr;};
    void deleteStorageMethod() { this->storageMethod_ = nullptr;};
    inline string storageMethod() const { DARABONBA_PTR_GET_DEFAULT(storageMethod_, "") };
    inline DescribeFullBackupListResponseBodyItemsFullBackupFile& setStorageMethod(string storageMethod) { DARABONBA_PTR_SET_VALUE(storageMethod_, storageMethod) };


  protected:
    std::shared_ptr<string> backupObjects_ = nullptr;
    std::shared_ptr<int64_t> backupSetExpiredTime_ = nullptr;
    std::shared_ptr<string> backupSetId_ = nullptr;
    std::shared_ptr<int64_t> backupSize_ = nullptr;
    std::shared_ptr<string> backupStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<string> sourceEndpointIpPort_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> storageMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
