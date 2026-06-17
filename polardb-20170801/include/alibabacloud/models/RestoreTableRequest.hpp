// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTORETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTORETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RestoreTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
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
        && this->DBClusterId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->restoreTime_ == nullptr && this->securityToken_ == nullptr && this->tableMeta_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RestoreTableRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline RestoreTableRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


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


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RestoreTableRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline string getTableMeta() const { DARABONBA_PTR_GET_DEFAULT(tableMeta_, "") };
    inline RestoreTableRequest& setTableMeta(string tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };


  protected:
    // The backup set ID.
    // 
    // > This parameter is required if you want to restore databases and tables from a backup set. Call the [DescribeBackups](https://help.aliyun.com/document_detail/98102.html) operation to query backup set IDs.
    shared_ptr<string> backupId_ {};
    // The cluster ID.
    // 
    // > Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters in your account.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore data. Specify the time in the YYYY-MM-DDThh:mmZ format. The time must be in Coordinated Universal Time (UTC).
    // 
    // > - This parameter is required if you want to restore data to a specific point in time.
    // >
    // > - Data can be restored to any point in time within the last seven days.
    shared_ptr<string> restoreTime_ {};
    shared_ptr<string> securityToken_ {};
    // A JSON string that specifies the destination databases and tables to restore. All values in the JSON string must be strings.
    // For example: `[ { "tables":[ { "name":"testtb", "type":"table", "newname":"testtb_restore" } ], "name":"testdb", "type":"db", "newname":"testdb_restore" } ]`.
    // 
    // > Call the [DescribeMetaList](https://help.aliyun.com/document_detail/194770.html) operation to query the names of the databases and tables that can be restored. Then, enter the information into the example format.
    // 
    // This parameter is required.
    shared_ptr<string> tableMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
