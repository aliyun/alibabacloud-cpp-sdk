// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCSnapshotsResponseBody() = default ;
    DescribeRCSnapshotsResponseBody(const DescribeRCSnapshotsResponseBody &) = default ;
    DescribeRCSnapshotsResponseBody(DescribeRCSnapshotsResponseBody &&) = default ;
    DescribeRCSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSnapshotsResponseBody() = default ;
    DescribeRCSnapshotsResponseBody& operator=(const DescribeRCSnapshotsResponseBody &) = default ;
    DescribeRCSnapshotsResponseBody& operator=(DescribeRCSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(Available, available_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
        DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
        DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
        DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
        DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
        DARABONBA_PTR_TO_JSON(SourceStorageType, sourceStorageType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(Available, available_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
        DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
        DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
        DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
        DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
        DARABONBA_PTR_FROM_JSON(SourceStorageType, sourceStorageType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->available_ == nullptr
        && this->category_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->encrypted_ == nullptr && this->instantAccess_ == nullptr
        && this->progress_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr
        && this->snapshotType_ == nullptr && this->sourceDiskId_ == nullptr && this->sourceDiskSize_ == nullptr && this->sourceDiskType_ == nullptr && this->sourceStorageType_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->usage_ == nullptr; };
      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
      inline Snapshots& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Snapshots& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Snapshots& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Snapshots& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
      inline Snapshots& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // instantAccess Field Functions 
      bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
      void deleteInstantAccess() { this->instantAccess_ = nullptr;};
      inline bool getInstantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
      inline Snapshots& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


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


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Snapshots& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


      // snapshotType Field Functions 
      bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
      void deleteSnapshotType() { this->snapshotType_ = nullptr;};
      inline string getSnapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
      inline Snapshots& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


      // sourceDiskId Field Functions 
      bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
      void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
      inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
      inline Snapshots& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


      // sourceDiskSize Field Functions 
      bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
      void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
      inline int64_t getSourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, 0L) };
      inline Snapshots& setSourceDiskSize(int64_t sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


      // sourceDiskType Field Functions 
      bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
      void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
      inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
      inline Snapshots& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


      // sourceStorageType Field Functions 
      bool hasSourceStorageType() const { return this->sourceStorageType_ != nullptr;};
      void deleteSourceStorageType() { this->sourceStorageType_ = nullptr;};
      inline string getSourceStorageType() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageType_, "") };
      inline Snapshots& setSourceStorageType(string sourceStorageType) { DARABONBA_PTR_SET_VALUE(sourceStorageType_, sourceStorageType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Snapshots::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Snapshots::Tag>) };
      inline vector<Snapshots::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Snapshots::Tag>) };
      inline Snapshots& setTag(const vector<Snapshots::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Snapshots& setTag(vector<Snapshots::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Snapshots& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // Indicates whether the snapshot can be shared and used to create or roll back a cloud disk. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> available_ {};
      // The snapshot type. Valid values:
      // 
      // *   Standard: standard snapshot
      // *   Flash: local snapshot This value will be deprecated. The local snapshot feature is replaced with the instant access feature.
      // *   archive: archived snapshot
      shared_ptr<string> category_ {};
      // The creation time. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The snapshot description.
      shared_ptr<string> description_ {};
      // Indicates whether the snapshot was encrypted. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> encrypted_ {};
      // This parameter is deprecated.
      shared_ptr<bool> instantAccess_ {};
      // The progress of the snapshot creation task in percentage.
      shared_ptr<string> progress_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      // The snapshot ID.
      shared_ptr<string> snapshotId_ {};
      // The snapshot name.
      shared_ptr<string> snapshotName_ {};
      // The snapshot type. Valid values:
      // 
      // *   auto or timer: automatically created snapshot
      // *   user: manually created snapshot
      // *   all: all snapshot types
      shared_ptr<string> snapshotType_ {};
      // The ID of the original disk. This parameter is retained even after the original disk for which the snapshot was created is released.
      shared_ptr<string> sourceDiskId_ {};
      // The storage capacity of the original disk. Unit: GiB.
      shared_ptr<int64_t> sourceDiskSize_ {};
      // The type of the original disk. Valid values:
      // 
      // *   SYSTEM: system disk
      // *   DATA: data disk
      shared_ptr<string> sourceDiskType_ {};
      // The type of the source disk.
      // 
      // >  This parameter will be removed in the future. To ensure future compatibility, we recommend that you use other parameters.
      shared_ptr<string> sourceStorageType_ {};
      // The snapshot status. Valid values:
      // 
      // *   progressing: The snapshot is being created.
      // *   accomplished: The snapshot is created.
      // *   failed: The snapshot fails to be created.
      shared_ptr<string> status_ {};
      shared_ptr<vector<Snapshots::Tag>> tag_ {};
      // Indicates whether the snapshot is used to create custom images or disks. Valid values:
      // 
      // *   image: The snapshot is used to create custom images.
      // *   disk: The snapshot is used to create disks.
      // *   image_disk: The snapshot is used to create custom images and data disks.
      // *   none: The snapshot is not used to create custom images or disks.
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeRCSnapshotsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRCSnapshotsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeRCSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeRCSnapshotsResponseBody::Snapshots>) };
    inline vector<DescribeRCSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeRCSnapshotsResponseBody::Snapshots>) };
    inline DescribeRCSnapshotsResponseBody& setSnapshots(const vector<DescribeRCSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeRCSnapshotsResponseBody& setSnapshots(vector<DescribeRCSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRCSnapshotsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of snapshots.
    shared_ptr<vector<DescribeRCSnapshotsResponseBody::Snapshots>> snapshots_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
