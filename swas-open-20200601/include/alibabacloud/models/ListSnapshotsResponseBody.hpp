// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
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
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RollbackTime, rollbackTime_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
        DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
        DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RollbackTime, rollbackTime_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
        DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
        DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the snapshot.
        shared_ptr<string> key_ {};
        // The tag value of the snapshot.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->instanceId_ == nullptr && this->progress_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->resourceGroupId_ == nullptr
        && this->rollbackTime_ == nullptr && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->sourceDiskId_ == nullptr && this->sourceDiskType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Snapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Snapshots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Snapshots& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Snapshots& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Snapshots& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Snapshots& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // rollbackTime Field Functions 
      bool hasRollbackTime() const { return this->rollbackTime_ != nullptr;};
      void deleteRollbackTime() { this->rollbackTime_ = nullptr;};
      inline string getRollbackTime() const { DARABONBA_PTR_GET_DEFAULT(rollbackTime_, "") };
      inline Snapshots& setRollbackTime(string rollbackTime) { DARABONBA_PTR_SET_VALUE(rollbackTime_, rollbackTime) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline Snapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // snapshotName Field Functions 
      bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
      void deleteSnapshotName() { this->snapshotName_ = nullptr;};
      inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
      inline Snapshots& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


      // sourceDiskId Field Functions 
      bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
      void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
      inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
      inline Snapshots& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


      // sourceDiskType Field Functions 
      bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
      void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
      inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
      inline Snapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Snapshots::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Snapshots::Tags>) };
      inline vector<Snapshots::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Snapshots::Tags>) };
      inline Snapshots& setTags(const vector<Snapshots::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Snapshots& setTags(vector<Snapshots::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the snapshot was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The instance ID of the simple application server.
      // 
      // Note: This field has a value for system cloud disk snapshots and is empty for data cloud disk snapshots.
      shared_ptr<string> instanceId_ {};
      // The progress of snapshot creation.
      shared_ptr<string> progress_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The remarks of the snapshot.
      shared_ptr<string> remark_ {};
      // The ID of the resource group to which the snapshot belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The time of the most recent rollback. The time is in the UTC (Z) time zone in the YYYY-MM-DDThh:mm:ssZ format.
      shared_ptr<string> rollbackTime_ {};
      // The snapshot ID.
      shared_ptr<string> snapshotId_ {};
      // The snapshot name.
      shared_ptr<string> snapshotName_ {};
      // The ID of the source disk. This value is retained even if the source disk of the snapshot has been released.
      shared_ptr<string> sourceDiskId_ {};
      // The type of the source disk for the snapshot. Valid values:
      // - System: system cloud disk.
      // - Data: data cloud disk.
      shared_ptr<string> sourceDiskType_ {};
      // The snapshot status. Valid values:
      // 
      // - progressing: The snapshot is being created.
      // - accomplished: The snapshot is created.
      // - failed: The snapshot failed to be created.
      // - disabled: Rollback is not supported.
      shared_ptr<string> status_ {};
      // The tags of the snapshot.
      shared_ptr<vector<Snapshots::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSnapshotsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSnapshotsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the snapshot list.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The snapshot information.
    shared_ptr<vector<ListSnapshotsResponseBody::Snapshots>> snapshots_ {};
    // The total number of snapshots.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
