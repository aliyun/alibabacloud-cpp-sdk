// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMIGRATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMIGRATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateMigrateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMigrateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(IsOnlineDB, isOnlineDB_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(OSSUrls, OSSUrls_);
      DARABONBA_PTR_TO_JSON(OssObjectPositions, ossObjectPositions_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMigrateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(IsOnlineDB, isOnlineDB_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(OSSUrls, OSSUrls_);
      DARABONBA_PTR_FROM_JSON(OssObjectPositions, ossObjectPositions_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateMigrateTaskRequest() = default ;
    CreateMigrateTaskRequest(const CreateMigrateTaskRequest &) = default ;
    CreateMigrateTaskRequest(CreateMigrateTaskRequest &&) = default ;
    CreateMigrateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMigrateTaskRequest() = default ;
    CreateMigrateTaskRequest& operator=(const CreateMigrateTaskRequest &) = default ;
    CreateMigrateTaskRequest& operator=(CreateMigrateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && this->checkDBMode_ == nullptr && this->DBInstanceId_ == nullptr && this->DBName_ == nullptr && this->isOnlineDB_ == nullptr && this->migrateTaskId_ == nullptr
        && this->OSSUrls_ == nullptr && this->ossObjectPositions_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline CreateMigrateTaskRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // checkDBMode Field Functions 
    bool hasCheckDBMode() const { return this->checkDBMode_ != nullptr;};
    void deleteCheckDBMode() { this->checkDBMode_ = nullptr;};
    inline string getCheckDBMode() const { DARABONBA_PTR_GET_DEFAULT(checkDBMode_, "") };
    inline CreateMigrateTaskRequest& setCheckDBMode(string checkDBMode) { DARABONBA_PTR_SET_VALUE(checkDBMode_, checkDBMode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateMigrateTaskRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateMigrateTaskRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // isOnlineDB Field Functions 
    bool hasIsOnlineDB() const { return this->isOnlineDB_ != nullptr;};
    void deleteIsOnlineDB() { this->isOnlineDB_ = nullptr;};
    inline string getIsOnlineDB() const { DARABONBA_PTR_GET_DEFAULT(isOnlineDB_, "") };
    inline CreateMigrateTaskRequest& setIsOnlineDB(string isOnlineDB) { DARABONBA_PTR_SET_VALUE(isOnlineDB_, isOnlineDB) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string getMigrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline CreateMigrateTaskRequest& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // OSSUrls Field Functions 
    bool hasOSSUrls() const { return this->OSSUrls_ != nullptr;};
    void deleteOSSUrls() { this->OSSUrls_ = nullptr;};
    inline string getOSSUrls() const { DARABONBA_PTR_GET_DEFAULT(OSSUrls_, "") };
    inline CreateMigrateTaskRequest& setOSSUrls(string OSSUrls) { DARABONBA_PTR_SET_VALUE(OSSUrls_, OSSUrls) };


    // ossObjectPositions Field Functions 
    bool hasOssObjectPositions() const { return this->ossObjectPositions_ != nullptr;};
    void deleteOssObjectPositions() { this->ossObjectPositions_ = nullptr;};
    inline string getOssObjectPositions() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPositions_, "") };
    inline CreateMigrateTaskRequest& setOssObjectPositions(string ossObjectPositions) { DARABONBA_PTR_SET_VALUE(ossObjectPositions_, ossObjectPositions) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMigrateTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMigrateTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMigrateTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> backupMode_ {};
    shared_ptr<string> checkDBMode_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> DBName_ {};
    // This parameter is required.
    shared_ptr<string> isOnlineDB_ {};
    shared_ptr<string> migrateTaskId_ {};
    shared_ptr<string> OSSUrls_ {};
    shared_ptr<string> ossObjectPositions_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
