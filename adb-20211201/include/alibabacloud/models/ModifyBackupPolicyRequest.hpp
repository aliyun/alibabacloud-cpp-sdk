// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupRetentionPeriod_ != nullptr
        && this->DBClusterId_ != nullptr && this->enableBackupLog_ != nullptr && this->logBackupRetentionPeriod_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->preferredBackupPeriod_ != nullptr && this->preferredBackupTime_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline string backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, "") };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(string backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyBackupPolicyRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline string enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, "") };
    inline ModifyBackupPolicyRequest& setEnableBackupLog(string enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline ModifyBackupPolicyRequest& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBackupPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBackupPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string preferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBackupPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBackupPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The number of days for which to retain full backup files. Valid values: 7 to 730.
    // 
    // >  If you do not specify this parameter, the default value 7 is used.
    std::shared_ptr<string> backupRetentionPeriod_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable log backup. Valid values:
    // 
    // *   **Enable**
    // *   **Disable**
    // 
    // >  If you do not specify this parameter, the default value Enable is used.
    std::shared_ptr<string> enableBackupLog_ = nullptr;
    // The number of days for which to retain log backup files. Valid values: 7 to 730.
    // 
    // >  If you do not specify this parameter, the default value 7 is used.
    std::shared_ptr<int32_t> logBackupRetentionPeriod_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The days of the week on which to perform a full backup. Separate multiple values with commas (,). Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >  To ensure data security, we recommend that you specify at least two values.
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The start time to perform a full backup. Specify the time in the HH:mmZ-HH:mmZ format. The time must be in UTC.
    // 
    // >  The time range must be 1 hour.
    // 
    // This parameter is required.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
