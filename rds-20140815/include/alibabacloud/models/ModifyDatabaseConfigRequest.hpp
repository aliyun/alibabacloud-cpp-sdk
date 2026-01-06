// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDatabaseConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabaseConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DatabasePropertyName, databasePropertyName_);
      DARABONBA_PTR_TO_JSON(DatabasePropertyValue, databasePropertyValue_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabaseConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DatabasePropertyName, databasePropertyName_);
      DARABONBA_PTR_FROM_JSON(DatabasePropertyValue, databasePropertyValue_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDatabaseConfigRequest() = default ;
    ModifyDatabaseConfigRequest(const ModifyDatabaseConfigRequest &) = default ;
    ModifyDatabaseConfigRequest(ModifyDatabaseConfigRequest &&) = default ;
    ModifyDatabaseConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabaseConfigRequest() = default ;
    ModifyDatabaseConfigRequest& operator=(const ModifyDatabaseConfigRequest &) = default ;
    ModifyDatabaseConfigRequest& operator=(ModifyDatabaseConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBName_ == nullptr && this->databasePropertyName_ == nullptr && this->databasePropertyValue_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDatabaseConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline ModifyDatabaseConfigRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // databasePropertyName Field Functions 
    bool hasDatabasePropertyName() const { return this->databasePropertyName_ != nullptr;};
    void deleteDatabasePropertyName() { this->databasePropertyName_ = nullptr;};
    inline string getDatabasePropertyName() const { DARABONBA_PTR_GET_DEFAULT(databasePropertyName_, "") };
    inline ModifyDatabaseConfigRequest& setDatabasePropertyName(string databasePropertyName) { DARABONBA_PTR_SET_VALUE(databasePropertyName_, databasePropertyName) };


    // databasePropertyValue Field Functions 
    bool hasDatabasePropertyValue() const { return this->databasePropertyValue_ != nullptr;};
    void deleteDatabasePropertyValue() { this->databasePropertyValue_ = nullptr;};
    inline string getDatabasePropertyValue() const { DARABONBA_PTR_GET_DEFAULT(databasePropertyValue_, "") };
    inline ModifyDatabaseConfigRequest& setDatabasePropertyValue(string databasePropertyValue) { DARABONBA_PTR_SET_VALUE(databasePropertyValue_, databasePropertyValue) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDatabaseConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDatabaseConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDatabaseConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDatabaseConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The database name.
    // 
    // >  You can specify only one database name.
    // 
    // This parameter is required.
    shared_ptr<string> DBName_ {};
    // The database property that you want to modify.
    // 
    // *   **If you want to modify a property of the database**, set this parameter to the name of the database property.
    // *   **If you want to archive data from the database to an OSS bucket**, specify the database status. If you set this parameter to `covert_online_db_to_cold_storage`, the system converts an online database to a cold storage database. If you set this parameter to `convert_cold_storage_db_to_online`, the system converts a cold storage database to an online database.
    // 
    // This parameter is required.
    shared_ptr<string> databasePropertyName_ {};
    // The value of the database property that you want to modify.
    // 
    // *   **If you want to modify a property of the database**, set this parameter to the property value.
    // *   **If you want to archive data from the database to an OSS bucket**, set this parameter to **1**. The system converts a database to a cold storage database or an online database.
    // 
    // This parameter is required.
    shared_ptr<string> databasePropertyValue_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
