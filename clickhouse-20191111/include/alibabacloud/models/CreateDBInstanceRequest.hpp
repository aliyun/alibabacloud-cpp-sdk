// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->backupSetID_ == nullptr && this->clientToken_ == nullptr && this->DBClusterCategory_ == nullptr && this->DBClusterClass_ == nullptr && this->DBClusterDescription_ == nullptr
        && this->DBClusterNetworkType_ == nullptr && this->DBClusterVersion_ == nullptr && this->DBNodeGroupCount_ == nullptr && this->DBNodeStorage_ == nullptr && this->dbNodeStorageType_ == nullptr
        && this->encryptionKey_ == nullptr && this->encryptionType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sourceDBClusterId_ == nullptr && this->tags_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchBak_ == nullptr
        && this->vSwitchBak2_ == nullptr && this->vSwitchId_ == nullptr && this->zondIdBak2_ == nullptr && this->zoneId_ == nullptr && this->zoneIdBak_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupSetID Field Functions 
    bool hasBackupSetID() const { return this->backupSetID_ != nullptr;};
    void deleteBackupSetID() { this->backupSetID_ = nullptr;};
    inline string getBackupSetID() const { DARABONBA_PTR_GET_DEFAULT(backupSetID_, "") };
    inline CreateDBInstanceRequest& setBackupSetID(string backupSetID) { DARABONBA_PTR_SET_VALUE(backupSetID_, backupSetID) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterCategory Field Functions 
    bool hasDBClusterCategory() const { return this->DBClusterCategory_ != nullptr;};
    void deleteDBClusterCategory() { this->DBClusterCategory_ = nullptr;};
    inline string getDBClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(DBClusterCategory_, "") };
    inline CreateDBInstanceRequest& setDBClusterCategory(string DBClusterCategory) { DARABONBA_PTR_SET_VALUE(DBClusterCategory_, DBClusterCategory) };


    // DBClusterClass Field Functions 
    bool hasDBClusterClass() const { return this->DBClusterClass_ != nullptr;};
    void deleteDBClusterClass() { this->DBClusterClass_ = nullptr;};
    inline string getDBClusterClass() const { DARABONBA_PTR_GET_DEFAULT(DBClusterClass_, "") };
    inline CreateDBInstanceRequest& setDBClusterClass(string DBClusterClass) { DARABONBA_PTR_SET_VALUE(DBClusterClass_, DBClusterClass) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline CreateDBInstanceRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterNetworkType Field Functions 
    bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
    void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
    inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
    inline CreateDBInstanceRequest& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


    // DBClusterVersion Field Functions 
    bool hasDBClusterVersion() const { return this->DBClusterVersion_ != nullptr;};
    void deleteDBClusterVersion() { this->DBClusterVersion_ = nullptr;};
    inline string getDBClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(DBClusterVersion_, "") };
    inline CreateDBInstanceRequest& setDBClusterVersion(string DBClusterVersion) { DARABONBA_PTR_SET_VALUE(DBClusterVersion_, DBClusterVersion) };


    // DBNodeGroupCount Field Functions 
    bool hasDBNodeGroupCount() const { return this->DBNodeGroupCount_ != nullptr;};
    void deleteDBNodeGroupCount() { this->DBNodeGroupCount_ = nullptr;};
    inline string getDBNodeGroupCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeGroupCount_, "") };
    inline CreateDBInstanceRequest& setDBNodeGroupCount(string DBNodeGroupCount) { DARABONBA_PTR_SET_VALUE(DBNodeGroupCount_, DBNodeGroupCount) };


    // DBNodeStorage Field Functions 
    bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
    void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
    inline string getDBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, "") };
    inline CreateDBInstanceRequest& setDBNodeStorage(string DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


    // dbNodeStorageType Field Functions 
    bool hasDbNodeStorageType() const { return this->dbNodeStorageType_ != nullptr;};
    void deleteDbNodeStorageType() { this->dbNodeStorageType_ = nullptr;};
    inline string getDbNodeStorageType() const { DARABONBA_PTR_GET_DEFAULT(dbNodeStorageType_, "") };
    inline CreateDBInstanceRequest& setDbNodeStorageType(string dbNodeStorageType) { DARABONBA_PTR_SET_VALUE(dbNodeStorageType_, dbNodeStorageType) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline CreateDBInstanceRequest& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string getSourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline CreateDBInstanceRequest& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateDBInstanceRequest::Tags>) };
    inline vector<CreateDBInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateDBInstanceRequest::Tags>) };
    inline CreateDBInstanceRequest& setTags(const vector<CreateDBInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateDBInstanceRequest& setTags(vector<CreateDBInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateDBInstanceRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchBak Field Functions 
    bool hasVSwitchBak() const { return this->vSwitchBak_ != nullptr;};
    void deleteVSwitchBak() { this->vSwitchBak_ = nullptr;};
    inline string getVSwitchBak() const { DARABONBA_PTR_GET_DEFAULT(vSwitchBak_, "") };
    inline CreateDBInstanceRequest& setVSwitchBak(string vSwitchBak) { DARABONBA_PTR_SET_VALUE(vSwitchBak_, vSwitchBak) };


    // vSwitchBak2 Field Functions 
    bool hasVSwitchBak2() const { return this->vSwitchBak2_ != nullptr;};
    void deleteVSwitchBak2() { this->vSwitchBak2_ = nullptr;};
    inline string getVSwitchBak2() const { DARABONBA_PTR_GET_DEFAULT(vSwitchBak2_, "") };
    inline CreateDBInstanceRequest& setVSwitchBak2(string vSwitchBak2) { DARABONBA_PTR_SET_VALUE(vSwitchBak2_, vSwitchBak2) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zondIdBak2 Field Functions 
    bool hasZondIdBak2() const { return this->zondIdBak2_ != nullptr;};
    void deleteZondIdBak2() { this->zondIdBak2_ = nullptr;};
    inline string getZondIdBak2() const { DARABONBA_PTR_GET_DEFAULT(zondIdBak2_, "") };
    inline CreateDBInstanceRequest& setZondIdBak2(string zondIdBak2) { DARABONBA_PTR_SET_VALUE(zondIdBak2_, zondIdBak2) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIdBak Field Functions 
    bool hasZoneIdBak() const { return this->zoneIdBak_ != nullptr;};
    void deleteZoneIdBak() { this->zoneIdBak_ = nullptr;};
    inline string getZoneIdBak() const { DARABONBA_PTR_GET_DEFAULT(zoneIdBak_, "") };
    inline CreateDBInstanceRequest& setZoneIdBak(string zoneIdBak) { DARABONBA_PTR_SET_VALUE(zoneIdBak_, zoneIdBak) };


  protected:
    // Specifies whether to enable auto-renewal.
    // 
    // >  This parameter is valid only if the value of PayType is set to Prepaid.
    shared_ptr<bool> autoRenew_ {};
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/360339.html) operation to query the backup sets.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    shared_ptr<string> backupSetID_ {};
    // The client token that is used to ensure the idempotence of the request. The value is a string and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The edition of the cluster. Valid values:
    // 
    // *   **Basic**: Single-replica Edition
    // *   **HighAvailability**: Double-replica Edition
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterCategory_ {};
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
    shared_ptr<string> DBClusterClass_ {};
    // The description of the cluster.
    shared_ptr<string> DBClusterDescription_ {};
    // The network type of the cluster. Only Virtual Private Cloud (VPC) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterNetworkType_ {};
    // The kernel version. Valid values:
    // 
    // *   **21.8.10.19**
    // *   **22.8.5.29**
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterVersion_ {};
    // The number of nodes.
    // 
    // *   Valid values when the cluster is of Single-replica Edition: 1 to 48.
    // *   Valid values when the cluster is of Double-replica Edition: 1 to 24.
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeGroupCount_ {};
    // The storage capacity of a single node. Valid values: 100 to 32000. Unit: GB.
    // 
    // >  This value is a multiple of 100.
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeStorage_ {};
    // The storage type of the cluster. Valid values:
    // 
    // *   **CloudESSD**: The cluster uses an enhanced SSD (ESSD) of performance level 1 (PL1).
    // *   **CloudESSD_PL2**: The cluster uses an ESSD of PL2.
    // *   **CloudESSD_PL3**: The cluster uses an ESSD of PL3.
    // *   **CloudEfficiency**: The cluster uses an ultra disk.
    // 
    // This parameter is required.
    shared_ptr<string> dbNodeStorageType_ {};
    // You must specify this parameter when EncryptionType is set to CloudDisk.
    // 
    // The ID of the key that is used to encrypt data on disks. You can obtain the ID of the key from the Key Management Service (KMS) console. You can also create a key.
    // 
    // >  If EncryptionType is empty, you do not need to specify this parameter.
    shared_ptr<string> encryptionKey_ {};
    // The encryption type. Set the value to **CloudDisk**, which indicates that only disk encryption is supported.
    // 
    // >  If this parameter is not specified, data is not encrypted.
    shared_ptr<string> encryptionType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: The cluster uses the pay-as-you-go billing method.
    // *   **Prepaid**: The cluster uses the subscription billing method.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration for the cluster. Valid values:
    // 
    // >  This parameter is required only when PayType is set to Prepaid.
    // 
    // *   **Year**
    // *   **Month**
    shared_ptr<string> period_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the cluster belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the source cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query backup set IDs.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    shared_ptr<string> sourceDBClusterId_ {};
    shared_ptr<vector<CreateDBInstanceRequest::Tags>> tags_ {};
    // The subscription duration of the subscription cluster.
    // 
    // >  This parameter is required only when PayType is set to Prepaid.
    // 
    // *   Valid values when Period is set to Year: 1 to 3 (integer)
    // *   Valid values when Period is set to Month: 1 to 9 (integer)
    shared_ptr<string> usedTime_ {};
    // The VPC ID.
    // 
    // This parameter is required.
    shared_ptr<string> VPCId_ {};
    // The vSwitch in the secondary zone for the VPC.
    shared_ptr<string> vSwitchBak_ {};
    // The vSwitch in secondary zone 2 for the VPC.
    shared_ptr<string> vSwitchBak2_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The secondary zone 2 of the instance.
    shared_ptr<string> zondIdBak2_ {};
    // The zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/170875.html) operation to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
    // The secondary zone.
    shared_ptr<string> zoneIdBak_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
