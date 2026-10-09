// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSUPABASEBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSUPABASEBACKUPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySupabaseBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySupabaseBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySupabaseBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableRecoveryPoint, enableRecoveryPoint_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointPeriod, recoveryPointPeriod_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifySupabaseBackupPolicyRequest() = default ;
    ModifySupabaseBackupPolicyRequest(const ModifySupabaseBackupPolicyRequest &) = default ;
    ModifySupabaseBackupPolicyRequest(ModifySupabaseBackupPolicyRequest &&) = default ;
    ModifySupabaseBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySupabaseBackupPolicyRequest() = default ;
    ModifySupabaseBackupPolicyRequest& operator=(const ModifySupabaseBackupPolicyRequest &) = default ;
    ModifySupabaseBackupPolicyRequest& operator=(ModifySupabaseBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupRetentionPeriod_ == nullptr
        && this->enableRecoveryPoint_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->projectId_ == nullptr && this->recoveryPointPeriod_ == nullptr
        && this->regionId_ == nullptr; };
    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ModifySupabaseBackupPolicyRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // enableRecoveryPoint Field Functions 
    bool hasEnableRecoveryPoint() const { return this->enableRecoveryPoint_ != nullptr;};
    void deleteEnableRecoveryPoint() { this->enableRecoveryPoint_ = nullptr;};
    inline bool getEnableRecoveryPoint() const { DARABONBA_PTR_GET_DEFAULT(enableRecoveryPoint_, false) };
    inline ModifySupabaseBackupPolicyRequest& setEnableRecoveryPoint(bool enableRecoveryPoint) { DARABONBA_PTR_SET_VALUE(enableRecoveryPoint_, enableRecoveryPoint) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline ModifySupabaseBackupPolicyRequest& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline ModifySupabaseBackupPolicyRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ModifySupabaseBackupPolicyRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // recoveryPointPeriod Field Functions 
    bool hasRecoveryPointPeriod() const { return this->recoveryPointPeriod_ != nullptr;};
    void deleteRecoveryPointPeriod() { this->recoveryPointPeriod_ = nullptr;};
    inline string getRecoveryPointPeriod() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointPeriod_, "") };
    inline ModifySupabaseBackupPolicyRequest& setRecoveryPointPeriod(string recoveryPointPeriod) { DARABONBA_PTR_SET_VALUE(recoveryPointPeriod_, recoveryPointPeriod) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySupabaseBackupPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The data backup retention period. Unit: days. Valid values: 1 to 7.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    // Specifies whether to enable automatic recovery points. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // If this parameter is not specified, false is used.
    shared_ptr<bool> enableRecoveryPoint_ {};
    // The data backup cycle. Separate multiple values with commas (,). Valid values: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, and Sunday.
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupPeriod_ {};
    // The start time of the data backup. The time is in UTC and follows the HH:mmZ format, such as 01:00Z. The HH:mmZ-HH:mmZ time range format is also supported, and the server uses the start time of the range.
    // 
    // This parameter is required.
    shared_ptr<string> preferredBackupTime_ {};
    // Instance ID of the Supabase instance. You can obtain instance ID on the Supabase page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The interval for the automatic creation of recovery points. Unit: hours. Valid values: 1/6 (10 minutes), 1/2 (30 minutes), 1, 2, 4, and 8. This parameter takes effect only when EnableRecoveryPoint is set to true. If this parameter is not specified, the default value 1 is used. If EnableRecoveryPoint is set to false, this parameter is ignored.
    shared_ptr<string> recoveryPointPeriod_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
