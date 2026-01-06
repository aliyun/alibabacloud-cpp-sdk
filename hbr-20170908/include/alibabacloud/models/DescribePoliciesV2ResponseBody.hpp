// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePoliciesV2ResponseBody() = default ;
    DescribePoliciesV2ResponseBody(const DescribePoliciesV2ResponseBody &) = default ;
    DescribePoliciesV2ResponseBody(DescribePoliciesV2ResponseBody &&) = default ;
    DescribePoliciesV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2ResponseBody() = default ;
    DescribePoliciesV2ResponseBody& operator=(const DescribePoliciesV2ResponseBody &) = default ;
    DescribePoliciesV2ResponseBody& operator=(DescribePoliciesV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(PolicyBindingCount, policyBindingCount_);
        DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(PolicyBindingCount, policyBindingCount_);
        DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
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
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagFilters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagFilters& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TagFilters& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TagFilters() = default ;
          TagFilters(const TagFilters &) = default ;
          TagFilters(TagFilters &&) = default ;
          TagFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagFilters() = default ;
          TagFilters& operator=(const TagFilters &) = default ;
          TagFilters& operator=(TagFilters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline TagFilters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline TagFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TagFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Tag key
          shared_ptr<string> key_ {};
          // Tag matching rules, supporting: - **EQUAL**: Matches both the tag key and tag value. - **NOT**: Matches the tag key but not the tag value.
          shared_ptr<string> operator_ {};
          // Tag value.
          shared_ptr<string> value_ {};
        };

        class RetentionRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RetentionRules& obj) { 
            DARABONBA_PTR_TO_JSON(AdvancedRetentionType, advancedRetentionType_);
            DARABONBA_PTR_TO_JSON(Retention, retention_);
            DARABONBA_PTR_TO_JSON(WhichSnapshot, whichSnapshot_);
          };
          friend void from_json(const Darabonba::Json& j, RetentionRules& obj) { 
            DARABONBA_PTR_FROM_JSON(AdvancedRetentionType, advancedRetentionType_);
            DARABONBA_PTR_FROM_JSON(Retention, retention_);
            DARABONBA_PTR_FROM_JSON(WhichSnapshot, whichSnapshot_);
          };
          RetentionRules() = default ;
          RetentionRules(const RetentionRules &) = default ;
          RetentionRules(RetentionRules &&) = default ;
          RetentionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RetentionRules() = default ;
          RetentionRules& operator=(const RetentionRules &) = default ;
          RetentionRules& operator=(RetentionRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->advancedRetentionType_ == nullptr
        && this->retention_ == nullptr && this->whichSnapshot_ == nullptr; };
          // advancedRetentionType Field Functions 
          bool hasAdvancedRetentionType() const { return this->advancedRetentionType_ != nullptr;};
          void deleteAdvancedRetentionType() { this->advancedRetentionType_ = nullptr;};
          inline string getAdvancedRetentionType() const { DARABONBA_PTR_GET_DEFAULT(advancedRetentionType_, "") };
          inline RetentionRules& setAdvancedRetentionType(string advancedRetentionType) { DARABONBA_PTR_SET_VALUE(advancedRetentionType_, advancedRetentionType) };


          // retention Field Functions 
          bool hasRetention() const { return this->retention_ != nullptr;};
          void deleteRetention() { this->retention_ = nullptr;};
          inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
          inline RetentionRules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


          // whichSnapshot Field Functions 
          bool hasWhichSnapshot() const { return this->whichSnapshot_ != nullptr;};
          void deleteWhichSnapshot() { this->whichSnapshot_ = nullptr;};
          inline int64_t getWhichSnapshot() const { DARABONBA_PTR_GET_DEFAULT(whichSnapshot_, 0L) };
          inline RetentionRules& setWhichSnapshot(int64_t whichSnapshot) { DARABONBA_PTR_SET_VALUE(whichSnapshot_, whichSnapshot) };


        protected:
          // The type of the special retention rule. Valid values:
          // 
          // *   **WEEKLY**: weekly backups
          // *   **MONTHLY**: monthly backups
          // *   **YEARLY**: yearly backups
          shared_ptr<string> advancedRetentionType_ {};
          // The special retention period of backups. Minimum value: 1. Unit: days.
          shared_ptr<int64_t> retention_ {};
          // Indicates which backup is retained based on the special retention rule. Only the first backup can be retained.
          shared_ptr<int64_t> whichSnapshot_ {};
        };

        class DataSourceFilters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSourceFilters& obj) { 
            DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
            DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          };
          friend void from_json(const Darabonba::Json& j, DataSourceFilters& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
            DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          };
          DataSourceFilters() = default ;
          DataSourceFilters(const DataSourceFilters &) = default ;
          DataSourceFilters(DataSourceFilters &&) = default ;
          DataSourceFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSourceFilters() = default ;
          DataSourceFilters& operator=(const DataSourceFilters &) = default ;
          DataSourceFilters& operator=(DataSourceFilters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataSourceIds_ == nullptr
        && this->sourceType_ == nullptr; };
          // dataSourceIds Field Functions 
          bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
          void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
          inline const vector<string> & getDataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
          inline vector<string> getDataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
          inline DataSourceFilters& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
          inline DataSourceFilters& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline DataSourceFilters& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        protected:
          // Deprecated.
          shared_ptr<vector<string>> dataSourceIds_ {};
          // Data source type. The value range is as follows: 
          // - **UDM_ECS**: Indicates ECS server backup. 
          // - **OSS**: Indicates OSS backup. 
          // - **NAS**: Indicates Alibaba Cloud NAS backup. 
          // - **ECS_FILE**: Indicates ECS file backup. 
          // - **OTS**: Indicates Tablestore backup.
          shared_ptr<string> sourceType_ {};
        };

        virtual bool empty() const override { return this->archiveDays_ == nullptr
        && this->backupType_ == nullptr && this->dataSourceFilters_ == nullptr && this->immutable_ == nullptr && this->keepLatestSnapshots_ == nullptr && this->replicationRegionId_ == nullptr
        && this->retention_ == nullptr && this->retentionRules_ == nullptr && this->ruleId_ == nullptr && this->ruleType_ == nullptr && this->schedule_ == nullptr
        && this->tagFilters_ == nullptr && this->vaultId_ == nullptr; };
        // archiveDays Field Functions 
        bool hasArchiveDays() const { return this->archiveDays_ != nullptr;};
        void deleteArchiveDays() { this->archiveDays_ = nullptr;};
        inline int64_t getArchiveDays() const { DARABONBA_PTR_GET_DEFAULT(archiveDays_, 0L) };
        inline Rules& setArchiveDays(int64_t archiveDays) { DARABONBA_PTR_SET_VALUE(archiveDays_, archiveDays) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Rules& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // dataSourceFilters Field Functions 
        bool hasDataSourceFilters() const { return this->dataSourceFilters_ != nullptr;};
        void deleteDataSourceFilters() { this->dataSourceFilters_ = nullptr;};
        inline const vector<Rules::DataSourceFilters> & getDataSourceFilters() const { DARABONBA_PTR_GET_CONST(dataSourceFilters_, vector<Rules::DataSourceFilters>) };
        inline vector<Rules::DataSourceFilters> getDataSourceFilters() { DARABONBA_PTR_GET(dataSourceFilters_, vector<Rules::DataSourceFilters>) };
        inline Rules& setDataSourceFilters(const vector<Rules::DataSourceFilters> & dataSourceFilters) { DARABONBA_PTR_SET_VALUE(dataSourceFilters_, dataSourceFilters) };
        inline Rules& setDataSourceFilters(vector<Rules::DataSourceFilters> && dataSourceFilters) { DARABONBA_PTR_SET_RVALUE(dataSourceFilters_, dataSourceFilters) };


        // immutable Field Functions 
        bool hasImmutable() const { return this->immutable_ != nullptr;};
        void deleteImmutable() { this->immutable_ = nullptr;};
        inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
        inline Rules& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


        // keepLatestSnapshots Field Functions 
        bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
        void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
        inline int64_t getKeepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
        inline Rules& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


        // replicationRegionId Field Functions 
        bool hasReplicationRegionId() const { return this->replicationRegionId_ != nullptr;};
        void deleteReplicationRegionId() { this->replicationRegionId_ = nullptr;};
        inline string getReplicationRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationRegionId_, "") };
        inline Rules& setReplicationRegionId(string replicationRegionId) { DARABONBA_PTR_SET_VALUE(replicationRegionId_, replicationRegionId) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
        inline Rules& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


        // retentionRules Field Functions 
        bool hasRetentionRules() const { return this->retentionRules_ != nullptr;};
        void deleteRetentionRules() { this->retentionRules_ = nullptr;};
        inline const vector<Rules::RetentionRules> & getRetentionRules() const { DARABONBA_PTR_GET_CONST(retentionRules_, vector<Rules::RetentionRules>) };
        inline vector<Rules::RetentionRules> getRetentionRules() { DARABONBA_PTR_GET(retentionRules_, vector<Rules::RetentionRules>) };
        inline Rules& setRetentionRules(const vector<Rules::RetentionRules> & retentionRules) { DARABONBA_PTR_SET_VALUE(retentionRules_, retentionRules) };
        inline Rules& setRetentionRules(vector<Rules::RetentionRules> && retentionRules) { DARABONBA_PTR_SET_RVALUE(retentionRules_, retentionRules) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline Rules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // schedule Field Functions 
        bool hasSchedule() const { return this->schedule_ != nullptr;};
        void deleteSchedule() { this->schedule_ = nullptr;};
        inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
        inline Rules& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


        // tagFilters Field Functions 
        bool hasTagFilters() const { return this->tagFilters_ != nullptr;};
        void deleteTagFilters() { this->tagFilters_ = nullptr;};
        inline const vector<Rules::TagFilters> & getTagFilters() const { DARABONBA_PTR_GET_CONST(tagFilters_, vector<Rules::TagFilters>) };
        inline vector<Rules::TagFilters> getTagFilters() { DARABONBA_PTR_GET(tagFilters_, vector<Rules::TagFilters>) };
        inline Rules& setTagFilters(const vector<Rules::TagFilters> & tagFilters) { DARABONBA_PTR_SET_VALUE(tagFilters_, tagFilters) };
        inline Rules& setTagFilters(vector<Rules::TagFilters> && tagFilters) { DARABONBA_PTR_SET_RVALUE(tagFilters_, tagFilters) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline Rules& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION**. This parameter indicates the time when data is dumped from a backup vault to an archive vault. Unit: days.
        shared_ptr<int64_t> archiveDays_ {};
        // This parameter is returned only if the value of the **RuleType** parameter is **BACKUP**. This parameter indicates the backup type. Valid value: **COMPLETE**, which indicates full backup.
        shared_ptr<string> backupType_ {};
        // This parameter is required only when **RuleType** is set to **TAG**. It defines the data source filtering rule.
        shared_ptr<vector<Rules::DataSourceFilters>> dataSourceFilters_ {};
        // This parameter is returned only if the **PolicyType** is **UDM_ECS_ONLY**. This parameter indicates whether the immutable backup feature is enabled.
        shared_ptr<bool> immutable_ {};
        // Indicates whether the feature of keeping at least one backup version is enabled. Valid values:
        // 
        // *   **0**: The feature is disabled.
        // *   **1**: The feature is enabled.
        shared_ptr<int64_t> keepLatestSnapshots_ {};
        // This parameter is returned only if the value of the **RuleType** parameter is **REPLICATION**. This parameter indicates the ID of the destination region.
        shared_ptr<string> replicationRegionId_ {};
        // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION** or **REPLICATION**.
        // 
        // *   If the value of the **RuleType** parameter is **TRANSITION**, this parameter indicates the retention period of the backup data. Minimum value: 1. Unit: days.
        // *   If the value of the **RuleType** parameter is **REPLICATION**, this parameter indicates the retention period of remote backups. Minimum value: 1. Unit: days.
        shared_ptr<int64_t> retention_ {};
        // This parameter is returned only if the value of the **RuleType** parameter is **TRANSITION**. This parameter indicates the special retention rules.
        shared_ptr<vector<Rules::RetentionRules>> retentionRules_ {};
        // The rule ID.
        shared_ptr<string> ruleId_ {};
        // The type of the rule. Each backup policy must have at least one rule of the **BACKUP** type and only one rule of the **TRANSITION** type. Valid values:
        // 
        // *   **BACKUP**: backup rule
        // *   **TRANSITION**: lifecycle rule
        // *   **REPLICATION**: replication rule
        shared_ptr<string> ruleType_ {};
        // This parameter is returned only if the value of the **RuleType** parameter is **BACKUP**. This parameter indicates the backup schedule settings. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
        // 
        // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
        // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
        shared_ptr<string> schedule_ {};
        // This parameter is required only when **RuleType** is set to **TAG**. It defines the resource tag filtering rule.
        shared_ptr<vector<Rules::TagFilters>> tagFilters_ {};
        // This parameter is returned only if the value of the RuleType parameter is BACKUP. The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->businessStatus_ == nullptr
        && this->createdTime_ == nullptr && this->policyBindingCount_ == nullptr && this->policyDescription_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->rules_ == nullptr && this->updatedTime_ == nullptr; };
      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline Policies& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Policies& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // policyBindingCount Field Functions 
      bool hasPolicyBindingCount() const { return this->policyBindingCount_ != nullptr;};
      void deletePolicyBindingCount() { this->policyBindingCount_ = nullptr;};
      inline int64_t getPolicyBindingCount() const { DARABONBA_PTR_GET_DEFAULT(policyBindingCount_, 0L) };
      inline Policies& setPolicyBindingCount(int64_t policyBindingCount) { DARABONBA_PTR_SET_VALUE(policyBindingCount_, policyBindingCount) };


      // policyDescription Field Functions 
      bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
      void deletePolicyDescription() { this->policyDescription_ = nullptr;};
      inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
      inline Policies& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Policies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<Policies::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Policies::Rules>) };
      inline vector<Policies::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<Policies::Rules>) };
      inline Policies& setRules(const vector<Policies::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Policies& setRules(vector<Policies::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Policies& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> businessStatus_ {};
      // The time when the backup policy was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The number of data sources that are bound to the backup policy.
      shared_ptr<int64_t> policyBindingCount_ {};
      // The description of the backup policy.
      shared_ptr<string> policyDescription_ {};
      // The ID of the backup policy.
      shared_ptr<string> policyId_ {};
      // The name of the backup policy.
      shared_ptr<string> policyName_ {};
      // The policy type. Valid values:
      // 
      // *   **STANDARD**: the general backup policy. This type of policy applies to backups other than Elastic Compute Service (ECS) instance backup.
      // *   **UDM_ECS_ONLY**: the ECS instance backup policy. This type of policy applies only to ECS instance backup.
      shared_ptr<string> policyType_ {};
      // The rules in the backup policy.
      shared_ptr<vector<Policies::Rules>> rules_ {};
      // The time when the backup policy was updated. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePoliciesV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePoliciesV2ResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePoliciesV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePoliciesV2ResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribePoliciesV2ResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribePoliciesV2ResponseBody::Policies>) };
    inline vector<DescribePoliciesV2ResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribePoliciesV2ResponseBody::Policies>) };
    inline DescribePoliciesV2ResponseBody& setPolicies(const vector<DescribePoliciesV2ResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribePoliciesV2ResponseBody& setPolicies(vector<DescribePoliciesV2ResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePoliciesV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePoliciesV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePoliciesV2ResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The token that is used to obtain the next page of backup policies.
    shared_ptr<string> nextToken_ {};
    // The backup policies.
    shared_ptr<vector<DescribePoliciesV2ResponseBody::Policies>> policies_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
