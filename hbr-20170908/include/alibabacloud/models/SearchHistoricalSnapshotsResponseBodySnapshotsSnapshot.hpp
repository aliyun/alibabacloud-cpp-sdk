// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODYSNAPSHOTSSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_TO_JSON(ArchiveTime, archiveTime_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
      DARABONBA_PTR_TO_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_TO_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceParentSnapshotHash, sourceParentSnapshotHash_);
      DARABONBA_PTR_TO_JSON(SourceSnapshotHash, sourceSnapshotHash_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(UseCommonNas, useCommonNas_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_FROM_JSON(ArchiveTime, archiveTime_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
      DARABONBA_PTR_FROM_JSON(RangeEnd, rangeEnd_);
      DARABONBA_PTR_FROM_JSON(RangeStart, rangeStart_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceParentSnapshotHash, sourceParentSnapshotHash_);
      DARABONBA_PTR_FROM_JSON(SourceSnapshotHash, sourceSnapshotHash_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(UseCommonNas, useCommonNas_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot() = default ;
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot(const SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot &) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot(SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot &&) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot() = default ;
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& operator=(const SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot &) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& operator=(SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualBytes_ != nullptr
        && this->actualItems_ != nullptr && this->archiveTime_ != nullptr && this->backupType_ != nullptr && this->bucket_ != nullptr && this->bytesDone_ != nullptr
        && this->bytesTotal_ != nullptr && this->clientId_ != nullptr && this->completeTime_ != nullptr && this->createTime_ != nullptr && this->createdTime_ != nullptr
        && this->errorFile_ != nullptr && this->exclude_ != nullptr && this->expireTime_ != nullptr && this->fileSystemId_ != nullptr && this->include_ != nullptr
        && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->itemsDone_ != nullptr && this->itemsTotal_ != nullptr && this->jobId_ != nullptr
        && this->parentSnapshotHash_ != nullptr && this->path_ != nullptr && this->paths_ != nullptr && this->prefix_ != nullptr && this->protectedDataSize_ != nullptr
        && this->rangeEnd_ != nullptr && this->rangeStart_ != nullptr && this->retention_ != nullptr && this->snapshotHash_ != nullptr && this->snapshotId_ != nullptr
        && this->sourceParentSnapshotHash_ != nullptr && this->sourceSnapshotHash_ != nullptr && this->sourceType_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->storageClass_ != nullptr && this->tableName_ != nullptr && this->updatedTime_ != nullptr && this->useCommonNas_ != nullptr && this->vaultId_ != nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // actualItems Field Functions 
    bool hasActualItems() const { return this->actualItems_ != nullptr;};
    void deleteActualItems() { this->actualItems_ = nullptr;};
    inline int64_t actualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


    // archiveTime Field Functions 
    bool hasArchiveTime() const { return this->archiveTime_ != nullptr;};
    void deleteArchiveTime() { this->archiveTime_ = nullptr;};
    inline int64_t archiveTime() const { DARABONBA_PTR_GET_DEFAULT(archiveTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setArchiveTime(int64_t archiveTime) { DARABONBA_PTR_SET_VALUE(archiveTime_, archiveTime) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // errorFile Field Functions 
    bool hasErrorFile() const { return this->errorFile_ != nullptr;};
    void deleteErrorFile() { this->errorFile_ = nullptr;};
    inline string errorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // itemsDone Field Functions 
    bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
    void deleteItemsDone() { this->itemsDone_ = nullptr;};
    inline int64_t itemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


    // itemsTotal Field Functions 
    bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
    void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
    inline int64_t itemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // parentSnapshotHash Field Functions 
    bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
    void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
    inline string parentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths & paths() const { DARABONBA_PTR_GET_CONST(paths_, Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths) };
    inline Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths paths() { DARABONBA_PTR_GET(paths_, Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setPaths(const Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setPaths(Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // protectedDataSize Field Functions 
    bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
    void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
    inline int64_t protectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


    // rangeEnd Field Functions 
    bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
    void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
    inline int64_t rangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setRangeEnd(int64_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


    // rangeStart Field Functions 
    bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
    void deleteRangeStart() { this->rangeStart_ = nullptr;};
    inline int64_t rangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setRangeStart(int64_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceParentSnapshotHash Field Functions 
    bool hasSourceParentSnapshotHash() const { return this->sourceParentSnapshotHash_ != nullptr;};
    void deleteSourceParentSnapshotHash() { this->sourceParentSnapshotHash_ = nullptr;};
    inline string sourceParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(sourceParentSnapshotHash_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setSourceParentSnapshotHash(string sourceParentSnapshotHash) { DARABONBA_PTR_SET_VALUE(sourceParentSnapshotHash_, sourceParentSnapshotHash) };


    // sourceSnapshotHash Field Functions 
    bool hasSourceSnapshotHash() const { return this->sourceSnapshotHash_ != nullptr;};
    void deleteSourceSnapshotHash() { this->sourceSnapshotHash_ = nullptr;};
    inline string sourceSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotHash_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setSourceSnapshotHash(string sourceSnapshotHash) { DARABONBA_PTR_SET_VALUE(sourceSnapshotHash_, sourceSnapshotHash) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // useCommonNas Field Functions 
    bool hasUseCommonNas() const { return this->useCommonNas_ != nullptr;};
    void deleteUseCommonNas() { this->useCommonNas_ = nullptr;};
    inline bool useCommonNas() const { DARABONBA_PTR_GET_DEFAULT(useCommonNas_, false) };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setUseCommonNas(bool useCommonNas) { DARABONBA_PTR_SET_VALUE(useCommonNas_, useCommonNas) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // The actual number of backup snapshots.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> actualItems_ = nullptr;
    // Time to archive
    std::shared_ptr<int64_t> archiveTime_ = nullptr;
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the name of the OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The actual amount of data that is generated by incremental backups. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The total amount of data. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the HBR client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the time when the file system was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The files that record the information about backup failures, including the information about partially completed backups.
    std::shared_ptr<string> errorFile_ = nullptr;
    // Backup paths not included in the backup job.
    std::shared_ptr<string> exclude_ = nullptr;
    // The time when the snapshot expired. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the NAS file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // Backup paths included in the backup job.
    std::shared_ptr<string> include_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Tablestore instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The number of objects that are backed up.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> itemsDone_ = nullptr;
    // The total number of objects in the data source.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> itemsTotal_ = nullptr;
    // The ID of the backup job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The hash value of the parent backup snapshot.
    std::shared_ptr<string> parentSnapshotHash_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the path to the files that are backed up.
    std::shared_ptr<string> path_ = nullptr;
    // The source paths.
    std::shared_ptr<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshotPaths> paths_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the prefix of objects that are backed up.
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<int64_t> protectedDataSize_ = nullptr;
    // The time when the backup job ended. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> rangeEnd_ = nullptr;
    // The time when the backup job started. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> rangeStart_ = nullptr;
    // The retention period of the backup snapshot. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The hash value of the backup snapshot.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // Parent snapshot HASH value before archiving.
    std::shared_ptr<string> sourceParentSnapshotHash_ = nullptr;
    // Snapshot HASH value before archiving
    std::shared_ptr<string> sourceSnapshotHash_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: backup snapshots for ECS files
    // *   **OSS**: backup snapshots for OSS buckets
    // *   **NAS**: backup snapshots for NAS file systems
    std::shared_ptr<string> sourceType_ = nullptr;
    // The time when the backup snapshot started. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the backup job. Valid values:
    // 
    // *   **COMPLETE**: The backup job is completed.
    // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
    // *   **FAILED**: The backup job has failed.
    std::shared_ptr<string> status_ = nullptr;
    // Storage type. Values: 
    // - **Standard**: Standard. 
    // - **Archive**: Archive. 
    // - **ColdArchive**: Cold Archive.
    std::shared_ptr<string> storageClass_ = nullptr;
    // The name of a table in the Tablestore instance.
    std::shared_ptr<string> tableName_ = nullptr;
    // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // Whether to use local NAS.
    std::shared_ptr<bool> useCommonNas_ = nullptr;
    // The ID of the backup vault that stores the backup snapshot.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
