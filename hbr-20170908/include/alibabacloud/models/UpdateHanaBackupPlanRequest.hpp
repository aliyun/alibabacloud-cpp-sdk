// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHANABACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHANABACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateHanaBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHanaBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHanaBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateHanaBackupPlanRequest() = default ;
    UpdateHanaBackupPlanRequest(const UpdateHanaBackupPlanRequest &) = default ;
    UpdateHanaBackupPlanRequest(UpdateHanaBackupPlanRequest &&) = default ;
    UpdateHanaBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHanaBackupPlanRequest() = default ;
    UpdateHanaBackupPlanRequest& operator=(const UpdateHanaBackupPlanRequest &) = default ;
    UpdateHanaBackupPlanRequest& operator=(UpdateHanaBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPrefix_ != nullptr
        && this->clusterId_ != nullptr && this->planId_ != nullptr && this->planName_ != nullptr && this->resourceGroupId_ != nullptr && this->schedule_ != nullptr
        && this->vaultId_ != nullptr; };
    // backupPrefix Field Functions 
    bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
    void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
    inline string backupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
    inline UpdateHanaBackupPlanRequest& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateHanaBackupPlanRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateHanaBackupPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateHanaBackupPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateHanaBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateHanaBackupPlanRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateHanaBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup prefix.
    std::shared_ptr<string> backupPrefix_ = nullptr;
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the backup plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the backup plan.
    std::shared_ptr<string> planName_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
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
