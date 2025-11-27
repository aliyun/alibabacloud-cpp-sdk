// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPSETEXPIRETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPSETEXPIRETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyBackupSetExpireTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupSetExpireTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupSetExpireTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyBackupSetExpireTimeRequest() = default ;
    ModifyBackupSetExpireTimeRequest(const ModifyBackupSetExpireTimeRequest &) = default ;
    ModifyBackupSetExpireTimeRequest(ModifyBackupSetExpireTimeRequest &&) = default ;
    ModifyBackupSetExpireTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupSetExpireTimeRequest() = default ;
    ModifyBackupSetExpireTimeRequest& operator=(const ModifyBackupSetExpireTimeRequest &) = default ;
    ModifyBackupSetExpireTimeRequest& operator=(ModifyBackupSetExpireTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->expectExpireTime_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline int64_t backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, 0L) };
    inline ModifyBackupSetExpireTimeRequest& setBackupId(int64_t backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupSetExpireTimeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // expectExpireTime Field Functions 
    bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
    void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
    inline string expectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
    inline ModifyBackupSetExpireTimeRequest& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupSetExpireTimeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The backup set ID. You can call the DescribeBackups operation to query the backup set ID. The backup set must meet the following requirements:
    // 
    // *   The Engine parameter is SQLServer
    // *   The BackupMode parameter is set to Manual.
    // *   The BackupMethod parameter is set to Physical.
    // *   The BackupType parameter is set to FullBackup.
    // *   The BackupStatus parameter is set to Success.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> backupId_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The point in time to which you want to extend the expiration time of the backup set. Specify the time in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    // 
    // The time cannot be earlier than the current expiration time. You can call the DescribeBackups operation to view the current expiration time of the backup set.
    // 
    // This parameter is required.
    std::shared_ptr<string> expectExpireTime_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
