// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONLINEDATABASETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEONLINEDATABASETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateOnlineDatabaseTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOnlineDatabaseTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOnlineDatabaseTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateOnlineDatabaseTaskRequest() = default ;
    CreateOnlineDatabaseTaskRequest(const CreateOnlineDatabaseTaskRequest &) = default ;
    CreateOnlineDatabaseTaskRequest(CreateOnlineDatabaseTaskRequest &&) = default ;
    CreateOnlineDatabaseTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOnlineDatabaseTaskRequest() = default ;
    CreateOnlineDatabaseTaskRequest& operator=(const CreateOnlineDatabaseTaskRequest &) = default ;
    CreateOnlineDatabaseTaskRequest& operator=(CreateOnlineDatabaseTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkDBMode_ == nullptr
        && return this->clientToken_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr && return this->migrateTaskId_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // checkDBMode Field Functions 
    bool hasCheckDBMode() const { return this->checkDBMode_ != nullptr;};
    void deleteCheckDBMode() { this->checkDBMode_ = nullptr;};
    inline string checkDBMode() const { DARABONBA_PTR_GET_DEFAULT(checkDBMode_, "") };
    inline CreateOnlineDatabaseTaskRequest& setCheckDBMode(string checkDBMode) { DARABONBA_PTR_SET_VALUE(checkDBMode_, checkDBMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOnlineDatabaseTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateOnlineDatabaseTaskRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateOnlineDatabaseTaskRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string migrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline CreateOnlineDatabaseTaskRequest& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateOnlineDatabaseTaskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateOnlineDatabaseTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateOnlineDatabaseTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateOnlineDatabaseTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The consistency check method after the database is open. Valid values:
    // 
    // *   **SyncExecuteDBCheck**: synchronous database check
    // *   **AsyncExecuteDBCheck**: asynchronous database check
    // 
    // > The check methods are supported for RDS instances that run SQL Server 2008 R2.
    // 
    // This parameter is required.
    std::shared_ptr<string> checkDBMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBName_ = nullptr;
    // The ID of the migration task.
    // 
    // This parameter is required.
    std::shared_ptr<string> migrateTaskId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
