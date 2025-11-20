// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics.hpp>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultReplicationProgress.hpp>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultSourceTypes.hpp>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultTags.hpp>
#include <alibabacloud/models/DescribeVaultsResponseBodyVaultsVaultTrialInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVault : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVault& obj) { 
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
      DARABONBA_PTR_TO_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceVault, replicationSourceVault_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_TO_JSON(ReplicationTargetRegionId, replicationTargetRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
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
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_TO_JSON(VaultStatusMessage, vaultStatusMessage_);
      DARABONBA_PTR_TO_JSON(VaultStorageClass, vaultStorageClass_);
      DARABONBA_PTR_TO_JSON(VaultType, vaultType_);
      DARABONBA_PTR_TO_JSON(WormEnabled, wormEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVault& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceVault, replicationSourceVault_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_FROM_JSON(ReplicationTargetRegionId, replicationTargetRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
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
      DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultStatusMessage, vaultStatusMessage_);
      DARABONBA_PTR_FROM_JSON(VaultStorageClass, vaultStorageClass_);
      DARABONBA_PTR_FROM_JSON(VaultType, vaultType_);
      DARABONBA_PTR_FROM_JSON(WormEnabled, wormEnabled_);
    };
    DescribeVaultsResponseBodyVaultsVault() = default ;
    DescribeVaultsResponseBodyVaultsVault(const DescribeVaultsResponseBodyVaultsVault &) = default ;
    DescribeVaultsResponseBodyVaultsVault(DescribeVaultsResponseBodyVaultsVault &&) = default ;
    DescribeVaultsResponseBodyVaultsVault(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVault() = default ;
    DescribeVaultsResponseBodyVaultsVault& operator=(const DescribeVaultsResponseBodyVaultsVault &) = default ;
    DescribeVaultsResponseBodyVaultsVault& operator=(DescribeVaultsResponseBodyVaultsVault &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveBytesDone_ == nullptr
        && return this->archiveStorageSize_ == nullptr && return this->backupPlanStatistics_ == nullptr && return this->bucketName_ == nullptr && return this->bytesDone_ == nullptr && return this->chargeType_ == nullptr
        && return this->chargedStorageSize_ == nullptr && return this->compressionAlgorithm_ == nullptr && return this->createdTime_ == nullptr && return this->dedup_ == nullptr && return this->description_ == nullptr
        && return this->encryptType_ == nullptr && return this->indexAvailable_ == nullptr && return this->indexLevel_ == nullptr && return this->indexUpdateTime_ == nullptr && return this->kmsKeyId_ == nullptr
        && return this->latestReplicationTime_ == nullptr && return this->redundancyType_ == nullptr && return this->replication_ == nullptr && return this->replicationProgress_ == nullptr && return this->replicationSourceRegionId_ == nullptr
        && return this->replicationSourceVault_ == nullptr && return this->replicationSourceVaultId_ == nullptr && return this->replicationTargetRegionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->retention_ == nullptr
        && return this->searchEnabled_ == nullptr && return this->snapshotCount_ == nullptr && return this->sourceTypes_ == nullptr && return this->status_ == nullptr && return this->storageSize_ == nullptr
        && return this->tags_ == nullptr && return this->trialInfo_ == nullptr && return this->updatedTime_ == nullptr && return this->vaultId_ == nullptr && return this->vaultName_ == nullptr
        && return this->vaultRegionId_ == nullptr && return this->vaultStatusMessage_ == nullptr && return this->vaultStorageClass_ == nullptr && return this->vaultType_ == nullptr && return this->wormEnabled_ == nullptr; };
    // archiveBytesDone Field Functions 
    bool hasArchiveBytesDone() const { return this->archiveBytesDone_ != nullptr;};
    void deleteArchiveBytesDone() { this->archiveBytesDone_ = nullptr;};
    inline int64_t archiveBytesDone() const { DARABONBA_PTR_GET_DEFAULT(archiveBytesDone_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setArchiveBytesDone(int64_t archiveBytesDone) { DARABONBA_PTR_SET_VALUE(archiveBytesDone_, archiveBytesDone) };


    // archiveStorageSize Field Functions 
    bool hasArchiveStorageSize() const { return this->archiveStorageSize_ != nullptr;};
    void deleteArchiveStorageSize() { this->archiveStorageSize_ = nullptr;};
    inline int64_t archiveStorageSize() const { DARABONBA_PTR_GET_DEFAULT(archiveStorageSize_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setArchiveStorageSize(int64_t archiveStorageSize) { DARABONBA_PTR_SET_VALUE(archiveStorageSize_, archiveStorageSize) };


    // backupPlanStatistics Field Functions 
    bool hasBackupPlanStatistics() const { return this->backupPlanStatistics_ != nullptr;};
    void deleteBackupPlanStatistics() { this->backupPlanStatistics_ = nullptr;};
    inline const Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics & backupPlanStatistics() const { DARABONBA_PTR_GET_CONST(backupPlanStatistics_, Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics) };
    inline Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics backupPlanStatistics() { DARABONBA_PTR_GET(backupPlanStatistics_, Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics) };
    inline DescribeVaultsResponseBodyVaultsVault& setBackupPlanStatistics(const Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics & backupPlanStatistics) { DARABONBA_PTR_SET_VALUE(backupPlanStatistics_, backupPlanStatistics) };
    inline DescribeVaultsResponseBodyVaultsVault& setBackupPlanStatistics(Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics && backupPlanStatistics) { DARABONBA_PTR_SET_RVALUE(backupPlanStatistics_, backupPlanStatistics) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // chargedStorageSize Field Functions 
    bool hasChargedStorageSize() const { return this->chargedStorageSize_ != nullptr;};
    void deleteChargedStorageSize() { this->chargedStorageSize_ = nullptr;};
    inline int64_t chargedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(chargedStorageSize_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setChargedStorageSize(int64_t chargedStorageSize) { DARABONBA_PTR_SET_VALUE(chargedStorageSize_, chargedStorageSize) };


    // compressionAlgorithm Field Functions 
    bool hasCompressionAlgorithm() const { return this->compressionAlgorithm_ != nullptr;};
    void deleteCompressionAlgorithm() { this->compressionAlgorithm_ = nullptr;};
    inline string compressionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(compressionAlgorithm_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setCompressionAlgorithm(string compressionAlgorithm) { DARABONBA_PTR_SET_VALUE(compressionAlgorithm_, compressionAlgorithm) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // dedup Field Functions 
    bool hasDedup() const { return this->dedup_ != nullptr;};
    void deleteDedup() { this->dedup_ = nullptr;};
    inline bool dedup() const { DARABONBA_PTR_GET_DEFAULT(dedup_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setDedup(bool dedup) { DARABONBA_PTR_SET_VALUE(dedup_, dedup) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // indexAvailable Field Functions 
    bool hasIndexAvailable() const { return this->indexAvailable_ != nullptr;};
    void deleteIndexAvailable() { this->indexAvailable_ = nullptr;};
    inline bool indexAvailable() const { DARABONBA_PTR_GET_DEFAULT(indexAvailable_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setIndexAvailable(bool indexAvailable) { DARABONBA_PTR_SET_VALUE(indexAvailable_, indexAvailable) };


    // indexLevel Field Functions 
    bool hasIndexLevel() const { return this->indexLevel_ != nullptr;};
    void deleteIndexLevel() { this->indexLevel_ = nullptr;};
    inline string indexLevel() const { DARABONBA_PTR_GET_DEFAULT(indexLevel_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setIndexLevel(string indexLevel) { DARABONBA_PTR_SET_VALUE(indexLevel_, indexLevel) };


    // indexUpdateTime Field Functions 
    bool hasIndexUpdateTime() const { return this->indexUpdateTime_ != nullptr;};
    void deleteIndexUpdateTime() { this->indexUpdateTime_ = nullptr;};
    inline int64_t indexUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(indexUpdateTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setIndexUpdateTime(int64_t indexUpdateTime) { DARABONBA_PTR_SET_VALUE(indexUpdateTime_, indexUpdateTime) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // latestReplicationTime Field Functions 
    bool hasLatestReplicationTime() const { return this->latestReplicationTime_ != nullptr;};
    void deleteLatestReplicationTime() { this->latestReplicationTime_ = nullptr;};
    inline int64_t latestReplicationTime() const { DARABONBA_PTR_GET_DEFAULT(latestReplicationTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setLatestReplicationTime(int64_t latestReplicationTime) { DARABONBA_PTR_SET_VALUE(latestReplicationTime_, latestReplicationTime) };


    // redundancyType Field Functions 
    bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
    void deleteRedundancyType() { this->redundancyType_ = nullptr;};
    inline string redundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


    // replication Field Functions 
    bool hasReplication() const { return this->replication_ != nullptr;};
    void deleteReplication() { this->replication_ = nullptr;};
    inline bool replication() const { DARABONBA_PTR_GET_DEFAULT(replication_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setReplication(bool replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


    // replicationProgress Field Functions 
    bool hasReplicationProgress() const { return this->replicationProgress_ != nullptr;};
    void deleteReplicationProgress() { this->replicationProgress_ = nullptr;};
    inline const Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress & replicationProgress() const { DARABONBA_PTR_GET_CONST(replicationProgress_, Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress) };
    inline Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress replicationProgress() { DARABONBA_PTR_GET(replicationProgress_, Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress) };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationProgress(const Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress & replicationProgress) { DARABONBA_PTR_SET_VALUE(replicationProgress_, replicationProgress) };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationProgress(Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress && replicationProgress) { DARABONBA_PTR_SET_RVALUE(replicationProgress_, replicationProgress) };


    // replicationSourceRegionId Field Functions 
    bool hasReplicationSourceRegionId() const { return this->replicationSourceRegionId_ != nullptr;};
    void deleteReplicationSourceRegionId() { this->replicationSourceRegionId_ = nullptr;};
    inline string replicationSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceRegionId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationSourceRegionId(string replicationSourceRegionId) { DARABONBA_PTR_SET_VALUE(replicationSourceRegionId_, replicationSourceRegionId) };


    // replicationSourceVault Field Functions 
    bool hasReplicationSourceVault() const { return this->replicationSourceVault_ != nullptr;};
    void deleteReplicationSourceVault() { this->replicationSourceVault_ = nullptr;};
    inline bool replicationSourceVault() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVault_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationSourceVault(bool replicationSourceVault) { DARABONBA_PTR_SET_VALUE(replicationSourceVault_, replicationSourceVault) };


    // replicationSourceVaultId Field Functions 
    bool hasReplicationSourceVaultId() const { return this->replicationSourceVaultId_ != nullptr;};
    void deleteReplicationSourceVaultId() { this->replicationSourceVaultId_ = nullptr;};
    inline string replicationSourceVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVaultId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationSourceVaultId(string replicationSourceVaultId) { DARABONBA_PTR_SET_VALUE(replicationSourceVaultId_, replicationSourceVaultId) };


    // replicationTargetRegionId Field Functions 
    bool hasReplicationTargetRegionId() const { return this->replicationTargetRegionId_ != nullptr;};
    void deleteReplicationTargetRegionId() { this->replicationTargetRegionId_ = nullptr;};
    inline string replicationTargetRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetRegionId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setReplicationTargetRegionId(string replicationTargetRegionId) { DARABONBA_PTR_SET_VALUE(replicationTargetRegionId_, replicationTargetRegionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // searchEnabled Field Functions 
    bool hasSearchEnabled() const { return this->searchEnabled_ != nullptr;};
    void deleteSearchEnabled() { this->searchEnabled_ = nullptr;};
    inline bool searchEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchEnabled_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setSearchEnabled(bool searchEnabled) { DARABONBA_PTR_SET_VALUE(searchEnabled_, searchEnabled) };


    // snapshotCount Field Functions 
    bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
    void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
    inline int64_t snapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setSnapshotCount(int64_t snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline const Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes & sourceTypes() const { DARABONBA_PTR_GET_CONST(sourceTypes_, Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes) };
    inline Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes sourceTypes() { DARABONBA_PTR_GET(sourceTypes_, Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes) };
    inline DescribeVaultsResponseBodyVaultsVault& setSourceTypes(const Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes & sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };
    inline DescribeVaultsResponseBodyVaultsVault& setSourceTypes(Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes && sourceTypes) { DARABONBA_PTR_SET_RVALUE(sourceTypes_, sourceTypes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVaultsResponseBodyVaultsVaultTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVaultsResponseBodyVaultsVaultTags) };
    inline Models::DescribeVaultsResponseBodyVaultsVaultTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVaultsResponseBodyVaultsVaultTags) };
    inline DescribeVaultsResponseBodyVaultsVault& setTags(const Models::DescribeVaultsResponseBodyVaultsVaultTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVaultsResponseBodyVaultsVault& setTags(Models::DescribeVaultsResponseBodyVaultsVaultTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trialInfo Field Functions 
    bool hasTrialInfo() const { return this->trialInfo_ != nullptr;};
    void deleteTrialInfo() { this->trialInfo_ = nullptr;};
    inline const Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo & trialInfo() const { DARABONBA_PTR_GET_CONST(trialInfo_, Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo) };
    inline Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo trialInfo() { DARABONBA_PTR_GET(trialInfo_, Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo) };
    inline DescribeVaultsResponseBodyVaultsVault& setTrialInfo(const Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo & trialInfo) { DARABONBA_PTR_SET_VALUE(trialInfo_, trialInfo) };
    inline DescribeVaultsResponseBodyVaultsVault& setTrialInfo(Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo && trialInfo) { DARABONBA_PTR_SET_RVALUE(trialInfo_, trialInfo) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVault& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string vaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string vaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    // vaultStatusMessage Field Functions 
    bool hasVaultStatusMessage() const { return this->vaultStatusMessage_ != nullptr;};
    void deleteVaultStatusMessage() { this->vaultStatusMessage_ = nullptr;};
    inline string vaultStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(vaultStatusMessage_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultStatusMessage(string vaultStatusMessage) { DARABONBA_PTR_SET_VALUE(vaultStatusMessage_, vaultStatusMessage) };


    // vaultStorageClass Field Functions 
    bool hasVaultStorageClass() const { return this->vaultStorageClass_ != nullptr;};
    void deleteVaultStorageClass() { this->vaultStorageClass_ = nullptr;};
    inline string vaultStorageClass() const { DARABONBA_PTR_GET_DEFAULT(vaultStorageClass_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultStorageClass(string vaultStorageClass) { DARABONBA_PTR_SET_VALUE(vaultStorageClass_, vaultStorageClass) };


    // vaultType Field Functions 
    bool hasVaultType() const { return this->vaultType_ != nullptr;};
    void deleteVaultType() { this->vaultType_ = nullptr;};
    inline string vaultType() const { DARABONBA_PTR_GET_DEFAULT(vaultType_, "") };
    inline DescribeVaultsResponseBodyVaultsVault& setVaultType(string vaultType) { DARABONBA_PTR_SET_VALUE(vaultType_, vaultType) };


    // wormEnabled Field Functions 
    bool hasWormEnabled() const { return this->wormEnabled_ != nullptr;};
    void deleteWormEnabled() { this->wormEnabled_ = nullptr;};
    inline bool wormEnabled() const { DARABONBA_PTR_GET_DEFAULT(wormEnabled_, false) };
    inline DescribeVaultsResponseBodyVaultsVault& setWormEnabled(bool wormEnabled) { DARABONBA_PTR_SET_VALUE(wormEnabled_, wormEnabled) };


  protected:
    // Archival tier backup data volume. Unit: bytes.
    std::shared_ptr<int64_t> archiveBytesDone_ = nullptr;
    // The billable storage usage of the Archive tier. Unit: bytes.
    std::shared_ptr<int64_t> archiveStorageSize_ = nullptr;
    // The statistics of backup plans that use the backup vault.
    std::shared_ptr<Models::DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics> backupPlanStatistics_ = nullptr;
    // The name of the OSS bucket used by the backup vault.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The amount of data that is backed up. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The billing method of the backup vault.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The billable storage usage of the archive vault. Unit: bytes.
    std::shared_ptr<int64_t> chargedStorageSize_ = nullptr;
    // The encryption algorithm used to compress the backup vault. Valid values:
    // 
    // *   DISABLED: The backup vault is not compressed.
    // *   SNAPPY: The backup vault is compressed by using the SNAPPY encryption algorithm.
    // *   ZSTD: The backup vault is compressed by using Zstandard, a fast lossless compression algorithm.
    std::shared_ptr<string> compressionAlgorithm_ = nullptr;
    // The time when the backup vault was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // Indicates whether the deduplication feature is enabled.
    std::shared_ptr<bool> dedup_ = nullptr;
    // The description of the backup vault.
    std::shared_ptr<string> description_ = nullptr;
    // The encryption type of the backup vault. Valid values:
    // 
    // *   NONE: The backup vault is not encrypted.
    // *   HBR_PRIVATE (default): The backup vault is encrypted by using a key provided by Cloud Backup.
    // *   KMS: The backup vault is encrypted by using a custom master key (CMK) created in Key Management Service (KMS).
    std::shared_ptr<string> encryptType_ = nullptr;
    // Indicates whether indexes are available. Indexes are available when they are not being updated.
    std::shared_ptr<bool> indexAvailable_ = nullptr;
    // The index level.
    // 
    // *   OFF: No indexes are created.
    // *   META: Metadata indexes are created.
    // *   ALL: Full-text indexes are created.
    std::shared_ptr<string> indexLevel_ = nullptr;
    // The time when the index was updated.
    std::shared_ptr<int64_t> indexUpdateTime_ = nullptr;
    // The ID or alias of the CMK created in KMS. This parameter is returned only when EncryptType is set to KMS.
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // The time when the last remote backup was synchronized. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> latestReplicationTime_ = nullptr;
    // The data redundancy type of the backup vault. Valid values:
    // 
    // *   LRS: Locally redundant storage (LRS) is enabled for the backup vault. Cloud Backup stores the copies of each object on multiple devices of different facilities in the same zone. This way, Cloud Backup ensures data durability and availability even if hardware failures occur.
    // *   ZRS: Zone-redundant storage (ZRS) is enabled for the backup vault. Cloud Backup uses the multi-zone mechanism to distribute data across three zones within the same region. If a zone fails, the data that is stored in the other two zones is still accessible.
    std::shared_ptr<string> redundancyType_ = nullptr;
    // Indicates whether the backup vault is a remote backup vault. Valid values:
    // 
    // *   true: The backup vault is a remote backup vault.
    // *   false: The backup vault is a local backup vault.
    std::shared_ptr<bool> replication_ = nullptr;
    // The progress of data synchronization from the backup vault to the mirror vault.
    std::shared_ptr<Models::DescribeVaultsResponseBodyVaultsVaultReplicationProgress> replicationProgress_ = nullptr;
    // The ID of the region in which the source vault resides. This parameter is valid only for remote backup vaults.
    std::shared_ptr<string> replicationSourceRegionId_ = nullptr;
    // Indicate whether the backup vault is the source vault that corresponds to the remote backup vault. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> replicationSourceVault_ = nullptr;
    // The ID of the source vault that corresponds to the remote backup vault.
    std::shared_ptr<string> replicationSourceVaultId_ = nullptr;
    // Target region for remote backup repository.
    std::shared_ptr<string> replicationTargetRegionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The retention period of the backup vault. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // Indicates whether the backup search feature is enabled.
    std::shared_ptr<bool> searchEnabled_ = nullptr;
    // The number of snapshots in the backup vault.
    std::shared_ptr<int64_t> snapshotCount_ = nullptr;
    // The data source types of the backup vault.
    std::shared_ptr<Models::DescribeVaultsResponseBodyVaultsVaultSourceTypes> sourceTypes_ = nullptr;
    // The status of the backup vault. Valid values:
    // 
    // *   **UNKNOWN**: The backup vault is in an unknown state.
    // *   **INITIALIZING**: The backup vault is being initialized.
    // *   **CREATED**: The backup vault is created.
    // *   **ERROR**: An error occurs on the backup vault.
    std::shared_ptr<string> status_ = nullptr;
    // The usage of the backup vault. Unit: bytes.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    // The tags of the backup vault.
    std::shared_ptr<Models::DescribeVaultsResponseBodyVaultsVaultTags> tags_ = nullptr;
    // The free trial information.
    std::shared_ptr<Models::DescribeVaultsResponseBodyVaultsVaultTrialInfo> trialInfo_ = nullptr;
    // The time when the backup vault was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The name of the backup vault.
    std::shared_ptr<string> vaultName_ = nullptr;
    // The ID of the region in which the backup vault resides.
    std::shared_ptr<string> vaultRegionId_ = nullptr;
    // The status message that is returned when the backup vault is in the ERROR state. This parameter is valid only for remote backup vaults. Valid values:
    // 
    // *   **UNKNOWN_ERROR**: An unknown error occurs.
    // *   **SOURCE_VAULT_ALREADY_HAS_REPLICATION**: A mirror vault is configured for the source vault.
    std::shared_ptr<string> vaultStatusMessage_ = nullptr;
    // The storage class of the backup vault. Valid value: **STANDARD**, which indicates standard storage.
    std::shared_ptr<string> vaultStorageClass_ = nullptr;
    // The type of the backup vault. Valid value: **STANDARD**, which indicates a standard backup vault.
    std::shared_ptr<string> vaultType_ = nullptr;
    // Indicates whether the immutable backup feature is enabled.
    std::shared_ptr<bool> wormEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
