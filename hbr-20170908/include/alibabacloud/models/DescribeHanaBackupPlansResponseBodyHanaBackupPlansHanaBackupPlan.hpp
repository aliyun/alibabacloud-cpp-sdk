// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODYHANABACKUPPLANSHANABACKUPPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODYHANABACKUPPLANSHANABACKUPPLAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan() = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan(const DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan &) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan(DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan &&) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan() = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& operator=(const DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan &) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& operator=(DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPrefix_ != nullptr
        && this->backupType_ != nullptr && this->businessStatus_ != nullptr && this->clusterId_ != nullptr && this->databaseName_ != nullptr && this->disabled_ != nullptr
        && this->planId_ != nullptr && this->planName_ != nullptr && this->schedule_ != nullptr && this->vaultId_ != nullptr; };
    // backupPrefix Field Functions 
    bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
    void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
    inline string backupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup prefix.
    std::shared_ptr<string> backupPrefix_ = nullptr;
    // The backup type. Valid values:
    // 
    // *   COMPLETE: full backup
    // *   INCREMENTAL: incremental backup
    // *   DIFFERENTIAL: differential backup
    std::shared_ptr<string> backupType_ = nullptr;
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The ID of the SAP HANA instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Indicates whether the backup plan is disabled. Valid values:
    // 
    // *   true: The backup plan is disabled.
    // *   false: The backup plan is enabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The ID of the backup plan.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the backup plan.
    std::shared_ptr<string> planName_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
