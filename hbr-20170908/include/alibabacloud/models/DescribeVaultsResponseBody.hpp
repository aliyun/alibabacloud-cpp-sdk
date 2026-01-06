// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODY_HPP_
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
  class DescribeVaultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vaults, vaults_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vaults, vaults_);
    };
    DescribeVaultsResponseBody() = default ;
    DescribeVaultsResponseBody(const DescribeVaultsResponseBody &) = default ;
    DescribeVaultsResponseBody(DescribeVaultsResponseBody &&) = default ;
    DescribeVaultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBody() = default ;
    DescribeVaultsResponseBody& operator=(const DescribeVaultsResponseBody &) = default ;
    DescribeVaultsResponseBody& operator=(DescribeVaultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vaults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vaults& obj) { 
        DARABONBA_PTR_TO_JSON(Vault, vault_);
      };
      friend void from_json(const Darabonba::Json& j, Vaults& obj) { 
        DARABONBA_PTR_FROM_JSON(Vault, vault_);
      };
      Vaults() = default ;
      Vaults(const Vaults &) = default ;
      Vaults(Vaults &&) = default ;
      Vaults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vaults() = default ;
      Vaults& operator=(const Vaults &) = default ;
      Vaults& operator=(Vaults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Vault : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vault& obj) { 
          DARABONBA_PTR_TO_JSON(ArchiveBytesDone, archiveBytesDone_);
          DARABONBA_PTR_TO_JSON(ArchiveStorageSize, archiveStorageSize_);
          DARABONBA_PTR_TO_JSON(BackupPlanStatistics, backupPlanStatistics_);
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ChargedStorageSize, chargedStorageSize_);
          DARABONBA_PTR_TO_JSON(CompressionAlgorithm, compressionAlgorithm_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Dedup, dedup_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_TO_JSON(IndexAvailable, indexAvailable_);
          DARABONBA_PTR_TO_JSON(IndexLevel, indexLevel_);
          DARABONBA_PTR_TO_JSON(IndexUpdateTime, indexUpdateTime_);
          DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_TO_JSON(LatestReplicationTime, latestReplicationTime_);
          DARABONBA_PTR_TO_JSON(RedundancyType, redundancyType_);
          DARABONBA_PTR_TO_JSON(Replication, replication_);
          DARABONBA_PTR_TO_JSON(ReplicationProgress, replicationProgress_);
          DARABONBA_PTR_TO_JSON(ReplicationSourceOwnerId, replicationSourceOwnerId_);
          DARABONBA_PTR_TO_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
          DARABONBA_PTR_TO_JSON(ReplicationSourceVault, replicationSourceVault_);
          DARABONBA_PTR_TO_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
          DARABONBA_PTR_TO_JSON(ReplicationStatus, replicationStatus_);
          DARABONBA_PTR_TO_JSON(ReplicationTargetOwnerId, replicationTargetOwnerId_);
          DARABONBA_PTR_TO_JSON(ReplicationTargetRegionId, replicationTargetRegionId_);
          DARABONBA_PTR_TO_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Retention, retention_);
          DARABONBA_PTR_TO_JSON(RsTargetAccountIds, rsTargetAccountIds_);
          DARABONBA_PTR_TO_JSON(SearchEnabled, searchEnabled_);
          DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
          DARABONBA_PTR_TO_JSON(SourceTypes, sourceTypes_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TrialInfo, trialInfo_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
          DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
          DARABONBA_PTR_TO_JSON(VaultOwnerId, vaultOwnerId_);
          DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
          DARABONBA_PTR_TO_JSON(VaultStatusMessage, vaultStatusMessage_);
          DARABONBA_PTR_TO_JSON(VaultStorageClass, vaultStorageClass_);
          DARABONBA_PTR_TO_JSON(VaultType, vaultType_);
          DARABONBA_PTR_TO_JSON(WormEnabled, wormEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, Vault& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchiveBytesDone, archiveBytesDone_);
          DARABONBA_PTR_FROM_JSON(ArchiveStorageSize, archiveStorageSize_);
          DARABONBA_PTR_FROM_JSON(BackupPlanStatistics, backupPlanStatistics_);
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ChargedStorageSize, chargedStorageSize_);
          DARABONBA_PTR_FROM_JSON(CompressionAlgorithm, compressionAlgorithm_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Dedup, dedup_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_FROM_JSON(IndexAvailable, indexAvailable_);
          DARABONBA_PTR_FROM_JSON(IndexLevel, indexLevel_);
          DARABONBA_PTR_FROM_JSON(IndexUpdateTime, indexUpdateTime_);
          DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_FROM_JSON(LatestReplicationTime, latestReplicationTime_);
          DARABONBA_PTR_FROM_JSON(RedundancyType, redundancyType_);
          DARABONBA_PTR_FROM_JSON(Replication, replication_);
          DARABONBA_PTR_FROM_JSON(ReplicationProgress, replicationProgress_);
          DARABONBA_PTR_FROM_JSON(ReplicationSourceOwnerId, replicationSourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
          DARABONBA_PTR_FROM_JSON(ReplicationSourceVault, replicationSourceVault_);
          DARABONBA_PTR_FROM_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
          DARABONBA_PTR_FROM_JSON(ReplicationStatus, replicationStatus_);
          DARABONBA_PTR_FROM_JSON(ReplicationTargetOwnerId, replicationTargetOwnerId_);
          DARABONBA_PTR_FROM_JSON(ReplicationTargetRegionId, replicationTargetRegionId_);
          DARABONBA_PTR_FROM_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Retention, retention_);
          DARABONBA_PTR_FROM_JSON(RsTargetAccountIds, rsTargetAccountIds_);
          DARABONBA_PTR_FROM_JSON(SearchEnabled, searchEnabled_);
          DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
          DARABONBA_PTR_FROM_JSON(SourceTypes, sourceTypes_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TrialInfo, trialInfo_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
          DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
          DARABONBA_PTR_FROM_JSON(VaultOwnerId, vaultOwnerId_);
          DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
          DARABONBA_PTR_FROM_JSON(VaultStatusMessage, vaultStatusMessage_);
          DARABONBA_PTR_FROM_JSON(VaultStorageClass, vaultStorageClass_);
          DARABONBA_PTR_FROM_JSON(VaultType, vaultType_);
          DARABONBA_PTR_FROM_JSON(WormEnabled, wormEnabled_);
        };
        Vault() = default ;
        Vault(const Vault &) = default ;
        Vault(Vault &&) = default ;
        Vault(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vault() = default ;
        Vault& operator=(const Vault &) = default ;
        Vault& operator=(Vault &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrialInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrialInfo& obj) { 
            DARABONBA_PTR_TO_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
            DARABONBA_PTR_TO_JSON(TrialExpireTime, trialExpireTime_);
            DARABONBA_PTR_TO_JSON(TrialStartTime, trialStartTime_);
            DARABONBA_PTR_TO_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
          };
          friend void from_json(const Darabonba::Json& j, TrialInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(KeepAfterTrialExpiration, keepAfterTrialExpiration_);
            DARABONBA_PTR_FROM_JSON(TrialExpireTime, trialExpireTime_);
            DARABONBA_PTR_FROM_JSON(TrialStartTime, trialStartTime_);
            DARABONBA_PTR_FROM_JSON(TrialVaultReleaseTime, trialVaultReleaseTime_);
          };
          TrialInfo() = default ;
          TrialInfo(const TrialInfo &) = default ;
          TrialInfo(TrialInfo &&) = default ;
          TrialInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrialInfo() = default ;
          TrialInfo& operator=(const TrialInfo &) = default ;
          TrialInfo& operator=(TrialInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keepAfterTrialExpiration_ == nullptr
        && this->trialExpireTime_ == nullptr && this->trialStartTime_ == nullptr && this->trialVaultReleaseTime_ == nullptr; };
          // keepAfterTrialExpiration Field Functions 
          bool hasKeepAfterTrialExpiration() const { return this->keepAfterTrialExpiration_ != nullptr;};
          void deleteKeepAfterTrialExpiration() { this->keepAfterTrialExpiration_ = nullptr;};
          inline bool getKeepAfterTrialExpiration() const { DARABONBA_PTR_GET_DEFAULT(keepAfterTrialExpiration_, false) };
          inline TrialInfo& setKeepAfterTrialExpiration(bool keepAfterTrialExpiration) { DARABONBA_PTR_SET_VALUE(keepAfterTrialExpiration_, keepAfterTrialExpiration) };


          // trialExpireTime Field Functions 
          bool hasTrialExpireTime() const { return this->trialExpireTime_ != nullptr;};
          void deleteTrialExpireTime() { this->trialExpireTime_ = nullptr;};
          inline int64_t getTrialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(trialExpireTime_, 0L) };
          inline TrialInfo& setTrialExpireTime(int64_t trialExpireTime) { DARABONBA_PTR_SET_VALUE(trialExpireTime_, trialExpireTime) };


          // trialStartTime Field Functions 
          bool hasTrialStartTime() const { return this->trialStartTime_ != nullptr;};
          void deleteTrialStartTime() { this->trialStartTime_ = nullptr;};
          inline int64_t getTrialStartTime() const { DARABONBA_PTR_GET_DEFAULT(trialStartTime_, 0L) };
          inline TrialInfo& setTrialStartTime(int64_t trialStartTime) { DARABONBA_PTR_SET_VALUE(trialStartTime_, trialStartTime) };


          // trialVaultReleaseTime Field Functions 
          bool hasTrialVaultReleaseTime() const { return this->trialVaultReleaseTime_ != nullptr;};
          void deleteTrialVaultReleaseTime() { this->trialVaultReleaseTime_ = nullptr;};
          inline int64_t getTrialVaultReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(trialVaultReleaseTime_, 0L) };
          inline TrialInfo& setTrialVaultReleaseTime(int64_t trialVaultReleaseTime) { DARABONBA_PTR_SET_VALUE(trialVaultReleaseTime_, trialVaultReleaseTime) };


        protected:
          // Indicates whether you are billed based on the pay-as-you-go method after the free trial ends.
          shared_ptr<bool> keepAfterTrialExpiration_ {};
          // The expiration time of the free trial.
          shared_ptr<int64_t> trialExpireTime_ {};
          // The start time of the free trial.
          shared_ptr<int64_t> trialStartTime_ {};
          // The time when the free-trial backup vault is released.
          shared_ptr<int64_t> trialVaultReleaseTime_ {};
        };

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
            // The tag key of the backup vault. Valid values of N: 1 to 20.
            // 
            // *   The tag key cannot start with `aliyun` or `acs:`.
            // *   The tag key cannot contain `http://` or `https://`.
            // *   The tag key cannot be an empty string.
            shared_ptr<string> key_ {};
            // The tag value of the backup vault. Valid values of N: 1 to 20.
            // 
            // *   The tag value cannot start with `aliyun` or `acs:`.
            // *   The tag value cannot contain `http://` or `https://`.
            // *   The tag value cannot be an empty string.
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

        class SourceTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceTypes& obj) { 
            DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          };
          friend void from_json(const Darabonba::Json& j, SourceTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          };
          SourceTypes() = default ;
          SourceTypes(const SourceTypes &) = default ;
          SourceTypes(SourceTypes &&) = default ;
          SourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceTypes() = default ;
          SourceTypes& operator=(const SourceTypes &) = default ;
          SourceTypes& operator=(SourceTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sourceType_ == nullptr; };
          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline const vector<string> & getSourceType() const { DARABONBA_PTR_GET_CONST(sourceType_, vector<string>) };
          inline vector<string> getSourceType() { DARABONBA_PTR_GET(sourceType_, vector<string>) };
          inline SourceTypes& setSourceType(const vector<string> & sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };
          inline SourceTypes& setSourceType(vector<string> && sourceType) { DARABONBA_PTR_SET_RVALUE(sourceType_, sourceType) };


        protected:
          shared_ptr<vector<string>> sourceType_ {};
        };

        class RsTargetAccountIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RsTargetAccountIds& obj) { 
            DARABONBA_PTR_TO_JSON(RsTargetAccountId, rsTargetAccountId_);
          };
          friend void from_json(const Darabonba::Json& j, RsTargetAccountIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RsTargetAccountId, rsTargetAccountId_);
          };
          RsTargetAccountIds() = default ;
          RsTargetAccountIds(const RsTargetAccountIds &) = default ;
          RsTargetAccountIds(RsTargetAccountIds &&) = default ;
          RsTargetAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RsTargetAccountIds() = default ;
          RsTargetAccountIds& operator=(const RsTargetAccountIds &) = default ;
          RsTargetAccountIds& operator=(RsTargetAccountIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rsTargetAccountId_ == nullptr; };
          // rsTargetAccountId Field Functions 
          bool hasRsTargetAccountId() const { return this->rsTargetAccountId_ != nullptr;};
          void deleteRsTargetAccountId() { this->rsTargetAccountId_ = nullptr;};
          inline const vector<int64_t> & getRsTargetAccountId() const { DARABONBA_PTR_GET_CONST(rsTargetAccountId_, vector<int64_t>) };
          inline vector<int64_t> getRsTargetAccountId() { DARABONBA_PTR_GET(rsTargetAccountId_, vector<int64_t>) };
          inline RsTargetAccountIds& setRsTargetAccountId(const vector<int64_t> & rsTargetAccountId) { DARABONBA_PTR_SET_VALUE(rsTargetAccountId_, rsTargetAccountId) };
          inline RsTargetAccountIds& setRsTargetAccountId(vector<int64_t> && rsTargetAccountId) { DARABONBA_PTR_SET_RVALUE(rsTargetAccountId_, rsTargetAccountId) };


        protected:
          shared_ptr<vector<int64_t>> rsTargetAccountId_ {};
        };

        class ReplicationProgress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReplicationProgress& obj) { 
            DARABONBA_PTR_TO_JSON(HistoricalReplicationProgress, historicalReplicationProgress_);
            DARABONBA_PTR_TO_JSON(NewReplicationProgress, newReplicationProgress_);
          };
          friend void from_json(const Darabonba::Json& j, ReplicationProgress& obj) { 
            DARABONBA_PTR_FROM_JSON(HistoricalReplicationProgress, historicalReplicationProgress_);
            DARABONBA_PTR_FROM_JSON(NewReplicationProgress, newReplicationProgress_);
          };
          ReplicationProgress() = default ;
          ReplicationProgress(const ReplicationProgress &) = default ;
          ReplicationProgress(ReplicationProgress &&) = default ;
          ReplicationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReplicationProgress() = default ;
          ReplicationProgress& operator=(const ReplicationProgress &) = default ;
          ReplicationProgress& operator=(ReplicationProgress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->historicalReplicationProgress_ == nullptr
        && this->newReplicationProgress_ == nullptr; };
          // historicalReplicationProgress Field Functions 
          bool hasHistoricalReplicationProgress() const { return this->historicalReplicationProgress_ != nullptr;};
          void deleteHistoricalReplicationProgress() { this->historicalReplicationProgress_ = nullptr;};
          inline int32_t getHistoricalReplicationProgress() const { DARABONBA_PTR_GET_DEFAULT(historicalReplicationProgress_, 0) };
          inline ReplicationProgress& setHistoricalReplicationProgress(int32_t historicalReplicationProgress) { DARABONBA_PTR_SET_VALUE(historicalReplicationProgress_, historicalReplicationProgress) };


          // newReplicationProgress Field Functions 
          bool hasNewReplicationProgress() const { return this->newReplicationProgress_ != nullptr;};
          void deleteNewReplicationProgress() { this->newReplicationProgress_ = nullptr;};
          inline int64_t getNewReplicationProgress() const { DARABONBA_PTR_GET_DEFAULT(newReplicationProgress_, 0L) };
          inline ReplicationProgress& setNewReplicationProgress(int64_t newReplicationProgress) { DARABONBA_PTR_SET_VALUE(newReplicationProgress_, newReplicationProgress) };


        protected:
          // The progress of historical data synchronization from the backup vault to the mirror vault. Valid values: 0 to 100.
          shared_ptr<int32_t> historicalReplicationProgress_ {};
          // The latest synchronization time of incremental data in the mirror vault.
          shared_ptr<int64_t> newReplicationProgress_ {};
        };

        class BackupPlanStatistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BackupPlanStatistics& obj) { 
            DARABONBA_PTR_TO_JSON(Archive, archive_);
            DARABONBA_PTR_TO_JSON(CommonFileSystem, commonFileSystem_);
            DARABONBA_PTR_TO_JSON(CommonNas, commonNas_);
            DARABONBA_PTR_TO_JSON(Csg, csg_);
            DARABONBA_PTR_TO_JSON(EcsFile, ecsFile_);
            DARABONBA_PTR_TO_JSON(EcsHana, ecsHana_);
            DARABONBA_PTR_TO_JSON(Isilon, isilon_);
            DARABONBA_PTR_TO_JSON(LocalFile, localFile_);
            DARABONBA_PTR_TO_JSON(LocalVm, localVm_);
            DARABONBA_PTR_TO_JSON(MySql, mySql_);
            DARABONBA_PTR_TO_JSON(Nas, nas_);
            DARABONBA_PTR_TO_JSON(Oracle, oracle_);
            DARABONBA_PTR_TO_JSON(Oss, oss_);
            DARABONBA_PTR_TO_JSON(Ots, ots_);
            DARABONBA_PTR_TO_JSON(SqlServer, sqlServer_);
          };
          friend void from_json(const Darabonba::Json& j, BackupPlanStatistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Archive, archive_);
            DARABONBA_PTR_FROM_JSON(CommonFileSystem, commonFileSystem_);
            DARABONBA_PTR_FROM_JSON(CommonNas, commonNas_);
            DARABONBA_PTR_FROM_JSON(Csg, csg_);
            DARABONBA_PTR_FROM_JSON(EcsFile, ecsFile_);
            DARABONBA_PTR_FROM_JSON(EcsHana, ecsHana_);
            DARABONBA_PTR_FROM_JSON(Isilon, isilon_);
            DARABONBA_PTR_FROM_JSON(LocalFile, localFile_);
            DARABONBA_PTR_FROM_JSON(LocalVm, localVm_);
            DARABONBA_PTR_FROM_JSON(MySql, mySql_);
            DARABONBA_PTR_FROM_JSON(Nas, nas_);
            DARABONBA_PTR_FROM_JSON(Oracle, oracle_);
            DARABONBA_PTR_FROM_JSON(Oss, oss_);
            DARABONBA_PTR_FROM_JSON(Ots, ots_);
            DARABONBA_PTR_FROM_JSON(SqlServer, sqlServer_);
          };
          BackupPlanStatistics() = default ;
          BackupPlanStatistics(const BackupPlanStatistics &) = default ;
          BackupPlanStatistics(BackupPlanStatistics &&) = default ;
          BackupPlanStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BackupPlanStatistics() = default ;
          BackupPlanStatistics& operator=(const BackupPlanStatistics &) = default ;
          BackupPlanStatistics& operator=(BackupPlanStatistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->archive_ == nullptr
        && this->commonFileSystem_ == nullptr && this->commonNas_ == nullptr && this->csg_ == nullptr && this->ecsFile_ == nullptr && this->ecsHana_ == nullptr
        && this->isilon_ == nullptr && this->localFile_ == nullptr && this->localVm_ == nullptr && this->mySql_ == nullptr && this->nas_ == nullptr
        && this->oracle_ == nullptr && this->oss_ == nullptr && this->ots_ == nullptr && this->sqlServer_ == nullptr; };
          // archive Field Functions 
          bool hasArchive() const { return this->archive_ != nullptr;};
          void deleteArchive() { this->archive_ = nullptr;};
          inline int32_t getArchive() const { DARABONBA_PTR_GET_DEFAULT(archive_, 0) };
          inline BackupPlanStatistics& setArchive(int32_t archive) { DARABONBA_PTR_SET_VALUE(archive_, archive) };


          // commonFileSystem Field Functions 
          bool hasCommonFileSystem() const { return this->commonFileSystem_ != nullptr;};
          void deleteCommonFileSystem() { this->commonFileSystem_ = nullptr;};
          inline int32_t getCommonFileSystem() const { DARABONBA_PTR_GET_DEFAULT(commonFileSystem_, 0) };
          inline BackupPlanStatistics& setCommonFileSystem(int32_t commonFileSystem) { DARABONBA_PTR_SET_VALUE(commonFileSystem_, commonFileSystem) };


          // commonNas Field Functions 
          bool hasCommonNas() const { return this->commonNas_ != nullptr;};
          void deleteCommonNas() { this->commonNas_ = nullptr;};
          inline int32_t getCommonNas() const { DARABONBA_PTR_GET_DEFAULT(commonNas_, 0) };
          inline BackupPlanStatistics& setCommonNas(int32_t commonNas) { DARABONBA_PTR_SET_VALUE(commonNas_, commonNas) };


          // csg Field Functions 
          bool hasCsg() const { return this->csg_ != nullptr;};
          void deleteCsg() { this->csg_ = nullptr;};
          inline int32_t getCsg() const { DARABONBA_PTR_GET_DEFAULT(csg_, 0) };
          inline BackupPlanStatistics& setCsg(int32_t csg) { DARABONBA_PTR_SET_VALUE(csg_, csg) };


          // ecsFile Field Functions 
          bool hasEcsFile() const { return this->ecsFile_ != nullptr;};
          void deleteEcsFile() { this->ecsFile_ = nullptr;};
          inline int32_t getEcsFile() const { DARABONBA_PTR_GET_DEFAULT(ecsFile_, 0) };
          inline BackupPlanStatistics& setEcsFile(int32_t ecsFile) { DARABONBA_PTR_SET_VALUE(ecsFile_, ecsFile) };


          // ecsHana Field Functions 
          bool hasEcsHana() const { return this->ecsHana_ != nullptr;};
          void deleteEcsHana() { this->ecsHana_ = nullptr;};
          inline int32_t getEcsHana() const { DARABONBA_PTR_GET_DEFAULT(ecsHana_, 0) };
          inline BackupPlanStatistics& setEcsHana(int32_t ecsHana) { DARABONBA_PTR_SET_VALUE(ecsHana_, ecsHana) };


          // isilon Field Functions 
          bool hasIsilon() const { return this->isilon_ != nullptr;};
          void deleteIsilon() { this->isilon_ = nullptr;};
          inline int32_t getIsilon() const { DARABONBA_PTR_GET_DEFAULT(isilon_, 0) };
          inline BackupPlanStatistics& setIsilon(int32_t isilon) { DARABONBA_PTR_SET_VALUE(isilon_, isilon) };


          // localFile Field Functions 
          bool hasLocalFile() const { return this->localFile_ != nullptr;};
          void deleteLocalFile() { this->localFile_ = nullptr;};
          inline int32_t getLocalFile() const { DARABONBA_PTR_GET_DEFAULT(localFile_, 0) };
          inline BackupPlanStatistics& setLocalFile(int32_t localFile) { DARABONBA_PTR_SET_VALUE(localFile_, localFile) };


          // localVm Field Functions 
          bool hasLocalVm() const { return this->localVm_ != nullptr;};
          void deleteLocalVm() { this->localVm_ = nullptr;};
          inline int32_t getLocalVm() const { DARABONBA_PTR_GET_DEFAULT(localVm_, 0) };
          inline BackupPlanStatistics& setLocalVm(int32_t localVm) { DARABONBA_PTR_SET_VALUE(localVm_, localVm) };


          // mySql Field Functions 
          bool hasMySql() const { return this->mySql_ != nullptr;};
          void deleteMySql() { this->mySql_ = nullptr;};
          inline int32_t getMySql() const { DARABONBA_PTR_GET_DEFAULT(mySql_, 0) };
          inline BackupPlanStatistics& setMySql(int32_t mySql) { DARABONBA_PTR_SET_VALUE(mySql_, mySql) };


          // nas Field Functions 
          bool hasNas() const { return this->nas_ != nullptr;};
          void deleteNas() { this->nas_ = nullptr;};
          inline int32_t getNas() const { DARABONBA_PTR_GET_DEFAULT(nas_, 0) };
          inline BackupPlanStatistics& setNas(int32_t nas) { DARABONBA_PTR_SET_VALUE(nas_, nas) };


          // oracle Field Functions 
          bool hasOracle() const { return this->oracle_ != nullptr;};
          void deleteOracle() { this->oracle_ = nullptr;};
          inline int32_t getOracle() const { DARABONBA_PTR_GET_DEFAULT(oracle_, 0) };
          inline BackupPlanStatistics& setOracle(int32_t oracle) { DARABONBA_PTR_SET_VALUE(oracle_, oracle) };


          // oss Field Functions 
          bool hasOss() const { return this->oss_ != nullptr;};
          void deleteOss() { this->oss_ = nullptr;};
          inline int32_t getOss() const { DARABONBA_PTR_GET_DEFAULT(oss_, 0) };
          inline BackupPlanStatistics& setOss(int32_t oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };


          // ots Field Functions 
          bool hasOts() const { return this->ots_ != nullptr;};
          void deleteOts() { this->ots_ = nullptr;};
          inline int32_t getOts() const { DARABONBA_PTR_GET_DEFAULT(ots_, 0) };
          inline BackupPlanStatistics& setOts(int32_t ots) { DARABONBA_PTR_SET_VALUE(ots_, ots) };


          // sqlServer Field Functions 
          bool hasSqlServer() const { return this->sqlServer_ != nullptr;};
          void deleteSqlServer() { this->sqlServer_ = nullptr;};
          inline int32_t getSqlServer() const { DARABONBA_PTR_GET_DEFAULT(sqlServer_, 0) };
          inline BackupPlanStatistics& setSqlServer(int32_t sqlServer) { DARABONBA_PTR_SET_VALUE(sqlServer_, sqlServer) };


        protected:
          // The number of archive plans.
          shared_ptr<int32_t> archive_ {};
          // The number of Cloud Parallel File Storage (CPFS) backup plans.
          shared_ptr<int32_t> commonFileSystem_ {};
          // The number of backup plans for General-purpose NAS file systems.
          shared_ptr<int32_t> commonNas_ {};
          // The number of backup plans for Cloud Storage Gateway (CSG) gateways.
          shared_ptr<int32_t> csg_ {};
          // The number of backup plans for ECS files.
          shared_ptr<int32_t> ecsFile_ {};
          // The number of backup plans for SAP HANA instances.
          shared_ptr<int32_t> ecsHana_ {};
          // The number of backup plans for Isilon storage systems.
          shared_ptr<int32_t> isilon_ {};
          // The number of backup plans for on-premises servers.
          shared_ptr<int32_t> localFile_ {};
          // The number of backup plans for on-premises virtual machines (VMs).
          shared_ptr<int32_t> localVm_ {};
          // The number of backup plans for MySQL databases.
          shared_ptr<int32_t> mySql_ {};
          // The number of backup plans for NAS file systems.
          shared_ptr<int32_t> nas_ {};
          // The number of backup plans for Oracle databases.
          shared_ptr<int32_t> oracle_ {};
          // The number of backup plans for OSS buckets.
          shared_ptr<int32_t> oss_ {};
          // The number of backup plans for Tablestore instances.
          shared_ptr<int32_t> ots_ {};
          // The number of backup plans for SQL Server databases.
          shared_ptr<int32_t> sqlServer_ {};
        };

        virtual bool empty() const override { return this->archiveBytesDone_ == nullptr
        && this->archiveStorageSize_ == nullptr && this->backupPlanStatistics_ == nullptr && this->bucketName_ == nullptr && this->bytesDone_ == nullptr && this->chargeType_ == nullptr
        && this->chargedStorageSize_ == nullptr && this->compressionAlgorithm_ == nullptr && this->createdTime_ == nullptr && this->dedup_ == nullptr && this->description_ == nullptr
        && this->encryptType_ == nullptr && this->indexAvailable_ == nullptr && this->indexLevel_ == nullptr && this->indexUpdateTime_ == nullptr && this->kmsKeyId_ == nullptr
        && this->latestReplicationTime_ == nullptr && this->redundancyType_ == nullptr && this->replication_ == nullptr && this->replicationProgress_ == nullptr && this->replicationSourceOwnerId_ == nullptr
        && this->replicationSourceRegionId_ == nullptr && this->replicationSourceVault_ == nullptr && this->replicationSourceVaultId_ == nullptr && this->replicationStatus_ == nullptr && this->replicationTargetOwnerId_ == nullptr
        && this->replicationTargetRegionId_ == nullptr && this->replicationTargetVaultId_ == nullptr && this->resourceGroupId_ == nullptr && this->retention_ == nullptr && this->rsTargetAccountIds_ == nullptr
        && this->searchEnabled_ == nullptr && this->snapshotCount_ == nullptr && this->sourceTypes_ == nullptr && this->status_ == nullptr && this->storageSize_ == nullptr
        && this->tags_ == nullptr && this->trialInfo_ == nullptr && this->updatedTime_ == nullptr && this->vaultId_ == nullptr && this->vaultName_ == nullptr
        && this->vaultOwnerId_ == nullptr && this->vaultRegionId_ == nullptr && this->vaultStatusMessage_ == nullptr && this->vaultStorageClass_ == nullptr && this->vaultType_ == nullptr
        && this->wormEnabled_ == nullptr; };
        // archiveBytesDone Field Functions 
        bool hasArchiveBytesDone() const { return this->archiveBytesDone_ != nullptr;};
        void deleteArchiveBytesDone() { this->archiveBytesDone_ = nullptr;};
        inline int64_t getArchiveBytesDone() const { DARABONBA_PTR_GET_DEFAULT(archiveBytesDone_, 0L) };
        inline Vault& setArchiveBytesDone(int64_t archiveBytesDone) { DARABONBA_PTR_SET_VALUE(archiveBytesDone_, archiveBytesDone) };


        // archiveStorageSize Field Functions 
        bool hasArchiveStorageSize() const { return this->archiveStorageSize_ != nullptr;};
        void deleteArchiveStorageSize() { this->archiveStorageSize_ = nullptr;};
        inline int64_t getArchiveStorageSize() const { DARABONBA_PTR_GET_DEFAULT(archiveStorageSize_, 0L) };
        inline Vault& setArchiveStorageSize(int64_t archiveStorageSize) { DARABONBA_PTR_SET_VALUE(archiveStorageSize_, archiveStorageSize) };


        // backupPlanStatistics Field Functions 
        bool hasBackupPlanStatistics() const { return this->backupPlanStatistics_ != nullptr;};
        void deleteBackupPlanStatistics() { this->backupPlanStatistics_ = nullptr;};
        inline const Vault::BackupPlanStatistics & getBackupPlanStatistics() const { DARABONBA_PTR_GET_CONST(backupPlanStatistics_, Vault::BackupPlanStatistics) };
        inline Vault::BackupPlanStatistics getBackupPlanStatistics() { DARABONBA_PTR_GET(backupPlanStatistics_, Vault::BackupPlanStatistics) };
        inline Vault& setBackupPlanStatistics(const Vault::BackupPlanStatistics & backupPlanStatistics) { DARABONBA_PTR_SET_VALUE(backupPlanStatistics_, backupPlanStatistics) };
        inline Vault& setBackupPlanStatistics(Vault::BackupPlanStatistics && backupPlanStatistics) { DARABONBA_PTR_SET_RVALUE(backupPlanStatistics_, backupPlanStatistics) };


        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline Vault& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // bytesDone Field Functions 
        bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
        void deleteBytesDone() { this->bytesDone_ = nullptr;};
        inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
        inline Vault& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Vault& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // chargedStorageSize Field Functions 
        bool hasChargedStorageSize() const { return this->chargedStorageSize_ != nullptr;};
        void deleteChargedStorageSize() { this->chargedStorageSize_ = nullptr;};
        inline int64_t getChargedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(chargedStorageSize_, 0L) };
        inline Vault& setChargedStorageSize(int64_t chargedStorageSize) { DARABONBA_PTR_SET_VALUE(chargedStorageSize_, chargedStorageSize) };


        // compressionAlgorithm Field Functions 
        bool hasCompressionAlgorithm() const { return this->compressionAlgorithm_ != nullptr;};
        void deleteCompressionAlgorithm() { this->compressionAlgorithm_ = nullptr;};
        inline string getCompressionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(compressionAlgorithm_, "") };
        inline Vault& setCompressionAlgorithm(string compressionAlgorithm) { DARABONBA_PTR_SET_VALUE(compressionAlgorithm_, compressionAlgorithm) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Vault& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // dedup Field Functions 
        bool hasDedup() const { return this->dedup_ != nullptr;};
        void deleteDedup() { this->dedup_ = nullptr;};
        inline bool getDedup() const { DARABONBA_PTR_GET_DEFAULT(dedup_, false) };
        inline Vault& setDedup(bool dedup) { DARABONBA_PTR_SET_VALUE(dedup_, dedup) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Vault& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encryptType Field Functions 
        bool hasEncryptType() const { return this->encryptType_ != nullptr;};
        void deleteEncryptType() { this->encryptType_ = nullptr;};
        inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
        inline Vault& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


        // indexAvailable Field Functions 
        bool hasIndexAvailable() const { return this->indexAvailable_ != nullptr;};
        void deleteIndexAvailable() { this->indexAvailable_ = nullptr;};
        inline bool getIndexAvailable() const { DARABONBA_PTR_GET_DEFAULT(indexAvailable_, false) };
        inline Vault& setIndexAvailable(bool indexAvailable) { DARABONBA_PTR_SET_VALUE(indexAvailable_, indexAvailable) };


        // indexLevel Field Functions 
        bool hasIndexLevel() const { return this->indexLevel_ != nullptr;};
        void deleteIndexLevel() { this->indexLevel_ = nullptr;};
        inline string getIndexLevel() const { DARABONBA_PTR_GET_DEFAULT(indexLevel_, "") };
        inline Vault& setIndexLevel(string indexLevel) { DARABONBA_PTR_SET_VALUE(indexLevel_, indexLevel) };


        // indexUpdateTime Field Functions 
        bool hasIndexUpdateTime() const { return this->indexUpdateTime_ != nullptr;};
        void deleteIndexUpdateTime() { this->indexUpdateTime_ = nullptr;};
        inline int64_t getIndexUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(indexUpdateTime_, 0L) };
        inline Vault& setIndexUpdateTime(int64_t indexUpdateTime) { DARABONBA_PTR_SET_VALUE(indexUpdateTime_, indexUpdateTime) };


        // kmsKeyId Field Functions 
        bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
        void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
        inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
        inline Vault& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


        // latestReplicationTime Field Functions 
        bool hasLatestReplicationTime() const { return this->latestReplicationTime_ != nullptr;};
        void deleteLatestReplicationTime() { this->latestReplicationTime_ = nullptr;};
        inline int64_t getLatestReplicationTime() const { DARABONBA_PTR_GET_DEFAULT(latestReplicationTime_, 0L) };
        inline Vault& setLatestReplicationTime(int64_t latestReplicationTime) { DARABONBA_PTR_SET_VALUE(latestReplicationTime_, latestReplicationTime) };


        // redundancyType Field Functions 
        bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
        void deleteRedundancyType() { this->redundancyType_ = nullptr;};
        inline string getRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
        inline Vault& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


        // replication Field Functions 
        bool hasReplication() const { return this->replication_ != nullptr;};
        void deleteReplication() { this->replication_ = nullptr;};
        inline bool getReplication() const { DARABONBA_PTR_GET_DEFAULT(replication_, false) };
        inline Vault& setReplication(bool replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


        // replicationProgress Field Functions 
        bool hasReplicationProgress() const { return this->replicationProgress_ != nullptr;};
        void deleteReplicationProgress() { this->replicationProgress_ = nullptr;};
        inline const Vault::ReplicationProgress & getReplicationProgress() const { DARABONBA_PTR_GET_CONST(replicationProgress_, Vault::ReplicationProgress) };
        inline Vault::ReplicationProgress getReplicationProgress() { DARABONBA_PTR_GET(replicationProgress_, Vault::ReplicationProgress) };
        inline Vault& setReplicationProgress(const Vault::ReplicationProgress & replicationProgress) { DARABONBA_PTR_SET_VALUE(replicationProgress_, replicationProgress) };
        inline Vault& setReplicationProgress(Vault::ReplicationProgress && replicationProgress) { DARABONBA_PTR_SET_RVALUE(replicationProgress_, replicationProgress) };


        // replicationSourceOwnerId Field Functions 
        bool hasReplicationSourceOwnerId() const { return this->replicationSourceOwnerId_ != nullptr;};
        void deleteReplicationSourceOwnerId() { this->replicationSourceOwnerId_ = nullptr;};
        inline int64_t getReplicationSourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceOwnerId_, 0L) };
        inline Vault& setReplicationSourceOwnerId(int64_t replicationSourceOwnerId) { DARABONBA_PTR_SET_VALUE(replicationSourceOwnerId_, replicationSourceOwnerId) };


        // replicationSourceRegionId Field Functions 
        bool hasReplicationSourceRegionId() const { return this->replicationSourceRegionId_ != nullptr;};
        void deleteReplicationSourceRegionId() { this->replicationSourceRegionId_ = nullptr;};
        inline string getReplicationSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceRegionId_, "") };
        inline Vault& setReplicationSourceRegionId(string replicationSourceRegionId) { DARABONBA_PTR_SET_VALUE(replicationSourceRegionId_, replicationSourceRegionId) };


        // replicationSourceVault Field Functions 
        bool hasReplicationSourceVault() const { return this->replicationSourceVault_ != nullptr;};
        void deleteReplicationSourceVault() { this->replicationSourceVault_ = nullptr;};
        inline bool getReplicationSourceVault() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVault_, false) };
        inline Vault& setReplicationSourceVault(bool replicationSourceVault) { DARABONBA_PTR_SET_VALUE(replicationSourceVault_, replicationSourceVault) };


        // replicationSourceVaultId Field Functions 
        bool hasReplicationSourceVaultId() const { return this->replicationSourceVaultId_ != nullptr;};
        void deleteReplicationSourceVaultId() { this->replicationSourceVaultId_ = nullptr;};
        inline string getReplicationSourceVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVaultId_, "") };
        inline Vault& setReplicationSourceVaultId(string replicationSourceVaultId) { DARABONBA_PTR_SET_VALUE(replicationSourceVaultId_, replicationSourceVaultId) };


        // replicationStatus Field Functions 
        bool hasReplicationStatus() const { return this->replicationStatus_ != nullptr;};
        void deleteReplicationStatus() { this->replicationStatus_ = nullptr;};
        inline string getReplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(replicationStatus_, "") };
        inline Vault& setReplicationStatus(string replicationStatus) { DARABONBA_PTR_SET_VALUE(replicationStatus_, replicationStatus) };


        // replicationTargetOwnerId Field Functions 
        bool hasReplicationTargetOwnerId() const { return this->replicationTargetOwnerId_ != nullptr;};
        void deleteReplicationTargetOwnerId() { this->replicationTargetOwnerId_ = nullptr;};
        inline int64_t getReplicationTargetOwnerId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetOwnerId_, 0L) };
        inline Vault& setReplicationTargetOwnerId(int64_t replicationTargetOwnerId) { DARABONBA_PTR_SET_VALUE(replicationTargetOwnerId_, replicationTargetOwnerId) };


        // replicationTargetRegionId Field Functions 
        bool hasReplicationTargetRegionId() const { return this->replicationTargetRegionId_ != nullptr;};
        void deleteReplicationTargetRegionId() { this->replicationTargetRegionId_ = nullptr;};
        inline string getReplicationTargetRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetRegionId_, "") };
        inline Vault& setReplicationTargetRegionId(string replicationTargetRegionId) { DARABONBA_PTR_SET_VALUE(replicationTargetRegionId_, replicationTargetRegionId) };


        // replicationTargetVaultId Field Functions 
        bool hasReplicationTargetVaultId() const { return this->replicationTargetVaultId_ != nullptr;};
        void deleteReplicationTargetVaultId() { this->replicationTargetVaultId_ = nullptr;};
        inline string getReplicationTargetVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetVaultId_, "") };
        inline Vault& setReplicationTargetVaultId(string replicationTargetVaultId) { DARABONBA_PTR_SET_VALUE(replicationTargetVaultId_, replicationTargetVaultId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Vault& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
        inline Vault& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


        // rsTargetAccountIds Field Functions 
        bool hasRsTargetAccountIds() const { return this->rsTargetAccountIds_ != nullptr;};
        void deleteRsTargetAccountIds() { this->rsTargetAccountIds_ = nullptr;};
        inline const Vault::RsTargetAccountIds & getRsTargetAccountIds() const { DARABONBA_PTR_GET_CONST(rsTargetAccountIds_, Vault::RsTargetAccountIds) };
        inline Vault::RsTargetAccountIds getRsTargetAccountIds() { DARABONBA_PTR_GET(rsTargetAccountIds_, Vault::RsTargetAccountIds) };
        inline Vault& setRsTargetAccountIds(const Vault::RsTargetAccountIds & rsTargetAccountIds) { DARABONBA_PTR_SET_VALUE(rsTargetAccountIds_, rsTargetAccountIds) };
        inline Vault& setRsTargetAccountIds(Vault::RsTargetAccountIds && rsTargetAccountIds) { DARABONBA_PTR_SET_RVALUE(rsTargetAccountIds_, rsTargetAccountIds) };


        // searchEnabled Field Functions 
        bool hasSearchEnabled() const { return this->searchEnabled_ != nullptr;};
        void deleteSearchEnabled() { this->searchEnabled_ = nullptr;};
        inline bool getSearchEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchEnabled_, false) };
        inline Vault& setSearchEnabled(bool searchEnabled) { DARABONBA_PTR_SET_VALUE(searchEnabled_, searchEnabled) };


        // snapshotCount Field Functions 
        bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
        void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
        inline int64_t getSnapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, 0L) };
        inline Vault& setSnapshotCount(int64_t snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


        // sourceTypes Field Functions 
        bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
        void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
        inline const Vault::SourceTypes & getSourceTypes() const { DARABONBA_PTR_GET_CONST(sourceTypes_, Vault::SourceTypes) };
        inline Vault::SourceTypes getSourceTypes() { DARABONBA_PTR_GET(sourceTypes_, Vault::SourceTypes) };
        inline Vault& setSourceTypes(const Vault::SourceTypes & sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };
        inline Vault& setSourceTypes(Vault::SourceTypes && sourceTypes) { DARABONBA_PTR_SET_RVALUE(sourceTypes_, sourceTypes) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Vault& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageSize Field Functions 
        bool hasStorageSize() const { return this->storageSize_ != nullptr;};
        void deleteStorageSize() { this->storageSize_ = nullptr;};
        inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
        inline Vault& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Vault::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Vault::Tags) };
        inline Vault::Tags getTags() { DARABONBA_PTR_GET(tags_, Vault::Tags) };
        inline Vault& setTags(const Vault::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Vault& setTags(Vault::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // trialInfo Field Functions 
        bool hasTrialInfo() const { return this->trialInfo_ != nullptr;};
        void deleteTrialInfo() { this->trialInfo_ = nullptr;};
        inline const Vault::TrialInfo & getTrialInfo() const { DARABONBA_PTR_GET_CONST(trialInfo_, Vault::TrialInfo) };
        inline Vault::TrialInfo getTrialInfo() { DARABONBA_PTR_GET(trialInfo_, Vault::TrialInfo) };
        inline Vault& setTrialInfo(const Vault::TrialInfo & trialInfo) { DARABONBA_PTR_SET_VALUE(trialInfo_, trialInfo) };
        inline Vault& setTrialInfo(Vault::TrialInfo && trialInfo) { DARABONBA_PTR_SET_RVALUE(trialInfo_, trialInfo) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline Vault& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline Vault& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


        // vaultName Field Functions 
        bool hasVaultName() const { return this->vaultName_ != nullptr;};
        void deleteVaultName() { this->vaultName_ = nullptr;};
        inline string getVaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
        inline Vault& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


        // vaultOwnerId Field Functions 
        bool hasVaultOwnerId() const { return this->vaultOwnerId_ != nullptr;};
        void deleteVaultOwnerId() { this->vaultOwnerId_ = nullptr;};
        inline int64_t getVaultOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vaultOwnerId_, 0L) };
        inline Vault& setVaultOwnerId(int64_t vaultOwnerId) { DARABONBA_PTR_SET_VALUE(vaultOwnerId_, vaultOwnerId) };


        // vaultRegionId Field Functions 
        bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
        void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
        inline string getVaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
        inline Vault& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


        // vaultStatusMessage Field Functions 
        bool hasVaultStatusMessage() const { return this->vaultStatusMessage_ != nullptr;};
        void deleteVaultStatusMessage() { this->vaultStatusMessage_ = nullptr;};
        inline string getVaultStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(vaultStatusMessage_, "") };
        inline Vault& setVaultStatusMessage(string vaultStatusMessage) { DARABONBA_PTR_SET_VALUE(vaultStatusMessage_, vaultStatusMessage) };


        // vaultStorageClass Field Functions 
        bool hasVaultStorageClass() const { return this->vaultStorageClass_ != nullptr;};
        void deleteVaultStorageClass() { this->vaultStorageClass_ = nullptr;};
        inline string getVaultStorageClass() const { DARABONBA_PTR_GET_DEFAULT(vaultStorageClass_, "") };
        inline Vault& setVaultStorageClass(string vaultStorageClass) { DARABONBA_PTR_SET_VALUE(vaultStorageClass_, vaultStorageClass) };


        // vaultType Field Functions 
        bool hasVaultType() const { return this->vaultType_ != nullptr;};
        void deleteVaultType() { this->vaultType_ = nullptr;};
        inline string getVaultType() const { DARABONBA_PTR_GET_DEFAULT(vaultType_, "") };
        inline Vault& setVaultType(string vaultType) { DARABONBA_PTR_SET_VALUE(vaultType_, vaultType) };


        // wormEnabled Field Functions 
        bool hasWormEnabled() const { return this->wormEnabled_ != nullptr;};
        void deleteWormEnabled() { this->wormEnabled_ = nullptr;};
        inline bool getWormEnabled() const { DARABONBA_PTR_GET_DEFAULT(wormEnabled_, false) };
        inline Vault& setWormEnabled(bool wormEnabled) { DARABONBA_PTR_SET_VALUE(wormEnabled_, wormEnabled) };


      protected:
        // Archival tier backup data volume. Unit: bytes.
        shared_ptr<int64_t> archiveBytesDone_ {};
        // The billable storage usage of the Archive tier. Unit: bytes.
        shared_ptr<int64_t> archiveStorageSize_ {};
        // The statistics of backup plans that use the backup vault.
        shared_ptr<Vault::BackupPlanStatistics> backupPlanStatistics_ {};
        // The name of the OSS bucket used by the backup vault.
        shared_ptr<string> bucketName_ {};
        // The amount of data that is backed up. Unit: bytes.
        shared_ptr<int64_t> bytesDone_ {};
        // The billing method of the backup vault.
        shared_ptr<string> chargeType_ {};
        // The billable storage usage of the archive vault. Unit: bytes.
        shared_ptr<int64_t> chargedStorageSize_ {};
        // The encryption algorithm used to compress the backup vault. Valid values:
        // 
        // *   DISABLED: The backup vault is not compressed.
        // *   SNAPPY: The backup vault is compressed by using the SNAPPY encryption algorithm.
        // *   ZSTD: The backup vault is compressed by using Zstandard, a fast lossless compression algorithm.
        shared_ptr<string> compressionAlgorithm_ {};
        // The time when the backup vault was created. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createdTime_ {};
        // Indicates whether the deduplication feature is enabled.
        shared_ptr<bool> dedup_ {};
        // The description of the backup vault.
        shared_ptr<string> description_ {};
        // The encryption type of the backup vault. Valid values:
        // 
        // *   NONE: The backup vault is not encrypted.
        // *   HBR_PRIVATE (default): The backup vault is encrypted by using a key provided by Cloud Backup.
        // *   KMS: The backup vault is encrypted by using a custom master key (CMK) created in Key Management Service (KMS).
        shared_ptr<string> encryptType_ {};
        // Indicates whether indexes are available. Indexes are available when they are not being updated.
        shared_ptr<bool> indexAvailable_ {};
        // The index level.
        // 
        // *   OFF: No indexes are created.
        // *   META: Metadata indexes are created.
        // *   ALL: Full-text indexes are created.
        shared_ptr<string> indexLevel_ {};
        // The time when the index was updated.
        shared_ptr<int64_t> indexUpdateTime_ {};
        // The ID or alias of the CMK created in KMS. This parameter is returned only when EncryptType is set to KMS.
        shared_ptr<string> kmsKeyId_ {};
        // The time when the last remote backup was synchronized. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> latestReplicationTime_ {};
        // The data redundancy type of the backup vault. Valid values:
        // 
        // *   LRS: Locally redundant storage (LRS) is enabled for the backup vault. Cloud Backup stores the copies of each object on multiple devices of different facilities in the same zone. This way, Cloud Backup ensures data durability and availability even if hardware failures occur.
        // *   ZRS: Zone-redundant storage (ZRS) is enabled for the backup vault. Cloud Backup uses the multi-zone mechanism to distribute data across three zones within the same region. If a zone fails, the data that is stored in the other two zones is still accessible.
        shared_ptr<string> redundancyType_ {};
        // Indicates whether the backup vault is a remote backup vault. Valid values:
        // 
        // *   true: The backup vault is a remote backup vault.
        // *   false: The backup vault is a local backup vault.
        shared_ptr<bool> replication_ {};
        // The progress of data synchronization from the backup vault to the mirror vault.
        shared_ptr<Vault::ReplicationProgress> replicationProgress_ {};
        shared_ptr<int64_t> replicationSourceOwnerId_ {};
        // The ID of the region in which the source vault resides. This parameter is valid only for remote backup vaults.
        shared_ptr<string> replicationSourceRegionId_ {};
        // Indicate whether the backup vault is the source vault that corresponds to the remote backup vault. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> replicationSourceVault_ {};
        // The ID of the source vault that corresponds to the remote backup vault.
        shared_ptr<string> replicationSourceVaultId_ {};
        shared_ptr<string> replicationStatus_ {};
        shared_ptr<int64_t> replicationTargetOwnerId_ {};
        // Target region for remote backup repository.
        shared_ptr<string> replicationTargetRegionId_ {};
        shared_ptr<string> replicationTargetVaultId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The retention period of the backup vault. Unit: days.
        shared_ptr<int64_t> retention_ {};
        shared_ptr<Vault::RsTargetAccountIds> rsTargetAccountIds_ {};
        // Indicates whether the backup search feature is enabled.
        shared_ptr<bool> searchEnabled_ {};
        // The number of snapshots in the backup vault.
        shared_ptr<int64_t> snapshotCount_ {};
        // The data source types of the backup vault.
        shared_ptr<Vault::SourceTypes> sourceTypes_ {};
        // The status of the backup vault. Valid values:
        // 
        // *   **UNKNOWN**: The backup vault is in an unknown state.
        // *   **INITIALIZING**: The backup vault is being initialized.
        // *   **CREATED**: The backup vault is created.
        // *   **ERROR**: An error occurs on the backup vault.
        shared_ptr<string> status_ {};
        // The usage of the backup vault. Unit: bytes.
        shared_ptr<int64_t> storageSize_ {};
        // The tags of the backup vault.
        shared_ptr<Vault::Tags> tags_ {};
        // The free trial information.
        shared_ptr<Vault::TrialInfo> trialInfo_ {};
        // The time when the backup vault was updated. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
        // The name of the backup vault.
        shared_ptr<string> vaultName_ {};
        shared_ptr<int64_t> vaultOwnerId_ {};
        // The ID of the region in which the backup vault resides.
        shared_ptr<string> vaultRegionId_ {};
        // The status message that is returned when the backup vault is in the ERROR state. This parameter is valid only for remote backup vaults. Valid values:
        // 
        // *   **UNKNOWN_ERROR**: An unknown error occurs.
        // *   **SOURCE_VAULT_ALREADY_HAS_REPLICATION**: A mirror vault is configured for the source vault.
        shared_ptr<string> vaultStatusMessage_ {};
        // The storage class of the backup vault. Valid value: **STANDARD**, which indicates standard storage.
        shared_ptr<string> vaultStorageClass_ {};
        // The type of the backup vault. Valid value: **STANDARD**, which indicates a standard backup vault.
        shared_ptr<string> vaultType_ {};
        // Indicates whether the immutable backup feature is enabled.
        shared_ptr<bool> wormEnabled_ {};
      };

      virtual bool empty() const override { return this->vault_ == nullptr; };
      // vault Field Functions 
      bool hasVault() const { return this->vault_ != nullptr;};
      void deleteVault() { this->vault_ = nullptr;};
      inline const vector<Vaults::Vault> & getVault() const { DARABONBA_PTR_GET_CONST(vault_, vector<Vaults::Vault>) };
      inline vector<Vaults::Vault> getVault() { DARABONBA_PTR_GET(vault_, vector<Vaults::Vault>) };
      inline Vaults& setVault(const vector<Vaults::Vault> & vault) { DARABONBA_PTR_SET_VALUE(vault_, vault) };
      inline Vaults& setVault(vector<Vaults::Vault> && vault) { DARABONBA_PTR_SET_RVALUE(vault_, vault) };


    protected:
      shared_ptr<vector<Vaults::Vault>> vault_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr && this->vaults_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVaultsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeVaultsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVaultsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVaultsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVaultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeVaultsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVaultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vaults Field Functions 
    bool hasVaults() const { return this->vaults_ != nullptr;};
    void deleteVaults() { this->vaults_ = nullptr;};
    inline const DescribeVaultsResponseBody::Vaults & getVaults() const { DARABONBA_PTR_GET_CONST(vaults_, DescribeVaultsResponseBody::Vaults) };
    inline DescribeVaultsResponseBody::Vaults getVaults() { DARABONBA_PTR_GET(vaults_, DescribeVaultsResponseBody::Vaults) };
    inline DescribeVaultsResponseBody& setVaults(const DescribeVaultsResponseBody::Vaults & vaults) { DARABONBA_PTR_SET_VALUE(vaults_, vaults) };
    inline DescribeVaultsResponseBody& setVaults(DescribeVaultsResponseBody::Vaults && vaults) { DARABONBA_PTR_SET_RVALUE(vaults_, vaults) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // Page number for pagination, starting from 1. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size, with a minimum value of 1, a maximum value of 99, and a default value of 10.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Whether the request was successful.
    // - true: Success - false: Failure
    shared_ptr<bool> success_ {};
    // Returns the total number of backup repositories.
    shared_ptr<int32_t> totalCount_ {};
    // The backup vaults.
    shared_ptr<DescribeVaultsResponseBody::Vaults> vaults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
