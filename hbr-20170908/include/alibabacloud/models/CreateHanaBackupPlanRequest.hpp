// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHANABACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHANABACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateHanaBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHanaBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHanaBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateHanaBackupPlanRequest() = default ;
    CreateHanaBackupPlanRequest(const CreateHanaBackupPlanRequest &) = default ;
    CreateHanaBackupPlanRequest(CreateHanaBackupPlanRequest &&) = default ;
    CreateHanaBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHanaBackupPlanRequest() = default ;
    CreateHanaBackupPlanRequest& operator=(const CreateHanaBackupPlanRequest &) = default ;
    CreateHanaBackupPlanRequest& operator=(CreateHanaBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPrefix_ == nullptr
        && return this->backupType_ == nullptr && return this->clusterId_ == nullptr && return this->databaseName_ == nullptr && return this->planName_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->schedule_ == nullptr && return this->vaultId_ == nullptr; };
    // backupPrefix Field Functions 
    bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
    void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
    inline string backupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
    inline CreateHanaBackupPlanRequest& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateHanaBackupPlanRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateHanaBackupPlanRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateHanaBackupPlanRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateHanaBackupPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateHanaBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline CreateHanaBackupPlanRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateHanaBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup prefix.
    std::shared_ptr<string> backupPrefix_ = nullptr;
    // The backup type. Valid values:
    // 
    // *   COMPLETE: full backup
    // *   INCREMENTAL: incremental backup
    // *   DIFFERENTIAL: differential backup
    // 
    // This parameter is required.
    std::shared_ptr<string> backupType_ = nullptr;
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the backup plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` specifies that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   startTime: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds.
    // *   interval: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, PT1H specifies an interval of one hour. P1D specifies an interval of one day.
    // 
    // This parameter is required.
    std::shared_ptr<string> schedule_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
