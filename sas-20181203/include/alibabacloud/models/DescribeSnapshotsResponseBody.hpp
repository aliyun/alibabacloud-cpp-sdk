// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
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
  class DescribeSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
    };
    DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody(DescribeSnapshotsResponseBody &&) = default ;
    DescribeSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody& operator=(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody& operator=(DescribeSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
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
        && this->actualItems_ == nullptr && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr && this->clientId_ == nullptr && this->clientVersion_ == nullptr
        && this->createdTime_ == nullptr && this->errorFile_ == nullptr && this->instanceId_ == nullptr && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr
        && this->jobId_ == nullptr && this->parentSnapshotHash_ == nullptr && this->path_ == nullptr && this->paths_ == nullptr && this->planId_ == nullptr
        && this->regionId_ == nullptr && this->retention_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr && this->vaultId_ == nullptr; };
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


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Snapshots& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


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


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Snapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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


      // parentSnapshotHash Field Functions 
      bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
      void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
      inline string getParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
      inline Snapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


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


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Snapshots& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Snapshots& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline Snapshots& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
      shared_ptr<int64_t> actualBytes_ {};
      // The actual number of backup objects.
      // 
      // >  This parameter is available only for file backup.
      shared_ptr<int64_t> actualItems_ {};
      // The actual amount of data that is generated by incremental backup. Unit: bytes.
      shared_ptr<int64_t> bytesDone_ {};
      // The total data amount of the data source. Unit: bytes.
      shared_ptr<int64_t> bytesTotal_ {};
      // This parameter is returned only if the value of the **SourceType** parameter is **ECS_FILE**. This parameter indicates the ID of the Hybrid Backup Recovery (HBR) agent.
      shared_ptr<string> clientId_ {};
      // The version of the anti-ransomware agent.
      shared_ptr<string> clientVersion_ {};
      // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The file that records the information about backup failures, including the information about partially completed backup tasks.
      shared_ptr<string> errorFile_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The number of backup objects.
      // 
      // >  This parameter is available only for file backup.
      shared_ptr<int64_t> itemsDone_ {};
      // The total number of objects in the data source.
      // 
      // >  This parameter is available only for file backup.
      shared_ptr<int64_t> itemsTotal_ {};
      // The ID of the backup task.
      shared_ptr<string> jobId_ {};
      // The hash value of the parent backup snapshot.
      shared_ptr<string> parentSnapshotHash_ {};
      // This parameter is returned only if the value of the **SourceType** parameter is **ECS_FILE**. This parameter indicates the path to the backup files.
      shared_ptr<string> path_ {};
      // This parameter is returned only if the value of the **SourceType** parameter is **NAS**. This parameter indicates the path to the backup files.
      shared_ptr<vector<string>> paths_ {};
      // The ID of the backup plan.
      shared_ptr<string> planId_ {};
      // The ID of the region in which backup snapshot is stored.
      shared_ptr<string> regionId_ {};
      // The retention period of the backup snapshot.
      shared_ptr<int64_t> retention_ {};
      // The hash value of the backup snapshot.
      shared_ptr<string> snapshotHash_ {};
      // The ID of the backup snapshot.
      shared_ptr<string> snapshotId_ {};
      // The type of the data source. Valid values:
      // 
      // *   **ECS_FILE**: ECS files
      // *   **OSS**: Object Storage Service (OSS) buckets
      // *   **NAS**: File Storage NAS file systems
      // *   **OTS_TABLE**: Tablestore instances
      shared_ptr<string> sourceType_ {};
      // The status of backup tasks. Valid values:
      // 
      // *   **COMPLETE**: complete
      // *   **PARTIAL_COMPLETE**: partial complete
      // *   **FAILED**: failed
      shared_ptr<string> status_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The ID of the backup vault that stores the backup snapshot.
      shared_ptr<string> vaultId_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The token that is used to initiate the next call.
      shared_ptr<string> nextToken_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->snapshots_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSnapshotsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSnapshotsResponseBody::PageInfo) };
    inline DescribeSnapshotsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSnapshotsResponseBody::PageInfo) };
    inline DescribeSnapshotsResponseBody& setPageInfo(const DescribeSnapshotsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSnapshotsResponseBody& setPageInfo(DescribeSnapshotsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeSnapshotsResponseBody::Snapshots>) };
    inline vector<DescribeSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeSnapshotsResponseBody::Snapshots>) };
    inline DescribeSnapshotsResponseBody& setSnapshots(const vector<DescribeSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(vector<DescribeSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


  protected:
    // The pagination information.
    shared_ptr<DescribeSnapshotsResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the backup snapshots.
    shared_ptr<vector<DescribeSnapshotsResponseBody::Snapshots>> snapshots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
