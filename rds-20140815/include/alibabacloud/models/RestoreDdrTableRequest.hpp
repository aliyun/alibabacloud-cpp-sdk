// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREDDRTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREDDRTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RestoreDdrTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreDdrTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreDdrTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SourceDBInstanceName, sourceDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
    };
    RestoreDdrTableRequest() = default ;
    RestoreDdrTableRequest(const RestoreDdrTableRequest &) = default ;
    RestoreDdrTableRequest(RestoreDdrTableRequest &&) = default ;
    RestoreDdrTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreDdrTableRequest() = default ;
    RestoreDdrTableRequest& operator=(const RestoreDdrTableRequest &) = default ;
    RestoreDdrTableRequest& operator=(RestoreDdrTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr && this->restoreType_ == nullptr && this->sourceDBInstanceName_ == nullptr
        && this->sourceRegion_ == nullptr && this->tableMeta_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RestoreDdrTableRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestoreDdrTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RestoreDdrTableRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RestoreDdrTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestoreDdrTableRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RestoreDdrTableRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RestoreDdrTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RestoreDdrTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline RestoreDdrTableRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline RestoreDdrTableRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // sourceDBInstanceName Field Functions 
    bool hasSourceDBInstanceName() const { return this->sourceDBInstanceName_ != nullptr;};
    void deleteSourceDBInstanceName() { this->sourceDBInstanceName_ = nullptr;};
    inline string getSourceDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDBInstanceName_, "") };
    inline RestoreDdrTableRequest& setSourceDBInstanceName(string sourceDBInstanceName) { DARABONBA_PTR_SET_VALUE(sourceDBInstanceName_, sourceDBInstanceName) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline RestoreDdrTableRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string getTableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline RestoreDdrTableRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


  protected:
    // The ID of the cross-region backup set. You can call the DescribeCrossRegionBackups operation to query the ID.
    // >This parameter is required when **RestoreType** is set to **0**.
    shared_ptr<string> backupId_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain a maximum of 64 ASCII characters and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The instance ID of the existing instance to be recovered.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the destination region. You can call the DescribeRegions operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore data. The specified point in time must be earlier than the current time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    // 
    // >This parameter is required when **RestoreType** is set to **1**.
    shared_ptr<string> restoreTime_ {};
    // The restoration method. Valid values:
    // * **0**: restores data based on a backup set. If you set this parameter to 0, you must also specify the **BackupId** parameter.
    // * **1**: restores data to a point in time. If you set this parameter to 1, you must also specify the **RestoreTime**, **SourceRegion**, and **SourceDBInstanceName** parameters.
    // 
    // Default value: **0**.
    // 
    // This parameter is required.
    shared_ptr<string> restoreType_ {};
    // The instance ID of the source instance to recover data to a point in time.
    // >This parameter is required when **RestoreType** is set to **1**.
    shared_ptr<string> sourceDBInstanceName_ {};
    // The ID of the source region for point-in-time restoration.
    // >This parameter is required when **RestoreType** is set to **1**.
    shared_ptr<string> sourceRegion_ {};
    // The databases and tables that you want to restore. Format:
    // ```[{"type":"db","name":"<Name of database 1>","newname":"<New name of database 1>","tables":[{"type":"table","name":"<Name of table 1 in database 1>","newname":"<New name of table 1>"},{"type":"table","name":"<Name of table 2 in database 1>","newname":"<New name of table 2>"}]},{"type":"db","name":"<Name of database 2>","newname":"<New name of database 2>","tables":[{"type":"table","name":"<Name of table 3 in database 2>","newname":"<New name of table 3>"},{"type":"table","name":"<Name of table 4 in database 2>","newname":"<New name of table 4>"}]}]```
    // 
    // This parameter is required.
    shared_ptr<string> tableMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
