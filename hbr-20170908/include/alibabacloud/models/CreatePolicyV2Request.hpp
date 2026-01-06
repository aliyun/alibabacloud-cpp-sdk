// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYV2REQUEST_HPP_
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
  class CreatePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreatePolicyV2Request() = default ;
    CreatePolicyV2Request(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request(CreatePolicyV2Request &&) = default ;
    CreatePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyV2Request() = default ;
    CreatePolicyV2Request& operator=(const CreatePolicyV2Request &) = default ;
    CreatePolicyV2Request& operator=(CreatePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(DataSourceFilters, dataSourceFilters_);
        DARABONBA_PTR_TO_JSON(Immutable, immutable_);
        DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
        DARABONBA_PTR_TO_JSON(ReplicationRegionId, replicationRegionId_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(RetentionRules, retentionRules_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
        DARABONBA_PTR_TO_JSON(TagFilters, tagFilters_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(DataSourceFilters, dataSourceFilters_);
        DARABONBA_PTR_FROM_JSON(Immutable, immutable_);
        DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
        DARABONBA_PTR_FROM_JSON(ReplicationRegionId, replicationRegionId_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(RetentionRules, retentionRules_);
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag-based matching rule. Valid values:
        // 
        // *   **EQUAL**: Both the tag key and tag value are matched.
        // *   **NOT**: The tag key is matched and the tag value is not matched.
        shared_ptr<string> operator_ {};
        // The tag value. If you leave this parameter empty, the value is any value.
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
        // *   **DAILY**: retains daily backups
        // *   **WEEKLY**: retains weekly backups
        // *   **MONTHLY**: retains monthly backups
        // *   **YEARLY**: retains yearly backups
        shared_ptr<string> advancedRetentionType_ {};
        // The special retention period of backups. Minimum value: 1. Unit: days.
        shared_ptr<int64_t> retention_ {};
        // Specifies which backup is retained based on the special retention rule. Only the first backup can be retained.
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
        // This parameter is deprecated.
        shared_ptr<vector<string>> dataSourceIds_ {};
        // The type of the data source. Valid values:
        // 
        // *   **UDM_ECS**: Elastic Compute Service (ECS) instance This type of data source is supported only if the **PolicyType** parameter is set to **UDM_ECS_ONLY**.
        // *   **OSS**: Object Storage Service (OSS) bucket This type of data source is supported only if the **PolicyType** parameter is set to **STANDARD**.
        // *   **NAS**: File Storage NAS (NAS) file system This type of data source is supported only if the **PolicyType** parameter is set to **STANDARD**.
        // *   **ECS_FILE**: ECS file This type of data source is supported only if the **PolicyType** parameter is set to **STANDARD**.
        // *   **OTS**: Tablestore instance This type of data source is supported only if the **PolicyType** parameter is set to **STANDARD**.
        shared_ptr<string> sourceType_ {};
      };

      virtual bool empty() const override { return this->backupType_ == nullptr
        && this->dataSourceFilters_ == nullptr && this->immutable_ == nullptr && this->keepLatestSnapshots_ == nullptr && this->replicationRegionId_ == nullptr && this->retention_ == nullptr
        && this->retentionRules_ == nullptr && this->ruleType_ == nullptr && this->schedule_ == nullptr && this->tagFilters_ == nullptr && this->vaultId_ == nullptr; };
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
      // This parameter is required only if the **RuleType** parameter is set to **BACKUP**. This parameter specifies the backup type. Valid value: **COMPLETE**, which indicates full backup.
      shared_ptr<string> backupType_ {};
      // This parameter is required only if the **RuleType** parameter is set to **TAG**. This parameter specifies the data source filter rule.
      shared_ptr<vector<Rules::DataSourceFilters>> dataSourceFilters_ {};
      // This parameter is required only if the **PolicyType** parameter is set to **UDM_ECS_ONLY**. This parameter specifies whether to enable the immutable backup feature.
      shared_ptr<bool> immutable_ {};
      // Specifies whether to enable the feature of keeping at least one backup version. Valid values:
      // 
      // *   0: The feature is disabled.
      // *   1: The feature is enabled.
      shared_ptr<int64_t> keepLatestSnapshots_ {};
      // This parameter is required only if the **RuleType** parameter is set to **REPLICATION**. This parameter specifies the ID of the destination region.
      shared_ptr<string> replicationRegionId_ {};
      // This parameter is required only if the **RuleType** parameter is set to **BACKUP**, **TRANSITION**, or **REPLICATION**.
      // 
      // *   If the **RuleType** parameter is set to **BACKUP**, this parameter specifies the retention period of the backup data. The priority is lower than the retention period when the **RuleType** parameter is set to **TRANSITION**. Minimum value: 1. Maximum value: 364635. Unit: days.
      // *   If the **RuleType** parameter is set to **TRANSITION**, this parameter specifies the retention period of the backup data. Minimum value: 1. Maximum value: 364635. Unit: days.
      // *   If the **RuleType** parameter is set to **REPLICATION**, this parameter specifies the retention period of remote backups. Minimum value: 1. Maximum value: 364635. Unit: days.
      shared_ptr<int64_t> retention_ {};
      // This parameter is required only if the **RuleType** parameter is set to **TRANSITION**. This parameter specifies the special retention rules.
      shared_ptr<vector<Rules::RetentionRules>> retentionRules_ {};
      // The type of the rule. Each backup policy must have at least one rule of the **BACKUP** type and only one rule of the **TRANSITION** type. Valid values:
      // 
      // *   **BACKUP**: backup rule
      // *   **TRANSITION**: lifecycle rule
      // *   **REPLICATION**: replication rule
      // *   **TAG**: tag-based resource association rule
      // 
      // This parameter is required.
      shared_ptr<string> ruleType_ {};
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
      shared_ptr<string> schedule_ {};
      // This parameter is required only if the **RuleType** parameter is set to **TAG**. This parameter specifies the resource tag filter rule.
      shared_ptr<vector<Rules::TagFilters>> tagFilters_ {};
      // This parameter is required only if the RuleType parameter is set to BACKUP. The ID of the backup vault.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->policyDescription_ == nullptr
        && this->policyName_ == nullptr && this->policyType_ == nullptr && this->rules_ == nullptr; };
    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline CreatePolicyV2Request& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyV2Request& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreatePolicyV2Request& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<CreatePolicyV2Request::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CreatePolicyV2Request::Rules>) };
    inline vector<CreatePolicyV2Request::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CreatePolicyV2Request::Rules>) };
    inline CreatePolicyV2Request& setRules(const vector<CreatePolicyV2Request::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline CreatePolicyV2Request& setRules(vector<CreatePolicyV2Request::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The description of the backup policy.
    shared_ptr<string> policyDescription_ {};
    // The name of the backup policy.
    shared_ptr<string> policyName_ {};
    // The policy type. Valid values:
    // 
    // *   **STANDARD**: the general backup policy. This type of policy applies to backups other than Elastic Compute Service (ECS) instance backup.
    // *   **UDM_ECS_ONLY**: This type of policy applies only to ECS instance backup.
    // 
    // If the policy type is not specified, Cloud Backup automatically sets the policy type based on whether the backup vault is specified in the rules of the policy:
    // 
    // *   If the backup vault is specified, Cloud Backup sets the policy type to **STANDARD**.
    // *   If the backup vault is not specified, Cloud Backup sets the policy type to **UDM_ECS_ONLY**.
    shared_ptr<string> policyType_ {};
    // The rules in the backup policy.
    shared_ptr<vector<CreatePolicyV2Request::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
