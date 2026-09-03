// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
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
  class ListSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody(ListSnapshotsResponseBody &&) = default ;
    ListSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody& operator=(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody& operator=(ListSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_TO_JSON(ActualItems, actualItems_);
        DARABONBA_PTR_TO_JSON(ArchiveTime, archiveTime_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
        DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(ErrorFile, errorFile_);
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Include, include_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
        DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Paths, paths_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_TO_JSON(RangeEnd, rangeEnd_);
        DARABONBA_PTR_TO_JSON(RangeStart, rangeStart_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_FROM_JSON(ActualItems, actualItems_);
        DARABONBA_PTR_FROM_JSON(ArchiveTime, archiveTime_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
        DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(ErrorFile, errorFile_);
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Include, include_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
        DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Paths, paths_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_FROM_JSON(RangeEnd, rangeEnd_);
        DARABONBA_PTR_FROM_JSON(RangeStart, rangeStart_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
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
      virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->actualItems_ == nullptr && this->archiveTime_ == nullptr && this->backupType_ == nullptr && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr
        && this->clientId_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->createdTime_ == nullptr && this->errorFile_ == nullptr
        && this->exclude_ == nullptr && this->expireTime_ == nullptr && this->include_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr && this->jobId_ == nullptr && this->path_ == nullptr && this->paths_ == nullptr
        && this->planId_ == nullptr && this->protectedDataSize_ == nullptr && this->rangeEnd_ == nullptr && this->rangeStart_ == nullptr && this->retention_ == nullptr
        && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr
        && this->tableName_ == nullptr && this->vaultId_ == nullptr; };
      // actualBytes Field Functions 
      bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
      void deleteActualBytes() { this->actualBytes_ = nullptr;};
      inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
      inline Snapshots& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


      // actualItems Field Functions 
      bool hasActualItems() const { return this->actualItems_ != nullptr;};
      void deleteActualItems() { this->actualItems_ = nullptr;};
      inline int64_t getActualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
      inline Snapshots& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


      // archiveTime Field Functions 
      bool hasArchiveTime() const { return this->archiveTime_ != nullptr;};
      void deleteArchiveTime() { this->archiveTime_ = nullptr;};
      inline int64_t getArchiveTime() const { DARABONBA_PTR_GET_DEFAULT(archiveTime_, 0L) };
      inline Snapshots& setArchiveTime(int64_t archiveTime) { DARABONBA_PTR_SET_VALUE(archiveTime_, archiveTime) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Snapshots& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // bytesDone Field Functions 
      bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
      void deleteBytesDone() { this->bytesDone_ = nullptr;};
      inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
      inline Snapshots& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


      // bytesTotal Field Functions 
      bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
      void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
      inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
      inline Snapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Snapshots& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
      inline Snapshots& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Snapshots& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Snapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // errorFile Field Functions 
      bool hasErrorFile() const { return this->errorFile_ != nullptr;};
      void deleteErrorFile() { this->errorFile_ = nullptr;};
      inline string getErrorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
      inline Snapshots& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
      inline Snapshots& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Snapshots& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // include Field Functions 
      bool hasInclude() const { return this->include_ != nullptr;};
      void deleteInclude() { this->include_ = nullptr;};
      inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
      inline Snapshots& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Snapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Snapshots& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // itemsDone Field Functions 
      bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
      void deleteItemsDone() { this->itemsDone_ = nullptr;};
      inline int64_t getItemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
      inline Snapshots& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


      // itemsTotal Field Functions 
      bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
      void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
      inline int64_t getItemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
      inline Snapshots& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Snapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Snapshots& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // paths Field Functions 
      bool hasPaths() const { return this->paths_ != nullptr;};
      void deletePaths() { this->paths_ = nullptr;};
      inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
      inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
      inline Snapshots& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
      inline Snapshots& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Snapshots& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // protectedDataSize Field Functions 
      bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
      void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
      inline int64_t getProtectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
      inline Snapshots& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


      // rangeEnd Field Functions 
      bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
      void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
      inline int64_t getRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0L) };
      inline Snapshots& setRangeEnd(int64_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


      // rangeStart Field Functions 
      bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
      void deleteRangeStart() { this->rangeStart_ = nullptr;};
      inline int64_t getRangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0L) };
      inline Snapshots& setRangeStart(int64_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Snapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // snapshotHash Field Functions 
      bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
      void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
      inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
      inline Snapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline Snapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Snapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline Snapshots& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Snapshots& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline Snapshots& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // The actual amount of data written, in bytes.
      shared_ptr<int64_t> actualBytes_ {};
      // The actual number of nodes.
      shared_ptr<int64_t> actualItems_ {};
      // The time when the backup was archived.
      shared_ptr<int64_t> archiveTime_ {};
      // The backup type. The value is **COMPLETE**, which indicates a full backup.
      shared_ptr<string> backupType_ {};
      // The amount of data that has been backed up, in bytes.
      shared_ptr<int64_t> bytesDone_ {};
      // The total amount of data to back up, in bytes.
      shared_ptr<int64_t> bytesTotal_ {};
      // When **SourceType** is set to **ECS_FILE** or **File**, this parameter indicates the backup client ID. In other cases, it indicates the ID of the backup data source.
      shared_ptr<string> clientId_ {};
      // The backup completion time. A UNIX timestamp, in seconds.
      shared_ptr<int64_t> completeTime_ {};
      // The time when the backup point was created, in seconds.
      shared_ptr<int64_t> createTime_ {};
      // The time when the backup was created.
      shared_ptr<int64_t> createdTime_ {};
      // The file that records backup failure information, including information about partially completed backups.
      shared_ptr<string> errorFile_ {};
      // The source paths excluded from the backup job.
      shared_ptr<string> exclude_ {};
      // The backup expiration time.
      shared_ptr<int64_t> expireTime_ {};
      // The source paths included in the backup job.
      shared_ptr<string> include_ {};
      // The instance ID of the backup data source.
      shared_ptr<string> instanceId_ {};
      // The Tablestore instance name.
      shared_ptr<string> instanceName_ {};
      // The number of nodes that have been backed up.
      shared_ptr<int64_t> itemsDone_ {};
      // The total number of nodes to back up.
      shared_ptr<int64_t> itemsTotal_ {};
      // The backup job ID.
      shared_ptr<string> jobId_ {};
      // The source path.
      shared_ptr<string> path_ {};
      // The list of source paths.
      shared_ptr<vector<string>> paths_ {};
      // The backup plan ID.
      shared_ptr<string> planId_ {};
      // The protected source data size, in bytes. When SourceType is set to ECS_FILE, this indicates the protected cloud disk capacity.
      shared_ptr<int64_t> protectedDataSize_ {};
      // The end time of the Tablestore backup job execution. A UNIX timestamp, in milliseconds.
      shared_ptr<int64_t> rangeEnd_ {};
      // The start time of the Tablestore backup job execution. A UNIX timestamp, in milliseconds.
      shared_ptr<int64_t> rangeStart_ {};
      // The retention period of the backup, in days.
      shared_ptr<int64_t> retention_ {};
      // The hash value of the backup point.
      shared_ptr<string> snapshotHash_ {};
      // The backup point ID.
      shared_ptr<string> snapshotId_ {};
      // The data source type. Valid values:
      // 
      // - **ECS_FILE**: ECS file backup
      // - **File**: On-premises file backup
      // - **OSS**: OSS backup
      // - **NAS**: Alibaba Cloud NAS backup
      // - **COMMON_NAS**: On-premises NAS backup
      // - **CONTAINER**: Container backup
      // - **OTS_TABLE**: Tablestore backup
      // - **COMMON_FILE_SYSTEM**: CPFS backup
      shared_ptr<string> sourceType_ {};
      // The backup point status.
      shared_ptr<string> status_ {};
      // The storage class.
      shared_ptr<string> storageClass_ {};
      // The name of the data table in the Tablestore instance.
      shared_ptr<string> tableName_ {};
      // The ID of the vault that stores the backup data.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSnapshotsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<ListSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<ListSnapshotsResponseBody::Snapshots>) };
    inline vector<ListSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<ListSnapshotsResponseBody::Snapshots>) };
    inline ListSnapshotsResponseBody& setSnapshots(const vector<ListSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline ListSnapshotsResponseBody& setSnapshots(vector<ListSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The maximum number of results returned.
    shared_ptr<int32_t> maxResults_ {};
    // The return message. The value "successful" is returned for successful requests. An error message is returned for failed requests.
    shared_ptr<string> message_ {};
    // The token for the next page. An empty NextToken indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of backup points.
    shared_ptr<vector<ListSnapshotsResponseBody::Snapshots>> snapshots_ {};
    // Indicates whether the request was successful.
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
