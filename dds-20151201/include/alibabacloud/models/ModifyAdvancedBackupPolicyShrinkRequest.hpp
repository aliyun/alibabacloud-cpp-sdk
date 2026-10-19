// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADVANCEDBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADVANCEDBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyAdvancedBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAdvancedBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedBackupDataPolicies, advancedBackupDataPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(AdvancedBackupLogPolicies, advancedBackupLogPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAdvancedBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedBackupDataPolicies, advancedBackupDataPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(AdvancedBackupLogPolicies, advancedBackupLogPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(SnapshotBackupType, snapshotBackupType_);
    };
    ModifyAdvancedBackupPolicyShrinkRequest() = default ;
    ModifyAdvancedBackupPolicyShrinkRequest(const ModifyAdvancedBackupPolicyShrinkRequest &) = default ;
    ModifyAdvancedBackupPolicyShrinkRequest(ModifyAdvancedBackupPolicyShrinkRequest &&) = default ;
    ModifyAdvancedBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAdvancedBackupPolicyShrinkRequest() = default ;
    ModifyAdvancedBackupPolicyShrinkRequest& operator=(const ModifyAdvancedBackupPolicyShrinkRequest &) = default ;
    ModifyAdvancedBackupPolicyShrinkRequest& operator=(ModifyAdvancedBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedBackupDataPoliciesShrink_ == nullptr
        && this->advancedBackupLogPoliciesShrink_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->DBInstanceId_ == nullptr && this->preferredBackupTime_ == nullptr && this->snapshotBackupType_ == nullptr; };
    // advancedBackupDataPoliciesShrink Field Functions 
    bool hasAdvancedBackupDataPoliciesShrink() const { return this->advancedBackupDataPoliciesShrink_ != nullptr;};
    void deleteAdvancedBackupDataPoliciesShrink() { this->advancedBackupDataPoliciesShrink_ = nullptr;};
    inline string getAdvancedBackupDataPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedBackupDataPoliciesShrink_, "") };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setAdvancedBackupDataPoliciesShrink(string advancedBackupDataPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advancedBackupDataPoliciesShrink_, advancedBackupDataPoliciesShrink) };


    // advancedBackupLogPoliciesShrink Field Functions 
    bool hasAdvancedBackupLogPoliciesShrink() const { return this->advancedBackupLogPoliciesShrink_ != nullptr;};
    void deleteAdvancedBackupLogPoliciesShrink() { this->advancedBackupLogPoliciesShrink_ = nullptr;};
    inline string getAdvancedBackupLogPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedBackupLogPoliciesShrink_, "") };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setAdvancedBackupLogPoliciesShrink(string advancedBackupLogPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advancedBackupLogPoliciesShrink_, advancedBackupLogPoliciesShrink) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline int32_t getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, 0) };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setBackupRetentionPolicyOnClusterDeletion(int32_t backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // snapshotBackupType Field Functions 
    bool hasSnapshotBackupType() const { return this->snapshotBackupType_ != nullptr;};
    void deleteSnapshotBackupType() { this->snapshotBackupType_ = nullptr;};
    inline string getSnapshotBackupType() const { DARABONBA_PTR_GET_DEFAULT(snapshotBackupType_, "") };
    inline ModifyAdvancedBackupPolicyShrinkRequest& setSnapshotBackupType(string snapshotBackupType) { DARABONBA_PTR_SET_VALUE(snapshotBackupType_, snapshotBackupType) };


  protected:
    // The list of backup policies.
    shared_ptr<string> advancedBackupDataPoliciesShrink_ {};
    // The list of log backup policies.
    shared_ptr<string> advancedBackupLogPoliciesShrink_ {};
    // The backup retention policy. Valid values:
    // 
    // - 0: All backup sets of the instance are deleted immediately when the instance is released.
    // - 1: The last backup set is retained for long-term retention (LTR) when the instance is released.
    // - 2: All backup sets are retained for long-term retention (LTR) when the instance is released.
    // 
    // This parameter is required.
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The time period during which the backup is performed. The format is <i>HH:mm</i>Z-<i>HH:mm</i>Z (UTC).
    // 
    // > The time range is limited to 1 hour.
    shared_ptr<string> preferredBackupTime_ {};
    // The snapshot backup type. Valid values:
    // 
    // - **Flash**: backup within seconds.
    // - **Standard**: standard backup. This is the default value.
    shared_ptr<string> snapshotBackupType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
