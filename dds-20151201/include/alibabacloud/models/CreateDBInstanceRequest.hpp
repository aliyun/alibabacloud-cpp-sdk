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
      // The tag key.
      // 
      // > - **N** specifies the Nth tag. For example, **Tag.1.Key** specifies the key of the first tag, and **Tag.2.Key** specifies the key of the second tag.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // > **N** specifies the Nth tag. For example, **Tag.1.Value** specifies the value of the first tag, and **Tag.2.Value** specifies the value of the second tag.
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
    // The password for the root account. The password must meet the following requirements:
    // 
    // - It must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // 
    // - The special characters are !@#$%^&\\*()_+-=
    // 
    // - It must be 8 to 32 characters long.
    // 
    // > For more information about connection failures caused by special characters in passwords, see [How do I fix a connection failure that is caused by special characters in a password?]().
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Enables auto-renewal.
    // 
    // - **false**: The default value. Disables auto-renewal. You must manually renew the instance.
    // 
    // > This parameter is optional and takes effect only when you set the **ChargeType** parameter to **PrePaid**.
    shared_ptr<string> autoRenew_ {};
    // The backup point ID. To query the backup point ID, call the [DescribeBackups]() operation.
    // 
    // > You must specify this parameter and the **SrcDBInstanceId** parameter only when you clone an instance based on a backup point.
    shared_ptr<string> backupId_ {};
    // The business information. This is an optional parameter.
    shared_ptr<string> businessInfo_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **PostPaid**: The default value. Pay-as-you-go.
    // 
    // - **PrePaid**: Subscription.
    // 
    // > If you set this parameter to **PrePaid**, you must also specify the **Period** parameter.
    shared_ptr<string> chargeType_ {};
    // A client token that is used to ensure the idempotence of the request. You can use the client to generate the token. Make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot be more than 64 characters long.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> clusterId_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **default** or **null** (default): Uses a coupon.
    // 
    // - **youhuiquan_promotion_option_id_for_blank**: Does not use a coupon.
    shared_ptr<string> couponNo_ {};
    // The instance type. To query instance types, call the [DescribeAvailableResource]() operation.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceClass_ {};
    // The instance name. The name must meet the following requirements:
    // 
    // - It must start with a letter or a Chinese character.
    // 
    // - It can contain letters, Chinese characters, digits, underscores (_), periods (.), and hyphens (-).
    // 
    // - It must be 2 to 256 characters long.
    shared_ptr<string> DBInstanceDescription_ {};
    // The storage space of the instance in GB.
    // 
    // The value of this parameter varies based on the instance type. For more information, see [Replica set instance types]().
    // 
    // This parameter is required.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The database name.
    // 
    // > When you clone an instance, you can specify this parameter to clone specific databases. If you do not specify this parameter, all databases of the instance are cloned.
    shared_ptr<string> databaseNames_ {};
    // Specifies whether to enable disk encryption.
    shared_ptr<bool> encrypted_ {};
    // The custom key ID.
    shared_ptr<string> encryptionKey_ {};
    // The database engine. The value is fixed as **MongoDB**.
    shared_ptr<string> engine_ {};
    // The database engine version. Valid values:
    // 
    // - **8.0**
    // 
    // - **7.0**
    // 
    // - **6.0**
    // 
    // - **5.0**
    // 
    // - **4.4**
    // 
    // - **4.2**
    // 
    // - **4.0**
    // 
    // > When you clone an instance or restore an instance from the recycle bin, this parameter must be the same as the engine version of the source instance.
    // 
    // >Warning: 
    // 
    // Versions 3.4 and earlier are discontinued.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The global IP address whitelist templates for the instance. Separate multiple templates with commas (,). The templates cannot be repeated. This feature is in canary release.
    shared_ptr<string> globalSecurityGroupIds_ {};
    // The zone where the hidden node is deployed. This parameter is used for multi-zone deployment. Valid values:
    // 
    // - **cn-hangzhou-g**: Zone G in Hangzhou.
    // 
    // - **cn-hangzhou-h**: Zone H in Hangzhou.
    // 
    // - **cn-hangzhou-i**: Zone I in Hangzhou.
    // 
    // - **cn-hongkong-b**: Zone B in Hong Kong (China).
    // 
    // - **cn-hongkong-c**: Zone C in Hong Kong (China).
    // 
    // - **cn-hongkong-d**: Zone D in Hong Kong (China).
    // 
    // - **cn-wulanchabu-a**: Zone A in Ulanqab.
    // 
    // - **cn-wulanchabu-b**: Zone B in Ulanqab.
    // 
    // - **cn-wulanchabu-c**: Zone C in Ulanqab.
    // 
    // - **ap-southeast-1a**: Zone A in Singapore.
    // 
    // - **ap-southeast-1b**: Zone B in Singapore.
    // 
    // - **ap-southeast-1c**: Zone C in Singapore.
    // 
    // - **ap-southeast-5a**: Zone A in Jakarta.
    // 
    // - **ap-southeast-5b**: Zone B in Jakarta.
    // 
    // - **ap-southeast-5c**: Zone C in Jakarta.
    // 
    // - **eu-central-1a**: Zone A in Frankfurt.
    // 
    // - **eu-central-1b**: Zone B in Frankfurt.
    // 
    // - **eu-central-1c**: Zone C in Frankfurt.
    // 
    // > * This parameter is available when the instance uses disks.
    // >
    // > * The value of this parameter cannot be the same as the value of the **ZoneId** or **SecondaryZoneId** parameter.
    shared_ptr<string> hiddenZoneId_ {};
    // The network type of the instance. Valid values:
    // 
    // **VPC**: virtual private cloud (VPC).
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription duration of the instance in months.
    // 
    // Valid values: **1** to **9** (integers), **12**, **24**, **36**, and **60**.
    // 
    // > This parameter is required and takes effect only when you set the **ChargeType** parameter to **PrePaid**.
    shared_ptr<int32_t> period_ {};
    // The provisioned IOPS (input/output operations per second). Valid values: 0 to 50000.
    shared_ptr<int64_t> provisionedIops_ {};
    // The number of **read-only nodes** in the replica set instance. Valid values are integers from **0** to **5**. The default value is **0**.
    shared_ptr<string> readonlyReplicas_ {};
    // The region ID. To query the region ID, call the [DescribeRegions]() operation.
    // 
    // > When you clone an instance or restore an instance from the recycle bin, this parameter must be the same as the region ID of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of **primary and secondary nodes** in the replica set instance. Valid values:
    // 
    // - **3** (default)
    // 
    // - **5**
    // 
    // - **7**
    // 
    // >Notice: 
    // 
    // You do not need to specify this parameter for standalone instances.
    shared_ptr<string> replicationFactor_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore the instance. You can specify any point in time within the last seven days. The time must be in the *yyyy-MM-dd*T*HH:mm:ss*Z format and in UTC.
    // 
    // > You must specify this parameter and the **SrcDBInstanceId** parameter only when you clone an instance based on a point in time.
    shared_ptr<string> restoreTime_ {};
    // The method to restore an instance from a backup.
    // 
    // - 0: Restores the instance to a specified backup set.
    // 
    // - 1: Restores the instance to a specified point in time.
    // 
    // - 2: Restores a released instance to a specified backup set.
    // 
    // - 3: Restores the instance to a specified geo-redundant backup set.
    shared_ptr<string> restoreType_ {};
    // The zone where the secondary node is deployed. This parameter is used for multi-zone deployment. Valid values:
    // 
    // - **cn-hangzhou-g**: Zone G in Hangzhou.
    // 
    // - **cn-hangzhou-h**: Zone H in Hangzhou.
    // 
    // - **cn-hangzhou-i**: Zone I in Hangzhou.
    // 
    // - **cn-hongkong-b**: Zone B in Hong Kong (China).
    // 
    // - **cn-hongkong-c**: Zone C in Hong Kong (China).
    // 
    // - **cn-hongkong-d**: Zone D in Hong Kong (China).
    // 
    // - **cn-wulanchabu-a**: Zone A in Ulanqab.
    // 
    // - **cn-wulanchabu-b**: Zone B in Ulanqab.
    // 
    // - **cn-wulanchabu-c**: Zone C in Ulanqab.
    // 
    // - **ap-southeast-1a**: Zone A in Singapore.
    // 
    // - **ap-southeast-1b**: Zone B in Singapore.
    // 
    // - **ap-southeast-1c**: Zone C in Singapore.
    // 
    // - **ap-southeast-5a**: Zone A in Jakarta.
    // 
    // - **ap-southeast-5b**: Zone B in Jakarta.
    // 
    // - **ap-southeast-5c**: Zone C in Jakarta.
    // 
    // - **eu-central-1a**: Zone A in Frankfurt.
    // 
    // - **eu-central-1b**: Zone B in Frankfurt.
    // 
    // - **eu-central-1c**: Zone C in Frankfurt.
    // 
    // > * This parameter is available when the instance uses disks.
    // >
    // > * The value of this parameter cannot be the same as the value of the **ZoneId** or **HiddenZoneId** parameter.
    shared_ptr<string> secondaryZoneId_ {};
    // The IP address whitelist of the instance. Separate multiple IP addresses with commas (,). Each IP address in the whitelist must be unique. The whitelist can be in one of the following formats:
    // 
    // - 0.0.0.0/0
    // 
    // - An IP address, for example, 10.23.12.24.
    // 
    // - A CIDR block, for example, 10.23.12.0/24. The /24 indicates that the prefix of the CIDR block is 24 bits in length. You can set the prefix to a value from 1 to 32.
    // 
    // > * You can add a maximum of 1,000 IP addresses or CIDR blocks to all IP address whitelists.
    // >
    // > * If you set the whitelist to 0.0.0.0/0, all IP addresses can access the instance. This is a high-risk setting. Use this with caution.
    shared_ptr<string> securityIPList_ {};
    // The source instance ID.
    // 
    // > When you clone an instance, you must specify this parameter and the **BackupId** or **RestoreTime** parameter. When you restore an instance from the recycle bin, you only need to specify this parameter. You do not need to specify the **BackupId** or **RestoreTime** parameter.
    shared_ptr<string> srcDBInstanceId_ {};
    // The region where the source instance is located.
    // 
    // > - This parameter is required when RestoreType is set to 2 or 3.
    shared_ptr<string> srcRegion_ {};
    // The storage engine of the instance. The value is fixed as **WiredTiger**.
    // 
    // > - When you clone an instance or restore an instance from the recycle bin, this parameter must be the same as the storage engine of the source instance.
    // >
    // > - For more information about the constraints on storage engines and database versions, see [Versions and storage engines]().
    shared_ptr<string> storageEngine_ {};
    // The storage class. Valid values:
    // 
    // - **cloud_essd1**: ESSD PL1 disk.
    // 
    // - **cloud_essd2**: ESSD PL2 disk.
    // 
    // - **cloud_essd3**: ESSD PL3 disk.
    // 
    // - **cloud_auto**: ESSD AutoPL disk.
    // 
    // - **local_ssd**: Local SSD.
    // 
    // > * For standalone instances, if you pass the value cloud_essd1, an ESSD disk is used.
    // >
    // > * ESSD AutoPL disks are available only on the China site (aliyun.com).
    // >
    // > * For instances of version 4.4 or later, the default value is **cloud_essd1**.
    // >
    // > * For instances of version 4.2 or earlier, the default value is **local_ssd**.
    shared_ptr<string> storageType_ {};
    // The custom tags.
    shared_ptr<vector<CreateDBInstanceRequest::Tag>> tag_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
    // The zone ID. To query the zone ID, call the [DescribeRegions]() operation.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
