// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ExecuteBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    ExecuteBackupPlanRequest() = default ;
    ExecuteBackupPlanRequest(const ExecuteBackupPlanRequest &) = default ;
    ExecuteBackupPlanRequest(ExecuteBackupPlanRequest &&) = default ;
    ExecuteBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteBackupPlanRequest() = default ;
    ExecuteBackupPlanRequest& operator=(const ExecuteBackupPlanRequest &) = default ;
    ExecuteBackupPlanRequest& operator=(ExecuteBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->planId_ != nullptr && this->ruleId_ != nullptr && this->sourceType_ != nullptr && this->vaultId_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ExecuteBackupPlanRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ExecuteBackupPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ExecuteBackupPlanRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ExecuteBackupPlanRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline ExecuteBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The ID of the backup plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // The ID of the backup rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS (NAS) file systems
    std::shared_ptr<string> sourceType_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
