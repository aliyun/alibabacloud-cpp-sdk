// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTORETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTORETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RestoreTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(InstantRecovery, instantRecovery_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstantRecovery, instantRecovery_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
    };
    RestoreTableRequest() = default ;
    RestoreTableRequest(const RestoreTableRequest &) = default ;
    RestoreTableRequest(RestoreTableRequest &&) = default ;
    RestoreTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreTableRequest() = default ;
    RestoreTableRequest& operator=(const RestoreTableRequest &) = default ;
    RestoreTableRequest& operator=(RestoreTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceId_ == nullptr && this->instantRecovery_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr && this->tableMeta_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RestoreTableRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestoreTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RestoreTableRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // instantRecovery Field Functions 
    bool hasInstantRecovery() const { return this->instantRecovery_ != nullptr;};
    void deleteInstantRecovery() { this->instantRecovery_ = nullptr;};
    inline bool getInstantRecovery() const { DARABONBA_PTR_GET_DEFAULT(instantRecovery_, false) };
    inline RestoreTableRequest& setInstantRecovery(bool instantRecovery) { DARABONBA_PTR_SET_VALUE(instantRecovery_, instantRecovery) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RestoreTableRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RestoreTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RestoreTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RestoreTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline RestoreTableRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string getTableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline RestoreTableRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


  protected:
    // The backup set ID. You can call the DescribeBackups operation to query the backup set list.
    // 
    // > You must specify at least one of **BackupId** and **RestoreTime**.
    shared_ptr<string> backupId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to enable fast restoration for individual databases and tables. Valid values:
    // * **true**: Enabled.
    // * **false**: Disabled.
    // 
    // > For more information about fast restoration for individual databases and tables, see [Restore individual databases and tables](https://help.aliyun.com/document_detail/103175.html).
    shared_ptr<bool> instantRecovery_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Any point in time within the backup retention period. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // 
    // > * You must specify at least one of **BackupId** and **RestoreTime**.
    // > * [Log backup](https://help.aliyun.com/document_detail/98818.html) must be enabled for the instance.
    shared_ptr<string> restoreTime_ {};
    // The databases and tables to restore.
    // > ApsaraDB RDS for PostgreSQL supports only the restoration of specific databases, not specific tables.
    // 
    // - ApsaraDB RDS for MySQL format: ```[{"type":"db","name":"<Database 1 name>","newname":"<New database 1 name>","tables":[{"type":"table","name":"<Table 1 name in database 1>","newname":"<New table 1 name>"},{"type":"table","name":"<Table 2 name in database 1>","newname":"<New table 2 name>"}]},{"type":"db","name":"<Database 2 name>","newname":"<New database 2 name>","tables":[{"type":"table","name":"<Table 3 name in database 2>","newname":"<New table 3 name>"},{"type":"table","name":"<Table 4 name in database 2>","newname":"<New table 4 name>"}]}]```
    // 
    // - ApsaraDB RDS for PostgreSQL format: ```[{"type":"db","name":"<Database 1 name>","newname":"<New database 1 name>"}]```
    // 
    // This parameter is required.
    shared_ptr<string> tableMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
