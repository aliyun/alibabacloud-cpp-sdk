// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODY_HPP_
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
  class DescribeAutoSnapshotPolicyExResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyExResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyExResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoSnapshotPolicyExResponseBody() = default ;
    DescribeAutoSnapshotPolicyExResponseBody(const DescribeAutoSnapshotPolicyExResponseBody &) = default ;
    DescribeAutoSnapshotPolicyExResponseBody(DescribeAutoSnapshotPolicyExResponseBody &&) = default ;
    DescribeAutoSnapshotPolicyExResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyExResponseBody() = default ;
    DescribeAutoSnapshotPolicyExResponseBody& operator=(const DescribeAutoSnapshotPolicyExResponseBody &) = default ;
    DescribeAutoSnapshotPolicyExResponseBody& operator=(DescribeAutoSnapshotPolicyExResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoSnapshotPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
      };
      AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies(AutoSnapshotPolicies &&) = default ;
      AutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies& operator=(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies& operator=(AutoSnapshotPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoSnapshotPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
          DARABONBA_PTR_TO_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
          DARABONBA_PTR_TO_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DiskNums, diskNums_);
          DARABONBA_PTR_TO_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RepeatWeekdays, repeatWeekdays_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TargetCopyRegions, targetCopyRegions_);
          DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VolumeNums, volumeNums_);
        };
        friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
          DARABONBA_PTR_FROM_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
          DARABONBA_PTR_FROM_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DiskNums, diskNums_);
          DARABONBA_PTR_FROM_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RepeatWeekdays, repeatWeekdays_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TargetCopyRegions, targetCopyRegions_);
          DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VolumeNums, volumeNums_);
        };
        AutoSnapshotPolicy() = default ;
        AutoSnapshotPolicy(const AutoSnapshotPolicy &) = default ;
        AutoSnapshotPolicy(AutoSnapshotPolicy &&) = default ;
        AutoSnapshotPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoSnapshotPolicy() = default ;
        AutoSnapshotPolicy& operator=(const AutoSnapshotPolicy &) = default ;
        AutoSnapshotPolicy& operator=(AutoSnapshotPolicy &&) = default ;
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
            // The tag key of the automatic snapshot policy.
            shared_ptr<string> tagKey_ {};
            // The tag value of the automatic snapshot policy.
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

        class CopyEncryptionConfiguration : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CopyEncryptionConfiguration& obj) { 
            DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
            DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          };
          friend void from_json(const Darabonba::Json& j, CopyEncryptionConfiguration& obj) { 
            DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
            DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          };
          CopyEncryptionConfiguration() = default ;
          CopyEncryptionConfiguration(const CopyEncryptionConfiguration &) = default ;
          CopyEncryptionConfiguration(CopyEncryptionConfiguration &&) = default ;
          CopyEncryptionConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CopyEncryptionConfiguration() = default ;
          CopyEncryptionConfiguration& operator=(const CopyEncryptionConfiguration &) = default ;
          CopyEncryptionConfiguration& operator=(CopyEncryptionConfiguration &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->encrypted_ == nullptr
        && this->KMSKeyId_ == nullptr; };
          // encrypted Field Functions 
          bool hasEncrypted() const { return this->encrypted_ != nullptr;};
          void deleteEncrypted() { this->encrypted_ = nullptr;};
          inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
          inline CopyEncryptionConfiguration& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


          // KMSKeyId Field Functions 
          bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
          void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
          inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
          inline CopyEncryptionConfiguration& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        protected:
          // Whether to enable encryption for cross-region snapshot replication. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> encrypted_ {};
          // The ID of the Key Management Service (KMS) key used to encrypt snapshots in cross-region snapshot replication.
          shared_ptr<string> KMSKeyId_ {};
        };

        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->autoSnapshotPolicyName_ == nullptr && this->copiedSnapshotsRetentionDays_ == nullptr && this->copyEncryptionConfiguration_ == nullptr && this->creationTime_ == nullptr && this->diskNums_ == nullptr
        && this->enableCrossRegionCopy_ == nullptr && this->regionId_ == nullptr && this->repeatWeekdays_ == nullptr && this->resourceGroupId_ == nullptr && this->retentionDays_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->targetCopyRegions_ == nullptr && this->timePoints_ == nullptr && this->type_ == nullptr
        && this->volumeNums_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline AutoSnapshotPolicy& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // autoSnapshotPolicyName Field Functions 
        bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
        void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
        inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
        inline AutoSnapshotPolicy& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


        // copiedSnapshotsRetentionDays Field Functions 
        bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
        void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
        inline int32_t getCopiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
        inline AutoSnapshotPolicy& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


        // copyEncryptionConfiguration Field Functions 
        bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
        void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
        inline const AutoSnapshotPolicy::CopyEncryptionConfiguration & getCopyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, AutoSnapshotPolicy::CopyEncryptionConfiguration) };
        inline AutoSnapshotPolicy::CopyEncryptionConfiguration getCopyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, AutoSnapshotPolicy::CopyEncryptionConfiguration) };
        inline AutoSnapshotPolicy& setCopyEncryptionConfiguration(const AutoSnapshotPolicy::CopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
        inline AutoSnapshotPolicy& setCopyEncryptionConfiguration(AutoSnapshotPolicy::CopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AutoSnapshotPolicy& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // diskNums Field Functions 
        bool hasDiskNums() const { return this->diskNums_ != nullptr;};
        void deleteDiskNums() { this->diskNums_ = nullptr;};
        inline int32_t getDiskNums() const { DARABONBA_PTR_GET_DEFAULT(diskNums_, 0) };
        inline AutoSnapshotPolicy& setDiskNums(int32_t diskNums) { DARABONBA_PTR_SET_VALUE(diskNums_, diskNums) };


        // enableCrossRegionCopy Field Functions 
        bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
        void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
        inline bool getEnableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
        inline AutoSnapshotPolicy& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AutoSnapshotPolicy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // repeatWeekdays Field Functions 
        bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
        void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
        inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
        inline AutoSnapshotPolicy& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline AutoSnapshotPolicy& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
        inline AutoSnapshotPolicy& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AutoSnapshotPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const AutoSnapshotPolicy::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, AutoSnapshotPolicy::Tags) };
        inline AutoSnapshotPolicy::Tags getTags() { DARABONBA_PTR_GET(tags_, AutoSnapshotPolicy::Tags) };
        inline AutoSnapshotPolicy& setTags(const AutoSnapshotPolicy::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline AutoSnapshotPolicy& setTags(AutoSnapshotPolicy::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // targetCopyRegions Field Functions 
        bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
        void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
        inline string getTargetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
        inline AutoSnapshotPolicy& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


        // timePoints Field Functions 
        bool hasTimePoints() const { return this->timePoints_ != nullptr;};
        void deleteTimePoints() { this->timePoints_ = nullptr;};
        inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
        inline AutoSnapshotPolicy& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AutoSnapshotPolicy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // volumeNums Field Functions 
        bool hasVolumeNums() const { return this->volumeNums_ != nullptr;};
        void deleteVolumeNums() { this->volumeNums_ = nullptr;};
        inline int32_t getVolumeNums() const { DARABONBA_PTR_GET_DEFAULT(volumeNums_, 0) };
        inline AutoSnapshotPolicy& setVolumeNums(int32_t volumeNums) { DARABONBA_PTR_SET_VALUE(volumeNums_, volumeNums) };


      protected:
        // The ID of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // The name of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyName_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<int32_t> copiedSnapshotsRetentionDays_ {};
        // Encryption configurations for cross-region snapshot replication.
        shared_ptr<AutoSnapshotPolicy::CopyEncryptionConfiguration> copyEncryptionConfiguration_ {};
        // The time when the automatic snapshot policy was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The number of disks to which the automatic snapshot policy is applied.
        shared_ptr<int32_t> diskNums_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<bool> enableCrossRegionCopy_ {};
        // The region ID of the automatic snapshot policy.
        shared_ptr<string> regionId_ {};
        // The days of the week on which to create automatic snapshots. Valid values: 1 to 7, which correspond to the days of the week. For example, 1 indicates Monday. One or more days can be specified.
        shared_ptr<string> repeatWeekdays_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The retention period of the automatic snapshots. Unit: days. Valid values:
        // 
        // *   \\-1: Automatic snapshots are retained until they are deleted.
        // *   1 to 65536: Auto snapshots are retained for the specified number of days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
        shared_ptr<int32_t> retentionDays_ {};
        // The status of the automatic snapshot policy. Valid values:
        // 
        // *   Normal: The automatic snapshot policy is normal.
        // *   Expire: The automatic snapshot policy cannot be used because your account has overdue payments.
        shared_ptr<string> status_ {};
        // The tags of the automatic snapshot policy.
        shared_ptr<AutoSnapshotPolicy::Tags> tags_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> targetCopyRegions_ {};
        // The points in time of the day at which to create automatic snapshots.
        // 
        // The time is displayed in UTC+8. Unit: hours. Valid values: 0 to 23, which correspond to the 24 points in time on the hour from 00:00:00 to 23:00:00. For example, 1 indicates 01:00:00. Multiple points in time can be specified.
        // 
        // The parameter value is a JSON array that contains up to 24 points in time separated by commas (,). Example: `["0", "1", ... "23"]`.
        shared_ptr<string> timePoints_ {};
        // The type of the automatic snapshot policy. Valid values:
        // 
        // *   Custom: user-defined snapshot policy.
        // *   System: system-defined snapshot policy.
        shared_ptr<string> type_ {};
        // The number of extended volumes to which the automatic snapshot policy is applied.
        shared_ptr<int32_t> volumeNums_ {};
      };

      virtual bool empty() const override { return this->autoSnapshotPolicy_ == nullptr; };
      // autoSnapshotPolicy Field Functions 
      bool hasAutoSnapshotPolicy() const { return this->autoSnapshotPolicy_ != nullptr;};
      void deleteAutoSnapshotPolicy() { this->autoSnapshotPolicy_ = nullptr;};
      inline const vector<AutoSnapshotPolicies::AutoSnapshotPolicy> & getAutoSnapshotPolicy() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicy_, vector<AutoSnapshotPolicies::AutoSnapshotPolicy>) };
      inline vector<AutoSnapshotPolicies::AutoSnapshotPolicy> getAutoSnapshotPolicy() { DARABONBA_PTR_GET(autoSnapshotPolicy_, vector<AutoSnapshotPolicies::AutoSnapshotPolicy>) };
      inline AutoSnapshotPolicies& setAutoSnapshotPolicy(const vector<AutoSnapshotPolicies::AutoSnapshotPolicy> & autoSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };
      inline AutoSnapshotPolicies& setAutoSnapshotPolicy(vector<AutoSnapshotPolicies::AutoSnapshotPolicy> && autoSnapshotPolicy) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };


    protected:
      shared_ptr<vector<AutoSnapshotPolicies::AutoSnapshotPolicy>> autoSnapshotPolicy_ {};
    };

    virtual bool empty() const override { return this->autoSnapshotPolicies_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoSnapshotPolicies Field Functions 
    bool hasAutoSnapshotPolicies() const { return this->autoSnapshotPolicies_ != nullptr;};
    void deleteAutoSnapshotPolicies() { this->autoSnapshotPolicies_ = nullptr;};
    inline const DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies & getAutoSnapshotPolicies() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicies_, DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies getAutoSnapshotPolicies() { DARABONBA_PTR_GET(autoSnapshotPolicies_, DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setAutoSnapshotPolicies(const DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies & autoSnapshotPolicies) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setAutoSnapshotPolicies(DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies && autoSnapshotPolicies) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPolicyExResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoSnapshotPolicyExResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the automatic snapshot policies.
    shared_ptr<DescribeAutoSnapshotPolicyExResponseBody::AutoSnapshotPolicies> autoSnapshotPolicies_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of automatic snapshot policies
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
