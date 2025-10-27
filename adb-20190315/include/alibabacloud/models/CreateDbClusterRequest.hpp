// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBClusterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class CreateDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_TO_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_TO_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_TO_JSON(KmsId, kmsId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_FROM_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_FROM_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DiskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(ElasticIOResource, elasticIOResource_);
      DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
      DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
      DARABONBA_PTR_FROM_JSON(KmsId, kmsId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBClusterRequest() = default ;
    CreateDBClusterRequest(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest(CreateDBClusterRequest &&) = default ;
    CreateDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterRequest() = default ;
    CreateDBClusterRequest& operator=(const CreateDBClusterRequest &) = default ;
    CreateDBClusterRequest& operator=(CreateDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetID_ == nullptr
        && return this->clientToken_ == nullptr && return this->computeResource_ == nullptr && return this->DBClusterCategory_ == nullptr && return this->DBClusterClass_ == nullptr && return this->DBClusterDescription_ == nullptr
        && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterVersion_ == nullptr && return this->DBNodeGroupCount_ == nullptr && return this->DBNodeStorage_ == nullptr && return this->diskEncryption_ == nullptr
        && return this->elasticIOResource_ == nullptr && return this->enableSSL_ == nullptr && return this->executorCount_ == nullptr && return this->kmsId_ == nullptr && return this->mode_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->payType_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->restoreTime_ == nullptr && return this->restoreType_ == nullptr
        && return this->sourceDBInstanceName_ == nullptr && return this->storageResource_ == nullptr && return this->storageType_ == nullptr && return this->tag_ == nullptr && return this->usedTime_ == nullptr
        && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // backupSetID Field Functions 
    bool hasBackupSetID() const { return this->backupSetID_ != nullptr;};
    void deleteBackupSetID() { this->backupSetID_ = nullptr;};
    inline string backupSetID() const { DARABONBA_PTR_GET_DEFAULT(backupSetID_, "") };
    inline CreateDBClusterRequest& setBackupSetID(string backupSetID) { DARABONBA_PTR_SET_VALUE(backupSetID_, backupSetID) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline string computeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
    inline CreateDBClusterRequest& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


    // DBClusterCategory Field Functions 
    bool hasDBClusterCategory() const { return this->DBClusterCategory_ != nullptr;};
    void deleteDBClusterCategory() { this->DBClusterCategory_ = nullptr;};
    inline string DBClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(DBClusterCategory_, "") };
    inline CreateDBClusterRequest& setDBClusterCategory(string DBClusterCategory) { DARABONBA_PTR_SET_VALUE(DBClusterCategory_, DBClusterCategory) };


    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string DBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline CreateDBClusterRequest& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBClusterRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline CreateDBClusterRequest& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterVersion Field Functions 
    bool hasDBClusterVersion() const { return this->DBClusterVersion_ != nullptr;};
    void deleteDBClusterVersion() { this->DBClusterVersion_ = nullptr;};
    inline string DBClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(DBClusterVersion_, "") };
    inline CreateDBClusterRequest& setDBClusterVersion(string DBClusterVersion) { DARABONBA_PTR_SET_VALUE(DBClusterVersion_, DBClusterVersion) };


    // DBNodeGroupCount Field Functions 
    bool hasDBNodeGroupCount() const { return this->DBNodeGroupCount_ != nullptr;};
    void deleteDBNodeGroupCount() { this->DBNodeGroupCount_ = nullptr;};
    inline string DBNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeGroupCount_, "") };
    inline CreateDBClusterRequest& setDBNodeGroupCount(string DBNodeGroupCount) { DARABONBA_PTR_SET_VALUE(DBNodeGroupCount_, DBNodeGroupCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline string DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, "") };
    inline CreateDBClusterRequest& setDBNodeStorage(string DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline CreateDBClusterRequest& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // elasticIOResource Field Functions 
    bool hasElasticIOResource() const { return this->elasticIOResource_ != nullptr;};
    void deleteElasticIOResource() { this->elasticIOResource_ = nullptr;};
    inline string elasticIOResource() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResource_, "") };
    inline CreateDBClusterRequest& setElasticIOResource(string elasticIOResource) { DARABONBA_PTR_SET_VALUE(elasticIOResource_, elasticIOResource) };


    // enableSSL Field Functions 
    bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
    void deleteEnableSSL() { this->enableSSL_ = nullptr;};
    inline bool enableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, false) };
    inline CreateDBClusterRequest& setEnableSSL(bool enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


    // executorCount Field Functions 
    bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
    void deleteExecutorCount() { this->executorCount_ = nullptr;};
    inline string executorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, "") };
    inline CreateDBClusterRequest& setExecutorCount(string executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


    // kmsId Field Functions 
    bool hasKmsId() const { return this->kmsId_ != nullptr;};
    void deleteKmsId() { this->kmsId_ = nullptr;};
    inline string kmsId() const { DARABONBA_PTR_GET_DEFAULT(kmsId_, "") };
    inline CreateDBClusterRequest& setKmsId(string kmsId) { DARABONBA_PTR_SET_VALUE(kmsId_, kmsId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateDBClusterRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBClusterRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateDBClusterRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateDBClusterRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // sourceDBInstanceName Field Functions 
    bool hasSourceDBInstanceName() const { return this->sourceDBInstanceName_ != nullptr;};
    void deleteSourceDBInstanceName() { this->sourceDBInstanceName_ = nullptr;};
    inline string sourceDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstanceName_, "") };
    inline CreateDBClusterRequest& setSourceDBInstanceName(string sourceDBInstanceName) { DARABONBA_PTR_SET_VALUE(sourceDBInstanceName_, sourceDBInstanceName) };


    // storageResource Field Functions 
    bool hasStorageResource() const { return this->storageResource_ != nullptr;};
    void deleteStorageResource() { this->storageResource_ = nullptr;};
    inline string storageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
    inline CreateDBClusterRequest& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBClusterRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBClusterRequestTag>) };
    inline vector<CreateDBClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDBClusterRequestTag>) };
    inline CreateDBClusterRequest& setTag(const vector<CreateDBClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBClusterRequest& setTag(vector<CreateDBClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBClusterRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBClusterRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // A reserved parameter.
    std::shared_ptr<string> backupSetID_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The value is case-sensitive and can contain a maximum of 64 ASCII characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The computing resources of the cluster. You can use computing resources to compute data. The increase in the computing resources can accelerate data queries. The computing resources are available for Cluster Edition and Basic Edition.
    // 
    // *   Computing resources for Cluster Edition include 16 cores and 64 GB memory, 24 cores and 96 GB memory, and 32 cores or more. Cluster Edition supports resource isolation, scheduled scaling, and tiered storage of hot and cold data.
    // *   Computing resources for Basic Edition include 8 cores and 32 GB memory and 16 cores and 64 GB memory. Alibaba Cloud does not provide an SLA guarantee for Basic Edition, and 4 to 8 hours are required for a failover. We recommend that you do not use Basic Edition in production environments.
    // 
    // > 
    // 
    // *   You can call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/190632.html) operation to query the available computing resources in a region.
    // 
    // *   This parameter must be specified when Mode is set to **Flexible**.
    std::shared_ptr<string> computeResource_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Cluster**: reserved mode for Cluster Edition
    // 
    // <!---->
    // 
    // *   **MixedStorage**: elastic mode for Cluster Edition
    // 
    // >  If the DBClusterCategory parameter is set to Cluster, you must set the Mode parameter to Reserver. If the DBClusterCategory parameter is set to MixedStorage, you must set the Mode parameter to Flexible. Otherwise, the cluster fails to be created.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterCategory_ = nullptr;
    // The specification of the cluster. Valid values:
    // 
    // *   **C8**
    // *   **C32**
    // 
    // >  This parameter is required if the Mode parameter is set to Reserver.
    std::shared_ptr<string> DBClusterClass_ = nullptr;
    // The description of the cluster.
    // 
    // *   The description cannot start with `http://` or `https`.
    // *   The description must be 2 to 256 characters in length.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The network type of the cluster. Set the value to **VPC**.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The version of the cluster. Set the value to **3.0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterVersion_ = nullptr;
    // The number of node groups. Valid values: 1 to 200 (integer).
    // 
    // >  This parameter is required if the Mode parameter is set to Reserver.
    std::shared_ptr<string> DBNodeGroupCount_ = nullptr;
    // The storage capacity of the cluster. Unit: GB.
    // 
    // *   Valid values when DBClusterClass is set to C8: 100 to 1000
    // *   Valid values when DBClusterClass is set to C32: 100 to 8000
    // 
    // > * This parameter is required if the Mode parameter is set to Reserver.
    // > * 1000 The storage capacity less than 1,000 GB increases in 100 GB increments. The storage capacity greater than 1,000 GB increases in 1,000 GB increments.
    std::shared_ptr<string> DBNodeStorage_ = nullptr;
    // Indicates whether disk encryption is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    // The number of elastic I/O units (EIUs). For more information, see [Elasticity of the storage layer](https://help.aliyun.com/document_detail/189505.html).
    std::shared_ptr<string> elasticIOResource_ = nullptr;
    // Specifies whether to enable SSL encryption. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableSSL_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> executorCount_ = nullptr;
    // The Key Management Service (KMS) ID that is used for disk encryption. This parameter takes effect only when DiskEncryption is set to true.
    std::shared_ptr<string> kmsId_ = nullptr;
    // The mode of the cluster. Valid values:
    // 
    // *   **Reserver**: the reserved mode.
    // *   **Flexible**: the elastic mode.
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The subscription type of the subscription cluster. Valid values:
    // 
    // *   **Year**: subscription on a yearly basis
    // *   **Month**: subscription on a monthly basis
    // 
    // >  This parameter is required if the PayType parameter is set to Prepaid.
    std::shared_ptr<string> period_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> restoreTime_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> restoreType_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> sourceDBInstanceName_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> storageResource_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> storageType_ = nullptr;
    // The tags to add to the cluster.
    std::shared_ptr<vector<CreateDBClusterRequestTag>> tag_ = nullptr;
    // The subscription period of the subscription cluster.
    // 
    // *   Valid values when Period is set to Year: 1, 2, and 3 (integer)
    // *   Valid values when Period is set to Month: 1 to 9 (integer)
    // 
    // > * This parameter is required if the PayType parameter is set to Prepaid.
    // > * Longer subscription periods offer more savings. Purchasing a cluster for one year is more cost-effective than purchasing the cluster for 10 or 11 months.
    std::shared_ptr<string> usedTime_ = nullptr;
    // The virtual private cloud (VPC) ID of the cluster.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID of the cluster.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
