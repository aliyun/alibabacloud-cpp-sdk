// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBInstanceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CreateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_TO_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_TO_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_TO_JSON(DbNodeStorageType, dbNodeStorageType_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchBak, vSwitchBak_);
      DARABONBA_PTR_TO_JSON(VSwitchBak2, vSwitchBak2_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZondIdBak2, zondIdBak2_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIdBak, zoneIdBak_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackupSetID, backupSetID_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterCategory, DBClusterCategory_);
      DARABONBA_PTR_FROM_JSON(DBClusterClass, DBClusterClass_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_FROM_JSON(DBNodeGroupCount, DBNodeGroupCount_);
      DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
      DARABONBA_PTR_FROM_JSON(DbNodeStorageType, dbNodeStorageType_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchBak, vSwitchBak_);
      DARABONBA_PTR_FROM_JSON(VSwitchBak2, vSwitchBak2_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZondIdBak2, zondIdBak2_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIdBak, zoneIdBak_);
    };
    CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest(CreateDBInstanceRequest &&) = default ;
    CreateDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceRequest() = default ;
    CreateDBInstanceRequest& operator=(const CreateDBInstanceRequest &) = default ;
    CreateDBInstanceRequest& operator=(CreateDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->backupSetID_ == nullptr && return this->clientToken_ == nullptr && return this->DBClusterCategory_ == nullptr && return this->DBClusterClass_ == nullptr && return this->DBClusterDescription_ == nullptr
        && return this->DBClusterNetworkType_ == nullptr && return this->DBClusterVersion_ == nullptr && return this->DBNodeGroupCount_ == nullptr && return this->DBNodeStorage_ == nullptr && return this->dbNodeStorageType_ == nullptr
        && return this->encryptionKey_ == nullptr && return this->encryptionType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->payType_ == nullptr
        && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->sourceDBClusterId_ == nullptr && return this->tags_ == nullptr && return this->usedTime_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchBak_ == nullptr
        && return this->vSwitchBak2_ == nullptr && return this->vSwitchId_ == nullptr && return this->zondIdBak2_ == nullptr && return this->zoneId_ == nullptr && return this->zoneIdBak_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupSetID Field Functions 
    bool hasBackupSetID() const { return this->backupSetID_ != nullptr;};
    void deleteBackupSetID() { this->backupSetID_ = nullptr;};
    inline string backupSetID() const { DARABONBA_PTR_GET_DEFAULT(backupSetID_, "") };
    inline CreateDBInstanceRequest& setBackupSetID(string backupSetID) { DARABONBA_PTR_SET_VALUE(backupSetID_, backupSetID) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterCategory Field Functions 
    bool hasDBClusterCategory() const { return this->DBClusterCategory_ != nullptr;};
    void deleteDBClusterCategory() { this->DBClusterCategory_ = nullptr;};
    inline string DBClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(DBClusterCategory_, "") };
    inline CreateDBInstanceRequest& setDBClusterCategory(string DBClusterCategory) { DARABONBA_PTR_SET_VALUE(DBClusterCategory_, DBClusterCategory) };


    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string DBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline CreateDBInstanceRequest& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBInstanceRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string DBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline CreateDBInstanceRequest& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterVersion Field Functions 
    bool hasDBClusterVersion() const { return this->DBClusterVersion_ != nullptr;};
    void deleteDBClusterVersion() { this->DBClusterVersion_ = nullptr;};
    inline string DBClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(DBClusterVersion_, "") };
    inline CreateDBInstanceRequest& setDBClusterVersion(string DBClusterVersion) { DARABONBA_PTR_SET_VALUE(DBClusterVersion_, DBClusterVersion) };


    // DBNodeGroupCount Field Functions 
    bool hasDBNodeGroupCount() const { return this->DBNodeGroupCount_ != nullptr;};
    void deleteDBNodeGroupCount() { this->DBNodeGroupCount_ = nullptr;};
    inline string DBNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeGroupCount_, "") };
    inline CreateDBInstanceRequest& setDBNodeGroupCount(string DBNodeGroupCount) { DARABONBA_PTR_SET_VALUE(DBNodeGroupCount_, DBNodeGroupCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline string DBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, "") };
    inline CreateDBInstanceRequest& setDBNodeStorage(string DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // dbNodeStorageType Field Functions 
    bool hasDbNodeStorageType() const { return this->dbNodeStorageType_ != nullptr;};
    void deleteDbNodeStorageType() { this->dbNodeStorageType_ = nullptr;};
    inline string dbNodeStorageType() const { DARABONBA_PTR_GET_DEFAULT(dbNodeStorageType_, "") };
    inline CreateDBInstanceRequest& setDbNodeStorageType(string dbNodeStorageType) { DARABONBA_PTR_SET_VALUE(dbNodeStorageType_, dbNodeStorageType) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string encryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline CreateDBInstanceRequest& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline CreateDBInstanceRequest& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateDBInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateDBInstanceRequestTags>) };
    inline vector<CreateDBInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateDBInstanceRequestTags>) };
    inline CreateDBInstanceRequest& setTags(const vector<CreateDBInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateDBInstanceRequest& setTags(vector<CreateDBInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchBak Field Functions 
    bool hasVSwitchBak() const { return this->vSwitchBak_ != nullptr;};
    void deleteVSwitchBak() { this->vSwitchBak_ = nullptr;};
    inline string vSwitchBak() const { DARABONBA_PTR_GET_DEFAULT(vSwitchBak_, "") };
    inline CreateDBInstanceRequest& setVSwitchBak(string vSwitchBak) { DARABONBA_PTR_SET_VALUE(vSwitchBak_, vSwitchBak) };


    // vSwitchBak2 Field Functions 
    bool hasVSwitchBak2() const { return this->vSwitchBak2_ != nullptr;};
    void deleteVSwitchBak2() { this->vSwitchBak2_ = nullptr;};
    inline string vSwitchBak2() const { DARABONBA_PTR_GET_DEFAULT(vSwitchBak2_, "") };
    inline CreateDBInstanceRequest& setVSwitchBak2(string vSwitchBak2) { DARABONBA_PTR_SET_VALUE(vSwitchBak2_, vSwitchBak2) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zondIdBak2 Field Functions 
    bool hasZondIdBak2() const { return this->zondIdBak2_ != nullptr;};
    void deleteZondIdBak2() { this->zondIdBak2_ = nullptr;};
    inline string zondIdBak2() const { DARABONBA_PTR_GET_DEFAULT(zondIdBak2_, "") };
    inline CreateDBInstanceRequest& setZondIdBak2(string zondIdBak2) { DARABONBA_PTR_SET_VALUE(zondIdBak2_, zondIdBak2) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdBak Field Functions 
    bool hasZoneIdBak() const { return this->zoneIdBak_ != nullptr;};
    void deleteZoneIdBak() { this->zoneIdBak_ = nullptr;};
    inline string zoneIdBak() const { DARABONBA_PTR_GET_DEFAULT(zoneIdBak_, "") };
    inline CreateDBInstanceRequest& setZoneIdBak(string zoneIdBak) { DARABONBA_PTR_SET_VALUE(zoneIdBak_, zoneIdBak) };


  protected:
    // Specifies whether to enable auto-renewal.
    // 
    // >  This parameter is valid only if the value of PayType is set to Prepaid.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/360339.html) operation to query the backup sets.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    std::shared_ptr<string> backupSetID_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. The value is a string and can be up to 64 ASCII characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **Basic**: Single-replica Edition
    // *   **HighAvailability**: Double-replica Edition
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterCategory_ = nullptr;
    // The specifications of the cluster.
    // 
    // *   Valid values for a Single-replica Edition cluster:
    // 
    //     *   **S8**: 8 cores and 32 GB of memory
    //     *   **S16**: 16 cores and 64 GB of memory
    //     *   **S32**: 32 cores and 128 GB of memory
    //     *   **S64**: 64 cores and 256 GB of memory
    //     *   **S104**: 104 cores and 384 GB of memory
    // 
    // *   Valid values for a Double-replica Edition cluster:
    // 
    //     *   **C8**: 8 cores and 32 GB of memory
    //     *   **C16**: 16 cores and 64 GB of memory
    //     *   **C32**: 32 cores and 128 GB of memory
    //     *   **C64**: 64 cores and 256 GB of memory
    //     *   **C104**: 104 cores and 384 GB of memory
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterClass_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The network type of the cluster. Only Virtual Private Cloud (VPC) is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterNetworkType_ = nullptr;
    // The kernel version. Valid values:
    // 
    // *   **21.8.10.19**
    // *   **22.8.5.29**
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterVersion_ = nullptr;
    // The number of nodes.
    // 
    // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
    // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBNodeGroupCount_ = nullptr;
    // The storage capacity of a single node. Valid values: 100 to 32000. Unit: GB.
    // 
    // >  This value is a multiple of 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBNodeStorage_ = nullptr;
    // The storage type of the cluster. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level 1 (PL1).
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbNodeStorageType_ = nullptr;
    // You must specify this parameter when EncryptionType is set to CloudDisk.
    // 
    // The ID of the key that is used to encrypt data on disks. You can obtain the ID of the key from the Key Management Service (KMS) console. You can also create a key.
    // 
    // >  If EncryptionType is empty, you do not need to specify this parameter.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // The encryption type. Set the value to **CloudDisk**, which indicates that only disk encryption is supported.
    // 
    // >  If this parameter is not specified, data is not encrypted.
    std::shared_ptr<string> encryptionType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: The cluster uses the pay-as-you-go billing method.
    // *   **Prepaid**: The cluster uses the subscription billing method.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The unit of the subscription duration for the cluster. Valid values:
    // 
    // >  This parameter is required only when PayType is set to Prepaid.
    // 
    // *   **Year**
    // *   **Month**
    std::shared_ptr<string> period_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the source cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query backup set IDs.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
    std::shared_ptr<vector<CreateDBInstanceRequestTags>> tags_ = nullptr;
    // The subscription duration of the subscription cluster.
    // 
    // >  This parameter is required only when PayType is set to Prepaid.
    // 
    // *   Valid values when Period is set to Year: 1 to 3 (integer)
    // *   Valid values when Period is set to Month: 1 to 9 (integer)
    std::shared_ptr<string> usedTime_ = nullptr;
    // The VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch in the secondary zone for the VPC.
    std::shared_ptr<string> vSwitchBak_ = nullptr;
    // The vSwitch in secondary zone 2 for the VPC.
    std::shared_ptr<string> vSwitchBak2_ = nullptr;
    // The vSwitch ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The secondary zone 2 of the instance.
    std::shared_ptr<string> zondIdBak2_ = nullptr;
    // The zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The secondary zone.
    std::shared_ptr<string> zoneIdBak_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
