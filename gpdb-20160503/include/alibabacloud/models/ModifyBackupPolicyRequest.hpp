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
        && this->DBInstanceId_ == nullptr && this->enableRecoveryPoint_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->recoveryPointPeriod_ == nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ModifyBackupPolicyRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyBackupPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // enableRecoveryPoint Field Functions 
    bool hasEnableRecoveryPoint() const { return this->enableRecoveryPoint_ != nullptr;};
    void deleteEnableRecoveryPoint() { this->enableRecoveryPoint_ = nullptr;};
    inline bool getEnableRecoveryPoint() const { DARABONBA_PTR_GET_DEFAULT(enableRecoveryPoint_, false) };
    inline ModifyBackupPolicyRequest& setEnableRecoveryPoint(bool enableRecoveryPoint) { DARABONBA_PTR_SET_VALUE(enableRecoveryPoint_, enableRecoveryPoint) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // recoveryPointPeriod Field Functions 
    bool hasRecoveryPointPeriod() const { return this->recoveryPointPeriod_ != nullptr;};
    void deleteRecoveryPointPeriod() { this->recoveryPointPeriod_ = nullptr;};
    inline string getRecoveryPointPeriod() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointPeriod_, "") };
    inline ModifyBackupPolicyRequest& setRecoveryPointPeriod(string recoveryPointPeriod) { DARABONBA_PTR_SET_VALUE(recoveryPointPeriod_, recoveryPointPeriod) };


  protected:
    // The number of days for which data backups are retained. Default value: 7. Maximum value: 7. Valid values: 1 to 7.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    // The ID of the instance.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specified region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to enable automatic recovery point creation. Valid values:
    // 
    // - true: Enabled.
    // - false: Disabled.
    // Default value: true.
    shared_ptr<bool> enableRecoveryPoint_ {};
    // The data backup cycle. Separate multiple values with commas (,). Valid values:
    // 
    // - Monday: Monday.
    // - Tuesday: Tuesday.
    // - Wednesday: Wednesday.
    // - Thursday: Thursday.
    // - Friday: Friday.
    // - Saturday: Saturday.
    // - Sunday: Sunday.
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The data backup time. Default value: 00:00Z-01:00Z. Format: HH:mmZ-HH:mmZ (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupTime_ {};
    // The frequency of recovery points. Valid values:
    // 
    // - **1**: Every hour.
    // - **2**: Every two hours.
    // - **4**: Every four hours.
    // - **8**: Every eight hours.
    // Default value: **1**.
    shared_ptr<string> recoveryPointPeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
