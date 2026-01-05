// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
          DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_TO_JSON(SnapshotLinkId, snapshotLinkId_);
          DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_TO_JSON(SnapshotSN, snapshotSN_);
          DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
          DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
          DARABONBA_PTR_TO_JSON(SourceDiskSize, sourceDiskSize_);
          DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
          DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
          DARABONBA_PTR_TO_JSON(SourceSnapshotId, sourceSnapshotId_);
          DARABONBA_PTR_TO_JSON(SourceStorageType, sourceStorageType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
          DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
          DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_FROM_JSON(SnapshotLinkId, snapshotLinkId_);
          DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_FROM_JSON(SnapshotSN, snapshotSN_);
          DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
          DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
          DARABONBA_PTR_FROM_JSON(SourceDiskSize, sourceDiskSize_);
          DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
          DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
          DARABONBA_PTR_FROM_JSON(SourceSnapshotId, sourceSnapshotId_);
          DARABONBA_PTR_FROM_JSON(SourceStorageType, sourceStorageType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
            // The tag key of the snapshot.
            shared_ptr<string> tagKey_ {};
            // The tag value of the snapshot.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->available_ == nullptr
        && this->category_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->encrypted_ == nullptr && this->instantAccess_ == nullptr
        && this->instantAccessRetentionDays_ == nullptr && this->KMSKeyId_ == nullptr && this->lastModifiedTime_ == nullptr && this->productCode_ == nullptr && this->progress_ == nullptr
        && this->regionId_ == nullptr && this->remainTime_ == nullptr && this->resourceGroupId_ == nullptr && this->retentionDays_ == nullptr && this->snapshotId_ == nullptr
        && this->snapshotLinkId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotSN_ == nullptr && this->snapshotType_ == nullptr && this->sourceDiskId_ == nullptr
        && this->sourceDiskSize_ == nullptr && this->sourceDiskType_ == nullptr && this->sourceRegionId_ == nullptr && this->sourceSnapshotId_ == nullptr && this->sourceStorageType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->usage_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline Snapshot& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Snapshot& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Snapshot& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Snapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline Snapshot& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // instantAccess Field Functions 
        bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
        void deleteInstantAccess() { this->instantAccess_ = nullptr;};
        inline bool getInstantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
        inline Snapshot& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


        // instantAccessRetentionDays Field Functions 
        bool hasInstantAccessRetentionDays() const { return this->instantAccessRetentionDays_ != nullptr;};
        void deleteInstantAccessRetentionDays() { this->instantAccessRetentionDays_ = nullptr;};
        inline int32_t getInstantAccessRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(instantAccessRetentionDays_, 0) };
        inline Snapshot& setInstantAccessRetentionDays(int32_t instantAccessRetentionDays) { DARABONBA_PTR_SET_VALUE(instantAccessRetentionDays_, instantAccessRetentionDays) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline Snapshot& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // lastModifiedTime Field Functions 
        bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
        void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
        inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
        inline Snapshot& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Snapshot& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline Snapshot& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Snapshot& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remainTime Field Functions 
        bool hasRemainTime() const { return this->remainTime_ != nullptr;};
        void deleteRemainTime() { this->remainTime_ = nullptr;};
        inline int32_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
        inline Snapshot& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Snapshot& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
        inline Snapshot& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // snapshotLinkId Field Functions 
        bool hasSnapshotLinkId() const { return this->snapshotLinkId_ != nullptr;};
        void deleteSnapshotLinkId() { this->snapshotLinkId_ = nullptr;};
        inline string getSnapshotLinkId() const { DARABONBA_PTR_GET_DEFAULT(snapshotLinkId_, "") };
        inline Snapshot& setSnapshotLinkId(string snapshotLinkId) { DARABONBA_PTR_SET_VALUE(snapshotLinkId_, snapshotLinkId) };


        // snapshotName Field Functions 
        bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
        void deleteSnapshotName() { this->snapshotName_ = nullptr;};
        inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
        inline Snapshot& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


        // snapshotSN Field Functions 
        bool hasSnapshotSN() const { return this->snapshotSN_ != nullptr;};
        void deleteSnapshotSN() { this->snapshotSN_ = nullptr;};
        inline string getSnapshotSN() const { DARABONBA_PTR_GET_DEFAULT(snapshotSN_, "") };
        inline Snapshot& setSnapshotSN(string snapshotSN) { DARABONBA_PTR_SET_VALUE(snapshotSN_, snapshotSN) };


        // snapshotType Field Functions 
        bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
        void deleteSnapshotType() { this->snapshotType_ = nullptr;};
        inline string getSnapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
        inline Snapshot& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


        // sourceDiskId Field Functions 
        bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
        void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
        inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
        inline Snapshot& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


        // sourceDiskSize Field Functions 
        bool hasSourceDiskSize() const { return this->sourceDiskSize_ != nullptr;};
        void deleteSourceDiskSize() { this->sourceDiskSize_ = nullptr;};
        inline string getSourceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskSize_, "") };
        inline Snapshot& setSourceDiskSize(string sourceDiskSize) { DARABONBA_PTR_SET_VALUE(sourceDiskSize_, sourceDiskSize) };


        // sourceDiskType Field Functions 
        bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
        void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
        inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
        inline Snapshot& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


        // sourceRegionId Field Functions 
        bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
        void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
        inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
        inline Snapshot& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


        // sourceSnapshotId Field Functions 
        bool hasSourceSnapshotId() const { return this->sourceSnapshotId_ != nullptr;};
        void deleteSourceSnapshotId() { this->sourceSnapshotId_ = nullptr;};
        inline string getSourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(sourceSnapshotId_, "") };
        inline Snapshot& setSourceSnapshotId(string sourceSnapshotId) { DARABONBA_PTR_SET_VALUE(sourceSnapshotId_, sourceSnapshotId) };


        // sourceStorageType Field Functions 
        bool hasSourceStorageType() const { return this->sourceStorageType_ != nullptr;};
        void deleteSourceStorageType() { this->sourceStorageType_ = nullptr;};
        inline string getSourceStorageType() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageType_, "") };
        inline Snapshot& setSourceStorageType(string sourceStorageType) { DARABONBA_PTR_SET_VALUE(sourceStorageType_, sourceStorageType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Snapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Snapshot::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Snapshot::Tags) };
        inline Snapshot::Tags getTags() { DARABONBA_PTR_GET(tags_, Snapshot::Tags) };
        inline Snapshot& setTags(const Snapshot::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Snapshot& setTags(Snapshot::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline Snapshot& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        // Indicates whether the snapshot can be shared and be used to create or roll back a cloud disk. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> available_ {};
        // The category of the snapshot. Valid values:
        // 
        // *   Standard: standard snapshot.
        // *   Flash: local snapshot. This value will be deprecated. The local snapshot feature is replaced by the instant access feature.
        // *   archive: archive snapshot.
        shared_ptr<string> category_ {};
        // The time when the snapshot was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the snapshot.
        shared_ptr<string> description_ {};
        // Indicates whether the snapshot was encrypted. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> encrypted_ {};
        // Indicates whether the instant access feature is enabled. Valid values:
        // 
        // *   true: The instant access feature is enabled. By default, the instant access feature is enabled for Enterprise SSDs (ESSDs) and ESSD Entry disks.
        // *   false: The instant access feature is disabled. The snapshot is a standard snapshot for which the instant access feature is disabled.
        // 
        // >  This parameter is deprecated. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
        shared_ptr<bool> instantAccess_ {};
        // Indicates the validity period of the instant access feature. When the validity period ends, the instant access feature is automatically disabled.
        // 
        // By default, the value of this parameter is the same as the value of `RetentionDays`.
        // 
        // >  This parameter is deprecated. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
        shared_ptr<int32_t> instantAccessRetentionDays_ {};
        // The ID of the KMS key used for the data disk.
        shared_ptr<string> KMSKeyId_ {};
        // The time when the snapshot was last modified. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> lastModifiedTime_ {};
        // The product code of the Alibaba Cloud Marketplace image.
        shared_ptr<string> productCode_ {};
        // The progress of the snapshot creation task. Unit: percent (%).
        shared_ptr<string> progress_ {};
        // The region ID of the snapshot.
        shared_ptr<string> regionId_ {};
        // The amount of remaining time required to create the snapshot. Unit: seconds.
        shared_ptr<int32_t> remainTime_ {};
        // The ID of the resource group to which the snapshot belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The retention period of the automatic snapshot. Unit: days.
        shared_ptr<int32_t> retentionDays_ {};
        // The ID of the snapshot.
        shared_ptr<string> snapshotId_ {};
        // The ID of the snapshot chain that is associated with the snapshot.
        shared_ptr<string> snapshotLinkId_ {};
        // The name of the snapshot. This parameter is returned only if a snapshot name was specified when the snapshot was created.
        shared_ptr<string> snapshotName_ {};
        // The serial number of the snapshot.
        shared_ptr<string> snapshotSN_ {};
        // The type of the snapshot. Valid values:
        // 
        // *   auto or timer: automatic snapshot
        // *   user: manual snapshot
        // *   all: all snapshot types
        shared_ptr<string> snapshotType_ {};
        // The ID of the source disk. This parameter is retained even after the source disk is released.
        shared_ptr<string> sourceDiskId_ {};
        // The capacity of the source disk. Unit: GiB.
        shared_ptr<string> sourceDiskSize_ {};
        // The type of the source disk. Valid values:
        // 
        // *   system
        // *   data
        shared_ptr<string> sourceDiskType_ {};
        // The region ID of the source snapshot.
        shared_ptr<string> sourceRegionId_ {};
        // The ID of the source snapshot.
        shared_ptr<string> sourceSnapshotId_ {};
        // The category of the source disk.
        // 
        // >  This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<string> sourceStorageType_ {};
        // The status of the snapshot. Valid values:
        // 
        // *   progressing: The snapshot is being created.
        // *   accomplished: The snapshot is created.
        // *   failed: The snapshot failed to be created.
        shared_ptr<string> status_ {};
        // The tags of the snapshot.
        shared_ptr<Snapshot::Tags> tags_ {};
        // Indicates whether the snapshot was used to create images or cloud disks. Valid values:
        // 
        // *   image: The snapshot was used to create custom images.
        // *   disk: The snapshot was used to create cloud disks.
        // *   image_disk: The snapshot was used to create custom images and data disks.
        // *   none: The snapshot was not used to create custom images or cloud disks.
        shared_ptr<string> usage_ {};
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

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnapshotsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const DescribeSnapshotsResponseBody::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, DescribeSnapshotsResponseBody::Snapshots) };
    inline DescribeSnapshotsResponseBody::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, DescribeSnapshotsResponseBody::Snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(const DescribeSnapshotsResponseBody::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(DescribeSnapshotsResponseBody::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the snapshots.
    shared_ptr<DescribeSnapshotsResponseBody::Snapshots> snapshots_ {};
    // The total number of snapshots.
    // 
    // > When using the `MaxResults` and `NextToken` parameters for a paginated query, the returned `TotalCount` parameter value is invalid.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
