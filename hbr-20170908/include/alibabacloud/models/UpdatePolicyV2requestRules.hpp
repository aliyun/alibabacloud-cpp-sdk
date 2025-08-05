// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYV2REQUESTRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePolicyV2RequestRulesDataSourceFilters.hpp>
#include <alibabacloud/models/UpdatePolicyV2RequestRulesRetentionRules.hpp>
#include <alibabacloud/models/UpdatePolicyV2RequestRulesTagFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyV2RequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyV2RequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ColdArchiveDays, coldArchiveDays_);
      DARABONBA_PTR_TO_JSON(DataSourceFilters, dataSourceFilters_);
      DARABONBA_PTR_TO_JSON(Immutable, immutable_);
      DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_TO_JSON(ReplicationRegionId, replicationRegionId_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(RetentionRules, retentionRules_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(TagFilters, tagFilters_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyV2RequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ColdArchiveDays, coldArchiveDays_);
      DARABONBA_PTR_FROM_JSON(DataSourceFilters, dataSourceFilters_);
      DARABONBA_PTR_FROM_JSON(Immutable, immutable_);
      DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_FROM_JSON(ReplicationRegionId, replicationRegionId_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(RetentionRules, retentionRules_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(TagFilters, tagFilters_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdatePolicyV2RequestRules() = default ;
    UpdatePolicyV2RequestRules(const UpdatePolicyV2RequestRules &) = default ;
    UpdatePolicyV2RequestRules(UpdatePolicyV2RequestRules &&) = default ;
    UpdatePolicyV2RequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyV2RequestRules() = default ;
    UpdatePolicyV2RequestRules& operator=(const UpdatePolicyV2RequestRules &) = default ;
    UpdatePolicyV2RequestRules& operator=(UpdatePolicyV2RequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveDays_ != nullptr
        && this->backupType_ != nullptr && this->coldArchiveDays_ != nullptr && this->dataSourceFilters_ != nullptr && this->immutable_ != nullptr && this->keepLatestSnapshots_ != nullptr
        && this->replicationRegionId_ != nullptr && this->retention_ != nullptr && this->retentionRules_ != nullptr && this->ruleId_ != nullptr && this->ruleType_ != nullptr
        && this->schedule_ != nullptr && this->tagFilters_ != nullptr && this->vaultId_ != nullptr; };
    // archiveDays Field Functions 
    bool hasArchiveDays() const { return this->archiveDays_ != nullptr;};
    void deleteArchiveDays() { this->archiveDays_ = nullptr;};
    inline int64_t archiveDays() const { DARABONBA_PTR_GET_DEFAULT(archiveDays_, 0L) };
    inline UpdatePolicyV2RequestRules& setArchiveDays(int64_t archiveDays) { DARABONBA_PTR_SET_VALUE(archiveDays_, archiveDays) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline UpdatePolicyV2RequestRules& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // coldArchiveDays Field Functions 
    bool hasColdArchiveDays() const { return this->coldArchiveDays_ != nullptr;};
    void deleteColdArchiveDays() { this->coldArchiveDays_ = nullptr;};
    inline int64_t coldArchiveDays() const { DARABONBA_PTR_GET_DEFAULT(coldArchiveDays_, 0L) };
    inline UpdatePolicyV2RequestRules& setColdArchiveDays(int64_t coldArchiveDays) { DARABONBA_PTR_SET_VALUE(coldArchiveDays_, coldArchiveDays) };


    // dataSourceFilters Field Functions 
    bool hasDataSourceFilters() const { return this->dataSourceFilters_ != nullptr;};
    void deleteDataSourceFilters() { this->dataSourceFilters_ = nullptr;};
    inline const vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters> & dataSourceFilters() const { DARABONBA_PTR_GET_CONST(dataSourceFilters_, vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters>) };
    inline vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters> dataSourceFilters() { DARABONBA_PTR_GET(dataSourceFilters_, vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters>) };
    inline UpdatePolicyV2RequestRules& setDataSourceFilters(const vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters> & dataSourceFilters) { DARABONBA_PTR_SET_VALUE(dataSourceFilters_, dataSourceFilters) };
    inline UpdatePolicyV2RequestRules& setDataSourceFilters(vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters> && dataSourceFilters) { DARABONBA_PTR_SET_RVALUE(dataSourceFilters_, dataSourceFilters) };


    // immutable Field Functions 
    bool hasImmutable() const { return this->immutable_ != nullptr;};
    void deleteImmutable() { this->immutable_ = nullptr;};
    inline bool immutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
    inline UpdatePolicyV2RequestRules& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t keepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline UpdatePolicyV2RequestRules& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // replicationRegionId Field Functions 
    bool hasReplicationRegionId() const { return this->replicationRegionId_ != nullptr;};
    void deleteReplicationRegionId() { this->replicationRegionId_ = nullptr;};
    inline string replicationRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationRegionId_, "") };
    inline UpdatePolicyV2RequestRules& setReplicationRegionId(string replicationRegionId) { DARABONBA_PTR_SET_VALUE(replicationRegionId_, replicationRegionId) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline UpdatePolicyV2RequestRules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // retentionRules Field Functions 
    bool hasRetentionRules() const { return this->retentionRules_ != nullptr;};
    void deleteRetentionRules() { this->retentionRules_ = nullptr;};
    inline const vector<Models::UpdatePolicyV2RequestRulesRetentionRules> & retentionRules() const { DARABONBA_PTR_GET_CONST(retentionRules_, vector<Models::UpdatePolicyV2RequestRulesRetentionRules>) };
    inline vector<Models::UpdatePolicyV2RequestRulesRetentionRules> retentionRules() { DARABONBA_PTR_GET(retentionRules_, vector<Models::UpdatePolicyV2RequestRulesRetentionRules>) };
    inline UpdatePolicyV2RequestRules& setRetentionRules(const vector<Models::UpdatePolicyV2RequestRulesRetentionRules> & retentionRules) { DARABONBA_PTR_SET_VALUE(retentionRules_, retentionRules) };
    inline UpdatePolicyV2RequestRules& setRetentionRules(vector<Models::UpdatePolicyV2RequestRulesRetentionRules> && retentionRules) { DARABONBA_PTR_SET_RVALUE(retentionRules_, retentionRules) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdatePolicyV2RequestRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline UpdatePolicyV2RequestRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdatePolicyV2RequestRules& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // tagFilters Field Functions 
    bool hasTagFilters() const { return this->tagFilters_ != nullptr;};
    void deleteTagFilters() { this->tagFilters_ = nullptr;};
    inline const vector<Models::UpdatePolicyV2RequestRulesTagFilters> & tagFilters() const { DARABONBA_PTR_GET_CONST(tagFilters_, vector<Models::UpdatePolicyV2RequestRulesTagFilters>) };
    inline vector<Models::UpdatePolicyV2RequestRulesTagFilters> tagFilters() { DARABONBA_PTR_GET(tagFilters_, vector<Models::UpdatePolicyV2RequestRulesTagFilters>) };
    inline UpdatePolicyV2RequestRules& setTagFilters(const vector<Models::UpdatePolicyV2RequestRulesTagFilters> & tagFilters) { DARABONBA_PTR_SET_VALUE(tagFilters_, tagFilters) };
    inline UpdatePolicyV2RequestRules& setTagFilters(vector<Models::UpdatePolicyV2RequestRulesTagFilters> && tagFilters) { DARABONBA_PTR_SET_RVALUE(tagFilters_, tagFilters) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdatePolicyV2RequestRules& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // This parameter is required only if the **RuleType** parameter is set to **TRANSITION**. This parameter specifies the time when data is dumped from a backup vault to an archive vault. Unit: days.
    std::shared_ptr<int64_t> archiveDays_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **BACKUP**. This parameter specifies the backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **TRANSITION**. This parameter specifies the time when data is dumped from a backup vault to a cold archive vault. Unit: days.
    std::shared_ptr<int64_t> coldArchiveDays_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **TAG**. This parameter specifies the data source filter rule.
    std::shared_ptr<vector<Models::UpdatePolicyV2RequestRulesDataSourceFilters>> dataSourceFilters_ = nullptr;
    // This parameter is required only if the **PolicyType** parameter is set to **UDM_ECS_ONLY**. This parameter specifies whether to enable the immutable backup feature.
    std::shared_ptr<bool> immutable_ = nullptr;
    // Specifies whether to enable the feature of keeping at least one backup version. Valid values:
    // 
    // *   0: The feature is disabled.
    // *   1: The feature is enabled.
    std::shared_ptr<int64_t> keepLatestSnapshots_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **REPLICATION**. This parameter specifies the ID of the destination region.
    std::shared_ptr<string> replicationRegionId_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **TRANSITION** or **REPLICATION**.
    // 
    // *   If the **RuleType** parameter is set to **TRANSITION**, this parameter specifies the retention period of the backup data. Minimum value: 1. Unit: days.
    // *   If the **RuleType** parameter is set to **REPLICATION**, this parameter specifies the retention period of remote backups. Minimum value: 1. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **TRANSITION**. This parameter specifies the special retention rules.
    std::shared_ptr<vector<Models::UpdatePolicyV2RequestRulesRetentionRules>> retentionRules_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The type of the rule. Each backup policy must have at least one rule of the **BACKUP** type and only one rule of the **TRANSITION** type. Valid values:
    // 
    // *   **BACKUP**: backup rule
    // *   **TRANSITION**: lifecycle rule
    // *   **REPLICATION**: replication rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **BACKUP**. This parameter specifies the backup schedule settings. Formats:
    // 
    // *   `I|{startTime}|{interval}`: The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    //     *   startTime: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds.
    //     *   interval: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, `PT1H` specifies an interval of 1 hour. `P1D` specifies an interval of one day.
    // 
    // *   `C|{startTime}|{crontab}`: The system runs backup jobs at a point in time that is specified in the {startTime} parameter based on the {crontab} expression. For example, C|1631685600|0 0 2 ?\\* 3,5,7 indicates that the system runs backup jobs at 02:00:00 every Tuesday, Thursday, and Saturday from14:00:00 on September 15, 2021.``
    // 
    //     *   startTime: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds.
    //     *   crontab: the crontab expression. For example, 0 0 2 ?\\* 3,5,7 indicates 02:00:00 every Tuesday, Thursday, and Saturday.``
    // 
    // The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed.
    std::shared_ptr<string> schedule_ = nullptr;
    // This parameter is required only if the **RuleType** parameter is set to **TAG**. This parameter specifies the resource tag filter rule.
    std::shared_ptr<vector<Models::UpdatePolicyV2RequestRulesTagFilters>> tagFilters_ = nullptr;
    // This parameter is required only if the RuleType parameter is set to BACKUP. The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
