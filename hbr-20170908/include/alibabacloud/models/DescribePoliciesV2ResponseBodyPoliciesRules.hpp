// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIESRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIESRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters.hpp>
#include <alibabacloud/models/DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules.hpp>
#include <alibabacloud/models/DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2ResponseBodyPoliciesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2ResponseBodyPoliciesRules& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
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
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2ResponseBodyPoliciesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
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
    DescribePoliciesV2ResponseBodyPoliciesRules() = default ;
    DescribePoliciesV2ResponseBodyPoliciesRules(const DescribePoliciesV2ResponseBodyPoliciesRules &) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRules(DescribePoliciesV2ResponseBodyPoliciesRules &&) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2ResponseBodyPoliciesRules() = default ;
    DescribePoliciesV2ResponseBodyPoliciesRules& operator=(const DescribePoliciesV2ResponseBodyPoliciesRules &) = default ;
    DescribePoliciesV2ResponseBodyPoliciesRules& operator=(DescribePoliciesV2ResponseBodyPoliciesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveDays_ == nullptr
        && return this->backupType_ == nullptr && return this->dataSourceFilters_ == nullptr && return this->immutable_ == nullptr && return this->keepLatestSnapshots_ == nullptr && return this->replicationRegionId_ == nullptr
        && return this->retention_ == nullptr && return this->retentionRules_ == nullptr && return this->ruleId_ == nullptr && return this->ruleType_ == nullptr && return this->schedule_ == nullptr
        && return this->tagFilters_ == nullptr && return this->vaultId_ == nullptr; };
    // archiveDays Field Functions 
    bool hasArchiveDays() const { return this->archiveDays_ != nullptr;};
    void deleteArchiveDays() { this->archiveDays_ = nullptr;};
    inline int64_t archiveDays() const { DARABONBA_PTR_GET_DEFAULT(archiveDays_, 0L) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setArchiveDays(int64_t archiveDays) { DARABONBA_PTR_SET_VALUE(archiveDays_, archiveDays) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // dataSourceFilters Field Functions 
    bool hasDataSourceFilters() const { return this->dataSourceFilters_ != nullptr;};
    void deleteDataSourceFilters() { this->dataSourceFilters_ = nullptr;};
    inline const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters> & dataSourceFilters() const { DARABONBA_PTR_GET_CONST(dataSourceFilters_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters>) };
    inline vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters> dataSourceFilters() { DARABONBA_PTR_GET(dataSourceFilters_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters>) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setDataSourceFilters(const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters> & dataSourceFilters) { DARABONBA_PTR_SET_VALUE(dataSourceFilters_, dataSourceFilters) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setDataSourceFilters(vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters> && dataSourceFilters) { DARABONBA_PTR_SET_RVALUE(dataSourceFilters_, dataSourceFilters) };


    // immutable Field Functions 
    bool hasImmutable() const { return this->immutable_ != nullptr;};
    void deleteImmutable() { this->immutable_ = nullptr;};
    inline bool immutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t keepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // replicationRegionId Field Functions 
    bool hasReplicationRegionId() const { return this->replicationRegionId_ != nullptr;};
    void deleteReplicationRegionId() { this->replicationRegionId_ = nullptr;};
    inline string replicationRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationRegionId_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setReplicationRegionId(string replicationRegionId) { DARABONBA_PTR_SET_VALUE(replicationRegionId_, replicationRegionId) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // retentionRules Field Functions 
    bool hasRetentionRules() const { return this->retentionRules_ != nullptr;};
    void deleteRetentionRules() { this->retentionRules_ = nullptr;};
    inline const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules> & retentionRules() const { DARABONBA_PTR_GET_CONST(retentionRules_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules>) };
    inline vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules> retentionRules() { DARABONBA_PTR_GET(retentionRules_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules>) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setRetentionRules(const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules> & retentionRules) { DARABONBA_PTR_SET_VALUE(retentionRules_, retentionRules) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setRetentionRules(vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules> && retentionRules) { DARABONBA_PTR_SET_RVALUE(retentionRules_, retentionRules) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // tagFilters Field Functions 
    bool hasTagFilters() const { return this->tagFilters_ != nullptr;};
    void deleteTagFilters() { this->tagFilters_ = nullptr;};
    inline const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters> & tagFilters() const { DARABONBA_PTR_GET_CONST(tagFilters_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters>) };
    inline vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters> tagFilters() { DARABONBA_PTR_GET(tagFilters_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters>) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setTagFilters(const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters> & tagFilters) { DARABONBA_PTR_SET_VALUE(tagFilters_, tagFilters) };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setTagFilters(vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters> && tagFilters) { DARABONBA_PTR_SET_RVALUE(tagFilters_, tagFilters) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribePoliciesV2ResponseBodyPoliciesRules& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION**. This parameter indicates the time when data is dumped from a backup vault to an archive vault. Unit: days.
    std::shared_ptr<int64_t> archiveDays_ = nullptr;
    // This parameter is returned only if the value of the **RuleType** parameter is **BACKUP**. This parameter indicates the backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is required only when **RuleType** is set to **TAG**. It defines the data source filtering rule.
    std::shared_ptr<vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesDataSourceFilters>> dataSourceFilters_ = nullptr;
    // This parameter is returned only if the **PolicyType** is **UDM_ECS_ONLY**. This parameter indicates whether the immutable backup feature is enabled.
    std::shared_ptr<bool> immutable_ = nullptr;
    // Indicates whether the feature of keeping at least one backup version is enabled. Valid values:
    // 
    // *   **0**: The feature is disabled.
    // *   **1**: The feature is enabled.
    std::shared_ptr<int64_t> keepLatestSnapshots_ = nullptr;
    // This parameter is returned only if the value of the **RuleType** parameter is **REPLICATION**. This parameter indicates the ID of the destination region.
    std::shared_ptr<string> replicationRegionId_ = nullptr;
    // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION** or **REPLICATION**.
    // 
    // *   If the value of the **RuleType** parameter is **TRANSITION**, this parameter indicates the retention period of the backup data. Minimum value: 1. Unit: days.
    // *   If the value of the **RuleType** parameter is **REPLICATION**, this parameter indicates the retention period of remote backups. Minimum value: 1. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION**. This parameter indicates the special retention rules.
    std::shared_ptr<vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesRetentionRules>> retentionRules_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The type of the rule. Each backup policy must have at least one rule of the **BACKUP** type and only one rule of the **TRANSITION** type. Valid values:
    // 
    // *   **BACKUP**: backup rule
    // *   **TRANSITION**: lifecycle rule
    // *   **REPLICATION**: replication rule
    std::shared_ptr<string> ruleType_ = nullptr;
    // This parameter is returned only if the value of the **RuleType** parameter is **BACKUP**. This parameter indicates the backup schedule settings. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
    // This parameter is required only when **RuleType** is set to **TAG**. It defines the resource tag filtering rule.
    std::shared_ptr<vector<Models::DescribePoliciesV2ResponseBodyPoliciesRulesTagFilters>> tagFilters_ = nullptr;
    // This parameter is returned only if the value of the RuleType parameter is BACKUP. The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
