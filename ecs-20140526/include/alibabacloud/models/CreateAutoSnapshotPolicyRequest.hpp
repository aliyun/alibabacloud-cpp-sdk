// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
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
  class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_TO_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_TO_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_TO_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(timePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CopiedSnapshotsRetentionDays, copiedSnapshotsRetentionDays_);
      DARABONBA_PTR_FROM_JSON(CopyEncryptionConfiguration, copyEncryptionConfiguration_);
      DARABONBA_PTR_FROM_JSON(EnableCrossRegionCopy, enableCrossRegionCopy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetCopyRegions, targetCopyRegions_);
      DARABONBA_PTR_FROM_JSON(autoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(repeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(timePoints, timePoints_);
    };
    CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest(CreateAutoSnapshotPolicyRequest &&) = default ;
    CreateAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest& operator=(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest& operator=(CreateAutoSnapshotPolicyRequest &&) = default ;
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
      // The key of tag N to add to the automatic snapshot policy. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the automatic snapshot policy. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://. The tag value cannot start with acs:.
      shared_ptr<string> value_ {};
    };

    class CopyEncryptionConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CopyEncryptionConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      };
      friend void from_json(const Darabonba::Json& j, CopyEncryptionConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
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
      class Arn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Arn& obj) { 
          DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
        };
        friend void from_json(const Darabonba::Json& j, Arn& obj) { 
          DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
        };
        Arn() = default ;
        Arn(const Arn &) = default ;
        Arn(Arn &&) = default ;
        Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Arn() = default ;
        Arn& operator=(const Arn &) = default ;
        Arn& operator=(Arn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
        // assumeRoleFor Field Functions 
        bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
        void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
        inline int64_t getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
        inline Arn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


        // roleType Field Functions 
        bool hasRoleType() const { return this->roleType_ != nullptr;};
        void deleteRoleType() { this->roleType_ = nullptr;};
        inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
        inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        // rolearn Field Functions 
        bool hasRolearn() const { return this->rolearn_ != nullptr;};
        void deleteRolearn() { this->rolearn_ = nullptr;};
        inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
        inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


      protected:
        // >  This parameter is not publicly available.
        shared_ptr<int64_t> assumeRoleFor_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> roleType_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> rolearn_ {};
      };

      virtual bool empty() const override { return this->arn_ == nullptr
        && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline const vector<CopyEncryptionConfiguration::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CopyEncryptionConfiguration::Arn>) };
      inline vector<CopyEncryptionConfiguration::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<CopyEncryptionConfiguration::Arn>) };
      inline CopyEncryptionConfiguration& setArn(const vector<CopyEncryptionConfiguration::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
      inline CopyEncryptionConfiguration& setArn(vector<CopyEncryptionConfiguration::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


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
      // >  This parameter is not publicly available.
      shared_ptr<vector<CopyEncryptionConfiguration::Arn>> arn_ {};
      // Specifies whether to enable cross-region snapshot replication and encryption. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> encrypted_ {};
      // The ID of the Key Management Service (KMS) key used in cross-region snapshot replication and encryption.
      shared_ptr<string> KMSKeyId_ {};
    };

    virtual bool empty() const override { return this->copiedSnapshotsRetentionDays_ == nullptr
        && this->copyEncryptionConfiguration_ == nullptr && this->enableCrossRegionCopy_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->storageLocationArn_ == nullptr && this->tag_ == nullptr && this->targetCopyRegions_ == nullptr && this->autoSnapshotPolicyName_ == nullptr
        && this->regionId_ == nullptr && this->repeatWeekdays_ == nullptr && this->retentionDays_ == nullptr && this->timePoints_ == nullptr; };
    // copiedSnapshotsRetentionDays Field Functions 
    bool hasCopiedSnapshotsRetentionDays() const { return this->copiedSnapshotsRetentionDays_ != nullptr;};
    void deleteCopiedSnapshotsRetentionDays() { this->copiedSnapshotsRetentionDays_ = nullptr;};
    inline int32_t getCopiedSnapshotsRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(copiedSnapshotsRetentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setCopiedSnapshotsRetentionDays(int32_t copiedSnapshotsRetentionDays) { DARABONBA_PTR_SET_VALUE(copiedSnapshotsRetentionDays_, copiedSnapshotsRetentionDays) };


    // copyEncryptionConfiguration Field Functions 
    bool hasCopyEncryptionConfiguration() const { return this->copyEncryptionConfiguration_ != nullptr;};
    void deleteCopyEncryptionConfiguration() { this->copyEncryptionConfiguration_ = nullptr;};
    inline const CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration & getCopyEncryptionConfiguration() const { DARABONBA_PTR_GET_CONST(copyEncryptionConfiguration_, CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration getCopyEncryptionConfiguration() { DARABONBA_PTR_GET(copyEncryptionConfiguration_, CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequest& setCopyEncryptionConfiguration(const CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration & copyEncryptionConfiguration) { DARABONBA_PTR_SET_VALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };
    inline CreateAutoSnapshotPolicyRequest& setCopyEncryptionConfiguration(CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration && copyEncryptionConfiguration) { DARABONBA_PTR_SET_RVALUE(copyEncryptionConfiguration_, copyEncryptionConfiguration) };


    // enableCrossRegionCopy Field Functions 
    bool hasEnableCrossRegionCopy() const { return this->enableCrossRegionCopy_ != nullptr;};
    void deleteEnableCrossRegionCopy() { this->enableCrossRegionCopy_ = nullptr;};
    inline bool getEnableCrossRegionCopy() const { DARABONBA_PTR_GET_DEFAULT(enableCrossRegionCopy_, false) };
    inline CreateAutoSnapshotPolicyRequest& setEnableCrossRegionCopy(bool enableCrossRegionCopy) { DARABONBA_PTR_SET_VALUE(enableCrossRegionCopy_, enableCrossRegionCopy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoSnapshotPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAutoSnapshotPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAutoSnapshotPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAutoSnapshotPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageLocationArn Field Functions 
    bool hasStorageLocationArn() const { return this->storageLocationArn_ != nullptr;};
    void deleteStorageLocationArn() { this->storageLocationArn_ = nullptr;};
    inline string getStorageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(storageLocationArn_, "") };
    inline CreateAutoSnapshotPolicyRequest& setStorageLocationArn(string storageLocationArn) { DARABONBA_PTR_SET_VALUE(storageLocationArn_, storageLocationArn) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAutoSnapshotPolicyRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAutoSnapshotPolicyRequest::Tag>) };
    inline vector<CreateAutoSnapshotPolicyRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAutoSnapshotPolicyRequest::Tag>) };
    inline CreateAutoSnapshotPolicyRequest& setTag(const vector<CreateAutoSnapshotPolicyRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAutoSnapshotPolicyRequest& setTag(vector<CreateAutoSnapshotPolicyRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetCopyRegions Field Functions 
    bool hasTargetCopyRegions() const { return this->targetCopyRegions_ != nullptr;};
    void deleteTargetCopyRegions() { this->targetCopyRegions_ = nullptr;};
    inline string getTargetCopyRegions() const { DARABONBA_PTR_GET_DEFAULT(targetCopyRegions_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTargetCopyRegions(string targetCopyRegions) { DARABONBA_PTR_SET_VALUE(targetCopyRegions_, targetCopyRegions) };


    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline CreateAutoSnapshotPolicyRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The retention period of the snapshot copy in the destination region. Unit: days. Valid values:
    // 
    // *   \\-1: The snapshot copy is retained until it is deleted.
    // *   1 to 65535: The snapshot copy is retained for the specified number of days. After the retention period of the snapshot copy expires, the snapshot copy is automatically deleted.
    // 
    // Default value: -1.
    shared_ptr<int32_t> copiedSnapshotsRetentionDays_ {};
    // The encryption parameters for cross-region snapshot replication.
    shared_ptr<CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration> copyEncryptionConfiguration_ {};
    // Specifies whether to enable cross-region replication for snapshots.
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableCrossRegionCopy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // > This parameter is not publicly available.
    shared_ptr<string> storageLocationArn_ {};
    // The tags to add to the automatic snapshot policy.
    shared_ptr<vector<CreateAutoSnapshotPolicyRequest::Tag>> tag_ {};
    // The destination region to which to copy the snapshot. You can specify only a single destination region.
    shared_ptr<string> targetCopyRegions_ {};
    // The name of the automatic snapshot policy. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // By default, this parameter is left empty.
    shared_ptr<string> autoSnapshotPolicyName_ {};
    // The ID of the region in which to create the automatic snapshot policy. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The days of the week on which to create automatic snapshots. Valid values: 1 to 7, which correspond to Monday to Sunday. 1 indicates Monday. Format description:
    // 
    // *   Set this parameter to a JSON-formatted array. For example, a value of ["1"] specifies automatic snapshots to be created every Monday.
    // *   To schedule multiple automatic snapshots to be created in a week, you can specify multiple values. Separate the values with commas (,). You can specify a maximum of seven days. For example, a value of ["1","3","5"] specifies automatic snapshots to be created every Monday, Wednesday, and Friday.
    // 
    // This parameter is required.
    shared_ptr<string> repeatWeekdays_ {};
    // The retention period of the automatic snapshot. Unit: days. Valid values:
    // 
    // *   \\-1: The automatic snapshot is retained until it is deleted.
    // *   1 to 65535: The automatic snapshot is retained for the specified number of days. After the retention period of the automatic snapshot expires, the automatic snapshot is automatically deleted.
    // 
    // Default value: -1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> retentionDays_ {};
    // The points in time of the day at which to create automatic snapshots. The time must be in UTC+8. Unit: hours. Valid values: 0 to 23, which correspond to the 24 on-the-hour points in time from 00:00:00 to 23:00:00. For example, 1 indicates 01:00:00. Format description:
    // 
    // *   Set this parameter to a JSON-formatted array. For example, a value of ["1"] specifies automatic snapshots to be created at 01:00:00.
    // *   To schedule multiple automatic snapshots to be created in a day, you can specify multiple values. Separate the values with commas (,). You can specify up to 24 points in time. For example, a value of ["1","3","5"] specifies automatic snapshots to be created at 01:00:00, 03:00:00, and 05:00:00.
    // 
    // >  If an automatic snapshot is being created when the time scheduled for creating another automatic snapshot is due, the new snapshot task is skipped. This may occur when a disk contains a large volume of data. For example, you scheduled snapshots to be automatically created at 09:00, 10:00, 11:00, and 12:00. The system starts to create a snapshot for the disk at 09:00:00. The process takes 80 minutes to complete because the disk contains a large volume of data and ends at 10:20:00. The system skips the automatic snapshot task scheduled for 10:00:00 and creates the next automatic snapshot for the disk at 11:00:00.
    // 
    // This parameter is required.
    shared_ptr<string> timePoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
