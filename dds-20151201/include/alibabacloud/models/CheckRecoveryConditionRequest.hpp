// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRECOVERYCONDITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRECOVERYCONDITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CheckRecoveryConditionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRecoveryConditionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SourceDBInstance, sourceDBInstance_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRecoveryConditionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DatabaseNames, databaseNames_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstance, sourceDBInstance_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
    };
    CheckRecoveryConditionRequest() = default ;
    CheckRecoveryConditionRequest(const CheckRecoveryConditionRequest &) = default ;
    CheckRecoveryConditionRequest(CheckRecoveryConditionRequest &&) = default ;
    CheckRecoveryConditionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRecoveryConditionRequest() = default ;
    CheckRecoveryConditionRequest& operator=(const CheckRecoveryConditionRequest &) = default ;
    CheckRecoveryConditionRequest& operator=(CheckRecoveryConditionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->databaseNames_ == nullptr && this->destRegion_ == nullptr && this->engineVersion_ == nullptr && this->instanceType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr
        && this->restoreType_ == nullptr && this->sourceDBInstance_ == nullptr && this->srcRegion_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CheckRecoveryConditionRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // databaseNames Field Functions 
    bool hasDatabaseNames() const { return this->databaseNames_ != nullptr;};
    void deleteDatabaseNames() { this->databaseNames_ = nullptr;};
    inline string getDatabaseNames() const { DARABONBA_PTR_GET_DEFAULT(databaseNames_, "") };
    inline CheckRecoveryConditionRequest& setDatabaseNames(string databaseNames) { DARABONBA_PTR_SET_VALUE(databaseNames_, databaseNames) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline CheckRecoveryConditionRequest& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CheckRecoveryConditionRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CheckRecoveryConditionRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CheckRecoveryConditionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CheckRecoveryConditionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CheckRecoveryConditionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CheckRecoveryConditionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CheckRecoveryConditionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CheckRecoveryConditionRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CheckRecoveryConditionRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // sourceDBInstance Field Functions 
    bool hasSourceDBInstance() const { return this->sourceDBInstance_ != nullptr;};
    void deleteSourceDBInstance() { this->sourceDBInstance_ = nullptr;};
    inline string getSourceDBInstance() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstance_, "") };
    inline CheckRecoveryConditionRequest& setSourceDBInstance(string sourceDBInstance) { DARABONBA_PTR_SET_VALUE(sourceDBInstance_, sourceDBInstance) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline CheckRecoveryConditionRequest& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


  protected:
    // The backup ID.
    // 
    // > *   You can call the [DescribeBackups](https://help.aliyun.com/document_detail/62172.html) operation to query the backup ID.
    // > *   You must specify one of the **RestoreTime** and BackupId parameters.
    // > *   This parameter is not applicable to sharded cluster instances.
    shared_ptr<string> backupId_ {};
    // The name of the source database. The value is a JSON array.
    // 
    // >  If you do not specify this parameter, all databases are restored by default.
    shared_ptr<string> databaseNames_ {};
    // The region of the backup set used for the cross-region backup and restoration.
    // 
    // >  This parameter is required when you set the RestoreType parameter to 3.
    shared_ptr<string> destRegion_ {};
    // The database engine version of the instance.
    // 
    // *   **6.0**
    // *   **5.0**
    // *   **4.4**
    // *   **4.2**
    // *   **4.0**
    // *   **3.4**
    shared_ptr<string> engineVersion_ {};
    // The instance architecture. Valid values:
    // 
    // *   replicate
    // *   sharding
    // 
    // > * This parameter is required when you set the RestoreType parameter to 2.
    // > * This parameter is required when you set the RestoreType parameter to 3.
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which the instance is restored. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > *   The time can be a point in time within the past seven days. The time must be earlier than the current time, but later than the time when the instance was created.
    // > *   You must specify one of the RestoreTime and **BackupId** parameters.
    shared_ptr<string> restoreTime_ {};
    // The restoration type.
    // 
    // > * 0: The data of the source instance is restored to a new instance in the same region.
    // > * 1: The data of the source instance is restored to an earlier point in time.
    // > * 2: The data of a deleted instance is restored to a new instance from the backup set.
    // > * 3: The data of a deleted instance is restored to a new instance in another region from the backup set.
    shared_ptr<string> restoreType_ {};
    // The ID of the source instance.
    shared_ptr<string> sourceDBInstance_ {};
    // The region where the source instance resides.
    // 
    // > * This parameter is required when you set the RestoreType parameter to 2.
    // > * This parameter is required when you set the RestoreType parameter to 3.
    shared_ptr<string> srcRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
