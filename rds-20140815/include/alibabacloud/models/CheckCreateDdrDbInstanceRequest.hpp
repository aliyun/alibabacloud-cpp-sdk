// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCREATEDDRDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCREATEDDRDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckCreateDdrDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCreateDdrDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCreateDdrDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
    };
    CheckCreateDdrDBInstanceRequest() = default ;
    CheckCreateDdrDBInstanceRequest(const CheckCreateDdrDBInstanceRequest &) = default ;
    CheckCreateDdrDBInstanceRequest(CheckCreateDdrDBInstanceRequest &&) = default ;
    CheckCreateDdrDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCreateDdrDBInstanceRequest() = default ;
    CheckCreateDdrDBInstanceRequest& operator=(const CheckCreateDdrDBInstanceRequest &) = default ;
    CheckCreateDdrDBInstanceRequest& operator=(CheckCreateDdrDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && return this->DBInstanceClass_ == nullptr && return this->DBInstanceStorage_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->restoreTime_ == nullptr
        && return this->restoreType_ == nullptr && return this->sourceDBInstanceName_ == nullptr && return this->sourceRegion_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CheckCreateDdrDBInstanceRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CheckCreateDdrDBInstanceRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t DBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline CheckCreateDdrDBInstanceRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CheckCreateDdrDBInstanceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CheckCreateDdrDBInstanceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CheckCreateDdrDBInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckCreateDdrDBInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CheckCreateDdrDBInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CheckCreateDdrDBInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CheckCreateDdrDBInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CheckCreateDdrDBInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CheckCreateDdrDBInstanceRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // sourceDBInstanceName Field Functions 
    bool hasSourceDBInstanceName() const { return this->sourceDBInstanceName_ != nullptr;};
    void deleteSourceDBInstanceName() { this->sourceDBInstanceName_ = nullptr;};
    inline string sourceDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstanceName_, "") };
    inline CheckCreateDdrDBInstanceRequest& setSourceDBInstanceName(string sourceDBInstanceName) { DARABONBA_PTR_SET_VALUE(sourceDBInstanceName_, sourceDBInstanceName) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string sourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline CheckCreateDdrDBInstanceRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


  protected:
    // The ID of the backup set that is used for the restoration. You can call the DescribeCrossRegionBackups operation to query the backup set ID.
    // 
    // >  This parameter must be specified when the **RestoreType** parameter is set to **0**.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The instance type of the destination instance. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The storage capacity of the destination instance. Valid values: **5 to 2000**. Unit: GB. You can increase the storage capacity in increments of 5 GB. For more information, see [Primary instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> DBInstanceStorage_ = nullptr;
    // The database engine of the destination instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The major engine version of the destination instance. The value of this parameter varies based on the value of **Engine**.
    // 
    // *   Valid values when Engine is set to MySQL: **5.5, 5.6, 5.7, and 8.0**
    // *   Valid values when Engine is set to SQLServer: **2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, and 2019_ent**
    // *   PostgreSQL: **10.0, 11.0, 12.0, 13.0, 14.0, and 15.0**
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the destination instance. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. You can call the DescribeDBInstanceAttribute to query the resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The point in time to which you want to restore data. The point in time that you specify must be earlier than the current time. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > If you set **RestoreType** to **1**, you must also specify this parameter.
    std::shared_ptr<string> restoreTime_ = nullptr;
    // The method that is used to restore data. Valid values:
    // 
    // *   **0**: restores data from a backup set. If you set this parameter to 0, you must also specify the **BackupSetId** parameter.
    // *   **1**: restores data to a point in time. If you set this parameter to 1, you must also specify the **RestoreTime**, **SourceRegion**, and **SourceDBInstanceName** parameters.
    // 
    // Default value: **0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> restoreType_ = nullptr;
    // The ID of the source instance if you want to restore data to a point in time.
    // 
    // >  This parameter must be specified when the **RestoreType** parameter is set to **1**.
    std::shared_ptr<string> sourceDBInstanceName_ = nullptr;
    // The region ID of the source instance if you want to restore data to a point in time.
    // 
    // > If you set **RestoreType** to **1**, you must also specify this parameter.
    std::shared_ptr<string> sourceRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
