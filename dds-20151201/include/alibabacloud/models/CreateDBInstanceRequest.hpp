// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_TO_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_TO_JSON(StorageEngine, storageEngine_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupIds, globalSecurityGroupIds_);
      DARABONBA_PTR_FROM_JSON(HiddenZoneId, hiddenZoneId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SrcDBInstanceId, srcDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_FROM_JSON(StorageEngine, storageEngine_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      // The key of the tag.
      // 
      // > **N** specifies the serial number of the tag. For example, **Tag.1.Key** specifies the key of the first tag and **Tag.2.Key** specifies the key of the second tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // > **N** specifies the serial number of the tag. For example, **Tag.1.Value** specifies the value of the first tag and **Tag.2.Value** specifies the value of the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && this->autoRenew_ == nullptr && this->backupId_ == nullptr && this->businessInfo_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr
        && this->clusterId_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceStorage_ == nullptr
        && this->databaseNames_ == nullptr && this->encrypted_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->globalSecurityGroupIds_ == nullptr && this->hiddenZoneId_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->period_ == nullptr && this->provisionedIops_ == nullptr && this->readonlyReplicas_ == nullptr && this->regionId_ == nullptr && this->replicationFactor_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr && this->restoreType_ == nullptr
        && this->secondaryZoneId_ == nullptr && this->securityIPList_ == nullptr && this->srcDBInstanceId_ == nullptr && this->srcRegion_ == nullptr && this->storageEngine_ == nullptr
        && this->storageType_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateDBInstanceRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline CreateDBInstanceRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateDBInstanceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDBInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateDBInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateDBInstanceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CreateDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // databaseNames Field Functions 
    bool hasDatabaseNames() const { return this->databaseNames_ != nullptr;};
    void deleteDatabaseNames() { this->databaseNames_ = nullptr;};
    inline string getDatabaseNames() const { DARABONBA_PTR_GET_DEFAULT(databaseNames_, "") };
    inline CreateDBInstanceRequest& setDatabaseNames(string databaseNames) { DARABONBA_PTR_SET_VALUE(databaseNames_, databaseNames) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateDBInstanceRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateDBInstanceRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // globalSecurityGroupIds Field Functions 
    bool hasGlobalSecurityGroupIds() const { return this->globalSecurityGroupIds_ != nullptr;};
    void deleteGlobalSecurityGroupIds() { this->globalSecurityGroupIds_ = nullptr;};
    inline string getGlobalSecurityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupIds_, "") };
    inline CreateDBInstanceRequest& setGlobalSecurityGroupIds(string globalSecurityGroupIds) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupIds_, globalSecurityGroupIds) };


    // hiddenZoneId Field Functions 
    bool hasHiddenZoneId() const { return this->hiddenZoneId_ != nullptr;};
    void deleteHiddenZoneId() { this->hiddenZoneId_ = nullptr;};
    inline string getHiddenZoneId() const { DARABONBA_PTR_GET_DEFAULT(hiddenZoneId_, "") };
    inline CreateDBInstanceRequest& setHiddenZoneId(string hiddenZoneId) { DARABONBA_PTR_SET_VALUE(hiddenZoneId_, hiddenZoneId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateDBInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


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


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDBInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateDBInstanceRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // readonlyReplicas Field Functions 
    bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
    void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
    inline string getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, "") };
    inline CreateDBInstanceRequest& setReadonlyReplicas(string readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline string getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, "") };
    inline CreateDBInstanceRequest& setReplicationFactor(string replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


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


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CreateDBInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateDBInstanceRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline CreateDBInstanceRequest& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // srcDBInstanceId Field Functions 
    bool hasSrcDBInstanceId() const { return this->srcDBInstanceId_ != nullptr;};
    void deleteSrcDBInstanceId() { this->srcDBInstanceId_ = nullptr;};
    inline string getSrcDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(srcDBInstanceId_, "") };
    inline CreateDBInstanceRequest& setSrcDBInstanceId(string srcDBInstanceId) { DARABONBA_PTR_SET_VALUE(srcDBInstanceId_, srcDBInstanceId) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline CreateDBInstanceRequest& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // storageEngine Field Functions 
    bool hasStorageEngine() const { return this->storageEngine_ != nullptr;};
    void deleteStorageEngine() { this->storageEngine_ = nullptr;};
    inline string getStorageEngine() const { DARABONBA_PTR_GET_DEFAULT(storageEngine_, "") };
    inline CreateDBInstanceRequest& setStorageEngine(string storageEngine) { DARABONBA_PTR_SET_VALUE(storageEngine_, storageEngine) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDBInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDBInstanceRequest::Tag>) };
    inline vector<CreateDBInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDBInstanceRequest::Tag>) };
    inline CreateDBInstanceRequest& setTag(const vector<CreateDBInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDBInstanceRequest& setTag(vector<CreateDBInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The password of the root account. The password must meet the following requirements:
    // 
    // *   The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // *   Special characters include ! # $ % ^ & \\* ( ) _ + - =
    // *   The password of the account must be 8 to 32 characters in length.
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable auto-renewal for the instance. Default value: false. Valid values:
    // 
    // *   **true**: The instance is automatically renewed.
    // *   **false**: The instance is manually renewed.
    // 
    // > This parameter is valid and optional when the **ChargeType** parameter is set to **PrePaid**.
    shared_ptr<string> autoRenew_ {};
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/62172.html) operation to query the backup set ID.
    // 
    // > When you call this operation to clone an instance based on the backup set, this parameter is required. The **SrcDBInstanceId** parameter is also required.
    shared_ptr<string> backupId_ {};
    // The business information. This is an additional parameter.
    shared_ptr<string> businessInfo_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **PostPaid**: pay-as-you-go. This is the default value.
    // *   **PrePaid**: subscription.
    // 
    // > If you set this parameter to **PrePaid**, you must also specify the **Period** parameter.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the dedicated cluster to which the instance belongs.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to use coupons. Default value: null. Valid values:
    // - **default** or **null**: uses coupons.
    // - **youhuiquan_promotion_option_id_for_blank**: does not use coupons.
    shared_ptr<string> couponNo_ {};
    // The instance type. You can also call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/149719.html) operation to query the instance type.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceClass_ {};
    // The name of the instance. The name of the instance must meet the following requirements:
    // 
    // *   The name must start with a letter.
    // *   The name can contain digits, letters, underscores (_), and hyphens (-).
    // *   The name must be 2 to 256 characters in length.
    shared_ptr<string> DBInstanceDescription_ {};
    // The storage capacity of the instance. Unit: GB.
    // 
    // The values that can be specified for this parameter vary based on the instance types. For more information, see [Replica set instance types](https://help.aliyun.com/document_detail/311410.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The name of the database.
    // 
    // > When you call this operation to clone an instance, you can set this parameter to specify the database to clone. Otherwise, all databases of the instance are cloned.
    shared_ptr<string> databaseNames_ {};
    // Specifies whether to enable disk encryption.
    shared_ptr<bool> encrypted_ {};
    // The ID of the custom key.
    shared_ptr<string> encryptionKey_ {};
    // The database engine of the instance. Set the value to **MongoDB**.
    shared_ptr<string> engine_ {};
    // The version of the database engine. Valid values:
    // 
    // *   **6.0**
    // *   **5.0**
    // *   **4.4**
    // *   **4.2**
    // *   **4.0**
    // 
    // > When you call this operation to clone an instance or restore an instance from the recycle bin, set the value of this parameter to the engine version of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The global IP address whitelist template name of the instance. Multiple IP address whitelist template names are separated by commas (,) and each template name must be unique. (The template feature is available only in canary release.)
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The zone where the hidden node resides for multi-zone deployment. Valid values:
    // 
    // *   **cn-hangzhou-g**: Hangzhou Zone G.
    // *   **cn-hangzhou-h**: Hangzhou Zone H.
    // *   **cn-hangzhou-i**: Hangzhou Zone I.
    // *   **cn-hongkong-b**: Hongkong Zone B.
    // *   **cn-hongkong-c**: Hongkong Zone C.
    // *   **cn-hongkong-d**: Hongkong Zone D.
    // *   **cn-wulanchabu-a**: Ulanqab Zone A.
    // *   **cn-wulanchabu-b**: Ulanqab Zone B.
    // *   **cn-wulanchabu-c**: Ulanqab Zone C.
    // *   **ap-southeast-1a**: Singapore Zone A.
    // *   **ap-southeast-1b**: Singapore Zone B.
    // *   **ap-southeast-1c**: Singapore Zone C.
    // *   **ap-southeast-5a**: Jakarta Zone A.
    // *   **ap-southeast-5b**: Jakarta Zone B.
    // *   **ap-southeast-5c**: Jakarta Zone C.
    // *   **eu-central-1a**: Frankfurt Zone A.
    // *   **eu-central-1b**: Frankfurt Zone B.
    // *   **eu-central-1c**: Frankfurt Zone C.
    // 
    // >  *   This parameter is valid and required when the **EngineVersion** parameter is set to **4.4** or **5.0**.
    // >  *   The value of this parameter cannot be the same as the value of the **ZoneId** or **SecondaryZoneId** parameter.
    shared_ptr<string> hiddenZoneId_ {};
    // The network type of the instance. Valid value:
    // 
    // **VPC**: Virtual Private Cloud (VPC)
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription period of the instance. Unit: months.
    // 
    // Valid values: **1** to **9**, **12**, **24**, **36**, and **60**.
    // 
    // > When you set the **ChargeType** parameter to **PrePaid**, this parameter is valid and required.
    shared_ptr<int32_t> period_ {};
    // The provisioned IOPS. Valid values: 0 to 50000.
    shared_ptr<int64_t> provisionedIops_ {};
    // The number of **read-only nodes** in the replica set instance. Default value: **0**. Valid values: **0** to **5**.
    shared_ptr<string> readonlyReplicas_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of **nodes** in the replica set instance. Default value: 3. Valid values:
    // 
    // *   **3**
    // *   **5**
    // *   **7**
    shared_ptr<string> replicationFactor_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which the instance is restored, which must be within seven days. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format (UTC time).
    // 
    // > When you call this operation to restore an instance to the specified time, this parameter is required. The **SrcDBInstanceId** parameter is also required.
    shared_ptr<string> restoreTime_ {};
    // The backup restore type of the instance.
    // - 0: restore an instance to the specified backup set.
    // - 1:  restore an instance to the specified time.
    // - 2: restore an  released instance to the specified backup set.
    // - 3：restore an instance to the specified cross-regional backup set.
    shared_ptr<string> restoreType_ {};
    // The zone where the secondary node resides for multi-zone deployment. Valid values:
    // 
    // *   **cn-hangzhou-g**: Hangzhou Zone G.
    // *   **cn-hangzhou-h**: Hangzhou Zone H.
    // *   **cn-hangzhou-i**: Hangzhou Zone I.
    // *   **cn-hongkong-b**: Hongkong Zone B.
    // *   **cn-hongkong-c**: Hongkong Zone C.
    // *   **cn-hongkong-d**: Hongkong Zone D.
    // *   **cn-wulanchabu-a**: Ulanqab Zone A.
    // *   **cn-wulanchabu-b**: Ulanqab Zone B.
    // *   **cn-wulanchabu-c**: Ulanqab Zone C.
    // *   **ap-southeast-1a**: Singapore Zone A.
    // *   **ap-southeast-1b**: Singapore Zone B.
    // *   **ap-southeast-1c**: Singapore Zone C.
    // *   **ap-southeast-5a**: Jakarta Zone A.
    // *   **ap-southeast-5b**: Jakarta Zone B.
    // *   **ap-southeast-5c**: Jakarta Zone C.
    // *   **eu-central-1a**: Frankfurt Zone A.
    // *   **eu-central-1b**: Frankfurt Zone B.
    // *   **eu-central-1c**: Frankfurt Zone C.
    // 
    // >  *   This parameter is valid and required when the **EngineVersion** parameter is set to **4.4** or **5.0**.
    // >  *   The value of this parameter cannot be the same as the value of the **ZoneId** or **HiddenZoneId** parameter.
    shared_ptr<string> secondaryZoneId_ {};
    // The IP addresses in an IP address whitelist. Multiple IP addresses are separated by commas (,), and each IP address in the IP address whitelist must be unique. The following types of values are supported:
    // 
    // *   0.0.0.0/0
    // *   IP addresses, such as 10.23.12.24.
    // *   Classless Inter-Domain Routing (CIDR) blocks, such as 10.23.12.0/24. In this case, /24 indicates that the prefix of each IP address is 24-bit long. You can replace 24 with a value within the range of 1 to 32.
    // 
    // > *   A maximum of 1,000 IP addresses or CIDR blocks can be configured for each instance.
    // > *   If you enter 0.0.0.0/0, all IP addresses can access the instance. This may introduce security risks to the instance. Proceed with caution.
    shared_ptr<string> securityIPList_ {};
    // The ID of the source instance.
    // 
    // > When you call this operation to clone an instance, this parameter is required. The **BackupId** or **RestoreTime** parameter is also required. When you call this operation to restore an instance from the recycle bin, this parameter is required. The **BackupId** or **RestoreTime** parameter is not required.
    shared_ptr<string> srcDBInstanceId_ {};
    // The region ID of the instance.
    // 
    // > -  This parameter is required when restore type is set to 2 or 3.
    shared_ptr<string> srcRegion_ {};
    // The storage engine of the instance. Set the value to **WiredTiger**.
    // 
    // > * If you call this operation to clone an instance or restore an instance from the recycle bin, set this parameter to the storage engine of the source instance.
    // > * For more information about the limits on database versions and storage engines of an instance, see [MongoDB versions and storage engines](https://help.aliyun.com/document_detail/61906.html).
    shared_ptr<string> storageEngine_ {};
    // The storage type of the instance. Valid values:
    // 
    // *   **cloud_essd1** :ESSD PL1.
    // *   **cloud_essd2**: ESSD PL2.
    // *   **cloud_essd3**: ESSD PL3.
    // *   **local_ssd**: local SSD.
    shared_ptr<string> storageType_ {};
    // The custom tags added to the instance.
    shared_ptr<vector<CreateDBInstanceRequest::Tag>> tag_ {};
    // The ID of the vSwitch to which the instance is connected.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
