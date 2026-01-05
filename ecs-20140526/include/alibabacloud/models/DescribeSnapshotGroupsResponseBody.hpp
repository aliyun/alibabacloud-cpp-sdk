// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODY_HPP_
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
  class DescribeSnapshotGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotGroups, snapshotGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotGroups, snapshotGroups_);
    };
    DescribeSnapshotGroupsResponseBody() = default ;
    DescribeSnapshotGroupsResponseBody(const DescribeSnapshotGroupsResponseBody &) = default ;
    DescribeSnapshotGroupsResponseBody(DescribeSnapshotGroupsResponseBody &&) = default ;
    DescribeSnapshotGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotGroupsResponseBody() = default ;
    DescribeSnapshotGroupsResponseBody& operator=(const DescribeSnapshotGroupsResponseBody &) = default ;
    DescribeSnapshotGroupsResponseBody& operator=(DescribeSnapshotGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotGroups& obj) { 
        DARABONBA_PTR_TO_JSON(SnapshotGroup, snapshotGroup_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(SnapshotGroup, snapshotGroup_);
      };
      SnapshotGroups() = default ;
      SnapshotGroups(const SnapshotGroups &) = default ;
      SnapshotGroups(SnapshotGroups &&) = default ;
      SnapshotGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotGroups() = default ;
      SnapshotGroups& operator=(const SnapshotGroups &) = default ;
      SnapshotGroups& operator=(SnapshotGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotGroup& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProgressStatus, progressStatus_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SnapshotGroupId, snapshotGroupId_);
          DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, SnapshotGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProgressStatus, progressStatus_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SnapshotGroupId, snapshotGroupId_);
          DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        SnapshotGroup() = default ;
        SnapshotGroup(const SnapshotGroup &) = default ;
        SnapshotGroup(SnapshotGroup &&) = default ;
        SnapshotGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotGroup() = default ;
        SnapshotGroup& operator=(const SnapshotGroup &) = default ;
        SnapshotGroup& operator=(SnapshotGroup &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the snapshot-consistent group.
            shared_ptr<string> key_ {};
            // The tag value of the snapshot-consistent group.
            shared_ptr<string> value_ {};
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
              DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
              DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
              DARABONBA_PTR_TO_JSON(Progress, progress_);
              DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
              DARABONBA_PTR_TO_JSON(SourceDiskId, sourceDiskId_);
              DARABONBA_PTR_TO_JSON(SourceDiskType, sourceDiskType_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
            };
            friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
              DARABONBA_PTR_FROM_JSON(Available, available_);
              DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
              DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
              DARABONBA_PTR_FROM_JSON(Progress, progress_);
              DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
              DARABONBA_PTR_FROM_JSON(SourceDiskId, sourceDiskId_);
              DARABONBA_PTR_FROM_JSON(SourceDiskType, sourceDiskType_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, Tag& obj) { 
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
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
                virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // The tag key of the snapshot. The default values of Key and Value contain snapshot source information.
                shared_ptr<string> key_ {};
                // The tag value of the snapshot. The default values of Key and Value contain snapshot source information.
                shared_ptr<string> value_ {};
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
        && this->instantAccess_ == nullptr && this->instantAccessRetentionDays_ == nullptr && this->progress_ == nullptr && this->snapshotId_ == nullptr && this->sourceDiskId_ == nullptr
        && this->sourceDiskType_ == nullptr && this->tags_ == nullptr; };
            // available Field Functions 
            bool hasAvailable() const { return this->available_ != nullptr;};
            void deleteAvailable() { this->available_ = nullptr;};
            inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
            inline Snapshot& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


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


            // progress Field Functions 
            bool hasProgress() const { return this->progress_ != nullptr;};
            void deleteProgress() { this->progress_ = nullptr;};
            inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
            inline Snapshot& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


            // snapshotId Field Functions 
            bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
            void deleteSnapshotId() { this->snapshotId_ = nullptr;};
            inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
            inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


            // sourceDiskId Field Functions 
            bool hasSourceDiskId() const { return this->sourceDiskId_ != nullptr;};
            void deleteSourceDiskId() { this->sourceDiskId_ = nullptr;};
            inline string getSourceDiskId() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskId_, "") };
            inline Snapshot& setSourceDiskId(string sourceDiskId) { DARABONBA_PTR_SET_VALUE(sourceDiskId_, sourceDiskId) };


            // sourceDiskType Field Functions 
            bool hasSourceDiskType() const { return this->sourceDiskType_ != nullptr;};
            void deleteSourceDiskType() { this->sourceDiskType_ = nullptr;};
            inline string getSourceDiskType() const { DARABONBA_PTR_GET_DEFAULT(sourceDiskType_, "") };
            inline Snapshot& setSourceDiskType(string sourceDiskType) { DARABONBA_PTR_SET_VALUE(sourceDiskType_, sourceDiskType) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline const Snapshot::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Snapshot::Tags) };
            inline Snapshot::Tags getTags() { DARABONBA_PTR_GET(tags_, Snapshot::Tags) };
            inline Snapshot& setTags(const Snapshot::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
            inline Snapshot& setTags(Snapshot::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          protected:
            // Indicates whether the snapshot can be shared and be used to create or roll back a disk. Valid values:
            // 
            // *   true
            // *   false
            shared_ptr<bool> available_ {};
            // Indicates whether the instant access feature is enabled. Valid values:
            // 
            // *   true: The instant access feature is enabled. By default, the instant access feature is enabled for ESSDs.
            // *   false: The instant access feature is disabled. The snapshot is a standard snapshot for which the instant access feature is disabled.
            // 
            // >  This parameter is no longer used. By default, standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
            shared_ptr<bool> instantAccess_ {};
            // The validity period of the instant access feature. When the validity period ends, the instant access snapshot is automatically released.
            // 
            // >  This parameter is no longer used. By default, standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
            shared_ptr<int32_t> instantAccessRetentionDays_ {};
            // The progress of the snapshot creation task. Unit: percent (%).
            shared_ptr<string> progress_ {};
            // The ID of the snapshot.
            shared_ptr<string> snapshotId_ {};
            // The ID of the source disk. This parameter is retained even after the source disk of the snapshot is released.
            shared_ptr<string> sourceDiskId_ {};
            // The type of the source disk. Valid values:
            // 
            // *   system: system disk
            // *   data: data disk
            shared_ptr<string> sourceDiskType_ {};
            // The tags of the snapshot. The default values contain snapshot source information.
            shared_ptr<Snapshot::Tags> tags_ {};
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->progressStatus_ == nullptr && this->resourceGroupId_ == nullptr
        && this->snapshotGroupId_ == nullptr && this->snapshots_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline SnapshotGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SnapshotGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SnapshotGroup& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SnapshotGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // progressStatus Field Functions 
        bool hasProgressStatus() const { return this->progressStatus_ != nullptr;};
        void deleteProgressStatus() { this->progressStatus_ = nullptr;};
        inline string getProgressStatus() const { DARABONBA_PTR_GET_DEFAULT(progressStatus_, "") };
        inline SnapshotGroup& setProgressStatus(string progressStatus) { DARABONBA_PTR_SET_VALUE(progressStatus_, progressStatus) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SnapshotGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // snapshotGroupId Field Functions 
        bool hasSnapshotGroupId() const { return this->snapshotGroupId_ != nullptr;};
        void deleteSnapshotGroupId() { this->snapshotGroupId_ = nullptr;};
        inline string getSnapshotGroupId() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroupId_, "") };
        inline SnapshotGroup& setSnapshotGroupId(string snapshotGroupId) { DARABONBA_PTR_SET_VALUE(snapshotGroupId_, snapshotGroupId) };


        // snapshots Field Functions 
        bool hasSnapshots() const { return this->snapshots_ != nullptr;};
        void deleteSnapshots() { this->snapshots_ = nullptr;};
        inline const SnapshotGroup::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, SnapshotGroup::Snapshots) };
        inline SnapshotGroup::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, SnapshotGroup::Snapshots) };
        inline SnapshotGroup& setSnapshots(const SnapshotGroup::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
        inline SnapshotGroup& setSnapshots(SnapshotGroup::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SnapshotGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const SnapshotGroup::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, SnapshotGroup::Tags) };
        inline SnapshotGroup::Tags getTags() { DARABONBA_PTR_GET(tags_, SnapshotGroup::Tags) };
        inline SnapshotGroup& setTags(const SnapshotGroup::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline SnapshotGroup& setTags(SnapshotGroup::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The creation time. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the snapshot-consistent group.
        shared_ptr<string> description_ {};
        // The ID of the instance to which the snapshot-consistent group belongs. This parameter has a value only when all disk snapshots in the snapshot-consistent group belong to the same instance. If disk snapshots in the snapshot-consistent group belong to different instances, you can check the response parameters that start with `Snapshots.Snapshot.Tags.` to determine the ID of the instance to which each snapshot in the snapshot-consistent group belongs.
        shared_ptr<string> instanceId_ {};
        // The name of the snapshot-consistent group.
        shared_ptr<string> name_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> progressStatus_ {};
        // The ID of the resource group to which the snapshot-consistent group belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the snapshot-consistent group.
        shared_ptr<string> snapshotGroupId_ {};
        // The information about the snapshots in the snapshot-consistent group.
        shared_ptr<SnapshotGroup::Snapshots> snapshots_ {};
        // The state of the snapshot-consistent group. Valid values:
        // 
        // *   progressing: The snapshot-consistent group was being created.
        // *   accomplished: The snapshot-consistent group was created.
        // *   failed: The snapshot-consistent group failed to be created.
        shared_ptr<string> status_ {};
        // The tags of the snapshot-consistent group.
        shared_ptr<SnapshotGroup::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->snapshotGroup_ == nullptr; };
      // snapshotGroup Field Functions 
      bool hasSnapshotGroup() const { return this->snapshotGroup_ != nullptr;};
      void deleteSnapshotGroup() { this->snapshotGroup_ = nullptr;};
      inline const vector<SnapshotGroups::SnapshotGroup> & getSnapshotGroup() const { DARABONBA_PTR_GET_CONST(snapshotGroup_, vector<SnapshotGroups::SnapshotGroup>) };
      inline vector<SnapshotGroups::SnapshotGroup> getSnapshotGroup() { DARABONBA_PTR_GET(snapshotGroup_, vector<SnapshotGroups::SnapshotGroup>) };
      inline SnapshotGroups& setSnapshotGroup(const vector<SnapshotGroups::SnapshotGroup> & snapshotGroup) { DARABONBA_PTR_SET_VALUE(snapshotGroup_, snapshotGroup) };
      inline SnapshotGroups& setSnapshotGroup(vector<SnapshotGroups::SnapshotGroup> && snapshotGroup) { DARABONBA_PTR_SET_RVALUE(snapshotGroup_, snapshotGroup) };


    protected:
      shared_ptr<vector<SnapshotGroups::SnapshotGroup>> snapshotGroup_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->snapshotGroups_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotGroups Field Functions 
    bool hasSnapshotGroups() const { return this->snapshotGroups_ != nullptr;};
    void deleteSnapshotGroups() { this->snapshotGroups_ = nullptr;};
    inline const DescribeSnapshotGroupsResponseBody::SnapshotGroups & getSnapshotGroups() const { DARABONBA_PTR_GET_CONST(snapshotGroups_, DescribeSnapshotGroupsResponseBody::SnapshotGroups) };
    inline DescribeSnapshotGroupsResponseBody::SnapshotGroups getSnapshotGroups() { DARABONBA_PTR_GET(snapshotGroups_, DescribeSnapshotGroupsResponseBody::SnapshotGroups) };
    inline DescribeSnapshotGroupsResponseBody& setSnapshotGroups(const DescribeSnapshotGroupsResponseBody::SnapshotGroups & snapshotGroups) { DARABONBA_PTR_SET_VALUE(snapshotGroups_, snapshotGroups) };
    inline DescribeSnapshotGroupsResponseBody& setSnapshotGroups(DescribeSnapshotGroupsResponseBody::SnapshotGroups && snapshotGroups) { DARABONBA_PTR_SET_RVALUE(snapshotGroups_, snapshotGroups) };


  protected:
    // The token used to start the next query.
    // 
    // > If the return value is empty, no more data exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot-consistent groups.
    shared_ptr<DescribeSnapshotGroupsResponseBody::SnapshotGroups> snapshotGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
