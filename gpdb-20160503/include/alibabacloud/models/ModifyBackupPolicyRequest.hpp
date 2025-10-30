// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
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
    virtual bool empty() const override { return this->backupRetentionPeriod_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->enableRecoveryPoint_ == nullptr && return this->preferredBackupPeriod_ == nullptr && return this->preferredBackupTime_ == nullptr && return this->recoveryPointPeriod_ == nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // enableRecoveryPoint Field Functions 
    bool hasEnableRecoveryPoint() const { return this->enableRecoveryPoint_ != nullptr;};
    void deleteEnableRecoveryPoint() { this->enableRecoveryPoint_ = nullptr;};
    inline bool enableRecoveryPoint() const { DARABONBA_PTR_GET_DEFAULT(enableRecoveryPoint_, false) };
    inline ModifyBackupPolicyRequest& setEnableRecoveryPoint(bool enableRecoveryPoint) { DARABONBA_PTR_SET_VALUE(enableRecoveryPoint_, enableRecoveryPoint) };


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


    // recoveryPointPeriod Field Functions 
    bool hasRecoveryPointPeriod() const { return this->recoveryPointPeriod_ != nullptr;};
    void deleteRecoveryPointPeriod() { this->recoveryPointPeriod_ = nullptr;};
    inline string recoveryPointPeriod() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointPeriod_, "") };
    inline ModifyBackupPolicyRequest& setRecoveryPointPeriod(string recoveryPointPeriod) { DARABONBA_PTR_SET_VALUE(recoveryPointPeriod_, recoveryPointPeriod) };


  protected:
    // The number of days for which data backup files are retained. Default value: 7. Maximum value: 7. Valid values: 1 to 7.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to enable automatic point-in-time backup.
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    std::shared_ptr<bool> enableRecoveryPoint_ = nullptr;
    // The cycle based on which backups are performed. If more than one day of the week is specified, the days of the week are separated by commas (,). Valid values:
    // 
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday
    // *   Sunday
    // 
    // This parameter is required.
    std::shared_ptr<string> preferredBackupPeriod_ = nullptr;
    // The backup window. Specify the backup window in the HH:mmZ-HH:mmZ format. The backup window must be in UTC. Default value: 00:00-01:00.
    // 
    // This parameter is required.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
    // The frequency of point-in-time backup.
    // 
    // *   1: per hour
    // *   2: per 2 hours
    // *   4: per 4 hours
    // *   8: per 8 hours
    // 
    // Default value: 8.
    std::shared_ptr<string> recoveryPointPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
