// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ParentSnapshotHash, parentSnapshotHash_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    DescribeSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualBytes_ == nullptr
        && return this->actualItems_ == nullptr && return this->bytesDone_ == nullptr && return this->bytesTotal_ == nullptr && return this->clientId_ == nullptr && return this->clientVersion_ == nullptr
        && return this->createdTime_ == nullptr && return this->errorFile_ == nullptr && return this->instanceId_ == nullptr && return this->itemsDone_ == nullptr && return this->itemsTotal_ == nullptr
        && return this->jobId_ == nullptr && return this->parentSnapshotHash_ == nullptr && return this->path_ == nullptr && return this->paths_ == nullptr && return this->planId_ == nullptr
        && return this->regionId_ == nullptr && return this->retention_ == nullptr && return this->snapshotHash_ == nullptr && return this->snapshotId_ == nullptr && return this->sourceType_ == nullptr
        && return this->status_ == nullptr && return this->uuid_ == nullptr && return this->vaultId_ == nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // actualItems Field Functions 
    bool hasActualItems() const { return this->actualItems_ != nullptr;};
    void deleteActualItems() { this->actualItems_ = nullptr;};
    inline int64_t actualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // errorFile Field Functions 
    bool hasErrorFile() const { return this->errorFile_ != nullptr;};
    void deleteErrorFile() { this->errorFile_ = nullptr;};
    inline string errorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemsDone Field Functions 
    bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
    void deleteItemsDone() { this->itemsDone_ = nullptr;};
    inline int64_t itemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


    // itemsTotal Field Functions 
    bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
    void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
    inline int64_t itemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // parentSnapshotHash Field Functions 
    bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
    void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
    inline string parentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline DescribeSnapshotsResponseBodySnapshots& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline DescribeSnapshotsResponseBodySnapshots& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeSnapshotsResponseBodySnapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeSnapshotsResponseBodySnapshots& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // The actual number of backup objects.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> actualItems_ = nullptr;
    // The actual amount of data that is generated by incremental backup. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The total data amount of the data source. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // This parameter is returned only if the value of the **SourceType** parameter is **ECS_FILE**. This parameter indicates the ID of the Hybrid Backup Recovery (HBR) agent.
    std::shared_ptr<string> clientId_ = nullptr;
    // The version of the anti-ransomware agent.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The file that records the information about backup failures, including the information about partially completed backup tasks.
    std::shared_ptr<string> errorFile_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of backup objects.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> itemsDone_ = nullptr;
    // The total number of objects in the data source.
    // 
    // >  This parameter is available only for file backup.
    std::shared_ptr<int64_t> itemsTotal_ = nullptr;
    // The ID of the backup task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The hash value of the parent backup snapshot.
    std::shared_ptr<string> parentSnapshotHash_ = nullptr;
    // This parameter is returned only if the value of the **SourceType** parameter is **ECS_FILE**. This parameter indicates the path to the backup files.
    std::shared_ptr<string> path_ = nullptr;
    // This parameter is returned only if the value of the **SourceType** parameter is **NAS**. This parameter indicates the path to the backup files.
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // The ID of the backup plan.
    std::shared_ptr<string> planId_ = nullptr;
    // The ID of the region in which backup snapshot is stored.
    std::shared_ptr<string> regionId_ = nullptr;
    // The retention period of the backup snapshot.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The hash value of the backup snapshot.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: ECS files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: File Storage NAS file systems
    // *   **OTS_TABLE**: Tablestore instances
    std::shared_ptr<string> sourceType_ = nullptr;
    // The status of backup tasks. Valid values:
    // 
    // *   **COMPLETE**: complete
    // *   **PARTIAL_COMPLETE**: partial complete
    // *   **FAILED**: failed
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the backup vault that stores the backup snapshot.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
