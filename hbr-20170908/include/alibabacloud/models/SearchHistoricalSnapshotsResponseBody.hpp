// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchHistoricalSnapshotsResponseBody() = default ;
    SearchHistoricalSnapshotsResponseBody(const SearchHistoricalSnapshotsResponseBody &) = default ;
    SearchHistoricalSnapshotsResponseBody(SearchHistoricalSnapshotsResponseBody &&) = default ;
    SearchHistoricalSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsResponseBody() = default ;
    SearchHistoricalSnapshotsResponseBody& operator=(const SearchHistoricalSnapshotsResponseBody &) = default ;
    SearchHistoricalSnapshotsResponseBody& operator=(SearchHistoricalSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
      };
      Snapshots() = default ;
      Snapshots(const Snapshots &) = default ;
      Snapshots(Snapshots &&) = default ;
      Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshots() = default ;
      Snapshots& operator=(const Snapshots &) = default ;
      Snapshots& operator=(Snapshots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Snapshot : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
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
        Snapshot() = default ;
        Snapshot(const Snapshot &) = default ;
        Snapshot(Snapshot &&) = default ;
        Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Snapshot() = default ;
        Snapshot& operator=(const Snapshot &) = default ;
        Snapshot& operator=(Snapshot &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
          };
          Paths() = default ;
          Paths(const Paths &) = default ;
          Paths(Paths &&) = default ;
          Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Paths() = default ;
          Paths& operator=(const Paths &) = default ;
          Paths& operator=(Paths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
          inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
          inline Paths& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
          inline Paths& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


        protected:
          shared_ptr<vector<string>> path_ {};
        };

        virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->actualItems_ == nullptr && this->archiveTime_ == nullptr && this->backupType_ == nullptr && this->bucket_ == nullptr && this->bytesDone_ == nullptr
        && this->bytesTotal_ == nullptr && this->clientId_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->createdTime_ == nullptr
        && this->errorFile_ == nullptr && this->exclude_ == nullptr && this->expireTime_ == nullptr && this->fileSystemId_ == nullptr && this->include_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr && this->jobId_ == nullptr
        && this->parentSnapshotHash_ == nullptr && this->path_ == nullptr && this->paths_ == nullptr && this->prefix_ == nullptr && this->protectedDataSize_ == nullptr
        && this->rangeEnd_ == nullptr && this->rangeStart_ == nullptr && this->retention_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr
        && this->sourceParentSnapshotHash_ == nullptr && this->sourceSnapshotHash_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->storageClass_ == nullptr && this->tableName_ == nullptr && this->updatedTime_ == nullptr && this->useCommonNas_ == nullptr && this->vaultId_ == nullptr; };
        // actualBytes Field Functions 
        bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
        void deleteActualBytes() { this->actualBytes_ = nullptr;};
        inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
        inline Snapshot& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


        // actualItems Field Functions 
        bool hasActualItems() const { return this->actualItems_ != nullptr;};
        void deleteActualItems() { this->actualItems_ = nullptr;};
        inline int64_t getActualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
        inline Snapshot& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


        // archiveTime Field Functions 
        bool hasArchiveTime() const { return this->archiveTime_ != nullptr;};
        void deleteArchiveTime() { this->archiveTime_ = nullptr;};
        inline int64_t getArchiveTime() const { DARABONBA_PTR_GET_DEFAULT(archiveTime_, 0L) };
        inline Snapshot& setArchiveTime(int64_t archiveTime) { DARABONBA_PTR_SET_VALUE(archiveTime_, archiveTime) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Snapshot& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline Snapshot& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // bytesDone Field Functions 
        bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
        void deleteBytesDone() { this->bytesDone_ = nullptr;};
        inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
        inline Snapshot& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


        // bytesTotal Field Functions 
        bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
        void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
        inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
        inline Snapshot& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Snapshot& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
        inline Snapshot& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Snapshot& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Snapshot& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // errorFile Field Functions 
        bool hasErrorFile() const { return this->errorFile_ != nullptr;};
        void deleteErrorFile() { this->errorFile_ = nullptr;};
        inline string getErrorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
        inline Snapshot& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


        // exclude Field Functions 
        bool hasExclude() const { return this->exclude_ != nullptr;};
        void deleteExclude() { this->exclude_ = nullptr;};
        inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
        inline Snapshot& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline Snapshot& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline Snapshot& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // include Field Functions 
        bool hasInclude() const { return this->include_ != nullptr;};
        void deleteInclude() { this->include_ = nullptr;};
        inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
        inline Snapshot& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Snapshot& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Snapshot& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // itemsDone Field Functions 
        bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
        void deleteItemsDone() { this->itemsDone_ = nullptr;};
        inline int64_t getItemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
        inline Snapshot& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


        // itemsTotal Field Functions 
        bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
        void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
        inline int64_t getItemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
        inline Snapshot& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Snapshot& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // parentSnapshotHash Field Functions 
        bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
        void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
        inline string getParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
        inline Snapshot& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Snapshot& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const Snapshot::Paths & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, Snapshot::Paths) };
        inline Snapshot::Paths getPaths() { DARABONBA_PTR_GET(paths_, Snapshot::Paths) };
        inline Snapshot& setPaths(const Snapshot::Paths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Snapshot& setPaths(Snapshot::Paths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
        inline Snapshot& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


        // protectedDataSize Field Functions 
        bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
        void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
        inline int64_t getProtectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
        inline Snapshot& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


        // rangeEnd Field Functions 
        bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
        void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
        inline int64_t getRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0L) };
        inline Snapshot& setRangeEnd(int64_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


        // rangeStart Field Functions 
        bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
        void deleteRangeStart() { this->rangeStart_ = nullptr;};
        inline int64_t getRangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0L) };
        inline Snapshot& setRangeStart(int64_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
        inline Snapshot& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


        // snapshotHash Field Functions 
        bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
        void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
        inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
        inline Snapshot& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // sourceParentSnapshotHash Field Functions 
        bool hasSourceParentSnapshotHash() const { return this->sourceParentSnapshotHash_ != nullptr;};
        void deleteSourceParentSnapshotHash() { this->sourceParentSnapshotHash_ = nullptr;};
        inline string getSourceParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(sourceParentSnapshotHash_, "") };
        inline Snapshot& setSourceParentSnapshotHash(string sourceParentSnapshotHash) { DARABONBA_PTR_SET_VALUE(sourceParentSnapshotHash_, sourceParentSnapshotHash) };


        // sourceSnapshotHash Field Functions 
        bool hasSourceSnapshotHash() const { return this->sourceSnapshotHash_ != nullptr;};
        void deleteSourceSnapshotHash() { this->sourceSnapshotHash_ = nullptr;};
        inline string getSourceSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotHash_, "") };
        inline Snapshot& setSourceSnapshotHash(string sourceSnapshotHash) { DARABONBA_PTR_SET_VALUE(sourceSnapshotHash_, sourceSnapshotHash) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Snapshot& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Snapshot& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Snapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline Snapshot& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Snapshot& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline Snapshot& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // useCommonNas Field Functions 
        bool hasUseCommonNas() const { return this->useCommonNas_ != nullptr;};
        void deleteUseCommonNas() { this->useCommonNas_ = nullptr;};
        inline bool getUseCommonNas() const { DARABONBA_PTR_GET_DEFAULT(useCommonNas_, false) };
        inline Snapshot& setUseCommonNas(bool useCommonNas) { DARABONBA_PTR_SET_VALUE(useCommonNas_, useCommonNas) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline Snapshot& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
        shared_ptr<int64_t> actualBytes_ {};
        // The actual number of backup snapshots.
        // 
        // >  This parameter is available only for file backup.
        shared_ptr<int64_t> actualItems_ {};
        // Time to archive
        shared_ptr<int64_t> archiveTime_ {};
        // The backup type. Valid value: **COMPLETE**, which indicates full backup.
        shared_ptr<string> backupType_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the name of the OSS bucket.
        shared_ptr<string> bucket_ {};
        // The actual amount of data that is generated by incremental backups. Unit: bytes.
        shared_ptr<int64_t> bytesDone_ {};
        // The total amount of data. Unit: bytes.
        shared_ptr<int64_t> bytesTotal_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the HBR client.
        shared_ptr<string> clientId_ {};
        // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> completeTime_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the time when the file system was created. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createTime_ {};
        // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createdTime_ {};
        // The files that record the information about backup failures, including the information about partially completed backups.
        shared_ptr<string> errorFile_ {};
        // Backup paths not included in the backup job.
        shared_ptr<string> exclude_ {};
        // The time when the snapshot expired. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> expireTime_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the NAS file system.
        shared_ptr<string> fileSystemId_ {};
        // Backup paths included in the backup job.
        shared_ptr<string> include_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the ECS instance.
        shared_ptr<string> instanceId_ {};
        // The name of the Tablestore instance.
        shared_ptr<string> instanceName_ {};
        // The number of objects that are backed up.
        // 
        // >  This parameter is available only for file backup.
        shared_ptr<int64_t> itemsDone_ {};
        // The total number of objects in the data source.
        // 
        // >  This parameter is available only for file backup.
        shared_ptr<int64_t> itemsTotal_ {};
        // The ID of the backup job.
        shared_ptr<string> jobId_ {};
        // The hash value of the parent backup snapshot.
        shared_ptr<string> parentSnapshotHash_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the path to the files that are backed up.
        shared_ptr<string> path_ {};
        // The source paths.
        shared_ptr<Snapshot::Paths> paths_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the prefix of objects that are backed up.
        shared_ptr<string> prefix_ {};
        shared_ptr<int64_t> protectedDataSize_ {};
        // The time when the backup job ended. The value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> rangeEnd_ {};
        // The time when the backup job started. The value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> rangeStart_ {};
        // The retention period of the backup snapshot. Unit: days.
        shared_ptr<int64_t> retention_ {};
        // The hash value of the backup snapshot.
        shared_ptr<string> snapshotHash_ {};
        // The ID of the backup snapshot.
        shared_ptr<string> snapshotId_ {};
        // Parent snapshot HASH value before archiving.
        shared_ptr<string> sourceParentSnapshotHash_ {};
        // Snapshot HASH value before archiving
        shared_ptr<string> sourceSnapshotHash_ {};
        // The type of the data source. Valid values:
        // 
        // *   **ECS_FILE**: backup snapshots for ECS files
        // *   **OSS**: backup snapshots for OSS buckets
        // *   **NAS**: backup snapshots for NAS file systems
        shared_ptr<string> sourceType_ {};
        // The time when the backup snapshot started. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
        // The status of the backup job. Valid values:
        // 
        // *   **COMPLETE**: The backup job is completed.
        // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
        // *   **FAILED**: The backup job has failed.
        shared_ptr<string> status_ {};
        // Storage type. Values: 
        // - **Standard**: Standard. 
        // - **Archive**: Archive. 
        // - **ColdArchive**: Cold Archive.
        shared_ptr<string> storageClass_ {};
        // The name of a table in the Tablestore instance.
        shared_ptr<string> tableName_ {};
        // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
        // Whether to use local NAS.
        shared_ptr<bool> useCommonNas_ {};
        // The ID of the backup vault that stores the backup snapshot.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->snapshot_ == nullptr; };
      // snapshot Field Functions 
      bool hasSnapshot() const { return this->snapshot_ != nullptr;};
      void deleteSnapshot() { this->snapshot_ = nullptr;};
      inline const vector<Snapshots::Snapshot> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Snapshots::Snapshot>) };
      inline vector<Snapshots::Snapshot> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<Snapshots::Snapshot>) };
      inline Snapshots& setSnapshot(const vector<Snapshots::Snapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
      inline Snapshots& setSnapshot(vector<Snapshots::Snapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


    protected:
      shared_ptr<vector<Snapshots::Snapshot>> snapshot_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->limit_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchHistoricalSnapshotsResponseBody& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchHistoricalSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const SearchHistoricalSnapshotsResponseBody::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, SearchHistoricalSnapshotsResponseBody::Snapshots) };
    inline SearchHistoricalSnapshotsResponseBody::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, SearchHistoricalSnapshotsResponseBody::Snapshots) };
    inline SearchHistoricalSnapshotsResponseBody& setSnapshots(const SearchHistoricalSnapshotsResponseBody::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline SearchHistoricalSnapshotsResponseBody& setSnapshots(SearchHistoricalSnapshotsResponseBody::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchHistoricalSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchHistoricalSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The number of historical backup snapshots that are displayed on the current page.
    shared_ptr<int32_t> limit_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The token that is required to obtain the next page of backup snapshots.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The historical backup snapshots.
    shared_ptr<SearchHistoricalSnapshotsResponseBody::Snapshots> snapshots_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned backup snapshots that meet the specified conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
