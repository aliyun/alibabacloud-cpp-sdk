// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(RequireNoRunningJobs, requireNoRunningJobs_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(RequireNoRunningJobs, requireNoRunningJobs_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DeleteBackupPlanRequest() = default ;
    DeleteBackupPlanRequest(const DeleteBackupPlanRequest &) = default ;
    DeleteBackupPlanRequest(DeleteBackupPlanRequest &&) = default ;
    DeleteBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupPlanRequest() = default ;
    DeleteBackupPlanRequest& operator=(const DeleteBackupPlanRequest &) = default ;
    DeleteBackupPlanRequest& operator=(DeleteBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->planId_ != nullptr && this->requireNoRunningJobs_ != nullptr && this->sourceType_ != nullptr && this->vaultId_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DeleteBackupPlanRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DeleteBackupPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // requireNoRunningJobs Field Functions 
    bool hasRequireNoRunningJobs() const { return this->requireNoRunningJobs_ != nullptr;};
    void deleteRequireNoRunningJobs() { this->requireNoRunningJobs_ = nullptr;};
    inline bool requireNoRunningJobs() const { DARABONBA_PTR_GET_DEFAULT(requireNoRunningJobs_, false) };
    inline DeleteBackupPlanRequest& setRequireNoRunningJobs(bool requireNoRunningJobs) { DARABONBA_PTR_SET_VALUE(requireNoRunningJobs_, requireNoRunningJobs) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DeleteBackupPlanRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DeleteBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The ID of the backup plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // Specifies whether no running jobs are required.
    std::shared_ptr<bool> requireNoRunningJobs_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **UDM_ECS**: ECS instances
    // *   **OTS**: Tablestore instances
    std::shared_ptr<string> sourceType_ = nullptr;
    // The ID of the backup vault. This parameter is required if the SourceType parameter is not set to UDM_ECS.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
